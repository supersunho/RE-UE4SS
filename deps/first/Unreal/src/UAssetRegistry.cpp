#include <thread>

#include <DynamicOutput/DynamicOutput.hpp>

#include <Unreal/UAssetRegistry.hpp>
#include <Unreal/UAssetRegistryHelpers.hpp>
#include <Unreal/UObjectArray.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UClass.hpp>
#include <Unreal/UFunction.hpp>
#include <Unreal/UScriptStruct.hpp>

#ifdef WIN32
#include <Unreal/Core/Windows/WindowsHWrapper.hpp>
#include <psapi.h>
#else
#include <sys/sysinfo.h>
#include <fstream>
#endif

namespace RC::Unreal
{
    bool UAssetRegistry::StaticStorage::bAssetsAreLoading{false};
    bool UAssetRegistry::StaticStorage::bShouldLoadAllAssets{false};
    std::vector<FUObjectItem*> UAssetRegistry::StaticStorage::ForcefullyLoadedAssets{};
    uint64 UAssetRegistry::StaticStorage::MaxMemoryUsageDuringAssetLoading{88};

    auto UAssetRegistry::GetAllAssets(TArray <FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) -> bool
    {
        if (!Functions::GetAllAssets.IsValid()) { return false; }

        GetAllAssets_Params Params{OutAssetData, bIncludeOnlyOnDiskAssets};
        Functions::GetAllAssets(this, Params);

        // Copy here because we can't actually make the variable in the params struct a reference
        // This is because UE4 expects the TArray to be inlined into the struct
        // This may be a design problem with UE4SS, but it would be annoying to have to construct the params variable outside this wrapper function
        // With TArray it's not super slow because we can simply copy the pointer and the num/max integers
        // We don't own the data pointer, so it won't get deallocated by doing this
        OutAssetData.CopyFast(Params.OutAssetData);
        return Params.ReturnValue;
    }

    FAssetData UAssetRegistry::GetAssetByObjectPath(const FName ObjectPath, bool bIncludeOnlyOnDiskAssets)
    {
        if (!Functions::GetAssetByObjectPath.IsValid()) { return FAssetData{}; }

        GetAssetByObjectPath_Params Params{ObjectPath, bIncludeOnlyOnDiskAssets};
        Functions::GetAssetByObjectPath(this, Params);

        return Params.ReturnValue;
    }

    bool UAssetRegistry::GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses)
    {
        if (!Functions::GetAssetsByClass.IsValid()) { return false; }

        GetAssetsByClass_Params Params{ClassName, OutAssetData, bSearchSubClasses};
        Functions::GetAssetsByClass(this, Params);

        OutAssetData.CopyFast(Params.OutAssetData);
        return Params.ReturnValue;
    }

    static size_t GetComputerTotalMemory()
    {
        #ifdef WIN32
        MEMORYSTATUSEX StateX;
        StateX.dwLength = sizeof(StateX);
        GlobalMemoryStatusEx(&StateX);
        return StateX.dwMemoryLoad;
        #else
        struct sysinfo MemInfo;
        sysinfo(&MemInfo);
        return MemInfo.totalram;
        #endif
    }

    auto UAssetRegistry::LoadAllAssetsThread() -> void
    {
        SetAssetsAreLoading(true);

        UAssetRegistry* AssetRegistry = static_cast<UAssetRegistry*>(UAssetRegistryHelpers::GetAssetRegistry().ObjectPointer);
        if (!AssetRegistry)
        {
            Output::send(SYSSTR("Did not load assets because asset_registry was nullptr\n"));
            SetAssetsAreLoading(false);
            return;
        }

        TArray<FAssetData> AllAssets{nullptr, 0, 0};
        AssetRegistry->GetAllAssets(AllAssets, false);

        auto* AssetDataScriptStruct = UObjectGlobals::StaticFindObject<UScriptStruct*>(nullptr, nullptr, STR("/Script/CoreUObject.AssetData"));
        if (!AssetDataScriptStruct)
        {
            AssetDataScriptStruct = UObjectGlobals::StaticFindObject<UScriptStruct*>(nullptr, nullptr, STR("/Script/AssetRegistry.AssetData"));
        }

        if (!AssetDataScriptStruct)
        {
            Output::send(SYSSTR("Did not load assets because could not get size of AssetData ScriptStruct because the pointer was nullptr\n"));
        }

        for (FAssetData& Asset : AllAssets) 
        {
            auto ComputerTotalMemory = GetComputerTotalMemory();
            if (StaticStorage::MaxMemoryUsageDuringAssetLoading > 0 && ComputerTotalMemory >= StaticStorage::MaxMemoryUsageDuringAssetLoading)
            {
                static constexpr size_t megabyte = 1000000;
#ifdef WIN32
                size_t MemUsageInMegabytes{};
                PROCESS_MEMORY_COUNTERS MemoryCounters{};
                if (GetProcessMemoryInfo(GetCurrentProcess(), &MemoryCounters, sizeof(MemoryCounters)))
                {
                    MemUsageInMegabytes = MemoryCounters.WorkingSetSize / megabyte;
                }
#else
                // read /proc/self/statm to get VmSize VmRSS ...
                std::ifstream MemInfoFile("/proc/self/statm");
                unsigned long long VmSize, VmRSS;
                MemInfoFile >> VmSize >> VmRSS;
                auto MemUsageInMegabytes = VmSize * getpagesize() / megabyte;
#endif

                Output::send<LogLevel::Error>(SYSSTR("Ran out of memory while trying to load all assets (process usage on failure: {} megabytes)."), MemUsageInMegabytes);
                break;
            }

            UObject* LoadedAsset = UAssetRegistryHelpers::GetAsset(Asset);
            if (!LoadedAsset) { continue; }

            if (auto* ObjectItem = LoadedAsset->GetObjectItem(); ObjectItem)
            {
                StaticStorage::ForcefullyLoadedAssets.emplace_back(ObjectItem);
                // TODO: Undo this, it's very important or we leak multiple gigabytes of memory
                ObjectItem->SetRootSet();
                ObjectItem->SetGCKeep();
            }
        }

        SetAssetsAreLoading(false);
    }

    auto UAssetRegistry::FreeAllForcefullyLoadedAssets() -> void
    {
        std::erase_if(StaticStorage::ForcefullyLoadedAssets, [&](FUObjectItem* ObjectItem) -> bool {
            ObjectItem->UnsetRootSet();
            ObjectItem->UnsetGCKeep();
            return true;
        });
    }

    auto UAssetRegistry::LoadAllAssets() -> void
    {
        if (!AssetsAreLoading())
        {
            SetShouldLoadAllAssets(true);
        }

        // Wait for all assets to load
        while (ShouldLoadAllAssets())
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
    }
}
