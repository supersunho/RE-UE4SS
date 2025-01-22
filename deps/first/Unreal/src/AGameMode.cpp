#include <Unreal/AGameMode.hpp>
#include <Unreal/UClass.hpp>
#include <Helpers/Casting.hpp>

namespace RC::Unreal
{
    IMPLEMENT_EXTERNAL_OBJECT_CLASS(AGameMode)

    std::unordered_map<UEStringType, uint32_t> AGameMode::VTableLayoutMap;

#include <MemberVariableLayout_SrcWrapper_AGameMode.hpp>
}