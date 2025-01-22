if (auto it = FConsoleManager::VTableLayoutMap.find(STR("~FConsoleManager")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("~FConsoleManager"), 0x00);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariable")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariable"), 0x00);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariable_1")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariable_1"), 0x08);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariable_2")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariable_2"), 0x10);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariable_3")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariable_3"), 0x18);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariable_4")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariable_4"), 0x20);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariableRef")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariableRef"), 0x28);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariableRef_1")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariableRef_1"), 0x30);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariableRef_2")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariableRef_2"), 0x38);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariableRef_3")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariableRef_3"), 0x40);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariableBitRef")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariableBitRef"), 0x48);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("CallAllConsoleVariableSinks")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("CallAllConsoleVariableSinks"), 0x50);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleVariableSink_Handle")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleVariableSink_Handle"), 0x58);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("UnregisterConsoleVariableSink_Handle")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("UnregisterConsoleVariableSink_Handle"), 0x60);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleCommand")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleCommand"), 0x68);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleCommand_1")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleCommand_1"), 0x70);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleCommand_2")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleCommand_2"), 0x78);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleCommand_3")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleCommand_3"), 0x80);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleCommand_4")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleCommand_4"), 0x88);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleCommand_5")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleCommand_5"), 0x90);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleCommand_6")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleCommand_6"), 0x98);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterConsoleCommand_7")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterConsoleCommand_7"), 0xa0);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("UnregisterConsoleObject")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("UnregisterConsoleObject"), 0xa8);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("UnregisterConsoleObject_1")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("UnregisterConsoleObject_1"), 0xb0);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("FindConsoleVariable")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("FindConsoleVariable"), 0xb8);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("FindConsoleObject")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("FindConsoleObject"), 0xc0);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("FindConsoleObjectName")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("FindConsoleObjectName"), 0xc8);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("ForEachConsoleObjectThatStartsWith")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("ForEachConsoleObjectThatStartsWith"), 0xd0);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("ForEachConsoleObjectThatContains")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("ForEachConsoleObjectThatContains"), 0xd8);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("ProcessUserConsoleInput")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("ProcessUserConsoleInput"), 0xe0);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("AddConsoleHistoryEntry")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("AddConsoleHistoryEntry"), 0xe8);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("GetConsoleHistory")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("GetConsoleHistory"), 0xf0);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("IsNameRegistered")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("IsNameRegistered"), 0xf8);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("RegisterThreadPropagation")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("RegisterThreadPropagation"), 0x100);
}

if (auto it = FConsoleManager::VTableLayoutMap.find(STR("OnCVarUnregistered")); it == FConsoleManager::VTableLayoutMap.end())
{
    FConsoleManager::VTableLayoutMap.emplace(STR("OnCVarUnregistered"), 0x108);
}
