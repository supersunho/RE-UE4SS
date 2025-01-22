if (auto it = FMapProperty::VTableLayoutMap.find(STR("~FMapProperty")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("~FMapProperty"), 0x00);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("Serialize")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x20);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("AddCppProperty")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("AddCppProperty"), 0x38);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("GetInnerFieldByName")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("GetInnerFieldByName"), 0x50);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("GetInnerFields")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("GetInnerFields"), 0x58);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("PassCPPArgsByRef")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("PassCPPArgsByRef"), 0x68);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("LinkInternal")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("LinkInternal"), 0xa8);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("Identical")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("GetValueAddressAtIndex_Direct")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("GetValueAddressAtIndex_Direct"), 0xe0);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("CopyValuesInternal")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("CopyValuesInternal"), 0xf8);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("ClearValueInternal")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("ClearValueInternal"), 0x128);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("DestroyValueInternal")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("DestroyValueInternal"), 0x130);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("InitializeValueInternal")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("InitializeValueInternal"), 0x138);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("InstanceSubobjects")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("InstanceSubobjects"), 0x148);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("ContainsObjectReference")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("ContainsObjectReference"), 0x158);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("EmitReferenceInfo")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("EmitReferenceInfo"), 0x160);
}

if (auto it = FMapProperty::VTableLayoutMap.find(STR("SameType")); it == FMapProperty::VTableLayoutMap.end())
{
    FMapProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}
