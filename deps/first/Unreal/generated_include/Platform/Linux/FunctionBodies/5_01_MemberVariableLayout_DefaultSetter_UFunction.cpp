if (auto it = UFunction::MemberOffsets.find(STR("FunctionFlags")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("FunctionFlags"), 0xb0);
}

if (auto it = UFunction::MemberOffsets.find(STR("NumParms")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("NumParms"), 0xb4);
}

if (auto it = UFunction::MemberOffsets.find(STR("ParmsSize")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("ParmsSize"), 0xb6);
}

if (auto it = UFunction::MemberOffsets.find(STR("ReturnValueOffset")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("ReturnValueOffset"), 0xb8);
}

if (auto it = UFunction::MemberOffsets.find(STR("RPCId")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("RPCId"), 0xba);
}

if (auto it = UFunction::MemberOffsets.find(STR("RPCResponseId")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("RPCResponseId"), 0xbc);
}

if (auto it = UFunction::MemberOffsets.find(STR("FirstPropertyToInit")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("FirstPropertyToInit"), 0xc0);
}

if (auto it = UFunction::MemberOffsets.find(STR("EventGraphFunction")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("EventGraphFunction"), 0xc8);
}

if (auto it = UFunction::MemberOffsets.find(STR("EventGraphCallOffset")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("EventGraphCallOffset"), 0xd0);
}

if (auto it = UFunction::MemberOffsets.find(STR("Func")); it == UFunction::MemberOffsets.end())
{
    UFunction::MemberOffsets.emplace(STR("Func"), 0xd8);
}
