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

#include "xalanc/Harness/XalanFileUtility.hpp"



#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <climits>
#include <cstring>

#if defined(XALAN_STRICT_ANSI_HEADERS)
    using std::strlen;
    using std::strcmp;
#endif

using std::feof;
using std::ferror;
using std::fgets;
using std::sprintf;

#if defined(WIN32)
#include <direct.h>
#define PATH_MAX _MAX_PATH
#define chdir _chdir
#define getcwd _getcwd
#define mkdir _mkdir
#else
#if !defined(PATH_MAX)
#define PATH_MAX 2000
#endif
#define DIR_MODE_BITS 509
#include <dirent.h>
#include <unistd.h>

#include <sys/stat.h>
#endif


#if defined(XALAN_CLASSIC_IOSTREAMS)
#include <iostream.h>
#include <strstream.h>
#else
#include <iostream>
#include <strstream>
#endif

#if !defined(NDEBUG) && defined(_MSC_VER)
#include <crtdbg.h>
#endif



#include "xercesc/sax/SAXException.hpp"



#include "xalanc/PlatformSupport/DirectoryEnumerator.hpp"
#include "xalanc/PlatformSupport/DOMStringHelper.hpp"
#include "xalanc/PlatformSupport/XalanOutputStreamPrintWriter.hpp"
#include "xalanc/PlatformSupport/XalanFileOutputStream.hpp"
#include "xalanc/PlatformSupport/XalanUnicode.hpp"



#include "xalanc/XMLSupport/FormatterToXML.hpp"
#include "xalanc/XMLSupport/FormatterTreeWalker.hpp"



#include "xalanc/XalanSourceTree/XalanSourceTreeDOMSupport.hpp"
#include "xalanc/XalanSourceTree/XalanSourceTreeParserLiaison.hpp"
#include "xalanc/XalanSourceTree/XalanSourceTreeDocument.hpp"



#include "xalanc/XSLT/StylesheetRoot.hpp"



#include "xalanc/XalanTransformer/XalanCompiledStylesheet.hpp"
#include "xalanc/XalanTransformer/XalanTransformer.hpp"



#include "xalanc/Harness/XalanXMLFileReporter.hpp"



XALAN_CPP_NAMESPACE_BEGIN




const char* const   xalanNodeTypes[] =
{
    "UNKNOWN_NODE",
    "ELEMENT_NODE",
    "ATTRIBUTE_NODE",
    "TEXT_NODE",
    "CDATA_SECTION_NODE",
    "ENTITY_REFERENCE_NODE",
    "ENTITY_NODE",
    "PROCESSING_INSTRUCTION_NODE",
    "COMMENT_NODE",
    "DOCUMENT_NODE",
    "DOCUMENT_TYPE_NODE",
    "DOCUMENT_FRAGMENT_NODE",
    "NOTATION_NODE"
};



XALAN_USING_STD(cerr)
XALAN_USING_STD(cout)
XALAN_USING_STD(endl)


const XalanDOMString    XalanFileUtility::s_emptyString(XalanMemMgrs::getDummyMemMgr());



XalanFileUtility::reportStruct::reportStruct(MemoryManagerType&     theManager) :
    theDrive(theManager),
    testOrFile(theManager),
    xmlFileURL(theManager),
    xslFileURL(theManager),
    xmlFormat(theManager),
    msg(0),
    currentNode(theManager),
    actual(theManager),
    expected(theManager),
    pass(0),
    fail(0),
    nogold(0)
{
}



void
XalanFileUtility::reportStruct::reset()
{
    clear(testOrFile);
    msg = "";
    clear(currentNode);
    clear(actual);
    clear(expected);
}



XalanFileUtility::cmdParams::cmdParams(MemoryManagerType& theManager) :
    help(),
    base(theManager),
    output(theManager),
    gold(theManager),
    sub(theManager),
    source(0),
    skip(false),
    iters(0)
{
}



const char*
XalanFileUtility::cmdParams::getHelpMessage()
{
    help << '\0';

    const char* const   data = help.str();

#if defined(HPUX)
   help.rdbuf() -> freeze(false);
#else
    help.freeze(false);
#endif

    return data;
}



XalanFileUtility::XalanFileUtility(MemoryManagerType&   theManager) :
    data(theManager),
    args(theManager),
    m_memoryManager(theManager)
{
    cout << endl
         << "Using Xalan version "
         << XALAN_FULLVERSIONDOT
         << endl
         << "Using Xerces version "
         << XERCES_FULLVERSIONDOT
         << endl
         << endl;
}



XalanFileUtility::~XalanFileUtility()
{
}



#if !defined(WIN32)
XalanDOMString&
XalanFileUtility::getDrive(XalanDOMString&  theResult)
{
    theResult.erase();

    return theResult;
}
#else
XalanDOMString&
XalanFileUtility::getDrive(XalanDOMString&  theResult)
{
    const char temp[] =
    {
        char(_getdrive() + 'A' - 1),
        ':',
        '\0'
    };
    theResult.assign(temp, sizeof(temp) - 1);

    return theResult;
}
#endif


