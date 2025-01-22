if (auto it = IConsoleVariable::VTableLayoutMap.find(STR("Set")); it == IConsoleVariable::VTableLayoutMap.end())
{
    IConsoleVariable::VTableLayoutMap.emplace(STR("Set"), 0x88);
}

if (auto it = IConsoleVariable::VTableLayoutMap.find(STR("GetBool")); it == IConsoleVariable::VTableLayoutMap.end())
{
    IConsoleVariable::VTableLayoutMap.emplace(STR("GetBool"), 0x90);
}

if (auto it = IConsoleVariable::VTableLayoutMap.find(STR("GetInt")); it == IConsoleVariable::VTableLayoutMap.end())
{
    IConsoleVariable::VTableLayoutMap.emplace(STR("GetInt"), 0x98);
}

if (auto it = IConsoleVariable::VTableLayoutMap.find(STR("GetFloat")); it == IConsoleVariable::VTableLayoutMap.end())
{
    IConsoleVariable::VTableLayoutMap.emplace(STR("GetFloat"), 0xa0);
}

if (auto it = IConsoleVariable::VTableLayoutMap.find(STR("GetString")); it == IConsoleVariable::VTableLayoutMap.end())
{
    IConsoleVariable::VTableLayoutMap.emplace(STR("GetString"), 0xa8);
}

if (auto it = IConsoleVariable::VTableLayoutMap.find(STR("SetOnChangedCallback")); it == IConsoleVariable::VTableLayoutMap.end())
{
    IConsoleVariable::VTableLayoutMap.emplace(STR("SetOnChangedCallback"), 0xb0);
}

if (auto it = IConsoleVariable::VTableLayoutMap.find(STR("OnChangedDelegate")); it == IConsoleVariable::VTableLayoutMap.end())
{
    IConsoleVariable::VTableLayoutMap.emplace(STR("OnChangedDelegate"), 0xb8);
}

if (auto it = IConsoleVariable::VTableLayoutMap.find(STR("GetDefaultValueVariable")); it == IConsoleVariable::VTableLayoutMap.end())
{
    IConsoleVariable::VTableLayoutMap.emplace(STR("GetDefaultValueVariable"), 0xc0);
}
