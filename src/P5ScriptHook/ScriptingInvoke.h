namespace ScriptingInvoke
{
	tScriptContext* pOurContext = nullptr;

	void ClearScriptContext()
	{
		memset(pOurContext, 0, sizeof(tScriptContext));
	}

	auto GetScriptFunc(int id)
	{
		int realid = id % 0x1000;
		int setid = (id - realid) / 0x1000;
		return &g_aScriptFunctions[setid].m_pFunctions[realid];
	}

	void* CallFunc(int id)
	{
		auto addr = GetScriptFunc(id)->m_pFunc;

		auto context = pOurContext;

		bool ret = 0;
		while (!ret)
		{
			pOurContext = context;

			g_pScriptContext = pOurContext;
			ret = ((bool(*)())(addr))();
			g_pScriptContext = nullptr;

			if (!ret)
			{
				pOurContext->m_nWaitingFlag = 0x7FFFFFFF;
				SwitchToFiber(g_pMainFiber);
			}
		}

		return &pOurContext->m_nReturn;
	}

	template<bool isFloat, typename T>
	void SetArgument(int id, int type, T value)
	{
		// double -> float
		if constexpr (isFloat) *(float*)&pOurContext->m_nArguments[pOurContext->m_nNumArgs - id] = value;
		else *(T*)&pOurContext->m_nArguments[pOurContext->m_nNumArgs - id] = value;
		pOurContext->m_nArgTypes[pOurContext->m_nNumArgs - id] = type;
	}

	void SetArgCount(int count)
	{
		pOurContext->m_nNumArgs = count;
	}
}