bool
XalanFileUtility::getParams(
            int             argc,
            char*           argv[],
            const char*     outDir,
            bool            fsetGold)
{
    bool fSuccess = true;   // Used to continue argument loop
    bool fsetOut = true;    // Set default output directory, set to false if data is provided

    args.skip = true;       // Default values for performance testing parameters.
    args.iters = 3;         

    // Insure that required "-base" argument is there.
    //
    if (argc == 1 || argv[1][0] == '-')
    {
        cout << args.getHelpMessage();  
        return false;
    }
    else
    {
        if (checkDir(XalanDOMString(argv[1], m_memoryManager)))
        {
            assign(args.base, XalanDOMString(argv[1], m_memoryManager));
        }
        else
        {
            cout << endl << "Given base directory \"" << argv[1] << "\" does not exist" << endl;
            cout << args.getHelpMessage();
            return false;
        }
    }

    // Get the rest of the arguments.
    //
    for (int i = 2; i < argc && fSuccess == true; ++i)
    {
        if(!strcmp("-out", argv[i]))
        {
            ++i;
            if(i < argc && argv[i][0] != '-')
            {
                assign(args.output, XalanDOMString(argv[i], m_memoryManager));
                append(args.output, s_pathSep);
                checkAndCreateDir(args.output);
                fsetOut = false;
            }
            else
            {
                cout << args.getHelpMessage();
                fSuccess = false;
            }
        }
        else if(!strcmp("-gold", argv[i]))
        {
            ++i;
            if(i < argc && argv[i][0] != '-')
            {
                assign(args.gold, XalanDOMString(argv[i], m_memoryManager));

                if ( !checkDir(args.gold) )
                {   
                    CharVectorType     theResult(m_memoryManager);
                    TranscodeToLocalCodePage(args.gold, theResult, true);

                    cout << "Given Gold dir - " << c_str(theResult) << " - does not exist" << endl;
                    fSuccess = false;
                }

                append(args.gold, s_pathSep);
                fsetGold = false;
            }
            else
            {
                cout << args.getHelpMessage();
                fSuccess = false;
            }
        }
        else if(!strcmp("-source", argv[i]))
        {
            ++i;
            if(i < argc && argv[i][0] != '-')
            {
                if (strcmp(argv[i],"XPL") == 0)
                {
                    args.source = 1;
                    outDir = "DOM-XALAN";
                }
                else if (strcmp(argv[i], "DOM") == 0)
                {
                    args.source = 2;
                    outDir = "DOM-XERCES";
                }
                else
                {
                    cout << args.getHelpMessage();
                    fSuccess = false;
                }
            }
            else
            {
                cout << args.getHelpMessage();
                fSuccess = false;
            }
        }
        else if(!strcmp("-sub", argv[i]))
        {
            ++i;
            if(i < argc && argv[i][0] != '-')
            {
                assign(args.sub, XalanDOMString(argv[i], m_memoryManager));
            }
            else
            {
                cout << args.getHelpMessage();
                fSuccess = false;
            }
        }
        else if(!strcmp("-i", argv[i]))
        {
            args.skip = false;
        }
        else if(!strcmp("-iter", argv[i]))
        {
            ++i;
            
            // Make sure number is there and is greater then zero
            if(i < argc && atol(argv[i]) > 0)
            {
                args.iters = atol(argv[i]);
            }
            else
            {
                cout << args.getHelpMessage();
                fSuccess = false;
            }
        }
        else
        {
            cout << args.getHelpMessage();
            fSuccess = false;
        }

    } // End of for-loop

    // Do we need to set the default output directory??
    //
    if (fsetOut)
    { 
        unsigned int ii = lastIndexOf(args.base, s_pathSep[0]);

        if (ii < length(args.base))
        {
            args.output.assign(args.base, 0, ii + 1);
        }

        append(args.output,XalanDOMString(outDir, m_memoryManager));
        checkAndCreateDir(args.output);
        append(args.output,s_pathSep); 

    }
    // Do we need to set the default gold directory??
    //
    if (fsetGold)
    {
        args.gold = args.base;
        append(args.gold,XalanDOMString("-gold", m_memoryManager));
        if ( !checkDir(args.gold) )
        {   
            CharVectorType     theResult(m_memoryManager);
            TranscodeToLocalCodePage(args.gold, theResult, true);
            cout << "Assumed Gold dir - " << c_str(theResult) << " - does not exist" << endl;
            fSuccess = false;
        }
        append(args.gold,s_pathSep);
    }
    
    // Add the path seperator to the end of the base directory 
    // here after we've finished using it for all directory creation.
    //
    append(args.base,s_pathSep);
    
    return fSuccess;
}



//  This routine retrieves test file names from specified directories.
//  Inputs: baseDir:    typically "conf" or "perf"
//          relDir:     sub-directory to search.
//
//  Notes:  It builds the searchSpecification by concatenating all the 
//          necessary components.
//
XalanFileUtility::FileNameVectorType&
XalanFileUtility::getTestFileNames(
            const XalanDOMString&   baseDir,
            const XalanDOMString&   relDir,
            bool                    useDirPrefix,
            FileNameVectorType&     theFiles)
{
    char buffer3[PATH_MAX];
    getcwd(buffer3, PATH_MAX);

    const XalanDOMString    searchSuffix(XALAN_STATIC_UCODE_STRING("*.xsl"), m_memoryManager);
    XalanDOMString  searchSpecification(m_memoryManager);

    // Allow directory search w/o mandating files start with directory name. Required for files
    // garnered from XSLTMARK performance directory exm.
    if (useDirPrefix)
    {
        searchSpecification.assign(baseDir);
        searchSpecification += relDir;
        searchSpecification += s_pathSep;
        searchSpecification += relDir;
        searchSpecification += searchSuffix;
    }
    else
    {
        searchSpecification.assign(baseDir);
        searchSpecification += relDir;
        searchSpecification += s_pathSep;
        searchSpecification += searchSuffix;
    }


    DirectoryEnumeratorFunctor<
        FileNameVectorType,
        XalanDOMString>     theEnumerator(m_memoryManager);

    theEnumerator(searchSpecification, theFiles);

    chdir(buffer3);

    return theFiles;
}

/*  This routine retrieves all sub-directories from the specified directories.
//  Inputs: rootDirectory:  typically "conf" or "perf"
//
//  Notes:  The searchSpecification in this case is just "*". 
//                                                                          */  
XalanFileUtility::FileNameVectorType&
XalanFileUtility::getDirectoryNames(
            const XalanDOMString&                   rootDirectory,
            XalanFileUtility::FileNameVectorType&   theFiles)
{
    char buffer2[PATH_MAX];
    getcwd(buffer2, PATH_MAX);

    const XalanDOMString    dirSpec(XALAN_STATIC_UCODE_STRING("*"), m_memoryManager);

    DirectoryEnumeratorFunctor<
        FileNameVectorType,
        XalanDOMString,
        DirectoryFilterPredicate>   theEnumerator(m_memoryManager);

    theEnumerator(
        XalanDOMString(
            rootDirectory,
            m_memoryManager),
        XalanDOMString(
            dirSpec,
            m_memoryManager), 
        theFiles);
    
    chdir(buffer2);

    return theFiles;
}


bool XalanFileUtility::checkDir(const XalanDOMString&    directory )
{
    char buffer[PATH_MAX];

    getcwd(buffer, PATH_MAX);

    bool    fResult = false;

    CharVectorType     theResult(m_memoryManager);

    TranscodeToLocalCodePage(directory, theResult, true);

    if ( !chdir(c_str(theResult)) )
    {
        fResult = true;
    }

    chdir(buffer);

    return fResult;
}


void XalanFileUtility::checkAndCreateDir(const XalanDOMString&   directory)
{
    char buffer[PATH_MAX];

    getcwd(buffer, PATH_MAX);

    CharVectorType     theResult(m_memoryManager);

    TranscodeToLocalCodePage(directory, theResult, true);

    if ( (chdir(c_str(theResult))))
    {
        //cout << "Couldn't change to " << directory << ", will create it." << endl;
            CharVectorType     theResult1(m_memoryManager);
            TranscodeToLocalCodePage(directory, theResult1, true);
#if defined(WIN32)
        if ( !mkdir(c_str(theResult)))
#else
        if ( !mkdir(c_str(theResult), DIR_MODE_BITS))
#endif
        {
            cout << theResult1 << " created." << endl;
        }
        else
        {
            cout << theResult1 << " NOT created." << endl;
        }
    }

    chdir(buffer);
}

/*  This routine generates file names based on the provide suffix
//  Inputs: theXMLFileName: typically "conf" or "perf"
//          suffix:         typically "xsl" or "out".
//
//  Notes:  
*/  

XalanDOMString&
XalanFileUtility::generateFileName(
            const XalanDOMString&   theXMLFileName,
            const char*             suffix,
            XalanDOMString&         targetFile,
            bool*                   status)
{
    int             thePeriodIndex = -1;
    const int       theLength = length(theXMLFileName);

    for (int i = theLength - 1; i > 0; i--)
    {
        if (charAt(theXMLFileName, i) == XalanUnicode::charFullStop)
        {
            thePeriodIndex = i;        // charFullStop is the dot (x2E)
            break;
        }
    }

    if (thePeriodIndex != -1)
    {
        targetFile.assign(theXMLFileName, 0, thePeriodIndex + 1);

        targetFile += XalanDOMString(suffix, m_memoryManager);
    }

    // Check the .xml file exists.
    if (!strcmp(suffix,"xml"))
    {
        CharVectorType     theResult(m_memoryManager);
        TranscodeToLocalCodePage(targetFile, theResult, true);

        FILE* fileHandle = fopen(c_str(theResult), "r");
        if (fileHandle == 0)
        {
            cout << "TEST ERROR: File Missing: " << targetFile << endl;

            if (status != 0)
            {
                *status = false;
            }
        }
        else
        {
            fclose(fileHandle);
        }
    }

    return targetFile;
}


