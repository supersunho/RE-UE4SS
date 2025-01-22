if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("~FObjectPropertyBase")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("~FObjectPropertyBase"), 0x00);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("Serialize")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("BeginDestroy")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("BeginDestroy"), 0x28);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("PostDuplicate")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("Identical")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("Identical"), 0xb8);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("NetSerializeItem")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("SupportsNetSharedSerialization")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("SupportsNetSharedSerialization"), 0xd0);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("ExportText_Internal")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("ImportText_Internal")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("CopySingleValueToScriptVM")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("CopySingleValueToScriptVM"), 0x108);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("CopyCompleteValueToScriptVM")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("CopyCompleteValueToScriptVM"), 0x110);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("CopySingleValueFromScriptVM")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("CopySingleValueFromScriptVM"), 0x118);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("CopyCompleteValueFromScriptVM")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("CopyCompleteValueFromScriptVM"), 0x120);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("GetID")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("GetID"), 0x140);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("InstanceSubobjects")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("InstanceSubobjects"), 0x148);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("SameType")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("SameType"), 0x168);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("GetCPPTypeCustom")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("GetCPPTypeCustom"), 0x170);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("LoadObjectPropertyValue")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("LoadObjectPropertyValue"), 0x178);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("GetObjectPtrPropertyValue")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("GetObjectPtrPropertyValue"), 0x180);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("GetObjectPropertyValue")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("GetObjectPropertyValue"), 0x188);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("GetObjectPropertyValue_InContainer")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("GetObjectPropertyValue_InContainer"), 0x190);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("SetObjectPropertyValue")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("SetObjectPropertyValue"), 0x198);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("SetObjectPropertyValue_InContainer")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("SetObjectPropertyValue_InContainer"), 0x1a0);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("CheckValidObject")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("CheckValidObject"), 0x1a8);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("AllowCrossLevel")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("AllowCrossLevel"), 0x1b0);
}

if (auto it = FObjectPropertyBase::VTableLayoutMap.find(STR("AllowObjectTypeReinterpretationTo")); it == FObjectPropertyBase::VTableLayoutMap.end())
{
    FObjectPropertyBase::VTableLayoutMap.emplace(STR("AllowObjectTypeReinterpretationTo"), 0x1b8);
}
