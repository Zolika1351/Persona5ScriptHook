#include <Windows.h>
#include <type_traits>

#pragma comment(lib, "P5ScriptHook.lib")

// scripting stuff
// use this to register a new script to run every frame
extern "C" void __cdecl RegisterScript(void(*function)(), char* name);

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

#include "ScriptingInvoke.h"
#include "ScriptingFunctions.h"
#include "Scripting.h"