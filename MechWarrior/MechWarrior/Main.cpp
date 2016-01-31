#include <Windows.h>
#include <process.h>

int WINAPI DllMain(HMODULE hMod, DWORD dwReason_for_call, LPVOID lpvReserved)
{
	//DisableThreadLibraryCalls(hMod);

	switch (dwReason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		//Success:

		break;

	default:
		//Failed:

		break;
	}

	return 1;
}