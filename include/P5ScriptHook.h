#include <Windows.h>
#include <type_traits>

#pragma comment(lib, "P5ScriptHook.lib")

// scripting stuff
// use this to register a new script to run every frame
extern "C" void __cdecl RegisterScript(void(*function)(), char* name);

// imports for the script invoker
extern "C" void InitScriptContext();
extern "C" void SetArgumentCount(int count);
extern "C" void SetArgumentFloat(int id, float value);
extern "C" void SetArgumentInt(int id, int value);
extern "C" void SetArgumentString(int id, char* value);
extern "C" void* CallScriptFunction(int id);

// helper functions
// get frametime in seconds (e.g. 120FPS would be 0.0083333...)
extern "C" float __cdecl GetFrameTime();

#include "ScriptingInvoke.h"
#include "ScriptingFunctions.h"
#include "Scripting.h"