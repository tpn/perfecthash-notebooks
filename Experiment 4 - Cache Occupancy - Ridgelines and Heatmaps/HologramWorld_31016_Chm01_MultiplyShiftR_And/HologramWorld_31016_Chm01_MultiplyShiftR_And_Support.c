#include "HologramWorld_31016_Chm01_MultiplyShiftR_And_StdAfx.h"

#include "HologramWorld_31016_Chm01_MultiplyShiftR_And_Support.h"


//
// Begin CompiledPerfectHashTableSupport.c.
//


volatile ULONG CtrlCPressed = 0;

void
CphQueryPerformanceCounter(
    _Out_ PLARGE_INTEGER Count
    )
{
    Count->QuadPart = __rdtsc();
}


//
// End CompiledPerfectHashTableSupport.c.
//

