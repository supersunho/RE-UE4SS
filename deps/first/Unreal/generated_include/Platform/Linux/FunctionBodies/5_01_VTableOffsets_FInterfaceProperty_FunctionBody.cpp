if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("~FInterfaceProperty")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("~FInterfaceProperty"), 0x00);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("Serialize")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("BeginDestroy")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("BeginDestroy"), 0x28);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("LinkInternal")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("LinkInternal"), 0xa8);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("Identical")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("SupportsNetSharedSerialization")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("SupportsNetSharedSerialization"), 0xd0);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("ContainsObjectReference")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("ContainsObjectReference"), 0x158);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("EmitReferenceInfo")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("EmitReferenceInfo"), 0x160);
}

if (auto it = FInterfaceProperty::VTableLayoutMap.find(STR("SameType")); it == FInterfaceProperty::VTableLayoutMap.end())
{
    FInterfaceProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}
