if (auto it = FSetProperty::VTableLayoutMap.find(STR("~FSetProperty")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("~FSetProperty"), 0x00);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("Serialize")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x20);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("AddCppProperty")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("AddCppProperty"), 0x38);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("GetInnerFieldByName")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("GetInnerFieldByName"), 0x50);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("GetInnerFields")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("GetInnerFields"), 0x58);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("PassCPPArgsByRef")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("PassCPPArgsByRef"), 0x68);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("LinkInternal")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("LinkInternal"), 0xa8);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("Identical")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("GetValueAddressAtIndex_Direct")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("GetValueAddressAtIndex_Direct"), 0xe0);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("CopyValuesInternal")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("CopyValuesInternal"), 0xf8);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("ClearValueInternal")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("ClearValueInternal"), 0x128);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("DestroyValueInternal")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("DestroyValueInternal"), 0x130);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("InstanceSubobjects")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("InstanceSubobjects"), 0x148);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("ContainsObjectReference")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("ContainsObjectReference"), 0x158);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("EmitReferenceInfo")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("EmitReferenceInfo"), 0x160);
}

if (auto it = FSetProperty::VTableLayoutMap.find(STR("SameType")); it == FSetProperty::VTableLayoutMap.end())
{
    FSetProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}
