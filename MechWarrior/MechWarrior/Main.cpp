#include <Windows.h>
#include <process.h>

#include <iostream>

#include "D3D9_Hook.h"

DWORD WINAPI MainThread(LPVOID lp)
{
	AllocConsole();
	freopen("CONOUT$", "w", stdout);

	std::cout << "Hack was successfully injected. Hooking D3D9 now.." << std::endl;

	tD3D9_Hook D3D9_Hook;
	D3D9_Hook.Hook();

	return NULL;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		CreateThread(0, 0, MainThread, 0, 0, 0);
	}
	return TRUE;
}