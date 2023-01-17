#include "HologramWorld_31016_Chm01_MultiplyShiftR_And_StdAfx.h"

#include "HologramWorld_31016_Chm01_MultiplyShiftR_And_Support.h"


//
// Begin CompiledPerfectHashTableBenchmarkFullExe.c.
//


CPH_MAIN()
{
    ULONG Cycles;
    ULONG Seconds = 0;

    Cycles = BENCHMARK_FULL_CPH_ROUTINE(Seconds);

    CPH_EXIT(Cycles);
}


//
// End CompiledPerfectHashTableBenchmarkFullExe.c.
//

