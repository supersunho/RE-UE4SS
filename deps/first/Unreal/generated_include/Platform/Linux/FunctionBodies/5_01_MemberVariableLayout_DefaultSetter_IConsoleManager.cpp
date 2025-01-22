if (auto it = IConsoleManager::MemberOffsets.find(STR("_vptr$IConsoleManager")); it == IConsoleManager::MemberOffsets.end())
{
    IConsoleManager::MemberOffsets.emplace(STR("_vptr$IConsoleManager"), 0x00);
}
