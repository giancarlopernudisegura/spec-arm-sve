#include "spec_backtrace.h"

#if defined(SPEC_LINUX)

#include <stdio.h>
#include <stdlib.h>
#include <execinfo.h>

void print_trace (void)
{
    void* array[10];
    size_t size;
    char** strings;
    size_t i;

    size = backtrace (array, 10);
    strings = backtrace_symbols (array, size);

    fprintf (stderr, "Stack depth observed: %zd\n", size);

    for (i = 0; i < size; i++)
        fprintf (stderr, "%s\n", strings[i]);

    free (strings);
}

#else

void print_trace (void)
{

}

#endif