/*  This routine generates a Unique Runid. 
//  Inputs: None
//          
//  Notes: The format is mmddhhmm. For example
//         03151046 is "Mar 15 10:46"   
*/

XalanDOMString&
XalanFileUtility::generateUniqRunid(XalanDOMString& theResult)
{
#if defined(XALAN_STRICT_ANSI_HEADERS)
    using std::tm;
    using std::time;
    using std::localtime;
    using std::strftime;
#endif

    struct tm *newtime;
    time_t long_time;
    char tmpbuf[10];

    time( &long_time );                /* Get time as long integer. */
    newtime = localtime( &long_time ); /* Convert to local time. */

    strftime( tmpbuf, 10,"%m%d%H%M",newtime );

    theResult.assign(tmpbuf);

    return theResult;
}


//  This routine gets Xerces Version number. It's used to put the Xerces Version
//  into the output xml results file as an attribute of 'PerfData' element.
//  Inputs: None
//              

XalanDOMString&
XalanFileUtility::getXercesVersion(XalanDOMString& theResult)
{
    theResult.assign(gXercesFullVersionStr);

    return theResult;
}

/*  This routine creates a FormatterToXML FormatterListener. This is used to format
//  the output DOM so a comparision can be done with the expected GOLD file. 
//  Inputs: None
//              
*/


FormatterListener* 
XalanFileUtility::getXMLFormatter(
            PrintWriter&            resultWriter,
            int                     indentAmount,
            const XalanDOMString&   mimeEncoding,
            const StylesheetRoot*   stylesheet)
{
    XalanDOMString  version(m_memoryManager);
    bool            outputIndent= 0;
    XalanDOMString  mediatype(m_memoryManager);
    XalanDOMString  doctypeSystem(m_memoryManager);
    XalanDOMString  doctypePublic(m_memoryManager);
    XalanDOMString  standalone(m_memoryManager);

    if (stylesheet != 0)
    {
        XalanDOMString  theBuffer(m_memoryManager);

        version = stylesheet->getOutputVersion(theBuffer);

        mediatype = stylesheet->getOutputMediaType(theBuffer);
        doctypeSystem = stylesheet->getOutputDoctypeSystem(theBuffer);
        doctypePublic = stylesheet->getOutputDoctypePublic(theBuffer);
        standalone = stylesheet->getOutputStandalone(theBuffer);
        outputIndent = stylesheet->getOutputIndent();
    }

    return FormatterToXML::create(
                    resultWriter.getMemoryManager(),
                    resultWriter,
                    version,
                    outputIndent,
                    indentAmount,
                    mimeEncoding,
                    mediatype,
                    doctypeSystem,
                    doctypePublic,
                    true,   // xmlDecl
                    standalone);
}


/*  This routine is used to compares the results of a transform and report the results.
//  When a failure is detected the 'data' structure used to report detailed info about 
//  a failure is filled in.
//  Inputs: 
//      goldFile    - Name of gold file
//      outputFile  - Name of result file.
//      logfile     - Name of log file reporter.
//      
//  Returns: 
//      Void
*/
void
XalanFileUtility::checkResults(
            const XalanDOMString&   outputFile, 
            const XalanDOMString&   goldFile, 
            XalanXMLFileReporter&   logfile)
{
    int ambgFlag = data.nogold; // get the current number of tests w/o gold files.

    // Compare the results, report success if compareSerializedResults returns true.
    if(compareSerializedResults(outputFile, goldFile))
    {
        cout << "Passed: " << data.testOrFile << endl;
        logfile.logCheckPass(data.testOrFile);
        data.pass += 1;
    }
    else
    {
        typedef XalanXMLFileReporter::Hashtable  Hashtable;

        // if the compairson fails gather up the failure data and determine if it failed 
        // due to bad output or missing Gold file. Lastly, log the failure.
        Hashtable   attrs(m_memoryManager);
        Hashtable   actexp(m_memoryManager);

        reportError();

        attrs.insert(XalanDOMString("reason", m_memoryManager), XalanDOMString(data.msg, m_memoryManager));
        attrs.insert(XalanDOMString("atNode", m_memoryManager), data.currentNode);
        actexp.insert(XalanDOMString("exp", m_memoryManager),data.expected);
        actexp.insert(XalanDOMString("act", m_memoryManager), data.actual);

        actexp.insert(XalanDOMString("xsl", m_memoryManager), data.xslFileURL);
        actexp.insert( XalanDOMString("xml", m_memoryManager),  data.xmlFileURL);
        actexp.insert( XalanDOMString("result", m_memoryManager),  outputFile );
        actexp.insert( XalanDOMString("gold", m_memoryManager),  goldFile);

        if (ambgFlag < data.nogold)
        {
            logfile.logCheckAmbiguous(data.testOrFile);
        }
        else
        {
            logfile.logCheckFail(data.testOrFile, attrs, actexp);
        }

    }
}

void
XalanFileUtility::checkAPIResults(
            const XalanDOMString&   actual, 
            const XalanDOMString&   expected, 
            const char*             msg,
            XalanXMLFileReporter&        logfile,
            const XalanDOMString&   outputFile, 
            const XalanDOMString&   goldFile,
            bool                    containsOnly)
{
    if(actual == expected ||
       (containsOnly == true && indexOf(actual, expected) != XalanDOMString::npos))
    {
        data.pass += 1;
        cout << "Passed: " << data.testOrFile << endl;
        logfile.logCheckPass(data.testOrFile);
    }
    else
    {   data.actual = actual;
        data.expected = expected;
        data.currentNode = "API Test";
        data.msg = msg;
        data.fail += 1;

        reportError();

        typedef XalanXMLFileReporter::Hashtable  Hashtable;

        Hashtable   actexp(m_memoryManager);

        actexp.insert( XalanDOMString("exp", m_memoryManager), expected);
        actexp.insert( XalanDOMString("act", m_memoryManager), actual);
        actexp.insert( XalanDOMString("xsl", m_memoryManager), data.xslFileURL);
        actexp.insert( XalanDOMString("xml", m_memoryManager), data.xmlFileURL);
        actexp.insert( XalanDOMString("result", m_memoryManager), outputFile);
        actexp.insert( XalanDOMString("gold", m_memoryManager), goldFile);

        // Todo: Need to determine if I should check for missing gold in these cases.
        logfile.logCheckFail(data.testOrFile, actexp);

    }
}



