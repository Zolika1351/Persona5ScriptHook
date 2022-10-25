#include "../../include/P5ScriptHook.h"

#include "ImGuiHandler.cpp"

void PresentMain()
{
	if (SetUpImGui(GetSwapChain()))
	{
		// shows a demo window for the example, put your code here
		bool open = 1;
		ImGui::ShowDemoWindow(&open);

		RenderImGui();
	}
}

BOOL APIENTRY DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		RegisterScriptDXPresent(PresentMain, "ImGui Example");
		RegisterScriptDXReset(CleanUpImGui, "ImGui Example");
		RegisterScriptWndProc(ImGui_ImplWin32_WndProcHandler, "ImGui Example");
	}
	return TRUE;
}