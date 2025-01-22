static std::unordered_map<UEStringType, int32_t> MemberOffsets;

public:
    UEnum*& GetEnum();
    const UEnum*& GetEnum() const;

public:
    FNumericProperty*& GetUnderlyingProp();
    const FNumericProperty*& GetUnderlyingProp() const;

