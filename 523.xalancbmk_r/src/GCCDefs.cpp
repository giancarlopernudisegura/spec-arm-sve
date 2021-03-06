
/*
 * Copyright 1999-2000,2004 The Apache Software Foundation.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id: GCCDefs.cpp 191054 2005-06-17 02:56:35Z jberry $
 */

// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#if defined(SPEC_LINUX) || defined(SPEC_MACOSX_GCC) ||defined(SPEC_AIX_GCC)
#include <xercesc/util/Compilers/GCCDefs.hpp>
#include <strings.h>
#if defined(SPEC)
#include <cstring>
#else
#include <string.h>
#endif


#if !defined(__CYGWIN__) && !defined(__MINGW32__)

int stricmp(const char* const str1, const char* const  str2) 
{
	return strcasecmp(str1, str2);
}

int strnicmp(const char* const str1, const char* const  str2, const unsigned int count)
{
	if (count == 0)
		return 0;

	return strncasecmp( str1, str2, (size_t)count);
}

#endif // ! __CYGWIN__
#endif //defined(SPEC_LINUX) || defined(SPEC_MACOSX_GCC) || defined(SPEC_AIX_GCC)
