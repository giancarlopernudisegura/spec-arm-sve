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
#include "xalanc/PlatformSupport/XalanTranscodingServices.hpp"



#include <cassert>



#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/util/TransService.hpp>



#include "xalanc/PlatformSupport/DOMStringHelper.hpp"
#include "xalanc/PlatformSupport/XalanMessageLoader.hpp"
#include "xalanc/PlatformSupport/XalanToXercesTranscoderWrapper.hpp"
#include "xalanc/PlatformSupport/XalanUTF16Transcoder.hpp"



XALAN_CPP_NAMESPACE_BEGIN



const XalanDOMChar  XalanTranscodingServices::s_utf8String[] =
{
    XalanUnicode::charLetter_U,
    XalanUnicode::charLetter_T,
    XalanUnicode::charLetter_F,
    XalanUnicode::charHyphenMinus,
    XalanUnicode::charDigit_8,
    0
};



const XalanDOMChar  XalanTranscodingServices::s_utf16String[] =
{
    XalanUnicode::charLetter_U,
    XalanUnicode::charLetter_T,
    XalanUnicode::charLetter_F, 
    XalanUnicode::charHyphenMinus,
    XalanUnicode::charDigit_1,
    XalanUnicode::charDigit_6,
    0
};



const XalanDOMChar  XalanTranscodingServices::s_utf16LEString[] =
{
    XalanUnicode::charLetter_U,
    XalanUnicode::charLetter_T,
    XalanUnicode::charLetter_F, 
    XalanUnicode::charHyphenMinus,
    XalanUnicode::charDigit_1,
    XalanUnicode::charDigit_6,
    XalanUnicode::charLetter_L,
    XalanUnicode::charLetter_E, 
    0
};



const XalanDOMChar  XalanTranscodingServices::s_utf16BEString[] =
{
    XalanUnicode::charLetter_U,
    XalanUnicode::charLetter_T,
    XalanUnicode::charLetter_F, 
    XalanUnicode::charHyphenMinus,
    XalanUnicode::charDigit_1,
    XalanUnicode::charDigit_6,
    XalanUnicode::charLetter_B,
    XalanUnicode::charLetter_E, 
    0
};



const XalanDOMChar  XalanTranscodingServices::s_utf32String[] =
{
    XalanUnicode::charLetter_U,
    XalanUnicode::charLetter_T,
    XalanUnicode::charLetter_F, 
    XalanUnicode::charHyphenMinus,
    XalanUnicode::charDigit_3,
    XalanUnicode::charDigit_2,
    0
};



const XalanDOMChar  XalanTranscodingServices::s_asciiString[] =
{
    XalanUnicode::charLetter_A,
    XalanUnicode::charLetter_S,
    XalanUnicode::charLetter_C, 
    XalanUnicode::charLetter_I,
    XalanUnicode::charLetter_I,
    0
};



const XalanDOMChar  XalanTranscodingServices::s_usASCIIString[] =
{
    XalanUnicode::charLetter_U,
    XalanUnicode::charLetter_S,
    XalanUnicode::charHyphenMinus,
    XalanUnicode::charLetter_A,
    XalanUnicode::charLetter_S,
    XalanUnicode::charLetter_C, 
    XalanUnicode::charLetter_I,
    XalanUnicode::charLetter_I,
    0
};



const XalanDOMChar  XalanTranscodingServices::s_windows1250String[] =
{
    XalanUnicode::charLetter_W,
    XalanUnicode::charLetter_I,
    XalanUnicode::charLetter_N,
    XalanUnicode::charLetter_D,
    XalanUnicode::charLetter_O, 
    XalanUnicode::charLetter_W,
    XalanUnicode::charLetter_S,
    XalanUnicode::charHyphenMinus,
    XalanUnicode::charDigit_1,
    XalanUnicode::charDigit_2,
    XalanUnicode::charDigit_5,
    XalanUnicode::charDigit_0,
    0
};



const XalanDOMChar  XalanTranscodingServices::s_iso88591String[] =
{
    XalanUnicode::charLetter_I,
    XalanUnicode::charLetter_S,
    XalanUnicode::charLetter_O,
    XalanUnicode::charHyphenMinus,
    XalanUnicode::charDigit_8,
    XalanUnicode::charDigit_8,
    XalanUnicode::charDigit_5,
    XalanUnicode::charDigit_9,
    XalanUnicode::charHyphenMinus,
    XalanUnicode::charDigit_1,
    0
};



const XalanDOMChar  XalanTranscodingServices::s_shiftJISString[] =
{
    XalanUnicode::charLetter_S,
    XalanUnicode::charLetter_H,
    XalanUnicode::charLetter_I,
    XalanUnicode::charLetter_F,
    XalanUnicode::charLetter_T,
    XalanUnicode::charLowLine,
    XalanUnicode::charLetter_J,
    XalanUnicode::charLetter_I,
    XalanUnicode::charLetter_S,
    0
};



