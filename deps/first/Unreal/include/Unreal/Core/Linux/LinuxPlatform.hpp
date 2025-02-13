// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

// HEADER_UNIT_SKIP - Not included directly

// Base defines, must define these for the platform, there are no defaults
#ifndef PLATFORM_DESKTOP
	#define PLATFORM_DESKTOP					1
#endif

#include "Unix/UnixPlatform.hpp"

#define PLATFORM_GLOBAL_LOG_CATEGORY			LogLinux

#define PLATFORM_SUPPORTS_BORDERLESS_WINDOW		1