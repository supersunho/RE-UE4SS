if (auto it = UWorld::MemberOffsets.find(STR("PersistentLevel")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PersistentLevel"), 0x30);
}

if (auto it = UWorld::MemberOffsets.find(STR("NetDriver")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("NetDriver"), 0x38);
}

if (auto it = UWorld::MemberOffsets.find(STR("LineBatcher")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("LineBatcher"), 0x40);
}

if (auto it = UWorld::MemberOffsets.find(STR("PersistentLineBatcher")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PersistentLineBatcher"), 0x48);
}

if (auto it = UWorld::MemberOffsets.find(STR("ForegroundLineBatcher")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ForegroundLineBatcher"), 0x50);
}

if (auto it = UWorld::MemberOffsets.find(STR("NetworkManager")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("NetworkManager"), 0x58);
}

if (auto it = UWorld::MemberOffsets.find(STR("PhysicsCollisionHandler")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PhysicsCollisionHandler"), 0x60);
}

if (auto it = UWorld::MemberOffsets.find(STR("ExtraReferencedObjects")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ExtraReferencedObjects"), 0x68);
}

if (auto it = UWorld::MemberOffsets.find(STR("PerModuleDataObjects")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PerModuleDataObjects"), 0x78);
}

if (auto it = UWorld::MemberOffsets.find(STR("StreamingLevels")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("StreamingLevels"), 0x88);
}

if (auto it = UWorld::MemberOffsets.find(STR("StreamingLevelsToConsider")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("StreamingLevelsToConsider"), 0x98);
}

if (auto it = UWorld::MemberOffsets.find(STR("ServerStreamingLevelsVisibility")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ServerStreamingLevelsVisibility"), 0xc0);
}

if (auto it = UWorld::MemberOffsets.find(STR("StreamingLevelsPrefix")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("StreamingLevelsPrefix"), 0xc8);
}

if (auto it = UWorld::MemberOffsets.find(STR("bSupportsMakingVisibleTransactionRequests")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bSupportsMakingVisibleTransactionRequests"), 0xd8);
}

if (auto it = UWorld::MemberOffsets.find(STR("bSupportsMakingInvisibleTransactionRequests")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bSupportsMakingInvisibleTransactionRequests"), 0xda);
}

if (auto it = UWorld::MemberOffsets.find(STR("CurrentLevelPendingVisibility")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("CurrentLevelPendingVisibility"), 0xe0);
}

if (auto it = UWorld::MemberOffsets.find(STR("CurrentLevelPendingInvisibility")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("CurrentLevelPendingInvisibility"), 0xe8);
}

if (auto it = UWorld::MemberOffsets.find(STR("DemoNetDriver")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("DemoNetDriver"), 0xf0);
}

if (auto it = UWorld::MemberOffsets.find(STR("MyParticleEventManager")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("MyParticleEventManager"), 0xf8);
}

if (auto it = UWorld::MemberOffsets.find(STR("DefaultPhysicsVolume")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("DefaultPhysicsVolume"), 0x100);
}

if (auto it = UWorld::MemberOffsets.find(STR("bAllowDeferredPhysicsStateCreation")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bAllowDeferredPhysicsStateCreation"), 0x108);
}

if (auto it = UWorld::MemberOffsets.find(STR("ViewLocationsRenderedLastFrame")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ViewLocationsRenderedLastFrame"), 0x110);
}

if (auto it = UWorld::MemberOffsets.find(STR("CachedViewInfoRenderedLastFrame")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("CachedViewInfoRenderedLastFrame"), 0x120);
}

if (auto it = UWorld::MemberOffsets.find(STR("LastRenderTime")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("LastRenderTime"), 0x130);
}

if (auto it = UWorld::MemberOffsets.find(STR("FeatureLevel")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("FeatureLevel"), 0x138);
}

if (auto it = UWorld::MemberOffsets.find(STR("TickGroup")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("TickGroup"), 0x139);
}

if (auto it = UWorld::MemberOffsets.find(STR("WorldType")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("WorldType"), 0x13a);
}

if (auto it = UWorld::MemberOffsets.find(STR("bWorldWasLoadedThisTick")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bWorldWasLoadedThisTick"), 0x13b);
}

if (auto it = UWorld::MemberOffsets.find(STR("bTriggerPostLoadMap")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bTriggerPostLoadMap"), 0x13b);
}

if (auto it = UWorld::MemberOffsets.find(STR("bInTick")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bInTick"), 0x13b);
}

if (auto it = UWorld::MemberOffsets.find(STR("bIsBuilt")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bIsBuilt"), 0x13b);
}

if (auto it = UWorld::MemberOffsets.find(STR("bTickNewlySpawned")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bTickNewlySpawned"), 0x13b);
}

if (auto it = UWorld::MemberOffsets.find(STR("bPostTickComponentUpdate")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bPostTickComponentUpdate"), 0x13b);
}

if (auto it = UWorld::MemberOffsets.find(STR("bIsWorldInitialized")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bIsWorldInitialized"), 0x13b);
}

if (auto it = UWorld::MemberOffsets.find(STR("bIsLevelStreamingFrozen")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bIsLevelStreamingFrozen"), 0x13b);
}

if (auto it = UWorld::MemberOffsets.find(STR("bDoDelayedUpdateCullDistanceVolumes")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bDoDelayedUpdateCullDistanceVolumes"), 0x13c);
}

if (auto it = UWorld::MemberOffsets.find(STR("bIsRunningConstructionScript")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bIsRunningConstructionScript"), 0x13c);
}

if (auto it = UWorld::MemberOffsets.find(STR("bShouldSimulatePhysics")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bShouldSimulatePhysics"), 0x13c);
}

if (auto it = UWorld::MemberOffsets.find(STR("bDropDetail")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bDropDetail"), 0x13c);
}

if (auto it = UWorld::MemberOffsets.find(STR("bAggressiveLOD")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bAggressiveLOD"), 0x13c);
}

if (auto it = UWorld::MemberOffsets.find(STR("bIsDefaultLevel")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bIsDefaultLevel"), 0x13c);
}

if (auto it = UWorld::MemberOffsets.find(STR("bRequestedBlockOnAsyncLoading")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bRequestedBlockOnAsyncLoading"), 0x13c);
}

if (auto it = UWorld::MemberOffsets.find(STR("bActorsInitialized")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bActorsInitialized"), 0x13c);
}

if (auto it = UWorld::MemberOffsets.find(STR("bBegunPlay")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bBegunPlay"), 0x13d);
}

if (auto it = UWorld::MemberOffsets.find(STR("bMatchStarted")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bMatchStarted"), 0x13d);
}

if (auto it = UWorld::MemberOffsets.find(STR("bPlayersOnly")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bPlayersOnly"), 0x13d);
}

if (auto it = UWorld::MemberOffsets.find(STR("bPlayersOnlyPending")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bPlayersOnlyPending"), 0x13d);
}

if (auto it = UWorld::MemberOffsets.find(STR("bStartup")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bStartup"), 0x13d);
}

if (auto it = UWorld::MemberOffsets.find(STR("bIsTearingDown")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bIsTearingDown"), 0x13d);
}

if (auto it = UWorld::MemberOffsets.find(STR("bKismetScriptError")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bKismetScriptError"), 0x13d);
}

if (auto it = UWorld::MemberOffsets.find(STR("bDebugPauseExecution")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bDebugPauseExecution"), 0x13d);
}

if (auto it = UWorld::MemberOffsets.find(STR("bIsCameraMoveableWhenPaused")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bIsCameraMoveableWhenPaused"), 0x13e);
}

if (auto it = UWorld::MemberOffsets.find(STR("bAllowAudioPlayback")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bAllowAudioPlayback"), 0x13e);
}

if (auto it = UWorld::MemberOffsets.find(STR("bAreConstraintsDirty")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bAreConstraintsDirty"), 0x13e);
}

if (auto it = UWorld::MemberOffsets.find(STR("bRequiresHitProxies")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bRequiresHitProxies"), 0x13e);
}

if (auto it = UWorld::MemberOffsets.find(STR("bShouldTick")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bShouldTick"), 0x13e);
}

if (auto it = UWorld::MemberOffsets.find(STR("bStreamingDataDirty")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bStreamingDataDirty"), 0x13e);
}

if (auto it = UWorld::MemberOffsets.find(STR("bShouldForceUnloadStreamingLevels")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bShouldForceUnloadStreamingLevels"), 0x13e);
}

if (auto it = UWorld::MemberOffsets.find(STR("bShouldForceVisibleStreamingLevels")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bShouldForceVisibleStreamingLevels"), 0x13e);
}

if (auto it = UWorld::MemberOffsets.find(STR("bMaterialParameterCollectionInstanceNeedsDeferredUpdate")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bMaterialParameterCollectionInstanceNeedsDeferredUpdate"), 0x13f);
}

if (auto it = UWorld::MemberOffsets.find(STR("bHasEverBeenInitialized")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bHasEverBeenInitialized"), 0x13f);
}

if (auto it = UWorld::MemberOffsets.find(STR("IsInBlockTillLevelStreamingCompleted")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("IsInBlockTillLevelStreamingCompleted"), 0x140);
}

if (auto it = UWorld::MemberOffsets.find(STR("BlockTillLevelStreamingCompletedEpoch")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("BlockTillLevelStreamingCompletedEpoch"), 0x144);
}

if (auto it = UWorld::MemberOffsets.find(STR("NavigationSystem")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("NavigationSystem"), 0x148);
}

if (auto it = UWorld::MemberOffsets.find(STR("AuthorityGameMode")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("AuthorityGameMode"), 0x150);
}

if (auto it = UWorld::MemberOffsets.find(STR("GameState")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("GameState"), 0x158);
}

if (auto it = UWorld::MemberOffsets.find(STR("AISystem")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("AISystem"), 0x160);
}

if (auto it = UWorld::MemberOffsets.find(STR("AvoidanceManager")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("AvoidanceManager"), 0x168);
}

if (auto it = UWorld::MemberOffsets.find(STR("Levels")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("Levels"), 0x170);
}

if (auto it = UWorld::MemberOffsets.find(STR("LevelCollections")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("LevelCollections"), 0x180);
}

if (auto it = UWorld::MemberOffsets.find(STR("ActiveLevelCollectionIndex")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ActiveLevelCollectionIndex"), 0x190);
}

if (auto it = UWorld::MemberOffsets.find(STR("AudioDeviceHandle")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("AudioDeviceHandle"), 0x198);
}

if (auto it = UWorld::MemberOffsets.find(STR("AudioDeviceDestroyedHandle")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("AudioDeviceDestroyedHandle"), 0x1b0);
}

if (auto it = UWorld::MemberOffsets.find(STR("OwningGameInstance")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OwningGameInstance"), 0x1b8);
}

if (auto it = UWorld::MemberOffsets.find(STR("ParameterCollectionInstances")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ParameterCollectionInstances"), 0x1c0);
}

if (auto it = UWorld::MemberOffsets.find(STR("CanvasForRenderingToTarget")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("CanvasForRenderingToTarget"), 0x1d0);
}

if (auto it = UWorld::MemberOffsets.find(STR("CanvasForDrawMaterialToRenderTarget")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("CanvasForDrawMaterialToRenderTarget"), 0x1d8);
}

if (auto it = UWorld::MemberOffsets.find(STR("Scene")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("Scene"), 0x1e0);
}

if (auto it = UWorld::MemberOffsets.find(STR("ControllerList")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ControllerList"), 0x1e8);
}

if (auto it = UWorld::MemberOffsets.find(STR("PlayerControllerList")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PlayerControllerList"), 0x1f8);
}

if (auto it = UWorld::MemberOffsets.find(STR("AutoCameraActorList")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("AutoCameraActorList"), 0x208);
}

if (auto it = UWorld::MemberOffsets.find(STR("NonDefaultPhysicsVolumeList")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("NonDefaultPhysicsVolumeList"), 0x218);
}

if (auto it = UWorld::MemberOffsets.find(STR("PhysicsScene")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PhysicsScene"), 0x228);
}

if (auto it = UWorld::MemberOffsets.find(STR("PhysicsScene_Chaos")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PhysicsScene_Chaos"), 0x230);
}

if (auto it = UWorld::MemberOffsets.find(STR("DefaultPhysicsScene_Chaos")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("DefaultPhysicsScene_Chaos"), 0x240);
}

if (auto it = UWorld::MemberOffsets.find(STR("PhysicsField")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PhysicsField"), 0x250);
}

if (auto it = UWorld::MemberOffsets.find(STR("LWILastAssignedUID")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("LWILastAssignedUID"), 0x258);
}

if (auto it = UWorld::MemberOffsets.find(STR("ComponentsThatNeedPreEndOfFrameSync")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ComponentsThatNeedPreEndOfFrameSync"), 0x260);
}

if (auto it = UWorld::MemberOffsets.find(STR("ComponentsThatNeedEndOfFrameUpdate")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ComponentsThatNeedEndOfFrameUpdate"), 0x2b0);
}

if (auto it = UWorld::MemberOffsets.find(STR("ComponentsThatNeedEndOfFrameUpdate_OnGameThread")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ComponentsThatNeedEndOfFrameUpdate_OnGameThread"), 0x2c0);
}

if (auto it = UWorld::MemberOffsets.find(STR("AsyncTraceState")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("AsyncTraceState"), 0x2d0);
}

if (auto it = UWorld::MemberOffsets.find(STR("OnActorSpawned")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OnActorSpawned"), 0x398);
}

if (auto it = UWorld::MemberOffsets.find(STR("OnActorPreSpawnInitialization")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OnActorPreSpawnInitialization"), 0x3b0);
}

if (auto it = UWorld::MemberOffsets.find(STR("OnActorDestroyed")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OnActorDestroyed"), 0x3c8);
}

if (auto it = UWorld::MemberOffsets.find(STR("TimerManager")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("TimerManager"), 0x3e0);
}

if (auto it = UWorld::MemberOffsets.find(STR("LatentActionManager")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("LatentActionManager"), 0x3e8);
}

if (auto it = UWorld::MemberOffsets.find(STR("BuildStreamingDataTimer")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("BuildStreamingDataTimer"), 0x448);
}

if (auto it = UWorld::MemberOffsets.find(STR("TickDispatchEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("TickDispatchEvent"), 0x450);
}

if (auto it = UWorld::MemberOffsets.find(STR("PostTickDispatchEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PostTickDispatchEvent"), 0x468);
}

if (auto it = UWorld::MemberOffsets.find(STR("PreTickFlushEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PreTickFlushEvent"), 0x480);
}

if (auto it = UWorld::MemberOffsets.find(STR("TickFlushEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("TickFlushEvent"), 0x498);
}

if (auto it = UWorld::MemberOffsets.find(STR("PostTickFlushEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PostTickFlushEvent"), 0x4b0);
}

if (auto it = UWorld::MemberOffsets.find(STR("LevelsChangedEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("LevelsChangedEvent"), 0x4c8);
}

if (auto it = UWorld::MemberOffsets.find(STR("BeginTearingDownEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("BeginTearingDownEvent"), 0x4e0);
}

if (auto it = UWorld::MemberOffsets.find(STR("OnWorldPartitionInitializedEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OnWorldPartitionInitializedEvent"), 0x4f8);
}

if (auto it = UWorld::MemberOffsets.find(STR("OnWorldPartitionUninitializedEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OnWorldPartitionUninitializedEvent"), 0x510);
}

if (auto it = UWorld::MemberOffsets.find(STR("MovieSceneSequenceTick")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("MovieSceneSequenceTick"), 0x528);
}

if (auto it = UWorld::MemberOffsets.find(STR("URL")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("URL"), 0x540);
}

if (auto it = UWorld::MemberOffsets.find(STR("FXSystem")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("FXSystem"), 0x5a8);
}

if (auto it = UWorld::MemberOffsets.find(STR("TickTaskLevel")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("TickTaskLevel"), 0x5b0);
}

if (auto it = UWorld::MemberOffsets.find(STR("StartPhysicsTickFunction")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("StartPhysicsTickFunction"), 0x5b8);
}

if (auto it = UWorld::MemberOffsets.find(STR("EndPhysicsTickFunction")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("EndPhysicsTickFunction"), 0x5e8);
}

if (auto it = UWorld::MemberOffsets.find(STR("PlayerNum")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PlayerNum"), 0x618);
}

if (auto it = UWorld::MemberOffsets.find(STR("StreamingVolumeUpdateDelay")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("StreamingVolumeUpdateDelay"), 0x61c);
}

if (auto it = UWorld::MemberOffsets.find(STR("OnBeginPostProcessSettings")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OnBeginPostProcessSettings"), 0x620);
}

if (auto it = UWorld::MemberOffsets.find(STR("PostProcessVolumes")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PostProcessVolumes"), 0x638);
}

if (auto it = UWorld::MemberOffsets.find(STR("AudioVolumes")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("AudioVolumes"), 0x648);
}

if (auto it = UWorld::MemberOffsets.find(STR("LastTimeUnbuiltLightingWasEncountered")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("LastTimeUnbuiltLightingWasEncountered"), 0x658);
}

if (auto it = UWorld::MemberOffsets.find(STR("TimeSeconds")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("TimeSeconds"), 0x660);
}

if (auto it = UWorld::MemberOffsets.find(STR("UnpausedTimeSeconds")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("UnpausedTimeSeconds"), 0x668);
}

if (auto it = UWorld::MemberOffsets.find(STR("RealTimeSeconds")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("RealTimeSeconds"), 0x670);
}

if (auto it = UWorld::MemberOffsets.find(STR("AudioTimeSeconds")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("AudioTimeSeconds"), 0x678);
}

if (auto it = UWorld::MemberOffsets.find(STR("DeltaRealTimeSeconds")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("DeltaRealTimeSeconds"), 0x680);
}

if (auto it = UWorld::MemberOffsets.find(STR("DeltaTimeSeconds")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("DeltaTimeSeconds"), 0x684);
}

if (auto it = UWorld::MemberOffsets.find(STR("PauseDelay")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PauseDelay"), 0x688);
}

if (auto it = UWorld::MemberOffsets.find(STR("OriginLocation")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OriginLocation"), 0x690);
}

if (auto it = UWorld::MemberOffsets.find(STR("RequestedOriginLocation")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("RequestedOriginLocation"), 0x69c);
}

if (auto it = UWorld::MemberOffsets.find(STR("OriginOffsetThisFrame")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OriginOffsetThisFrame"), 0x6a8);
}

if (auto it = UWorld::MemberOffsets.find(STR("NextSwitchCountdown")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("NextSwitchCountdown"), 0x6c0);
}

if (auto it = UWorld::MemberOffsets.find(STR("WorldComposition")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("WorldComposition"), 0x6c8);
}

if (auto it = UWorld::MemberOffsets.find(STR("ContentBundleManager")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ContentBundleManager"), 0x6d0);
}

if (auto it = UWorld::MemberOffsets.find(STR("FlushLevelStreamingType")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("FlushLevelStreamingType"), 0x6d8);
}

if (auto it = UWorld::MemberOffsets.find(STR("NextTravelType")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("NextTravelType"), 0x6d9);
}

if (auto it = UWorld::MemberOffsets.find(STR("NumStreamingLevelsBeingLoaded")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("NumStreamingLevelsBeingLoaded"), 0x6da);
}

if (auto it = UWorld::MemberOffsets.find(STR("NextURL")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("NextURL"), 0x6e0);
}

if (auto it = UWorld::MemberOffsets.find(STR("PreparingLevelNames")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PreparingLevelNames"), 0x6f0);
}

if (auto it = UWorld::MemberOffsets.find(STR("CommittedPersistentLevelName")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("CommittedPersistentLevelName"), 0x700);
}

if (auto it = UWorld::MemberOffsets.find(STR("bMarkedObjectsPendingKill")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("bMarkedObjectsPendingKill"), 0x708);
}

if (auto it = UWorld::MemberOffsets.find(STR("CleanupWorldTag")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("CleanupWorldTag"), 0x70c);
}

if (auto it = UWorld::MemberOffsets.find(STR("PerfTrackers")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PerfTrackers"), 0x710);
}

if (auto it = UWorld::MemberOffsets.find(STR("ParticlePerfStats")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ParticlePerfStats"), 0x718);
}

if (auto it = UWorld::MemberOffsets.find(STR("OnActorsInitialized")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OnActorsInitialized"), 0x720);
}

if (auto it = UWorld::MemberOffsets.find(STR("OnWorldBeginPlay")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OnWorldBeginPlay"), 0x738);
}

if (auto it = UWorld::MemberOffsets.find(STR("OnWorldMatchStarting")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OnWorldMatchStarting"), 0x750);
}

if (auto it = UWorld::MemberOffsets.find(STR("GameStateSetEvent")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("GameStateSetEvent"), 0x768);
}

if (auto it = UWorld::MemberOffsets.find(STR("PSCPool")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PSCPool"), 0x780);
}

if (auto it = UWorld::MemberOffsets.find(STR("SubsystemCollection")); it == UWorld::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("SubsystemCollection"), 0x7d8);
}
