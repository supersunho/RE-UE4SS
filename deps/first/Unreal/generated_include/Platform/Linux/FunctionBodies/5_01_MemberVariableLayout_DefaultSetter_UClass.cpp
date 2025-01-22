if (auto it = UClass::MemberOffsets.find(STR("ClassConstructor")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ClassConstructor"), 0xb0);
}

if (auto it = UClass::MemberOffsets.find(STR("ClassVTableHelperCtorCaller")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ClassVTableHelperCtorCaller"), 0xb8);
}

if (auto it = UClass::MemberOffsets.find(STR("CppClassStaticFunctions")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("CppClassStaticFunctions"), 0xc0);
}

if (auto it = UClass::MemberOffsets.find(STR("ClassUnique")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ClassUnique"), 0xc8);
}

if (auto it = UClass::MemberOffsets.find(STR("FirstOwnedClassRep")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("FirstOwnedClassRep"), 0xcc);
}

if (auto it = UClass::MemberOffsets.find(STR("bCooked")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("bCooked"), 0xd0);
}

if (auto it = UClass::MemberOffsets.find(STR("bLayoutChanging")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("bLayoutChanging"), 0xd1);
}

if (auto it = UClass::MemberOffsets.find(STR("ClassFlags")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ClassFlags"), 0xd4);
}

if (auto it = UClass::MemberOffsets.find(STR("ClassCastFlags")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ClassCastFlags"), 0xd8);
}

if (auto it = UClass::MemberOffsets.find(STR("ClassWithin")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ClassWithin"), 0xe0);
}

if (auto it = UClass::MemberOffsets.find(STR("ClassConfigName")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ClassConfigName"), 0xe8);
}

if (auto it = UClass::MemberOffsets.find(STR("ClassReps")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ClassReps"), 0xf0);
}

if (auto it = UClass::MemberOffsets.find(STR("NetFields")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("NetFields"), 0x100);
}

if (auto it = UClass::MemberOffsets.find(STR("ClassDefaultObject")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ClassDefaultObject"), 0x110);
}

if (auto it = UClass::MemberOffsets.find(STR("SparseClassData")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("SparseClassData"), 0x118);
}

if (auto it = UClass::MemberOffsets.find(STR("SparseClassDataStruct")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("SparseClassDataStruct"), 0x120);
}

if (auto it = UClass::MemberOffsets.find(STR("FuncMap")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("FuncMap"), 0x128);
}

if (auto it = UClass::MemberOffsets.find(STR("SuperFuncMap")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("SuperFuncMap"), 0x178);
}

if (auto it = UClass::MemberOffsets.find(STR("SuperFuncMapLock")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("SuperFuncMapLock"), 0x1c8);
}

if (auto it = UClass::MemberOffsets.find(STR("Interfaces")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("Interfaces"), 0x200);
}

if (auto it = UClass::MemberOffsets.find(STR("ReferenceTokenStream")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ReferenceTokenStream"), 0x210);
}

if (auto it = UClass::MemberOffsets.find(STR("ReferenceTokenStreamCritical")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("ReferenceTokenStreamCritical"), 0x228);
}

if (auto it = UClass::MemberOffsets.find(STR("NativeFunctionLookupTable")); it == UClass::MemberOffsets.end())
{
    UClass::MemberOffsets.emplace(STR("NativeFunctionLookupTable"), 0x250);
}
