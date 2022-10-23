struct tScriptFunc
{
	uint64_t m_pFunc;					// 00-08
	uint32_t m_nNumArgs;				// 08-10
	const char* m_sName;				// 10-18
};
VALIDATE_SIZE(tScriptFunc, 0x18);

struct tScriptFuncSet
{
	tScriptFunc* m_pFunctions;			// 00-08
	uint32_t m_nFunctionCount;			// 08-0C
};
auto g_aScriptFunctions = (tScriptFuncSet*)AddressSetter::ReadAddrFrom32Pointer(mem::FindPattern("4F 8D 14 64 4C 89 54 24 70 4E 8D 34") - 0x4);

struct tScriptContext
{
	uint8_t pad[0x2C];			// 000-02C
	uint16_t m_nNumArgs;		// 02C-02E
	uint8_t pad2;				// 02E-02F
	uint8_t m_nArgTypes[32];	// 02F-04F
	uint8_t pad3[0x9];			// 04F-058
	uint64_t m_nArguments[32];	// 058-158
	uint8_t pad4[0x80];			// 158-1D8
	uint32_t m_nReturn = 0;		// 1D8-1DC
	uint8_t pad5[0x400];		// 1DC-4DC massive pad since im not sure how big this is
};
VALIDATE_OFFSET(tScriptContext, m_nNumArgs, 0x2C);
VALIDATE_OFFSET(tScriptContext, m_nArgTypes, 0x2F);
VALIDATE_OFFSET(tScriptContext, m_nArguments, 0x58);
VALIDATE_OFFSET(tScriptContext, m_nReturn, 0x1D8);
auto& g_pScriptContext = AddressSetter::GetRefFromRelative<tScriptContext*>(mem::FindPattern("41 8D 40 01 48 63 C8 B8 01 00 00 00 C6 42 5F 00 48 89 8A D8 01 00 00 C3") - 0x4);
