if (auto it = ITextData::VTableLayoutMap.find(STR("~ITextData")); it == ITextData::VTableLayoutMap.end())
{
    ITextData::VTableLayoutMap.emplace(STR("~ITextData"), 0x00);
}

if (auto it = ITextData::VTableLayoutMap.find(STR("GetSourceString")); it == ITextData::VTableLayoutMap.end())
{
    ITextData::VTableLayoutMap.emplace(STR("GetSourceString"), 0x10);
}

if (auto it = ITextData::VTableLayoutMap.find(STR("GetDisplayString")); it == ITextData::VTableLayoutMap.end())
{
    ITextData::VTableLayoutMap.emplace(STR("GetDisplayString"), 0x18);
}

if (auto it = ITextData::VTableLayoutMap.find(STR("GetLocalizedString")); it == ITextData::VTableLayoutMap.end())
{
    ITextData::VTableLayoutMap.emplace(STR("GetLocalizedString"), 0x20);
}

if (auto it = ITextData::VTableLayoutMap.find(STR("GetGlobalHistoryRevision")); it == ITextData::VTableLayoutMap.end())
{
    ITextData::VTableLayoutMap.emplace(STR("GetGlobalHistoryRevision"), 0x28);
}

if (auto it = ITextData::VTableLayoutMap.find(STR("GetLocalHistoryRevision")); it == ITextData::VTableLayoutMap.end())
{
    ITextData::VTableLayoutMap.emplace(STR("GetLocalHistoryRevision"), 0x30);
}

if (auto it = ITextData::VTableLayoutMap.find(STR("GetTextHistory")); it == ITextData::VTableLayoutMap.end())
{
    ITextData::VTableLayoutMap.emplace(STR("GetTextHistory"), 0x38);
}

if (auto it = ITextData::VTableLayoutMap.find(STR("GetMutableTextHistory")); it == ITextData::VTableLayoutMap.end())
{
    ITextData::VTableLayoutMap.emplace(STR("GetMutableTextHistory"), 0x40);
}
