if (auto it = FClassProperty::VTableLayoutMap.find(STR("~FClassProperty")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("~FClassProperty"), 0x00);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("Serialize")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("BeginDestroy")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("BeginDestroy"), 0x28);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("Identical")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("SameType")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}

if (auto it = FClassProperty::VTableLayoutMap.find(STR("GetCPPTypeCustom")); it == FClassProperty::VTableLayoutMap.end())
{
    FClassProperty::VTableLayoutMap.emplace(STR("GetCPPTypeCustom"), 0x170);
}
