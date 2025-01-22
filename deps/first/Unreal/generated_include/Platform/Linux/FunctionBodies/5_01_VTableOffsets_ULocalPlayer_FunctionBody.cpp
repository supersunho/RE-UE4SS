if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("~ULocalPlayer")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("~ULocalPlayer"), 0x00);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("FinishDestroy")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("FinishDestroy"), 0xc8);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetWorld")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetWorld"), 0x190);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("Exec")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("Exec"), 0x2b8);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetViewPoint")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetViewPoint"), 0x2c8);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetSlateUser")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetSlateUser"), 0x2d0);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetSlateUser_1")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetSlateUser_1"), 0x2d8);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("CalcSceneViewInitOptions")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("CalcSceneViewInitOptions"), 0x2e0);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("CalcSceneView")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("CalcSceneView"), 0x2e8);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("PlayerAdded")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("PlayerAdded"), 0x2f0);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("PlayerAdded_1")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("PlayerAdded_1"), 0x2f8);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("InitOnlineSession")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("InitOnlineSession"), 0x300);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("PlayerRemoved")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("PlayerRemoved"), 0x308);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("SpawnPlayActor")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("SpawnPlayActor"), 0x310);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("SendSplitJoin")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("SendSplitJoin"), 0x318);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("SetControllerId")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("SetControllerId"), 0x320);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("SetPlatformUserId")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("SetPlatformUserId"), 0x328);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetLocalPlayerIndex")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetLocalPlayerIndex"), 0x330);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetNickname")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetNickname"), 0x338);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetGameLoginOptions")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetGameLoginOptions"), 0x340);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetUniqueNetIdForPlatformUser")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetUniqueNetIdForPlatformUser"), 0x348);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetPreferredUniqueNetId")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetPreferredUniqueNetId"), 0x350);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("GetProjectionData")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("GetProjectionData"), 0x358);
}

if (auto it = ULocalPlayer::VTableLayoutMap.find(STR("CleanupViewState")); it == ULocalPlayer::VTableLayoutMap.end())
{
    ULocalPlayer::VTableLayoutMap.emplace(STR("CleanupViewState"), 0x360);
}
