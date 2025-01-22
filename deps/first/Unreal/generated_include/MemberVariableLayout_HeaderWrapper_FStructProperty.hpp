static std::unordered_map<UEStringType, int32_t> MemberOffsets;

public:
    UScriptStruct*& GetStruct();
    const UScriptStruct*& GetStruct() const;

