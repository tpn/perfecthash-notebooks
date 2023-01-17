//
// Compiled Perfect Hash Table C Header File.  Auto-generated.
//

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "HologramWorld_31016_Chm01_MultiplyShiftR_And_StdAfx.h"

#ifndef CPH_TABLENAME
#define CPH_TABLENAME HologramWorld_31016_Chm01_MultiplyShiftR_And
#endif

#ifndef CPH_TABLENAME_UPPER
#define CPH_TABLENAME_UPPER HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND
#endif

#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_NUMBER_OF_KEYS 31016

extern const CPHSEED HologramWorld_31016_Chm01_MultiplyShiftR_And_Seeds[3];
extern const CPHSEED HologramWorld_31016_Chm01_MultiplyShiftR_And_Seed1;
extern const CPHSEED HologramWorld_31016_Chm01_MultiplyShiftR_And_Seed2;
extern const CPHSEED HologramWorld_31016_Chm01_MultiplyShiftR_And_Seed3;
extern const CPHSEED64 HologramWorld_31016_Chm01_MultiplyShiftR_And_Seed12;

extern const CPHDKEY HologramWorld_31016_Chm01_MultiplyShiftR_And_HashMask;
extern const CPHDKEY HologramWorld_31016_Chm01_MultiplyShiftR_And_IndexMask;

extern const USHORT HologramWorld_31016_Chm01_MultiplyShiftR_And_TableData[];
extern CPHVALUE HologramWorld_31016_Chm01_MultiplyShiftR_And_TableValues[];

extern const CPHKEY HologramWorld_31016_Chm01_MultiplyShiftR_And_Keys[];
extern const CPHDKEY HologramWorld_31016_Chm01_MultiplyShiftR_And_DownsizedKeys[];
extern const CPHDKEY HologramWorld_31016_Chm01_MultiplyShiftR_And_NumberOfKeys;

#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_DOWNSIZE_KEY(Key) (Key)
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_ROTATE_KEY_LEFT _rotl
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_ROTATE_KEY_RIGHT _rotr

#include <CompiledPerfectHashMacroGlue.h>


//
// (End of preparation phase.)
//

#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED1 0x9589EB58
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED1_BYTE1 0x58
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED1_BYTE2 0xEB
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED1_BYTE3 0x89
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED1_BYTE4 0x95
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED1_WORD1 0xEB58
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED1_WORD2 0x9589
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED2 0x236BB6C0
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED2_BYTE1 0xC0
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED2_BYTE2 0xB6
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED2_BYTE3 0x6B
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED2_BYTE4 0x23
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED2_WORD1 0xB6C0
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED2_WORD2 0x236B
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED3 0x1008
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED3_BYTE1 0x8
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED3_BYTE2 0x10
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED3_BYTE3 0x0
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED3_BYTE4 0x0
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED3_WORD1 0x1008
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED3_WORD2 0x0
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_SEED12 0x236BB6C09589EB58

#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_HASH_MASK 0x1FFFF
#define HOLOGRAMWORLD_31016_CHM01_MULTIPLYSHIFTR_AND_INDEX_MASK 0xFFFF

#ifdef _WIN32

//
// Disable "unreferenced inline function has been removed" warning.
//

#pragma warning(push)
#pragma warning(disable: 4514)

#endif

#define CPH_INLINE_ROUTINES

//
// Begin CompiledPerfectHashTableRoutinesPre.c.
//


#ifdef CPH_INLINE_ROUTINES

#define INDEX_ROUTINE EXPAND_INDEX_INLINE_ROUTINE(CPH_TABLENAME)
#define DECLARE_INDEX_ROUTINE() EXPAND_INDEX_INLINE_ROUTINE_HEADER(CPH_TABLENAME)