/*  This routine compares the results of a transform with the gold file.
//  It in turn call the domCompare routine to do the actual comparision. 
//  Inputs: 
//      gold - Dom tree for the expected results
//      doc  - Dom tree created during transformation
//      filename - Current filename
//      
//  Returns: 
//      Void
//      
*/
void
XalanFileUtility::checkDOMResults(
            const XalanDOMString&           theOutputFile, 
            const XalanCompiledStylesheet*  compiledSS, 
            const XalanSourceTreeDocument*  dom,
            const XSLTInputSource&          goldInputSource,
            XalanXMLFileReporter&                logfile)
{
    const int   ambgFlag = data.nogold;

    const XalanDOMString    mimeEncoding("", m_memoryManager);

    XalanFileOutputStream           myOutput(theOutputFile, m_memoryManager);
    XalanOutputStreamPrintWriter    myResultWriter(myOutput);

    FormatterListener* const    theFormatter =
        getXMLFormatter(
            myResultWriter,
            0,
            mimeEncoding,
            compiledSS->getStylesheetRoot());

    FormatterTreeWalker     theTreeWalker(*theFormatter, m_memoryManager);

    theTreeWalker.traverse(dom);

    destroyObjWithMemMgr(theFormatter, m_memoryManager);

    XalanSourceTreeDOMSupport       domSupport;
    XalanSourceTreeParserLiaison    parserLiaison(domSupport, m_memoryManager);
    
    domSupport.setParserLiaison(&parserLiaison);

    const XalanDocument* const  goldDom =
        parserLiaison.parseXMLStream(goldInputSource);

    if(domCompare(*goldDom, *dom))
    {
        cout << "Passed: " << data.testOrFile << endl;
        logfile.logCheckPass(data.testOrFile);
        data.pass += 1;
    }
    else
    {
        typedef XalanXMLFileReporter::Hashtable  Hashtable;

        // if the compairson fails gather up the failure data and determine if it failed 
        // due to bad output or missing Gold file. Lastly, log the failure.
        Hashtable attrs(m_memoryManager);
        Hashtable actexp(m_memoryManager);

        reportError();

        attrs.insert(
            XalanDOMString("reason", m_memoryManager), 
            XalanDOMString(data.msg, m_memoryManager));

        attrs.insert(
            XalanDOMString("atNode", m_memoryManager),
            data.currentNode);

        actexp.insert(
            XalanDOMString("exp", m_memoryManager),
            data.expected);

        actexp.insert(
            XalanDOMString("act", m_memoryManager),
            data.actual);

        if (ambgFlag < data.nogold)
        {
            logfile.logCheckAmbiguous(data.testOrFile);
        }
        else
        {
            logfile.logCheckFail(data.testOrFile, attrs, actexp);
        }

    }
}

/*  This routine takes the result file and gold file and parses them.
//  If either of the files fails to parse and a SAXException is throw,
//  then the files are compared using a char by char file compare,
//  otherwise the domCompare routine is used.
//  Inputs: 
//      outputFile:  Name of result file
//      goldFile:    Name of gold file
//      
//  Returns: 
//      True or False
//      
*/
bool
XalanFileUtility::compareSerializedResults(
            const XalanDOMString&   outputFile,
            const XalanDOMString&   goldFile)
{

    const XSLTInputSource   resultInputSource(outputFile, m_memoryManager);
    const XSLTInputSource   goldInputSource(goldFile, m_memoryManager);

    XalanSourceTreeDOMSupport       domSupport;
    XalanSourceTreeParserLiaison    parserLiaison(domSupport, m_memoryManager);

    domSupport.setParserLiaison(&parserLiaison);

    try
    {
        const XalanDocument* const  transformDom =
            parserLiaison.parseXMLStream(resultInputSource);
        assert(transformDom != 0);

        const XalanDocument* const  goldDom =
            parserLiaison.parseXMLStream(goldInputSource);
        assert(goldDom != 0);

        return domCompare(*goldDom, *transformDom);
    }
    // This exception is being reported prior to this Catch, however, however, I clarify that it's a SAX exception.
    // It's a good indication that the Gold file is not a valid XML.  When this happens the transform result needs
    // to be compared with the Gold,  with a character by character basis,  not via the DOM compair. 
    catch (const XERCES_CPP_NAMESPACE_QUALIFIER SAXException&)
    {
        cout << "SAXException: Using fileCompare to check output.\n";

        CharVectorType     goldFileVec(m_memoryManager);
        TranscodeToLocalCodePage(goldFile, goldFileVec, true);

        CharVectorType     outputFileVec(m_memoryManager);
        TranscodeToLocalCodePage(outputFile, outputFileVec, true);
        return fileCompare(c_str(goldFileVec), c_str(outputFileVec));
    }
 
}



static void
replaceNonAsciiCharacters(
            char*   theBuffer,
            char    theReplacementChar)
{
    while(*theBuffer)
    {
        if (unsigned(*theBuffer) > 127)
        {
            *theBuffer = theReplacementChar;
        }

        ++theBuffer;
    }
}



/*  This routine is used to compare the results against the gold when one or both of 
//  fails to parse without throwing a SAXException. When a failure is detected the 'data' 
//  structure used to report detailed info about a failure is filled in.
//  Inputs: 
//      outputFile:  Name of result file
//      goldFile:    Name of gold file
//      
//  Returns: 
//      True or False
//      
*/
bool
XalanFileUtility::fileCompare(
            const char*     goldFile,
            const char*     outputFile)
{
    const unsigned long     maxBuffer = 132;

    char rline[maxBuffer] = {'0'};  // declare buffers to hold single line from file
    char gline[maxBuffer] = {'0'};  
    char temp[20];              // buffer to hold line number
    char lineNum = 1;

    // Set fail data incase there are i/o problems with the files to compare.
    data.expected = XalanDOMString(" ", m_memoryManager);
    data.actual = XalanDOMString(" ", m_memoryManager);
    data.currentNode = XalanDOMString("Line: 0", m_memoryManager);

    // Attempt to open the files. 
    FILE* const     result = fopen(outputFile, "r");
    FILE* const     gold = fopen(goldFile, "r");

    // If the result file fails to open report this as a failure.
    if (!result)
    {
        data.msg = "No Result (Transform failed)";
        data.fail += 1;
        return false;
    }

    // If the gold file fails to open report this as ambiguous.
    if (!gold)
    {
        data.msg = "No Gold file";
        data.nogold += 1;
        return false;
    }

    // Start file comparison,  line by line..
    while(!feof(result) && !feof(gold))
    {
        fgets(gline, sizeof(gline), gold );
        fgets(rline, sizeof(rline), result );
        sprintf(temp,"%d",lineNum);

        if (ferror(gold) || ferror(result))
        {
            data.msg = "Read Error - Gold/Result file";
            data.currentNode = XalanDOMString("Line: ", m_memoryManager);
            data.currentNode += XalanDOMString(temp, m_memoryManager);
            return false;
        }

        // Compare the lines character by charcter ....
        unsigned int i = 0;
        while(i < strlen(gline)) 
        {
            if (gline[i] == rline[i]) 
            {
                i++;
            }
            else
            {   // If there is a mismatch collect up the fail data and return false.  To ensure that 
                // the results can be seen in the browser enclose the actual/expected in CDATA Sections.

                // Replace any non-ASCII characters.  Otherwise, we would have to encode them
                // in UTF-8, which is a huge pain.
                replaceNonAsciiCharacters(gline, '?');
                replaceNonAsciiCharacters(rline, '?');

                data.msg = "Text based comparison failure";
                data.expected = XalanDOMString("<![CDATA[", m_memoryManager);
                data.expected += XalanDOMString(gline, m_memoryManager);
                data.expected += XalanDOMString("]]>", m_memoryManager);

                data.actual = XalanDOMString("<![CDATA[", m_memoryManager);
                data.actual += XalanDOMString(rline, m_memoryManager);
                data.actual += XalanDOMString("]]>", m_memoryManager);

                data.currentNode = XalanDOMString("Line: ", m_memoryManager);
                data.currentNode += XalanDOMString(temp, m_memoryManager);
                data.fail += 1;
                fclose(result);
                fclose(gold);
                return false;
            }
        }

        lineNum += 1;
    }

    fclose(result);
    fclose(gold);

    return true;
}



