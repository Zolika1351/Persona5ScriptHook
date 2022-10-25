class tScriptContext;
LPVOID g_pMainFiber = 0;
IDXGISwapChain* g_pSwapChain = nullptr;

struct tScriptHookScript
{
	void(*m_pFunction)() = nullptr;
	char* m_sName = nullptr;
	tScriptContext* m_pScriptContext = nullptr;
	LPVOID g_pFiberThread = nullptr;
};
std::vector<tScriptHookScript*> g_aScripts;
std::vector<tScriptHookScript*> g_aDXPresentScripts;
std::vector<tScriptHookScript*> g_aDXResetScripts;

struct tWndProcHook
{
	WNDPROC m_pFunction = nullptr;
	char* m_sName = nullptr;
};
std::vector<tWndProcHook*> g_aWndProcHooks;