const XalanTranscodingServices::XalanXMLByte    XalanTranscodingServices::s_dummyByteOrderMark[] =
{
    XalanTranscodingServices::XalanXMLByte(0)
};



const XalanTranscodingServices::XalanXMLByte    XalanTranscodingServices::s_UTF8ByteOrderMark[] =
{
    XalanTranscodingServices::XalanXMLByte(0xEF),
    XalanTranscodingServices::XalanXMLByte(0xBB),
    XalanTranscodingServices::XalanXMLByte(0xBF),
    XalanTranscodingServices::XalanXMLByte(0)
};



const XalanDOMChar  XalanTranscodingServices::s_UTF16ByteOrderMark[] =
{
    XalanDOMChar(0xFEFF),
    XalanDOMChar(0)
};




XALAN_USING_XERCES(XMLTransService)


static XalanTranscodingServices::eCode
translateCode(XMLTransService::Codes    theCode)
{
    if (theCode == XMLTransService::Ok)
    {
        return XalanTranscodingServices::OK;
    }
    else if (theCode == XMLTransService::UnsupportedEncoding)
    {
        return XalanTranscodingServices::UnsupportedEncoding;
    }
    else if (theCode == XMLTransService::InternalFailure)
    {
        return XalanTranscodingServices::InternalFailure;
    }
    else
    {
        assert(theCode == XMLTransService::SupportFilesNotFound);

        return XalanTranscodingServices::SupportFilesNotFound;
    }
}



XalanOutputTranscoder*
XalanTranscodingServices::makeNewTranscoder(
            MemoryManagerType&      theManager,
            const XalanDOMString&   theEncodingName,
            eCode&                  theResult,
            size_type               theBlockSize)
{
    XALAN_USING_XERCES(XMLPlatformUtils)

    assert(XMLPlatformUtils::fgTransService != 0);

    XalanOutputTranscoder*  theTranscoder = 0;

    XMLTransService::Codes  theCode = XMLTransService::Ok;

    if (encodingIsUTF16(theEncodingName) == true)
    {
        theResult = OK;

        theTranscoder = XalanUTF16Transcoder::create(theManager);
    }
    else
    {
        XALAN_USING_XERCES(XMLTranscoder)

        XMLTranscoder*  theXercesTranscoder = 
            XMLPlatformUtils::fgTransService->makeNewTranscoderFor(
                    c_wstr(theEncodingName),
                    theCode,

#if _XERCES_VERSION >= 2030
                    theBlockSize,
                    &theManager);
#else
                    theBlockSize);
#endif

        theResult = translateCode(theCode);
        assert(theResult == XalanTranscodingServices::OK ||
               theXercesTranscoder == 0);

        if (theResult == XalanTranscodingServices::OK)
        {
            theTranscoder = XalanToXercesTranscoderWrapper::create(theManager, *theXercesTranscoder);
        }
    }

    return theTranscoder;
}



void
XalanTranscodingServices::destroyTranscoder(XalanOutputTranscoder*  theTranscoder)
{
    if( theTranscoder!= 0)
    {

        MemoryManagerType& theManager = theTranscoder->getMemoryManager();

        theTranscoder->~XalanOutputTranscoder();

        theManager.deallocate((void*)theTranscoder);
    }
   
}



bool
XalanTranscodingServices::encodingIsUTF8(const XalanDOMChar*    theEncodingName)
{
    return compareIgnoreCaseASCII(c_wstr(theEncodingName), s_utf8String) == 0 ? true : false;
}



bool
XalanTranscodingServices::encodingIsUTF8(const XalanDOMString&  theEncodingName)
{
    return encodingIsUTF8(c_wstr(theEncodingName));
}



bool
XalanTranscodingServices::encodingIsUTF16(const XalanDOMChar*   theEncodingName)
{
    return compareIgnoreCaseASCII(c_wstr(theEncodingName), s_utf16String) == 0 ||
           compareIgnoreCaseASCII(c_wstr(theEncodingName), s_utf16LEString) == 0 ||
           compareIgnoreCaseASCII(c_wstr(theEncodingName), s_utf16BEString) == 0 ? true : false;
}



bool
XalanTranscodingServices::encodingIsUTF16(const XalanDOMString&     theEncodingName)
{
    return encodingIsUTF16(c_wstr(theEncodingName));
}



bool
XalanTranscodingServices::encodingIsUTF32(const XalanDOMChar*   theEncodingName)
{
    return compareIgnoreCaseASCII(c_wstr(theEncodingName), s_utf32String) == 0 ? true : false;
}


bool
XalanTranscodingServices::encodingIsUTF32(const XalanDOMString&     theEncodingName)
{
    return encodingIsUTF32(c_wstr(theEncodingName));
}



