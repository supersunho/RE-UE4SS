#include <Unreal/ULocalPlayer.hpp>
#include <Unreal/UClass.hpp>
#include <Helpers/Casting.hpp>

namespace RC::Unreal
{
    IMPLEMENT_EXTERNAL_OBJECT_CLASS(ULocalPlayer)

    Function<ULocalPlayer::ExecSignature> ULocalPlayer::ExecInternal;
    std::unordered_map<UEStringType, uint32_t> ULocalPlayer::VTableLayoutMap;

#include <MemberVariableLayout_SrcWrapper_ULocalPlayer.hpp>
}