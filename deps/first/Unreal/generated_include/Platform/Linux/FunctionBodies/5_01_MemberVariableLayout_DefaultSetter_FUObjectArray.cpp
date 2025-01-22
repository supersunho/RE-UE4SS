if (auto it = FUObjectArray::MemberOffsets.find(STR("ObjFirstGCIndex")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ObjFirstGCIndex"), 0x00);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("ObjLastNonGCIndex")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ObjLastNonGCIndex"), 0x04);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("MaxObjectsNotConsideredByGC")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("MaxObjectsNotConsideredByGC"), 0x08);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("OpenForDisregardForGC")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("OpenForDisregardForGC"), 0x0c);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("ObjObjects")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ObjObjects"), 0x10);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("ObjObjectsCritical")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ObjObjectsCritical"), 0x30);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("ObjAvailableList")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("ObjAvailableList"), 0x58);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("UObjectCreateListeners")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("UObjectCreateListeners"), 0x68);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("UObjectDeleteListeners")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("UObjectDeleteListeners"), 0x78);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("UObjectDeleteListenersCritical")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("UObjectDeleteListenersCritical"), 0x88);
}

if (auto it = FUObjectArray::MemberOffsets.find(STR("PrimarySerialNumber")); it == FUObjectArray::MemberOffsets.end())
{
    UWorld::MemberOffsets.emplace(STR("PrimarySerialNumber"), 0xb0);
}