/*  This routine performs a DOM Comparision. 
//  Inputs: 
//      gold - Dom tree for the expected results
//      doc  - Dom tree created during transformation
//      filename - Current filename
//      
//  Returns: 
//      True or False
//      
*/
bool 
XalanFileUtility::domCompare(
            const XalanNode&    gold,
            const XalanNode&    doc)
{
    const XalanNode::NodeType   docNodeType  = doc.getNodeType();
    const XalanNode::NodeType   goldNodeType = gold.getNodeType();

    const XalanDOMString&  docNodeName  = doc.getNodeName();    

    if (goldNodeType != docNodeType)
    {
        collectData(
            "NodeType mismatch.",
            docNodeName,
            XalanDOMString(xalanNodeTypes[docNodeType], m_memoryManager),
            XalanDOMString(xalanNodeTypes[goldNodeType], m_memoryManager));

        return false;
    }

    switch (goldNodeType)
    {
    case XalanNode::ELEMENT_NODE:   // ATTRIBUTE_NODEs are processed with diffElement().
        { 
            if (diffElement(gold, doc) == false) 
            {
                return false;
            }
        }
        break;

    case XalanNode::CDATA_SECTION_NODE:
    case XalanNode::TEXT_NODE:  
        {
            const XalanDOMString&   docNodeValue  = doc.getNodeValue();
            const XalanDOMString&   goldNodeValue = gold.getNodeValue();
            
            //debugNodeData(docNodeName, docNodeValue);
            
            if(goldNodeValue != docNodeValue)
            {
                collectData(
                    "Text node mismatch. ", 
                    docNodeName,
                    goldNodeValue,
                    docNodeValue);

                return false;
            }
        }
        break;

    case XalanNode::PROCESSING_INSTRUCTION_NODE:
        {
            const XalanDOMString&  goldNodeName = gold.getNodeName();

            if (goldNodeName != docNodeName)
            {
                collectData(
                    "processing-instruction target mismatch. ", 
                    docNodeName,
                    goldNodeName,
                    docNodeName);

                return false;
            }
            else
            {
                const XalanDOMString&   docNodeValue = doc.getNodeValue();
                const XalanDOMString&   goldNodeValue = gold.getNodeValue();

                if (goldNodeValue != docNodeValue)
                {
                    collectData(
                        "processing-instruction data mismatch. ", 
                        docNodeName,
                        goldNodeValue,
                        docNodeValue);

                    return false;
                }
            }
        }
        break;

    case XalanNode::COMMENT_NODE:
        {
            const XalanDOMString&   docNodeValue = doc.getNodeValue();
            const XalanDOMString&   goldNodeValue = gold.getNodeValue();

            if (goldNodeValue != docNodeValue)
            {
                collectData(
                    "comment data mismatch. ", 
                    docNodeName,
                    goldNodeValue,
                    docNodeValue);

                return false;
            }
        }
        break;

    case XalanNode::DOCUMENT_NODE:
        {
            //debugNodeData(docNodeName);

            const XalanNode *goldNextNode;
            const XalanNode *domNextNode;

            goldNextNode = gold.getFirstChild();
            domNextNode = doc.getFirstChild();

            if (0 != goldNextNode)
            {
                if(domCompare(*goldNextNode,*domNextNode) == false)
                {
                    return false;
                }
            }
        }
        break;

    case XalanNode::ENTITY_REFERENCE_NODE:
    case XalanNode::ENTITY_NODE:
    case XalanNode::DOCUMENT_TYPE_NODE:
    case XalanNode::DOCUMENT_FRAGMENT_NODE:
    case XalanNode::NOTATION_NODE:
    default:
        cerr << "Unexpected node type: " << goldNodeType << endl;

        return false;
    }

    // Need to process siblings.  Children are processed in diffElement, since
    // only they can have children in the XPath data model.
    const XalanNode* const  goldNextNode = gold.getNextSibling();
    const XalanNode* const  domNextNode = doc.getNextSibling();

    if (0 != goldNextNode)
    {
        if (0 != domNextNode)
        {
            if (domCompare(*goldNextNode, *domNextNode) == false)
            {
                return false;
            }
        }
        else
        {
            collectData(
                "Missing sibling node. ", 
                docNodeName,
                goldNextNode->getNodeName(),
                goldNextNode->getNodeName());

            return false;
        }
    }
    else if (0 != domNextNode)
    {
        collectData(
            "Extra sibling node. ", 
            docNodeName,
            domNextNode->getNodeName(),
            domNextNode->getNodeName());

        return false;
    }

    return true;
}



bool 
XalanFileUtility::domCompare(
            const XalanDocument&    gold,
            const XalanDocument&    doc)
{
    const XalanNode*    theGoldPos = &gold;
    const XalanNode*    theDocPos = &doc;

    bool    fEqual = true;

    do
    {
        fEqual = diffNode(theGoldPos, theDocPos);

        if (fEqual == true)
        {
            assert(theGoldPos != 0 && theDocPos != 0);

            const XalanNode*    nextGoldNode = theGoldPos->getFirstChild();
            const XalanNode*    nextDocNode = theDocPos->getFirstChild();

            bool    fBreak = false;

            while(
                nextGoldNode == 0 &&
                nextDocNode == 0 &&
                fBreak == false)
            {
                // Move to the next sibling of each node,
                // since we would get here only if both have
                // no children.
                nextGoldNode = theGoldPos->getNextSibling();
                nextDocNode = theDocPos->getNextSibling();

                // If there is no next sibling, move up to the
                // parent.  If one, but not both, has a sibling,
                // we'll end up back at the top of the do/while
                // loop and the difference will be reported.
                if(0 == nextGoldNode && 0 == nextDocNode)
                {
                    theGoldPos = theGoldPos->getParentNode();
                    theDocPos = theDocPos->getParentNode();

                    // If the parent is null, then we've reached
                    // the end of the document.  Note that if we
                    // got here, then there must also be a parent
                    // node in the document we're verifying, so we
                    // could simply assert that theDocPos is either
                    // null if theGoldPos is null, or it is not-null
                    // if theGoldPos is not-null.
                    if(0 == theGoldPos)
                    {
                        nextGoldNode = theGoldPos;

                        fBreak = true;
                    }

                    if(0 == theDocPos)
                    {
                        nextDocNode = theDocPos;

                        fBreak = true;
                    }
                }
            }

            theGoldPos = nextGoldNode;
            theDocPos = nextDocNode;
        }
    } while((theGoldPos != 0 || theDocPos != 0) && fEqual == true);


    return fEqual;
}



