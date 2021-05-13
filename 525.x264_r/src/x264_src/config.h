//#define HAVE_MALLOC_H
#define ARCH_X86_64
#define SYS_LINUX

#if defined(SPEC_PTHREADS)
#define HAVE_PTHREAD
#endif

#if !defined(SPEC_NO_LOG2F)
#define HAVE_LOG2F
//#define fseek fseeko
//#define ftell ftello
#endif

#define X264_VERSION ""
#define X264_POINTVER "0.96.x"
