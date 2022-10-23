namespace Hook
{
	bool bInitialized = 0;
	void(*returnDest)() = nullptr;

	void MainHook()
	{
		ProcessScripts();
		if (auto ret = returnDest) ret();
	}

	uint8_t hookedBytes[] =
	{
		0x48, 0x8B, 0x5C, 0x24, 0x40, // mov rbx,[rsp+40]
		0x48, 0x8B, 0x6C, 0x24, 0x48, // mov rbp,[rsp+48]
		0x48, 0x8B, 0x74, 0x24, 0x50, // mov rsi,[rsp+50]
		0x0F, 0x28, 0x74, 0x24, 0x20, // movaps xmm6,[rsp+20]
		0x48, 0x83, 0xC4, 0x30, // add rsp,30
		0x5F, // pop rdi
		0xFF, 0x25, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // jmp destination 1401F50A1
	};

	void PlaceHook()
	{
		if (!bInitialized)
		{
			DWORD		dwProtect;
			VirtualProtect((void*)hookedBytes, sizeof(hookedBytes), PAGE_EXECUTE_READWRITE, &dwProtect);
			*(uint64_t*)(hookedBytes + 0x1F) = (uintptr_t)MainHook;

			auto addr = mem::FindPattern("48 89 AB 80 00 00 00 48 89 AB 88 00 00 00 48 8B") + 0x32;
			Trampoline* t = Trampoline::MakeTrampoline<uint64_t>(addr);

			// detect existing hooks for compatibility with multiple plugins
			if (*(uint8_t*)addr == 0xE9)
			{
				auto dest = AddressSetter::ReadAddrFromRelative(addr + 1);

				// go through any trampolines
				while (*(uint32_t*)dest == 0x000025FF) dest = *(uint64_t*)(dest + 0x6);

				*(uint64_t*)&returnDest = *(uint64_t*)(dest + 0x1F);
			}

			Memory::VP::InjectHook(addr, t->Jump(hookedBytes), PATCH_JUMP);
			bInitialized = 1;
		}
	}
}