#include "framework.h"
#include <windows.h>

typedef enum {
    AGS_SUCCESS = 0
} AGSReturnCode;

typedef struct {
    int reserved;
} AGSConfiguration;

typedef struct {
    int reserved;
} AGSContext;

typedef struct {
    int reserved;
} AGSGPUInfo;

extern "C" __declspec(dllexport)
AGSReturnCode agsInitialize(int agsVersion, const AGSConfiguration* config, AGSContext** context, AGSGPUInfo* gpuInfo)
{
    return AGS_SUCCESS;
}

extern "C" __declspec(dllexport)
AGSReturnCode agsDeInitialize(AGSContext* context)
{
    return AGS_SUCCESS;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}
