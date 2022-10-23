namespace ScriptingInvoke
{
	tScriptContext pOurContext;

	void ClearScriptContext()
	{
		memset(&pOurContext, 0, sizeof(tScriptContext));
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

		g_pScriptContext = &pOurContext;
		((void(*)())(addr))();
		g_pScriptContext = nullptr;
		return &pOurContext.m_nReturn;
	}

	template<bool isFloat, typename T>
	void SetArgument(int id, int type, T value)
	{
		// double -> float
		if constexpr (isFloat) *(float*)&pOurContext.m_nArguments[pOurContext.m_nNumArgs - id] = value;
		else *(T*)&pOurContext.m_nArguments[pOurContext.m_nNumArgs - id] = value;
		pOurContext.m_nArgTypes[pOurContext.m_nNumArgs - id] = type;
	}

	void SetArgCount(int count)
	{
		pOurContext.m_nNumArgs = count;
	}
}