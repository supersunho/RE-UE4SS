if (auto it = UField::VTableLayoutMap.find(STR("~UField")); it == UField::VTableLayoutMap.end())
{
    UField::VTableLayoutMap.emplace(STR("~UField"), 0x00);
}

if (auto it = UField::VTableLayoutMap.find(STR("PostLoad")); it == UField::VTableLayoutMap.end())
{
    UField::VTableLayoutMap.emplace(STR("PostLoad"), 0xa8);
}

if (auto it = UField::VTableLayoutMap.find(STR("Serialize")); it == UField::VTableLayoutMap.end())
{
    UField::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = UField::VTableLayoutMap.find(STR("NeedsLoadForClient")); it == UField::VTableLayoutMap.end())
{
    UField::VTableLayoutMap.emplace(STR("NeedsLoadForClient"), 0x110);
}

if (auto it = UField::VTableLayoutMap.find(STR("NeedsLoadForServer")); it == UField::VTableLayoutMap.end())
{
    UField::VTableLayoutMap.emplace(STR("NeedsLoadForServer"), 0x118);
}

if (auto it = UField::VTableLayoutMap.find(STR("AddCppProperty")); it == UField::VTableLayoutMap.end())
{
    UField::VTableLayoutMap.emplace(STR("AddCppProperty"), 0x2b8);
}

if (auto it = UField::VTableLayoutMap.find(STR("Bind")); it == UField::VTableLayoutMap.end())
{
    UField::VTableLayoutMap.emplace(STR("Bind"), 0x2c0);
}
