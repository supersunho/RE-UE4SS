#pragma once


#ifdef WIN32

#ifndef FORCENOINLINE
#define FORCENOINLINE __declspec(noinline)
#endif
#ifndef FORCEINLINE
#define FORCEINLINE __forceinline
#endif
#define RESTRICT __restrict

#else

#ifndef FORCENOINLINE
#define FORCENOINLINE __attribute__((noinline))
#endif
#ifndef FORCEINLINE
#define FORCEINLINE __attribute__((always_inline))
#endif
#define RESTRICT __restrict

#endif

#define NS_RC_UE_START namespace RC::Unreal {
#define NS_RC_UE_END };


#ifdef WIN32

#ifndef RC_UNREAL_EXPORTS
#ifndef RC_UNREAL_BUILD_STATIC
#ifndef RC_UE_API
#define RC_UE_API __declspec(dllimport)
#endif
#else
#ifndef RC_UE_API
#define RC_UE_API
#endif
#endif
#else
#ifndef RC_UE_API
#define RC_UE_API __declspec(dllexport)
#endif
#endif

#else

#ifndef RC_UE_API
#define RC_UE_API
#endif

#endif


