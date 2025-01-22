#include <Unreal/AGameModeBase.hpp>
#include <Unreal/UClass.hpp>
#include <Helpers/Casting.hpp>

namespace RC::Unreal
{
    IMPLEMENT_EXTERNAL_OBJECT_CLASS(AGameModeBase)

    Function<AGameModeBase::InitGameStateSignature> AGameModeBase::InitGameStateInternal;
    std::unordered_map<UEStringType, uint32_t> AGameModeBase::VTableLayoutMap;

#include <MemberVariableLayout_SrcWrapper_AGameModeBase.hpp>
}