/**************************************************************************
PSIMPLEX.C of ZIB optimizer MCF, SPEC version

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
/*  LAST EDIT: Tue May 25 23:47:54 2010 by Loebel (opt0.zib.de)  */
/*  $Id: psimplex.c,v 1.10 2010/05/25 21:58:44 bzfloebe Exp $  */



#undef DEBUG

#include "psimplex.h"

static double runtime = 0;
static BASKET    **opt_basket;
static BASKET    ***perm_p;
static LONG      *basket_sizes;
static LONG      opt = 0;
static BASKET    *basket;

#ifdef _PROTO_
void markBaskets(LONG num_threads)
#else
void markBaskets(num_threads)
LONG num_threads;
#endif
{
    LONG  i, j, max_pos = 0;
    BASKET* max, *act;

    for ( i=1; i<=B; i++) {
      if ((*perm_p[0])->number >= 0) {
          max = (*perm_p[0]);
          max_pos = 0;
      }
      else {
        max = 0;
      }
        for (j = 1; j < num_threads; j++) {
          act = *perm_p[j];
          if (act->number >= 0) {
                if (!max || cost_compare(&act, &max) < 0) {
                    max = act;
                    max_pos = j;
                }
          }
        }

      if (!max) {
        return;
      }

        max->number = i;
        (perm_p[max_pos])++;
    }
}

#if defined AT_HOME
#include <sys/time.h>
double Get_Time2( void  )
{
    struct timeval tp;
    struct timezone tzp;
    if( gettimeofday( &tp, &tzp ) == 0 )
        return (double)(tp.tv_sec) + (double)(tp.tv_usec)/1.0e6;
    else
        return 0.0;
}
#endif


#ifdef _PROTO_
void worker(network_t *net, int thread, int num_threads)
#else
void worker(net, thread)
network_t *net;
int thread;
#endif
{

  arc_t         *arcs          = net->arcs;
  arc_t         *stop_arcs     = net->stop_arcs;
  LONG          m = net->m;
  LONG          *iterations = &(net->iterations);
  BASKET        *perm[K + B +1];
  arc_t         *end_arc = net->arcs;
  LONG          i, j;

  basket_sizes[thread] = 0;
  for( j = thread * (K/num_threads+B+1 + PUFFER) + 1, i=1; i < K/num_threads+B+1; i++, j++)
    perm[i] = &(basket[j]);

  while (!opt) {
    opt_basket[thread] = primal_bea_mpp( m, arcs, stop_arcs, basket_sizes, perm, thread, &end_arc, (*iterations + thread) % num_threads, num_threads, net->max_elems);
    perm_p[thread] = perm + 1;
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
    #pragma omp barrier
#endif
    if (thread == 1)
      markBaskets(num_threads);
    // master must do some work here
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
    #pragma omp barrier
#endif
  }

}

#ifdef _PROTO_
void master(network_t *net, int num_threads)
#else
void master(net)
network_t *net;
#endif