bool
XalanFileUtility::diffNode(
            const XalanNode&    gold,
            const XalanNode&    doc)
{
    const XalanNode::NodeType   docNodeType  = doc.getNodeType();
    const XalanNode::NodeType   goldNodeType = gold.getNodeType();

    const XalanDOMString&  docNodeName  = doc.getNodeName();    

    if (goldNodeType != docNodeType)
    {
        collectData(
            "NodeType mismatch.",
            docNodeName,
            XalanDOMString(xalanNodeTypes[docNodeType], m_memoryManager),
            XalanDOMString(xalanNodeTypes[goldNodeType], m_memoryManager));

        return false;
    }

    switch (goldNodeType)
    {
    case XalanNode::ELEMENT_NODE:   // ATTRIBUTE_NODEs are processed with diffElement().
        return diffElement2(gold, doc);
        break;

    case XalanNode::CDATA_SECTION_NODE:
    case XalanNode::TEXT_NODE:  
        {
            const XalanDOMString&   docNodeValue  = doc.getNodeValue();
            const XalanDOMString&   goldNodeValue = gold.getNodeValue();
            
            //debugNodeData(docNodeName, docNodeValue);
            
            if(goldNodeValue != docNodeValue)
            {
                collectData(
                    "Text node mismatch. ",
                    docNodeName,
                    goldNodeValue,
                    docNodeValue);

                return false;
            }
        }
        break;

    case XalanNode::PROCESSING_INSTRUCTION_NODE:
        {
            const XalanDOMString&  goldNodeName  = gold.getNodeName();

            if (goldNodeName != docNodeName)
            {
                collectData(
                    "processing-instruction target mismatch. ", 
                    docNodeName,
                    goldNodeName,
                    docNodeName);

                return false;
            }
            else
            {
                const XalanDOMString&   docNodeValue  = doc.getNodeValue();
                const XalanDOMString&   goldNodeValue = gold.getNodeValue();

                if (goldNodeValue != docNodeValue)
                {
                    collectData(
                        "processing-instruction data mismatch. ", 
                        docNodeName,
                        goldNodeValue,
                        docNodeValue);

                    return false;
                }
            }
        }
        break;

    case XalanNode::COMMENT_NODE:
        {
            const XalanDOMString&   docNodeValue  = doc.getNodeValue();
            const XalanDOMString&   goldNodeValue = gold.getNodeValue();

            if (goldNodeValue != docNodeValue)
            {
                collectData(
                    "comment data mismatch. ", 
                    docNodeName,
                    goldNodeValue,
                    docNodeValue);

                return false;
            }
        }
        break;

    case XalanNode::DOCUMENT_NODE:
        break;

    case XalanNode::ENTITY_REFERENCE_NODE:
    case XalanNode::ENTITY_NODE:
    case XalanNode::DOCUMENT_TYPE_NODE:
    case XalanNode::DOCUMENT_FRAGMENT_NODE:
    case XalanNode::NOTATION_NODE:
    default:
        cerr << "Unexpected node type: " << goldNodeType << endl;

        return false;
    }

    return true;
}



bool
XalanFileUtility::diffNode(
            const XalanNode*    gold,
            const XalanNode*    doc)
{
    if (gold != 0 && doc != 0)
    {
        return diffNode(*gold, *doc);
    }
    else if (gold != 0)
    {
        const XalanNode* const  parent =
            gold->getParentNode();

        collectData(
            "Missing sibling node. ",
            parent == 0 ? s_emptyString : parent->getNodeName(),
            s_emptyString,
            gold->getNodeName());

        return false;
    }
    else
    {
        assert(doc != 0 && gold == 0);

        const XalanNode* const  parent =
            doc->getParentNode();

        collectData(
            "Extra sibling node. ", 
            parent == 0 ? s_emptyString : parent->getNodeName(),
            doc->getNodeName(),
            s_emptyString);

        return false;
    }
}



/*  This routine compares two element nodes. 
//  Inputs: 
//      gold - Dom tree for the expected results
//      doc  - Dom tree created during transformation
//      filename - Current filenam
//      
//  Returns: 
//      True or False
//                      
*/

bool
XalanFileUtility::diffElement(
            const XalanNode&    gold,
            const XalanNode&    doc)
{
    assert(gold.getNodeType() == XalanNode::ELEMENT_NODE);
    assert(gold.getNodeType() == XalanNode::ELEMENT_NODE);

    const XalanDOMString&  docNodeName  = doc.getNodeName();    
    const XalanDOMString&  goldNodeName = gold.getNodeName();

    const XalanDOMString&  docNsUri  = doc.getNamespaceURI();
    const XalanDOMString&  goldNsUri = gold.getNamespaceURI();

    //debugNodeData(docNodeName);

    // This essentially checks 2 things, that the prefix and localname are the
    // same.  So specific checks of these items are not necessary.
    if (goldNodeName != docNodeName)
    {
        collectData(
            "Element mismatch. ", 
            docNodeName,
            goldNodeName,
            docNodeName);

        return false;
    }

    if ( goldNsUri != docNsUri)
    {
        collectData(
            "Element NamespaceURI mismatch. ",
            docNodeName,
            goldNsUri,
            docNsUri);

        return false;
    }

    // Get Attributes for each Element Node. 
    const XalanNamedNodeMap* const  goldAttrs = gold.getAttributes();
    const XalanNamedNodeMap* const  docAttrs  = doc.getAttributes();

    // Get number of Attributes
    const unsigned int  numGoldAttr = goldAttrs->getLength();
    const unsigned int  numDomAttr  = docAttrs ->getLength();

    /*
    // This needs to be uncommented if 'compare.exe' is to work. 
    // If this is the 'root' element strip off the xmlns:xml namespace attribute,
    // that is lurking around on the gold file, but not the dom.  This is necessary
    // only for the 'compare' test, that uses a pure DOM, that has not been serialized.
    //if (goldNodeName == XalanDOMString("root"))
    {
        numGoldAttr -= 1;
        XalanNode *gXMLAttr = goldAttrs->item(1);
    }
    */
    // Check that each Element has same number of Attributes. If they don't report error  
    if ( numGoldAttr == numDomAttr )
    {
        // Compare Attributes one at a time.
        //for (int i=1; i < numGoldAttr; i++)  // To be used with 'compare'
        for (unsigned int i = 0; i < numGoldAttr; ++i)
        {
            // Attribute order is irrelvant, so comparision is base on Attribute name.
            const XalanNode* const  gAttr = goldAttrs->item(i);
            const XalanDOMString&   goldAttrName = gAttr->getNodeName();

            const XalanNode* const  dAttr = docAttrs->getNamedItem(goldAttrName);

            if (dAttr != 0)
            {
                if( ! (diffAttr(gAttr, dAttr)) )
                    return false;
            }
            else
            {
                collectData(
                    "Element missing named Attribute. ",
                    docNodeName,
                    goldAttrName,
                    XalanDOMString("NOTHING", m_memoryManager));

                return false;
            }
        }
    }
    else
    {
        XalanDOMString  numGoldStr(m_memoryManager);
        XalanDOMString  numDOMStr(m_memoryManager);

        collectData(
            "Wrong number of attributes. ",
            docNodeName,
            UnsignedLongToDOMString(numGoldAttr, numGoldStr),
            UnsignedLongToDOMString(numDomAttr, numDOMStr));

        return false;
    }

    const XalanNode*    goldNextNode = gold.getFirstChild();
    const XalanNode*    domNextNode = doc.getFirstChild();

    if (0 != goldNextNode)
    {
        if (0 != domNextNode)
        {
            if ( ! domCompare(*goldNextNode, *domNextNode) )
                return false;
        }
        else
        {
            collectData(
                "Element missing ChildNode. ", 
                docNodeName,
                XalanDOMString(goldNextNode->getNodeName(), m_memoryManager),
                XalanDOMString("NOTHING", m_memoryManager));

            return false;
        }
    }
    else if (domNextNode != 0)
    {
        // The result doc has additional Children. If the additional node is a text node
        // then gather up the text and print it out.
        if ( domNextNode->getNodeType() == XalanNode::TEXT_NODE)
        {
            collectData(
                "Result has additional Child node: ", 
                docNodeName,
                XalanDOMString("NOTHING", m_memoryManager),       
                XalanDOMString(domNextNode->getNodeName(), m_memoryManager).append(XalanDOMString("  \"", m_memoryManager).append(
                XalanDOMString(domNextNode->getNodeValue(), m_memoryManager).append(XalanDOMString("\"", m_memoryManager)))));
        }
        // Additional node is NOT text, so just print it's Name.
        else
        {
            collectData(
                "Result has additional Child node: ",
                docNodeName,
                XalanDOMString("NOTHING", m_memoryManager),
                XalanDOMString(domNextNode->getNodeName(), m_memoryManager));

        }

        return false;
    }

    return true;
}


