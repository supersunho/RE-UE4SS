if (auto it = FNumericProperty::VTableLayoutMap.find(STR("~FNumericProperty")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("~FNumericProperty"), 0x00);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("ExportText_Internal")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("ExportText_Internal"), 0xe8);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("ImportText_Internal")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("ImportText_Internal"), 0xf0);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("IsFloatingPoint")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("IsFloatingPoint"), 0x170);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("IsInteger")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("IsInteger"), 0x178);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("GetIntPropertyEnum")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("GetIntPropertyEnum"), 0x180);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("SetIntPropertyValue")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("SetIntPropertyValue"), 0x188);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("SetIntPropertyValue_1")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("SetIntPropertyValue_1"), 0x190);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("SetFloatingPointPropertyValue")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("SetFloatingPointPropertyValue"), 0x198);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("SetNumericPropertyValueFromString")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("SetNumericPropertyValueFromString"), 0x1a0);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("SetNumericPropertyValueFromString_InContainer")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("SetNumericPropertyValueFromString_InContainer"), 0x1a8);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("GetSignedIntPropertyValue")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("GetSignedIntPropertyValue"), 0x1b0);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("GetSignedIntPropertyValue_InContainer")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("GetSignedIntPropertyValue_InContainer"), 0x1b8);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("GetUnsignedIntPropertyValue")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("GetUnsignedIntPropertyValue"), 0x1c0);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("GetUnsignedIntPropertyValue_InContainer")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("GetUnsignedIntPropertyValue_InContainer"), 0x1c8);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("GetFloatingPointPropertyValue")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("GetFloatingPointPropertyValue"), 0x1d0);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("GetNumericPropertyValueToString")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("GetNumericPropertyValueToString"), 0x1d8);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("GetNumericPropertyValueToString_InContainer")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("GetNumericPropertyValueToString_InContainer"), 0x1e0);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("CanHoldDoubleValueInternal")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("CanHoldDoubleValueInternal"), 0x1e8);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("CanHoldSignedValueInternal")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("CanHoldSignedValueInternal"), 0x1f0);
}

if (auto it = FNumericProperty::VTableLayoutMap.find(STR("CanHoldUnsignedValueInternal")); it == FNumericProperty::VTableLayoutMap.end())
{
    FNumericProperty::VTableLayoutMap.emplace(STR("CanHoldUnsignedValueInternal"), 0x1f8);
}
