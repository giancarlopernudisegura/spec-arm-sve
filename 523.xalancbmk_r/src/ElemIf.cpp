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
#include "xalanc/XSLT/ElemIf.hpp"



#include <xercesc/sax/AttributeList.hpp>



#include <xalanc/PlatformSupport/DOMStringHelper.hpp>
#include <xalanc/PlatformSupport/XalanMessageLoader.hpp>



#include <xalanc/XPath/XObjectFactory.hpp>
#include <xalanc/XPath/XPath.hpp>



#include "xalanc/XSLT/Constants.hpp"
#include "xalanc/XSLT/SelectionEvent.hpp"
#include "xalanc/XSLT/Stylesheet.hpp"
#include "xalanc/XSLT/StylesheetConstructionContext.hpp"
#include "xalanc/XSLT/StylesheetExecutionContext.hpp"
#include "xalanc/XSLT/StylesheetRoot.hpp"



XALAN_CPP_NAMESPACE_BEGIN



ElemIf::ElemIf(
            StylesheetConstructionContext&  constructionContext,
            Stylesheet&                     stylesheetTree,
            const AttributeListType&        atts,
            int                             lineNumber,
            int                             columnNumber) :
    ElemTemplateElement(constructionContext,
                        stylesheetTree,
                        lineNumber,
                        columnNumber,
                        StylesheetConstructionContext::ELEMNAME_IF),
    m_test(0)
{
    const unsigned int  nAttrs = atts.getLength();

    for(unsigned int i = 0; i < nAttrs; i++)
    {
        const XalanDOMChar* const   aname = atts.getName(i);

        if (equals(aname, Constants::ATTRNAME_TEST))
        {
            m_test = constructionContext.createXPath(getLocator(), atts.getValue(i), *this);
        }
        else if(isAttrOK(
                    aname,
                    atts,
                    i,
                    constructionContext) == false &&
                processSpaceAttr(
                    Constants::ELEMNAME_IF_WITH_PREFIX_STRING.c_str(),
                    aname,
                    atts,
                    i,
                    constructionContext) == false)
        {
            error(
                constructionContext,
                XalanMessages::ElementHasIllegalAttribute_2Param,
                Constants::ELEMNAME_IF_WITH_PREFIX_STRING.c_str(),
                aname);
        }
    }

    if(0 == m_test)
    {
        error(
            constructionContext,
            XalanMessages::ElementMustHaveAttribute_2Param,
            Constants::ELEMNAME_IF_WITH_PREFIX_STRING,
            Constants::ATTRNAME_TEST);
    }
}



const XalanDOMString&
ElemIf::getElementName() const
{
    return Constants::ELEMNAME_IF_WITH_PREFIX_STRING;
}


#if !defined(XALAN_RECURSIVE_STYLESHEET_EXECUTION)
const ElemTemplateElement*
ElemIf::startElement(StylesheetExecutionContext&        executionContext) const
{
    assert(m_test != 0);

    ElemTemplateElement::startElement(executionContext);

    bool    fResult;

    m_test->execute(*this, executionContext, fResult);

    if(0 != executionContext.getTraceListeners())
    {
        executionContext.fireSelectEvent(
            SelectionEvent(executionContext,
            executionContext.getCurrentNode(),
            *this,
            XalanDOMString("test", executionContext.getMemoryManager()),
            *m_test,
            fResult));
    }

    if(fResult == true)
    {
        executionContext.pushExecuteIf(true);
        return beginExecuteChildren(executionContext);
    }

    executionContext.pushExecuteIf(false);
    return 0;
}



void
ElemIf::endElement(StylesheetExecutionContext&  executionContext) const
{
    if(executionContext.popExecuteIf())
    {
        endExecuteChildren(executionContext);
    }
}
#endif



#if defined(XALAN_RECURSIVE_STYLESHEET_EXECUTION)
void
ElemIf::execute(StylesheetExecutionContext&     executionContext) const
{
    assert(m_test != 0);

    ElemTemplateElement::execute(executionContext);

    bool    fResult;

    m_test->execute(*this, executionContext, fResult);

    if(0 != executionContext.getTraceListeners())
    {
        executionContext.fireSelectEvent(
            SelectionEvent(executionContext,
            executionContext.getCurrentNode(),
            *this,
            XalanDOMString("test", executionContext.getMemoryManager()),
            *m_test,
            fResult));
    }

    if(fResult == true)
    {
        executeChildren(executionContext);
    }
}
#endif



const XPath*
ElemIf::getXPath(unsigned int   index) const
{
    return index == 0 ? m_test : 0;
}



XALAN_CPP_NAMESPACE_END
