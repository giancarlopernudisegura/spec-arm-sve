module ref_pres
!------------------------------------------------------------------------------------
! 
! Provides access to reference pressures for use by the physics
! parameterizations.  The pressures are provided by the dynamical core
! since it currently determines the grid used by the physics.
! 
!------------------------------------------------------------------------------------

use shr_kind_mod, only: r8=>shr_kind_r8
use ppgrid,       only: pver, pverp
use dyn_grid,     only: dyn_grid_get_pref

implicit none
public

real(r8) :: pref_edge(pverp)     ! reference pressure at layer edges (Pa)
real(r8) :: pref_mid(pver)       ! reference pressure at layer midpoints (Pa)
real(r8) :: pref_mid_norm(pver)  ! reference pressure at layer midpoints normalized
                                 ! by the surface pressure ('eta' coordinate)

real(r8) :: ptop_ref             ! reference pressure at top of model (Pa)
real(r8) :: psurf_ref            ! reference surface pressure (Pa)

integer :: num_pr_lev            ! number of top levels using pure pressure representation

!====================================================================================
contains
!====================================================================================

subroutine ref_pres_init

   integer :: k

   call dyn_grid_get_pref(pref_edge, pref_mid, num_pr_lev)

   ptop_ref = pref_edge(1)
   psurf_ref = pref_edge(pverp)

   do k = 1, pver
      pref_mid_norm(k) = pref_mid(k)/psurf_ref
   enddo

end subroutine ref_pres_init

!====================================================================================

end module ref_pres

