if (auto it = UObject::VTableLayoutMap.find(STR("~UObject")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("~UObject"), 0x00);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetDetailedInfoInternal")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetDetailedInfoInternal"), 0x48);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostInitProperties")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostInitProperties"), 0x50);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostReinitProperties")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostReinitProperties"), 0x58);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostCDOContruct")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostCDOContruct"), 0x60);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PreSaveRoot")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PreSaveRoot"), 0x68);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PreSaveRoot_1")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PreSaveRoot_1"), 0x70);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostSaveRoot")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostSaveRoot"), 0x78);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostSaveRoot_1")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostSaveRoot_1"), 0x80);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PreSave")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PreSave"), 0x88);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PreSave_1")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PreSave_1"), 0x90);
}

if (auto it = UObject::VTableLayoutMap.find(STR("ResolveSubobject")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("ResolveSubobject"), 0x98);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsReadyForAsyncPostLoad")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsReadyForAsyncPostLoad"), 0xa0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostLoad")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostLoad"), 0xa8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostLoadSubobjects")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostLoadSubobjects"), 0xb0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("BeginDestroy")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("BeginDestroy"), 0xb8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsReadyForFinishDestroy")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsReadyForFinishDestroy"), 0xc0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("FinishDestroy")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("FinishDestroy"), 0xc8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("Serialize")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("Serialize_1")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("Serialize_1"), 0xd8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("ShutdownAfterError")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("ShutdownAfterError"), 0xe0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostInterpChange")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostInterpChange"), 0xe8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostRename")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostRename"), 0xf0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PreDuplicate")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PreDuplicate"), 0xf8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostDuplicate")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x100);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostDuplicate_1")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostDuplicate_1"), 0x108);
}

if (auto it = UObject::VTableLayoutMap.find(STR("NeedsLoadForClient")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("NeedsLoadForClient"), 0x110);
}

if (auto it = UObject::VTableLayoutMap.find(STR("NeedsLoadForServer")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("NeedsLoadForServer"), 0x118);
}

if (auto it = UObject::VTableLayoutMap.find(STR("NeedsLoadForTargetPlatform")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("NeedsLoadForTargetPlatform"), 0x120);
}

if (auto it = UObject::VTableLayoutMap.find(STR("NeedsLoadForEditorGame")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("NeedsLoadForEditorGame"), 0x128);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsEditorOnly")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsEditorOnly"), 0x130);
}

if (auto it = UObject::VTableLayoutMap.find(STR("HasNonEditorOnlyReferences")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("HasNonEditorOnlyReferences"), 0x138);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsPostLoadThreadSafe")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsPostLoadThreadSafe"), 0x140);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsDestructionThreadSafe")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsDestructionThreadSafe"), 0x148);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x150);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetPrestreamPackages")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetPrestreamPackages"), 0x158);
}

if (auto it = UObject::VTableLayoutMap.find(STR("ExportCustomProperties")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("ExportCustomProperties"), 0x160);
}

if (auto it = UObject::VTableLayoutMap.find(STR("ImportCustomProperties")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("ImportCustomProperties"), 0x168);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostEditImport")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostEditImport"), 0x170);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostReloadConfig")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostReloadConfig"), 0x178);
}

if (auto it = UObject::VTableLayoutMap.find(STR("Rename")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("Rename"), 0x180);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetDesc")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetDesc"), 0x188);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetWorld")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetWorld"), 0x190);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetNativePropertyValues")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetNativePropertyValues"), 0x198);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetResourceSizeEx")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetResourceSizeEx"), 0x1a0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetExporterName")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetExporterName"), 0x1a8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetRestoreForUObjectOverwrite")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetRestoreForUObjectOverwrite"), 0x1b0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("AreNativePropertiesIdenticalTo")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("AreNativePropertiesIdenticalTo"), 0x1b8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetAssetRegistryTags")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetAssetRegistryTags"), 0x1c0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetExternalActorExtendedAssetRegistryTags")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetExternalActorExtendedAssetRegistryTags"), 0x1c8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsAsset")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsAsset"), 0x1d0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetPrimaryAssetId")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetPrimaryAssetId"), 0x1d8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsLocalizedResource")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsLocalizedResource"), 0x1e0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsSafeForRootSet")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsSafeForRootSet"), 0x1e8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("TagSubobjects")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("TagSubobjects"), 0x1f0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetLifetimeReplicatedProps")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetLifetimeReplicatedProps"), 0x1f8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetReplicatedCustomConditionState")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetReplicatedCustomConditionState"), 0x200);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsNameStableForNetworking")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsNameStableForNetworking"), 0x208);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsFullNameStableForNetworking")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsFullNameStableForNetworking"), 0x210);
}

if (auto it = UObject::VTableLayoutMap.find(STR("IsSupportedForNetworking")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("IsSupportedForNetworking"), 0x218);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetSubobjectsWithStableNamesForNetworking")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetSubobjectsWithStableNamesForNetworking"), 0x220);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PreNetReceive")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PreNetReceive"), 0x228);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostNetReceive")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostNetReceive"), 0x230);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PostRepNotifies")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PostRepNotifies"), 0x238);
}

if (auto it = UObject::VTableLayoutMap.find(STR("PreDestroyFromReplication")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("PreDestroyFromReplication"), 0x240);
}

if (auto it = UObject::VTableLayoutMap.find(STR("BuildSubobjectMapping")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("BuildSubobjectMapping"), 0x248);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetConfigOverridePlatform")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetConfigOverridePlatform"), 0x250);
}

if (auto it = UObject::VTableLayoutMap.find(STR("OverrideConfigSection")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("OverrideConfigSection"), 0x258);
}

if (auto it = UObject::VTableLayoutMap.find(STR("OverridePerObjectConfigSection")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("OverridePerObjectConfigSection"), 0x260);
}

if (auto it = UObject::VTableLayoutMap.find(STR("ProcessEvent")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("ProcessEvent"), 0x268);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetFunctionCallspace")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetFunctionCallspace"), 0x270);
}

if (auto it = UObject::VTableLayoutMap.find(STR("CallRemoteFunction")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("CallRemoteFunction"), 0x278);
}

if (auto it = UObject::VTableLayoutMap.find(STR("ProcessConsoleExec")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("ProcessConsoleExec"), 0x280);
}

if (auto it = UObject::VTableLayoutMap.find(STR("RegenerateClass")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("RegenerateClass"), 0x288);
}

if (auto it = UObject::VTableLayoutMap.find(STR("MarkAsEditorOnlySubobject")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("MarkAsEditorOnlySubobject"), 0x290);
}

if (auto it = UObject::VTableLayoutMap.find(STR("CheckDefaultSubobjectsInternal")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("CheckDefaultSubobjectsInternal"), 0x298);
}

if (auto it = UObject::VTableLayoutMap.find(STR("ValidateGeneratedRepEnums")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("ValidateGeneratedRepEnums"), 0x2a0);
}

if (auto it = UObject::VTableLayoutMap.find(STR("SetNetPushIdDynamic")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("SetNetPushIdDynamic"), 0x2a8);
}

if (auto it = UObject::VTableLayoutMap.find(STR("GetNetPushIdDynamic")); it == UObject::VTableLayoutMap.end())
{
    UObject::VTableLayoutMap.emplace(STR("GetNetPushIdDynamic"), 0x2b0);
}
