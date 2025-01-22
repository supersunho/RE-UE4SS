if (auto it = FArchiveState::VTableLayoutMap.find(STR("~FArchiveState")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("~FArchiveState"), 0x00);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("GetInnermostState")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("GetInnermostState"), 0x10);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("CountBytes")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("CountBytes"), 0x18);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("GetArchiveName")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("GetArchiveName"), 0x20);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("GetLinker")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("GetLinker"), 0x28);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("Tell")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("Tell"), 0x30);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("TotalSize")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("TotalSize"), 0x38);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("AtEnd")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("AtEnd"), 0x40);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("GetArchetypeFromLoader")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("GetArchetypeFromLoader"), 0x48);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("GetCustomVersions")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("GetCustomVersions"), 0x50);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetCustomVersions")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetCustomVersions"), 0x58);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("ResetCustomVersions")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("ResetCustomVersions"), 0x60);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetFilterEditorOnly")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetFilterEditorOnly"), 0x68);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("UseToResolveEnumerators")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("UseToResolveEnumerators"), 0x70);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("ShouldSkipProperty")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("ShouldSkipProperty"), 0x78);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetSerializedProperty")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetSerializedProperty"), 0x80);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetSerializedPropertyChain")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetSerializedPropertyChain"), 0x88);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetSerializeContext")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetSerializeContext"), 0x90);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("GetSerializeContext")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("GetSerializeContext"), 0x98);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("Reset")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("Reset"), 0xa0);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetIsLoading")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetIsLoading"), 0xa8);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetIsLoadingFromCookedPackage")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetIsLoadingFromCookedPackage"), 0xb0);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetIsSaving")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetIsSaving"), 0xb8);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetIsTransacting")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetIsTransacting"), 0xc0);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetIsTextFormat")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetIsTextFormat"), 0xc8);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetWantBinaryPropertySerialization")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetWantBinaryPropertySerialization"), 0xd0);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetUseUnversionedPropertySerialization")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetUseUnversionedPropertySerialization"), 0xd8);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetForceUnicode")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetForceUnicode"), 0xe0);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetIsPersistent")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetIsPersistent"), 0xe8);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetUEVer")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetUEVer"), 0xf0);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetLicenseeUEVer")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetLicenseeUEVer"), 0xf8);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetEngineVer")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetEngineVer"), 0x100);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetEngineNetVer")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetEngineNetVer"), 0x108);
}

if (auto it = FArchiveState::VTableLayoutMap.find(STR("SetGameNetVer")); it == FArchiveState::VTableLayoutMap.end())
{
    FArchiveState::VTableLayoutMap.emplace(STR("SetGameNetVer"), 0x110);
}
