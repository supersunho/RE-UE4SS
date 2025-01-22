if (auto it = IConsoleObject::MemberOffsets.find(STR("_vptr$IConsoleObject")); it == IConsoleObject::MemberOffsets.end())
{
    IConsoleObject::MemberOffsets.emplace(STR("_vptr$IConsoleObject"), 0x00);
}
