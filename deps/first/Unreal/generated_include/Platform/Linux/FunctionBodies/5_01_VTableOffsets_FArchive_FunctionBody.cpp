if (auto it = FArchive::VTableLayoutMap.find(STR("~FArchive")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("~FArchive"), 0x00);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("operator<<")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("operator<<"), 0x118);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("operator<<_1")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("operator<<_1"), 0x120);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("operator<<_2")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("operator<<_2"), 0x128);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("operator<<_3")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("operator<<_3"), 0x130);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("operator<<_4")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("operator<<_4"), 0x138);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("operator<<_5")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("operator<<_5"), 0x140);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("operator<<_6")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("operator<<_6"), 0x148);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("operator<<_7")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("operator<<_7"), 0x150);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("operator<<_8")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("operator<<_8"), 0x158);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("ForceBlueprintFinalization")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("ForceBlueprintFinalization"), 0x160);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("Serialize")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("Serialize"), 0x168);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("SerializeBits")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("SerializeBits"), 0x170);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("SerializeInt")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("SerializeInt"), 0x178);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("SerializeIntPacked")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("SerializeIntPacked"), 0x180);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("Preload")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("Preload"), 0x188);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("Seek")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("Seek"), 0x190);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("AttachBulkData")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("AttachBulkData"), 0x198);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("AttachBulkData_1")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("AttachBulkData_1"), 0x1a0);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("DetachBulkData")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("DetachBulkData"), 0x1a8);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("DetachBulkData_1")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("DetachBulkData_1"), 0x1b0);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("IsProxyOf")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("IsProxyOf"), 0x1b8);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("Precache")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("Precache"), 0x1c0);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("FlushCache")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("FlushCache"), 0x1c8);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("SetCompressionMap")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("SetCompressionMap"), 0x1d0);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("Flush")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("Flush"), 0x1d8);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("Close")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("Close"), 0x1e0);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("MarkScriptSerializationStart")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("MarkScriptSerializationStart"), 0x1e8);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("MarkScriptSerializationEnd")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("MarkScriptSerializationEnd"), 0x1f0);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("MarkSearchableName")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("MarkSearchableName"), 0x1f8);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("UsingCustomVersion")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("UsingCustomVersion"), 0x200);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("GetCacheableArchive")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("GetCacheableArchive"), 0x208);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("PushSerializedProperty")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("PushSerializedProperty"), 0x210);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("PopSerializedProperty")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("PopSerializedProperty"), 0x218);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("AttachExternalReadDependency")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("AttachExternalReadDependency"), 0x220);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("PushFileRegionType")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("PushFileRegionType"), 0x228);
}

if (auto it = FArchive::VTableLayoutMap.find(STR("PopFileRegionType")); it == FArchive::VTableLayoutMap.end())
{
    FArchive::VTableLayoutMap.emplace(STR("PopFileRegionType"), 0x230);
}
