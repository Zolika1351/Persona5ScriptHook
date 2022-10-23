#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define VALIDATE_OFFSET(struc, member, offset) \
	static_assert(offsetof(struc, member) == offset, "The offset of " #member " in " #struc " is not " #offset "...")

#include "NewAddressSet.h"
#include "ScriptEngine.h"
#include "ScriptingInvoke.h"

auto& g_fFrametime = AddressSetter::GetRefFromRelative<float>(mem::FindPattern("FF 81 B0 0B 00 00 4C 8D 71 48 33 FF") - 0xE);