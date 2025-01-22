#include <stdexcept>
#include <format>
#include <thread>

#include <polyhook2/Detour/x64Detour.hpp>
#include <polyhook2/ErrorLog.hpp>

#include <Helpers/Casting.hpp>
#include <Helpers/Integer.hpp>
#include <SigScanner/SinglePassSigScanner.hpp>
#include <DynamicOutput/DynamicOutput.hpp>
#include <Unreal/UnrealInitializer.hpp>
#include <Unreal/VersionedContainer/Container.hpp>
#include <Unreal/VersionedContainer/UnrealVirtualImpl/UnrealVirtualBase.hpp>
#include <Unreal/UnrealVersion.hpp>
#include <Unreal/Signatures.hpp>
#include <Unreal/Hooks.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/UEngine.hpp>
#include <Unreal/UClass.hpp>
#include <Unreal/FString.hpp>
#include <Unreal/FMemory.hpp>
#include <Unreal/FAssetData.hpp>
#include <Unreal/AActor.hpp>
#include <Unreal/UFunction.hpp>
#include <Unreal/AGameModeBase.hpp>
#include <Unreal/ULocalPlayer.hpp>
#include <Unreal/Searcher/ObjectSearcher.hpp>
#include <Unreal/ClassListener.hpp>
#include <Zydis/Zydis.h>


#include <algorithm>

namespace RC::Unreal::UnrealInitializer
{
    std::filesystem::path StaticStorage::GameExe;
    bool StaticStorage::bIsInitialized{false};
    bool StaticStorage::bVersionedContainerIsInitialized{false};
    Config StaticStorage::GlobalConfig{};

    auto InitializeVersionedContainer() -> void
    {
        Container::SetDerivedBaseObjects();
        Container::UnrealVirtualVC->set_virtual_offsets();
        StaticStorage::bVersionedContainerIsInitialized = true;
    }

    auto static PostInitialize(const Config& UnrealConfig) -> void
    {
        if (!GMalloc && FMalloc::UnrealStaticGMalloc)
        {
            GMalloc = *FMalloc::UnrealStaticGMalloc;
            Output::send(SYSSTR("Post-initialization: GMalloc: {} -> {}\n"), (void*)FMalloc::UnrealStaticGMalloc, (void*)GMalloc);
        }

        if (!GMalloc || !FMalloc::UnrealStaticGMalloc)
        {
            throw std::runtime_error{"UnrealInitializer::PostInitialize: GMalloc or FMalloc::UnrealStaticGMalloc is uninitialized."};
        }

        // FAssetData was not reflected before 4.17
        // We'll need to manually add FAssetData for every engine version eventually
        if (Version::IsAtLeast(4, 17))
        {
            if (FAssetData::FAssetDataAssumedStaticSize < FAssetData::StaticSize())
            {
                throw std::runtime_error{"Tell a developer: FAssetData::StaticSize is too small to hold the entire struct"};
            }
        }

        if (UnrealConfig.bUseUObjectArrayCache)
        {
            // Construct searcher pools
            AllSearcherPools.emplace(HashSearcherKey<UClass, AnySuperStruct>(), std::make_unique<ObjectSearcherPool<UClass, AnySuperStruct>>());
            AllSearcherPools.emplace(HashSearcherKey<UClass, AActor>(), std::make_unique<ObjectSearcherPool<UClass, AActor>>());
            AllSearcherPools.emplace(HashSearcherKey<AActor, AnySuperStruct>(), std::make_unique<ObjectSearcherPool<AActor, AnySuperStruct>>());

            // Populate searcher pools
            UObjectGlobals::ForEachUObject([](UObject* Object, ...) {
                auto* ObjectItem = Object->GetObjectItem();

                if (Object->IsA<UClass>())
                {
                    ObjectSearcherPool<UClass, AnySuperStruct>::Pool.emplace_back(ObjectItem);

                    if (static_cast<UClass*>(Object)->IsChildOf<AActor>())
                    {
                        ObjectSearcherPool<UClass, AActor>::Pool.emplace_back(ObjectItem);
                    }
                }

                if (Object->IsA<AActor>())
                {
                    ObjectSearcherPool<AActor, AnySuperStruct>::Pool.emplace_back(ObjectItem);
                }

                return LoopAction::Continue;
            });

            Output::send(SYSSTR("Adding GUObjectArray listeners\n"));
            UObjectArray::AddUObjectCreateListener(&FClassCreateListener::ClassCreateListener);
            UObjectArray::AddUObjectDeleteListener(&FClassDeleteListener::ClassDeleteListener);
        }

        StaticStorage::bIsInitialized = true;
    }

