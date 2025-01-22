if (auto it = FConsoleCommandBase::VTableLayoutMap.find(STR("~FConsoleCommandBase")); it == FConsoleCommandBase::VTableLayoutMap.end())
{
    FConsoleCommandBase::VTableLayoutMap.emplace(STR("~FConsoleCommandBase"), 0x00);
}

if (auto it = FConsoleCommandBase::VTableLayoutMap.find(STR("GetHelp")); it == FConsoleCommandBase::VTableLayoutMap.end())
{
    FConsoleCommandBase::VTableLayoutMap.emplace(STR("GetHelp"), 0x10);
}

if (auto it = FConsoleCommandBase::VTableLayoutMap.find(STR("SetHelp")); it == FConsoleCommandBase::VTableLayoutMap.end())
{
    FConsoleCommandBase::VTableLayoutMap.emplace(STR("SetHelp"), 0x18);
}

if (auto it = FConsoleCommandBase::VTableLayoutMap.find(STR("GetFlags")); it == FConsoleCommandBase::VTableLayoutMap.end())
{
    FConsoleCommandBase::VTableLayoutMap.emplace(STR("GetFlags"), 0x20);
}

if (auto it = FConsoleCommandBase::VTableLayoutMap.find(STR("SetFlags")); it == FConsoleCommandBase::VTableLayoutMap.end())
{
    FConsoleCommandBase::VTableLayoutMap.emplace(STR("SetFlags"), 0x28);
}

if (auto it = FConsoleCommandBase::VTableLayoutMap.find(STR("AsCommand")); it == FConsoleCommandBase::VTableLayoutMap.end())
{
    FConsoleCommandBase::VTableLayoutMap.emplace(STR("AsCommand"), 0x78);
}
