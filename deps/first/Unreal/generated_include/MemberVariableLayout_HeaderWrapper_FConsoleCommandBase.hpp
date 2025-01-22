static std::unordered_map<UEStringType, int32_t> MemberOffsets;

public:
    EConsoleVariableFlags& GetFlags();
    const EConsoleVariableFlags& GetFlags() const;

public:
    FString& GetHelp();
    const FString& GetHelp() const;

