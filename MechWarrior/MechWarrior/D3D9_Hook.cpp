#include "D3D9_Hook.h"

#include <iostream>

void tD3D9_Hook::Hook()
{
	// EndScene is at cryrenderd3d9.dll + 2D70D8

	__int64 CryRenderD3D9Base = 0;
	while (!CryRenderD3D9Base) CryRenderD3D9Base = (__int64)GetModuleHandleA("CryRenderD3D9.DLL");

	std::cout << std::hex << CryRenderD3D9Base << " = CryRenderD3D9.DLL" << std::endl;

	MEMORY_BASIC_INFORMATION minfo;
	__int64 EndSceneAddress = 0;

	BOOL succeed = FALSE;
	do
	{
		ReadProcessMemory(GetCurrentProcess(), (LPCVOID)(CryRenderD3D9Base + 0x2D70D8), &EndSceneAddress, 8, 0);
		ReadProcessMemory(GetCurrentProcess(), (LPCVOID)EndSceneAddress, &EndSceneAddress, 8, 0);
		ReadProcessMemory(GetCurrentProcess(), (LPCVOID)(EndSceneAddress + 0x150), &EndSceneAddress, 8, 0);
		
		// If the address we is not writable or we cannot read or it is invalid, we must not call MHook_SetHook
		succeed = VirtualQuery((LPCVOID)EndSceneAddress, &minfo, sizeof(MEMORY_BASIC_INFORMATION));		
	} while (!succeed || minfo.State != MEM_COMMIT || minfo.Protect == PAGE_NOACCESS || minfo.Protect == PAGE_EXECUTE);

	// EndSceneAddress is fine
	std::cout << "EndScene is at " << EndSceneAddress;

	tD3D9_Draw::pEndScene_o = EndSceneAddress;
	Mhook_SetHook((PVOID*)&tD3D9_Draw::pEndScene_o, tD3D9_Draw::EndScene_m);
}