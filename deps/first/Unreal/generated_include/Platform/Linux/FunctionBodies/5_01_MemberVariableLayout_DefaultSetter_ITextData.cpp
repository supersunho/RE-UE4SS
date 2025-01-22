if (auto it = ITextData::MemberOffsets.find(STR("_vptr$ITextData")); it == ITextData::MemberOffsets.end())
{
    ITextData::MemberOffsets.emplace(STR("_vptr$ITextData"), 0x00);
}
