#include "HologramWorld_31016_Chm01_MultiplyShiftR_And_StdAfx.h"

#include "HologramWorld_31016_Chm01_MultiplyShiftR_And_Support.h"

#ifdef _WIN32

//
// Disable "function ... selected for inline expansion" warning.
//

#pragma warning(push)
#pragma warning(disable: 4711)

#endif


//
// Begin CompiledPerfectHashTableBenchmarkIndex.c.
//


DECLARE_BENCHMARK_INDEX_CPH_ROUTINE()
{
    CPHKEY Key;
    CPHINDEX Index;
    ULONG Count;
    ULONG Attempt = 1000;
    const ULONG Iterations = 1000;
    LARGE_INTEGER Start;
    LARGE_INTEGER End;
    LARGE_INTEGER Delta;
    ULONG Best = (ULONG)-1;

    Key = *KEYS;

    if (Seconds) {

        while (!CtrlCPressed) {

            CphQueryPerformanceCounter(&Start);

            for (Count = Iterations; Count != 0; Count--) {
                Index = INDEX_ROUTINE(Key);
            }

            CphQueryPerformanceCounter(&End);

            Delta.QuadPart = End.QuadPart - Start.QuadPart;

            if (Delta.LowPart < Best) {
                Best = Delta.LowPart;
            }

        }

    } else {

        while (Attempt--) {

            CphQueryPerformanceCounter(&Start);

            for (Count = Iterations; Count != 0; Count--) {
                Index = INDEX_ROUTINE(Key);
            }

            CphQueryPerformanceCounter(&End);

            Delta.QuadPart = End.QuadPart - Start.QuadPart;

            if (Delta.LowPart < Best) {
                Best = Delta.LowPart;
            }

        }

    }

    return Best;
}


//
// End CompiledPerfectHashTableBenchmarkIndex.c.
//


#ifdef _WIN32
#pragma warning(pop)
#endif
