if (auto it = UEnum::VTableLayoutMap.find(STR("~UEnum")); it == UEnum::VTableLayoutMap.end())
{
    UEnum::VTableLayoutMap.emplace(STR("~UEnum"), 0x00);
}

if (auto it = UEnum::VTableLayoutMap.find(STR("BeginDestroy")); it == UEnum::VTableLayoutMap.end())
{
    UEnum::VTableLayoutMap.emplace(STR("BeginDestroy"), 0xb8);
}

if (auto it = UEnum::VTableLayoutMap.find(STR("Serialize")); it == UEnum::VTableLayoutMap.end())
{
    UEnum::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = UEnum::VTableLayoutMap.find(STR("GetDisplayNameTextByIndex")); it == UEnum::VTableLayoutMap.end())
{
    UEnum::VTableLayoutMap.emplace(STR("GetDisplayNameTextByIndex"), 0x2c8);
}

if (auto it = UEnum::VTableLayoutMap.find(STR("GetAuthoredNameStringByIndex")); it == UEnum::VTableLayoutMap.end())
{
    UEnum::VTableLayoutMap.emplace(STR("GetAuthoredNameStringByIndex"), 0x2d0);
}

if (auto it = UEnum::VTableLayoutMap.find(STR("ResolveEnumerator")); it == UEnum::VTableLayoutMap.end())
{
    UEnum::VTableLayoutMap.emplace(STR("ResolveEnumerator"), 0x2d8);
}

if (auto it = UEnum::VTableLayoutMap.find(STR("GenerateFullEnumName")); it == UEnum::VTableLayoutMap.end())
{
    UEnum::VTableLayoutMap.emplace(STR("GenerateFullEnumName"), 0x2e0);
}

if (auto it = UEnum::VTableLayoutMap.find(STR("SetEnums")); it == UEnum::VTableLayoutMap.end())
{
    UEnum::VTableLayoutMap.emplace(STR("SetEnums"), 0x2e8);
}
