if (auto it = FEnumProperty::VTableLayoutMap.find(STR("~FEnumProperty")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("~FEnumProperty"), 0x00);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("Serialize")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x20);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("AddCppProperty")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("AddCppProperty"), 0x38);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("GetInnerFieldByName")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("GetInnerFieldByName"), 0x50);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("GetInnerFields")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("GetInnerFields"), 0x58);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("LinkInternal")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("LinkInternal"), 0xa8);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("Identical")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("GetValueTypeHashInternal")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("GetValueTypeHashInternal"), 0x100);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("GetMinAlignment")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("GetMinAlignment"), 0x150);
}

if (auto it = FEnumProperty::VTableLayoutMap.find(STR("SameType")); it == FEnumProperty::VTableLayoutMap.end())
{
    FEnumProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}