    struct PsScanConfig
    {
        bool g_uobject_array{};
        bool fname_tostring_fstring{};
        bool fname_ctor_wchar{};
        bool gmalloc{};
        bool static_construct_object_internal{};
        bool ftext_fstring{};
        bool engine_version{};
    };

    struct PsCtx
    {
        void (*default_)(char16_t* msg);
        void (*normal)(char16_t* msg);
        void (*verbose)(char16_t* msg);
        void (*warning)(char16_t* msg);
        void (*error)(char16_t* msg);
        PsScanConfig config{};
    };

    struct PsEngineVersion
    {
        uint16_t major{};
        uint16_t minor{};
    };

    struct PsScanResults
    {
        void* g_uobject_array{};
        void* fname_tostring_fstring{};
        void* fname_ctor_wchar{};
        void* gmalloc{};
        void* static_construct_object_internal{};
        void* ftext_fstring{};
        PsEngineVersion engine_version{};
    };

    extern "C" {
        bool ps_scan(PsCtx& ctx, PsScanResults& results);
    }

    auto Initialize(const Config& UnrealConfig) -> void
    {
        StaticStorage::GlobalConfig = UnrealConfig;
        // Setup scanner
        fprintf(stderr, "Setup scanner\n");
        SinglePassScanner::m_num_threads = UnrealConfig.NumScanThreads;
        SinglePassScanner::m_multithreading_module_size_threshold = UnrealConfig.MultithreadingModuleSizeThreshold;

        // Setup all modules for the aob scanner
        // This is currently done outside the Unreal API in order to over come a problem
        // TODO: Put an option here to check if the modules are initialized and initialize if they aren't
        fprintf(stderr, "SetupUnrealModules\n");
        Platform::SetupUnrealModules();
        fprintf(stderr, "SetupUnrealModules\n");

        enum class OutputErrorsByThrowing { Yes, No };
        enum class ErrorsOnly { Yes, No };

        size_t scan_count{};

        PsScanConfig config{};
        config.g_uobject_array = !UnrealConfig.ScanOverrides.guobjectarray;
        config.fname_tostring_fstring = !UnrealConfig.ScanOverrides.fname_to_string;
        config.fname_ctor_wchar = !UnrealConfig.ScanOverrides.fname_constructor;
        config.gmalloc = !UnrealConfig.ScanOverrides.fmemory_free;
        config.static_construct_object_internal = !UnrealConfig.ScanOverrides.static_construct_object;
        config.ftext_fstring = !UnrealConfig.ScanOverrides.ftext_constructor;
        config.engine_version = !UnrealConfig.ScanOverrides.version_finder;

        fprintf(stderr, "Ps Scan Before\n");
        PsCtx ctx {
            [](char16_t* msg){ Output::send<LogLevel::Default>(SYSSTR("[PS] {}\n"), to_system(msg)); },
            [](char16_t* msg){ Output::send<LogLevel::Normal>(SYSSTR("[PS] {}\n"), to_system(msg)); },
            [](char16_t* msg){ Output::send<LogLevel::Verbose>(SYSSTR("[PS] {}\n"), to_system(msg)); },
            [](char16_t* msg){ Output::send<LogLevel::Warning>(SYSSTR("[PS] {}\n"), to_system(msg)); },
            [](char16_t* msg){ Output::send<LogLevel::Error>(SYSSTR("[PS] {}\n"), to_system(msg)); },
            config,
        };

        PsScanResults results{};

        auto start = std::chrono::steady_clock::now();
        while (true)
        {
            Output::send<LogLevel::Verbose>(SYSSTR("PS Scan attempt {}\n"), scan_count + 1);

            if (ps_scan(ctx, results))
            {
                // All of the requested resolvers were found so break and continue
                Output::send<LogLevel::Default>(SYSSTR("PS scan successful\n"));
                break;
            }

            if (std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - start).count() > UnrealConfig.SecondsToScanBeforeGivingUp)
            {
                fprintf(stderr, "Ps Scan timed out\n");
                throw std::runtime_error{"PS scan timed out"};
            }
            ++scan_count;
        }


