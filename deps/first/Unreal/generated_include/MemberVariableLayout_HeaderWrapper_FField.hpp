static std::unordered_map<UEStringType, int32_t> MemberOffsets;

private:
    FFieldClass*& GetClassPrivate();
    const FFieldClass*& GetClassPrivate() const;

public:
    EObjectFlags& GetFlagsPrivate();
    const EObjectFlags& GetFlagsPrivate() const;

private:
    FName& GetNamePrivate();
    const FName& GetNamePrivate() const;

private:
    FField*& GetNext();
    const FField*& GetNext() const;

private:
    FFieldVariant& GetOwner();
    const FFieldVariant& GetOwner() const;

