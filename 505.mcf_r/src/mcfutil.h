/**************************************************************************
MCFUTIL.H of ZIB optimizer MCF, SPEC version

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
/*  LAST EDIT: Tue May 25 23:46:59 2010 by Loebel (opt0.zib.de)  */
/*  $Id: mcfutil.h,v 1.11 2010/05/25 21:58:44 bzfloebe Exp $  */



#ifndef _MCFUTIL_H
#define _MCFUTIL_H


#include "defines.h"


extern void refresh_neighbour_lists _PROTO_(( network_t *, LONG (*)(network_t*, LONG) ));
extern double flow_cost _PROTO_(( network_t * ));
extern double flow_org_cost _PROTO_(( network_t * ));
extern LONG primal_feasible _PROTO_(( network_t * ));
extern LONG dual_feasible _PROTO_(( network_t * ));
extern LONG getfree _PROTO_(( network_t * ));
extern LONG getArcPosition  _PROTO_((network_t *, LONG));
extern LONG getOriginalArcPosition _PROTO_((network_t *, LONG));


#endif
