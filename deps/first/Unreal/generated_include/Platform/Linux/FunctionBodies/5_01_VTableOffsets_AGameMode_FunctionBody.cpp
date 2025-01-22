if (auto it = AGameMode::VTableLayoutMap.find(STR("~AGameMode")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("~AGameMode"), 0x00);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("PostLogin")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("PostLogin"), 0x400);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("Logout")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("Logout"), 0x410);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("IsHandlingReplays")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("IsHandlingReplays"), 0x460);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("SpawnPlayerFromSimulate")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("SpawnPlayerFromSimulate"), 0x468);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("InitSeamlessTravelPlayer")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("InitSeamlessTravelPlayer"), 0x4c8);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("Tick")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("Tick"), 0x4d0);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("ReadyToEndMatch_Implementation")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("ReadyToEndMatch_Implementation"), 0x4d8);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("ReadyToStartMatch_Implementation")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("ReadyToStartMatch_Implementation"), 0x4e0);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("IsMatchInProgress")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("IsMatchInProgress"), 0x4e8);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("StartMatch")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("StartMatch"), 0x4f0);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("EndMatch")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("EndMatch"), 0x4f8);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("RestartGame")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("RestartGame"), 0x500);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("AbortMatch")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("AbortMatch"), 0x508);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("SetMatchState")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("SetMatchState"), 0x510);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("OnMatchStateSet")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("OnMatchStateSet"), 0x518);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HandleMatchIsWaitingToStart")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HandleMatchIsWaitingToStart"), 0x520);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HandleMatchHasStarted")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HandleMatchHasStarted"), 0x528);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HandleMatchHasEnded")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HandleMatchHasEnded"), 0x530);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HandleLeavingMap")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HandleLeavingMap"), 0x538);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HandleMatchAborted")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HandleMatchAborted"), 0x540);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("GetNetworkNumber")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("GetNetworkNumber"), 0x548);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("GetTravelType")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("GetTravelType"), 0x550);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("Say")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("Say"), 0x558);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("Broadcast")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("Broadcast"), 0x560);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("BroadcastLocalized")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("BroadcastLocalized"), 0x568);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("AddInactivePlayer")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("AddInactivePlayer"), 0x570);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("FindInactivePlayer")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("FindInactivePlayer"), 0x578);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("OverridePlayerState")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("OverridePlayerState"), 0x580);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("SetSeamlessTravelViewTarget")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("SetSeamlessTravelViewTarget"), 0x588);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("PreCommitMapChange")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("PreCommitMapChange"), 0x590);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("PostCommitMapChange")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("PostCommitMapChange"), 0x598);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("NotifyPendingConnectionLost")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("NotifyPendingConnectionLost"), 0x5a0);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HandleDisconnect")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HandleDisconnect"), 0x5a8);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("PlayerCanRestart_Implementation")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("PlayerCanRestart_Implementation"), 0x6f8);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HandleStartingNewPlayer_Implementation")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HandleStartingNewPlayer_Implementation"), 0x720);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("InitGame")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("InitGame"), 0x738);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("GetNumPlayers")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("GetNumPlayers"), 0x750);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("GetNumSpectators")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("GetNumSpectators"), 0x758);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("StartPlay")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("StartPlay"), 0x760);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HasMatchStarted")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HasMatchStarted"), 0x768);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HasMatchEnded")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HasMatchEnded"), 0x770);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("CanServerTravel")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("CanServerTravel"), 0x7a8);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("HandleSeamlessTravelPlayer")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("HandleSeamlessTravelPlayer"), 0x7d0);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("PostSeamlessTravel")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("PostSeamlessTravel"), 0x7d8);
}

if (auto it = AGameMode::VTableLayoutMap.find(STR("StartToLeaveMap")); it == AGameMode::VTableLayoutMap.end())
{
    AGameMode::VTableLayoutMap.emplace(STR("StartToLeaveMap"), 0x7e0);
}
