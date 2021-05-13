#if defined(SPEC)

#if defined(_WIN32) || defined (WIN32)
#include  "GHOST_SystemPathsWin32.cpp"

#else
#include "GHOST_SystemPathsX11.cpp"
#endif

#endif /* SPEC */
