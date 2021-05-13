/**************************************************************************
OUTPUT.H of ZIB optimizer MCF, SPEC version

Dres. Loebel, Borndoerfer & Weider GbR (LBW)
Churer Zeile 15, 12205 Berlin

Konrad-Zuse-Zentrum fuer Informationstechnik Berlin (ZIB)
Scientific Computing - Optimization
Takustr. 7, 14195 Berlin

This software was developed at ZIB Berlin. Maintenance and revisions 
solely on responsibility of LBW

Copyright (c) 1998-2000 ZIB.           
Copyright (c) 2000-2002 ZIB & Loebel.  
Copyright (c) 2003-2005 Loebel.
Copyright (c) 2006-2010 LBW.
**************************************************************************/
/*  LAST EDIT: Wed May 26 00:04:21 2010 by Loebel (opt0.zib.de)  */
/*  $Id: output.h,v 1.12 2010/05/26 08:26:29 bzfloebe Exp $  */



#ifndef _OUTPUT_H
#define _OUTPUT_H


#include "mcfutil.h"


extern LONG write_circulations _PROTO_(( char *, network_t * ));
extern LONG write_objective_value _PROTO_(( char *, network_t * ));


#endif
