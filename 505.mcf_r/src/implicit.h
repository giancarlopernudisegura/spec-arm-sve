/**************************************************************************
IMPLICIT.H of ZIB optimizer MCF, SPEC version

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
/*  LAST EDIT: Tue May 25 23:46:35 2010 by Loebel (opt0.zib.de)  */
/*  $Id: implicit.h,v 1.12 2010/05/25 21:58:44 bzfloebe Exp $  */


#ifndef _IMPLICIT_H
#define _IMPLICIT_H


#include "mcfutil.h"
#include "mcflimit.h"

extern LONG refreshPositions  _PROTO_(( network_t *, LONG (*)(network_t*, LONG), LONG));
extern LONG price_out_impl _PROTO_(( network_t * ));
extern LONG suspend_impl _PROTO_(( network_t *, cost_t, LONG ));


#endif
