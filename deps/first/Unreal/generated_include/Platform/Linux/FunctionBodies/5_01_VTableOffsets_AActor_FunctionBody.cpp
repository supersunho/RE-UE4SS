if (auto it = AActor::VTableLayoutMap.find(STR("~AActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("~AActor"), 0x00);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CanBeInCluster")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CanBeInCluster"), 0x30);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostInitProperties")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostInitProperties"), 0x50);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreSaveRoot")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreSaveRoot"), 0x68);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreSaveRoot_1")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreSaveRoot_1"), 0x70);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostSaveRoot")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostSaveRoot"), 0x78);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostSaveRoot_1")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostSaveRoot_1"), 0x80);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreSave")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreSave"), 0x88);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreSave_1")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreSave_1"), 0x90);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostLoad")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostLoad"), 0xa8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostLoadSubobjects")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostLoadSubobjects"), 0xb0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("BeginDestroy")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("BeginDestroy"), 0xb8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsReadyForFinishDestroy")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsReadyForFinishDestroy"), 0xc0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("Serialize")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("Serialize_1")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("Serialize_1"), 0xd8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostRename")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostRename"), 0xf0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsEditorOnly")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsEditorOnly"), 0x130);
}

if (auto it = AActor::VTableLayoutMap.find(STR("Rename")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("Rename"), 0x180);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetWorld")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetWorld"), 0x190);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsAsset")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsAsset"), 0x1d0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetLifetimeReplicatedProps")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetLifetimeReplicatedProps"), 0x1f8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetReplicatedCustomConditionState")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetReplicatedCustomConditionState"), 0x200);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsNameStableForNetworking")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsNameStableForNetworking"), 0x208);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsSupportedForNetworking")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsSupportedForNetworking"), 0x218);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetSubobjectsWithStableNamesForNetworking")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetSubobjectsWithStableNamesForNetworking"), 0x220);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreNetReceive")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreNetReceive"), 0x228);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetReceive")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetReceive"), 0x230);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ProcessEvent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ProcessEvent"), 0x268);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetFunctionCallspace")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetFunctionCallspace"), 0x270);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CallRemoteFunction")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CallRemoteFunction"), 0x278);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CheckDefaultSubobjectsInternal")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CheckDefaultSubobjectsInternal"), 0x298);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ValidateGeneratedRepEnums")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ValidateGeneratedRepEnums"), 0x2a0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnRep_ReplicateMovement")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnRep_ReplicateMovement"), 0x2b8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TearOff")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TearOff"), 0x2c0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("HasNetOwner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("HasNetOwner"), 0x2c8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("HasLocalNetOwner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("HasLocalNetOwner"), 0x2d0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnRep_Owner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnRep_Owner"), 0x2d8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SetReplicateMovement")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SetReplicateMovement"), 0x2e0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnRep_AttachmentReplication")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnRep_AttachmentReplication"), 0x2e8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsReplicationPausedForConnection")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsReplicationPausedForConnection"), 0x2f0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnReplicationPausedChanged")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnReplicationPausedChanged"), 0x2f8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ReplicateSubobjects")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ReplicateSubobjects"), 0x300);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnSubobjectCreatedFromReplication")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnSubobjectCreatedFromReplication"), 0x308);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnSubobjectDestroyFromReplication")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnSubobjectDestroyFromReplication"), 0x310);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreReplication")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreReplication"), 0x318);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreReplicationForReplay")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreReplicationForReplay"), 0x320);
}

if (auto it = AActor::VTableLayoutMap.find(STR("RewindForReplay")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("RewindForReplay"), 0x328);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnRep_Instigator")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnRep_Instigator"), 0x330);
}

if (auto it = AActor::VTableLayoutMap.find(STR("EnableInput")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("EnableInput"), 0x338);
}

if (auto it = AActor::VTableLayoutMap.find(STR("DisableInput")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("DisableInput"), 0x340);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetActorBounds")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetActorBounds"), 0x348);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetVelocity")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetVelocity"), 0x350);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SetActorHiddenInGame")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SetActorHiddenInGame"), 0x358);
}

