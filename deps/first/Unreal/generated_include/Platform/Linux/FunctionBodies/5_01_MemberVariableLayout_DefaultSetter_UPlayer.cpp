if (auto it = UPlayer::MemberOffsets.find(STR("PlayerController")); it == UPlayer::MemberOffsets.end())
{
    UPlayer::MemberOffsets.emplace(STR("PlayerController"), 0x30);
}

if (auto it = UPlayer::MemberOffsets.find(STR("CurrentNetSpeed")); it == UPlayer::MemberOffsets.end())
{
    UPlayer::MemberOffsets.emplace(STR("CurrentNetSpeed"), 0x38);
}

if (auto it = UPlayer::MemberOffsets.find(STR("ConfiguredInternetSpeed")); it == UPlayer::MemberOffsets.end())
{
    UPlayer::MemberOffsets.emplace(STR("ConfiguredInternetSpeed"), 0x3c);
}

if (auto it = UPlayer::MemberOffsets.find(STR("ConfiguredLanSpeed")); it == UPlayer::MemberOffsets.end())
{
    UPlayer::MemberOffsets.emplace(STR("ConfiguredLanSpeed"), 0x40);
}
