if (auto it = AActor::VTableLayoutMap.find(STR("__vecDelDtor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("__vecDelDtor"), 0x0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnRep_ReplicateMovement")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnRep_ReplicateMovement"), 0x2B8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TearOff")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TearOff"), 0x2C0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("HasNetOwner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("HasNetOwner"), 0x2C8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("HasLocalNetOwner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("HasLocalNetOwner"), 0x2D0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnRep_Owner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnRep_Owner"), 0x2D8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SetReplicateMovement")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SetReplicateMovement"), 0x2E0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnRep_AttachmentReplication")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnRep_AttachmentReplication"), 0x2E8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsReplicationPausedForConnection")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsReplicationPausedForConnection"), 0x2F0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnReplicationPausedChanged")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnReplicationPausedChanged"), 0x2F8);
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

if (auto it = AActor::VTableLayoutMap.find(STR("CreateInputComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CreateInputComponent"), 0x340);
}

if (auto it = AActor::VTableLayoutMap.find(STR("DisableInput")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("DisableInput"), 0x348);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetActorBounds")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetActorBounds"), 0x350);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetVelocity")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetVelocity"), 0x358);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SetActorHiddenInGame")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SetActorHiddenInGame"), 0x360);
}

if (auto it = AActor::VTableLayoutMap.find(STR("K2_DestroyActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("K2_DestroyActor"), 0x368);
}

if (auto it = AActor::VTableLayoutMap.find(STR("AddTickPrerequisiteActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("AddTickPrerequisiteActor"), 0x370);
}

if (auto it = AActor::VTableLayoutMap.find(STR("AddTickPrerequisiteComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("AddTickPrerequisiteComponent"), 0x378);
}

if (auto it = AActor::VTableLayoutMap.find(STR("RemoveTickPrerequisiteActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("RemoveTickPrerequisiteActor"), 0x380);
}

if (auto it = AActor::VTableLayoutMap.find(STR("RemoveTickPrerequisiteComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("RemoveTickPrerequisiteComponent"), 0x388);
}

if (auto it = AActor::VTableLayoutMap.find(STR("BeginPlay")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("BeginPlay"), 0x390);
}

if (auto it = AActor::VTableLayoutMap.find(STR("EndPlay")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("EndPlay"), 0x398);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorBeginOverlap")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorBeginOverlap"), 0x3A0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorEndOverlap")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorEndOverlap"), 0x3A8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorBeginCursorOver")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorBeginCursorOver"), 0x3B0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorEndCursorOver")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorEndCursorOver"), 0x3B8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnClicked")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnClicked"), 0x3C0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnReleased")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnReleased"), 0x3C8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnInputTouchBegin")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnInputTouchBegin"), 0x3D0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnInputTouchEnd")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnInputTouchEnd"), 0x3D8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnInputTouchEnter")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnInputTouchEnter"), 0x3E0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyActorOnInputTouchLeave")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyActorOnInputTouchLeave"), 0x3E8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("NotifyHit")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("NotifyHit"), 0x3F0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SetLifeSpan")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SetLifeSpan"), 0x3F8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetLifeSpan")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetLifeSpan"), 0x400);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsRuntimeOnly")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsRuntimeOnly"), 0x408);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GatherCurrentMovement")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GatherCurrentMovement"), 0x410);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetDefaultAttachComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetDefaultAttachComponent"), 0x418);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ApplyWorldOffset")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ApplyWorldOffset"), 0x420);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsLevelBoundsRelevant")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsLevelBoundsRelevant"), 0x428);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsHLODRelevant")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsHLODRelevant"), 0x430);
}

if (auto it = AActor::VTableLayoutMap.find(STR("HasHLODRelevantComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("HasHLODRelevantComponents"), 0x438);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetHLODRelevantComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetHLODRelevantComponents"), 0x440);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetPriority")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetPriority"), 0x448);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetReplayPriority")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetReplayPriority"), 0x450);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetDormancy")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetDormancy"), 0x458);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnActorChannelOpen")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnActorChannelOpen"), 0x460);
}

