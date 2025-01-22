if (auto it = FWorldContext::MemberOffsets.find(STR("WorldType")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("WorldType"), 0x00);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("SeamlessTravelHandler")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("SeamlessTravelHandler"), 0x08);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("ContextHandle")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("ContextHandle"), 0xa0);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("TravelURL")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("TravelURL"), 0xa8);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("TravelType")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("TravelType"), 0xb8);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("LastURL")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("LastURL"), 0xc0);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("LastRemoteURL")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("LastRemoteURL"), 0x128);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("PendingNetGame")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("PendingNetGame"), 0x190);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("PackagesToFullyLoad")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("PackagesToFullyLoad"), 0x198);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("LevelsToLoadForPendingMapChange")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("LevelsToLoadForPendingMapChange"), 0x1a8);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("LoadedLevelsForPendingMapChange")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("LoadedLevelsForPendingMapChange"), 0x1b8);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("PendingMapChangeFailureDescription")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("PendingMapChangeFailureDescription"), 0x1c8);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("bShouldCommitPendingMapChange")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("bShouldCommitPendingMapChange"), 0x1d8);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("ObjectReferencers")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("ObjectReferencers"), 0x1e0);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("PendingLevelStreamingStatusUpdates")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("PendingLevelStreamingStatusUpdates"), 0x1f0);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("GameViewport")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("GameViewport"), 0x200);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("OwningGameInstance")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("OwningGameInstance"), 0x208);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("ActiveNetDrivers")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("ActiveNetDrivers"), 0x210);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("PIEInstance")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("PIEInstance"), 0x220);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("PIEPrefix")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("PIEPrefix"), 0x228);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("PIEWorldFeatureLevel")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("PIEWorldFeatureLevel"), 0x238);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("RunAsDedicated")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("RunAsDedicated"), 0x23c);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("bWaitingOnOnlineSubsystem")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("bWaitingOnOnlineSubsystem"), 0x23d);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("bIsPrimaryPIEInstance")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("bIsPrimaryPIEInstance"), 0x23e);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("AudioDeviceID")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("AudioDeviceID"), 0x240);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("CustomDescription")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("CustomDescription"), 0x248);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("PIEFixedTickSeconds")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("PIEFixedTickSeconds"), 0x258);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("PIEAccumulatedTickSeconds")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("PIEAccumulatedTickSeconds"), 0x25c);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("GarbageObjectsToVerify")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("GarbageObjectsToVerify"), 0x260);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("ExternalReferences")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("ExternalReferences"), 0x2b0);
}

if (auto it = FWorldContext::MemberOffsets.find(STR("ThisCurrentWorld")); it == FWorldContext::MemberOffsets.end())
{
    FWorldContext::MemberOffsets.emplace(STR("ThisCurrentWorld"), 0x2c0);
}
