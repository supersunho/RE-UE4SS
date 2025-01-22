if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("~FDelegateProperty")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("~FDelegateProperty"), 0x00);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("Serialize")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("BeginDestroy")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("BeginDestroy"), 0x28);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("Identical")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("InstanceSubobjects")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("InstanceSubobjects"), 0x148);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("ContainsObjectReference")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("ContainsObjectReference"), 0x158);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("EmitReferenceInfo")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("EmitReferenceInfo"), 0x160);
}

if (auto it = FDelegateProperty::VTableLayoutMap.find(STR("SameType")); it == FDelegateProperty::VTableLayoutMap.end())
{
    FDelegateProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}
