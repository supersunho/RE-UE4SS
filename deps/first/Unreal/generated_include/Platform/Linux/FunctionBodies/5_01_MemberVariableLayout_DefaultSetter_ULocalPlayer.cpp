if (auto it = ULocalPlayer::MemberOffsets.find(STR("CachedUniqueNetId")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("CachedUniqueNetId"), 0x48);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("ViewportClient")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("ViewportClient"), 0x78);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("Origin")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("Origin"), 0x80);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("Size")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("Size"), 0x90);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("LastViewLocation")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("LastViewLocation"), 0xa0);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("AspectRatioAxisConstraint")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("AspectRatioAxisConstraint"), 0xb8);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("PendingLevelPlayerControllerClass")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("PendingLevelPlayerControllerClass"), 0xc0);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("bSentSplitJoin")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("bSentSplitJoin"), 0xc8);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("ViewStates")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("ViewStates"), 0xd0);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("ControllerId")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("ControllerId"), 0xe0);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("OnControllerIdChangedEvent")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("OnControllerIdChangedEvent"), 0xe8);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("PlatformUserId")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("PlatformUserId"), 0x100);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("OnPlatformUserIdChangedEvent")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("OnPlatformUserIdChangedEvent"), 0x108);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("SubsystemCollection")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("SubsystemCollection"), 0x120);
}

if (auto it = ULocalPlayer::MemberOffsets.find(STR("SlateOperations")); it == ULocalPlayer::MemberOffsets.end())
{
    ULocalPlayer::MemberOffsets.emplace(STR("SlateOperations"), 0x1e0);
}
