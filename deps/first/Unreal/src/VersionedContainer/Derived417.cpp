#include <Unreal/VersionedContainer/Derived417.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/UStruct.hpp>
#include <Unreal/UClass.hpp>
#include <Unreal/FProperty.hpp>
#include <Helpers/Casting.hpp>

namespace RC::Unreal
{
    auto Derived417::Field_get_type_fname(FField* p_this) -> FName
    {
        return p_this->GetClass().GetFName();
    }

    auto Derived417::Field_get_ffield_owner([[maybe_unused]]FField* p_this) -> void*
    {
        // FField does not exist before 4.25 so therefor FField::Owner also does not exist
        // It's up to the caller to make sure the returned value isn't nullptr
        return nullptr;
    }

    auto Derived417::FFieldClass_get_fname(FFieldClass* p_this) -> FName
    {
        return std::bit_cast<Unreal::UObject*>(p_this)->GetNamePrivate();
    }

    bool Derived417::FUObjectItem_HasAnyFlags(void* RawThis, EInternalObjectFlags InFlags)
    {
        FUObjectItem* TypedThis = static_cast<FUObjectItem*>(RawThis);
        return !!(TypedThis->flags & int32(InFlags));
    }

    void Derived417::UObjectArray_AddUObjectCreateListener(FUObjectCreateListener* Listener)
    {
        if (m_guobjectarray_internal->UObjectCreateListeners.Contains(Listener))
        {
            throw std::runtime_error{"Cannot add a listener because it already exists in TArray"};
        }
        /* To workaround unreal's implementation flaws, ensuring that 
        TArray's length growth occurs after the Data pointer becomes available */
        auto new_ary = TArray<FUObjectCreateListener*>{Listener};
        m_guobjectarray_internal->UObjectCreateListeners.Append(new_ary);
    }

    void Derived417::UObjectArray_RemoveUObjectCreateListener(FUObjectCreateListener* Listener)
    {
        m_guobjectarray_internal->UObjectCreateListeners.RemoveSingleSwap(Listener);
    }

    void Derived417::UObjectArray_AddUObjectDeleteListener(FUObjectDeleteListener* Listener)
    {
        if (m_guobjectarray_internal->UObjectDeleteListeners.Contains(Listener))
        {
            throw std::runtime_error{"Cannot add a listener because it already exists in TArray"};
        }
        auto new_ary = TArray<FUObjectDeleteListener*>{Listener};
        m_guobjectarray_internal->UObjectDeleteListeners.Append(new_ary);
    }

    void Derived417::UObjectArray_RemoveUObjectDeleteListener(FUObjectDeleteListener* Listener)
    {
        m_guobjectarray_internal->UObjectDeleteListeners.RemoveSingleSwap(Listener);
    }

    // TODO: use platform code?
    void Derived417::UObjectArray_Lock()
    {
        OSEnterCriticalSection((&m_guobjectarray_internal->ObjObjectsCritical));
    }
    void Derived417::UObjectArray_Unlock()
    {
        OSLeaveCriticalSection((&m_guobjectarray_internal->ObjObjectsCritical));
    }
}
