#include "../../include/P5ScriptHook.h"

// simple plugin: press F8 to add the Penalty move to Joker's persona
void scriptMain()
{
	static bool lastPressed = 0;
	bool pressed = (GetAsyncKeyState(VK_F8) & 0x8000) != 0;
	if (pressed && !lastPressed)
	{
		// make sure the player exists
		if (Scripting::FLD_PC_GET_RESHND(0) != -1)
		{
			Scripting::SKILL_ADD(1, 477);
			Scripting::FADEIN(0, 10);
		}
	}
	lastPressed = pressed;
}

BOOL APIENTRY DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		RegisterScript(scriptMain, "Skill Example");
	}
	return TRUE;
}