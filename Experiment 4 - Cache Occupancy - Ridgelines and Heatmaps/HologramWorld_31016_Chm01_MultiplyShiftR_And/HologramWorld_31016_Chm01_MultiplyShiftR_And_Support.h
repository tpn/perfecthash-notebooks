#include "HologramWorld_31016_Chm01_MultiplyShiftR_And_StdAfx.h"


//
// Begin CompiledPerfectHashTableSupport.h.
//



extern
void
CphQueryPerformanceCounter(
    _Out_ PLARGE_INTEGER Count
    );

extern volatile ULONG CtrlCPressed;

#define FOR_EACH_KEY \
    for (Index = 0, Source = KEYS; Index < NUMBER_OF_KEYS; Index++)

#ifdef _WIN32

extern
BOOLEAN
QueryPerformanceCounter(
    _Out_ PLARGE_INTEGER Count
    );

#define CPH_MAIN() \
VOID               \
__stdcall          \
mainCRTStartup(    \
    void           \
    )

extern void ExitProcess(ULONG);
#define CPH_EXIT(Code) ExitProcess(Code)

#elif defined(__linux__) || defined(__APPLE__)

#include <stdio.h>

#define CPH_MAIN() \
int                \
main(              \
    int argc,      \
    char **argv    \
    )

#define CPH_EXIT(Code)    \
    printf("%d\n", Code); \
    return Code

#endif


//
// End CompiledPerfectHashTableSupport.h.
//

