// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include <Unreal/Core/CoreTypes.hpp>
#include <Unreal/Core/Templates/IsPODType.hpp>
#include <Unreal/Core/Templates/IsEnumClass.hpp>
#include <Unreal/Core/Templates/TypeHash.hpp>

namespace RC::Unreal {
    template <bool> struct TEnumAsByte_EnumClass;
    template <> struct UE_DEPRECATED(4.15, "TEnumAsByte is not intended for use with enum classes - please derive your enum class from uint8 instead.") TEnumAsByte_EnumClass<true> {};
    template <> struct TEnumAsByte_EnumClass<false> {};

    /**
     * Template to store enumeration values as bytes in a type-safe way.
     */
    template<class TEnum>
    class TEnumAsByte
    {
        typedef TEnumAsByte_EnumClass<TIsEnumClass<TEnum>::Value> Check;

    public:
        typedef TEnum EnumType;

        TEnumAsByte() = default;
        TEnumAsByte(const TEnumAsByte&) = default;
        TEnumAsByte& operator=(const TEnumAsByte&) = default;

        /**
         * Constructor, initialize to the enum value.
         *
         * @param InValue value to construct with.
         */
        FORCEINLINE TEnumAsByte( TEnum InValue )
            : Value(static_cast<uint8>(InValue))
        { }

        /**
         * Constructor, initialize to the int32 value.
         *
         * @param InValue value to construct with.
         */
        explicit FORCEINLINE TEnumAsByte( int32 InValue )
            : Value(static_cast<uint8>(InValue))
        { }

        /**
         * Constructor, initialize to the int32 value.
         *
         * @param InValue value to construct with.
         */
        explicit FORCEINLINE TEnumAsByte( uint8 InValue )
            : Value(InValue)
        { }

    public:
        /**
         * Compares two enumeration values for equality.
         *
         * @param InValue The value to compare with.
         * @return true if the two values are equal, false otherwise.
         */
        bool operator==( TEnum InValue ) const
        {
            return static_cast<TEnum>(Value) == InValue;
        }

        /**
         * Compares two enumeration values for equality.
         *
         * @param InValue The value to compare with.
         * @return true if the two values are equal, false otherwise.
         */
        bool operator==(TEnumAsByte InValue) const
        {
            return Value == InValue.Value;
        }

        /** Implicit conversion to TEnum. */
        operator TEnum() const
        {
            return (TEnum)Value;
        }

    public:

        /**
         * Gets the enumeration value.
         *
         * @return The enumeration value.
         */
        TEnum GetValue() const
        {
            return (TEnum)Value;
        }

        /**
         * Gets the integer enumeration value.
         *
         * @return The enumeration value.
         */
        uint8 GetIntValue() const
        {
            return Value;
        }

    private:

        /** Holds the value as a byte. **/
        uint8 Value;
    };

    template<class T>
    FORCEINLINE uint32 GetTypeHash(const TEnumAsByte<T>& Enum)
    {
        return GetTypeHash((uint8)Enum.GetValue());
    }


    template<class T> struct TIsPODType<TEnumAsByte<T>> { enum { Value = true }; };

    template <typename T>
    struct TIsTEnumAsByte
    {
        static constexpr bool Value = false;
    };

    template <typename T> struct TIsTEnumAsByte<               TEnumAsByte<T>> { static constexpr bool Value = true; };
    template <typename T> struct TIsTEnumAsByte<const          TEnumAsByte<T>> { static constexpr bool Value = true; };
    template <typename T> struct TIsTEnumAsByte<      volatile TEnumAsByte<T>> { static constexpr bool Value = true; };
    template <typename T> struct TIsTEnumAsByte<const volatile TEnumAsByte<T>> { static constexpr bool Value = true; };
}