bool
XalanFileUtility::diffElement2(
            const XalanNode&    gold,
            const XalanNode&    doc)
{
    assert(gold.getNodeType() == XalanNode::ELEMENT_NODE);
    assert(gold.getNodeType() == XalanNode::ELEMENT_NODE);

    const XalanDOMString&  docNodeName  = doc.getNodeName();    
    const XalanDOMString&  goldNodeName = gold.getNodeName();

    const XalanDOMString&  docNsUri  = doc.getNamespaceURI();
    const XalanDOMString&  goldNsUri = gold.getNamespaceURI();

    //debugNodeData(docNodeName);

    // This essentially checks 2 things, that the prefix and localname are the
    // same.  So specific checks of these items are not necessary.
    if (goldNodeName != docNodeName)
    {
        collectData(
            "Element mismatch. ", 
            docNodeName,
            goldNodeName,
            docNodeName);

        return false;
    }

    if ( goldNsUri != docNsUri)
    {
        collectData(
            "Element NamespaceURI mismatch. ",
            docNodeName,
            goldNsUri,
            docNsUri);

        return false;
    }

    // Get Attributes for each Element Node. 
    const XalanNamedNodeMap* const  goldAttrs = gold.getAttributes();
    assert(goldAttrs != 0);

    const XalanNamedNodeMap* const  docAttrs  = doc.getAttributes();
    assert(docAttrs != 0);

    // Get number of Attributes
    const unsigned int  numGoldAttr = goldAttrs->getLength();
    const unsigned int  numDomAttr  = docAttrs ->getLength();

    // Check that each Element has same number of Attributes. If they don't report error  
    if ( numGoldAttr == numDomAttr )
    {
        // Compare Attributes one at a time.
        //for (int i=1; i < numGoldAttr; i++)  // To be used with 'compare'
        for (unsigned int i = 0; i < numGoldAttr; ++i)
        {
            // Attribute order is irrelvant, so comparision is base on Attribute name.
            const XalanNode* const  gAttr = goldAttrs->item(i);
            const XalanDOMString&   goldAttrName = gAttr->getNodeName();

            const XalanNode* const  dAttr = docAttrs->getNamedItem(goldAttrName);

            if (dAttr != 0)
            {
                if( ! (diffAttr(gAttr, dAttr)) )
                    return false;
            }
            else
            {
                collectData(
                    "Element missing named Attribute. ",
                    docNodeName,
                    goldAttrName,
                    XalanDOMString("NOTHING", m_memoryManager));

                return false;
            }
        }
    }
    else
    {
        XalanDOMString  numGoldStr(m_memoryManager);
        XalanDOMString  numDOMStr(m_memoryManager);

        collectData(
            "Wrong number of attributes. ",
            docNodeName,
            UnsignedLongToDOMString(numGoldAttr, numGoldStr),
            UnsignedLongToDOMString(numDomAttr, numDOMStr));

        return false;
    }

    return true;
}


/*  This routine compares two attribute nodes. 
//  Inputs: 
//      gAttr - attribute from Gold dom tree 
//      dAttr - attribute from Dom tree created during transformation
//      fileName - Current filenam
//      
//  Returns: 
//      True or False
//              
*/

bool XalanFileUtility::diffAttr(const XalanNode* gAttr, const XalanNode* dAttr)
{

    const XalanDOMString&   docAttrName  = dAttr->getNodeName();

    //debugAttributeData(goldAttrName);

    const XalanDOMString&   goldAttrValue = gAttr->getNodeValue();
    const XalanDOMString&   docAttrValue    = dAttr->getNodeValue();

    if (goldAttrValue != docAttrValue)
    {
        collectData(
            "Attribute Value mismatch. ",
            docAttrName,
            goldAttrValue,
            docAttrValue);

        return false;
    }

    const XalanDOMString&   goldAttrNsUri = gAttr->getNamespaceURI();
    const XalanDOMString&   docAttrNsUri    = dAttr->getNamespaceURI();

    if (goldAttrNsUri != docAttrNsUri)
    {
        collectData(
            "Attribute NamespaceURI mismatch. ", 
            docAttrName,
            goldAttrNsUri,
            docAttrNsUri);

        return false;
    }

    return true;
}

/*  This routine reports DOM comparison errors. 
//  Inputs: 
//      file    -   Name of current file
//      node    -   Current node that fails
//      msg     -   Failure message
//
*/
void
XalanFileUtility::reportError()
{

    cout << endl
         << "* Failed "
         << data.testOrFile
         << "  Error: "
         << data.msg
         << endl
         << "   "
         << "Processing Node: "
         << data.currentNode
         << endl
         << "   Expected:   "
         << data.expected
         << endl
         << "   Actual:     "
         << data.actual
         << endl
         << endl;
}


#if !defined(NDEBUG)
void
XalanFileUtility::debugNodeData(const XalanDOMString&    value) const
{

    CharVectorType     valueVec(m_memoryManager);

    TranscodeToLocalCodePage(value, valueVec, true);

    cout << "Node is: " << c_str(valueVec) << endl;
}



void
XalanFileUtility::debugNodeData(
            const XalanDOMString&   node,
            const XalanDOMString&   value) const
{

    CharVectorType     valueVec(m_memoryManager);
    TranscodeToLocalCodePage(value, valueVec, true);

    CharVectorType     nodeVec(m_memoryManager);
    TranscodeToLocalCodePage(node, nodeVec, true);

    cout << "Node is: " << c_str(nodeVec) << "   "
         << "Value is: \"" << c_str(valueVec) << "\"\n";
}



void
XalanFileUtility::debugAttributeData(const XalanDOMString&   value) const
{
    CharVectorType		theTargetVector(m_memoryManager);

    TranscodeToLocalCodePage(value, theTargetVector, true);

    cout << "Attribute is: " << c_str(theTargetVector) << endl;
}

