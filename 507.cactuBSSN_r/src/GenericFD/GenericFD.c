
/*@@                                         
   @file      GenericFD/src/GenericFD.c
   @date      June 16 2002
   @author    S. Husa                           
   @desc

   $Id$                                  
   
   @enddesc                                     
 @@*/                                           

/*  Copyright 2004 Sascha Husa, Ian Hinder, Christiane Lechner

    This file is part of Kranc.

    Kranc is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Kranc is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Kranc; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
                                              
#ifdef SPEC 
#include "GenericFD/cctk.h" 
#define THORN_DIR "GenericFD" 
#else 
#include "cctk.h"                             
#endif /* END SPEC */ 
#ifdef SPEC 
#include "GenericFD/cctk_Arguments.h" 
#else 
#include "cctk_Arguments.h"                   
#endif /* END SPEC */ 
#ifdef SPEC 
#include "GenericFD/cctk_Parameters.h" 
#else 
#include "cctk_Parameters.h"                  
#endif /* END SPEC */ 
#include "util_Table.h"
#include <assert.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
            
#include "Symmetry.h"                         


#define KRANC_C
                                                
#include "GenericFD.h"


/* TODO: provide functions for differencing, use FD macros to evaluate
   corresponding functions */

static
void GenericFD_GetBoundaryWidths(cGH const * restrict const cctkGH, int nboundaryzones[6])
{
  int is_internal[6];
  int is_staggered[6];
  int shiftout[6];
  int ierr = -1;

  if (CCTK_IsFunctionAliased ("MultiPatch_GetBoundarySpecification")) {
    int const map = MultiPatch_GetMap (cctkGH);
    /* This doesn't make sense in level mode */
    if (map < 0)
    {
      static int have_warned = 0;
      if (!have_warned)
      {
        CCTK_WARN(1, "GenericFD_GetBoundaryWidths: Could not determine current map (can be caused by calling in LEVEL mode)");
        have_warned = 1;
      }
      for (int i = 0; i < 6; i++)
        nboundaryzones[i] = 0;
      return;
    }
    ierr = MultiPatch_GetBoundarySpecification
      (map, 6, nboundaryzones, is_internal, is_staggered, shiftout);
    if (ierr != 0)
      CCTK_WARN(0, "Could not obtain boundary specification");
  } else if (CCTK_IsFunctionAliased ("GetBoundarySpecification")) {
    ierr = GetBoundarySpecification
      (6, nboundaryzones, is_internal, is_staggered, shiftout);
    if (ierr != 0)
      CCTK_WARN(0, "Could not obtain boundary specification");
  } else {
    CCTK_WARN(0, "Could not obtain boundary specification");
  }
}

int GenericFD_GetBoundaryWidth(cGH const * restrict const cctkGH)
{
  int nboundaryzones[6];
  GenericFD_GetBoundaryWidths(cctkGH, nboundaryzones);

  int bw = nboundaryzones[0];

  for (int i = 1; i < 6; i++)
    if (nboundaryzones[i] != bw)
    CCTK_WARN(0, "Number of boundary points is different on different faces");

  return bw;
}

