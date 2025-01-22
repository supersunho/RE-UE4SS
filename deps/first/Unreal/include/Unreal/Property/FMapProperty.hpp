#pragma once

#include <Unreal/FProperty.hpp>
#include <Unreal/TProperty.hpp>
#include <Unreal/Core/Containers/Map.hpp>

namespace RC::Unreal
{
    // TODO: This should inherit from 'TProperty<FScriptMap, FProperty>' when we have FScriptMap
    class RC_UE_API FMapProperty : public FProperty
    {
        DECLARE_FIELD_CLASS(FMapProperty);
        DECLARE_VIRTUAL_TYPE(FMapProperty);

    public:
#include <MemberVariableLayout_HeaderWrapper_FMapProperty.hpp>
    };
}



