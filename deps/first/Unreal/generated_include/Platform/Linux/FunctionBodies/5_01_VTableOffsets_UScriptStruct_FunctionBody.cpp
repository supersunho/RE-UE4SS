if (auto it = UScriptStruct::VTableLayoutMap.find(STR("~UScriptStruct")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("~UScriptStruct"), 0x00);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("Serialize")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("Serialize"), 0xd0);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("Serialize_1")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("Serialize_1"), 0xd8);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("Link")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("Link"), 0x2d0);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("InitializeStruct")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("InitializeStruct"), 0x300);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("DestroyStruct")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("DestroyStruct"), 0x308);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("IsStructTrashed")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("IsStructTrashed"), 0x348);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("PrepareCppStructOps")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("PrepareCppStructOps"), 0x368);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("GetStructTypeHash")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("GetStructTypeHash"), 0x370);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("RecursivelyPreload")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("RecursivelyPreload"), 0x378);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("GetCustomGuid")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("GetCustomGuid"), 0x380);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("GetStructCPPName")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("GetStructCPPName"), 0x388);
}

if (auto it = UScriptStruct::VTableLayoutMap.find(STR("InitializeDefaultValue")); it == UScriptStruct::VTableLayoutMap.end())
{
    UScriptStruct::VTableLayoutMap.emplace(STR("InitializeDefaultValue"), 0x390);
}