/* Return the array indices in imin and imax for looping over the
   interior of the grid. imin is the index of the first grid point.
   imax is the index of the last grid point plus 1.  So a loop over
   the interior of the grid would be

   for (i = imin; i < imax; i++)

   The indexing is C-style. Also return whether the boundary is a
   symmetry, physical or interprocessor boundary.  Carpet refinement
   boundaries are treated as interprocessor boundaries.
*/
void GenericFD_GetBoundaryInfo(cGH const * restrict const cctkGH,
                               int const * restrict const cctk_ash,
                               int const * restrict const cctk_lsh,
                               int const * restrict const cctk_bbox,
			       int const * restrict const cctk_nghostzones,
                               int * restrict const imin, 
			       int * restrict const imax,
                               int * restrict const is_symbnd, 
			       int * restrict const is_physbnd,
                               int * restrict const is_ipbnd)
{
  int bbox[6];
  int nboundaryzones[6];
  int is_internal[6];
  int is_staggered[6];
  int shiftout[6];
  int symbnd[6];

  int symtable = 0;
  int dir = 0;
  int face = 0;
  int npoints = 0;
  int iret = 0;
  int ierr = 0;

  if (CCTK_IsFunctionAliased ("MultiPatch_GetBbox")) {
    ierr = MultiPatch_GetBbox (cctkGH, 6, bbox);
    if (ierr != 0)
      CCTK_WARN(0, "Could not obtain bbox specification");
  } else {
    for (dir = 0; dir < 6; dir++)
    {
      bbox[dir] = 0;
    }
  }

  if (CCTK_IsFunctionAliased ("MultiPatch_GetBoundarySpecification")) {
    int const map = MultiPatch_GetMap (cctkGH);
    if (map < 0)
      CCTK_WARN(0, "Could not obtain boundary specification");
    ierr = MultiPatch_GetBoundarySpecification
      (map, 6, nboundaryzones, is_internal, is_staggered, shiftout);
    if (ierr != 0)
      CCTK_WARN(0, "Could not obtain boundary specification");
  } else if (CCTK_IsFunctionAliased ("GetBoundarySpecification")) {
    ierr = GetBoundarySpecification
      (6, nboundaryzones, is_internal, is_staggered, shiftout);
    if (ierr != 0)
      CCTK_WARN(0, "Could not obtain boundary specification");
  } else {
    CCTK_WARN(0, "Could not obtain boundary specification");
  }

  symtable = SymmetryTableHandleForGrid(cctkGH);
  if (symtable < 0) 
  {
    CCTK_WARN(0, "Could not obtain symmetry table");
  }  
  
  iret = Util_TableGetIntArray(symtable, 6, symbnd, "symmetry_handle");
  if (iret != 6) CCTK_WARN (0, "Could not obtain symmetry information");

  for (dir = 0; dir < 6; dir++)
  {
    is_ipbnd[dir] = (!cctk_bbox[dir]);
    is_symbnd[dir] = (!is_ipbnd[dir] && symbnd[dir] >= 0 && !bbox[dir]);
    is_physbnd[dir] = (!is_ipbnd[dir] && !is_symbnd[dir]);
  }

  for (dir = 0; dir < 3; dir++)
  {
    for (face = 0; face < 2; face++)
    {
      int index = dir*2 + face;
      if (is_ipbnd[index])
      {
	/* Inter-processor boundary */
	npoints = cctk_nghostzones[dir];
      }
      else
      {
	/* Symmetry or physical boundary */
	npoints = nboundaryzones[index];
             
	if (is_symbnd[index])
	{
	  /* Ensure that the number of symmetry zones is the same
	     as the number of ghost zones */
	  if (npoints != cctk_nghostzones[dir])
	  {
	    CCTK_WARN (1, "The number of symmetry points is different from the number of ghost points; this is probably an error");
	  }
	}
      }

      switch(face)
      {
      case 0: /* Lower boundary */
	imin[dir] = npoints;
	break;
      case 1: /* Upper boundary */
	imax[dir] = cctk_lsh[dir] - npoints;
	break;
      default:
	CCTK_WARN(0, "internal error");
      }
    }
  }
}


void GenericFD_LoopOverEverything(cGH const * restrict const cctkGH, Kranc_Calculation const calc)
{
  DECLARE_CCTK_ARGUMENTS

  int   dir = 0;
  int   face = 0;
  CCTK_REAL  normal[] = {0,0,0};
  CCTK_REAL  tangentA[] = {0,0,0};
  CCTK_REAL  tangentB[] = {0,0,0};
  int   bmin[] = {0,0,0};
  int   bmax[] = {cctk_lsh[0],cctk_lsh[1],cctk_lsh[2]};

  calc(cctkGH, dir, face, normal, tangentA, tangentB, bmin, bmax, 0, NULL);
  return;
}


