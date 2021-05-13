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

#include "xalanc/XalanSourceTree/XalanSourceTreeInit.hpp"



#include "xalanc/XalanSourceTree/XalanSourceTreeComment.hpp"
#include "xalanc/XalanSourceTree/XalanSourceTreeDocument.hpp"
#include "xalanc/XalanSourceTree/XalanSourceTreeText.hpp"



XALAN_CPP_NAMESPACE_BEGIN



unsigned long	XalanSourceTreeInit::s_initCounter = 0;



XalanSourceTreeInit::XalanSourceTreeInit(MemoryManagerType& theManager) :
	m_platformSupportInit(theManager),
	m_domSupportInit(theManager),
	m_xmlSupportInit(theManager)
{
	++s_initCounter;

	if (s_initCounter == 1)
	{
		initialize(theManager);
    }
}



XalanSourceTreeInit::~XalanSourceTreeInit()
{
	--s_initCounter;

	if (s_initCounter == 0)
	{
		terminate();
	}
}



void
XalanSourceTreeInit::initialize(MemoryManagerType& theManager)
{
	XalanSourceTreeDocument::initialize(theManager);

	XalanSourceTreeComment::initialize(theManager);

	XalanSourceTreeText::initialize(theManager);
}



void
XalanSourceTreeInit::terminate()
{
	XalanSourceTreeText::terminate();

	XalanSourceTreeComment::terminate();

	XalanSourceTreeDocument::terminate();
}



XALAN_CPP_NAMESPACE_END
