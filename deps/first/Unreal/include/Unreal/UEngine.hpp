#pragma once

#include <Unreal/UObject.hpp>
#include <Unreal/FURL.hpp>

namespace RC::Unreal
{
    class RC_UE_API UEngine : public UObject
    {
        DECLARE_EXTERNAL_OBJECT_CLASS(UEngine, Engine);

    public:
        static std::unordered_map<UEStringType, uint32_t> VTableLayoutMap;

    public:
        using LoadMapSignature = bool(class UEngine*, struct FWorldContext& WorldContext, FURL URL, class UPendingNetGame* PendingGame, class FString& Error);
        static Function<LoadMapSignature> LoadMapInternal;
    };
}
