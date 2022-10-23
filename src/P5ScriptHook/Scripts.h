struct tScriptHookScript
{
	void(*m_pFunction)();
	char* m_sName;
};
std::vector<tScriptHookScript*> g_aScripts;

void ProcessScripts()
{
	for (auto script : g_aScripts)
	{
		script->m_pFunction();
	}
}