#include "handle.h"
#include "wer_plugin_facade.h"

#include <fstream>

HRESULT WINAPI OutOfProcessExceptionEventCallback(
	PVOID pContext,
	const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
	BOOL* pbOwnershipClaimed,
	PWSTR pwszEventName,
	PDWORD pchSize,
	PDWORD pdwSignatureCount)
{
	wr::facade->handle_exception(pExceptionInformation);

	return TRUE;
}

HRESULT WINAPI OutOfProcessExceptionEventSignatureCallback(
	PVOID pContext,
	const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
	DWORD dwIndex,
	PWSTR pwszName,
	PDWORD pchName,
	PWSTR pwszValue,
	PDWORD pchValue)
{
	wr::facade->handle_signature();

	return TRUE;
}

HRESULT WINAPI OutOfProcessExceptionEventDebuggerLaunchCallback(
	PVOID pContext,
	const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
	PBOOL pbIsCustomDebugger,
	PWSTR pwszDebuggerLaunch,
	PDWORD pchDebuggerLaunch,
	PBOOL pbIsDebuggerAutolaunch)
{
	wr::facade->handle_debug_execute();

	return TRUE;
}