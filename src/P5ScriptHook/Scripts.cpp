static void WINAPI FiberStartAddress(LPVOID lpFiberParameter)
{
	auto script = (tScriptHookScript*)lpFiberParameter;

	while (1)
	{
		if (!script->m_pScriptContext) script->m_pScriptContext = new tScriptContext;
		ScriptingInvoke::pOurContext = script->m_pScriptContext;
		script->m_pFunction();
		ScriptingInvoke::pOurContext = nullptr;

		SwitchToFiber(g_pMainFiber);
	}
}

void ProcessScripts(std::vector<tScriptHookScript*>& scripts)
{
	if (!g_pMainFiber) g_pMainFiber = GetCurrentFiber();

	for (auto script : scripts)
	{
		if (!script->g_pFiberThread) script->g_pFiberThread = CreateFiber(0, FiberStartAddress, script);
		SwitchToFiber(script->g_pFiberThread);
	}
}