void GenericFD_LoopOverBoundary(cGH const * restrict const cctkGH, Kranc_Calculation const calc)
{
  DECLARE_CCTK_ARGUMENTS

  int   dir1, dir2, dir3;
  int   dir[3];
  CCTK_REAL  normal[3];
  CCTK_REAL  tangentA[3];
  CCTK_REAL  tangentB[3];
  int   bmin[3];
  int   bmax[3];
  int   have_bnd;
  int   all_physbnd;
  int   d;

  int   is_symbnd[6], is_physbnd[6], is_ipbnd[6];
  int   imin[3], imax[3];
  int        old_dir = 0;
  int        old_face = 0;

  GenericFD_GetBoundaryInfo(cctkGH, cctk_ash, cctk_lsh, cctk_bbox,
                            cctk_nghostzones, 
                            imin, imax, is_symbnd, is_physbnd, is_ipbnd);

 /* Loop over all faces */
  for (dir3 = -1; dir3 <= +1; dir3++)
  {
    for (dir2 = -1; dir2 <= +1; dir2++)
    {
      for (dir1 = -1; dir1 <= +1; dir1++)
      {
        dir[0] = dir1;
        dir[1] = dir2;
        dir[2] = dir3;

        have_bnd = 0;          /* one of the faces is a boundary */
        all_physbnd = 1;       /* all boundary faces are physical
                                  boundaries */

        for (d = 0; d < 3; d++)
        {
          switch(dir[d])
          {
          case -1:
            bmin[d] = 0;
            bmax[d] = imin[d];
            have_bnd = 1;
            all_physbnd = all_physbnd && is_physbnd[2*d+0];
            break;
          case 0:
            bmin[d] = imin[d];
            bmax[d] = imax[d];
            break;
          case +1:
            bmin[d] = imax[d];
            bmax[d] = cctk_lsh[d];
            have_bnd = 1;
            all_physbnd = all_physbnd && is_physbnd[2*d+1];
            break;
          }

          /* Choose a basis */
          normal[d] = dir[d];
          tangentA[d] = dir[(d+1)%3];
          tangentB[d] = dir[(d+2)%3];
        }

        if (have_bnd && all_physbnd)
        {
#if 0
          CCTK_REAL normal_norm = 0.0;
          for (d = 0; d < 3; d++)
          {
            normal_norm += pow(normal[d], 2);
          }
          normal_norm = sqrt(normal_norm);
          for (d = 0; d < 3; d++)
          {
            normal[d] /= normal_norm;
          }
#endif
          
          calc(cctkGH, old_dir, old_face, normal, tangentA, tangentB, bmin, bmax, 0, NULL);
        }

      }
    }
  }
  
  return;
}


void GenericFD_LoopOverBoundaryWithGhosts(cGH const * restrict const cctkGH, Kranc_Calculation const calc)
{
  DECLARE_CCTK_ARGUMENTS

  int   dir1, dir2, dir3;
  int   dir[3];
  CCTK_REAL  normal[3];
  CCTK_REAL  tangentA[3];
  CCTK_REAL  tangentB[3];
  int   bmin[3];
  int   bmax[3];
  int   have_bnd;
  int   have_physbnd;
  int   d;

  int   is_symbnd[6], is_physbnd[6], is_ipbnd[6];
  int   imin[3], imax[3];
  int        old_dir = 0;
  int        old_face = 0;

  GenericFD_GetBoundaryInfo(cctkGH, cctk_ash, cctk_lsh, cctk_bbox,
                            cctk_nghostzones, 
                            imin, imax, is_symbnd, is_physbnd, is_ipbnd);

 /* Loop over all faces */
  for (dir3 = -1; dir3 <= +1; dir3++)
  {
    for (dir2 = -1; dir2 <= +1; dir2++)
    {
      for (dir1 = -1; dir1 <= +1; dir1++)
      {
        dir[0] = dir1;
        dir[1] = dir2;
        dir[2] = dir3;

        have_bnd = 0;          /* one of the faces is a boundary */
        have_physbnd = 0;      /* one of the boundary faces is a physical
                                  boundary */

        for (d = 0; d < 3; d++)
        {
          switch(dir[d])
          {
          case -1:
            bmin[d] = 0;
            bmax[d] = imin[d];
            have_bnd = 1;
            have_physbnd = have_physbnd || is_physbnd[2*d+0];
            break;
          case 0:
            bmin[d] = imin[d];
            bmax[d] = imax[d];
            break;
          case +1:
            bmin[d] = imax[d];
            bmax[d] = cctk_lsh[d];
            have_bnd = 1;
            have_physbnd = have_physbnd || is_physbnd[2*d+1];
            break;
          }

          /* Choose a basis */
          normal[d] = dir[d];
          tangentA[d] = dir[(d+1)%3];
          tangentB[d] = dir[(d+2)%3];
        }

        if (have_bnd && have_physbnd)
        {
#if 0
          CCTK_REAL normal_norm = 0.0;
          for (d = 0; d < 3; d++)
          {
            normal_norm += pow(normal[d], 2);
          }
          normal_norm = sqrt(normal_norm);
          for (d = 0; d < 3; d++)
          {
            normal[d] /= normal_norm;
          }
#endif
          
          calc(cctkGH, old_dir, old_face, normal, tangentA, tangentB, bmin, bmax, 0, NULL);
        }

      }
    }
  }
  
  return;
}