#endif



/*  This routine collects up data pertinent to a dom comparison failure. 
//  Inputs: 
//      errmsg:         Reason for the failure.
//      currentnode:    Node in the dom tree where the mismatch occured
//      expdata:        Expected data based on the Gold file.
//      actdata:        Actual data returned in the result file.
//  Returns: Void                       
*/
void 
XalanFileUtility::collectData(
            const char*             errmsg,
            const XalanDOMString&   currentnode,
            const XalanDOMString&   expdata,
            const XalanDOMString&   actdata)
{
    data.msg = errmsg;
    data.currentNode = currentnode;
    data.expected = expdata;
    data.actual = actdata;
    data.fail += 1;
}


/*  Routine prints the result to the console, as well as adds summary info into the logfile. 
//  Inputs: 
//      logfile:    Current log file
//      runid:      Unique runid
//  Returns: Void                       
*/
void
XalanFileUtility::reportPassFail(
            XalanXMLFileReporter&   logfile,
            const XalanDOMString&   runid)
{
    typedef XalanXMLFileReporter::Hashtable  Hashtable;

    Hashtable   runResults(m_memoryManager);

    char temp[10];

    // Create entrys that contain runid, xerces version, and numbers for Pass, Fail and No Gold.

    XalanDOMString theBuffer(m_memoryManager);

    runResults.insert(
        XalanDOMString("UniqRunid", m_memoryManager),
        runid);

    runResults.insert(
        XalanDOMString("Xerces-Version ", m_memoryManager),
        getXercesVersion(theBuffer));

    runResults.insert(
        XalanDOMString("BaseDrive ", m_memoryManager), 
        XalanDOMString(getDrive(theBuffer), m_memoryManager));

    runResults.insert(
        XalanDOMString("TestBase ", m_memoryManager),
        XalanDOMString(args.base, m_memoryManager));

    runResults.insert(
        XalanDOMString("xmlFormat ", m_memoryManager),
        data.xmlFormat);

    sprintf(temp, "%ld", args.iters);

    runResults.insert(
        XalanDOMString("Iters ", m_memoryManager),
        XalanDOMString(temp, m_memoryManager));

    sprintf(temp, "%d", data.pass);

    runResults.insert(
        XalanDOMString("Passed", m_memoryManager),
        XalanDOMString(temp, m_memoryManager));
    
    sprintf(temp, "%d", data.fail);

    runResults.insert(
        XalanDOMString("Failed", m_memoryManager),
        XalanDOMString(temp, m_memoryManager));

    sprintf(temp, "%d", data.nogold);

    runResults.insert(
        XalanDOMString("No_Gold_Files", m_memoryManager),
        XalanDOMString(temp, m_memoryManager));

    logfile.logElementWAttrs(10, "RunResults", runResults, "xxx");  

    cout << "\nPassed " << data.pass;
    cout << "\nFailed " << data.fail;
    cout << "\nMissing Gold " << data.nogold << endl;

}

/*  Routine runs a stylesheet on the log file and displays the results in HTML. 
//  Inputs: 
//      xalan:          An instance of the transformer
//      resultsFile:    logfile 
//  Returns: Void                       
*/
void
XalanFileUtility::analyzeResults(XalanTransformer& xalan, const XalanDOMString& resultsFile)
{
    XalanDOMString paramValue(m_memoryManager);

    bool    fileStatus;

#if defined(AIX) || defined(SOLARIS) || defined(LINUX) || defined(HPUX)

    bool    pathStatus;
    CharVectorType     withPath(m_memoryManager);
    TranscodeToLocalCodePage(resultsFile, withPath, false);
    if (withPath[0] == '/')
        pathStatus=true;
    else
        pathStatus=false;
    
    char buffer5[PATH_MAX];
    XalanDOMString resultPath(getcwd(buffer5, PATH_MAX), m_memoryManager);
    append(resultPath, s_pathSep);
#endif
    

    // Pass the results .xml file as a parameter to the stylesheet.  It must be wrapped in single
    // quotes so that it is not considered an expression.
    //
  #if defined (AIX) || defined(SOLARIS) || defined(LINUX) || defined(HPUX)
    assign(paramValue, XalanDOMString("\'", m_memoryManager));
    if ( !pathStatus )
        append(paramValue, resultPath);
    append(paramValue, resultsFile);
    append(paramValue, XalanDOMString("\'", m_memoryManager));
  #else 
    assign(paramValue, XalanDOMString("'", m_memoryManager));
        append(paramValue, resultsFile);
        append(paramValue, XalanDOMString("'", m_memoryManager));
  #endif

    // Set the parameter
    //
    xalan.setStylesheetParam(
        XalanDOMString("testfile", m_memoryManager),
        paramValue);

    // Generate the input and output file names.
    //
    XalanDOMString  theHTMLFile(m_memoryManager);
    generateFileName(resultsFile,"html", theHTMLFile, &fileStatus);
    
    XalanDOMString  theStylesheet(m_memoryManager);
    theStylesheet += args.base;
    theStylesheet += XalanDOMString("cconf.xsl", m_memoryManager);

    XalanDOMString  theXMLSource(m_memoryManager);
    theXMLSource += args.base;
    theXMLSource += XalanDOMString("cconf.xml", m_memoryManager);

    // Check that we can find the stylesheet to analyze the results.
    //
    CharVectorType theBuffer(m_memoryManager);
    TranscodeToLocalCodePage(theStylesheet, theBuffer, true);
    FILE* fileHandle = fopen(c_str(theBuffer), "r");
    if (fileHandle == 0)
    {
        cout << "ANALYSIS ERROR: File Missing: " << c_str(theBuffer) << endl;
        return;
    }
    else
    {
        fclose(fileHandle);
    }

    // Create the InputSources and ResultTarget.
    const XSLTInputSource   xslInputSource(theStylesheet, m_memoryManager);
    const XSLTInputSource   xmlInputSource(theXMLSource, m_memoryManager);
    const XSLTResultTarget  resultFile(theHTMLFile, m_memoryManager);

    // Do the transform, display the output HTML, or report any failure.
    const int   result = xalan.transform(xmlInputSource, xslInputSource, resultFile);

    if (result == 0)
    {
#if defined(_MSC_VER)
        CharVectorType theBuffer(m_memoryManager);
        TranscodeToLocalCodePage(theHTMLFile, theBuffer, true);

        // system(c_str(theBuffer));
#else
        cout << "The HTML output: " << theHTMLFile << " was created" << endl;
#endif
    }
    else 
    {
        cout << "Analysis failed due to following error: "
             << xalan.getLastError()
             << endl;
    }   
}



const XalanDOMChar	XalanFileUtility::s_xmlSuffix[] =
{
    XalanUnicode::charFullStop,
    XalanUnicode::charLetter_x,
    XalanUnicode::charLetter_m,
    XalanUnicode::charLetter_l,
	0
};

const XalanDOMChar	XalanFileUtility::s_pathSep[] =
{
#if defined(WIN32)
    XalanUnicode::charReverseSolidus,
#else
    XalanUnicode::charSolidus,
#endif
	0
};



XALAN_CPP_NAMESPACE_END
