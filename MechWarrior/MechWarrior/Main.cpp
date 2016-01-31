#include <Windows.h>
#include <process.h>

DWORD WINAPI MainThread(LPVOID lp)
{
	return NULL;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		CreateThread(0, 0, MainThread, 0, 0, 0);//test comment
	}
	return TRUE;
}