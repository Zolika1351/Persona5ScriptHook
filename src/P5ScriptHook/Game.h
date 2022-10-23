#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define VALIDATE_OFFSET(struc, member, offset) \
	static_assert(offsetof(struc, member) == offset, "The offset of " #member " in " #struc " is not " #offset "...")

#include "NewAddressSet.h"
#include "ScriptEngine.h"
#include "ScriptingInvoke.h"

auto& g_fFrametime = AddressSetter::GetRefFromRelative<float>(mem::FindPattern("FF 81 B0 0B 00 00 4C 8D 71 48 33 FF") - 0xE);

struct tSequenceStruct
{
	uint8_t pad[0x4];			// 00-04
	uint32_t m_nSequenceId;		// 04-08
};

struct tSequenceInfo
{
	uint8_t pad[0x48];			// 00-48
	tSequenceStruct* m_pInfo;	// 48-50
};
auto& g_pSequenceInfo = AddressSetter::GetRefFromRelative<tSequenceInfo*>(mem::FindPattern("48 8B 05 ? ? ? ? 48 8B 58 48 48 8B FB 8B 4B 04 83 F9 FF 7E 07") + 0x3);