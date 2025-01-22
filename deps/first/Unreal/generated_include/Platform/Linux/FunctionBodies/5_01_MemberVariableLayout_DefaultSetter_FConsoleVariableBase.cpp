if (auto it = FConsoleVariableBase::MemberOffsets.find(STR("Help")); it == FConsoleVariableBase::MemberOffsets.end())
{
    FConsoleVariableBase::MemberOffsets.emplace(STR("Help"), 0x08);
}

if (auto it = FConsoleVariableBase::MemberOffsets.find(STR("Flags")); it == FConsoleVariableBase::MemberOffsets.end())
{
    FConsoleVariableBase::MemberOffsets.emplace(STR("Flags"), 0x18);
}

if (auto it = FConsoleVariableBase::MemberOffsets.find(STR("OnChangedCallback")); it == FConsoleVariableBase::MemberOffsets.end())
{
    FConsoleVariableBase::MemberOffsets.emplace(STR("OnChangedCallback"), 0x20);
}

if (auto it = FConsoleVariableBase::MemberOffsets.find(STR("LegacyDelegateHandle")); it == FConsoleVariableBase::MemberOffsets.end())
{
    FConsoleVariableBase::MemberOffsets.emplace(STR("LegacyDelegateHandle"), 0x38);
}

if (auto it = FConsoleVariableBase::MemberOffsets.find(STR("bWarnedAboutThreadSafety")); it == FConsoleVariableBase::MemberOffsets.end())
{
    FConsoleVariableBase::MemberOffsets.emplace(STR("bWarnedAboutThreadSafety"), 0x40);
}
