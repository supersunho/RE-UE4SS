if (auto it = FBoolProperty::VTableLayoutMap.find(STR("~FBoolProperty")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("~FBoolProperty"), 0x00);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("Serialize")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("LinkInternal")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("LinkInternal"), 0xa8);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("Identical")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("CopyValuesInternal")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("CopyValuesInternal"), 0xf8);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("GetValueTypeHashInternal")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("GetValueTypeHashInternal"), 0x100);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("ClearValueInternal")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("ClearValueInternal"), 0x128);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("InitializeValueInternal")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("InitializeValueInternal"), 0x138);
}

if (auto it = FBoolProperty::VTableLayoutMap.find(STR("GetMinAlignment")); it == FBoolProperty::VTableLayoutMap.end())
{
    FBoolProperty::VTableLayoutMap.emplace(STR("GetMinAlignment"), 0x150);
}
