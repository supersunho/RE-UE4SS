if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("~FMulticastDelegateProperty")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("~FMulticastDelegateProperty"), 0x00);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("Serialize")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("BeginDestroy")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("BeginDestroy"), 0x28);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("Identical")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("InstanceSubobjects")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("InstanceSubobjects"), 0x148);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("ContainsObjectReference")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("ContainsObjectReference"), 0x158);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("EmitReferenceInfo")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("EmitReferenceInfo"), 0x160);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("SameType")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("GetMulticastDelegate")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("GetMulticastDelegate"), 0x170);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("SetMulticastDelegate")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("SetMulticastDelegate"), 0x178);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("AddDelegate")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("AddDelegate"), 0x180);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("RemoveDelegate")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("RemoveDelegate"), 0x188);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("ClearDelegate")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("ClearDelegate"), 0x190);
}

if (auto it = FMulticastDelegateProperty::VTableLayoutMap.find(STR("GetInvocationList")); it == FMulticastDelegateProperty::VTableLayoutMap.end())
{
    FMulticastDelegateProperty::VTableLayoutMap.emplace(STR("GetInvocationList"), 0x198);
}
