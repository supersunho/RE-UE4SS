if (auto it = UFunction::VTableLayoutMap.find(STR("~UFunction")); it == UFunction::VTableLayoutMap.end())
{
    UFunction::VTableLayoutMap.emplace(STR("~UFunction"), 0x00);
}

if (auto it = UFunction::VTableLayoutMap.find(STR("PostLoad")); it == UFunction::VTableLayoutMap.end())
{
    UFunction::VTableLayoutMap.emplace(STR("PostLoad"), 0xa8);
}

if (auto it = UFunction::VTableLayoutMap.find(STR("Serialize")); it == UFunction::VTableLayoutMap.end())
{
    UFunction::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = UFunction::VTableLayoutMap.find(STR("Bind")); it == UFunction::VTableLayoutMap.end())
{
    UFunction::VTableLayoutMap.emplace(STR("Bind"), 0x2c0);
}

if (auto it = UFunction::VTableLayoutMap.find(STR("GetInheritanceSuper")); it == UFunction::VTableLayoutMap.end())
{
    UFunction::VTableLayoutMap.emplace(STR("GetInheritanceSuper"), 0x2c8);
}

if (auto it = UFunction::VTableLayoutMap.find(STR("Link")); it == UFunction::VTableLayoutMap.end())
{
    UFunction::VTableLayoutMap.emplace(STR("Link"), 0x2d0);
}
