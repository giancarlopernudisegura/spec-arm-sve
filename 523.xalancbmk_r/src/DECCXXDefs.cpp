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
 * $Id: DECCXXDefs.cpp 176026 2004-09-08 13:57:07Z peiyongz $
 */

// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#if defined(__alpha) && defined(__osf__) && defined(__DECCXX)

#include <xercesc/util/Compilers/DECCXXDefs.hpp>
#include <strings.h>


int stricmp(const char* const str1, const char* const  str2) 
{
  return strcasecmp(str1, str2);
}

int strnicmp(const char* const str1, const char* const  str2,
	     const unsigned int count)
{
  if (count == 0)
    return 0;

  return strncasecmp( str1, str2, (size_t)count);
}

#endif /* defined(__alpha) && defined(__osf__) && defined(__DECCXX) */
