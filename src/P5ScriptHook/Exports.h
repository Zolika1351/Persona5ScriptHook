extern "C" __declspec(dllexport) void __cdecl RegisterScript(void(*function)(), char* name)
{
	if (!function) return;

	auto script = new tScriptHookScript;
	script->m_pFunction = function;
	script->m_sName = name;
	g_aScripts.push_back(script);
	WriteToLog("[" + (name ? (std::string)name : "Unnamed") + "] Script loaded");
}

extern "C" __declspec(dllexport) float __cdecl GetFrameTime()
{
	return g_fFrametime;
}

extern "C" __declspec(dllexport) void InitScriptContext()
{
	ScriptingInvoke::ClearScriptContext();
}

extern "C" __declspec(dllexport) void SetArgumentCount(int count)
{
	ScriptingInvoke::SetArgCount(count);
}

extern "C" __declspec(dllexport) void SetArgumentFloat(int id, float value)
{
	ScriptingInvoke::SetArgument<1>(id, 1, value);
}

extern "C" __declspec(dllexport) void SetArgumentInt(int id, int value)
{
	ScriptingInvoke::SetArgument<0>(id, 0, value);
}

extern "C" __declspec(dllexport) void SetArgumentString(int id, char* value)
{
	ScriptingInvoke::SetArgument<0>(id, 0, value);
}

extern "C" __declspec(dllexport) void* CallScriptFunction(int id)
{
	return ScriptingInvoke::CallFunc(id);
}