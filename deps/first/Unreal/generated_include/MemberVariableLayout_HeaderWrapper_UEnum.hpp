static std::unordered_map<UEStringType, int32_t> MemberOffsets;

public:
    UEnum::ECppForm& GetCppForm();
    const UEnum::ECppForm& GetCppForm() const;

public:
    FString& GetCppType();
    const FString& GetCppType() const;

public:
    std::function<void(int32)>*& GetEnumDisplayNameFn();
    const std::function<void(int32)>*& GetEnumDisplayNameFn() const;

private:
    EEnumFlags& GetEnumFlags_Internal();
    const EEnumFlags& GetEnumFlags_Internal() const;

public:
    FName& GetEnumPackage();
    const FName& GetEnumPackage() const;

public:
    TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32> >& GetNames();
    const TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32> >& GetNames() const;

