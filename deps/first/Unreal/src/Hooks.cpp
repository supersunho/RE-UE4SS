#include <stdexcept>

#include <polyhook2/Detour/x64Detour.hpp>

#include <Unreal/Hooks.hpp>
#include <DynamicOutput/DynamicOutput.hpp>
#include <Unreal/UnrealInitializer.hpp>
#include <Unreal/NameTypes.hpp>
#include <Unreal/FFrame.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UnrealVersion.hpp>
#include <Unreal/UEngine.hpp>
#include <Unreal/UClass.hpp>
#include <Unreal/UAssetRegistry.hpp>
#include <Unreal/UGameViewportClient.hpp>
#include <Unreal/AActor.hpp>
#include <Unreal/AGameModeBase.hpp>
#include <Unreal/ULocalPlayer.hpp>
#include <Unreal/Searcher/ObjectSearcher.hpp>

#pragma push_macro("ensure")
#undef ensure

//#include <polyhook2/CapstoneDisassembler.hpp>
#include <polyhook2/ZydisDisassembler.hpp>
#include <polyhook2/Detour/x64Detour.hpp>

#pragma pop_macro("ensure")

#include <polyhook2/ZydisDisassembler.hpp>

namespace RC::Unreal
{
    std::vector<Hook::StaticStorage::RequiredObject> Hook::StaticStorage::RequiredObjectsForInit{};
    int32_t Hook::StaticStorage::NumRequiredObjectsConstructed{};
    bool Hook::StaticStorage::bAllRequiredObjectsConstructed{false};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::StaticConstructObjectDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::ProcessEventDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::ProcessConsoleExecDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::UStructLinkDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::ProcessInternalDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::ProcessLocalScriptFunctionDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::LoadMapDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::InitGameStateDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::BeginPlayDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::AActorTickDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::CallFunctionByNameWithArgumentsDetour{};
    std::unique_ptr<::PLH::x64Detour> Hook::StaticStorage::ULocalPlayerExecDetour{};
    std::vector<Hook::StaticConstructObjectPreCallback> Hook::StaticStorage::StaticConstructObjectPreCallbacks{};
    std::vector<Hook::StaticConstructObjectPostCallback> Hook::StaticStorage::StaticConstructObjectPostCallbacks{};
    std::vector<Hook::ProcessEventCallback> Hook::StaticStorage::ProcessEventPreCallbacks{};
    std::vector<Hook::ProcessEventCallback> Hook::StaticStorage::ProcessEventPostCallbacks{};
    std::vector<Hook::ProcessConsoleExecCallback> Hook::StaticStorage::ProcessConsoleExecCallbacks{};
    std::vector<Hook::ProcessConsoleExecGlobalCallback> Hook::StaticStorage::ProcessConsoleExecGlobalPreCallbacks{};
    std::vector<Hook::ProcessConsoleExecGlobalCallback> Hook::StaticStorage::ProcessConsoleExecGlobalPostCallbacks{};
    std::vector<Hook::ProcessInternalCallback> Hook::StaticStorage::ProcessInternalPreCallbacks{};
    std::vector<Hook::ProcessInternalCallback> Hook::StaticStorage::ProcessInternalPostCallbacks{};
    std::vector<Hook::ProcessLocalScriptFunctionCallback> Hook::StaticStorage::ProcessLocalScriptFunctionPreCallbacks{};
    std::vector<Hook::ProcessLocalScriptFunctionCallback> Hook::StaticStorage::ProcessLocalScriptFunctionPostCallbacks{};
    std::vector<Hook::InitGameStateCallback> Hook::StaticStorage::InitGameStatePreCallbacks{};
    std::vector<Hook::InitGameStateCallback> Hook::StaticStorage::InitGameStatePostCallbacks{};
    std::vector<Hook::LoadMapCallback> Hook::StaticStorage::LoadMapPreCallbacks{};
    std::vector<Hook::LoadMapCallback> Hook::StaticStorage::LoadMapPostCallbacks{};
    std::vector<Hook::BeginPlayCallback> Hook::StaticStorage::BeginPlayPreCallbacks{};
    std::vector<Hook::BeginPlayCallback> Hook::StaticStorage::BeginPlayPostCallbacks{};
    std::vector<Hook::AActorTickCallback> Hook::StaticStorage::AActorTickPreCallbacks{};
    std::vector<Hook::AActorTickCallback> Hook::StaticStorage::AActorTickPostCallbacks{};
    std::vector<Hook::CallFunctionByNameWithArgumentsCallback> Hook::StaticStorage::CallFunctionByNameWithArgumentsPreCallbacks{};
    std::vector<Hook::CallFunctionByNameWithArgumentsCallback> Hook::StaticStorage::CallFunctionByNameWithArgumentsPostCallbacks{};
    std::vector<Hook::ULocalPlayerExecCallback> Hook::StaticStorage::ULocalPlayerExecPreCallbacks{};
    std::vector<Hook::ULocalPlayerExecCallback> Hook::StaticStorage::ULocalPlayerExecPostCallbacks{};

