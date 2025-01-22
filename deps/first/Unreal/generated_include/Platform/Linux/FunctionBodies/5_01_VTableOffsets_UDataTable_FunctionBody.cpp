if (auto it = UDataTable::VTableLayoutMap.find(STR("~UDataTable")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("~UDataTable"), 0x00);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("FinishDestroy")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("FinishDestroy"), 0xc8);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("Serialize")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("Serialize_1")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("Serialize_1"), 0xd8);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("NeedsLoadForClient")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("NeedsLoadForClient"), 0x110);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("NeedsLoadForEditorGame")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("NeedsLoadForEditorGame"), 0x128);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x150);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("GetResourceSizeEx")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("GetResourceSizeEx"), 0x1a0);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("GetNonConstRowMap")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("GetNonConstRowMap"), 0x2b8);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("AddRowInternal")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("AddRowInternal"), 0x2c0);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("RemoveRowInternal")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("RemoveRowInternal"), 0x2c8);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("GetRowMap")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("GetRowMap"), 0x2d0);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("GetRowMap_1")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("GetRowMap_1"), 0x2d8);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("AllowDuplicateRowsOnImport")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("AllowDuplicateRowsOnImport"), 0x2e0);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("EmptyTable")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("EmptyTable"), 0x2e8);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("RemoveRow")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("RemoveRow"), 0x2f0);
}

if (auto it = UDataTable::VTableLayoutMap.find(STR("AddRow")); it == UDataTable::VTableLayoutMap.end())
{
    UDataTable::VTableLayoutMap.emplace(STR("AddRow"), 0x2f8);
}
