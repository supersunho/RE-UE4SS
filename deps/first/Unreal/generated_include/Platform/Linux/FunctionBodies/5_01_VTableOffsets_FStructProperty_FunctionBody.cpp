if (auto it = FStructProperty::VTableLayoutMap.find(STR("~FStructProperty")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("~FStructProperty"), 0x00);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("Serialize")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x20);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("LinkInternal")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("LinkInternal"), 0xa8);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("Identical")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("SupportsNetSharedSerialization")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("SupportsNetSharedSerialization"), 0xd0);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("CopyValuesInternal")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("CopyValuesInternal"), 0xf8);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("GetValueTypeHashInternal")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("GetValueTypeHashInternal"), 0x100);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("ClearValueInternal")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("ClearValueInternal"), 0x128);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("DestroyValueInternal")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("DestroyValueInternal"), 0x130);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("InitializeValueInternal")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("InitializeValueInternal"), 0x138);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("InstanceSubobjects")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("InstanceSubobjects"), 0x148);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("GetMinAlignment")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("GetMinAlignment"), 0x150);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("ContainsObjectReference")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("ContainsObjectReference"), 0x158);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("EmitReferenceInfo")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("EmitReferenceInfo"), 0x160);
}

if (auto it = FStructProperty::VTableLayoutMap.find(STR("SameType")); it == FStructProperty::VTableLayoutMap.end())
{
    FStructProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}