if (auto it = AActor::VTableLayoutMap.find(STR("UseShortConnectTimeout")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("UseShortConnectTimeout"), 0x468);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnSerializeNewActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnSerializeNewActor"), 0x470);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnNetCleanup")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnNetCleanup"), 0x478);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SetActorTickEnabled")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SetActorTickEnabled"), 0x480);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TickActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TickActor"), 0x488);
}

if (auto it = AActor::VTableLayoutMap.find(STR("AsyncPhysicsTickActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("AsyncPhysicsTickActor"), 0x490);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostActorCreated")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostActorCreated"), 0x498);
}

if (auto it = AActor::VTableLayoutMap.find(STR("LifeSpanExpired")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("LifeSpanExpired"), 0x4A0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetReceiveRole")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetReceiveRole"), 0x4A8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetInit")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetInit"), 0x4B0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnRep_ReplicatedMovement")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnRep_ReplicatedMovement"), 0x4B8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetReceiveLocationAndRotation")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetReceiveLocationAndRotation"), 0x4C0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetReceiveVelocity")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetReceiveVelocity"), 0x4C8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostNetReceivePhysicState")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostNetReceivePhysicState"), 0x4D0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SetOwner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SetOwner"), 0x4D8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CheckStillInWorld")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CheckStillInWorld"), 0x4E0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetPhysicsVolume")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetPhysicsVolume"), 0x4E8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("Tick")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("Tick"), 0x4F0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ShouldTickIfViewportsOnly")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ShouldTickIfViewportsOnly"), 0x4F8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsNetRelevantFor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsNetRelevantFor"), 0x500);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsReplayRelevantFor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsReplayRelevantFor"), 0x508);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsRelevancyOwnerFor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsRelevancyOwnerFor"), 0x510);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreInitializeComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreInitializeComponents"), 0x518);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostInitializeComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostInitializeComponents"), 0x520);
}

if (auto it = AActor::VTableLayoutMap.find(STR("DispatchPhysicsCollisionHit")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("DispatchPhysicsCollisionHit"), 0x528);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetOwner")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetOwner"), 0x530);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetOwningPlayer")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetOwningPlayer"), 0x538);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetNetConnection")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetNetConnection"), 0x540);
}

if (auto it = AActor::VTableLayoutMap.find(STR("DestroyNetworkActorHandled")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("DestroyNetworkActorHandled"), 0x548);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsSelectionParentOfAttachedActors")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsSelectionParentOfAttachedActors"), 0x550);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsSelectionChild")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsSelectionChild"), 0x558);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetSelectionParent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetSelectionParent"), 0x560);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetRootSelectionParent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetRootSelectionParent"), 0x568);
}

if (auto it = AActor::VTableLayoutMap.find(STR("SupportsSubRootSelection")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("SupportsSubRootSelection"), 0x570);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PushSelectionToProxies")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PushSelectionToProxies"), 0x578);
}

if (auto it = AActor::VTableLayoutMap.find(STR("RegisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("RegisterAllComponents"), 0x580);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PreRegisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PreRegisterAllComponents"), 0x588);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostRegisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostRegisterAllComponents"), 0x590);
}

if (auto it = AActor::VTableLayoutMap.find(STR("UnregisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("UnregisterAllComponents"), 0x598);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostUnregisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostUnregisterAllComponents"), 0x5A0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ReregisterAllComponents")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ReregisterAllComponents"), 0x5A8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("MarkComponentsAsPendingKill")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("MarkComponentsAsPendingKill"), 0x5B0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("MarkComponentsAsGarbage")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("MarkComponentsAsGarbage"), 0x5B8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("InvalidateLightingCacheDetailed")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("InvalidateLightingCacheDetailed"), 0x5C0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TeleportTo")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TeleportTo"), 0x5C8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TeleportSucceeded")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TeleportSucceeded"), 0x5D0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ClearCrossLevelReferences")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ClearCrossLevelReferences"), 0x5D8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsBasedOnActor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsBasedOnActor"), 0x5E0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsAttachedTo")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsAttachedTo"), 0x5E8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OnConstruction")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OnConstruction"), 0x5F0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("BeginReplication")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("BeginReplication"), 0x5F8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("EndReplication")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("EndReplication"), 0x600);
}

