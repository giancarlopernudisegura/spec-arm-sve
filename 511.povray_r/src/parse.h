/****************************************************************************
 *                  parse.h
 *
 * This header file is included by all all language parsing C modules in
 * POV-Ray.
 *
 * from Persistence of Vision(tm) Ray Tracer version 3.6.
 * Copyright 1991-2003 Persistence of Vision Team
 * Copyright 2003-2009 Persistence of Vision Raytracer Pty. Ltd.
 *---------------------------------------------------------------------------
 * NOTICE: This source code file is provided so that users may experiment
 * with enhancements to POV-Ray and to port the software to platforms other
 * than those supported by the POV-Ray developers. There are strict rules
 * regarding how you are permitted to use this file. These rules are contained
 * in the distribution and derivative versions licenses which should have been
 * provided with this file.
 *
 * These licences may be found online, linked from the end-user license
 * agreement that is located at http://www.povray.org/povlegal.html
 *---------------------------------------------------------------------------
 * This program is based on the popular DKB raytracer version 2.12.
 * DKBTrace was originally written by David K. Buck.
 * DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
 *---------------------------------------------------------------------------
 * $File: //depot/povray/spec-3.6/source/parse.h $
 * $Revision: #1 $
 * $Change: 5014 $
 * $DateTime: 2010/06/13 03:51:51 $
 * $Author: thorsten $
 * $Log$
 *****************************************************************************/

#ifndef PARSE_H
#define PARSE_H

#include "frame.h"
#include "camera.h"

BEGIN_POV_NAMESPACE

/*****************************************************************************
* Global preprocessor defines
******************************************************************************/

/* Here we create our own little language for doing the parsing.  It
  makes the code easier to read. */

#define EXPECT { int Exit_Flag; Exit_Flag = false; \
 while (!Exit_Flag) {Get_Token();  switch (Token.Token_Id) {
#define EXPECT_ONE { int Exit_Flag; Exit_Flag = false; \
 {Get_Token();  switch (Token.Token_Id) {
#define CASE(x) case x:
#define CASE2(x, y) case x: case y:
#define CASE3(x, y, z) case x: case y: case z:
#define CASE4(w, x, y, z) case w: case x: case y: case z:
#define CASE5(v, w, x, y, z) case v: case w: case x: case y: case z:
#define CASE6(u, v, w, x, y, z) case u: case v: case w: case x: case y: case z:
#define END_CASE break;
#define EXIT Exit_Flag = true;
#define OTHERWISE default:
#define END_EXPECT } } }
#define GET(x) Get_Token(); if (Token.Token_Id != x) Parse_Error (x);
#define ALLOW(x) Get_Token(); if (Token.Token_Id != x) Unget_Token();
#define UNGET Unget_Token();

#define CASE_FLOAT CASE2 (LEFT_PAREN_TOKEN,FLOAT_FUNCT_TOKEN)\
 CASE4 (PLUS_TOKEN,DASH_TOKEN,FUNCT_ID_TOKEN,EXCLAMATION_TOKEN) \
 UNGET

#define CASE_VECTOR CASE3 (VECTFUNCT_ID_TOKEN,VECTOR_FUNCT_TOKEN,LEFT_ANGLE_TOKEN) \
 CASE5 (U_TOKEN,V_TOKEN,UV_ID_TOKEN,VECTOR_4D_ID_TOKEN,SPLINE_ID_TOKEN) \
 CASE_FLOAT /* NOTE this has an UNGET in it! */

#define CASE_COLOUR CASE3 (COLOUR_TOKEN,COLOUR_KEY_TOKEN,COLOUR_ID_TOKEN) \
 UNGET

/*
CASE_EXPRESS is a CASE_COLOUR w/o an UNGET and a CASE_VECTOR (w/unget)

   NOTE: you cannot use CASE_VECTOR followed by CASE_COLOUR or vice-versa, because
         they both contain an UNGET which will cause problems!
*/
#define CASE_EXPRESS CASE3 (COLOUR_TOKEN,COLOUR_KEY_TOKEN,COLOUR_ID_TOKEN) \
  CASE_VECTOR /* NOTE this has an UNGET in it! */

#define MAX_BRACES 200

const int TOKEN_OVERFLOW_RESET_COUNT = 2500; // [trf]

/*****************************************************************************
* Global typedefs
******************************************************************************/


/*****************************************************************************
* Global variables
******************************************************************************/

extern short Not_In_Default;
extern short Ok_To_Declare;
extern short LValue_Ok;

extern CAMERA *Default_Camera;


/*****************************************************************************
* Global functions
******************************************************************************/

void Parse_Error (TOKEN Token_Id);
void Found_Instead_Error (const char *exstr, const char *extokstr);
void Parse_Begin (void);
void Parse_End (void);
void Parse_Comma (void);
void Parse_Semi_Colon (bool force_semicolon);
void Destroy_Frame (void);
void Parse (void);
void MAError (const char *str, long size);
void Warn_State (TOKEN Token_Id, TOKEN Type);
void Only_In (const char *s1,const char *s2);
void Not_With (const char *s1,const char *s2);
void Warn_Compat (int f, const char *sym);
void Link_Textures (TEXTURE **Old_Texture, TEXTURE *New_Texture);

void Parse_Object_Mods (OBJECT *Object);
OBJECT *Parse_Object (void);
OBJECT *Parse_Bound_Clip (void);
void Parse_Default (void);
void Parse_Declare (bool is_local, bool after_hash);
void Parse_Matrix (MATRIX Matrix);
void Destroy_Ident_Data (void *Data, int Type);
int Parse_RValue (int Previous, int *NumberPtr, void **DataPtr, SYM_ENTRY *sym, bool ParFlag, bool SemiFlag, bool is_local, bool allow_redefine, int old_table_index);
#if !defined(SPEC)
char *Get_Token_String (TOKEN Token_Id);
#else
const char *Get_Token_String (TOKEN Token_Id);
#endif
void Test_Redefine(TOKEN Previous, TOKEN *NumberPtr, void *Data, bool allow_redefine = true);
void Expectation_Error(const char *);
void *Copy_Identifier(void *Data, int Type);
TRANSFORM *Parse_Transform(TRANSFORM *Trans = NULL);
TRANSFORM *Parse_Transform_Block(TRANSFORM *New = NULL);
char *Get_Reserved_Words (const char *additional_words) ;

END_POV_NAMESPACE

#endif
  

