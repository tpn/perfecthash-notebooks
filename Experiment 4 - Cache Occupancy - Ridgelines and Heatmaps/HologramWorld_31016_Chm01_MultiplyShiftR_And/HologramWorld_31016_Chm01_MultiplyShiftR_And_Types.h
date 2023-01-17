//
// Compiled Perfect Hash Table C Header Types File.  Auto-generated.
//

#pragma once


//
// Begin CompiledPerfectHashTableTypesPre.h.
//


#ifndef BASETYPES

//
// Define basic NT types.
//

typedef int BOOL;
typedef char BOOLEAN;
typedef char CHAR;
typedef short WCHAR;
typedef unsigned char BYTE;
typedef BYTE *PBYTE;
typedef short SHORT;
typedef short *PSHORT;
typedef unsigned short USHORT;
typedef unsigned short *PUSHORT;
typedef long long LONGLONG;
typedef long long *PLONGLONG;
typedef unsigned long long ULONGLONG;
typedef unsigned long long *PULONGLONG;
typedef void *PVOID;

#define VOID void

#ifdef _WIN32
typedef long LONG;
typedef long *PLONG;
typedef unsigned long ULONG;
typedef unsigned long *PULONG;
#elif defined(__linux__) || defined(__APPLE__)
typedef int LONG;
typedef int *PLONG;
typedef unsigned int ULONG;
typedef unsigned int *PULONG;
#endif

#define TRUE 1
#define FALSE 0

#define BASETYPES

//
// Disable the anonymous union/struct warning.
//

#ifdef _WIN32
#pragma warning(push)
#pragma warning(disable: 4201 4094)
#endif

typedef union _LARGE_INTEGER {
    struct {
        ULONG LowPart;
        LONG HighPart;
    };
    LONGLONG QuadPart;
} LARGE_INTEGER;
typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef union _ULARGE_INTEGER {
    struct {
        ULONG LowPart;
        ULONG HighPart;
    };
    ULONGLONG QuadPart;
} ULARGE_INTEGER;
typedef ULARGE_INTEGER *PULARGE_INTEGER;

typedef union ULONG_BYTES {
    struct {
        BYTE Byte1;
        BYTE Byte2;
        BYTE Byte3;
        BYTE Byte4;
    };

    struct {
        CHAR Char1;
        CHAR Char2;
        CHAR Char3;
        CHAR Char4;
    };

    struct {
        SHORT Word1;
        SHORT Word2;
    };

    struct {
        USHORT UWord1;
        USHORT UWord2;
    };

    LONG AsLong;
    ULONG AsULong;
} ULONG_BYTES;
typedef ULONG_BYTES *PULONG_BYTES;

typedef union _ULONG_INTEGER {
    struct {
        USHORT  LowPart;
        USHORT  HighPart;
    };
    ULONG   LongPart;

} ULONG_INTEGER, *PULONG_INTEGER;

typedef union _LONG_INTEGER {
    struct {
        USHORT  LowPart;
        SHORT   HighPart;
    };
    LONG   LongPart;
} LONG_INTEGER, *PLONG_INTEGER;

typedef union _USHORT_INTEGER {
    struct {
        BYTE  LowPart;
        BYTE  HighPart;
    };
    USHORT   ShortPart;
} USHORT_INTEGER, *PUSHORT_INTEGER;

typedef union _SHORT_INTEGER {
    struct {
        CHAR  LowPart;
        CHAR  HighPart;
    };
    SHORT   ShortPart;
} SHORT_INTEGER, *PSHORT_INTEGER;

typedef union _WIDE_CHARACTER {
    struct {
        CHAR  LowPart;
        CHAR  HighPart;
    };
    WCHAR WidePart;
} WIDE_CHARACTER, *PWIDE_CHARACTER;

#ifdef _WIN32
#pragma warning(pop)
#endif

#endif

//
// End CompiledPerfectHashTableTypesPre.h.
//

typedef ULONG CPHKEY;
typedef ULONG CPHDKEY;
typedef ULONG CPHVALUE;
typedef ULONG CPHSEED;
typedef ULONG CPHINDEX;

typedef unsigned int CPHKEY32;
typedef unsigned int CPHDKEY32;
typedef unsigned int CPHVALUE32;
typedef unsigned int CPHINDEX32;
typedef unsigned int CPHSEED32;
typedef unsigned long long CPHKEY64;
typedef unsigned long long CPHDKEY64;
typedef unsigned long long CPHVALUE64;
typedef unsigned long long CPHINDEX64;
typedef unsigned long long CPHSEED64;

//
// Begin CompiledPerfectHashTableTypesPost.h.
//

typedef CPHKEY *PCPHKEY;
typedef CPHDKEY *PCPHDKEY;
typedef CPHVALUE *PCPHVALUE;
typedef CPHINDEX *PCPHINDEX;

//
// End CompiledPerfectHashTableTypesPost.h.
//

