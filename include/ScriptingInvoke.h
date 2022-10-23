namespace ScriptingInvoke
{
	template<typename T>
	static inline void SetArgument(int id, T value)
	{
		if constexpr (std::is_same<T, float>::value || std::is_same<T, double>::value) SetArgumentFloat(id, value);
		else if constexpr (std::is_same<T, char*>::value) SetArgumentString(id, value);
		else SetArgumentInt(id, value);
	}

	template <typename T>
	static inline T Invoke(int id)
	{
		InitScriptContext();
		SetArgumentCount(0);
		return *(T*)CallScriptFunction(id);
	}

	template <typename T, typename A1>
	static inline T Invoke(int id, A1 a1)
	{
		InitScriptContext();
		SetArgumentCount(1);
		SetArgument(0, a1);
		return *(T*)CallScriptFunction(id);
	}

	template <typename T, typename A1, typename A2>
	static inline T Invoke(int id, A1 a1, A2 a2)
	{
		InitScriptContext();
		SetArgumentCount(2);
		SetArgument(0, a1);
		SetArgument(1, a2);
		return *(T*)CallScriptFunction(id);
	}

	template <typename T, typename A1, typename A2, typename A3>
	static inline T Invoke(int id, A1 a1, A2 a2, A3 a3)
	{
		InitScriptContext();
		SetArgumentCount(3);
		SetArgument(0, a1);
		SetArgument(1, a2);
		SetArgument(2, a3);
		return *(T*)CallScriptFunction(id);
	}

	template <typename T, typename A1, typename A2, typename A3, typename A4>
	static inline T Invoke(int id, A1 a1, A2 a2, A3 a3, A4 a4)
	{
		InitScriptContext();
		SetArgumentCount(4);
		SetArgument(0, a1);
		SetArgument(1, a2);
		SetArgument(2, a3);
		SetArgument(3, a4);
		return *(T*)CallScriptFunction(id);
	}

	template <typename T, typename A1, typename A2, typename A3, typename A4, typename A5>
	static inline T Invoke(int id, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5)
	{
		InitScriptContext();
		SetArgumentCount(5);
		SetArgument(0, a1);
		SetArgument(1, a2);
		SetArgument(2, a3);
		SetArgument(3, a4);
		SetArgument(4, a5);
		return *(T*)CallScriptFunction(id);
	}

	template <typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
	static inline T Invoke(int id, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6)
	{
		InitScriptContext();
		SetArgumentCount(6);
		SetArgument(0, a1);
		SetArgument(1, a2);
		SetArgument(2, a3);
		SetArgument(3, a4);
		SetArgument(4, a5);
		SetArgument(5, a6);
		return *(T*)CallScriptFunction(id);
	}

	template <typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
	static inline T Invoke(int id, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7)
	{
		InitScriptContext();
		SetArgumentCount(7);
		SetArgument(0, a1);
		SetArgument(1, a2);
		SetArgument(2, a3);
		SetArgument(3, a4);
		SetArgument(4, a5);
		SetArgument(5, a6);
		SetArgument(6, a7);
		return *(T*)CallScriptFunction(id);
	}

	template <typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
	static inline T Invoke(int id, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8)
	{
		InitScriptContext();
		SetArgumentCount(8);
		SetArgument(0, a1);
		SetArgument(1, a2);
		SetArgument(2, a3);
		SetArgument(3, a4);
		SetArgument(4, a5);
		SetArgument(5, a6);
		SetArgument(6, a7);
		SetArgument(7, a8);
		return *(T*)CallScriptFunction(id);
	}
}