if (auto it = UObjectBaseUtility::VTableLayoutMap.find(STR("~UObjectBaseUtility")); it == UObjectBaseUtility::VTableLayoutMap.end())
{
    UObjectBaseUtility::VTableLayoutMap.emplace(STR("~UObjectBaseUtility"), 0x00);
}

if (auto it = UObjectBaseUtility::VTableLayoutMap.find(STR("CanBeClusterRoot")); it == UObjectBaseUtility::VTableLayoutMap.end())
{
    UObjectBaseUtility::VTableLayoutMap.emplace(STR("CanBeClusterRoot"), 0x28);
}

if (auto it = UObjectBaseUtility::VTableLayoutMap.find(STR("CanBeInCluster")); it == UObjectBaseUtility::VTableLayoutMap.end())
{
    UObjectBaseUtility::VTableLayoutMap.emplace(STR("CanBeInCluster"), 0x30);
}

if (auto it = UObjectBaseUtility::VTableLayoutMap.find(STR("CreateCluster")); it == UObjectBaseUtility::VTableLayoutMap.end())
{
    UObjectBaseUtility::VTableLayoutMap.emplace(STR("CreateCluster"), 0x38);
}

if (auto it = UObjectBaseUtility::VTableLayoutMap.find(STR("OnClusterMarkedAsPendingKill")); it == UObjectBaseUtility::VTableLayoutMap.end())
{
    UObjectBaseUtility::VTableLayoutMap.emplace(STR("OnClusterMarkedAsPendingKill"), 0x40);
}
