/**************************************************************************
MCFLIMIT.H of ZIB optimizer MCF, SPEC version

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
/*  LAST EDIT: Tue May 25 23:46:49 2010 by Loebel (opt0.zib.de)  */
/*  $Id: mcflimit.h,v 1.13 2010/05/25 21:58:44 bzfloebe Exp $  */


#ifndef _MCF_LIMITS_H
#define _MCF_LIMITS_H
#include "defines.h"

#define BIGM 1.0e7
#define STRECHT(x) ((LONG)(1.25 * (double)(x)))

#define MAX_NB_TRIPS_FOR_SMALL_NET 15000

#if defined(SPEC)
#define MAX_NEW_ARCS_SMALL_NET 2000000
#else
#define MAX_NEW_ARCS_SMALL_NET 5000000
#endif
#define MAX_NEW_ARCS_LARGE_NET 28900000
#define MAX_NEW_ARCS_PUFFER_LARGE_NET 4000000
#define MAX_NEW_ARCS_PUFFER_SMALL_NET 1000000

#define MAX_NB_ITERATIONS_SMALL_NET  5
#define MAX_NB_ITERATIONS_LARGE_NET  5

#define MAX_NEW_ARCS 5000000 

#endif
