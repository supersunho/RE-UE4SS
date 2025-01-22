if (auto it = FBoolProperty::MemberOffsets.find(STR("FieldSize")); it == FBoolProperty::MemberOffsets.end())
{
    FBoolProperty::MemberOffsets.emplace(STR("FieldSize"), 0x78);
}

if (auto it = FBoolProperty::MemberOffsets.find(STR("ByteOffset")); it == FBoolProperty::MemberOffsets.end())
{
    FBoolProperty::MemberOffsets.emplace(STR("ByteOffset"), 0x79);
}

if (auto it = FBoolProperty::MemberOffsets.find(STR("ByteMask")); it == FBoolProperty::MemberOffsets.end())
{
    FBoolProperty::MemberOffsets.emplace(STR("ByteMask"), 0x7a);
}

if (auto it = FBoolProperty::MemberOffsets.find(STR("FieldMask")); it == FBoolProperty::MemberOffsets.end())
{
    FBoolProperty::MemberOffsets.emplace(STR("FieldMask"), 0x7b);
}