const XalanTranscodingServices::XalanXMLByte*
XalanTranscodingServices::getStreamProlog(const XalanDOMString&     theEncodingName)
{
    if (compareIgnoreCaseASCII(c_wstr(theEncodingName), s_utf16String) == 0)
    {
#if defined(XALAN_OLD_STYLE_CASTS)
        return (const XalanXMLByte*)s_UTF16ByteOrderMark;
#else
        return reinterpret_cast<const XalanXMLByte*>(s_UTF16ByteOrderMark);
#endif
    }
#if 0
    // We won't do this for now...
    else if (compareIgnoreCaseASCII(c_wstr(theEncodingName), s_utf8String) == 0)
    {
        return s_UTF8ByteOrderMark;
    }
#endif
    else
    {
        return s_dummyByteOrderMark;
    }
}



XalanDOMChar
XalanTranscodingServices::getMaximumCharacterValue(const XalanDOMString&    theEncoding)
{
    if (compareIgnoreCaseASCII(c_wstr(theEncoding), s_utf8String) == 0 ||
        compareIgnoreCaseASCII(c_wstr(theEncoding), s_utf16String) == 0)
    {
        return XalanDOMChar(0xFFFFu);
    }
    else if (compareIgnoreCaseASCII(c_wstr(theEncoding), s_iso88591String) == 0)
    {
        return XalanDOMChar(0x00FFu);
    }
    else if (compareIgnoreCaseASCII(c_wstr(theEncoding), s_utf16LEString) == 0 ||
        compareIgnoreCaseASCII(c_wstr(theEncoding), s_utf16BEString) == 0 ||
        compareIgnoreCaseASCII(c_wstr(theEncoding), s_utf32String) == 0 ||
        compareIgnoreCaseASCII(c_wstr(theEncoding), s_shiftJISString) == 0)
    {
        return XalanDOMChar(0xFFFFu);
    }
    else
    {
        return XalanDOMChar(0x007fu);
    }
}



XalanDOMChar
XalanTranscodingServices::getMaximumCharacterValue()
{
    // $$$ ToDo: We need to set this according to the local
    // code page, but how?  Perhaps try to transcode various
    // strings with increasingly larger character values, using
    // DOMStringHelper's TranscodeToLocalCodePage()?  Not exactly
    // what we need, but it may do.
    return XalanDOMChar(0x7fu);
}



bool
XalanTranscodingServices::getBytesEqualChars(const XalanDOMString&  theEncoding)
{
    return equals(theEncoding, s_asciiString) ||
           equals(theEncoding, s_usASCIIString) ||
           equals(theEncoding, s_windows1250String);
}


const XalanDOMChar  XalanTranscodingServices::UnrepresentableCharacterException::m_type[] = 
{   
    XalanUnicode::charLetter_U,
    XalanUnicode::charLetter_n,
    XalanUnicode::charLetter_p,
    XalanUnicode::charLetter_r,
    XalanUnicode::charLetter_e,
    XalanUnicode::charLetter_e,
    XalanUnicode::charLetter_n,
    XalanUnicode::charLetter_t,
    XalanUnicode::charLetter_a,
    XalanUnicode::charLetter_b,
    XalanUnicode::charLetter_l,
    XalanUnicode::charLetter_e,
    XalanUnicode::charLetter_C,
    XalanUnicode::charLetter_h,
    XalanUnicode::charLetter_a,
    XalanUnicode::charLetter_r,
    XalanUnicode::charLetter_a,
    XalanUnicode::charLetter_c,
    XalanUnicode::charLetter_t,
    XalanUnicode::charLetter_e,
    XalanUnicode::charLetter_r,
    XalanUnicode::charLetter_E,
    XalanUnicode::charLetter_x,
    XalanUnicode::charLetter_c,
    XalanUnicode::charLetter_e,
    XalanUnicode::charLetter_p,
    XalanUnicode::charLetter_t,
    XalanUnicode::charLetter_i,
    XalanUnicode::charLetter_o,
    XalanUnicode::charLetter_n,
    0
};



XalanTranscodingServices::UnrepresentableCharacterException::UnrepresentableCharacterException(
            UnicodeCharType         theCharacter,
            const XalanDOMString&   theEncoding,
            XalanDOMString&         theBuffer) :
    XSLException(
        XalanMessageLoader::getMessage(
            theBuffer,
            XalanMessages::UnrepresentableCharacter_2Param,
            UnsignedLongToHexDOMString(
                theCharacter,
                theBuffer),
            theEncoding),
        theBuffer.getMemoryManager()),
    m_badCharacter(theCharacter),
    m_encoding(theEncoding, theBuffer.getMemoryManager())
{
}



XalanTranscodingServices::UnrepresentableCharacterException::~UnrepresentableCharacterException()
{
}



XalanOutputTranscoder::XalanOutputTranscoder(MemoryManagerType& theManager) :
m_memoryManager(theManager)
{
}



XalanOutputTranscoder::~XalanOutputTranscoder()
{
}



void
XalanTranscodingServices::initialize(MemoryManagerType&    /*  theManager */)
{
}



void
XalanTranscodingServices::terminate()
{
}



XALAN_CPP_NAMESPACE_END
