if (auto it = FConsoleManager::VTableLayoutMap.find(STR("__vecDelDtor")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("__vecDelDtor"), 0xF8);
}

