// I'm not sure which is the standard way to forward declare a enum in template,
// this code compiles with clang, but not with msvc
// remove the :uint8_t, the code will compile with msvc, but not with clang
static std::unordered_map<UEStringType, int32_t> MemberOffsets;
public:
#ifdef __clang__
    TEnumAsByte<enum EAspectRatioAxisConstraint: uint8_t>& GetAspectRatioAxisConstraint();
    const TEnumAsByte<enum EAspectRatioAxisConstraint: uint8_t>& GetAspectRatioAxisConstraint() const;
#else
    TEnumAsByte<enum EAspectRatioAxisConstraint>& GetAspectRatioAxisConstraint();
    const TEnumAsByte<enum EAspectRatioAxisConstraint>& GetAspectRatioAxisConstraint() const;
#endif


public:
    int32& GetControllerId();
    const int32& GetControllerId() const;

public:
    FVector& GetLastViewLocation();
    const FVector& GetLastViewLocation() const;

public:
    TObjectPtr<UGameViewportClient>& GetViewportClient();
    const TObjectPtr<UGameViewportClient>& GetViewportClient() const;

public:
    uint32& GetbSentSplitJoin();
    const uint32& GetbSentSplitJoin() const;