void GenericFD_LoopOverInterior(cGH const * restrict const cctkGH, Kranc_Calculation const calc)
{
  DECLARE_CCTK_ARGUMENTS

  CCTK_REAL  normal[] = {0,0,0};
  CCTK_REAL  tangentA[] = {0,0,0};
  CCTK_REAL  tangentB[] = {0,0,0};

  int   is_symbnd[6], is_physbnd[6], is_ipbnd[6];
  int   imin[3], imax[3];
  int        dir = 0;
  int        face = 0;

  GenericFD_GetBoundaryInfo(cctkGH, cctk_ash, cctk_lsh, cctk_bbox,
                            cctk_nghostzones, 
                            imin, imax, is_symbnd, is_physbnd, is_ipbnd);

  calc(cctkGH, dir, face, normal, tangentA, tangentB, imin, imax, 0, NULL);
  
  return;
}

void GenericFD_AssertGroupStorage(cGH const * restrict const cctkGH, const char *calc,
                                  int ngroups, const char *const group_names[ngroups])
{
  for (int i = 0; i < ngroups; i++)
  {
    int result = CCTK_QueryGroupStorage(cctkGH, group_names[i]);
    if (result == 0)
    {
      CCTK_VWarn(CCTK_WARN_ABORT, __LINE__, __FILE__, CCTK_THORNSTRING,
                 "Error in %s: Group \"%s\" does not have storage", calc, group_names[i]);
    }
    else if (result < 0)
    {
      CCTK_VWarn(CCTK_WARN_ABORT, __LINE__, __FILE__, CCTK_THORNSTRING,
                 "Error in %s: Invalid group name \"%s\"", calc, group_names[i]);
    }
  }
}

/* Return a list of pointers to the members of a named group */
void GenericFD_GroupDataPointers(cGH const * restrict const cctkGH, const char *group_name,
                                 int nvars, CCTK_REAL const *restrict *ptrs)
{
  int group_index, status;
  cGroup  group_info;

  group_index = CCTK_GroupIndex(group_name);
  if (group_index < 0)
    CCTK_VWarn(CCTK_WARN_ABORT,   __LINE__, __FILE__, CCTK_THORNSTRING,
               "Error return %d trying to get group index for group \'%s\'",
               group_index,
               group_name);

  status = CCTK_GroupData(group_index, &group_info);
  if (status < 0)
    CCTK_VWarn(CCTK_WARN_ABORT,   __LINE__, __FILE__, CCTK_THORNSTRING,
               "Error return %d trying to get info for group \'%s\'",
               status,
               group_name);

  if (group_info.numvars != nvars)
  {
    CCTK_VWarn(CCTK_WARN_ABORT,   __LINE__, __FILE__, CCTK_THORNSTRING,
               "Group \'%s\' has %d variables but %d were expected",
               group_name, group_info.numvars, nvars);
  }

  int v1 = CCTK_FirstVarIndex(group_name);

  for (int v = 0; v < nvars; v++)
  {
    ptrs[v] = (CCTK_REAL const *) CCTK_VarDataPtrI(cctkGH, 0 /* timelevel */, v1+v);
  }
}

void GenericFD_EnsureStencilFits(cGH const * restrict const cctkGH, const char *calc, int ni, int nj, int nk)
{
  DECLARE_CCTK_ARGUMENTS

  int bws[6];
  GenericFD_GetBoundaryWidths(cctkGH, bws);

  int ns[] = {ni, nj, nk};
  const char *dirs[] = {"x", "y", "z"};
  const char *faces[] = {"lower", "upper"};
  int abort = 0;

  for (int dir = 0; dir < 3; dir++)
  {
    for (int face = 0; face < 2; face++)
    {
      int bw = bws[2*dir+face];
      if (bw < ns[dir])
      {
        CCTK_VInfo(CCTK_THORNSTRING,
                   "The stencil for %s requires %d points, but the %s %s boundary has only %d points.",
                   calc, ns[dir], faces[face], dirs[dir], bw);
        abort = 1;
      }
    }
    int gz = cctk_nghostzones[dir];
    if (gz < ns[dir])
    {
      CCTK_VInfo(CCTK_THORNSTRING,
                 "The stencil for %s requires %d points, but there are only %d ghost zones in the %s direction.",
                 calc, ns[dir], gz, dirs[dir]);
      abort = 1;
    }
  }

  if (abort)
  {
    CCTK_VWarn(CCTK_WARN_ABORT, __LINE__, __FILE__, CCTK_THORNSTRING,
               "Insufficient ghost or boundary points for %s", calc);
  }
}
