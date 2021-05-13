module phys_control
!-----------------------------------------------------------------------
! Purpose:
!
! Provides a control interface to CAM physics packages
!
! Revision history:
! 2006-05-01  D. B. Coleman,  Creation of module
! 2009-02-13  Eaton           Replace *_{default,set}opts methods with module namelist.
!                             Add vars to indicate physics version and chemistry type.
!-----------------------------------------------------------------------

use spmd_utils,    only: masterproc
use cam_logfile,   only: iulog
use abortutils,    only: endrun
use shr_kind_mod,  only: r8 => shr_kind_r8
use ref_pres,      only: pref_mid

implicit none
private
save

public :: &
   phys_ctl_readnl,   &! read namelist from file
   phys_ctl_init,     &! initialization
   phys_getopts,      &! generic query method
   phys_deepconv_pbl, &! return true if deep convection is allowed in the PBL
   phys_do_flux_avg,  &! return true to average surface fluxes
   cam_physpkg_is,    &! query for the name of the physics package
   cam_chempkg_is,    &! query for the name of the chemistry package
   waccmx_is           ! query for the WACCM-X option

! Private module data

character(len=16), parameter :: unset_str = 'UNSET'
integer,           parameter :: unset_int = huge(1)

! Namelist variables:
character(len=16) :: cam_physpkg          = unset_str  ! CAM physics package [cam3 | cam4 | cam5 |
                                                       !   ideal | adiabatic].
