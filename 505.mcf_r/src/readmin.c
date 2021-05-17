/**************************************************************************
READMIN.C of ZIB optimizer MCF, SPEC version

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
/*  LAST EDIT: Tue May 25 23:48:16 2010 by Loebel (opt0.zib.de)  */
/*  $Id: readmin.c,v 1.17 2010/05/25 21:58:44 bzfloebe Exp $  */



#include "readmin.h"

#include <stdint.h>
void svprint(svbool_t pg, svuint64_t data) {
  uint64_t buffer[2048];
  svst1_u64(pg, buffer, data);
  for (uint8_t i = 0; i < svcntd(); i++) {
    printf("element:\t%d\n", buffer[i]);
  }
}

#ifdef _PROTO_
LONG read_min( network_t *net )
#else
LONG read_min( net )
     network_t *net;
#endif
{                                       
    printf("test\n");
    FILE *in = NULL;
    char instring[201];
    LONG t, h, c;
    LONG i ,actArc = 0;
    arc_t *arc;
    node_t *node;


    if(( in = fopen( net->inputfile, "r")) == NULL )
        return -1;

    fgets( instring, 200, in );
#ifdef SPEC
    if( sscanf( instring, "%" PRId64 " %" PRId64 , &t, &h ) != 2 )
#else
    if( sscanf( instring, "%ld %ld", &t, &h ) != 2 )
#endif
        return -1;
    

    net->n_trips = t;
    net->m_org = h;
    net->n = (t+t+1); 
    net->m = (t+t+t+h);

    net->max_elems = K;
    net->nr_group = ( (net->m -1) / K ) + 1;
    if (net->m % K != 0)
        net->full_groups = net->nr_group - (K - (net->m % K));
    else
    	net->full_groups = net->nr_group;
  while (net->full_groups < 0) {
    net->full_groups = net->nr_group + net->full_groups;
    net->max_elems--;
  }

    if( net->n_trips <= MAX_NB_TRIPS_FOR_SMALL_NET )
    {
      net->max_m = net->m;
      net->max_new_m = MAX_NEW_ARCS_SMALL_NET;
      net->max_residual_new_m = net->max_m - net->m;

    }
    else
    {
      net->max_m = MAX( net->m + MAX_NEW_ARCS, STRECHT(STRECHT(net->m)) );
      net->max_new_m = MAX_NEW_ARCS_LARGE_NET;
    }



    assert( net->max_new_m >= 3 );

    
    net->nodes      = (node_t *) calloc( net->n + 1, sizeof(node_t) );
    net->dummy_arcs = (arc_t *)  calloc( net->n,   sizeof(arc_t) );
    net->sorted_arcs  = (arc_t *)  calloc( net->max_m,   sizeof(arc_t) );
    net->arcs       = (arc_t *)  calloc( net->max_m,   sizeof(arc_t) );

    if( !( net->nodes && net->arcs && net->dummy_arcs && net->sorted_arcs) )
    {
      printf( "read_min(): not enough memory\n" );
      getfree( net );
      return -1;
    }


#if defined AT_HOME
    printf( "malloc for nodes         MB %4ld\n",
            (LONG)((net->n + 1)*sizeof(node_t) / 0x100000) );
    printf( "malloc for dummy arcs    MB %4ld\n",
            (LONG)((net->n)*sizeof(arc_t) / 0x100000) );
    printf( "malloc for arcs          MB %4ld\n",
            (LONG)((net->max_m)*sizeof(arc_t) / 0x100000) );
    printf( "malloc for sorting array MB %4ld\n",
            (LONG)((net->max_m)*sizeof(arc_t) / 0x100000) );
    printf( "--------------------------------\n" );
    printf( "heap about               MB %4ld\n\n",
            (LONG)((net->n +1)*sizeof(node_t) / 0x100000)
            +(LONG)((net->n)*sizeof(arc_t) / 0x100000)
            + 2 * (LONG)((net->max_m)*sizeof(arc_t) / 0x100000)
            );
#endif


    net->stop_nodes = net->nodes + net->n + 1; 
    net->stop_arcs  = net->arcs + net->m;
    net->stop_dummy = net->dummy_arcs + net->n;



    node = net->nodes;
    arc = net->arcs;

    for( i = 1; i <= net->n_trips; i++ )
    {
        fgets( instring, 200, in );
#ifdef SPEC
        if( sscanf( instring, "%" PRId64 " %" PRId64 , &t, &h ) != 2 || t > h )
#else
        if( sscanf( instring, "%ld %ld", &t, &h ) != 2 || t > h )
#endif
            return -1;

        node[i].number = -i;
        node[i].flow = (flow_t)-1;
            
        node[i+net->n_trips].number = i;
        node[i+net->n_trips].flow = (flow_t)1;
        
        node[i].time = t;
        node[i+net->n_trips].time = h;

        arc->id = actArc;
        arc->tail = &(node[net->n]);
        arc->head = &(node[i]);
        arc->org_cost = arc->cost = (cost_t)(net->bigM+15);
        arc->nextout = arc->tail->firstout;
        arc->tail->firstout = arc;
        arc->nextin = arc->head->firstin;
        arc->head->firstin = arc;
        arc = net->arcs + getArcPosition(net, ++actArc);
                                    
        arc->id = actArc;
        arc->tail = &(node[i+net->n_trips]);
        arc->head = &(node[net->n]);
        arc->org_cost = arc->cost = (cost_t)15;
        arc->nextout = arc->tail->firstout;
        arc->tail->firstout = arc;
        arc->nextin = arc->head->firstin;
        arc->head->firstin = arc; 
        arc = net->arcs + getArcPosition(net, ++actArc);

        arc->id = actArc;
        arc->tail = &(node[i]);
        arc->head = &(node[i+net->n_trips]);
        arc->org_cost = arc->cost = (cost_t)(2*MAX(net->bigM,(LONG)BIGM));
        arc->nextout = arc->tail->firstout;
        arc->tail->firstout = arc;
        arc->nextin = arc->head->firstin;
        arc->head->firstin = arc;
        arc = net->arcs + getArcPosition(net, ++actArc);
    }
    
    if( i != net->n_trips + 1 )
        return -1;


    for( i = 0; i < net->m_org; i++, arc = net->arcs + getArcPosition(net, ++actArc))
    {
        fgets( instring, 200, in );
       
#ifdef SPEC 
        if( sscanf( instring, "%" PRId64 " %" PRId64 " %" PRId64 , &t, &h, &c ) != 3 )
#else
        if( sscanf( instring, "%ld %ld %ld", &t, &h, &c ) != 3 )
#endif
                return -1;

        arc->id = actArc;
        arc->tail = &(node[t+net->n_trips]);
        arc->head = &(node[h]);
        arc->org_cost = (cost_t)c;
        arc->cost = (cost_t)c;
        arc->nextout = arc->tail->firstout;
        arc->tail->firstout = arc;
        arc->nextin = arc->head->firstin;
        arc->head->firstin = arc; 
    }
    arc = net->stop_arcs;

    if( net->stop_arcs != arc )
    {
        net->stop_arcs = arc;
        arc = net->arcs;
        for( net->m = 0; arc < net->stop_arcs; arc++ )
            (net->m)++;
        net->m_org = net->m;
    }
    
    fclose( in );

#ifdef DEBUG
    arc = net->arcs;
    for (i = 0; i< net->m; i++) {
      if (!arc->head) {
          printf("arc :%d is NULL\n", i);
      }
      arc++;
    }
#endif

    net->clustfile[0] = (char)0;
    i = 1;
    svbool_t pg = svwhilele_b64_s64(i, net->n_trips);
    printf("before loop\n");
    while (svptest_first(pg, pg))
    {
      svuint64_t _actArc = svdup_u64(3 * i - 1);
      svuint64_t result, akt_group;
      // have to implement modulo myself, arm sve does not have an instruction for it
      // a % n := a - n * floor(a/n)
      // a := _actArc
      // n := net->nr_group
      svuint64_t arc_div_nr_group = svdiv_n_u64_z(pg, _actArc, net->nr_group);
      akt_group = svsub_u64_z(pg, _actArc,
        // n * floor(a/n)
        svmul_n_u64_z(pg, arc_div_nr_group, net->nr_group));
      svbool_t pg_if = svcmpgt_n_u64(pg, akt_group, net->full_groups);
      // (!pg_if) & pg
      svbool_t pg_else = svnot_z(pg, pg_if);
      result = arc_div_nr_group;
      // if (akt_group > net->full_groups)
      long full_group_mul_max_elems = net->full_groups * net->max_elems;
      long max_elem_sub_1 = (net->max_elems - 1);
      // result += (full_group_mul_max_elems + (akt_group - net->full_groups) * max_elem_sub_1);
      result = svadd_u64_m(pg_if, result,
        svmad_n_u64_z(pg_if, svdup_u64(max_elem_sub_1),
          svsub_n_u64_z(pg_if, akt_group, net->full_groups),
          full_group_mul_max_elems));
      // else
      // result += (akt_group * net->max_elems);
      result = svadd_u64_m(pg_else, result, svmul_n_u64_z(pg_else, akt_group, net->max_elems));
      svuint64_t sv_arc = svadd_n_u64_z(pg, result, net->arcs);
      svuint64_t arc_cost_ptrs = svadd_n_u64_z(pg,
        sv_arc,
        offsetof(arc_t, cost));
      svuint64_t arc_org_cost_ptrs = svadd_n_u64_z(pg,
        sv_arc,
        offsetof(arc_t, org_cost));
      svprint(pg, sv_arc);
      cost_t m = (cost_t)((-2) * (MAX(net->bigM, (LONG)BIGM)));
      svuint64_t sv_max = svdup_u64(m);
      svst1_scatter_u64base_u64(pg, arc_cost_ptrs, sv_max);
      svst1_scatter_u64base_u64(pg, arc_org_cost_ptrs, sv_max);
      i += svcntd();
      pg = svwhilele_b64_u64(i, net->n_trips);
    }

    return 0;
}
