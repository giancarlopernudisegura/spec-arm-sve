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
#include "xalanc/XPath/XTokenStringAdapter.hpp"



#include "xalanc/XPath/XToken.hpp"



XALAN_CPP_NAMESPACE_BEGIN



XTokenStringAdapter::XTokenStringAdapter(const XToken&	    theToken,
                                         MemoryManagerType& theManager) :
	XStringBase(theManager),
	m_value(theToken)
{
}



XTokenStringAdapter::XTokenStringAdapter(const XTokenStringAdapter&		source,
                                         MemoryManagerType&             theManager) :
	XStringBase(source, theManager),
	m_value(source.m_value)
{
}



XTokenStringAdapter::~XTokenStringAdapter()
{
}



double
XTokenStringAdapter::num() const
{
	return m_value.num();
}



const XalanDOMString&
XTokenStringAdapter::str() const
{
	return m_value.str();
}



void
XTokenStringAdapter::str(
			FormatterListener&	formatterListener,
			MemberFunctionPtr	function) const
{
	m_value.str( formatterListener, function);
}



void
XTokenStringAdapter::str(XalanDOMString&	theBuffer) const
{
	m_value.str(theBuffer);
}



double
XTokenStringAdapter::stringLength() const
{
	return m_value.stringLength();
}



XTokenStringAdapter::eObjectType
XTokenStringAdapter::getRealType() const
{
	return eTypeXTokenStringAdapter;
}



XALAN_CPP_NAMESPACE_END