character(len=16) :: cam_chempkg          = unset_str  ! CAM chemistry package [waccm_mozart | 
                                                       !  waccm_ghg | trop_mozart | trop_ghg | 
                                                       !  trop_bam | trop_mam3 | trop_mam7 | 
                                                       !  super_fast_llnl | super_fast_llnl_mam3 | none
character(len=16) :: waccmx_opt           = unset_str  ! WACCMX run option [ionosphere | neutral | off
character(len=16) :: deep_scheme          = unset_str  ! deep convection package
character(len=16) :: shallow_scheme       = unset_str  ! shallow convection package
character(len=16) :: eddy_scheme          = unset_str  ! vertical diffusion package
character(len=16) :: microp_scheme        = unset_str  ! microphysics package
character(len=16) :: radiation_scheme        = unset_str  ! radiation package
integer           :: srf_flux_avg         = unset_int  ! 1 => smooth surface fluxes, 0 otherwise
integer           :: conv_water_in_rad    = unset_int  ! 0==> No; 1==> Yes-Arithmetic average;
                                                       ! 2==> Yes-Average in emissivity.
logical           :: atm_dep_flux         = .true.     ! true => deposition fluxes will be provided
                                                       ! to the coupler
logical           :: history_aerosol      = .false.    ! output the MAM aerosol tendencies
logical           :: history_microphysics              ! output the MG microphysics variables for AMWG package
logical           :: history_budget       = .false.    ! output tendencies and state variables for CAM4
                                                       ! temperature, water vapor, cloud ice and cloud
                                                       ! liquid budgets.
integer           :: history_budget_histfile_num = 1   ! output history file number for budget fields
logical           :: do_tms                            ! switch for turbulent mountain stress
logical           :: do_iss                            ! switch for implicit turbulent surface stress
real(r8)          :: tms_orocnst                       ! turbulent mountain stress parameter
real(r8)          :: tms_z0fac                         ! Factor determining z_0 from orographic standard deviation [ no unit ]

! Level information shared among parameterizations
logical :: do_molec_diff ! switch for molecular diffusion
integer :: ntop_eddy      ! Top    interface level to which eddy vertical diffusion is applied
integer :: nbot_eddy      ! Bottom interface level to which eddy vertical diffusion is applied
integer :: ntop_molec      ! Top    interface level to which molecular vertical diffusion is applied
integer :: nbot_molec      ! Bottom interface level to which molecular vertical diffusion is applied

!======================================================================= 
contains
!======================================================================= 

subroutine phys_ctl_readnl(nlfile)

   use namelist_utils,  only: find_group_name
   use units,           only: getunit, freeunit
   use mpishorthand

   character(len=*), intent(in) :: nlfile  ! filepath for file containing namelist input

   ! Local variables
   integer :: unitn, ierr
   character(len=*), parameter :: subname = 'phys_ctl_readnl'

   namelist /phys_ctl_nl/ cam_physpkg, cam_chempkg, waccmx_opt, deep_scheme, shallow_scheme, &
      eddy_scheme, microp_scheme, radiation_scheme, srf_flux_avg, &
      atm_dep_flux, do_tms, do_iss, tms_orocnst, tms_z0fac, history_aerosol,    &
      history_microphysics, history_budget, history_budget_histfile_num,  conv_water_in_rad
   !-----------------------------------------------------------------------------

   if (masterproc) then
      unitn = getunit()
      open( unitn, file=trim(nlfile), status='old' )
      call find_group_name(unitn, 'phys_ctl_nl', status=ierr)
      if (ierr == 0) then
         read(unitn, phys_ctl_nl, iostat=ierr)
         if (ierr /= 0) then
            call endrun(subname // ':: ERROR reading namelist')
         end if
      end if
      close(unitn)
      call freeunit(unitn)
   end if

#ifdef SPMD
   ! Broadcast namelist variables
   call mpibcast(deep_scheme,       len(deep_scheme)      , mpichar, 0, mpicom)
   call mpibcast(cam_physpkg,       len(cam_physpkg)      , mpichar, 0, mpicom)
   call mpibcast(cam_chempkg,       len(cam_chempkg)      , mpichar, 0, mpicom)
   call mpibcast(waccmx_opt,        len(waccmx_opt)       , mpichar, 0, mpicom)
   call mpibcast(shallow_scheme,    len(shallow_scheme)   , mpichar, 0, mpicom)
   call mpibcast(eddy_scheme,       len(eddy_scheme)      , mpichar, 0, mpicom)
   call mpibcast(microp_scheme,     len(microp_scheme)    , mpichar, 0, mpicom)
   call mpibcast(radiation_scheme,  len(radiation_scheme) , mpichar, 0, mpicom)
   call mpibcast(srf_flux_avg,                    1 , mpiint,  0, mpicom)
   call mpibcast(atm_dep_flux,                    1 , mpilog,  0, mpicom)
   call mpibcast(history_aerosol,                 1 , mpilog,  0, mpicom)
   call mpibcast(history_microphysics,            1 , mpilog,  0, mpicom)
   call mpibcast(history_budget,                  1 , mpilog,  0, mpicom)
   call mpibcast(history_budget_histfile_num,     1 , mpiint,  0, mpicom)
   call mpibcast(do_tms,                          1 , mpilog,  0, mpicom)
   call mpibcast(do_iss,                          1 , mpilog,  0, mpicom)
   call mpibcast(tms_orocnst,                     1 , mpir8,   0, mpicom)
   call mpibcast(tms_z0fac,                       1 , mpir8,   0, mpicom)
   call mpibcast(conv_water_in_rad,               1 , mpiint,  0, mpicom)
#endif

   ! Error checking:

   ! Defaults for PBL and microphysics are set in build-namelist.  Check here that
   ! values have been set to guard against problems with hand edited namelists.

   ! WACCM-X run option set in build-namelist. Check for valid values
   if (.not. (waccmx_opt == 'ionosphere' .or. waccmx_opt == 'neutral' .or. waccmx_opt == 'off')) then
      write(iulog,*)'waccm: illegal value of waccmx_opt:', waccmx_opt
      call endrun('waccm: illegal value of waccmx_opt')
   endif
   if (.not. (shallow_scheme .eq. 'Hack' .or. shallow_scheme .eq. 'UW' .or. shallow_scheme .eq. 'off')) then
      write(iulog,*)'phys_setopts: illegal value of shallow_scheme:', shallow_scheme
      call endrun('phys_setopts: illegal value of shallow_scheme')
   endif
   if (.not. (eddy_scheme .eq. 'HB' .or. eddy_scheme .eq. 'HBR' .or. eddy_scheme .eq. 'diag_TKE')) then
      write(iulog,*)'phys_setopts: illegal value of eddy_scheme:', eddy_scheme
      call endrun('phys_setopts: illegal value of eddy_scheme')
   endif
   if (.not. (microp_scheme .eq. 'MG' .or. microp_scheme .eq. 'RK')) then
      write(iulog,*)'phys_setopts: illegal value of microp_scheme:', microp_scheme
      call endrun('phys_setopts: illegal value of microp_scheme')
   endif

   ! Check compatibility of eddy & shallow schemes
   if (( shallow_scheme .eq. 'UW' ) .and. ( eddy_scheme .ne. 'diag_TKE' )) then
      write(iulog,*)'Do you really want to run UW shallow scheme without diagnostic TKE eddy scheme? Quiting'
      call endrun('shallow convection and eddy scheme may be incompatible')
   endif

   if (( shallow_scheme .eq. 'Hack' ) .and. ( ( eddy_scheme .ne. 'HB' ) .and. ( eddy_scheme .ne. 'HBR' ))) then
      write(iulog,*)'Do you really want to run Hack shallow scheme with a non-standard eddy scheme? Quiting.'
      call endrun('shallow convection and eddy scheme may be incompatible')
   endif

   ! Check compatibility of PBL and Microphysics schemes
   if (( eddy_scheme .eq. 'diag_TKE' ) .and. ( microp_scheme .ne. 'MG' )) then
      write(iulog,*)'UW PBL is only compatible with MG microphysics.  Quiting'
      call endrun('PBL and Microphysics schemes incompatible')
   endif

end subroutine phys_ctl_readnl

 !===============================================================================

subroutine phys_ctl_init()

   use ppgrid,         only : pver

   integer :: k !Loop counter

   ! ---------------------------------------------------------------------------------------- !
   ! Molecular diffusion turned on above ~60 km (50 Pa) if model top is above ~90 km (.1 Pa). !
   ! ---------------------------------------------------------------------------------------- !

   do_molec_diff = .false.
   ntop_molec = 1       ! Should always be 1
   nbot_molec = 0       ! Should be set below about 70 km
   if (pref_mid(1) < 0.1_r8) then
      do_molec_diff = .true.
      do k = 1, pver
         if (pref_mid(k) < 50._r8) nbot_molec = k
      end do
   end if

   if (masterproc) write(iulog, fmt='(a,i3,5x,a,i3)') 'NTOP_MOLEC =', ntop_molec, 'NBOT_MOLEC =', nbot_molec

   !----------------------------------------------------------------------------------------
   ! Different top used for WACCM-X extended model. Set eddy diffusion upper bound to level 
   ! nearest to pressure=1E-05 Pa
   !----------------------------------------------------------------------------------------

   if ( waccmx_is('ionosphere') .or. waccmx_is('neutral') ) then 
      ntop_eddy = 1
      do k = 1, pver
         if (pref_mid(k) .le. 1.E-05_r8) then
            ntop_eddy  = k
         endif
      end do
   else
      ntop_eddy  = 1    ! no reason not to make this 1, if >1, must be <= nbot_molec        
   endif

   nbot_eddy  = pver    ! Should always be pver
   
   if (masterproc) write(iulog, fmt='(a,i3,5x,a,i3)') 'NTOP_EDDY  =', ntop_eddy, 'NBOT_EDDY  =', nbot_eddy


end subroutine phys_ctl_init

!===============================================================================

logical function cam_physpkg_is(name)

   ! query for the name of the physics package

   character(len=*) :: name
   
   cam_physpkg_is = (trim(name) == trim(cam_physpkg))
end function cam_physpkg_is

!===============================================================================

logical function cam_chempkg_is(name)

   ! query for the name of the chemics package

   character(len=*) :: name
   
   cam_chempkg_is = (trim(name) == trim(cam_chempkg))
end function cam_chempkg_is

!===============================================================================

logical function waccmx_is(name)

   ! query for the name of the waccmx run option

   character(len=*) :: name
   
   waccmx_is = (trim(name) == trim(waccmx_opt))
end function waccmx_is

!===============================================================================

subroutine phys_getopts(deep_scheme_out, shallow_scheme_out, eddy_scheme_out, microp_scheme_out, &
                        radiation_scheme_out, atm_dep_flux_out, history_aerosol_out, history_microphysics_out, &
                        history_budget_out, history_budget_histfile_num_out, do_tms_out, do_iss_out, &
                        tms_orocnst_out, tms_z0fac_out, conv_water_in_rad_out, cam_chempkg_out,  &
               do_molec_diff_out, ntop_eddy_out, nbot_eddy_out, ntop_molec_out, nbot_molec_out )
!-----------------------------------------------------------------------
! Purpose: Return runtime settings
!          deep_scheme_out   : deep convection scheme
!          shallow_scheme_out: shallow convection scheme
!          eddy_scheme_out   : vertical diffusion scheme
!        microp_scheme_out : microphysics scheme
!          radiation_scheme_out : radiation_scheme
!-----------------------------------------------------------------------

   character(len=16), intent(out), optional :: deep_scheme_out
   character(len=16), intent(out), optional :: shallow_scheme_out
   character(len=16), intent(out), optional :: eddy_scheme_out
   character(len=16), intent(out), optional :: microp_scheme_out
   character(len=16), intent(out), optional :: radiation_scheme_out
   logical,           intent(out), optional :: atm_dep_flux_out
   logical,           intent(out), optional :: history_aerosol_out
   logical,           intent(out), optional :: history_microphysics_out
   logical,           intent(out), optional :: history_budget_out
   integer,           intent(out), optional :: history_budget_histfile_num_out
   logical,           intent(out), optional :: do_tms_out
   logical,           intent(out), optional :: do_iss_out
   real(r8),          intent(out), optional :: tms_orocnst_out
   real(r8),          intent(out), optional :: tms_z0fac_out
   integer,           intent(out), optional :: conv_water_in_rad_out
   character(len=16), intent(out), optional :: cam_chempkg_out
   logical,           intent(out), optional :: do_molec_diff_out    
   integer,           intent(out), optional :: ntop_eddy_out     
   integer,           intent(out), optional :: nbot_eddy_out     
   integer,           intent(out), optional :: ntop_molec_out     
   integer,           intent(out), optional :: nbot_molec_out     

   if ( present(deep_scheme_out         ) ) deep_scheme_out          = deep_scheme
   if ( present(shallow_scheme_out      ) ) shallow_scheme_out       = shallow_scheme
   if ( present(eddy_scheme_out         ) ) eddy_scheme_out          = eddy_scheme
   if ( present(microp_scheme_out       ) ) microp_scheme_out        = microp_scheme
   if ( present(radiation_scheme_out    ) ) radiation_scheme_out     = radiation_scheme
   if ( present(atm_dep_flux_out        ) ) atm_dep_flux_out         = atm_dep_flux
   if ( present(history_aerosol_out     ) ) history_aerosol_out      = history_aerosol
   if ( present(history_microphysics_out) ) history_microphysics_out = history_microphysics
   if ( present(history_budget_out      ) ) history_budget_out       = history_budget
   if ( present(history_budget_histfile_num_out ) ) history_budget_histfile_num_out = history_budget_histfile_num
   if ( present(do_tms_out              ) ) do_tms_out               = do_tms
   if ( present(do_iss_out              ) ) do_iss_out               = do_iss
   if ( present(tms_orocnst_out         ) ) tms_orocnst_out          = tms_orocnst
   if ( present(tms_z0fac_out           ) ) tms_z0fac_out            = tms_z0fac
   if ( present(conv_water_in_rad_out   ) ) conv_water_in_rad_out    = conv_water_in_rad
   if ( present(cam_chempkg_out         ) ) cam_chempkg_out          = cam_chempkg
   if ( present(do_molec_diff_out       ) ) do_molec_diff_out        = do_molec_diff
   if ( present(ntop_eddy_out           ) ) ntop_eddy_out            = ntop_eddy
   if ( present(nbot_eddy_out           ) ) nbot_eddy_out            = nbot_eddy
   if ( present(ntop_molec_out          ) ) ntop_molec_out           = ntop_molec
   if ( present(nbot_molec_out          ) ) nbot_molec_out           = nbot_molec

end subroutine phys_getopts

!===============================================================================

function phys_deepconv_pbl()

  logical phys_deepconv_pbl

   ! Don't allow deep convection in PBL if running UW PBL scheme
   if ( (eddy_scheme .eq. 'diag_TKE' ) .or. (shallow_scheme .eq. 'UW' ) ) then
      phys_deepconv_pbl = .true.
   else
      phys_deepconv_pbl = .false.
   endif

   return

end function phys_deepconv_pbl

!===============================================================================

function phys_do_flux_avg()

   logical :: phys_do_flux_avg
   !----------------------------------------------------------------------

   phys_do_flux_avg = .false.
   if (srf_flux_avg == 1) phys_do_flux_avg = .true.

end function phys_do_flux_avg

!===============================================================================

end module phys_control
