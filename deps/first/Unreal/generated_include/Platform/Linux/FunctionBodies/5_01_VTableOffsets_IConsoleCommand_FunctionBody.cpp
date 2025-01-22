if (auto it = IConsoleCommand::VTableLayoutMap.find(STR("Execute")); it == IConsoleCommand::VTableLayoutMap.end())
{
    IConsoleCommand::VTableLayoutMap.emplace(STR("Execute"), 0x88);
}
