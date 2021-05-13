#ifndef _NCCONFIG_H_
#define _NCCONFIG_H_

#if defined(SPEC_WINDOWS) && !defined(SPEC_NO_NCCONFIG_WINDOWS)
# include "ncconfig_windows.h"

#elif !defined(SPEC_NO_NCCONFIG_GENERIC)
# include "ncconfig_generic.h"

#endif
#endif /* !_NCCONFIG_H_ */