{

  flow_t        delta;
  flow_t        new_flow;
  LONG          xchange;
  LONG          new_orientation;
  node_t        *iplus;
  node_t        *jplus;
  node_t        *iminus;
  node_t        *jminus;
  node_t        *w;
  arc_t         *bea;
  arc_t         *bla;
  arc_t         *arcs          = net->arcs;
  arc_t         *stop_arcs     = net->stop_arcs;
  node_t        *temp;
  LONG          m = net->m;
  LONG          new_set;
  cost_t        red_cost_of_bea;
  LONG          *iterations = &(net->iterations);
  LONG          *bound_exchanges = &(net->bound_exchanges);
  BASKET*       max_basket;
  BASKET        *perm[K + B +1];
  arc_t         *end_arc = net->arcs;
  LONG         i, j;

#if defined AT_HOME
  double time1 = 0, start;
    double startTime, endTime;
    startTime = Get_Time2();
#endif

  basket_sizes[0] = 0;
  for( j = 1, i=1; i < K/num_threads+B+1; i++, j ++ )
    perm[i] = &(basket[j]);
#if defined AT_HOME
    start = Get_Time2();
#endif

  while( !opt )
  {

#if defined AT_HOME
    time1 += Get_Time2() - start;
#endif

    opt_basket[0] = primal_bea_mpp( m, arcs, stop_arcs, basket_sizes, perm, 0, &end_arc, (*iterations) % num_threads, num_threads, net->max_elems);

#if defined AT_HOME
    start = Get_Time2();
#endif

    perm_p[0] =  perm + 1;
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
    #pragma omp barrier
#endif

    max_basket = 0;
    for (i = 0; i< num_threads; i++) {
      if ((!max_basket && opt_basket[i]) || (opt_basket[i] && cost_compare(&opt_basket[i], &max_basket) < 0)) {
        max_basket = opt_basket[i];
      }
    }
    if( !max_basket )
    {
      red_cost_of_bea = 0;
    }
    else {
      red_cost_of_bea = max_basket->cost;
      bea = max_basket->a;

      if (num_threads == 1)
          markBaskets(num_threads);
    }


    if( red_cost_of_bea != 0)
    {
      (*iterations)++;
      //printf("it %d\n", *iterations);

#ifdef DEBUG
      printf( "it %ld: bea = (%ld,%ld), red_cost = %ld\n",
          *iterations, bea->tail->number, bea->head->number,
          red_cost_of_bea );
#endif
      if( red_cost_of_bea > ZERO )
      {
        iplus = bea->head;
        jplus = bea->tail;
      }
      else
      {
        iplus = bea->tail;
        jplus = bea->head;
      }

      delta = (flow_t)1;
      iminus = primal_iminus( &delta, &xchange, iplus,
          jplus, &w );

      if( !iminus )
      {
        (*bound_exchanges)++;

        if( bea->ident == AT_UPPER)
          bea->ident = AT_LOWER;
        else
          bea->ident = AT_UPPER;

        if( delta )
          primal_update_flow( iplus, jplus, w );
      }
      else
      {
        if( xchange )
        {
          temp = jplus;
          jplus = iplus;
          iplus = temp;
        }

        jminus = iminus->pred;

        bla = iminus->basic_arc;

        if( xchange != iminus->orientation )
          new_set = AT_LOWER;
        else
          new_set = AT_UPPER;

        if( red_cost_of_bea > 0 )
          new_flow = (flow_t)1 - delta;
        else
          new_flow = delta;

        if( bea->tail == iplus )
          new_orientation = UP;
        else
          new_orientation = DOWN;

        update_tree( !xchange, new_orientation,
            delta, new_flow, iplus, jplus, iminus,
            jminus, w, bea, red_cost_of_bea,
            (flow_t)net->feas_tol );

        bea->ident = BASIC;
        bla->ident = new_set;
      }
    }
    else
      opt = 1;


#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
    #pragma omp barrier
#endif
  }

#if defined AT_HOME
    endTime = Get_Time2();
    runtime += endTime - startTime;
    printf("runtime simplex            : %.2f sec\n", endTime - startTime);
    printf("runtime master thread      : %.2f sec\n", time1);
    printf("runtime global simplex     : %.2f sec\n", runtime);
#endif

}

#ifdef _PROTO_
LONG primal_net_simplex( network_t *net )
#else
LONG primal_net_simplex(  net )
    network_t *net;
#endif
{

   int thread;
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
   int num_threads = omp_get_max_threads();
#else
  int num_threads = 1;
#endif
    perm_p = (BASKET***)   calloc(num_threads, sizeof(BASKET**));
    opt_basket = (BASKET**) calloc(num_threads, sizeof(BASKET*));
    basket_sizes = (LONG*) calloc(num_threads, sizeof(LONG));
    basket = (BASKET*) calloc(num_threads * (K/num_threads + B + PUFFER + 1), sizeof(BASKET));

  set_static_vars(net, net->arcs);


#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
#pragma omp parallel shared(net, num_threads)  private(thread)  default(none)
#endif
  {

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
  thread = omp_get_thread_num();
#else
  thread = 0;
#endif  
      if (thread == 0)
        master(net, num_threads);
      else
        worker(net, thread, num_threads);
  }

    primal_feasible( net );
    dual_feasible( net );

    opt = 0;

    free(perm_p);
    free(opt_basket);
    free(basket_sizes);
    free(basket);


    return 0;
}


