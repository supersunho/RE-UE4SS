if (auto it = FOutputDevice::VTableLayoutMap.find(STR("~FOutputDevice")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("~FOutputDevice"), 0x00);
}

if (auto it = FOutputDevice::VTableLayoutMap.find(STR("Serialize")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("Serialize"), 0x10);
}

if (auto it = FOutputDevice::VTableLayoutMap.find(STR("Serialize_1")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("Serialize_1"), 0x18);
}

if (auto it = FOutputDevice::VTableLayoutMap.find(STR("Flush")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("Flush"), 0x20);
}

if (auto it = FOutputDevice::VTableLayoutMap.find(STR("TearDown")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("TearDown"), 0x28);
}

if (auto it = FOutputDevice::VTableLayoutMap.find(STR("Dump")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("Dump"), 0x30);
}

if (auto it = FOutputDevice::VTableLayoutMap.find(STR("IsMemoryOnly")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("IsMemoryOnly"), 0x38);
}

if (auto it = FOutputDevice::VTableLayoutMap.find(STR("CanBeUsedOnAnyThread")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("CanBeUsedOnAnyThread"), 0x40);
}

if (auto it = FOutputDevice::VTableLayoutMap.find(STR("CanBeUsedOnMultipleThreads")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("CanBeUsedOnMultipleThreads"), 0x48);
}

if (auto it = FOutputDevice::VTableLayoutMap.find(STR("CanBeUsedOnPanicThread")); it == FOutputDevice::VTableLayoutMap.end())
{
    FOutputDevice::VTableLayoutMap.emplace(STR("CanBeUsedOnPanicThread"), 0x50);
}
