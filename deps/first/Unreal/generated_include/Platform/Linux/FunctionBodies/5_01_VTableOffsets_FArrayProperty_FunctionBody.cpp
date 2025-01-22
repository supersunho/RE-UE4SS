if (auto it = FArrayProperty::VTableLayoutMap.find(STR("~FArrayProperty")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("~FArrayProperty"), 0x00);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("Serialize")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x20);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("AddCppProperty")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("AddCppProperty"), 0x38);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("GetInnerFieldByName")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("GetInnerFieldByName"), 0x50);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("GetInnerFields")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("GetInnerFields"), 0x58);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("PassCPPArgsByRef")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("PassCPPArgsByRef"), 0x68);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("LinkInternal")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("LinkInternal"), 0xa8);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("Identical")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("GetValueAddressAtIndex_Direct")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("GetValueAddressAtIndex_Direct"), 0xe0);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("CopyValuesInternal")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("CopyValuesInternal"), 0xf8);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("ClearValueInternal")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("ClearValueInternal"), 0x128);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("DestroyValueInternal")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("DestroyValueInternal"), 0x130);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("InitializeValueInternal")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("InitializeValueInternal"), 0x138);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("InstanceSubobjects")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("InstanceSubobjects"), 0x148);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("GetMinAlignment")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("GetMinAlignment"), 0x150);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("ContainsObjectReference")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("ContainsObjectReference"), 0x158);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("EmitReferenceInfo")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("EmitReferenceInfo"), 0x160);
}

if (auto it = FArrayProperty::VTableLayoutMap.find(STR("SameType")); it == FArrayProperty::VTableLayoutMap.end())
{
    FArrayProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}
