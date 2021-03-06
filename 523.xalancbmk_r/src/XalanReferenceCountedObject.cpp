/*
 * Copyright 1999-2004 The Apache Software Foundation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Class heaer file...
#include "xalanc/PlatformSupport/XalanReferenceCountedObject.hpp"



#include <cassert>

#if !defined(NDEBUG)
#include <climits>
#endif



XALAN_CPP_NAMESPACE_BEGIN



XalanReferenceCountedObject::XalanReferenceCountedObject() :
	m_referenceCount(0)
{
}



XalanReferenceCountedObject::~XalanReferenceCountedObject()
{
	assert(m_referenceCount == 0);
}	



void
XalanReferenceCountedObject::addReference(XalanReferenceCountedObject*		theInstance)
{
	if (theInstance != 0)
	{
		assert(theInstance->m_referenceCount < UINT_MAX);

		if (++theInstance->m_referenceCount == 1)
		{
			theInstance->referenced();
		}
	}
}



void
XalanReferenceCountedObject::removeReference(XalanReferenceCountedObject*	theInstance)
{
	if (theInstance != 0)
	{
		assert(theInstance->m_referenceCount > 0);

		if (--theInstance->m_referenceCount == 0)
		{
			theInstance->dereferenced();
		}
	}
}



XALAN_CPP_NAMESPACE_END