    uint64_t HookTrampolineProcessEvent = NULL;
    uint64_t HookTrampolineStaticConstructObject = NULL;
    uint64_t HookTrampolineProcessConsoleExec = NULL;
    uint64_t HookTrampolineUStructLink = NULL;
    uint64_t HookTrampolineProcessInternal = NULL;
    uint64_t HookTrampolineProcessLocalScriptFunction = NULL;
    uint64_t HookTrampolineLoadMap = NULL;
    uint64_t HookTrampolineInitGameState = NULL;
    uint64_t HookTrampolineBeginPlay = NULL;
    uint64_t HookTrampolineAActorTick = NULL;
    uint64_t HookTrampolineCallFunctionByNameWithArguments = NULL;
    uint64_t HookTrampolineULocalPlayerExec = NULL;
    

    auto Hook::AddRequiredObject(const UEStringType& ObjectFullTypelessName) -> void
    {
        if (!UObjectGlobals::StaticFindObject_InternalSlow(nullptr, nullptr, ObjectFullTypelessName.c_str()))
        {
            Output::send(SYSSTR("Need to construct: {}\n"), ObjectFullTypelessName);
            StaticStorage::RequiredObjectsForInit.emplace_back(Hook::StaticStorage::RequiredObject{ObjectFullTypelessName});
            StaticStorage::bAllRequiredObjectsConstructed = false;
        }
        else
        {
            Output::send(SYSSTR("Already constructed: {}\n"), ObjectFullTypelessName);
            if (StaticStorage::RequiredObjectsForInit.size() == 0)
            {
                StaticStorage::bAllRequiredObjectsConstructed = true;
            }
        }
    }

    auto Hook::AllRequiredObjectsConstructed() -> bool
    {
        std::erase_if(StaticStorage::RequiredObjectsForInit, [&](StaticStorage::RequiredObject& RequiredObject) -> bool {
            return UObjectGlobals::StaticFindObject_InternalSlow(nullptr, nullptr, RequiredObject.ObjectName.c_str());
        });

        StaticStorage::bAllRequiredObjectsConstructed = StaticStorage::RequiredObjectsForInit.size() == 0;
        return StaticStorage::bAllRequiredObjectsConstructed;
    }

