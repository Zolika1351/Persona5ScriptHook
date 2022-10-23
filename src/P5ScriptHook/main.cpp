#include <windows.h>
#include <string>
#include <list>
#include <sstream>
#include <fstream>
#include <ostream>
#include <vector>
#include <Psapi.h>
#include "ModUtils/MemoryMgr.h"
#include "ModUtils/Trampoline.h"

class tScriptContext;
LPVOID g_pMainFiber = 0;
void SetScriptContext();

#include "Scripts.h"
#include "Game.h"
#include "Logging.h"
#include "Scripts.cpp"
#include "Hook.h"
#include "Exports.h"

// dummy thread so the plugin doesn't unload
DWORD WINAPI DummyThread(HMODULE hModule)
{
	while (true) Sleep(1000);
	FreeLibraryAndExitThread(hModule, 0);
	return 0;
}

BOOL APIENTRY DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		HMODULE hModule = NULL;
		GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, (LPCTSTR)DllMain, &hModule);
		CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)DummyThread, hModule, 0, nullptr);
		Hook::PlaceHook();
	}
	return TRUE;
}