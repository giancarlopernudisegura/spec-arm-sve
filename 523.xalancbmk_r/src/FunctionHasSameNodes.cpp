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
#include "xalanc/XalanExtensions/FunctionHasSameNodes.hpp"



#include <xalanc/PlatformSupport/XalanMessageLoader.hpp>



#include <xalanc/XPath/XPathExecutionContext.hpp>
#include <xalanc/XPath/XObjectFactory.hpp>



XALAN_CPP_NAMESPACE_BEGIN



FunctionHasSameNodes::FunctionHasSameNodes()
{
}



FunctionHasSameNodes::~FunctionHasSameNodes()
{
}



XObjectPtr
FunctionHasSameNodes::execute(
            XPathExecutionContext&          executionContext,
            XalanNode*                      context,
            const XObjectArgVectorType&     args,
            const LocatorType*              locator) const
{
    if (args.size() != 2)
    {
        XPathExecutionContext::GetAndReleaseCachedString    theGuard(executionContext);

        executionContext.error(getError(theGuard.get()), context, locator);
    }

    assert(args[0].null() == false && args[1].null() == false);

    const NodeRefListBase&  nodeset1 = args[0]->nodeset();
    const NodeRefListBase&  nodeset2 = args[1]->nodeset();

    const NodeRefListBase::size_type    theLength = nodeset1.getLength();

    bool    fResult = true;

    if (theLength != nodeset2.getLength())
    {
        fResult = false;
    }
    else
    {
        for (NodeRefListBase::size_type i = 0; i < theLength && fResult == true; ++i)
        {
            XalanNode* const    theNode = nodeset1.item(i);
            assert(theNode != 0);

            if (nodeset2.indexOf(theNode) == NodeRefListBase::npos)
            {
                fResult = false;
            }
        }
    }

    return executionContext.getXObjectFactory().createBoolean(fResult);
}



#if defined(XALAN_NO_COVARIANT_RETURN_TYPE)
Function*
#else
FunctionHasSameNodes*
#endif
FunctionHasSameNodes::clone(MemoryManagerType&  theManager) const
{
    return XalanCopyConstruct(theManager, *this);
}



const XalanDOMString&
FunctionHasSameNodes::getError(XalanDOMString&  theResult) const
{
    return XalanMessageLoader::getMessage(
                theResult,
                XalanMessages::FunctionAcceptsTwoArguments_1Param,
                "has-same-nodes");

}



XALAN_CPP_NAMESPACE_END
