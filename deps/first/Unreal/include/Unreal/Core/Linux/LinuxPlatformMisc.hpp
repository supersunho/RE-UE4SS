// Copyright Epic Games, Inc. All Rights Reserved.

/*=============================================================================================
	LinuxPlatformMisc.h: Linux platform misc functions
==============================================================================================*/

#pragma once

#include "Unix/UnixPlatformMisc.hpp"
namespace RC::Unreal
{
    /**
     * Linux implementation of the misc OS functions
     */

    // A stub for now. Will allow to override any functions if needed
    struct FLinuxPlatformMisc : public FUnixPlatformMisc
    {
    };

    typedef FLinuxPlatformMisc FPlatformMisc;
} // namespace RC::Unreal
