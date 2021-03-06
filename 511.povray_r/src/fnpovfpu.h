/****************************************************************************
 *                  fnpovfpu.h
 *
 * This module contains all defines, typedefs, and prototypes for fnpovfpu.cpp.
 *
 * This module is inspired by code by D. Skarda, T. Bily and R. Suzuki.
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
 * $File: //depot/povray/spec-3.6/source/fnpovfpu.h $
 * $Revision: #1 $
 * $Change: 5014 $
 * $DateTime: 2010/06/13 03:51:51 $
 * $Author: thorsten $
 * $Log$
 *****************************************************************************/


#ifndef FNPOVFPU_H
#define FNPOVFPU_H

#include "frame.h"
#include "fncode.h"

BEGIN_POV_NAMESPACE

enum
{
	ITYPE_R = 0,
	ITYPE_I,
	ITYPE_S,
	ITYPE_J,
	ITYPE_X,
	ITYPE_M
};

typedef struct
{
#if !defined(SPEC)
	char *name;
#else
	const char *name;
#endif
	unsigned int code;
	int type;
} Opcode;

enum
{
	TRAP_SYS1_SIN = 0,
	TRAP_SYS1_COS,
	TRAP_SYS1_TAN,
	TRAP_SYS1_ASIN,
	TRAP_SYS1_ACOS,
	TRAP_SYS1_ATAN,
	TRAP_SYS1_SINH,
	TRAP_SYS1_COSH,
	TRAP_SYS1_TANH,
	TRAP_SYS1_ASINH,
	TRAP_SYS1_ACOSH,
	TRAP_SYS1_ATANH,
	TRAP_SYS1_FLOOR,
	TRAP_SYS1_CEIL,
	TRAP_SYS1_SQRT,
	TRAP_SYS1_EXP,
	TRAP_SYS1_LN,
	TRAP_SYS1_LOG,
	TRAP_SYS1_INT
};

enum
{
	TRAP_SYS2_POW = 0,
	TRAP_SYS2_ATAN2,
	TRAP_SYS2_MOD,
	TRAP_SYS2_DIV
};

typedef SYS_MATH_RETURN (*Sys1)(SYS_MATH_PARAM r0);
typedef SYS_MATH_RETURN (*Sys2)(SYS_MATH_PARAM r0,SYS_MATH_PARAM r1);

// WARNING: Do not change this structure without notice!!!
// Platform specific code may depend on the exact layout and size! [trf]
typedef struct FunctionEntry_Struct
{
	FunctionCode fn;
	unsigned int reference_count;
	SYS_FUNCTION_ENTRY
} FunctionEntry;

// WARNING: Do not change this structure without notice!!!
// Platform specific code may depend on the exact layout and size! [trf]
typedef struct StackFrame_Struct
{
	unsigned int pc;
	FUNCTION fn;
} StackFrame;

// WARNING: Do not change this structure without notice!!!
// Platform specific code may depend on the exact layout and size! [trf]
typedef struct FPUContext_Struct
{
	struct FPUContext_Struct *next;
	StackFrame *pstackbase;
	DBL *dblstackbase;
	unsigned int maxdblstacksize;
	#if (SYS_FUNCTIONS == 1)
	DBL *dblstack;
	#endif
} FPUContext;


#define OPCODE(i,s,d) ((i << 6) | (s << 3) | d)

