/* Copyright (C) 2020 Gleb Bezborodov - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/weriety
 */

#pragma once

#include <windows.h>
#include <werapi.h>
#include "config.h"

W_API HRESULT WINAPI OutOfProcessExceptionEventCallback(
		PVOID pContext,
		const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
		BOOL* pbOwnershipClaimed,
		PWSTR pwszEventName,
		PDWORD pchSize,
		PDWORD pdwSignatureCount
	);

W_API HRESULT WINAPI OutOfProcessExceptionEventSignatureCallback(
		PVOID pContext,
		const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
		DWORD dwIndex,
		PWSTR pwszName,
		PDWORD pchName,
		PWSTR pwszValue,
		PDWORD pchValue
	);

W_API HRESULT WINAPI OutOfProcessExceptionEventDebuggerLaunchCallback(
		PVOID pContext,
		const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
		PBOOL pbIsCustomDebugger,
		PWSTR pwszDebuggerLaunch,
		PDWORD pchDebuggerLaunch,
		PBOOL pbIsDebuggerAutolaunch
	);