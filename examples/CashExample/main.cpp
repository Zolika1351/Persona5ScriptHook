#include "../../include/P5ScriptHook.h"

// simple plugin: press F5 to add 500k money
void scriptMain()
{
	static bool lastPressed = 0;
	bool pressed = (GetAsyncKeyState(VK_F5) & 0x8000) != 0;
	if (pressed && !lastPressed)
	{
		// make sure the player exists
		if (Scripting::FLD_PC_GET_RESHND(0) != -1)
		{
			Scripting::ADD_PC_MONEY(500000);
		}
	}
	lastPressed = pressed;
}

BOOL APIENTRY DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		RegisterScript(scriptMain, "Cash Example");
	}
	return TRUE;
}