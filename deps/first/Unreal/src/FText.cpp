#include <stdexcept>

#include <Unreal/FText.hpp>
#include <Unreal/FString.hpp>
#include <Unreal/UnrealVersion.hpp>

namespace RC::Unreal
{
    Function<FText(const FString&&)> FText::ConstructorInternal;

    auto FText::ToFString() const -> const FString&
    {
        if (!Data) {
            #ifdef WIN32
            __debugbreak();
            #else
            asm("int3");
            #endif
            // std::abort(); 
        }
        return Data->GetDisplayString();
    }

    auto FText::ToString() const -> UEStringType
    {
        if (!Data) { return {}; }
        return UEStringType(ToFString().GetCharArray());
    }

    auto FText::SetString(const FString&& NewString) -> void
    {
        FText Text = FText(std::forward<const FString>(NewString));

        Data = Text.Data;
        SharedRefCollector = Text.SharedRefCollector;
        Flags = Text.Flags;
        Unk = Text.Unk;
    }
}
