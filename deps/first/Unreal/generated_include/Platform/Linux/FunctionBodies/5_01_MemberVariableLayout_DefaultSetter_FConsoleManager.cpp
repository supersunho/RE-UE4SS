if (auto it = FConsoleManager::MemberOffsets.find(STR("ConsoleObjects")); it == FConsoleManager::MemberOffsets.end())
{
    FConsoleManager::MemberOffsets.emplace(STR("ConsoleObjects"), 0x08);
}

if (auto it = FConsoleManager::MemberOffsets.find(STR("bHistoryWasLoaded")); it == FConsoleManager::MemberOffsets.end())
{
    FConsoleManager::MemberOffsets.emplace(STR("bHistoryWasLoaded"), 0x58);
}

if (auto it = FConsoleManager::MemberOffsets.find(STR("HistoryEntriesMap")); it == FConsoleManager::MemberOffsets.end())
{
    FConsoleManager::MemberOffsets.emplace(STR("HistoryEntriesMap"), 0x60);
}

if (auto it = FConsoleManager::MemberOffsets.find(STR("ConsoleVariableChangeSinks")); it == FConsoleManager::MemberOffsets.end())
{
    FConsoleManager::MemberOffsets.emplace(STR("ConsoleVariableChangeSinks"), 0xb0);
}

if (auto it = FConsoleManager::MemberOffsets.find(STR("ConsoleVariableUnregisteredDelegate")); it == FConsoleManager::MemberOffsets.end())
{
    FConsoleManager::MemberOffsets.emplace(STR("ConsoleVariableUnregisteredDelegate"), 0xc0);
}

if (auto it = FConsoleManager::MemberOffsets.find(STR("ThreadPropagationCallback")); it == FConsoleManager::MemberOffsets.end())
{
    FConsoleManager::MemberOffsets.emplace(STR("ThreadPropagationCallback"), 0xd8);
}

if (auto it = FConsoleManager::MemberOffsets.find(STR("bCallAllConsoleVariableSinks")); it == FConsoleManager::MemberOffsets.end())
{
    FConsoleManager::MemberOffsets.emplace(STR("bCallAllConsoleVariableSinks"), 0xe0);
}

if (auto it = FConsoleManager::MemberOffsets.find(STR("ConsoleObjectsSynchronizationObject")); it == FConsoleManager::MemberOffsets.end())
{
    FConsoleManager::MemberOffsets.emplace(STR("ConsoleObjectsSynchronizationObject"), 0xe8);
}
