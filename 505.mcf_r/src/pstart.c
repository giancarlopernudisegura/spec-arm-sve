/**************************************************************************
PSTART.C of ZIB optimizer MCF, SPEC version

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
/*  LAST EDIT: Tue May 25 23:48:03 2010 by Loebel (opt0.zib.de)  */
/*  $Id: pstart.c,v 1.11 2010/05/25 21:58:44 bzfloebe Exp $  */



#include "pstart.h"




#ifdef _PROTO_ 
LONG primal_start_artificial( network_t *net )
#else
LONG primal_start_artificial( net )
    network_t *net;
#endif
{      
    node_t *node, *root;
    arc_t *arc;
    int i;

    root = node = net->nodes; node++;
    root->basic_arc = NULL;
    root->pred = NULL;
    root->child = node;
    root->sibling = NULL;
    root->sibling_prev = NULL;
    root->depth = (net->n) + 1;
    root->orientation = 0;
    root->potential = (cost_t) -MAX_ART_COST;
    root->flow = ZERO;

    arc = net->arcs;
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
#pragma omp parallel for
#endif
    for( i = 0; i < net->m; i++ )
        if( arc[i].ident != FIXED )
            arc[i].ident = AT_LOWER;

    arc = net->dummy_arcs;
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
#pragma omp parallel for
#endif
    for ( i = 0; i < net->n ; i++)
    {

        node[i].basic_arc = &arc[i];
        node[i].pred = root;
        node[i].child = NULL;
        node[i].sibling = &node[i + 1];
        node[i].sibling_prev = &node[i - 1];
        node[i].depth = 1;

        arc[i].cost = (cost_t) MAX_ART_COST;
        arc[i].ident = BASIC;

        node[i].orientation = UP;
        node[i].potential = ZERO;
        arc[i].tail = &node[i];
        arc[i].head = root;
        arc[i].id = DUMMY_ARC;
        node[i].flow = (flow_t)0;

    }

    node--;
    root++;
    node[net->n].sibling = NULL;
    root->sibling_prev = NULL;

    return 0;
}
