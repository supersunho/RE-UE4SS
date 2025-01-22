if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("~FSoftClassProperty")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("~FSoftClassProperty"), 0x00);
}

if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("Serialize")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("BeginDestroy")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("BeginDestroy"), 0x28);
}

if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("SameType")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}

if (auto it = FSoftClassProperty::VTableLayoutMap.find(STR("GetCPPTypeCustom")); it == FSoftClassProperty::VTableLayoutMap.end())
{
    FSoftClassProperty::VTableLayoutMap.emplace(STR("GetCPPTypeCustom"), 0x170);
}
