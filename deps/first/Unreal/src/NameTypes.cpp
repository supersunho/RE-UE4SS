#include <Unreal/NameTypes.hpp>
#include <Unreal/FString.hpp>
#include <File/Macros.hpp>

namespace RC::Unreal
{
    Function<void(const FName*, class FStringOut&)> FName::ToStringInternal;
    #ifdef WIN32
    Function<FName(const TCHAR*, EFindName)> FName::ConstructorInternal;
    #else
    Function<void(FName*, const TCHAR*, EFindName)> FName::ConstructorInternal;
    #endif

    const UEStringType ToStringInternalWrapper(const FName* name)
    {
        if (!FName::ToStringInternal.is_ready())
        {
            throw std::runtime_error{"FName::ToString was not ready but was called anyway"};
        }

        FStringOut string{};
        FName::ToStringInternal(name, string);

        UEStringType name_string{string.GetCharArray() ? string.GetCharArray() :  STR("UE4SS_None")};
        return name_string;
    }

    auto FName::ToString() -> UEStringType
    {
        return ToStringInternalWrapper(this);
    }

    auto FName::ToString() const -> const UEStringType
    {
        return ToStringInternalWrapper(this);
    }

    uint32 FName::GetPlainNameString(TCHAR(&OutName)[NAME_SIZE])
    {
        const uint32 Entry = GetDisplayIndex();
        auto String = FName(Entry).ToString();
        std::memcpy(OutName, &String[0], String.size() * sizeof(UEStringType::size_type));
        return static_cast<uint32>(String.size());
    }
}