#ifndef CPH_INDEX_ONLY
#define LOOKUP_ROUTINE EXPAND_LOOKUP_INLINE_ROUTINE(CPH_TABLENAME)
#define INSERT_ROUTINE EXPAND_INSERT_INLINE_ROUTINE(CPH_TABLENAME)
#define DELETE_ROUTINE EXPAND_DELETE_INLINE_ROUTINE(CPH_TABLENAME)

#define DECLARE_LOOKUP_ROUTINE() EXPAND_LOOKUP_INLINE_ROUTINE_HEADER(CPH_TABLENAME)
#define DECLARE_INSERT_ROUTINE() EXPAND_INSERT_INLINE_ROUTINE_HEADER(CPH_TABLENAME)
#define DECLARE_DELETE_ROUTINE() EXPAND_DELETE_INLINE_ROUTINE_HEADER(CPH_TABLENAME)
#endif

#else

#define INDEX_ROUTINE EXPAND_INDEX_ROUTINE(CPH_TABLENAME)
#define DECLARE_INDEX_ROUTINE() EXPAND_INDEX_ROUTINE_HEADER(CPH_TABLENAME)

#ifndef CPH_INDEX_ONLY
#define LOOKUP_ROUTINE EXPAND_LOOKUP_ROUTINE(CPH_TABLENAME)
#define INSERT_ROUTINE EXPAND_INSERT_ROUTINE(CPH_TABLENAME)
#define DELETE_ROUTINE EXPAND_DELETE_ROUTINE(CPH_TABLENAME)

#define DECLARE_LOOKUP_ROUTINE() EXPAND_LOOKUP_ROUTINE_HEADER(CPH_TABLENAME)
#define DECLARE_INSERT_ROUTINE() EXPAND_INSERT_ROUTINE_HEADER(CPH_TABLENAME)
#define DECLARE_DELETE_ROUTINE() EXPAND_DELETE_ROUTINE_HEADER(CPH_TABLENAME)
#endif

#endif


//
// End CompiledPerfectHashTableRoutinesPre.c.
//


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

//
// Begin CompiledPerfectHashTableRoutinesPost.c.
//


#ifdef CPH_INLINE_ROUTINES

#undef CPH_INLINE_ROUTINES

#undef INDEX_ROUTINE
#undef DECLARE_INDEX_ROUTINE

#ifndef CPH_INDEX_ONLY
#undef LOOKUP_ROUTINE
#undef INSERT_ROUTINE
#undef DELETE_ROUTINE

#undef DECLARE_LOOKUP_ROUTINE
#undef DECLARE_INSERT_ROUTINE
#undef DECLARE_DELETE_ROUTINE
#endif

#define INDEX_ROUTINE EXPAND_INDEX_ROUTINE(CPH_TABLENAME)
#define DECLARE_INDEX_ROUTINE() EXPAND_INDEX_ROUTINE_HEADER(CPH_TABLENAME)
#define DECLARE_INDEX_IACA_ROUTINE() EXPAND_INDEX_IACA_ROUTINE_HEADER(CPH_TABLENAME)

#ifndef CPH_INDEX_ONLY
#define LOOKUP_ROUTINE EXPAND_LOOKUP_ROUTINE(CPH_TABLENAME)
#define INSERT_ROUTINE EXPAND_INSERT_ROUTINE(CPH_TABLENAME)
#define DELETE_ROUTINE EXPAND_DELETE_ROUTINE(CPH_TABLENAME)

#define DECLARE_LOOKUP_ROUTINE() EXPAND_LOOKUP_ROUTINE_HEADER(CPH_TABLENAME)
#define DECLARE_INSERT_ROUTINE() EXPAND_INSERT_ROUTINE_HEADER(CPH_TABLENAME)
#define DECLARE_DELETE_ROUTINE() EXPAND_DELETE_ROUTINE_HEADER(CPH_TABLENAME)
#endif

#endif


//
// End CompiledPerfectHashTableRoutinesPost.c.
//


DEFINE_TABLE_ROUTINES();

DEFINE_TEST_AND_BENCHMARKING_ROUTINES();

#ifdef __cplusplus
} // extern C
#endif

