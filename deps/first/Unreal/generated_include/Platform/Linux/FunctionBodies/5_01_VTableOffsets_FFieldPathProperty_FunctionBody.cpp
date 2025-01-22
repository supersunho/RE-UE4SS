if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("~FFieldPathProperty")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("~FFieldPathProperty"), 0x00);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("Serialize")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("Identical")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("SupportsNetSharedSerialization")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("SupportsNetSharedSerialization"), 0xd0);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("ContainsObjectReference")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("ContainsObjectReference"), 0x158);
}

if (auto it = FFieldPathProperty::VTableLayoutMap.find(STR("EmitReferenceInfo")); it == FFieldPathProperty::VTableLayoutMap.end())
{
    FFieldPathProperty::VTableLayoutMap.emplace(STR("EmitReferenceInfo"), 0x160);
}
