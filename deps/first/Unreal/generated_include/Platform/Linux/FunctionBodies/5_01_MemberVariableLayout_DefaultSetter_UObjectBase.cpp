if (auto it = UObjectBase::MemberOffsets.find(STR("_vptr$UObjectBase")); it == UObjectBase::MemberOffsets.end())
{
    UObjectBase::MemberOffsets.emplace(STR("_vptr$UObjectBase"), 0x00);
}

if (auto it = UObjectBase::MemberOffsets.find(STR("ObjectFlags")); it == UObjectBase::MemberOffsets.end())
{
    UObjectBase::MemberOffsets.emplace(STR("ObjectFlags"), 0x08);
}

if (auto it = UObjectBase::MemberOffsets.find(STR("InternalIndex")); it == UObjectBase::MemberOffsets.end())
{
    UObjectBase::MemberOffsets.emplace(STR("InternalIndex"), 0x0c);
}

if (auto it = UObjectBase::MemberOffsets.find(STR("ClassPrivate")); it == UObjectBase::MemberOffsets.end())
{
    UObjectBase::MemberOffsets.emplace(STR("ClassPrivate"), 0x10);
}

if (auto it = UObjectBase::MemberOffsets.find(STR("NamePrivate")); it == UObjectBase::MemberOffsets.end())
{
    UObjectBase::MemberOffsets.emplace(STR("NamePrivate"), 0x18);
}

if (auto it = UObjectBase::MemberOffsets.find(STR("OuterPrivate")); it == UObjectBase::MemberOffsets.end())
{
    UObjectBase::MemberOffsets.emplace(STR("OuterPrivate"), 0x20);
}
