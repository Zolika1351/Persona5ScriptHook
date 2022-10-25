namespace Hook
{
	bool bInitialized = 0;
	void(*returnDest)() = nullptr;

	WNDPROC pWndProcOrig;
	LRESULT WINAPI WndProcHook(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
	{
		for (auto script : g_aWndProcHooks)
		{
			script->m_pFunction(hWnd, uMsg, wParam, lParam);
		}

		return CallWindowProc(pWndProcOrig, hWnd, uMsg, wParam, lParam);
	}

	void MainHook()
	{
		static bool bFirst = 1;
		if (bFirst)
		{
			pWndProcOrig = (WNDPROC)SetWindowLongPtr(ghWnd, GWLP_WNDPROC, (LONG_PTR)WndProcHook);
			bFirst = 0;
		}

		ProcessScripts(g_aScripts);
		if (auto ret = returnDest) ret();
	}

	void DXPresentHook()
	{
		ProcessScripts(g_aDXPresentScripts);
	}

	void DXResetHook()
	{
		ProcessScripts(g_aDXResetScripts);
	}
	
	uint64_t jmp_140367DDF;
	void PresentHook()
	{
		__asm
		{
			mov     rcx, [rbx+10h]
			mov     r8d, edi
			mov [g_pSwapChain], rcx
	
			push rax
			push rbx
			push rcx
			push rdx
			push rsi
			push rdi
			push rbp
			push rsp
			push r8
			push r9
			push r10
			push r11
			push r12
			push r13
			push r14
			push r15
	
			call DXPresentHook
	
			pop r15
			pop r14
			pop r13
			pop r12
			pop r11
			pop r10
			pop r9
			pop r8
			pop rsp
			pop rbp
			pop rdi
			pop rsi
			pop rdx
			pop rcx
			pop rbx
			pop rax
	
			jmp jmp_140367DDF
		}
	}
	
	uint64_t jmp_140367FBA;
	void ResizeBuffersHook()
	{
		__asm
		{
			mov     rcx, [r15+10h]
			xor     edx, edx
			mov     r9d, [rbx]
			mov     r8d, [rdi]
	
			push rax
			push rbx
			push rcx
			push rdx
			push rsi
			push rdi
			push rbp
			push rsp
			push r8
			push r9
			push r10
			push r11
			push r12
			push r13
			push r14
			push r15
	
			call DXResetHook
	
			pop r15
			pop r14
			pop r13
			pop r12
			pop r11
			pop r10
			pop r9
			pop r8
			pop rsp
			pop rbp
			pop rdi
			pop rsi
			pop rdx
			pop rcx
			pop rbx
			pop rax
	
			jmp jmp_140367FBA
		}
	}

	void PlaceDirectXHooks()
	{
		if (auto addr = mem::FindPattern("48 8B 4B 10 44 8B C7 48 8B 01 FF 50 40 48 8B 4B 28"))
		{
			jmp_140367DDF = addr + 0x7;

			uint64_t func = (uint64_t)&PresentHook;
			func += 0xF; // get rid of compiler-added instructions, note that changing the compiler can and will break this

			Trampoline* t = Trampoline::MakeTrampoline<uint64_t>(addr);
			Memory::VP::InjectHook(addr, t->Jump(func), PATCH_JUMP);
		}

		if (auto addr = mem::FindPattern("49 8B 4F 10 33 D2 44 8B 0B 44 8B 07 C7 44 24 28 02 08"))
		{
			jmp_140367FBA = addr + 0xC;

			uint64_t func = (uint64_t)&ResizeBuffersHook;
			func += 0xF; // get rid of compiler-added instructions, note that changing the compiler can and will break this

			Trampoline* t = Trampoline::MakeTrampoline<uint64_t>(addr);
			Memory::VP::InjectHook(addr, t->Jump(func), PATCH_JUMP);
		}
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

			PlaceDirectXHooks();

			bInitialized = 1;
		}
	}
}