if (auto it = FSetProperty::MemberOffsets.find(STR("ElementProp")); it == FSetProperty::MemberOffsets.end())
{
    FSetProperty::MemberOffsets.emplace(STR("ElementProp"), 0x78);
}

if (auto it = FSetProperty::MemberOffsets.find(STR("SetLayout")); it == FSetProperty::MemberOffsets.end())
{
    FSetProperty::MemberOffsets.emplace(STR("SetLayout"), 0x80);
}