if (auto it = AActor::VTableLayoutMap.find(STR("RegisterActorTickFunctions")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("RegisterActorTickFunctions"), 0x608);
}

if (auto it = AActor::VTableLayoutMap.find(STR("Destroyed")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("Destroyed"), 0x610);
}

if (auto it = AActor::VTableLayoutMap.find(STR("FellOutOfWorld")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("FellOutOfWorld"), 0x618);
}

if (auto it = AActor::VTableLayoutMap.find(STR("OutsideWorldBounds")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("OutsideWorldBounds"), 0x620);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetComponentsBoundingBox")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetComponentsBoundingBox"), 0x628);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CalculateComponentsBoundingBoxInLocalSpace")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CalculateComponentsBoundingBoxInLocalSpace"), 0x630);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetComponentsBoundingCylinder")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetComponentsBoundingCylinder"), 0x638);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetSimpleCollisionCylinder")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetSimpleCollisionCylinder"), 0x640);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsRootComponentCollisionRegistered")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsRootComponentCollisionRegistered"), 0x648);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TornOff")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TornOff"), 0x650);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetComponentsCollisionResponseToChannel")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetComponentsCollisionResponseToChannel"), 0x658);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CanBeBaseForCharacter")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CanBeBaseForCharacter"), 0x660);
}

if (auto it = AActor::VTableLayoutMap.find(STR("TakeDamage")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("TakeDamage"), 0x668);
}

if (auto it = AActor::VTableLayoutMap.find(STR("InternalTakeRadialDamage")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("InternalTakeRadialDamage"), 0x670);
}

if (auto it = AActor::VTableLayoutMap.find(STR("InternalTakePointDamage")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("InternalTakePointDamage"), 0x678);
}

if (auto it = AActor::VTableLayoutMap.find(STR("BecomeViewTarget")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("BecomeViewTarget"), 0x680);
}

if (auto it = AActor::VTableLayoutMap.find(STR("EndViewTarget")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("EndViewTarget"), 0x688);
}

if (auto it = AActor::VTableLayoutMap.find(STR("CalcCamera")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("CalcCamera"), 0x690);
}

if (auto it = AActor::VTableLayoutMap.find(STR("HasActiveCameraComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("HasActiveCameraComponent"), 0x698);
}

if (auto it = AActor::VTableLayoutMap.find(STR("HasActivePawnControlCameraComponent")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("HasActivePawnControlCameraComponent"), 0x6A0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetHumanReadableName")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetHumanReadableName"), 0x6A8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("Reset")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("Reset"), 0x6B0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetLastRenderTime")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetLastRenderTime"), 0x6B8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ForceNetRelevant")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ForceNetRelevant"), 0x6C0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("ForceNetUpdate")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("ForceNetUpdate"), 0x6C8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PrestreamTextures")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PrestreamTextures"), 0x6D0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetActorEyesViewPoint")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetActorEyesViewPoint"), 0x6D8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("GetTargetLocation")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("GetTargetLocation"), 0x6E0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("PostRenderFor")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("PostRenderFor"), 0x6E8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("FindComponentByClass")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("FindComponentByClass"), 0x6F0);
}

if (auto it = AActor::VTableLayoutMap.find(STR("FindComponentByInterface")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("FindComponentByInterface"), 0x6F8);
}

if (auto it = AActor::VTableLayoutMap.find(STR("AllowActorComponentToReplicate")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("AllowActorComponentToReplicate"), 0x700);
}

if (auto it = AActor::VTableLayoutMap.find(STR("IsComponentRelevantForNavigation")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("IsComponentRelevantForNavigation"), 0x708);
}

if (auto it = AActor::VTableLayoutMap.find(STR("DisplayDebug")); it == AActor::VTableLayoutMap.end())
{
    AActor::VTableLayoutMap.emplace(STR("DisplayDebug"), 0x710);
}

