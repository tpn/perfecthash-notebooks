//
// Compiled Perfect Hash Table C Source File.  Auto-generated.
//

#include "HologramWorld_31016_Chm01_MultiplyShiftR_And_StdAfx.h"

#ifdef _WIN32

//
// Disable "function ... selected for inline expansion" warning.
//

#pragma warning(push)
#pragma warning(disable: 4711)

#endif


//
// Begin CompiledPerfectHashTableChm01IndexMultiplyShiftRAnd.c.
//


DECLARE_INDEX_ROUTINE()
{
    CPHINDEX Index;
    CPHDKEY Vertex1;
    CPHDKEY Vertex2;
    CPHDKEY MaskedLow;
    CPHDKEY MaskedHigh;
    CPHDKEY DownsizedKey;

    //IACA_VC_START();

    DownsizedKey = DOWNSIZE_KEY(Key);

    Vertex1 = DownsizedKey * SEED1;
    Vertex1 = Vertex1 >> SEED3_BYTE1;

    Vertex2 = DownsizedKey * SEED2;
    Vertex2 = Vertex2 >> SEED3_BYTE2;

    MaskedLow = Vertex1 & HASH_MASK;
    MaskedHigh = Vertex2 & HASH_MASK;

    Vertex1 = TABLE_DATA[MaskedLow];
    Vertex2 = TABLE_DATA[MaskedHigh];

    Index = (CPHINDEX)((Vertex1 + Vertex2) & INDEX_MASK);

    //IACA_VC_END();

    return Index;
}

#ifndef CPH_INLINE_ROUTINES

DECLARE_INDEX_IACA_ROUTINE()
{
    CPHINDEX Index;
    CPHDKEY Vertex1;
    CPHDKEY Vertex2;
    CPHDKEY MaskedLow;
    CPHDKEY MaskedHigh;
    CPHDKEY DownsizedKey;

    IACA_VC_START();

    DownsizedKey = DOWNSIZE_KEY(Key);

    Vertex1 = DownsizedKey * SEED1;
    Vertex1 = Vertex1 >> SEED3_BYTE1;

    Vertex2 = DownsizedKey * SEED2;
    Vertex2 = Vertex2 >> SEED3_BYTE2;

    MaskedLow = Vertex1 & HASH_MASK;
    MaskedHigh = Vertex2 & HASH_MASK;

    Vertex1 = TABLE_DATA[MaskedLow];
    Vertex2 = TABLE_DATA[MaskedHigh];

    Index = (CPHINDEX)((Vertex1 + Vertex2) & INDEX_MASK);

    IACA_VC_END();

    return Index;
}

#endif

//
// End CompiledPerfectHashTableChm01IndexMultiplyShiftRAnd.c.
//


//
// Begin CompiledPerfectHashTableRoutines.c.
//


#ifndef CPH_INDEX_ONLY

DECLARE_LOOKUP_ROUTINE()
{
    CPHINDEX Index;

    Index = INDEX_ROUTINE(Key);
    return TABLE_VALUES[Index];
}

DECLARE_INSERT_ROUTINE()
{
    CPHINDEX Index;
    CPHVALUE Previous;

    Index = INDEX_ROUTINE(Key);
    Previous = TABLE_VALUES[Index];
    TABLE_VALUES[Index] = Value;
    return Previous;
}

DECLARE_DELETE_ROUTINE()
{
    CPHINDEX Index;
    CPHVALUE Previous;

    Index = INDEX_ROUTINE(Key);
    Previous = TABLE_VALUES[Index];
    TABLE_VALUES[Index] = 0;
    return Previous;
}

#endif

//
// End CompiledPerfectHashTableRoutines.c.
//


#ifdef _WIN32
#pragma warning(pop)
#endif
