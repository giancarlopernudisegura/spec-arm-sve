#if defined(SPEC)
#if !defined(SPEC_PTHREAD_H)
#define SPEC_PTHREAD_H
#include <stdint.h>

typedef uint32_t spec_null_mutex_t;
typedef uint32_t spec_null_cond_t;
typedef uint32_t spec_null_thread_t;
typedef uint32_t spec_null_spinlock_t;
typedef uint32_t spec_null_rwlock_t;

#if defined(_WIN32)
#if _MSC_VER < 1900
struct timespec
{
       long tv_sec;
       long tv_nsec;
};
#else
# include <time.h>
#endif
#endif
#endif
#endif
