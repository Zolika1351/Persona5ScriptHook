struct tScriptHookScript
{
	void(*m_pFunction)() = nullptr;
	char* m_sName = nullptr;
	tScriptContext* m_pScriptContext = nullptr;
	LPVOID g_pFiberThread = nullptr;
};
std::vector<tScriptHookScript*> g_aScripts;