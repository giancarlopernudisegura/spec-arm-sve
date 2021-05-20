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

void svprint(svbool_t pg, long index, long max, svuint64_t data) {
  uint64_t buffer[2048];
  svst1_u64(pg, buffer, data);
  long diff = max - index;
  for (uint8_t i = 0; i < svcntd() && i <= diff; i++)
  {
    printf("element:\t0x%08X\n", buffer[i]);
  }
}

#ifdef _PROTO_
LONG read_min(network_t *net)
#else
LONG read_min(net)
    network_t *net;
#endif
{
  FILE *in = NULL;
  char instring[201];
  LONG t, h, c;
  LONG i, actArc = 0;
  arc_t *arc;
  node_t *node;

  if ((in = fopen(net->inputfile, "r")) == NULL)
    return -1;

  fgets(instring, 200, in);
#ifdef SPEC
  if (sscanf(instring, "%" PRId64 " %" PRId64, &t, &h) != 2)
#else
  if (sscanf(instring, "%ld %ld", &t, &h) != 2)
#endif
    return -1;

  net->n_trips = t;
  net->m_org = h;
  net->n = (t + t + 1);
  net->m = (t + t + t + h);

  net->max_elems = K;
  net->nr_group = ((net->m - 1) / K) + 1;
  if (net->m % K != 0)
    net->full_groups = net->nr_group - (K - (net->m % K));
  else
    net->full_groups = net->nr_group;
  while (net->full_groups < 0)
  {
    net->full_groups = net->nr_group + net->full_groups;
    net->max_elems--;
  }

  if (net->n_trips <= MAX_NB_TRIPS_FOR_SMALL_NET)
  {
    net->max_m = net->m;
    net->max_new_m = MAX_NEW_ARCS_SMALL_NET;
    net->max_residual_new_m = net->max_m - net->m;
  }
  else
  {
    net->max_m = MAX(net->m + MAX_NEW_ARCS, STRECHT(STRECHT(net->m)));
    net->max_new_m = MAX_NEW_ARCS_LARGE_NET;
  }

  assert(net->max_new_m >= 3);

  net->nodes = (node_t *)calloc(net->n + 1, sizeof(node_t));
  net->dummy_arcs = (arc_t *)calloc(net->n, sizeof(arc_t));
  net->sorted_arcs = (arc_t *)calloc(net->max_m, sizeof(arc_t));
  net->arcs = (arc_t *)calloc(net->max_m, sizeof(arc_t));

  if (!(net->nodes && net->arcs && net->dummy_arcs && net->sorted_arcs))
  {
    printf("read_min(): not enough memory\n");
    getfree(net);
    return -1;
  }

#if defined AT_HOME
  printf("malloc for nodes         MB %4ld\n",
         (LONG)((net->n + 1) * sizeof(node_t) / 0x100000));
  printf("malloc for dummy arcs    MB %4ld\n",
         (LONG)((net->n) * sizeof(arc_t) / 0x100000));
  printf("malloc for arcs          MB %4ld\n",
         (LONG)((net->max_m) * sizeof(arc_t) / 0x100000));
  printf("malloc for sorting array MB %4ld\n",
         (LONG)((net->max_m) * sizeof(arc_t) / 0x100000));
  printf("--------------------------------\n");
  printf("heap about               MB %4ld\n\n",
         (LONG)((net->n + 1) * sizeof(node_t) / 0x100000) + (LONG)((net->n) * sizeof(arc_t) / 0x100000) + 2 * (LONG)((net->max_m) * sizeof(arc_t) / 0x100000));
#endif

  net->stop_nodes = net->nodes + net->n + 1;
  net->stop_arcs = net->arcs + net->m;
  net->stop_dummy = net->dummy_arcs + net->n;

  node = net->nodes;
  arc = net->arcs;

  for (i = 1; i <= net->n_trips; i++)
  {
    fgets(instring, 200, in);
#ifdef SPEC
    if (sscanf(instring, "%" PRId64 " %" PRId64, &t, &h) != 2 || t > h)
#else
    if (sscanf(instring, "%ld %ld", &t, &h) != 2 || t > h)
#endif
      return -1;

    node[i].number = -i;
    node[i].flow = (flow_t)-1;

    node[i + net->n_trips].number = i;
    node[i + net->n_trips].flow = (flow_t)1;

    node[i].time = t;
    node[i + net->n_trips].time = h;

    arc->id = actArc;
    arc->tail = &(node[net->n]);
    arc->head = &(node[i]);
    arc->org_cost = arc->cost = (cost_t)(net->bigM + 15);
    arc->nextout = arc->tail->firstout;
    arc->tail->firstout = arc;
    arc->nextin = arc->head->firstin;
    arc->head->firstin = arc;
    arc = net->arcs + getArcPosition(net, ++actArc);

    arc->id = actArc;
    arc->tail = &(node[i + net->n_trips]);
    arc->head = &(node[net->n]);
    arc->org_cost = arc->cost = (cost_t)15;
    arc->nextout = arc->tail->firstout;
    arc->tail->firstout = arc;
    arc->nextin = arc->head->firstin;
    arc->head->firstin = arc;
    arc = net->arcs + getArcPosition(net, ++actArc);

    arc->id = actArc;
    arc->tail = &(node[i]);
    arc->head = &(node[i + net->n_trips]);
    arc->org_cost = arc->cost = (cost_t)(2 * MAX(net->bigM, (LONG)BIGM));
    arc->nextout = arc->tail->firstout;
    arc->tail->firstout = arc;
    arc->nextin = arc->head->firstin;
    arc->head->firstin = arc;
    arc = net->arcs + getArcPosition(net, ++actArc);
  }

  if (i != net->n_trips + 1)
    return -1;

  for (i = 0; i < net->m_org; i++, arc = net->arcs + getArcPosition(net, ++actArc))
  {
    fgets(instring, 200, in);

#ifdef SPEC
    if (sscanf(instring, "%" PRId64 " %" PRId64 " %" PRId64, &t, &h, &c) != 3)
#else
    if (sscanf(instring, "%ld %ld %ld", &t, &h, &c) != 3)
#endif
      return -1;

    arc->id = actArc;
    arc->tail = &(node[t + net->n_trips]);
    arc->head = &(node[h]);
    arc->org_cost = (cost_t)c;
    arc->cost = (cost_t)c;
    arc->nextout = arc->tail->firstout;
    arc->tail->firstout = arc;
    arc->nextin = arc->head->firstin;
    arc->head->firstin = arc;
  }
  arc = net->stop_arcs;

  if (net->stop_arcs != arc)
  {
    net->stop_arcs = arc;
    arc = net->arcs;
    for (net->m = 0; arc < net->stop_arcs; arc++)
      (net->m)++;
    net->m_org = net->m;
  }

  fclose(in);

#ifdef DEBUG
  arc = net->arcs;
  for (i = 0; i < net->m; i++)
  {
    if (!arc->head)
    {
      printf("arc :%d is NULL\n", i);
    }
    arc++;
  }
#endif

  net->clustfile[0] = (char)0;
  i = 1;
  svbool_t pg = svwhilele_b64_s64(i, net->n_trips);
  while (svptest_first(pg, pg))
  {
    svuint64_t result, akt_group;
    svuint64_t _actArc_i = svindex_u64(i, 1);
    // 3 * i - 1
    svuint64_t _actArc = svsub_n_u64_m(pg, svmul_n_u64_m(pg, _actArc_i, 3), 1);
    svuint64_t sv_arc_div_nr = svdiv_n_u64_m(pg, _actArc, net->nr_group);
    akt_group = svmul_n_u64_m(pg, sv_arc_div_nr, net->nr_group);
    akt_group = svsub_u64_m(pg, _actArc, akt_group);
    svbool_t pg_if = svcmpgt_n_u64(pg, akt_group, net->full_groups);
    svbool_t pg_else = svnot_z(pg, pg_if);
    result = sv_arc_div_nr;
    // pg_if
    svuint64_t sv_if = svsub_n_u64_m(pg_if, akt_group, net->full_groups);
    sv_if = svmad_n_u64_m(pg_if, sv_if,
      svdup_u64(net->max_elems - 1),
      net->full_groups * net->max_elems);
    result = svadd_u64_m(pg_if, result, sv_if);
    // pg_else
    svuint64_t sv_else = svmul_n_u64_m(pg_else, akt_group, net->max_elems);
    result = svadd_u64_m(pg_else, result, sv_else);
    result = svmul_n_u64_m(pg, result, sizeof(struct arc));

    unsigned long p = net->arcs;
    svuint64_t sv_arc = svadd_n_u64_m(pg, result, p);
    uint64_t cost_offset = offsetof(struct arc, cost);
    uint64_t org_cost_offset = offsetof(struct arc, org_cost);
    svuint64_t max = svdup_n_u64((cost_t)((-2) * (MAX(net->bigM, (LONG)BIGM))));
    svuint64_t sv_cost     = svadd_n_u64_m(pg, sv_arc, cost_offset),
               sv_org_cost = svadd_n_u64_m(pg, sv_arc, org_cost_offset);
    // svprint(pg, i, net->n_trips, result);
    svst1_scatter_u64base_u64(pg, sv_cost, max);
    svst1_scatter_u64base_u64(pg, sv_org_cost, max);
    i += svcntd();
    pg = svwhilele_b64_s64(i, net->n_trips);
  }

  return 0;
}
