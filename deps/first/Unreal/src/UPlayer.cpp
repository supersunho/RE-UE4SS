#include <Unreal/UPlayer.hpp>
#include <Unreal/UClass.hpp>
#include <Helpers/Casting.hpp>

namespace RC::Unreal
{
    IMPLEMENT_EXTERNAL_OBJECT_CLASS(UPlayer)

    std::unordered_map<UEStringType, uint32_t> UPlayer::VTableLayoutMap;

#include <MemberVariableLayout_SrcWrapper_UPlayer.hpp>
}