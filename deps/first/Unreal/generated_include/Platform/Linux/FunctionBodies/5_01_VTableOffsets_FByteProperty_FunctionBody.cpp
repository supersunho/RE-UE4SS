if (auto it = FByteProperty::VTableLayoutMap.find(STR("~FByteProperty")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("~FByteProperty"), 0x00);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("Serialize")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x20);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("AddReferencedObjects")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("AddReferencedObjects"), 0x30);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("PostDuplicate")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x48);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("GetCPPType")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("GetCPPType"), 0x70);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("ConvertFromType")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("ConvertFromType"), 0xb0);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("SerializeItem")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("SerializeItem"), 0xc0);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("NetSerializeItem")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("NetSerializeItem"), 0xc8);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FByteProperty::VTableLayoutMap.find(STR("GetIntPropertyEnum")); it == FByteProperty::VTableLayoutMap.end())
{
    FByteProperty::VTableLayoutMap.emplace(STR("GetIntPropertyEnum"), 0x180);
}
