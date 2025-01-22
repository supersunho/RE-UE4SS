if (auto it = UStruct::VTableLayoutMap.find(STR("~UStruct")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("~UStruct"), 0x00);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("RegisterDependencies")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("RegisterDependencies"), 0x10);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("PostLoad")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("PostLoad"), 0xa8);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("FinishDestroy")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("FinishDestroy"), 0xc8);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("Serialize")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("Serialize_1")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("Serialize_1"), 0xd8);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("GetPreloadDependencies")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("GetPreloadDependencies"), 0x150);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("TagSubobjects")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("TagSubobjects"), 0x1f0);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("AddCppProperty")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("AddCppProperty"), 0x2b8);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("GetInheritanceSuper")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("GetInheritanceSuper"), 0x2c8);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("Link")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("Link"), 0x2d0);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("SerializeBin")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("SerializeBin"), 0x2d8);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("SerializeBin_1")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("SerializeBin_1"), 0x2e0);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("SerializeTaggedProperties")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("SerializeTaggedProperties"), 0x2e8);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("SerializeTaggedProperties_1")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("SerializeTaggedProperties_1"), 0x2f0);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("PreloadChildren")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("PreloadChildren"), 0x2f8);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("InitializeStruct")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("InitializeStruct"), 0x300);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("DestroyStruct")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("DestroyStruct"), 0x308);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("CustomFindProperty")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("CustomFindProperty"), 0x310);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("SerializeExpr")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("SerializeExpr"), 0x318);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("GetPrefixCPP")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("GetPrefixCPP"), 0x320);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("SetSuperStruct")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("SetSuperStruct"), 0x328);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("PropertyNameToDisplayName")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("PropertyNameToDisplayName"), 0x330);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("GetAuthoredNameForField")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("GetAuthoredNameForField"), 0x338);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("GetAuthoredNameForField_1")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("GetAuthoredNameForField_1"), 0x340);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("IsStructTrashed")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("IsStructTrashed"), 0x348);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("FindPropertyNameFromGuid")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("FindPropertyNameFromGuid"), 0x350);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("FindPropertyGuidFromName")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("FindPropertyGuidFromName"), 0x358);
}

if (auto it = UStruct::VTableLayoutMap.find(STR("ArePropertyGuidsAvailable")); it == UStruct::VTableLayoutMap.end())
{
    UStruct::VTableLayoutMap.emplace(STR("ArePropertyGuidsAvailable"), 0x360);
}
