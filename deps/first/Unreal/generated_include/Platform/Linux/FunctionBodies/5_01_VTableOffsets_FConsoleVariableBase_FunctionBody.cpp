if (auto it = FConsoleVariableBase::VTableLayoutMap.find(STR("~FConsoleVariableBase")); it == FConsoleVariableBase::VTableLayoutMap.end())
{
    FConsoleVariableBase::VTableLayoutMap.emplace(STR("~FConsoleVariableBase"), 0x00);
}

if (auto it = FConsoleVariableBase::VTableLayoutMap.find(STR("GetHelp")); it == FConsoleVariableBase::VTableLayoutMap.end())
{
    FConsoleVariableBase::VTableLayoutMap.emplace(STR("GetHelp"), 0x10);
}

if (auto it = FConsoleVariableBase::VTableLayoutMap.find(STR("SetHelp")); it == FConsoleVariableBase::VTableLayoutMap.end())
{
    FConsoleVariableBase::VTableLayoutMap.emplace(STR("SetHelp"), 0x18);
}

if (auto it = FConsoleVariableBase::VTableLayoutMap.find(STR("GetFlags")); it == FConsoleVariableBase::VTableLayoutMap.end())
{
    FConsoleVariableBase::VTableLayoutMap.emplace(STR("GetFlags"), 0x20);
}

if (auto it = FConsoleVariableBase::VTableLayoutMap.find(STR("SetFlags")); it == FConsoleVariableBase::VTableLayoutMap.end())
{
    FConsoleVariableBase::VTableLayoutMap.emplace(STR("SetFlags"), 0x28);
}

if (auto it = FConsoleVariableBase::VTableLayoutMap.find(STR("AsVariable")); it == FConsoleVariableBase::VTableLayoutMap.end())
{
    FConsoleVariableBase::VTableLayoutMap.emplace(STR("AsVariable"), 0x30);
}

if (auto it = FConsoleVariableBase::VTableLayoutMap.find(STR("SetOnChangedCallback")); it == FConsoleVariableBase::VTableLayoutMap.end())
{
    FConsoleVariableBase::VTableLayoutMap.emplace(STR("SetOnChangedCallback"), 0xb0);
}

if (auto it = FConsoleVariableBase::VTableLayoutMap.find(STR("OnChangedDelegate")); it == FConsoleVariableBase::VTableLayoutMap.end())
{
    FConsoleVariableBase::VTableLayoutMap.emplace(STR("OnChangedDelegate"), 0xb8);
}