    auto Hook::RegisterStaticConstructObjectPreCallback(StaticConstructObjectPreCallback callback) -> void
    {
        if (!StaticStorage::StaticConstructObjectDetour)
        {
            HookStaticConstructObject();
        }
        StaticStorage::StaticConstructObjectPreCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterStaticConstructObjectPostCallback(StaticConstructObjectPostCallback callback) -> void
    {
        if (!StaticStorage::StaticConstructObjectDetour)
        {
            HookStaticConstructObject();
        }
        StaticStorage::StaticConstructObjectPostCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterProcessEventPreCallback(ProcessEventCallback callback) -> void
    {
        if (!StaticStorage::ProcessEventDetour)
        {
            HookProcessEvent();
        }
        StaticStorage::ProcessEventPreCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterProcessEventPostCallback(ProcessEventCallback callback) -> void
    {
        if (!StaticStorage::ProcessEventDetour)
        {
            HookProcessEvent();
        }
        StaticStorage::ProcessEventPostCallbacks.emplace_back(callback);
    }

    auto RC_UE_API Hook::RegisterProcessConsoleExecCallback(ProcessConsoleExecCallback callback) -> void
    {
        if (!StaticStorage::ProcessConsoleExecDetour)
        {
            HookProcessConsoleExec();
        }
        StaticStorage::ProcessConsoleExecCallbacks.emplace_back(callback);
    }

    auto RC_UE_API Hook::RegisterProcessConsoleExecGlobalPreCallback(ProcessConsoleExecGlobalCallback callback) -> void
    {
        if (!StaticStorage::ProcessConsoleExecDetour)
        {
            HookProcessConsoleExec();
        }
        StaticStorage::ProcessConsoleExecGlobalPreCallbacks.emplace_back(callback);
    }

    auto RC_UE_API Hook::RegisterProcessConsoleExecGlobalPostCallback(ProcessConsoleExecGlobalCallback callback) -> void
    {
        if (!StaticStorage::ProcessConsoleExecDetour)
        {
            HookProcessConsoleExec();
        }
        StaticStorage::ProcessConsoleExecGlobalPostCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterProcessInternalPreCallback(ProcessInternalCallback callback) -> void
    {
        if (!StaticStorage::ProcessInternalDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookProcessInternal)
        {
            HookProcessInternal();
        }
        StaticStorage::ProcessInternalPreCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterProcessInternalPostCallback(ProcessInternalCallback callback) -> void
    {
        if (!StaticStorage::ProcessInternalDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookProcessInternal)
        {
            HookProcessInternal();
        }
        StaticStorage::ProcessInternalPostCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterProcessLocalScriptFunctionPreCallback(ProcessLocalScriptFunctionCallback callback) -> void
    {
        if (!StaticStorage::ProcessLocalScriptFunctionDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookProcessLocalScriptFunction)
        {
            HookProcessLocalScriptFunction();
        }
        StaticStorage::ProcessLocalScriptFunctionPreCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterProcessLocalScriptFunctionPostCallback(ProcessLocalScriptFunctionCallback callback) -> void
    {
        if (!StaticStorage::ProcessLocalScriptFunctionDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookProcessLocalScriptFunction)
        {
            HookProcessLocalScriptFunction();
        }
        StaticStorage::ProcessLocalScriptFunctionPostCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterInitGameStatePreCallback(InitGameStateCallback callback) -> void
    {
        if (!StaticStorage::InitGameStateDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookInitGameState)
        {
            HookInitGameState();
        }
        StaticStorage::InitGameStatePreCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterInitGameStatePostCallback(InitGameStateCallback callback) -> void
    {
        if (!StaticStorage::InitGameStateDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookInitGameState)
        {
            HookInitGameState();
        }
        StaticStorage::InitGameStatePostCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterLoadMapPreCallback(LoadMapCallback callback) -> void
    {
        if (!StaticStorage::LoadMapDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookLoadMap)
        {
            HookLoadMap();
        }
        StaticStorage::LoadMapPreCallbacks.emplace_back(callback);
    }
    
    auto Hook::RegisterLoadMapPostCallback(LoadMapCallback callback) -> void
    {
        if (!StaticStorage::LoadMapDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookLoadMap)
        {
            HookLoadMap();
        }
        StaticStorage::LoadMapPostCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterBeginPlayPreCallback(BeginPlayCallback callback) -> void
    {
        if (!StaticStorage::BeginPlayDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookBeginPlay)
        {
            HookBeginPlay();
        }
        StaticStorage::BeginPlayPreCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterBeginPlayPostCallback(BeginPlayCallback callback) -> void
    {
        if (!StaticStorage::BeginPlayDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookBeginPlay)
        {
            HookBeginPlay();
        }
        StaticStorage::BeginPlayPostCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterAActorTickPreCallback(AActorTickCallback callback) -> void
    {
        if (!StaticStorage::AActorTickDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookAActorTick)
        {
            HookAActorTick();
        }
        StaticStorage::AActorTickPreCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterAActorTickPostCallback(AActorTickCallback callback) -> void
    {
        if (!StaticStorage::AActorTickDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookAActorTick)
        {
            HookAActorTick();
        }
        StaticStorage::AActorTickPostCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterCallFunctionByNameWithArgumentsPreCallback(CallFunctionByNameWithArgumentsCallback callback) -> void
    {
        if (!StaticStorage::CallFunctionByNameWithArgumentsDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookCallFunctionByNameWithArguments)
        {
            HookCallFunctionByNameWithArguments();
        }
        StaticStorage::CallFunctionByNameWithArgumentsPreCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterCallFunctionByNameWithArgumentsPostCallback(CallFunctionByNameWithArgumentsCallback callback) -> void
    {
        if (!StaticStorage::CallFunctionByNameWithArgumentsDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookCallFunctionByNameWithArguments)
        {
            HookCallFunctionByNameWithArguments();
        }
        StaticStorage::CallFunctionByNameWithArgumentsPostCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterULocalPlayerExecPreCallback(ULocalPlayerExecCallback callback) -> void
    {
        if (!StaticStorage::ULocalPlayerExecDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookLocalPlayerExec)
        {
            HookULocalPlayerExec(UnrealInitializer::StaticStorage::GlobalConfig.FExecVTableOffsetInLocalPlayer);
        }
        StaticStorage::ULocalPlayerExecPreCallbacks.emplace_back(callback);
    }

    auto Hook::RegisterULocalPlayerExecPostCallback(ULocalPlayerExecCallback callback) -> void
    {
        if (!StaticStorage::ULocalPlayerExecDetour && UnrealInitializer::StaticStorage::GlobalConfig.bHookLocalPlayerExec)
        {
            HookULocalPlayerExec(UnrealInitializer::StaticStorage::GlobalConfig.FExecVTableOffsetInLocalPlayer);
        }
        StaticStorage::ULocalPlayerExecPostCallbacks.emplace_back(callback);
    }

    auto HookedStaticConstructObjectPre(const FStaticConstructObjectParameters& Params) -> UObject*
    {
        UObject* AlteredReturnValue{};
        for (const auto& Callback : Hook::StaticStorage::StaticConstructObjectPreCallbacks)
        {
            AlteredReturnValue = Callback(Params);
        }
        return AlteredReturnValue;
    }

    auto HookedStaticConstructObjectPost(const FStaticConstructObjectParameters& Params, UObject* ConstructedObject) -> UObject*
    {
        if (UnrealInitializer::StaticStorage::bIsInitialized)
        {
            // Populate the 'Actors' search pool.
            // The others are populated in UStruct::Link.
            if (!ConstructedObject->IsA<UStruct>())
            {
                if (ConstructedObject->IsA<AActor>())
                {
                    ObjectSearcherPool<AActor, AnySuperStruct>::Pool.emplace_back(ConstructedObject->GetObjectItem());
                }
            }

            UObject* AlteredReturnValue{};
            for (const auto& Callback : Hook::StaticStorage::StaticConstructObjectPostCallbacks)
            {
                AlteredReturnValue = Callback(Params, ConstructedObject);
            }
            return AlteredReturnValue;
        }

        return ConstructedObject;
    }

    auto HookedStaticConstructObjectDeprecated(StaticConstructObject_Internal_Params_Deprecated) -> UObject*
    {
        FStaticConstructObjectParameters Params{InClass_, InOuter_};
        Params.Name = InName_;
        Params.SetFlags = InFlags_;
        Params.InternalSetFlags = InternalSetFlags_;
        Params.bCopyTransientsFromClassDefaults = bCopyTransientsFromClassDefaults_;
        Params.bAssumeTemplateIsArchetype = bAssumeTemplateIsArchetype_;
        Params.Template = InTemplate_;
        Params.InstanceGraph = InInstanceGraph_;
        Params.ExternalPackage = static_cast<class UPackage*>(ExternalPackage_);

        UObject* AlteredReturnValue = HookedStaticConstructObjectPre(Params);
        UObject* ConstructedObject = PLH::FnCast(HookTrampolineStaticConstructObject, UObjectGlobals::GlobalState::StaticConstructObjectInternalDeprecated.get_function_pointer())(
                InClass_,
                InOuter_,
                InName_,
                InFlags_,
                InternalSetFlags_,
                InTemplate_,
                bCopyTransientsFromClassDefaults_,
                InInstanceGraph_,
                bAssumeTemplateIsArchetype_,
                ExternalPackage_
        );
        AlteredReturnValue = HookedStaticConstructObjectPost(Params, ConstructedObject);

        return AlteredReturnValue ? AlteredReturnValue : ConstructedObject;
    }

    auto HookedStaticConstructObject(const FStaticConstructObjectParameters& Params) -> UObject*
    {
        UObject* AlteredReturnValue = HookedStaticConstructObjectPre(Params);
        UObject* ConstructedObject = PLH::FnCast(HookTrampolineStaticConstructObject, UObjectGlobals::GlobalState::StaticConstructObjectInternal.get_function_pointer())(
                Params
        );
        AlteredReturnValue = HookedStaticConstructObjectPost(Params, ConstructedObject);

        return AlteredReturnValue ? AlteredReturnValue : ConstructedObject;
    }

    auto HookedProcessEvent(UObject* Context, UFunction* Function, void* Parms) -> void
    {
        for (const auto& Callback : Hook::StaticStorage::ProcessEventPreCallbacks)
        {
            Callback(Context, Function, Parms);
        }

        PLH::FnCast(HookTrampolineProcessEvent, UObject::ProcessEventInternal.get_function_pointer())(Context, Function, Parms);

        for (const auto& Callback : Hook::StaticStorage::ProcessEventPostCallbacks)
        {
            Callback(Context, Function, Parms);
        }

        if (UAssetRegistry::ShouldLoadAllAssets() && !UAssetRegistry::AssetsAreLoading())
        {
            UAssetRegistry::LoadAllAssetsThread();

            // Loading assets is an asynchronous operation
            // It's very important to not reset this bool until after the assets have been loaded
            // This is what keeps the load-requester waiting until all the assets have been loaded
            UAssetRegistry::SetShouldLoadAllAssets(false);
        }
    }

    auto HookedProcessConsoleExec(UObject* Context, const TCHAR* Cmd, FOutputDevice& Ar, UObject* Executor) -> bool
    {
        std::pair<bool, bool> global_callback_return_value{};

        for (const auto& callback : Hook::StaticStorage::ProcessConsoleExecGlobalPreCallbacks)
        {
            auto callback_return_value = callback(Context, Cmd, Ar, Executor);
            if (global_callback_return_value.first)
            {
                global_callback_return_value = callback_return_value;
            }
        }

        bool original_return_value = PLH::FnCast(HookTrampolineProcessConsoleExec, UObject::ProcessConsoleExecInternal.get_function_pointer())(Context, Cmd, Ar, Executor);
        bool altered_return_value = original_return_value;
        
        for (const auto& callback : Hook::StaticStorage::ProcessConsoleExecGlobalPostCallbacks)
        {
            auto callback_return_value = callback(Context, Cmd, Ar, Executor);
            if (global_callback_return_value.first)
            {
                global_callback_return_value = callback_return_value;
            }
        }

        if (Unreal::Cast<Unreal::UGameViewportClient>(Context))
        {
            for (const auto& callback : Hook::StaticStorage::ProcessConsoleExecCallbacks)
            {
                altered_return_value = callback(Context, Cmd, Ar, Executor);
                if (altered_return_value) { break; }
            }
        }

        if (global_callback_return_value.first)
        {
            return global_callback_return_value.second;
        }
        else
        {
            return altered_return_value == original_return_value ? original_return_value : altered_return_value;
        }
    }

    void HookedUStructLink(UStruct* Context, FArchive& Ar, bool bRelinkExistingProperties)
    {
        PLH::FnCast(HookTrampolineUStructLink, UStruct::LinkInternal.get_function_pointer())(Context, Ar, bRelinkExistingProperties);

        if (!UnrealInitializer::StaticStorage::bIsInitialized) { return; }

        auto* ObjectItem = Context->GetObjectItem();
        if (Context->IsA<UClass>())
        {
            ObjectSearcherPool<UClass, AnySuperStruct>::Pool.emplace_back(ObjectItem);

            if (static_cast<const UClass*>(Context)->IsChildOf<AActor>())
            {
                ObjectSearcherPool<UClass, AActor>::Pool.emplace_back(ObjectItem);
            }
        }
    }

    void HookedProcessInternal(UObject* Context, FFrame& Stack, void* RESULT_DECL)
    {
        for (const auto& Callback : Hook::StaticStorage::ProcessInternalPreCallbacks)
        {
            Callback(Context, Stack, RESULT_DECL);
        }

        PLH::FnCast(HookTrampolineProcessInternal, UObject::ProcessInternalInternal.get_function_pointer())(Context, Stack, RESULT_DECL);

        for (const auto& Callback : Hook::StaticStorage::ProcessInternalPostCallbacks)
        {
            Callback(Context, Stack, RESULT_DECL);
        }
    }

    void HookedProcessLocalScriptFunction(UObject* Context, FFrame& Stack, void* RESULT_DECL)
    {
        for (const auto& Callback : Hook::StaticStorage::ProcessLocalScriptFunctionPreCallbacks)
        {
            Callback(Context, Stack, RESULT_DECL);
        }

        PLH::FnCast(HookTrampolineProcessLocalScriptFunction, UObject::ProcessLocalScriptFunctionInternal.get_function_pointer())(Context, Stack, RESULT_DECL);

        for (const auto& Callback : Hook::StaticStorage::ProcessLocalScriptFunctionPostCallbacks)
        {
            Callback(Context, Stack, RESULT_DECL);
        }
    }

    bool HookedLoadMap(UEngine* Engine, FWorldContext& WorldContext, FURL URL, UPendingNetGame* PendingGame, FString& Error)
    {
        std::pair<bool, bool> global_callback_return_value{};

        for (const auto& Callback : Hook::StaticStorage::LoadMapPreCallbacks)
        {
            auto callback_return_value = Callback(Engine, WorldContext, URL, PendingGame, Error);
            if (callback_return_value.first)
            {
                global_callback_return_value = callback_return_value;
                break;
            }
        }

        bool original_return_value = PLH::FnCast(HookTrampolineLoadMap, UEngine::LoadMapInternal.get_function_pointer())(Engine, WorldContext, URL, PendingGame, Error);
        
        for (const auto& Callback : Hook::StaticStorage::LoadMapPostCallbacks)
        {
            auto callback_return_value = Callback(Engine, WorldContext, URL, PendingGame, Error);
            if (callback_return_value.first)
            {
                global_callback_return_value = callback_return_value;
                break;
            }
        }

        return global_callback_return_value.first ? global_callback_return_value.second : original_return_value;
    }

    void HookedInitGameState(AGameModeBase* Context)
    {
        for (const auto& Callback : Hook::StaticStorage::InitGameStatePreCallbacks)
        {
            Callback(Context);
        }

        PLH::FnCast(HookTrampolineInitGameState, AGameModeBase::InitGameStateInternal.get_function_pointer())(Context);
        
        for (const auto& Callback : Hook::StaticStorage::InitGameStatePostCallbacks)
        {
            Callback(Context);
        }
    }

    void HookedBeginPlay(AActor* Context)
    {
        for (const auto& Callback : Hook::StaticStorage::BeginPlayPreCallbacks)
        {
            Callback(Context);
        }

        PLH::FnCast(HookTrampolineBeginPlay, AActor::BeginPlayInternal.get_function_pointer())(Context);
        
        for (const auto& Callback : Hook::StaticStorage::BeginPlayPostCallbacks)
        {
            Callback(Context);
        }
    }

    void HookedAActorTick(AActor* Context, float DeltaSeconds)
    {
        for (const auto& Callback : Hook::StaticStorage::AActorTickPreCallbacks)
        {
            Callback(Context, DeltaSeconds);
        }

        PLH::FnCast(HookTrampolineAActorTick, AActor::TickInternal.get_function_pointer())(Context, DeltaSeconds);
        
        for (const auto& Callback : Hook::StaticStorage::AActorTickPostCallbacks)
        {
            Callback(Context, DeltaSeconds);
        }
    }

    bool HookedCallFunctionByNameWithArguments(UObject* Context, const TCHAR* Str, FOutputDevice& Ar, UObject* Executor, bool bForceCallWithNonExec)
    {
        std::pair<bool, bool> global_callback_return_value{};

        for (const auto& Callback : Hook::StaticStorage::CallFunctionByNameWithArgumentsPreCallbacks)
        {
            auto callback_return_value = Callback(Context, Str, Ar, Executor, bForceCallWithNonExec);
            if (callback_return_value.first)
            {
                global_callback_return_value = callback_return_value;
                break;
            }
        }

        bool original_return_value = PLH::FnCast(HookTrampolineCallFunctionByNameWithArguments, UObject::CallFunctionByNameWithArgumentsInternal.get_function_pointer())(Context, Str, Ar, Executor, bForceCallWithNonExec);

        for (const auto& Callback : Hook::StaticStorage::CallFunctionByNameWithArgumentsPostCallbacks)
        {
            auto callback_return_value = Callback(Context, Str, Ar, Executor, bForceCallWithNonExec);
            if (callback_return_value.first)
            {
                global_callback_return_value = callback_return_value;
                break;
            }
        }

        return global_callback_return_value.first ? global_callback_return_value.second : original_return_value;
    }

    bool HookedULocalPlayerExec(ULocalPlayer* Context, UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
    {
        // Some compiler weirdness here with UE.
        // The function that calls this hook puts 'this' in RCX-0x28.
        static const auto FExecVTableOffsetInLocalPlayer = UnrealInitializer::StaticStorage::GlobalConfig.FExecVTableOffsetInLocalPlayer;

        Context = std::bit_cast<ULocalPlayer*>(std::bit_cast<uint8_t*>(Context) - FExecVTableOffsetInLocalPlayer);
        Hook::ULocalPlayerExecCallbackReturnValue global_callback_return_value{};

        for (const auto& Callback : Hook::StaticStorage::ULocalPlayerExecPreCallbacks)
        {
            global_callback_return_value = Callback(Context, InWorld, Cmd, Ar);
        }

        Context = std::bit_cast<ULocalPlayer*>(std::bit_cast<uint8_t*>(Context) + FExecVTableOffsetInLocalPlayer);
        bool original_return_value{};
        if (global_callback_return_value.ExecuteOriginalFunction)
        {
            original_return_value = PLH::FnCast(HookTrampolineULocalPlayerExec, ULocalPlayer::ExecInternal.get_function_pointer())(Context, InWorld, Cmd, Ar);
        }
        Context = std::bit_cast<ULocalPlayer*>(std::bit_cast<uint8_t*>(Context) - FExecVTableOffsetInLocalPlayer);

        for (const auto& Callback : Hook::StaticStorage::ULocalPlayerExecPostCallbacks)
        {
            auto callback_return_value = Callback(Context, InWorld, Cmd, Ar);
            if (!callback_return_value.UseOriginalReturnValue)
            {
                global_callback_return_value.NewReturnValue = callback_return_value.NewReturnValue;
            }
        }

        return global_callback_return_value.UseOriginalReturnValue ? original_return_value : global_callback_return_value.NewReturnValue;
    }

    auto HookStaticConstructObject() -> void
    {
        if (Version::IsAtMost(4, 25))
        {
            Hook::StaticStorage::StaticConstructObjectDetour = std::make_unique<PLH::x64Detour>(
                    std::bit_cast<uint64_t>(UObjectGlobals::GlobalState::StaticConstructObjectInternalDeprecated.get_function_address()),
                    std::bit_cast<uint64_t>(&HookedStaticConstructObjectDeprecated),
                    &HookTrampolineStaticConstructObject);
        }
        else
        {
            Hook::StaticStorage::StaticConstructObjectDetour = std::make_unique<PLH::x64Detour>(
                    std::bit_cast<uint64_t>(UObjectGlobals::GlobalState::StaticConstructObjectInternal.get_function_address()),
                    std::bit_cast<uint64_t>(&HookedStaticConstructObject),
                    &HookTrampolineStaticConstructObject);
        }

        Hook::StaticStorage::StaticConstructObjectDetour->hook();
    }

    auto HookProcessEvent() -> void
    {
        Hook::StaticStorage::ProcessEventDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(UObject::ProcessEventInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedProcessEvent),
                &HookTrampolineProcessEvent);

        Hook::StaticStorage::ProcessEventDetour->hook();
    }

    auto RC_UE_API HookProcessConsoleExec() -> void
    {
        Hook::StaticStorage::ProcessConsoleExecDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(UObject::ProcessConsoleExecInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedProcessConsoleExec),
                &HookTrampolineProcessConsoleExec);        
#ifdef _WIN32
if (auto Module = GetModuleHandle(STR("ntdll.dll")); Module && GetProcAddress(Module, "wine_get_version"))
{
    Hook::StaticStorage::ProcessConsoleExecDetour->setDetourScheme(PLH::x64Detour::INPLACE_SHORT);
}
#endif

        Hook::StaticStorage::ProcessConsoleExecDetour->hook();
    }

    auto RC_UE_API HookUStructLink() -> void
    {
        Hook::StaticStorage::UStructLinkDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(UStruct::LinkInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedUStructLink),
                &HookTrampolineUStructLink);

        Hook::StaticStorage::UStructLinkDetour->hook();
    }

    auto RC_UE_API HookProcessInternal() -> void
    {
        if (!UObject::ProcessInternalInternal.is_ready())
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook ProcessInternal but function is unavailable.\n"));
            return;
        }

        Hook::StaticStorage::ProcessInternalDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(UObject::ProcessInternalInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedProcessInternal),
                &HookTrampolineProcessInternal);

        Hook::StaticStorage::ProcessInternalDetour->hook();
    }

    auto RC_UE_API HookProcessLocalScriptFunction() -> void
    {
        if (!UObject::ProcessLocalScriptFunctionInternal.is_ready())
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook ProcessLocalScriptFunction but function is unavailable.\n"));
            return;
        }

        Hook::StaticStorage::ProcessLocalScriptFunctionDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(UObject::ProcessLocalScriptFunctionInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedProcessLocalScriptFunction),
                &HookTrampolineProcessLocalScriptFunction);

        Hook::StaticStorage::ProcessLocalScriptFunctionDetour->hook();
    }

    auto RC_UE_API HookLoadMap() -> void
    {
        if (!UEngine::LoadMapInternal.is_ready())
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook LoadMap but function is unavailable.\n"));
            return;
        }

        Hook::StaticStorage::LoadMapDetour = std::make_unique<PLH::x64Detour>(
            std::bit_cast<uint64_t>(UEngine::LoadMapInternal.get_function_address()),
            std::bit_cast<uint64_t>(&HookedLoadMap),
            &HookTrampolineLoadMap);

        Hook::StaticStorage::LoadMapDetour->hook();
    }

    auto RC_UE_API HookInitGameState() -> void
    {
        if (!AGameModeBase::InitGameStateInternal.is_ready())
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook InitGameState but function is unavailable.\n"));
            return;
        }

        Hook::StaticStorage::InitGameStateDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(AGameModeBase::InitGameStateInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedInitGameState),
                &HookTrampolineInitGameState);

        Hook::StaticStorage::InitGameStateDetour->hook();
    }

    auto RC_UE_API HookBeginPlay() -> void
    {
        if (!AActor::BeginPlayInternal.is_ready())
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook BeginPlay but function is unavailable.\n"));
            return;
        }

        Hook::StaticStorage::BeginPlayDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(AActor::BeginPlayInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedBeginPlay),
                &HookTrampolineBeginPlay);

        Hook::StaticStorage::BeginPlayDetour->hook();
    }

    auto RC_UE_API HookAActorTick() -> void
    {
        if (!AActor::TickInternal.is_ready())
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook AActor::Tick but function is unavailable.\n"));
            return;
        }

        Hook::StaticStorage::AActorTickDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(AActor::TickInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedAActorTick),
                &HookTrampolineAActorTick);

        Hook::StaticStorage::AActorTickDetour->hook();
    }

    auto RC_UE_API HookCallFunctionByNameWithArguments() -> void
    {
        Platform::LocateCallFunctionByNameWithArguments();

        if (!UObject::CallFunctionByNameWithArgumentsInternal.is_ready())
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook CallFunctionByNameWithArguments but function is unavailable.\n"));
            return;
        }

        Hook::StaticStorage::CallFunctionByNameWithArgumentsDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(UObject::CallFunctionByNameWithArgumentsInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedCallFunctionByNameWithArguments),
                &HookTrampolineCallFunctionByNameWithArguments);
        Hook::StaticStorage::CallFunctionByNameWithArgumentsDetour->hook();
    }

    auto RC_UE_API HookULocalPlayerExec(uint8_t FExecVTableOffsetInLocalPlayer) -> void
    {
        Platform::LocateULocalPlayerExec(FExecVTableOffsetInLocalPlayer);

        if (!ULocalPlayer::ExecInternal.is_ready())
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook ULocalPlayer::Exec but function is unavailable.\n"));
            return;
        }

        Hook::StaticStorage::ULocalPlayerExecDetour = std::make_unique<PLH::x64Detour>(
                std::bit_cast<uint64_t>(ULocalPlayer::ExecInternal.get_function_address()),
                std::bit_cast<uint64_t>(&HookedULocalPlayerExec),
                &HookTrampolineULocalPlayerExec);
        Hook::StaticStorage::ULocalPlayerExecDetour->hook();
    }
}