if (auto it = AActor::VTableLayoutMap.find(STR("K2_DestroyActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("K2_DestroyActor"), 0x360);
}

if (auto it = AActor::VTableLayoutMap.find(STR("AddTickPrerequisiteActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("AddTickPrerequisiteActor"), 0x368);
}

if (auto it = AActor::VTableLayoutMap.find(STR("AddTickPrerequisiteComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("AddTickPrerequisiteComponent"), 0x370);
}

if (auto it = AActor::VTableLayoutMap.find(STR("RemoveTickPrerequisiteActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("RemoveTickPrerequisiteActor"), 0x378);
}

if (auto it = AActor::VTableLayoutMap.find(STR("RemoveTickPrerequisiteComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("RemoveTickPrerequisiteComponent"), 0x380);
}

if (auto it = AActor::VTableLayoutMap.find(STR("BeginPlay")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("BeginPlay"), 0x388);
}

if (auto it = AActor::VTableLayoutMap.find(STR("EndPlay")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("EndPlay"), 0x390);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorBeginOverlap")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorBeginOverlap"), 0x398);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorEndOverlap")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorEndOverlap"), 0x3a0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorBeginCursorOver")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorBeginCursorOver"), 0x3a8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorEndCursorOver")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorEndCursorOver"), 0x3b0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnClicked")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnClicked"), 0x3b8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnReleased")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnReleased"), 0x3c0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnInputTouchBegin")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnInputTouchBegin"), 0x3c8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnInputTouchEnd")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnInputTouchEnd"), 0x3d0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnInputTouchEnter")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnInputTouchEnter"), 0x3d8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnInputTouchLeave")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnInputTouchLeave"), 0x3e0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyHit")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyHit"), 0x3e8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SetLifeSpan")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SetLifeSpan"), 0x3f0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetLifeSpan")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetLifeSpan"), 0x3f8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsRuntimeOnly")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsRuntimeOnly"), 0x400);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GatherCurrentMovement")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GatherCurrentMovement"), 0x408);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetDefaultAttachComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetDefaultAttachComponent"), 0x410);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ApplyWorldOffset")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ApplyWorldOffset"), 0x418);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsLevelBoundsRelevant")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsLevelBoundsRelevant"), 0x420);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsHLODRelevant")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsHLODRelevant"), 0x428);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetPriority")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetPriority"), 0x430);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetReplayPriority")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetReplayPriority"), 0x438);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetDormancy")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetDormancy"), 0x440);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnActorChannelOpen")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnActorChannelOpen"), 0x448);
}

if (auto it = AActor::VTableLayoutMap.find(STR("UseShortConnectTimeout")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("UseShortConnectTimeout"), 0x450);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnSerializeNewActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnSerializeNewActor"), 0x458);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnNetCleanup")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnNetCleanup"), 0x460);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TickActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TickActor"), 0x468);
}

if (auto it = AActor::VTableLayoutMap.find(STR("AsyncPhysicsTickActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("AsyncPhysicsTickActor"), 0x470);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostActorCreated")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostActorCreated"), 0x478);
}

if (auto it = AActor::VTableLayoutMap.find(STR("LifeSpanExpired")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("LifeSpanExpired"), 0x480);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetReceiveRole")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetReceiveRole"), 0x488);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetInit")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetInit"), 0x490);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnRep_ReplicatedMovement")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnRep_ReplicatedMovement"), 0x498);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetReceiveLocationAndRotation")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetReceiveLocationAndRotation"), 0x4a0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetReceiveVelocity")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetReceiveVelocity"), 0x4a8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetReceivePhysicState")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetReceivePhysicState"), 0x4b0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SetOwner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SetOwner"), 0x4b8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CheckStillInWorld")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CheckStillInWorld"), 0x4c0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetPhysicsVolume")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetPhysicsVolume"), 0x4c8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("Tick")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("Tick"), 0x4d0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ShouldTickIfViewportsOnly")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ShouldTickIfViewportsOnly"), 0x4d8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsNetRelevantFor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsNetRelevantFor"), 0x4e0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsReplayRelevantFor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsReplayRelevantFor"), 0x4e8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsRelevancyOwnerFor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsRelevancyOwnerFor"), 0x4f0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreInitializeComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreInitializeComponents"), 0x4f8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostInitializeComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostInitializeComponents"), 0x500);
}

if (auto it = AActor::VTableLayoutMap.find(STR("DispatchPhysicsCollisionHit")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("DispatchPhysicsCollisionHit"), 0x508);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetOwner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetOwner"), 0x510);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetOwningPlayer")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetOwningPlayer"), 0x518);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetConnection")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetConnection"), 0x520);
}

if (auto it = AActor::VTableLayoutMap.find(STR("DestroyNetworkActorHandled")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("DestroyNetworkActorHandled"), 0x528);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsSelectionParentOfAttachedActors")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsSelectionParentOfAttachedActors"), 0x530);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsSelectionChild")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsSelectionChild"), 0x538);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetSelectionParent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetSelectionParent"), 0x540);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetRootSelectionParent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetRootSelectionParent"), 0x548);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PushSelectionToProxies")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PushSelectionToProxies"), 0x550);
}

