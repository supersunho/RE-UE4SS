if (auto it = UPlayer::VTableLayoutMap.find(STR("~UPlayer")); it == UPlayer::VTableLayoutMap.end())
{
    UPlayer::VTableLayoutMap.emplace(STR("~UPlayer"), 0x00);
}

if (auto it = UPlayer::VTableLayoutMap.find(STR("Exec")); it == UPlayer::VTableLayoutMap.end())
{
    UPlayer::VTableLayoutMap.emplace(STR("Exec"), 0x2b8);
}

if (auto it = UPlayer::VTableLayoutMap.find(STR("SwitchController")); it == UPlayer::VTableLayoutMap.end())
{
    UPlayer::VTableLayoutMap.emplace(STR("SwitchController"), 0x2c0);
}
