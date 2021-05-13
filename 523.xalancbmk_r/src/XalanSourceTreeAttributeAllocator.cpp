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

// Class header file.
#include "xalanc/XalanSourceTree/XalanSourceTreeAttributeAllocator.hpp"



XALAN_CPP_NAMESPACE_BEGIN



XalanSourceTreeAttributeAllocator::XalanSourceTreeAttributeAllocator(MemoryManagerType&  theManager, size_type	theBlockCount) :
	m_allocator(theManager, theBlockCount)
{
}



XalanSourceTreeAttributeAllocator::~XalanSourceTreeAttributeAllocator()
{
}



XalanSourceTreeAttributeAllocator::ObjectType*
XalanSourceTreeAttributeAllocator::create(
			const XalanDOMString&		theName,
			const XalanDOMString&		theValue,
			XalanSourceTreeElement*		theOwnerElement,
			IndexType					theIndex)
{
	ObjectType* const	theBlock = m_allocator.allocateBlock();
	assert(theBlock != 0);

	new(theBlock) ObjectType(
						theName,
						theValue,
						theOwnerElement,
						theIndex);

	m_allocator.commitAllocation(theBlock);

	return theBlock;
}



void 
XalanSourceTreeAttributeAllocator::reset()
{
	m_allocator.reset();
}



XALAN_CPP_NAMESPACE_END