if (auto it = AActor::VTableLayoutMap.find(STR("RegisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("RegisterAllComponents"), 0x558);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreRegisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreRegisterAllComponents"), 0x560);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostRegisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostRegisterAllComponents"), 0x568);
}

if (auto it = AActor::VTableLayoutMap.find(STR("UnregisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("UnregisterAllComponents"), 0x570);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostUnregisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostUnregisterAllComponents"), 0x578);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ReregisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ReregisterAllComponents"), 0x580);
}

if (auto it = AActor::VTableLayoutMap.find(STR("MarkComponentsAsPendingKill")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("MarkComponentsAsPendingKill"), 0x588);
}

if (auto it = AActor::VTableLayoutMap.find(STR("InvalidateLightingCacheDetailed")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("InvalidateLightingCacheDetailed"), 0x590);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TeleportTo")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TeleportTo"), 0x598);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TeleportSucceeded")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TeleportSucceeded"), 0x5a0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ClearCrossLevelReferences")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ClearCrossLevelReferences"), 0x5a8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsBasedOnActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsBasedOnActor"), 0x5b0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsAttachedTo")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsAttachedTo"), 0x5b8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnConstruction")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnConstruction"), 0x5c0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("RegisterActorTickFunctions")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("RegisterActorTickFunctions"), 0x5c8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("Destroyed")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("Destroyed"), 0x5d0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("FellOutOfWorld")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("FellOutOfWorld"), 0x5d8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OutsideWorldBounds")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OutsideWorldBounds"), 0x5e0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetComponentsBoundingBox")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetComponentsBoundingBox"), 0x5e8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CalculateComponentsBoundingBoxInLocalSpace")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CalculateComponentsBoundingBoxInLocalSpace"), 0x5f0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetComponentsBoundingCylinder")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetComponentsBoundingCylinder"), 0x5f8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetSimpleCollisionCylinder")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetSimpleCollisionCylinder"), 0x600);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsRootComponentCollisionRegistered")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsRootComponentCollisionRegistered"), 0x608);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TornOff")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TornOff"), 0x610);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetComponentsCollisionResponseToChannel")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetComponentsCollisionResponseToChannel"), 0x618);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CanBeBaseForCharacter")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CanBeBaseForCharacter"), 0x620);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TakeDamage")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TakeDamage"), 0x628);
}

if (auto it = AActor::VTableLayoutMap.find(STR("InternalTakeRadialDamage")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("InternalTakeRadialDamage"), 0x630);
}

if (auto it = AActor::VTableLayoutMap.find(STR("InternalTakePointDamage")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("InternalTakePointDamage"), 0x638);
}

if (auto it = AActor::VTableLayoutMap.find(STR("BecomeViewTarget")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("BecomeViewTarget"), 0x640);
}

if (auto it = AActor::VTableLayoutMap.find(STR("EndViewTarget")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("EndViewTarget"), 0x648);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CalcCamera")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CalcCamera"), 0x650);
}

if (auto it = AActor::VTableLayoutMap.find(STR("HasActiveCameraComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("HasActiveCameraComponent"), 0x658);
}

if (auto it = AActor::VTableLayoutMap.find(STR("HasActivePawnControlCameraComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("HasActivePawnControlCameraComponent"), 0x660);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetHumanReadableName")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetHumanReadableName"), 0x668);
}

if (auto it = AActor::VTableLayoutMap.find(STR("Reset")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("Reset"), 0x670);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetLastRenderTime")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetLastRenderTime"), 0x678);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ForceNetRelevant")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ForceNetRelevant"), 0x680);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ForceNetUpdate")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ForceNetUpdate"), 0x688);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PrestreamTextures")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PrestreamTextures"), 0x690);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetActorEyesViewPoint")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetActorEyesViewPoint"), 0x698);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetTargetLocation")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetTargetLocation"), 0x6a0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostRenderFor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostRenderFor"), 0x6a8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("FindComponentByClass")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("FindComponentByClass"), 0x6b0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("FindComponentByInterface")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("FindComponentByInterface"), 0x6b8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("AllowActorComponentToReplicate")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("AllowActorComponentToReplicate"), 0x6c0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsComponentRelevantForNavigation")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsComponentRelevantForNavigation"), 0x6c8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("DisplayDebug")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("DisplayDebug"), 0x6d0);
}
