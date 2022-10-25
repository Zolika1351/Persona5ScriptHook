void RegisterScript(void(*function)(), char* name, std::vector<tScriptHookScript*>& scripts, char* typeName)
{
	if (!function) return;

	auto script = new tScriptHookScript;
	script->m_pFunction = function;
	script->m_sName = name;
	scripts.push_back(script);
	WriteToLog("[" + (name ? (std::string)name : "Unnamed") + "] Script loaded (" + (std::string)typeName + ")");
}

extern "C" __declspec(dllexport) void __cdecl RegisterScript(void(*function)(), char* name)
{
	RegisterScript(function, name, g_aScripts, "Main");
}

extern "C" __declspec(dllexport) void __cdecl RegisterScriptDXPresent(void(*function)(), char* name)
{
	RegisterScript(function, name, g_aDXPresentScripts, "DirectX Present");
}

extern "C" __declspec(dllexport) void __cdecl RegisterScriptDXReset(void(*function)(), char* name)
{
	RegisterScript(function, name, g_aDXResetScripts, "DirectX Reset");
}

extern "C" __declspec(dllexport) void __cdecl RegisterScriptWndProc(WNDPROC function, char* name)
{
	if (!function) return;

	auto script = new tWndProcHook;
	script->m_pFunction = function;
	script->m_sName = name;
	g_aWndProcHooks.push_back(script);
	WriteToLog("[" + (name ? (std::string)name : "Unnamed") + "] Script loaded (WndProc)");
}

extern "C" __declspec(dllexport) void __cdecl InitScriptContext()
{
	ScriptingInvoke::ClearScriptContext();
}

extern "C" __declspec(dllexport) void __cdecl SetArgumentCount(int count)
{
	ScriptingInvoke::SetArgCount(count);
}

extern "C" __declspec(dllexport) void __cdecl SetArgumentFloat(int id, float value)
{
	ScriptingInvoke::SetArgument<1>(id, 1, value);
}

extern "C" __declspec(dllexport) void __cdecl SetArgumentInt(int id, int value)
{
	ScriptingInvoke::SetArgument<0>(id, 0, value);
}

extern "C" __declspec(dllexport) void __cdecl SetArgumentString(int id, char* value)
{
	ScriptingInvoke::SetArgument<0>(id, 0, value);
}

extern "C" __declspec(dllexport) void* __cdecl CallScriptFunction(int id)
{
	return ScriptingInvoke::CallFunc(id);
}

extern "C" __declspec(dllexport) float __cdecl GetFrameTime()
{
	return g_fFrametime;
}

extern "C" __declspec(dllexport) int __cdecl GetSequence()
{
	if (!g_pSequenceInfo || !g_pSequenceInfo->m_pInfo) return 1;
	return g_pSequenceInfo->m_pInfo->m_nSequenceId;
}

extern "C" __declspec(dllexport) IDXGISwapChain* __cdecl GetSwapChain()
{
	return g_pSwapChain;
}

extern "C" __declspec(dllexport) HWND __cdecl GetGameHWND()
{
	return ghWnd;
}