/**
 * @file pch.h
 * @author Sina Karvandi (sina@hyperdbg.org)
 * @brief Pre-compiled headers for reversing machine's module
 * @details
 *
 * @version 0.2
 * @date 2023-02-01
 *
 * @copyright This project is released under the GNU Public License v3.
 *
 */
#pragma once

//
// add headers that you want to pre-compile here
//

//
// Windows SDK headers
//

#define WIN32_LEAN_AND_MEAN

//
// Scope definitions
//
#define HYPERDBG_USER_MODE_REVERSING_MODULE

#include <Windows.h>

#include <iostream>
#include <stdio.h>

//
// HyperDbg SDK headers
//
#include "Definition.h"
#include "SDK/HyperDbgSdk.h"
