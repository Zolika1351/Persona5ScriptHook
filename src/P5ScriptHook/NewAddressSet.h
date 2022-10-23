#include "NativeMemory.cpp"
namespace AddressSetter
{
	uint64_t ReadAddrFromRelative(uint64_t location)
	{
		uint64_t origaddr = location;

		auto offset32 = *(int32_t*)(origaddr);

		int64_t offset = offset32;

		uint64_t ret = origaddr + offset + 4;

		return ret;
	}
	
	uint64_t ReadAddrFrom32Pointer(uint64_t location)
	{
		uint32_t target = *(uint32_t*)location;
		uint64_t base = (uintptr_t)GetModuleHandle(0);
		uint64_t ret = base + target;
		return ret;
	}

	template<typename T> T& GetRefFrom32Pointer(uint64_t addr, uint64_t offset = 0)
	{
		if (addr > 0xEFFFFFFFFFFFFFFF) return *(T*)nullptr;
		if (addr < 0x10000000) return *(T*)nullptr;
		return *reinterpret_cast<T*>(ReadAddrFrom32Pointer(addr) + offset);
	}

	template<typename T> T& GetRefFromRelative(uint64_t addr, uint64_t offset = 0)
	{
		if (addr > 0xEFFFFFFFFFFFFFFF) return *(T*)nullptr;
		if (addr < 0x10000000) return *(T*)nullptr;
		return *reinterpret_cast<T*>(ReadAddrFromRelative(addr) + offset);
	}

	template<typename T> T& GetRef(const char* pattern)
	{
		uint64_t addr = mem::FindPattern(pattern);

		return *reinterpret_cast<T*>(addr);
	}
}