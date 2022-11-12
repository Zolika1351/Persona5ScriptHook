#include <Windows.h>
#include <d3d11.h>
#include <type_traits>

#pragma comment(lib, "P5ScriptHook.lib")

// scripting stuff
// use this to register a new script to run every frame
extern "C" void __cdecl RegisterScript(void(*function)(), char* name);
// use this to register a script that draws with DirectX
extern "C" void __cdecl RegisterScriptDXPresent(void(*function)(), char* name);
// use this to register a handler for DirectX resets
extern "C" void __cdecl RegisterScriptDXReset(void(*function)(), char* name);
// use this to register a handler for WndProc events (DO NOT use any script functions here)
extern "C" void __cdecl RegisterScriptWndProc(WNDPROC function, char* name);

// imports for the script invoker
extern "C" void __cdecl InitScriptContext();
extern "C" void __cdecl SetArgumentCount(int count);
extern "C" void __cdecl SetArgumentFloat(int id, float value);
extern "C" void __cdecl SetArgumentInt(int id, int value);
extern "C" void __cdecl SetArgumentString(int id, char* value);
extern "C" void* __cdecl CallScriptFunction(int id);

// helper functions
// get frametime in seconds (e.g. 120FPS would be 0.0083333...)
extern "C" float __cdecl GetFrameTime();
// get sequence id (1 - title screen, 4 - gameplay, 7 - non-interactable, hangouts or calendar etc)
extern "C" int __cdecl GetSequence();
// get the game's DXGI swap chain, use for drawing
extern "C" IDXGISwapChain* __cdecl GetSwapChain();
// get the game's HWND
extern "C" HWND __cdecl GetGameHWND();
// get the screen fade state (3 - faded in, any other value is either fading in, fading out, or fully faded out)
extern "C" int __cdecl GetFadeState();

#include "ScriptingInvoke.h"
#include "ScriptingFunctions.h"
#include "Scripting.h"