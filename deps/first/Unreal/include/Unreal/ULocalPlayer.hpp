#pragma once

#include <Unreal/Core/Containers/EnumAsByte.hpp>

#include <Unreal/UPlayer.hpp>
#include <Unreal/TObjectPtr.hpp>
#include <Unreal/UGameViewportClient.hpp>
#include <Unreal/UnrealCoreStructs.hpp>

namespace RC::Unreal
{
    class RC_UE_API ULocalPlayer : public UPlayer
    {
        DECLARE_EXTERNAL_OBJECT_CLASS(ULocalPlayer, Engine);

    public:
        static std::unordered_map<UEStringType, uint32_t> VTableLayoutMap;

    public:
        using ExecSignature = bool(ULocalPlayer* Context, UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar);
        static Function<ExecSignature> ExecInternal;

    public:
#include <MemberVariableLayout_HeaderWrapper_ULocalPlayer.hpp>
    };
}



