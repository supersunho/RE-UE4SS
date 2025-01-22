if (auto it = UObjectBase::VTableLayoutMap.find(STR("~UObjectBase")); it == UObjectBase::VTableLayoutMap.end())
{
    UObjectBase::VTableLayoutMap.emplace(STR("~UObjectBase"), 0x00);
}

if (auto it = UObjectBase::VTableLayoutMap.find(STR("RegisterDependencies")); it == UObjectBase::VTableLayoutMap.end())
{
    UObjectBase::VTableLayoutMap.emplace(STR("RegisterDependencies"), 0x10);
}

if (auto it = UObjectBase::VTableLayoutMap.find(STR("DeferredRegister")); it == UObjectBase::VTableLayoutMap.end())
{
    UObjectBase::VTableLayoutMap.emplace(STR("DeferredRegister"), 0x18);
}

if (auto it = UObjectBase::VTableLayoutMap.find(STR("GetFNameForStatID")); it == UObjectBase::VTableLayoutMap.end())
{
    UObjectBase::VTableLayoutMap.emplace(STR("GetFNameForStatID"), 0x20);
}