        fprintf(stderr, "Ps Scan Finish\n");
        auto OutputResult = [](Signatures::ScanResult& ScanResult, OutputErrorsByThrowing OutputErrorsByThrowing = OutputErrorsByThrowing::No, ErrorsOnly ErrorsOnly = ErrorsOnly::No) {
            if (ScanResult.Status == Signatures::ScanStatus::Failed)
            {
                std::string AllErrors{"AOB scans could not be completed because of the following reasons:\n"};
                std::string FatalErrors{};
                std::string NonFatalErrors{};
                for (const auto& Error : ScanResult.Errors)
                {
                    if (Error.bIsFatal)
                    {
                        FatalErrors.append(Error.Message + "\n\n");
                    }
                    else
                    {
                        NonFatalErrors.append(Error.Message + "\n\n");
                    }
                }

                AllErrors.append(FatalErrors);
                AllErrors.append(NonFatalErrors);

                if (!FatalErrors.empty() && OutputErrorsByThrowing == OutputErrorsByThrowing::Yes)
                {
                    throw std::runtime_error{AllErrors};
                }
                else
                {
                    Output::send(to_system(AllErrors));
                }
            }

            if (ErrorsOnly == ErrorsOnly::No)
            {
                for (const auto& SuccessMessage : ScanResult.SuccessMessage)
                {
                    Output::send(SuccessMessage);
                }

                for (const auto& InfoMessage : ScanResult.InfoMessages)
                {
                    Output::send(SYSSTR("Info: {}"), InfoMessage);
                }
            }
        };

        fprintf(stderr, "Single Pass Scan Start\n");
        SinglePassScanner::m_scan_method = UnrealConfig.ScanMethod;
        auto DoScan = [&](auto ScannerFunction) {
            Signatures::ScanResult ScanResult{};
            size_t scan_count{};
            auto start = std::chrono::steady_clock::now();
            while (std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - start).count() < UnrealConfig.SecondsToScanBeforeGivingUp)
            {
                Output::send<LogLevel::Verbose>(SYSSTR("Lua Scan attempt {}\n"), scan_count + 1);

                ScanResult = ScannerFunction(UnrealConfig);
                OutputResult(ScanResult);

                bool bHasFatalError{};
                for (const auto& Error : ScanResult.Errors)
                {
                    if (Error.bIsFatal)
                    {
                        bHasFatalError = true;
                        break;
                    }
                }
                if (!bHasFatalError) { break; }
                ++scan_count;
            }

