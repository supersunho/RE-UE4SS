if (auto it = FProperty::VTableLayoutMap.find(STR("~FProperty")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("~FProperty"), 0x00);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("Serialize")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("GetCPPMacroType")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("GetCPPMacroType"), 0x60);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("PassCPPArgsByRef")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("PassCPPArgsByRef"), 0x68);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("GetCPPTypeForwardDeclaration")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("GetCPPTypeForwardDeclaration"), 0x78);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("HasSetter")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("HasSetter"), 0x80);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("HasGetter")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("HasGetter"), 0x88);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("HasSetterOrGetter")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("HasSetterOrGetter"), 0x90);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("CallSetter")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("CallSetter"), 0x98);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("CallGetter")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("CallGetter"), 0xa0);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("LinkInternal")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("LinkInternal"), 0xa8);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("Identical")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("SupportsNetSharedSerialization")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("SupportsNetSharedSerialization"), 0xd0);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("ExportTextItem")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("ExportTextItem"), 0xd8);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("GetValueAddressAtIndex_Direct")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("GetValueAddressAtIndex_Direct"), 0xe0);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("CopyValuesInternal")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("CopyValuesInternal"), 0xf8);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("GetValueTypeHashInternal")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("GetValueTypeHashInternal"), 0x100);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("CopySingleValueToScriptVM")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("CopySingleValueToScriptVM"), 0x108);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("CopyCompleteValueToScriptVM")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("CopyCompleteValueToScriptVM"), 0x110);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("CopySingleValueFromScriptVM")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("CopySingleValueFromScriptVM"), 0x118);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("CopyCompleteValueFromScriptVM")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("CopyCompleteValueFromScriptVM"), 0x120);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("ClearValueInternal")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("ClearValueInternal"), 0x128);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("DestroyValueInternal")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("DestroyValueInternal"), 0x130);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("InitializeValueInternal")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("InitializeValueInternal"), 0x138);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("GetID")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("GetID"), 0x140);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("InstanceSubobjects")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("InstanceSubobjects"), 0x148);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("GetMinAlignment")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("GetMinAlignment"), 0x150);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("ContainsObjectReference")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("ContainsObjectReference"), 0x158);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("EmitReferenceInfo")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("EmitReferenceInfo"), 0x160);
}

if (auto it = FProperty::VTableLayoutMap.find(STR("SameType")); it == FProperty::VTableLayoutMap.end())
{
    FProperty::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}
