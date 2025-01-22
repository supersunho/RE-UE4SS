if (auto it = UWorld::VTableLayoutMap.find(STR("~UWorld")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("~UWorld"), 0x00);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("PreSaveRoot")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("PreSaveRoot"), 0x68);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("PreSaveRoot_1")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("PreSaveRoot_1"), 0x70);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("PostSaveRoot")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("PostSaveRoot"), 0x78);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("PostSaveRoot_1")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("PostSaveRoot_1"), 0x80);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("ResolveSubobject")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("ResolveSubobject"), 0x98);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("PostLoad")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("PostLoad"), 0xa8);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("BeginDestroy")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("BeginDestroy"), 0xb8);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("IsReadyForFinishDestroy")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("IsReadyForFinishDestroy"), 0xc0);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("FinishDestroy")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("FinishDestroy"), 0xc8);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("Serialize")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("Serialize_1")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("Serialize_1"), 0xd8);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("PreDuplicate")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("PreDuplicate"), 0xf8);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("PostDuplicate")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("PostDuplicate"), 0x100);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("GetWorld")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("GetWorld"), 0x190);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("GetPrimaryAssetId")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("GetPrimaryAssetId"), 0x1d8);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("NotifyAcceptingConnection")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("NotifyAcceptingConnection"), 0x2b8);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("NotifyAcceptedConnection")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("NotifyAcceptedConnection"), 0x2c0);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("NotifyAcceptingChannel")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("NotifyAcceptingChannel"), 0x2c8);
}

if (auto it = UWorld::VTableLayoutMap.find(STR("NotifyControlMessage")); it == UWorld::VTableLayoutMap.end())
{
    UWorld::VTableLayoutMap.emplace(STR("NotifyControlMessage"), 0x2d0);
}