            OutputResult(ScanResult, OutputErrorsByThrowing::Yes, ErrorsOnly::Yes);
        };

        fprintf(stderr, "First Pass\n");
        // First pass
        {
            if (ctx.config.engine_version)
            {
                Version::Major = results.engine_version.major;
                Version::Minor = results.engine_version.minor;
            }
            if (ctx.config.fname_tostring_fstring)
            {
                FName::ToStringInternal.assign_address(results.fname_tostring_fstring);
            }
            if (ctx.config.static_construct_object_internal)
            {
                UObjectGlobals::SetupStaticConstructObjectInternalAddress(results.static_construct_object_internal);
            }

            // If there are any overrides in the first pass then scan for them
            // engine_version omitted from this check as is not actually a scan and sets the version directly from the config
            if (!ctx.config.fname_tostring_fstring ||
                !ctx.config.static_construct_object_internal)
            {
                Output::send<LogLevel::Default>(SYSSTR("Running first pass of Lua override scans\n"));
                DoScan(&Signatures::ScanForGameFunctionsAndData);
            }
        }

        fprintf(stderr, "InitializeVersionedContainer\n");
        InitializeVersionedContainer();

        // Second pass
        {
            if (ctx.config.fname_ctor_wchar)
            {
                FName::ConstructorInternal.assign_address(results.fname_ctor_wchar);
            }
            if (ctx.config.gmalloc)
            {
                FMalloc::UnrealStaticGMalloc = std::bit_cast<FMalloc**>(results.gmalloc);
                GMalloc = *FMalloc::UnrealStaticGMalloc;
            }
            if (ctx.config.g_uobject_array)
            {
                UObjectArray::SetupGUObjectArrayAddress(results.g_uobject_array);
            }
            if (ctx.config.ftext_fstring)
            {
                FText::ConstructorInternal.assign_address(results.ftext_fstring);
            }

            // If there are any overrides in the second pass then scan for them
            if (!ctx.config.fname_ctor_wchar ||
                !ctx.config.gmalloc ||
                !ctx.config.g_uobject_array ||
                !ctx.config.ftext_fstring)
            {
                Output::send<LogLevel::Default>(SYSSTR("Running second pass of Lua override scans\n"));
                DoScan(&Signatures::ScanForGUObjectArray);
            }
        }

        // Objects that are required to exist before we can continue
        Hook::AddRequiredObject(STR("/Script/CoreUObject.Class"));
        Hook::AddRequiredObject(STR("/Script/CoreUObject"));
        Hook::AddRequiredObject(STR("/Script/CoreUObject.Struct"));
        Hook::AddRequiredObject(STR("/Script/Engine.Pawn"));
        Hook::AddRequiredObject(STR("/Script/Engine.Character"));
        Hook::AddRequiredObject(STR("/Script/Engine.Actor"));
        Hook::AddRequiredObject(STR("/Script/CoreUObject.Vector"));
        Hook::AddRequiredObject(STR("/Script/Engine.Default__DefaultPawn"));
        Hook::AddRequiredObject(STR("/Script/Engine.HitResult"));
        Hook::AddRequiredObject(STR("/Script/Engine.Default__MaterialExpression"));
        Hook::AddRequiredObject(STR("/Script/Engine.ActorComponent"));
        Hook::AddRequiredObject(STR("/Script/CoreUObject.OrientedBox"));
        Hook::AddRequiredObject(STR("/Script/Engine.MovementComponent"));
        Hook::AddRequiredObject(STR("/Script/Engine.HUD"));
        Hook::AddRequiredObject(STR("/Script/Engine.PlayerController"));
        Hook::AddRequiredObject(STR("/Script/Engine.PlayerCameraManager"));
        Hook::AddRequiredObject(STR("/Script/CoreUObject.EInterpCurveMode"));
        Hook::AddRequiredObject(STR("/Script/Engine.ENetRole"));
        Hook::AddRequiredObject(STR("/Script/MovieScene.MovieSceneEditorData"));
        Hook::AddRequiredObject(STR("/Script/UMG.Widget"));
        Hook::AddRequiredObject(STR("/Script/UMG.ComboBoxString"));
        Hook::AddRequiredObject(STR("/Script/CoreUObject.Interface"));
        Hook::AddRequiredObject(STR("/Script/CoreUObject.DynamicClass"));

        if (!Hook::AllRequiredObjectsConstructed())
        {
            for (int32_t i = 0; i < 2000 && !Hook::StaticStorage::bAllRequiredObjectsConstructed; ++i)
            {
                // The control variable for this loop is controlled from the game thread in a
                // hook created in the function call right above this loop

                if (Hook::StaticStorage::RequiredObjectsForInit.empty()) { break; }
                for (auto& RequiredObject : Hook::StaticStorage::RequiredObjectsForInit)
                {
                    if (Hook::StaticStorage::NumRequiredObjectsConstructed >= Hook::StaticStorage::RequiredObjectsForInit.size())
                    {
                        Hook::StaticStorage::bAllRequiredObjectsConstructed = true;
                        break;
                    }

                    if (RequiredObject.ObjectConstructed) { continue; }

                    UObject* required_object_ptr = UObjectGlobals::StaticFindObject_InternalSlow(nullptr, nullptr, RequiredObject.ObjectName.c_str());
                    if (required_object_ptr)
                    {
                        RequiredObject.ObjectConstructed = true;
                        ++Hook::StaticStorage::NumRequiredObjectsConstructed;
                        Output::send(SYSSTR("Constructed [{} / {}]: {}\n"), Hook::StaticStorage::NumRequiredObjectsConstructed, Hook::StaticStorage::RequiredObjectsForInit.size(), RequiredObject.ObjectName);
                    }
                }

                // Sleeping here will prevent this loop from getting optimized away
                // It will also prevent unnecessarily high CPU usage
                std::this_thread::sleep_for(std::chrono::milliseconds(250));
            }
        }

        auto* Object = UObjectGlobals::StaticFindObject_InternalSlow(nullptr, nullptr, STR("/Script/CoreUObject.Default__Object"));
        if (!Object)
        {
            throw std::runtime_error{"Post-initialization: Was unable to find 'CoreUObject.Default__Object' to use to retrieve the address of ProcessEvent"};
        }

        auto* Struct = UObjectGlobals::StaticFindObject_InternalSlow(nullptr, nullptr, STR("/Script/CoreUObject.Default__Struct"));
        if (!Struct)
        {
            throw std::runtime_error{"Post-initialization: Was unable to find 'CoreUObject.Default__Struct' to use to retrieve the address of SetSuperStruct"};
        }
        
        auto* Engine = UObjectGlobals::StaticFindObject_InternalSlow(nullptr, nullptr, STR("/Script/Engine.Default__Engine"));
        if (!Engine)
        {
            throw std::runtime_error{"Post-initialization: Was unable to find 'Engine.Default__Engine' to use to retrieve the address of LoadMap"};
        }

        auto* GameMode = UObjectGlobals::StaticFindObject_InternalSlow(nullptr, nullptr, STR("/Script/Engine.Default__GameMode"));
        if (!GameMode)
        {
            throw std::runtime_error{"Post-initialization: Was unable to find 'Engine.Default__GameMode' to use to retrieve the address of InitGameState"};
        }

        auto* Actor = UObjectGlobals::StaticFindObject_InternalSlow(nullptr, nullptr, STR("/Script/Engine.Default__Actor"));
        if (!Actor)
        {
            throw std::runtime_error{"Post-initialization: Was unable to find 'Engine.Default__Actor' to use to retrieve the address of BeginPlay"};
        }

        if (auto func_address = OPTIONAL_GET_ADDRESS_OF_UNREAL_VIRTUAL(UEngine, LoadMap, Engine); func_address)
        {
            UEngine::LoadMapInternal.assign_address(func_address);
        }

        if (auto func_address = OPTIONAL_GET_ADDRESS_OF_UNREAL_VIRTUAL(AGameModeBase, InitGameState, GameMode); func_address)
        {
            AGameModeBase::InitGameStateInternal.assign_address(func_address);
        }
        if (auto func_address = OPTIONAL_GET_ADDRESS_OF_UNREAL_VIRTUAL(AActor, BeginPlay, Actor); func_address)
        {
            AActor::BeginPlayInternal.assign_address(func_address);
        }
        if (auto func_address = OPTIONAL_GET_ADDRESS_OF_UNREAL_VIRTUAL(AActor, Tick, Actor); func_address)
        {
            AActor::TickInternal.assign_address(func_address);
        }
        if (auto func_address = OPTIONAL_GET_ADDRESS_OF_UNREAL_VIRTUAL(UObject, ProcessEvent, Object); func_address)
        {
            UObject::ProcessEventInternal.assign_address(func_address);
        }
        fprintf(stderr, "Hooking phase\n");
        UObject::ProcessConsoleExecInternal.assign_address(GET_ADDRESS_OF_UNREAL_VIRTUAL(UObject, ProcessConsoleExec, Object)); // ok
        UStruct::LinkInternal.assign_address(GET_ADDRESS_OF_UNREAL_VIRTUAL(UStruct, Link, Struct)); // ok
        if (UnrealConfig.bHookLoadMap) { HookLoadMap(); }
        if (UnrealConfig.bHookInitGameState) { HookInitGameState(); }
        if (UnrealConfig.bHookBeginPlay) { HookBeginPlay(); }
        if (UnrealConfig.bHookAActorTick) { HookAActorTick(); }
        //auto logger = std::make_shared<PLH::ErrorLog>();
        //logger->setLogLevel(PLH::ErrorLevel::INFO);
        //PLH::Log::registerLogger(logger);
        HookProcessEvent();
        // HookProcessConsoleExec(); should move this to the end of the function
        HookUStructLink();
        HookStaticConstructObject();

        TypeChecker::store_all_object_names();

        fprintf(stderr, "Pass all\n");
        Output::send(SYSSTR("Constructed {} of {} objects\n"), Hook::StaticStorage::NumRequiredObjectsConstructed, Hook::StaticStorage::RequiredObjectsForInit.size());
        if (!Hook::StaticStorage::bAllRequiredObjectsConstructed)
        {
            Output::send(SYSSTR("Fatal error! The following objects were never constructed:\n"));
            for (const auto& RequiredObject : Hook::StaticStorage::RequiredObjectsForInit)
            {
                if (RequiredObject.ObjectConstructed) { continue; }
                Output::send(SYSSTR("{}\n"), RequiredObject.ObjectName);
            }
            throw std::runtime_error{""};
        }

        if (!TypeChecker::store_all_object_types())
        {
            throw std::runtime_error{"TypeChecker: Was unable to find some or all of the required core objects"};
        }
        
        if (UnrealConfig.bHookProcessInternal || UnrealConfig.bHookProcessLocalScriptFunction)
        {
            Platform::LocateProcessInternal();

            if (UnrealConfig.bHookProcessInternal && UObject::ProcessInternalInternal.is_ready())
            {
                HookProcessInternal(); // ok
            }
            if (UnrealConfig.bHookProcessLocalScriptFunction && UObject::ProcessLocalScriptFunctionInternal.is_ready())
            {
                // wrong address on linux, should be 0x0000000006f5b3f0; fixed
                HookProcessLocalScriptFunction();
            }
        }


        if (UnrealConfig.bHookCallFunctionByNameWithArguments) { HookCallFunctionByNameWithArguments(); } // should be 0x0000000006f5b540 get 0x3fb10a0l fixed
        HookProcessConsoleExec(); // delay the hook to here, or we should get the address of CallFunctionByNameWithArguments before
        if (UnrealConfig.bHookLocalPlayerExec) { HookULocalPlayerExec(UnrealConfig.FExecVTableOffsetInLocalPlayer); } // should be 0x0000000009d604c0 ; fixed
        Output::send<LogLevel::Verbose>(SYSSTR("UnrealConfig.FExecVTableOffsetInLocalPlayer: {:X}\n"), UnrealConfig.FExecVTableOffsetInLocalPlayer);

        PostInitialize(UnrealConfig);
    }
}
