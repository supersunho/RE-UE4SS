#include <Unreal/VersionedContainer/UnrealVirtualImpl/UnrealVirtual414.hpp>

#include <functional>

// These are all the structs that have virtuals that need to have their offset set
#include <Unreal/UObject.hpp>
#include <Unreal/UScriptStruct.hpp>
#include <Unreal/FOutputDevice.hpp>
#include <Unreal/FField.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/Property/FNumericProperty.hpp>
#include <Unreal/Property/FObjectProperty.hpp>
#include <Unreal/Property/FMulticastDelegateProperty.hpp>
#include <Unreal/Property/FStructProperty.hpp>
#include <Unreal/Property/FArrayProperty.hpp>
#include <Unreal/Property/FMapProperty.hpp>
#include <Unreal/Property/FBoolProperty.hpp>
#include <Unreal/Property/NumericPropertyTypes.hpp>
#include <Unreal/Property/FSetProperty.hpp>
#include <Unreal/Property/FInterfaceProperty.hpp>
#include <Unreal/Property/FClassProperty.hpp>
#include <Unreal/Property/FSoftClassProperty.hpp>
#include <Unreal/Property/FEnumProperty.hpp>
#include <Unreal/Property/FFieldPathProperty.hpp>
#include <Unreal/UFunction.hpp>
#include <Unreal/UClass.hpp>
#include <Unreal/UEngine.hpp>
#include <Unreal/World.hpp>
#include <Unreal/FWorldContext.hpp>
#include <Unreal/UEnum.hpp>
#include <Unreal/UGameViewportClient.hpp>
/*#include <Unreal/UConsole.hpp>*/
#include <Unreal/FArchive.hpp>

#include <Unreal/AGameModeBase.hpp>
#include <Unreal/AGameMode.hpp>
#include <Unreal/UPlayer.hpp>
#include <Unreal/ULocalPlayer.hpp>
#include <Unreal/ITextData.hpp>
/*#include <Unreal/UDataTable.hpp>
#include <Unreal/IConsoleManager.hpp>
#include <Unreal/FConsoleManager.hpp>
#include <Unreal/IConsoleObject.hpp>
#include <Unreal/IConsoleCommand.hpp>
#include <Unreal/FConsoleCommandBase.hpp>
#include <Unreal/IConsoleVariable.hpp>
#include <Unreal/FConsoleVariableBase.hpp>*/

namespace RC::Unreal
{
    void UnrealVirtual414::set_virtual_offsets()
    {
#if __has_include (<FunctionBodies/4_14_VTableOffsets_FProperty_FunctionBody.cpp>)
#include <FunctionBodies/4_14_VTableOffsets_FProperty_FunctionBody.cpp>
/*#include <FunctionBodies/4_14_VTableOffsets_IConsoleVariable_FunctionBody.cpp>*/
#include <FunctionBodies/4_14_VTableOffsets_UObject_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_FArchive_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_ITextData_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_UObjectBaseUtility_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_UObjectBase_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_UField_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_FMalloc_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_AActor_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_AGameMode_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_FNumericProperty_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_FMulticastDelegateProperty_FunctionBody.cpp>
/*#include <FunctionBodies/4_14_VTableOffsets_UDataTable_FunctionBody.cpp>*/
#include <FunctionBodies/4_14_VTableOffsets_ULocalPlayer_FunctionBody.cpp>
/*#include <FunctionBodies/4_14_VTableOffsets_IConsoleObject_FunctionBody.cpp>*/
#include <FunctionBodies/4_14_VTableOffsets_FOutputDevice_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_AGameModeBase_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_UStruct_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_UScriptStruct__ICppStructOps_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_UPlayer_FunctionBody.cpp>
/*#include <FunctionBodies/4_14_VTableOffsets_IConsoleCommand_FunctionBody.cpp>*/
#include <FunctionBodies/4_14_VTableOffsets_FObjectPropertyBase_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_UGameViewportClient_FunctionBody.cpp>
#include <FunctionBodies/4_14_VTableOffsets_UEngine_FunctionBody.cpp>
/*#include <FunctionBodies/4_14_VTableOffsets_IConsoleManager_FunctionBody.cpp>*/
/*#include <FunctionBodies/4_14_VTableOffsets_FConsoleVariableBase_FunctionBody.cpp>*/
/*#include <FunctionBodies/4_14_VTableOffsets_FConsoleCommandBase_FunctionBody.cpp>*/
/*#include <FunctionBodies/4_14_VTableOffsets_UConsole_FunctionBody.cpp>*/

#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FProperty.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FArchive.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UObjectBase.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UField.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UFunction.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FDelegateProperty.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_AActor.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_AGameMode.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FMulticastDelegateProperty.cpp>
/*#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UDataTable.cpp>*/
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_ULocalPlayer.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FByteProperty.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FOutputDevice.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_AGameModeBase.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UStruct.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UScriptStruct__ICppStructOps.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UPlayer.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FObjectPropertyBase.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UGameViewportClient.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FMapProperty.cpp>
/*#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FConsoleManager.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FConsoleVariableBase.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FConsoleCommandBase.cpp>*/
/*#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UConsole.cpp>*/
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UEnum.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FClassProperty.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FSetProperty.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UClass.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FArrayProperty.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FInterfaceProperty.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UScriptStruct.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_UWorld.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FStructProperty.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FBoolProperty.cpp>
#include <FunctionBodies/4_14_MemberVariableLayout_DefaultSetter_FWorldContext.cpp>
#else
    throw std::runtime_error("Unreal 4.14 is not supported");
#endif
    }
}
