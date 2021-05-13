
#define MOD_9707

#ifndef MS_SUA
# include <stdio.h>
#endif
#include <stdlib.h>
#ifndef STUBMPI
#  include "mpi.h"
#endif
#include "rsl_lite.h"

/* parent->nest */
void
RSL_LITE_TO_CHILD_INFO ( Fcomm, msize_p,
                         cips_p, cipe_p, cjps_p, cjpe_p, /* patch dims of SOURCE DOMAIN */
                         iids_p, iide_p, ijds_p, ijde_p, /* domain dims of INTERMEDIATE DOMAIN */
                         nids_p, nide_p, njds_p, njde_p, /* domain dims of CHILD DOMAIN */
                         pgr_p,  shw_p ,                 /* nest ratio and stencil half width */
                         ntasks_x_p , ntasks_y_p ,       /* proc counts in x and y */
                         min_subdomain ,                 /* minimum width allowed for a subdomain in a dim ON PARENT */
                         icoord_p, jcoord_p,
                         idim_cd_p, jdim_cd_p,
                         ig_p, jg_p,
                         retval_p )
  
  int_p
     Fcomm                            /* Fortran version of MPI communicator */
    ,cips_p, cipe_p, cjps_p, cjpe_p   /* (i) c.d. patch dims */
    ,iids_p, iide_p, ijds_p, ijde_p   /* (i) n.n. global dims */
    ,nids_p, nide_p, njds_p, njde_p   /* (i) n.n. global dims */
    ,pgr_p                            /* nesting ratio */
    ,ntasks_x_p , ntasks_y_p          /* proc counts in x and y */
    ,min_subdomain
    ,icoord_p       /* i coordinate of nest in cd */
    ,jcoord_p       /* j coordinate of nest in cd */
    ,shw_p          /* stencil half width */
    ,idim_cd_p      /* i width of nest in cd */
    ,jdim_cd_p      /* j width of nest in cd */
    ,msize_p        /* (I) Message size in bytes. */
    ,ig_p           /* (O) Global N index of parent domain point. */
    ,jg_p           /* (O) Global N index of parent domain point. */
    ,retval_p ;     /* (O) =1 if a valid point returned; =0 (zero) otherwise. */
{
  printf("Error: entered RSL_LITE_TO_CHILD_INFO \n");
  exit(1);
  return ;
}

void
RSL_LITE_TO_PARENT_INFO ( Fcomm, msize_p,
                          nips_p, nipe_p, njps_p, njpe_p, /* patch dims of SOURCE DOMAIN (CHILD) */
                          cids_p, cide_p, cjds_p, cjde_p, /* domain dims of TARGET DOMAIN (PARENT) */
                          ntasks_x_p , ntasks_y_p ,       /* proc counts in x and y */
                          min_subdomain ,
                          icoord_p, jcoord_p,
                          idim_cd_p, jdim_cd_p,
                          ig_p, jg_p,
                          retval_p )
  int_p
     Fcomm                            /* Fortran version of MPI communicator */
    ,nips_p, nipe_p, njps_p, njpe_p   /* (i) n.d. patch dims */
    ,cids_p, cide_p, cjds_p, cjde_p   /* (i) n.n. global dims */
    ,ntasks_x_p , ntasks_y_p          /* proc counts in x and y */
    ,min_subdomain
    ,icoord_p       /* i coordinate of nest in cd */
    ,jcoord_p       /* j coordinate of nest in cd */
    ,idim_cd_p      /* i width of nest in cd */
    ,jdim_cd_p      /* j width of nest in cd */
    ,msize_p        /* (I) Message size in bytes. */
    ,ig_p           /* (O) Global N index of parent domain point. */
    ,jg_p           /* (O) Global N index of parent domain point. */
    ,retval_p ;     /* (O) =1 if a valid point returned; =0 (zero) otherwise. */
{
  printf("Error: entered RSL_LITE_TO_PARENT_INFO \n");
  exit(1);
  return ;
}


/********************************************/

/*@
  RSL_TO_CHILD_MSG -- Pack force data into a message for a nest point.

@*/

/* parent->nest */

/* common code */
void 
rsl_lite_to_peerpoint_msg ( nbuf_p, buf )
  int_p
   nbuf_p ;     /* (I) Number of bytes to be packed. */
  char *
    buf ;        /* (I) Buffer containing the data to be packed. */
{
  printf("Error: entered rsl_lite_to_peerpoint_msg\n");
  exit(1);
  return;
}

