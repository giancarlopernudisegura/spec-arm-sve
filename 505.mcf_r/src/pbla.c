/**************************************************************************
PBLA.C of ZIB optimizer MCF, SPEC version

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
/*  LAST EDIT: Tue May 25 23:47:25 2010 by Loebel (opt0.zib.de)  */
/*  $Id: pbla.c,v 1.11 2010/05/25 21:58:44 bzfloebe Exp $  */



#include "pbla.h"



#define TEST_MIN( nod, ex, comp, op ) \
{ \
      if( *delta op (comp) ) \
      { \
            iminus = nod; \
            *delta = (comp); \
            *xchange = ex; \
      } \
}


#ifdef _PROTO_
node_t *primal_iminus( 
                      flow_t *delta,
                      LONG *xchange,
                      node_t *iplus, 
                      node_t*jplus,
                      node_t **w
                    )
#else
node_t *primal_iminus( delta, xchange, iplus, jplus, w )
    flow_t *delta;
    LONG *xchange;
    node_t *iplus, *jplus;
    node_t **w;
#endif
{
    node_t *iminus = NULL;
    

    while( iplus != jplus )
    {
        if( iplus->depth < jplus->depth )
        {
            if( iplus->orientation )
                TEST_MIN( iplus, 0, iplus->flow, > )
            else if( iplus->pred->pred )
                TEST_MIN( iplus, 0, (flow_t)1 - iplus->flow, > )
            iplus = iplus->pred;
        }
        else
        {
            if( !jplus->orientation )
                TEST_MIN( jplus, 1, jplus->flow, >= )
            else if( jplus->pred->pred )
                TEST_MIN( jplus, 1, (flow_t)1 - jplus->flow, >= )
            jplus = jplus->pred;
        }
    } 

    *w = iplus;

    return iminus;
}
