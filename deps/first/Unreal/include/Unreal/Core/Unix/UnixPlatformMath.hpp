// Copyright Epic Games, Inc. All Rights Reserved.
// IWYU pragma: begin_exports

/*=============================================================================================
	LinuxPlatformMath.h: Linux platform Math functions
==============================================================================================*/

#pragma once

#include "CoreTypes.hpp"
#include "Clang/ClangPlatformMath.hpp"
#include "Linux/LinuxSystemIncludes.hpp"
#include "Math/UnrealPlatformMathSSE.hpp"

namespace RC::Unreal
{
	/**
	* Linux implementation of the Math OS functions
	**/
	// IDK why SSE4 failed to compile
	struct FLinuxPlatformMath : public TUnrealPlatformMathSSEBase<FClangPlatformMath>
	{
	#if PLATFORM_ENABLE_VECTORINTRINSICS
		static FORCEINLINE bool IsNaN( float A ) { return isnan(A) != 0; }
		static FORCEINLINE bool IsNaN( double A ) { return isnan(A) != 0; }
		static FORCEINLINE bool IsFinite( float A ) { return isfinite(A); }
		static FORCEINLINE bool IsFinite( double A ) { return isfinite(A); }

	#if PLATFORM_ENABLE_POPCNT_INTRINSIC
		/**
		 * Use the SSE instruction to count bits
		 */
		static FORCEINLINE int32 CountBits(uint64 Bits)
		{
			return __builtin_popcountll(Bits);
		}
	#endif
	#endif
	};

	typedef FLinuxPlatformMath FPlatformMath;

	// IWYU pragma: end_exports
} // namespace RC::Unreal
