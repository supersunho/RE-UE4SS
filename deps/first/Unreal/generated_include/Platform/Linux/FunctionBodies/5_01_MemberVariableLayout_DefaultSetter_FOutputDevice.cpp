if (auto it = FOutputDevice::MemberOffsets.find(STR("_vptr$FOutputDevice")); it == FOutputDevice::MemberOffsets.end())
{
    FOutputDevice::MemberOffsets.emplace(STR("_vptr$FOutputDevice"), 0x00);
}

if (auto it = FOutputDevice::MemberOffsets.find(STR("bSuppressEventTag")); it == FOutputDevice::MemberOffsets.end())
{
    FOutputDevice::MemberOffsets.emplace(STR("bSuppressEventTag"), 0x08);
}

if (auto it = FOutputDevice::MemberOffsets.find(STR("bAutoEmitLineTerminator")); it == FOutputDevice::MemberOffsets.end())
{
    FOutputDevice::MemberOffsets.emplace(STR("bAutoEmitLineTerminator"), 0x09);
}
