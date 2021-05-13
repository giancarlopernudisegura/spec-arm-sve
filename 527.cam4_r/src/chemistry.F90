!================================================================================================
! This is the 'none' chemistry module.
! Most of the routines return without doing anything.
!================================================================================================

module chemistry

use shr_kind_mod,        only: r8 => shr_kind_r8
use physics_types,       only: physics_state, physics_ptend
use camsrfexch_types,    only: cam_in_t, cam_out_t
use phys_buffer,         only: pbuf_fld
use pio,                 only: file_desc_t

implicit none


! All interfaces public by default

! chem_is                        ! identify which chemistry is being used
! chem_register                  ! register consituents
! chem_is_active                 ! returns true if this package is active (ghg_chem=.true.)
! chem_implements_cnst           ! returns true if consituent is implemented by this package
! chem_init_cnst                 ! initialize mixing ratios if not read from initial file
! chem_init                      ! initialize (history) variables
! chem_timestep_init             ! time interpolate chemical loss frequencies
! chem_timestep_tend             ! interface to tendency computation
! chem_final
! chem_write_restart
! chem_read_restart
! chem_init_restart
! chem_readnl                    ! read chem namelist 

!================================================================================================
contains
!================================================================================================

logical function chem_is (name)

  character(len=*), intent(in) :: name

  chem_is = .false.
  if (name == 'none' ) then
     chem_is = .true.
  end if

end function chem_is

!================================================================================================

subroutine chem_register

end subroutine chem_register

!================================================================================================

subroutine chem_readnl(nlfile)

   character(len=*), intent(in) :: nlfile

end subroutine chem_readnl

!================================================================================================

function chem_is_active()

  logical :: chem_is_active

  chem_is_active = .false.

end function chem_is_active

!================================================================================================

function chem_implements_cnst(name)

   character(len=*), intent(in) :: name
   logical :: chem_implements_cnst

   chem_implements_cnst = .false.

end function chem_implements_cnst

!===============================================================================

subroutine chem_init(phys_state)

   type(physics_state), intent(in):: phys_state(:)

end subroutine chem_init

!===============================================================================

subroutine chem_init_cnst(name, q, gcid)

   character(len=*), intent(in) :: name
   real(r8), intent(out) :: q(:,:)
   integer, intent(in) :: gcid(:)

end subroutine chem_init_cnst

!===============================================================================

subroutine chem_timestep_init(phys_state)

   type(physics_state), intent(in):: phys_state(:)                 

end subroutine chem_timestep_init

!===============================================================================

subroutine chem_timestep_tend( state, ptend, cam_in, cam_out, dt, pbuf, fh2o, fsds, pblh)

   real(r8),            intent(in)    :: dt
   type(physics_state), intent(in)    :: state
   type(physics_ptend), intent(inout) :: ptend
   type(cam_in_t),      intent(inout) :: cam_in
   type(cam_out_t),     intent(in)    :: cam_out
   real(r8),            intent(out)   :: fh2o(:)
   type(pbuf_fld),      intent(in)    :: pbuf(:)
   real(r8),            intent(in)    :: fsds(:)
   real(r8),            intent(in)    :: pblh(:)

end subroutine chem_timestep_tend

!===============================================================================

subroutine chem_final

end subroutine chem_final

!===============================================================================

subroutine chem_init_restart( File )

   type(file_desc_t),intent(inout) :: File

end subroutine chem_init_restart

!===============================================================================
subroutine chem_write_restart( File )

   type(file_desc_t) :: File

end subroutine chem_write_restart

!===============================================================================

subroutine chem_read_restart( File )

   type(file_desc_t) :: File

end subroutine chem_read_restart

!===============================================================================

end module chemistry
