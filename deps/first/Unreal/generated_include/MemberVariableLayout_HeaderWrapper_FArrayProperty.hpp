static std::unordered_map<UEStringType, int32_t> MemberOffsets;

public:
    EArrayPropertyFlags& GetArrayFlags();
    const EArrayPropertyFlags& GetArrayFlags() const;

public:
    FProperty*& GetInner();
    const FProperty*& GetInner() const;

