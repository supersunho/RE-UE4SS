#pragma once

#include <Function/Function.hpp>

#include <Unreal/Common.hpp>
#include <Unreal/Core/Containers/Array.hpp>
#include <Unreal/Core/Misc/Crc.hpp>

namespace RC::Unreal
{
    namespace UnrealInitializer
    {
        struct CacheInfo;
        RC_UE_API auto CreateCache(UnrealInitializer::CacheInfo& Target) -> void;
        RC_UE_API auto LoadCache(UnrealInitializer::CacheInfo& Target) -> void;
    }

    class RC_UE_API FString
    {
    protected:
        friend RC_UE_API auto UnrealInitializer::CreateCache(UnrealInitializer::CacheInfo& Target) -> void;
        friend RC_UE_API auto UnrealInitializer::LoadCache(UnrealInitializer::CacheInfo& Target) -> void;

    protected:
        TArray<TCHAR> Data{nullptr, 0, 0};

    public:
        FString() = default;
        explicit FString(TCHAR* Str);
        explicit FString(const TCHAR* Str);

        bool operator==(FString& Other);
        bool operator==(const FString& Other) const;

        FString& operator=(const FString& Other);

        [[nodiscard]] auto GetCharArray() const -> const TCHAR*;
        [[nodiscard]] auto GetCharTArray() const -> const TArray<TCHAR>&;
        [[nodiscard]] auto GetCharTArray() -> TArray<TCHAR>&;
        auto SetCharArray(TArray<TCHAR>& NewArray) -> void;
        auto Clear() -> void;

        auto Len() const -> int32
        {
            return Data.Num() ? Data.Num() - 1 : 0;
        }

    public:
        auto Empty(int32 Slack) -> void
        {
            Data.Empty(Slack ? Slack + 1 : 0);
        }

        auto Empty() -> void
        {
            Data.Empty(0);
        }

    public:
        /**
         * Tests if index is valid, i.e. greater than or equal to zero, and less than the number of characters in this string (excluding the null terminator).
         *
         * @param Index Index to test.
         *
         * @returns True if index is valid. False otherwise.
         */
        UE_NODISCARD FORCEINLINE bool IsValidIndex(int32 Index) const
        {
            return Index >= 0 && Index < Len();
        }

        /**
         * Return specific character from this string
         *
         * @param Index into string
         * @return Character at Index
         */
        FORCEINLINE TCHAR& operator[]( int32 Index ) UE_LIFETIMEBOUND
        {
            checkf(IsValidIndex(Index), TEXT("String index out of bounds: Index %i from a string with a length of %i"), Index, Len());
            return Data.GetData()[Index];
        }

        /**
         * Return specific const character from this string
         *
         * @param Index into string
         * @return const Character at Index
         */
        FORCEINLINE const TCHAR& operator[]( int32 Index ) const UE_LIFETIMEBOUND
        {
            checkf(IsValidIndex(Index), TEXT("String index out of bounds: Index %i from a string with a length of %i"), Index, Len());
            return Data.GetData()[Index];
        }

        auto operator*() const -> const TCHAR*
        {
            return Data.Num() ? Data.GetData() : TEXT("");
        }

        /** Case insensitive string hash function. */
        friend FORCEINLINE uint32 GetTypeHash(const FString& S)
        {
            // This must match the GetTypeHash behavior of FStringView
            return FCrc::Strihash_DEPRECATED(S.Len(), *S);
        }
    };

    class FStringOut : public FString
    {
    public:
        FStringOut() = default;
        FStringOut(const FStringOut&); // Copy constructor
        FStringOut(FStringOut&&) noexcept;  // Move constructor
        ~FStringOut();
    };

}