/********************************************/

/* common code */
void
rsl_lite_allgather_msgs ( mytask_p, ntasks_p, comm )
  int_p mytask_p, ntasks_p ;
#ifndef STUBMPI
  MPI_Comm comm ;
#else
  int comm ;
#endif
{
  printf("Error: entered rsl_lite_allgather_msgs\n");
  exit(1);
}
void 
RSL_LITE_TO_CHILD_MSG ( nbuf_p, buf )
  int_p
    nbuf_p ;     /* (I) Number of bytes to be packed. */
  char *
    buf ;        /* (I) Buffer containing the data to be packed. */
{
  printf("Error: entered RSL_LITE_TO_CHILD_MSG\n");
  exit(1);
}

/* nest->parent */
void 
RSL_LITE_TO_PARENT_MSG ( nbuf_p, buf )
  int_p
    nbuf_p ;     /* (I) Number of bytes to be packed. */
  char *
    buf ;        /* (I) Buffer containing the data to be packed. */
{
  printf("Error: entered RSL_LITE_TO_PARENT_MSG\n");
  exit(1);
}

/********************************************/


/* nest->parent */
void 
RSL_LITE_MERGE_MSGS ( mytask_p, ntasks_p, Fcomm )
  int_p mytask_p, ntasks_p, Fcomm ;
{
  printf("Error: entered RSL_LITE_MERGE_MSGS\n");
 exit(1);
}


/* common code */
void 
rsl_lite_from_peerpoint_info ( ig_p, jg_p, retval_p )
  int_p
    ig_p        /* (O) Global index in M dimension of nest. */
   ,jg_p        /* (O) Global index in N dimension of nest. */
   ,retval_p ;  /* (O) Return value; =1 valid point, =0 done. */
{
  printf("Error: entered rsl_lite_from_peerpoint_info\n");
  return ;
}
/* parent->nest */
void 
RSL_LITE_FROM_PARENT_INFO ( ig_p, jg_p, retval_p )
  int_p
    ig_p        /* (O) Global index in M dimension of nest. */
   ,jg_p        /* (O) Global index in N dimension of nest. */
   ,retval_p ;  /* (O) Return value; =1 valid point, =0 done. */
{
  printf("Error: entered RSL_LITE_FROM_PARENT_INFO\n");
 exit(1);
}


/* nest->parent */
void 
RSL_LITE_FROM_CHILD_INFO ( ig_p, jg_p, retval_p )
  int_p
    ig_p        /* (O) Global index in M dimension of nest. */
   ,jg_p        /* (O) Global index in N dimension of nest. */
   ,retval_p ;  /* (O) Return value; =1 valid point, =0 done. */
{
  printf("Error: entered RSL_LITE_FROM_CHILD_INFO\n");
 exit(1);
}
/* parent->nest */
void 
RSL_LITE_BCAST_MSGS ( mytask_p, ntasks_p, Fcomm )
  int_p mytask_p, ntasks_p, Fcomm ;
{
  printf("Error: entered RSL_LITE_BCAST_MSGS\n");
 exit(1);
}

/********************************************/


/* common code */
void 
rsl_lite_from_peerpoint_msg ( len_p, buf )
  int_p
    len_p ;          /* (I) Number of bytes to unpack. */
  int *
    buf ;            /* (O) Destination buffer. */
{
  printf("Error: entered rsl_lite_from_peerpoint_msg\n");
 exit(1);
}

/********************************************/

int
destroy_list( list, dfcn )
  rsl_list_t ** list ;          /* pointer to pointer to list */
  int (*dfcn)() ;               /* pointer to function for destroying
                                   the data field of the list */
{
  printf("Error: entered destroy_list\n");
 exit(1);
  return(0) ;
}
/* parent->nest */
void
RSL_LITE_FROM_PARENT_MSG ( len_p, buf )
  int_p
    len_p ;          /* (I) Number of bytes to unpack. */
  int *
    buf ;            /* (O) Destination buffer. */
{
  printf("Error: entered RSL_LITE_FROM_PARENT_MSG\n");
 exit(1);
}

/* nest->parent */
void
RSL_LITE_FROM_CHILD_MSG ( len_p, buf )
  int_p
    len_p ;          /* (I) Number of bytes to unpack. */
  int *
    buf ;            /* (O) Destination buffer. */
{
  printf("Error: entered RSL_LITE_FROM_CHILD_MSG\n");
 exit(1);
}

/********************************************/
