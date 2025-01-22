#include <Unreal/UKismetNodeHelperLibrary.hpp>
#include <Unreal/BPMacros.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UFunction.hpp>
#include <Unreal/UEnum.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/FString.hpp>

namespace RC::Unreal
{
    UEStringType UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(const UEnum* Enum, uint8 EnumeratorValue)
    {
        UE_BEGIN_NATIVE_FUNCTION_BODY("/Script/Engine.KismetNodeHelperLibrary:GetEnumeratorUserFriendlyName")
        UE_SET_STATIC_SELF("/Script/Engine.Default__KismetNodeHelperLibrary")

        UE_COPY_PROPERTY(Enum, const UEnum*)

        UE_COPY_PROPERTY(EnumeratorValue, uint8)

        UE_CALL_STATIC_FUNCTION()

        UE_RETURN_STRING()
    }
}
