if (auto it = UScriptStruct::ICppStructOps::MemberOffsets.find(STR("_vptr$ICppStructOps")); it == UScriptStruct::ICppStructOps::MemberOffsets.end())
{
    UScriptStruct::ICppStructOps::MemberOffsets.emplace(STR("_vptr$ICppStructOps"), 0x00);
}

if (auto it = UScriptStruct::ICppStructOps::MemberOffsets.find(STR("Size")); it == UScriptStruct::ICppStructOps::MemberOffsets.end())
{
    UScriptStruct::ICppStructOps::MemberOffsets.emplace(STR("Size"), 0x08);
}

if (auto it = UScriptStruct::ICppStructOps::MemberOffsets.find(STR("Alignment")); it == UScriptStruct::ICppStructOps::MemberOffsets.end())
{
    UScriptStruct::ICppStructOps::MemberOffsets.emplace(STR("Alignment"), 0x0c);
}
