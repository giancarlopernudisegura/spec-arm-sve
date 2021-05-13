/* LP64 datamodel */
#if defined(SPEC_LP64) 

//source says this is 64 GB for 64bit... see rna_userdef.c
#define SPEC_MEMCACHELIMIT 1024 * 32
#define PTRSIZE 8

/*P64 data model*/
#elif defined(SPEC_P64)
//source says this is 64 GB for 64bit... see rna_userdef.c
#define SPEC_MEMCACHELIMIT 1024 * 32
#define PTRSIZE 8

#else
/* 32bit datamodel is the default */
# if !defined(SPEC_ILP32)
#  define SPEC_ILP32
# endif

//source says this is 2 GB for 32bit... see rna_userdef.c
# define SPEC_MEMCACHELIMIT 1024
# define PTRSIZE 4
#endif

#if defined(SPEC) && ! defined(SPEC_ENUM_SENTINEL)
#   ifdef SPEC_USE_SHIFT_FOR_SENTINEL
#      define SPEC_ENUM_SENTINEL (1 << 31)
#   else
#      define SPEC_ENUM_SENTINEL (signed int)0x80000000
#   endif
#endif


