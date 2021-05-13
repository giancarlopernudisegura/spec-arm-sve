/*
 * Copyright 2002,2004 The Apache Software Foundation.
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
 * $Id: DOMLocatorImpl.cpp 191054 2005-06-17 02:56:35Z jberry $
 */

#include "xercesc/dom/impl/DOMLocatorImpl.hpp"

XERCES_CPP_NAMESPACE_BEGIN


// ---------------------------------------------------------------------------
//  DOMLocatorImpl: Constructors and Destructor
// ---------------------------------------------------------------------------
DOMLocatorImpl::DOMLocatorImpl() :
fLineNum(-1)
, fColumnNum(-1)
, fOffset(-1)
, fErrorNode(0)
, fURI(0)
{
}


DOMLocatorImpl::DOMLocatorImpl(const XMLSSize_t lineNum,
                               const XMLSSize_t columnNum,
                               DOMNode* const errorNode,
                               const XMLCh* const uri,
                               const XMLSSize_t offset) :
fLineNum(lineNum)
, fColumnNum(columnNum)
, fOffset(offset)
, fErrorNode(errorNode)
, fURI(uri)
{
}

DOMLocatorImpl::~DOMLocatorImpl()
{
}

XERCES_CPP_NAMESPACE_END