#define OPCODE_ADD    OPCODE(0,0,0)
#define OPCODE_SUB    OPCODE(1,0,0)
#define OPCODE_MUL    OPCODE(2,0,0)
#define OPCODE_DIV    OPCODE(3,0,0)
#define OPCODE_MOD    OPCODE(4,0,0)
#define OPCODE_MOVE   OPCODE(5,0,0)
#define OPCODE_CMP    OPCODE(6,0,0)
#define OPCODE_NEG    OPCODE(7,0,0)
#define OPCODE_ABS    OPCODE(8,0,0)
#define OPCODE_ADDI   OPCODE(9,0,0)
#define OPCODE_SUBI   OPCODE(9,1,0)
#define OPCODE_MULI   OPCODE(9,2,0)
#define OPCODE_DIVI   OPCODE(9,3,0)
#define OPCODE_MODI   OPCODE(9,4,0)
#define OPCODE_LOADI  OPCODE(9,5,0)
#define OPCODE_CMPI   OPCODE(9,6,0)
#define OPCODE_SEQ    OPCODE(10,0,0)
#define OPCODE_SNE    OPCODE(10,1,0)
#define OPCODE_SLT    OPCODE(10,2,0)
#define OPCODE_SLE    OPCODE(10,3,0)
#define OPCODE_SGT    OPCODE(10,4,0)
#define OPCODE_SGE    OPCODE(10,5,0)
#define OPCODE_TEQ    OPCODE(10,6,0)
#define OPCODE_TNE    OPCODE(10,7,0)
#define OPCODE_LOAD   OPCODE(11,0,0)
#define OPCODE_STORE  OPCODE(12,0,0)
#define OPCODE_BEQ    OPCODE(13,0,0)
#define OPCODE_BNE    OPCODE(13,1,0)
#define OPCODE_BLT    OPCODE(13,2,0)
#define OPCODE_BLE    OPCODE(13,3,0)
#define OPCODE_BGT    OPCODE(13,4,0)
#define OPCODE_BGE    OPCODE(13,5,0)
#define OPCODE_XEQ    OPCODE(14,0,0)
#define OPCODE_XNE    OPCODE(14,1,0)
#define OPCODE_XLT    OPCODE(14,2,0)
#define OPCODE_XLE    OPCODE(14,3,0)
#define OPCODE_XGT    OPCODE(14,4,0)
#define OPCODE_XGE    OPCODE(14,5,0)
#define OPCODE_XDZ    OPCODE(14,6,0)
// #define OPCODE_XINF   OPCODE(14,7,0)
#define OPCODE_JSR    OPCODE(15,0,0)
#define OPCODE_JMP    OPCODE(15,0,1)
#define OPCODE_RTS    OPCODE(15,0,2)
#define OPCODE_CALL   OPCODE(15,0,3)
#define OPCODE_SYS1   OPCODE(15,0,4)
#define OPCODE_SYS2   OPCODE(15,0,5)
#define OPCODE_TRAP   OPCODE(15,0,6)
#define OPCODE_TRAPS  OPCODE(15,0,7)
#define OPCODE_GROW   OPCODE(15,1,0)
#define OPCODE_PUSH   OPCODE(15,1,1)
#define OPCODE_POP    OPCODE(15,1,2)
#define OPCODE_DEBUG  OPCODE(15,1,5)
#define OPCODE_NOP    OPCODE(15,3,7)

extern const Opcode POVFPU_Opcodes[];

extern const Sys1 POVFPU_Sys1Table[];
extern const Sys2 POVFPU_Sys2Table[];

extern const unsigned int POVFPU_Sys1TableSize;
extern const unsigned int POVFPU_Sys2TableSize;

extern DBL *POVFPU_Globals;
extern DBL *POVFPU_Consts;
extern unsigned int POVFPU_GlobalCnt;
extern unsigned int POVFPU_ConstCnt;

extern FunctionEntry *POVFPU_Functions;
extern unsigned int POVFPU_FunctionCnt;

extern FPUContext *POVFPU_Current_Context;

void POVFPU_Init();
void POVFPU_Terminate();
void POVFPU_Reset();
void POVFPU_SetLocal(unsigned int k, DBL v);
DBL POVFPU_GetLocal(unsigned int k);
void POVFPU_SetGlobal(unsigned int k, DBL v);
DBL POVFPU_GetGlobal(unsigned int k);
FunctionCode *POVFPU_GetFunction(FUNCTION k);
FunctionCode *POVFPU_GetFunctionAndReference(FUNCTION k);
unsigned int POVFPU_AddConstant(DBL v);
FUNCTION POVFPU_AddFunction(FunctionCode *f);
void POVFPU_RemoveFunction(FUNCTION fn);
void POVFPU_Exception(FUNCTION fn, const char *msg = NULL);
FPUContext *POVFPU_NewContext();
FPUContext *POVFPU_SwitchContext(FPUContext *context);
DBL POVFPU_RunDefault(FUNCTION k);

END_POV_NAMESPACE

#endif
