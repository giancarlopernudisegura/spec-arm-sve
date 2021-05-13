
module upper_bc

!---------------------------------------------------------------------------------
! Dummy interfaces.
!---------------------------------------------------------------------------------

use shr_kind_mod, only: r8 => shr_kind_r8
use physics_types,only : physics_state

implicit none

! All interfaces are public

! ubc_defaultopts    ! set default values of namelist variables
! ubc_setopts        ! get namelist input
! ubc_init           ! global initialization
! ubc_timestep_init  ! time step initialization
! ubc_get_vals       ! get ubc values for this step

!================================================================================================
contains
!================================================================================================

subroutine ubc_defaultopts(tgcm_ubc_file_out, tgcm_ubc_data_type_out, tgcm_ubc_cycle_yr_out, tgcm_ubc_fixed_ymd_out, &
                           tgcm_ubc_fixed_tod_out, snoe_ubc_file_out, t_pert_ubc_out, no_xfac_ubc_out)

   real(r8), intent(out), optional         :: t_pert_ubc_out
   real(r8), intent(out), optional         :: no_xfac_ubc_out
   character(len=*), intent(out), optional :: tgcm_ubc_file_out
   character(len=*), intent(out), optional :: snoe_ubc_file_out
   integer         , intent(out), optional :: tgcm_ubc_cycle_yr_out
   integer         , intent(out), optional :: tgcm_ubc_fixed_ymd_out
   integer         , intent(out), optional :: tgcm_ubc_fixed_tod_out
   character(len=*), intent(out), optional :: tgcm_ubc_data_type_out

end subroutine ubc_defaultopts

!================================================================================================

subroutine ubc_setopts(tgcm_ubc_file_in, tgcm_ubc_data_type_in, tgcm_ubc_cycle_yr_in, tgcm_ubc_fixed_ymd_in,  &
                       tgcm_ubc_fixed_tod_in, snoe_ubc_file_in, t_pert_ubc_in, no_xfac_ubc_in)

   real(r8), intent(in), optional         :: t_pert_ubc_in
   real(r8), intent(in), optional         :: no_xfac_ubc_in
   character(len=*), intent(in), optional :: tgcm_ubc_file_in
   character(len=*), intent(in), optional :: snoe_ubc_file_in
   integer         , intent(in), optional :: tgcm_ubc_cycle_yr_in
   integer         , intent(in), optional :: tgcm_ubc_fixed_ymd_in
   integer         , intent(in), optional :: tgcm_ubc_fixed_tod_in
   character(len=*), intent(in), optional :: tgcm_ubc_data_type_in

end subroutine ubc_setopts

!===============================================================================

subroutine ubc_init

end subroutine ubc_init

!===============================================================================

subroutine ubc_timestep_init(state)

   type(physics_state), intent(in):: state(:)                 

end subroutine ubc_timestep_init

!===============================================================================

subroutine ubc_get_vals (lchnk, ncol, ntop_molec, pint, zi, msis_temp, ubc_mmr, ubc_flux)
  
   integer,  intent(in)  :: lchnk
   integer,  intent(in)  :: ncol
   integer,  intent(in)  :: ntop_molec
   real(r8), intent(in)  :: pint(:,:)
   real(r8), intent(in)  :: zi(:,:)

   real(r8), intent(out) :: ubc_mmr(:,:)
   real(r8), intent(out) :: msis_temp(:)
   real(r8), intent(out) :: ubc_flux(:)

end subroutine ubc_get_vals

!===============================================================================

end module upper_bc
