if (auto it = UClass::VTableLayoutMap.find(STR("~UClass")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("~UClass"), 0x00);
}

if (auto it = UClass::VTableLayoutMap.find(STR("DeferredRegister")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("DeferredRegister"), 0x18);
}

if (auto it = UClass::VTableLayoutMap.find(STR("PostInitProperties")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("PostInitProperties"), 0x50);
}

if (auto it = UClass::VTableLayoutMap.find(STR("PostLoad")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("PostLoad"), 0xa8);
}

if (auto it = UClass::VTableLayoutMap.find(STR("FinishDestroy")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("FinishDestroy"), 0xc8);
}

if (auto it = UClass::VTableLayoutMap.find(STR("Serialize")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x150);
}

if (auto it = UClass::VTableLayoutMap.find(STR("Rename")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("Rename"), 0x180);
}

if (auto it = UClass::VTableLayoutMap.find(STR("GetDesc")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("GetDesc"), 0x188);
}

if (auto it = UClass::VTableLayoutMap.find(STR("GetRestoreForUObjectOverwrite")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("GetRestoreForUObjectOverwrite"), 0x1b0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("GetAssetRegistryTags")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("GetAssetRegistryTags"), 0x1c0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("IsAsset")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("IsAsset"), 0x1d0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("TagSubobjects")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("TagSubobjects"), 0x1f0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("IsNameStableForNetworking")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("IsNameStableForNetworking"), 0x208);
}

if (auto it = UClass::VTableLayoutMap.find(STR("Bind")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("Bind"), 0x2c0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("Link")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("Link"), 0x2d0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("GetPrefixCPP")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("GetPrefixCPP"), 0x320);
}

if (auto it = UClass::VTableLayoutMap.find(STR("SetSuperStruct")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("SetSuperStruct"), 0x328);
}

if (auto it = UClass::VTableLayoutMap.find(STR("IsStructTrashed")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("IsStructTrashed"), 0x348);
}

if (auto it = UClass::VTableLayoutMap.find(STR("GetAuthoritativeClass")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("GetAuthoritativeClass"), 0x368);
}

if (auto it = UClass::VTableLayoutMap.find(STR("PostInitInstance")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("PostInitInstance"), 0x370);
}

if (auto it = UClass::VTableLayoutMap.find(STR("PostLoadInstance")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("PostLoadInstance"), 0x378);
}

if (auto it = UClass::VTableLayoutMap.find(STR("InitPropertiesFromCustomList")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("InitPropertiesFromCustomList"), 0x380);
}

if (auto it = UClass::VTableLayoutMap.find(STR("SetupObjectInitializer")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("SetupObjectInitializer"), 0x388);
}

if (auto it = UClass::VTableLayoutMap.find(STR("CanCreateAssetOfClass")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("CanCreateAssetOfClass"), 0x390);
}

if (auto it = UClass::VTableLayoutMap.find(STR("GetPersistentUberGraphFrame")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("GetPersistentUberGraphFrame"), 0x398);
}

if (auto it = UClass::VTableLayoutMap.find(STR("CreatePersistentUberGraphFrame")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("CreatePersistentUberGraphFrame"), 0x3a0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("DestroyPersistentUberGraphFrame")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("DestroyPersistentUberGraphFrame"), 0x3a8);
}

if (auto it = UClass::VTableLayoutMap.find(STR("SerializeDefaultObject")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("SerializeDefaultObject"), 0x3b0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("SerializeDefaultObject_1")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("SerializeDefaultObject_1"), 0x3b8);
}

if (auto it = UClass::VTableLayoutMap.find(STR("PostLoadDefaultObject")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("PostLoadDefaultObject"), 0x3c0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("PurgeClass")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("PurgeClass"), 0x3c8);
}

if (auto it = UClass::VTableLayoutMap.find(STR("IsFunctionImplementedInScript")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("IsFunctionImplementedInScript"), 0x3d0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("HasProperty")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("HasProperty"), 0x3d8);
}

if (auto it = UClass::VTableLayoutMap.find(STR("FindArchetype")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("FindArchetype"), 0x3e0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("GetArchetypeForCDO")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("GetArchetypeForCDO"), 0x3e8);
}

if (auto it = UClass::VTableLayoutMap.find(STR("GetDefaultObjectPreloadDependencies")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("GetDefaultObjectPreloadDependencies"), 0x3f0);
}

if (auto it = UClass::VTableLayoutMap.find(STR("CreateDefaultObject")); it == UClass::VTableLayoutMap.end())
{
    UClass::VTableLayoutMap.emplace(STR("CreateDefaultObject"), 0x3f8);
}
