!+
! NAME
!       power_mod - Calculation of transmitted power
!
! DESCRIPTION
!       A module for probing the power transmitted through a surface
!
! METHOD
!       The power transmitted through a surface is calculated in the frequency
!       domain. A DFT is applied in a user defined frequency range for the E-
!       and H-fields on the surface. Poynting's vector is computed for each
!       cell and the transmitted power is obtained by integration over the
!       surface. See e.g. "Broadband Electromagnetic Scattering and Shielding
!       Analysis using the Finite Difference Time Domain Method", Torleif
!       Martin, Linköping 2001, ISBN 91-7219-914-8.
!
! PUBLIC
!       SUBROUTINE power_init
!       SUBROUTINE power_stop
!       SUBROUTINE power_DFT
!       SUBROUTINE power_print
!       SUBROUTINE power_UpdateH
!       logical :: power_found
!       type :: PowerTyp
!       type :: PowerCoords
!       type(PowerTyp), pointer :: first_power
!       type(PowerTyp), pointer :: last_power
!       integer :: power_ncoords_times_nfreq
!
! HISTORY
!       Written by Jonas Hamberg, ESB
!       Imported from GemsTD_ESB by Ulf Andersson 2004-11-12
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE power_mod

USE parameter_mod
USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

PUBLIC power_init, power_stop, power_DFT, power_print, power_UpdateH

logical, PUBLIC :: power_found = .false.   ! True if POWER keyword in use
                                           ! Have the same value on all nodes

type, PUBLIC :: PowerTyp                   ! Data type for POWER
  integer           :: stride              ! Output stride
  integer           :: skip                ! Output skip
  character(len=80) :: filenamebase        ! Base name for output file
  integer        :: nofreq                 ! Number of frequencies to compute
  real(kind=rfp) :: freqfirst              ! The first frequency
  real(kind=rfp) :: freqlast               ! The last frequency
  integer        :: window                 ! Start timestep for window function
  integer        :: y_index                ! Y-index 
  type(PowerCoords), pointer :: coords     ! Pointer to the coordinates
  integer        :: nocoords               ! Number of coords 
  type(PowerTyp), pointer    :: next       ! Pointer to the next entry
  logical        :: mine                   !Do I own any twinkles in this plane
end type PowerTyp

type, PUBLIC :: PowerCoords                ! The coordinates for POWER
  integer, dimension(7)      :: coords     ! [normal i_min i_max j_min ...]
  type(PowerCoords), pointer :: next       ! Pointer to the next coordinates
end type PowerCoords

type(PowerTyp), pointer,                                                      &
     PUBLIC :: first_power, last_power     ! Pointer to 1st & last POWER entry

integer, PUBLIC :: power_ncoords_times_nfreq = 0 ! Used by calcflops

PRIVATE

complex(kind=rfp), dimension(:),                                              &
     allocatable :: expfuncE, expfuncH     ! DFT exp. function for all freq.
complex(kind=rfp), dimension(:,:,:),                                          &
     allocatable :: Efreq                  ! E-fields in the frequency domain
complex(kind=rfp), dimension(:,:,:),                                          &
     allocatable :: Hfreq                  ! H-fields in the frequency domain
complex(kind=rfp), dimension(:,:),                                            &
     allocatable :: Ec                     ! Incident wave in the freq. domain
real(kind=rfp), dimension(:,:),                                               &
     allocatable :: frequency              ! Frequency vectors
real(kind=rfp), dimension(:),                                                 &
     allocatable :: poynting_vec           ! Power vector
integer, dimension(:,:),                                                      &
     allocatable :: coords_array           ! Coordinate vector

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       power_init - Initialize the calculation of transmitted power
!
! DESCRIPTION
!       Called from leapfrog to initialize variables, allocate arrays,
!       and open files needed to compute transmitted power
!
! ERRORS
!       Uses the errorcheck module and netcdf_check_error
!
! SEE ALSO
!       power_stop
!
! HISTORY
!       Written by Jonas Hamberg 020813
!
!       Updated 2013-07-23 by Ulf Andersson
!         Initialization fixed so that the same OpenMP parallelization is 
!         used as the one used during the timestepping. This hopefully
!         means that "first-touch" is performed by the right thread.  
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE power_init(no_POWER)

#if !defined(SPEC) 
USE netcdf_common_mod, ONLY : netcdf_check_error, netcdf_init_header,         &
                              netcdf_type
USE netcdf, ONLY : nf90_def_dim, nf90_def_var, nf90_put_att, nf90_unlimited,  &
                   nf90_enddef, nf90_put_var, nf90_close
#endif
USE globalvar_mod, ONLY : my_id, master_id, dims, my_MPI_COMM_CART, nnodes

#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     A r g u m e n t s
!------------------------------------------------------------------------------

integer :: no_POWER

!------------------------------------------------------------------------------
!                     L o c a l   v a r i a b l e s
!------------------------------------------------------------------------------

integer :: maxnofreq                       ! Max no. freq. used by POWER entry
integer :: nocoord                         ! The total number of coordinates
integer :: nopower                         ! The total number of POWER entries
integer :: allocstat                       ! Status of memory allocation
integer :: ifreq                           ! Frequency counter
integer :: ipower                          ! Power counter
integer :: ipower2                         ! Power counter 2
integer(kind=eight_byte)  :: bytes         ! The number of bytes allocated
real(kind=rfp) :: freq                     ! Frequency
real(kind=rfp) :: freqstep                 ! Frequency step
type(PowerTyp), pointer :: tmppower        ! Temporary power pointer
type(PowerTyp), pointer :: tmppower2       ! Temporary power pointer 2
type(PowerCoords), pointer :: tmpcoords    ! Temporary coordinate pointer
character(len=80)  :: nc_power_file        ! Name of netCDF file
integer :: ncid                            ! Id of netCDF file
integer :: err                             ! NetCDF error code
integer :: nts_id, nofreq_id, freq_id      ! NetCDF identifiers
integer :: power_id, cmplx_id, Ec_id
logical :: found_match                     ! True if identical file names found
integer :: pp, itmp, ierr
integer :: icoords 
integer :: startcoords, endcoords          ! Loop index

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

power_found = .true.

!A safety check
if ( (dims(1)>1).and.(dims(3)>1) ) then
  if (my_id==master_id) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR power! min(dims(1),dims(3))>1'
    write(error_unit,*) ' The implementation cannot handle this' 
#endif
    write(*,*) 'FATAL ERROR power! min(dims(1),dims(3))>1'
    write(*,*) ' The present power implementation cannot handle this' 
  end if
#if !defined(SPEC) || defined(SPEC_MPI)
  CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
  stop  
end if

do pp=1, no_POWER
  call Read_power(pp)
end do

! Initialize
bytes = 0

! Find the maximum number of frequencies to compute
! Note: The size of all main arrays allocated later on are proportional to this
!       number. Hence, it is not optimal, from a memory point of view, to
!       simultaneously use POWER keywords with different frequency range.
maxnofreq = 1
tmppower => first_power
do while(associated(tmppower))
  if ( tmppower%nofreq > maxnofreq ) then
    maxnofreq = tmppower%nofreq
  end if
  tmppower => tmppower%next
end do

! Find the total number of coordinates and power entries
nocoord = 0
nopower = 0
tmppower => first_power
do while(associated(tmppower))
  tmpcoords => tmppower%coords
  tmppower%nocoords = 0
  do while (associated(tmpcoords))
    tmpcoords => tmpcoords%next
    tmppower%nocoords = tmppower%nocoords + 1
  end do
  nocoord = nocoord + tmppower%nocoords
  tmppower => tmppower%next
  nopower = nopower + 1
end do

write(*,*) 'Total number of power coords = ', nocoord

!! Assuming maxnofreq is the number of freq for all powers we get:
power_ncoords_times_nfreq = nocoord*maxnofreq

!! Allocate memory for the storage of two E-fields per coordinate
allocate(Efreq(2,maxnofreq,nocoord), STAT=allocstat)
#ifdef SPEC
4 format("FATAL ERROR! Allocation of ", a, "failed in power_init")
if (allocstat/= 0) then
#if (! defined SPEC_NO_ISO_FORTRAN_ENV)
   write(error_unit,4) "Efreq"
#endif
   print 4, "Efreq"
   stop
end if
#endif
bytes = bytes + 2*maxnofreq*nocoord*int(bytes_per_cmplx,eight_byte)

!! Allocate memory for the storage of two H-fields per coordinate
allocate(Hfreq(2,maxnofreq,nocoord), STAT=allocstat)
#ifdef SPEC
if (allocstat/= 0) then
#if (! defined SPEC_NO_ISO_FORTRAN_ENV)
   write(error_unit,4) "Hfreq"
#endif
   print 4, "Hfreq"
   stop
end if
#endif
bytes = bytes + 2*maxnofreq*nocoord*int(bytes_per_cmplx,eight_byte)

!! Allocate memory for the storage of exponential functions
allocate(expfuncE(maxnofreq), STAT=allocstat)
#ifdef SPEC
if (allocstat/= 0) then
#if (! defined SPEC_NO_ISO_FORTRAN_ENV)
   write(error_unit,4) "expfuncE"
#endif
   print 4, "expfuncE"
   stop
end if
#endif
allocate(expfuncH(maxnofreq), STAT=allocstat)
#ifdef SPEC
if (allocstat/= 0) then
#if (! defined SPEC_NO_ISO_FORTRAN_ENV)
   write(error_unit,4) "expfuncH"
#endif
   print 4, "expfuncH"
   stop
end if
#endif
bytes = bytes + 2*maxnofreq*int(bytes_per_cmplx,eight_byte)

!! Allocate memory for the incident pulse
allocate(Ec(maxnofreq,nopower), STAT=allocstat)
#ifdef SPEC
if (allocstat/= 0) then
#if (! defined SPEC_NO_ISO_FORTRAN_ENV)
   write(error_unit,4) "Ec"
#endif
   print 4, "Ec"
   stop
end if
#endif
bytes = bytes + maxnofreq*nopower*int(bytes_per_cmplx,eight_byte)

!! Allocate memory for the frequencies
allocate(frequency(maxnofreq,nopower), STAT=allocstat)
#ifdef SPEC
if (allocstat/= 0) then
#if (! defined SPEC_NO_ISO_FORTRAN_ENV)
   write(error_unit,4) "frequency"
#endif
   print 4, "frequency"
   stop
end if
#endif
bytes = bytes + maxnofreq*nopower*bytes_per_float

!! Allocate memory for the power
allocate(poynting_vec(maxnofreq), STAT=allocstat)
#ifdef SPEC
if (allocstat/= 0) then
#if (! defined SPEC_NO_ISO_FORTRAN_ENV)
   write(error_unit,4) "poynting_vec"
#endif
   print 4, "poynting_vec"
   stop
end if
#endif
bytes = bytes + maxnofreq*bytes_per_float

!! Allocate memory for the coordinate array.
allocate(coords_array(7,nocoord), STAT=allocstat)
bytes = bytes + 7*nocoord*4 ! 4 bytes per integer

!! Initialize arrays

tmppower => first_power
startcoords = 1
endcoords = 0
ipower = 1
do while(associated(tmppower))
  endcoords = endcoords + tmppower%nocoords
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO DEFAULT(SHARED), PRIVATE(ifreq,icoords)
#endif
  do icoords = startcoords, endcoords
    do ifreq = 1, tmppower%nofreq
      Efreq(1,ifreq,icoords)     = (0.0_rfp, 0.0_rfp)
      Efreq(2,ifreq,icoords)     = (0.0_rfp, 0.0_rfp)
    end do
    do ifreq = 1, tmppower%nofreq
      Hfreq(1,ifreq,icoords)     = (0.0_rfp, 0.0_rfp)
      Hfreq(2,ifreq,icoords)     = (0.0_rfp, 0.0_rfp)
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
  !! Next POWER entry
  startcoords = startcoords + tmppower%nocoords
  tmppower => tmppower%next

end do
expfuncE  = (0.0_rfp, 0.0_rfp)
expfuncH  = (0.0_rfp, 0.0_rfp)
Ec        = (0.0_rfp, 0.0_rfp)
frequency    =  0.0_rfp
poynting_vec =  0.0_rfp

!! Set up frequency vector(s)
tmppower => first_power
ipower = 1
do while(associated(tmppower))
  if ( tmppower%nofreq>1 ) then
    freqstep = (tmppower%freqlast-tmppower%freqfirst)                       &
             / real(tmppower%nofreq - 1, kind=rfp)
  else
    freqstep = 0.0_rfp
  end if
  freq = tmppower%freqfirst
  do ifreq = 1, tmppower%nofreq
    frequency(ifreq,ipower) = freq
    freq = freq + freqstep
  end do
  tmppower => tmppower%next
  ipower = ipower + 1
end do

!! Store coords in an array rather than linked lists.
tmppower => first_power
icoords = 1;
do while(associated(tmppower))
  tmpcoords => tmppower%coords
  do while (associated(tmpcoords))
    coords_array(1:7,icoords) = tmpcoords%coords(1:7)
    tmpcoords => tmpcoords%next
    icoords = icoords + 1
  end do
  tmppower => tmppower%next
end do

#if !defined(SPEC)

! Initialize netCDF output file(s)
! One column indentation in order to facilitate ediff with GemsTD code.
if (my_id==master_id) then
 tmppower => first_power
 ipower = 1
 do while(associated(tmppower))

  !! Open file
  nc_power_file = TRIM(tmppower%filenamebase)//'_power.nc'
  ncid = netcdf_init_header(nc_power_file, 'Power data')

  !! Check that the output file name does not collide with another entry
  found_match = .false.
  tmppower2 => first_power
  ipower2 = 1
  do while(associated(tmppower2))
    if ( tmppower%filenamebase==tmppower2%filenamebase .AND.                  &
         ipower/=ipower2 ) then
      found_match = .true.
    end if
    tmppower2 => tmppower2%next
    ipower2 = ipower2 + 1
  end do
  if ( found_match ) then
    write(*,*)'WARNING! Multiple POWER entries have identical Filenamebase'
    write(*,*)'Possible mismatch in ', TRIM(nc_power_file)
  end if

  !! Define dimensions
  err = nf90_def_dim(ncid, 'nts', nf90_unlimited, nts_id)
  call netcdf_check_error(err)
  err = nf90_def_dim(ncid, 'nofreq', tmppower%nofreq, nofreq_id)
  call netcdf_check_error(err)
  err = nf90_def_dim(ncid, 'cmplx', 2, cmplx_id)
  call netcdf_check_error(err)

  !! Define variables
  err = nf90_def_var(ncid, 'frequency', netcdf_type, nofreq_id, freq_id)
  call netcdf_check_error(err)
  err = nf90_put_att(ncid, freq_id, 'units', 'Hz')
  call netcdf_check_error(err)

  err = nf90_def_var(ncid, 'Ec', netcdf_type, (/cmplx_id,nofreq_id/), Ec_id)
  call netcdf_check_error(err)

  err = nf90_def_var(ncid, 'power', netcdf_type,                              &
                     (/nofreq_id, nts_id/), power_id)
  call netcdf_check_error(err)
  err = nf90_put_att(ncid, power_id, 'stride', tmppower%stride)
  call netcdf_check_error(err)
  err = nf90_put_att(ncid, power_id, 'skip', tmppower%skip)
  call netcdf_check_error(err)
  err = nf90_put_att(ncid, power_id, 'window', tmppower%window)
  call netcdf_check_error(err)
  err = nf90_put_att(ncid, power_id, 'yindex', tmppower%y_index)
  call netcdf_check_error(err)

  !! End definitions
  err = nf90_enddef(ncid)
  call netcdf_check_error(err)

  !! Write variables
  err=nf90_put_var(ncid, freq_id, frequency(1:tmppower%nofreq,ipower))
  call netcdf_check_error(err)

  !! Close file
  err = nf90_close(ncid)
  call netcdf_check_error(err)

  !! Next entry
  tmppower => tmppower%next
  ipower = ipower + 1

 end do
end if

#endif

! Report the amount of memory used
bytes = bytes/1024/1024
write(*,*)'Arrays allocated in power_mod, Mbytes used = ', bytes,             &
          'my_id =', my_id

if (nnodes>1) then
  !! Get the total value for power_ncoords_times_nfreq
#if defined(SPEC) && !defined(SPEC_MPI)
  write (*,*) 'how could nnodes be > 1 in serial code?'
  stop
#else
  Call MPI_REDUCE(power_ncoords_times_nfreq,itmp,1,MPI_INTEGER,MPI_SUM,       &
                  master_id,my_MPI_COMM_CART,ierr)
#endif
  power_ncoords_times_nfreq = itmp
end if

END SUBROUTINE power_init

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       power_stop - Shut down the calculation of transmitted power
!
! DESCRIPTION
!       Called from leapfrog to deallocate arrays used to calculate
!       transmitted power
!
! ERRORS
!       Uses the errorcheck module
!
! SEE ALSO
!       power_init
!
! HISTORY
!       Written by Jonas Hamberg 020814
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE power_stop()

!------------------------------------------------------------------------------
!                     L o c a l   v a r i a b l e s
!------------------------------------------------------------------------------

integer :: deallocstat                             ! Status of memory dealloc.
type(PowerTyp), pointer :: tmppower, nxtpower      ! Temporary power pointers
type(PowerCoords), pointer :: tmpcoords, nxtcoords ! Temp. coordinate pointers

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Deallocate the POWER list
tmppower => first_power
do while(associated(tmppower))
  tmpcoords => tmppower%coords
  do while (associated(tmpcoords))
    nxtcoords => tmpcoords%next
    deallocate(tmpcoords, STAT=deallocstat)
    tmpcoords => nxtcoords
  end do
  nxtpower => tmppower%next
  deallocate(tmppower, STAT=deallocstat)
  tmppower => nxtpower
end do

! Deallocate memory used for the E-fields
deallocate(Efreq, STAT=deallocstat)

! Deallocate memory used for the H-fields
deallocate(Hfreq, STAT=deallocstat)

! Deallocate memory used for the exponential functions
deallocate(expfuncE, STAT=deallocstat)
deallocate(expfuncH, STAT=deallocstat)

! Deallocate memory used for incident pulse
deallocate(Ec, STAT=deallocstat)

! Deallocate memory used for frequencies
deallocate(frequency, STAT=deallocstat)

! Deallocate memory used for Poynting vector
deallocate(poynting_vec, STAT=deallocstat)

! Deallocate memory used for coordinates
deallocate(coords_array, STAT=deallocstat)

END SUBROUTINE power_stop

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       power_DFT - DFT transformation for the calculation of transmitted power
!
! DESCRIPTION
!       Called from leapfrog during time stepping. Makes a discrete Fourier
!       transform of the E- and H-fields for the evaluation of Poynting's
!       vector in power_print. The H-fields are assumed to be half a time step
!       ahead of the E-fields.
!
! ERRORS
!       none
!
! SEE ALSO
!       power_print, power_init
!
! HISTORY
!       Written by Jonas Hamberg 2002-08-14
!
!       Rewritten by Ulf Andersson 2012-09-21
!         The loop over the coordinates is no longer a linked list,
!         but rather a straightforward loop. This is made possible by 
!         storing the coordinates in an array. This made it easy to
!         move the OpenMP parallelization from the inner frequency-loop 
!         to the middle loop (the coordinate loop).  
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE power_DFT(Ex,Ey,Ez,Hx,Hy,Hz,nx,ny,nz,t,ts)

USE globalvar_mod, ONLY : dt, nts, my_id, dtdmu, dims

!------------------------------------------------------------------------------
!                     A r g u m e n t s
!------------------------------------------------------------------------------

real(kind=rfp), intent(in   ),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(in   ),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(in   ),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

real(kind=rfp), intent(in   ),                                                &
 dimension(Hxsize(1):Hxsize(2), Hxsize(3):Hxsize(4), Hxsize(5):Hxsize(6)) :: Hx
real(kind=rfp), intent(in   ),                                                &
 dimension(Hysize(1):Hysize(2), Hysize(3):Hysize(4), Hysize(5):Hysize(6)) :: Hy
real(kind=rfp), intent(in   ),                                                &
 dimension(Hzsize(1):Hzsize(2), Hzsize(3):Hzsize(4), Hzsize(5):Hzsize(6)) :: Hz

integer                                                     :: nx, ny, nz
real(kind=rfp), intent(in)                                  :: t   ! time
integer, intent(in)                                         :: ts  ! time step

!------------------------------------------------------------------------------
!                     L o c a l   v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ifreq                           ! Frequency counter
integer :: icoords                         ! Coordinate counter
integer :: ipower                          ! Power counter
real(kind=rfp) :: Efield1, Efield2         ! Interpolated TD E-fields
real(kind=rfp) :: Hfield1, Hfield2         ! Interpolated TD H-fields
real(kind=rfp) :: window                   ! Value of window function
type(PowerTyp), pointer    :: tmppower     ! Temporary power pointer
type(PowerCoords), pointer :: tmpcoords    ! Temporary coordinate pointer
integer :: startcoords, endcoords          ! Loop index

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Loop over all POWER entries
tmppower => first_power
startcoords = 1
endcoords = 0
ipower = 1
do while(associated(tmppower))
 if ((tmppower%mine).or.(my_id==master_id)) then

  !! Set window function
  if ( ts > tmppower%window ) then
    window = half + half                                                      &
           * cos( pi * real(ts-tmppower%window, kind=rfp)                     &
                     / real(nts-tmppower%window, kind=rfp) )
  else
    window = one
  end if

  !! Compute exponential functions for all frequencies
  !! Note: A phase compensation of -0.5*dt is applied for the H-fields 
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(ifreq),                                             &
!$OMP SHARED(expfuncE,expfuncH,window)
#endif
  do ifreq = 1, tmppower%nofreq
    expfuncE(ifreq) = exp( (0.0_rfp,-2.0_rfp) * pi * frequency(ifreq,ipower)  &
                    * t )
    expfuncE(ifreq) = expfuncE(ifreq) * window
    expfuncH(ifreq) = exp( (0.0_rfp,-2.0_rfp) * pi * frequency(ifreq,ipower)  &
                    * (t-half*dt) )
    expfuncH(ifreq) = expfuncH(ifreq) * window
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

  !! Update DFT of incident pulse
  !! Note: Multiplication with dt is performed in power_print
  if (my_id==master_id) then
    Ec(:,ipower) = Ec(:,ipower) + expfuncE                                  
!                * excitation(t, power_param, power_PulseType)
  end if

  !! Loop over all the coordinates for this entry
  if (tmppower%mine) then
   endcoords = endcoords + tmppower%nocoords
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO DEFAULT(SHARED), PRIVATE(ifreq,icoords,Efield1,Efield2,Hfield1,Hfield2)
#endif
   do icoords = startcoords, endcoords
          
    !! Interpolate E-fields
    call power_interE(Ex,Ey,Ez,nx,ny,nz,coords_array(:,icoords),Efield1,Efield2)

    !! Interpolate H-fields
    call power_interH(Hx,Hy,Hz,nx,ny,nz,coords_array(:,icoords),Hfield1,Hfield2)

    !! Loop over all frequencies and update DFT of E-fields
    !! Note: Multiplication with dt is performed in power_print
    do ifreq = 1, tmppower%nofreq
      Efreq(1,ifreq,icoords) = Efreq(1,ifreq,icoords)                         &
                             + expfuncE(ifreq) * Efield1
      Efreq(2,ifreq,icoords) = Efreq(2,ifreq,icoords)                         &
                             + expfuncE(ifreq) * Efield2
    end do

    !! Loop over all frequencies and update DFT of H-fields
    !! Note: Multiplication with dt is performed in power_print
    do ifreq = 1, tmppower%nofreq
      Hfreq(1,ifreq,icoords) = Hfreq(1,ifreq,icoords)                         &
                             + expfuncH(ifreq) * Hfield1
      Hfreq(2,ifreq,icoords) = Hfreq(2,ifreq,icoords)                         &
                             + expfuncH(ifreq) * Hfield2
    end do

   end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

  end if

 end if
  !! Next POWER entry
  startcoords = startcoords + tmppower%nocoords
  tmppower => tmppower%next
  ipower = ipower + 1

end do

END SUBROUTINE power_DFT

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       power_print - Compute the transmitted power and write to file
!
! DESCRIPTION
!       Called from leapfrog to calculate the transmitted power and write it
!       to file. The routine can be called during time stepping in order for
!       the user to evaluate the progress. Note, however, that the DFT
!       transformation performed in power_DFT is not complete until after all
!       time stepping is done (though it might well be accurate enough prior
!       to that). 
!
!       The variable called nts in the netCDF file should not be confused
!       with the global variable nts (number of time step to be taken).
!       nts in the netCDF file represents how may times Poynting's vector
!       has been written to this file, i.e., how many times power_print
!       has been called.
!
!       TBC Import a bug fix from frida
!
! ERRORS
!       Checks the range of the twinkle normal and uses netcdf_check_error
!
! SEE ALSO
!       power_DFT, power_init
!
! HISTORY
!       Written by Jonas Hamberg 020814
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE power_print(curpower,icoords,ipower)

USE globalvar_mod, ONLY : dx, dy, dz, dt, my_id, master_id, my_MPI_FLOAT,     &
                          dims, my_MPI_COMM_CART, nnodes
#if !defined(SPEC) 
USE netcdf_common_mod, ONLY : netcdf_check_error
USE netcdf, ONLY : nf90_inquire_dimension, nf90_inq_varid, nf90_inq_dimid,    &
                   nf90_put_var, nf90_open, nf90_close, nf90_write
#endif

#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     A r g u m e n t s
!------------------------------------------------------------------------------

type(PowerTyp), intent(in) :: curpower     ! The power entry to compute
integer, intent(inout) :: icoords          ! Coordinate counter
integer, intent(in) :: ipower              ! Number of POWER entry

!------------------------------------------------------------------------------
!                     L o c a l   v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ifreq                           ! Frequency counter
integer :: normal                          ! Normal of twinkle
real(kind=rfp) :: dS                       ! Area of twinkle (unit cell face)
real(kind=rfp) :: poynting                 ! Component of Poynting's vector
real(kind=rfp) :: halfdt2                  ! 0.5 * dt^2
type(PowerCoords), pointer :: tmpcoords    ! Temporary coordinate pointer
character(len=80)  :: nc_power_file        ! Name of netCDF file
integer :: ncid                            ! Id of netCDF file
integer :: err                             ! NetCDF error code
integer :: nts_id, power_id, Ec_id         ! NetCDF identifiers
integer :: nc_step                         ! The number of time steps written

real(kind=rfp), dimension(:), allocatable :: poynting_vec_temp
integer :: ierr, allocstat
#if defined(SPEC)
integer :: ios
#endif

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Initialize
allocate(poynting_vec_temp(1:curpower%nofreq), STAT=allocstat)
poynting_vec_temp = 0.0_rfp

if (rfp==dfp) then
  halfdt2 = half * dt * dt
else
  !! Trick to avoid underflow in 32-bit precision added by ulfa
  !! tiny(sfp)=1.175494E-38 and dt*dt*ds~=10E-45
  write(*,*) 'WARNING on power_print: 32-bit precision is used.'
  write(*,*) 'Hence we multiply Poynting with dt^2'
  halfdt2 = half 
end if
poynting_vec = zero

if (curpower%mine) then
  !! Loop over all the coordinates for this entry
  tmpcoords => curpower%coords
  do while(associated(tmpcoords))
         
    !! Get the normal of the twinkle
    normal = tmpcoords%coords(1)
    
    !! Compute the twinkle area
    select case ( abs(normal) )
    case (1)
      dS = dy * dz
    case (2)
      dS = dx * dz
    case (3)
      dS = dx * dy
    case default
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Normal out of range [1,3] in power_print'
#endif
      write(*,*) 'FATAL ERROR! Normal out of range [1,3] in power_print'
      write(*,*) 'Normal = ', normal
#if !defined(SPEC) || defined(SPEC_MPI)
      CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
      stop
    end select

    !! Multiply the area with the sign of the unit normal
    if ( normal < 0 ) then
      dS = -dS
    end if
    
    !! Compute the power for all frequencies
    do ifreq = 1, curpower%nofreq

      !! Compute component of Poynting's vector
      !! Note: The factor dt^2 is a left over from power_DFT
      poynting = halfdt2                                                      &
                 * real( Efreq(1,ifreq,icoords)*conjg(Hfreq(1,ifreq,icoords)) &
                       - Efreq(2,ifreq,icoords)*conjg(Hfreq(2,ifreq,icoords)),&
                         kind=rfp )
      !! Add contribution to the power
      poynting_vec(ifreq) = poynting_vec(ifreq) + poynting * dS

    end do

    !! Next coordinate
    tmpcoords => tmpcoords%next
    icoords = icoords + 1
         
  end do

end if

!! We collect the power data from all processors in the root processor
!! Note that all nodes participate. We could create a new communicator for this.
if (nnodes>1) then
#if defined(SPEC) && !defined(SPEC_MPI)
  write (*,*) 'It should not be possible to have nnodes>1 in serial code'
  stop
#else
  call MPI_REDUCE(poynting_vec,poynting_vec_temp,curpower%nofreq,my_MPI_FLOAT,&
                  MPI_SUM,master_id,my_MPI_COMM_CART,ierr)
#endif
  poynting_vec = poynting_vec_temp
   
end if

if (my_id==master_id) then

#if defined(SPEC)
    open(unit=57, file='pscyee.out', status='unknown', IOSTAT=ios, position='append')
    if (ios/=0)then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
      write(error_unit,*) 'FATAL ERROR! Failed to open file pscyee.out'
#endif
      write(*,*) 'FATAL ERROR! Failed to open file pscyee.out'
      stop
    end if
    write(57,*) 'POWER = '
    write(57,'(1x, 1p, 3(e21.14, 1x))')  poynting_vec(1:curpower%nofreq)
    write (57,*) 'Ec = '
    write(57,'(1x, 1p, e21.14, ", ", e21.14, ",")')  &
         dt*(ec(1:curpower%nofreq,ipower))
    close(57)
#else
   
  !! Open netCDF file
  nc_power_file = TRIM(curpower%filenamebase)//'_power.nc'
  err = nf90_open(nc_power_file, nf90_write, ncid)
  call netcdf_check_error(err)

  !! Get variable id for Ec
  err = nf90_inq_varid(ncid, 'Ec', Ec_id)
  call netcdf_check_error(err)

  !! Get variable id for power
  err = nf90_inq_varid(ncid, 'power', power_id)
  call netcdf_check_error(err)

  !! Get variable id for nts
  err = nf90_inq_dimid(ncid, 'nts', nts_id)
  call netcdf_check_error(err)

  !! Get number of written time steps (the unlimited dimension)
  err = nf90_inquire_dimension(ncid, nts_id, len=nc_step)
  call netcdf_check_error(err)

  !! Write incident wave to netCDF file
  err = nf90_put_var(ncid, Ec_id, dt*real(Ec(1:curpower%nofreq,ipower),       &
                     kind=rfp), stride=(/2,1/), count=(/1,curpower%nofreq/))
  call netcdf_check_error(err)
  err = nf90_put_var(ncid, Ec_id, dt*aimag(Ec(1:curpower%nofreq,ipower)),     &
                  start=(/2,1/), stride=(/2,1/), count=(/1,curpower%nofreq/))
  call netcdf_check_error(err)

  !! Write power to netCDF file
  nc_step=nc_step+1
  err = nf90_put_var(ncid, power_id, poynting_vec(1:curpower%nofreq),         &
                     (/1, nc_step/))
  call netcdf_check_error(err)

  !! Close file
  err = nf90_close(ncid)
  call netcdf_check_error(err)
#endif

end if

END SUBROUTINE power_print

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       power_interE - Interpolates the E-fields on a given twinkle
!
! DESCRIPTION
!       Given the normal and indices [imin imax jmin jmax kmin kmax] of a
!       surface twinkle, returns the two E-fields corresponding to the
!       interpolated values at the centre of the twinkle. The two components
!       returned are in the plane of the twinkle.
!
! ERRORS
!       Sanity check of the normal is made
!
! SEE ALSO
!       Read_power
!
! HISTORY
!       Written by Jonas Hamberg 020814
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE power_interE(Ex,Ey,Ez,nx,ny,nz,coords,E1,E2)
#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     A r g u m e n t s
!------------------------------------------------------------------------------

real(kind=rfp), intent(in   ),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(in   ),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(in   ),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

integer :: nx, ny, nz
integer, dimension(7), intent(in) :: coords ! Coordinates of twinkle
real(kind=rfp), intent(out) :: E1, E2       ! Interpolated E-fields

!------------------------------------------------------------------------------
!                     L o c a l   v a r i a b l e s
!------------------------------------------------------------------------------

integer :: normal                           ! Normal of twinkle
integer :: i, j, k                          ! Index of twinkle
integer :: ierr

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Get the coordinates of the twinkle
! Note: The sign of the normal is insignificant here.
!       Twinkles must be one cell wide, which is checked in Read_power.
normal = abs( coords(1) )
i      = coords(2)
j      = coords(4)
k      = coords(6)

! Interpolate the E-fields at the edge of the twinkle to its centre
! Note: The order of E1 and E2 is highly significant to the vector
!       product computed in power_print. E1 should be the component with the
!       positive sign in the vector product and E2 the one with negative sign.
select case ( normal )
case (1)

  E1 = half * ( Ey(i,j,k) + Ey(i,  j,k+1) )
  E2 = half * ( Ez(i,j,k) + Ez(i,j+1,k  ) )

case (2)

  E1 = half * ( Ez(i,j,k) + Ez(i+1,j,k  ) )
  E2 = half * ( Ex(i,j,k) + Ex(i  ,j,k+1) )

case (3)

  E1 = half * ( Ex(i,j,k) + Ex(i  ,j+1,k) )
  E2 = half * ( Ey(i,j,k) + Ey(i+1,j  ,k) )

case default

#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! Normal out of range [1,3] in power_interE'
  write(error_unit,*) 'Normal = ', normal
#endif
  write(*,*) 'FATAL ERROR! Normal in POWER out of range [1,3] in power_interE'
  write(*,*) 'Normal = ', normal
#if !defined(SPEC) || defined(SPEC_MPI)
  CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
  stop

end select

END SUBROUTINE power_interE

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       power_interH - Interpolates the H-fields on a given twinkle
!
! DESCRIPTION
!       Given the normal and indices [imin imax jmin jmax kmin kmax] of a
!       surface twinkle, returns the two H-fields corresponding to the
!       interpolated values at the centre of the twinkle. The two components
!       returned are in the plane of the twinkle. (The H-component already
!       located at the centre of the twinkle is normal to the plane of the 
!       twinkle.)
!
! ERRORS
!       Sanity check of the normal is made and the range of the indices is 
!       checked
!
! SEE ALSO
!       Read_power
!
! HISTORY
!       Written by Jonas Hamberg 020814
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE power_interH(Hx,Hy,Hz,nx,ny,nz,coords,H1,H2)
#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     A r g u m e n t s
!------------------------------------------------------------------------------

real(kind=rfp), intent(in   ),                                                &
 dimension(Hxsize(1):Hxsize(2), Hxsize(3):Hxsize(4), Hxsize(5):Hxsize(6)) :: Hx
real(kind=rfp), intent(in   ),                                                &
 dimension(Hysize(1):Hysize(2), Hysize(3):Hysize(4), Hysize(5):Hysize(6)) :: Hy
real(kind=rfp), intent(in   ),                                                &
 dimension(Hzsize(1):Hzsize(2), Hzsize(3):Hzsize(4), Hzsize(5):Hzsize(6)) :: Hz

integer, intent(in) :: nx, ny, nz 
integer, dimension(7), intent(in) :: coords ! Coordinates of twinkle
real(kind=rfp), intent(out) :: H1, H2       ! Interpolated H-fields

!------------------------------------------------------------------------------
!                     L o c a l   v a r i a b l e s
!------------------------------------------------------------------------------

integer :: normal                           ! Normal of twinkle
integer :: i, j, k                          ! Index of twinkle
real(kind=rfp) :: H1_low , H2_low           ! H-fields at lower edge of twinkle
real(kind=rfp) :: H1_high, H2_high          ! H-fields at higher edge of tw.
logical :: error                            ! True if error found
integer :: ierr

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Get the coordinates of the twinkle
! Note: The sign of the normal is insignificant here.
!       Twinkles must be one cell wide, which is checked in Read_power.
normal = abs( coords(1) )
i      = coords(2)
j      = coords(4)
k      = coords(6)

! Check the range of the indices
error = .false.
select case ( normal )
case (1)

  if ( i<2  .OR. j<1      .OR. k<1 .OR.                                       &
       i>nx .OR. j>(ny-1) .OR. k>(nz-1) ) then
    error = .true.
  end if

case (2)

  if ( i<1      .OR. j<2  .OR. k<1 .OR.                                       &
       i>(nx-1) .OR. j>ny .OR. k>(nz-1) ) then
    error = .true.
  end if

case (3)

  if ( i<1      .OR. j<1      .OR. k<2 .OR.                                   &
       i>(nx-1) .OR. j>(ny-1) .OR. k>nz ) then
    error = .true.
  end if

case default

#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! Normal out of range [1,3] in power_interH'
  write(error_unit,*) 'Normal = ', normal
#endif
  write(*,*) 'FATAL ERROR! Normal in POWER out of range [1,3] in power_interH'
  write(*,*) 'Normal = ', normal
#if !defined(SPEC) || defined(SPEC_MPI)
  CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
  stop

end select

!if ( error ) then

!  write(*,*) 'FATAL ERROR! Index in POWER out of range'
!  write(*,*) 'Move your surface further from the outer boundary'
!  CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
!  stop

!end if

! Interpolate the H-fields to be in the plane of the twinkle
! Note: In the reference given under "METHOD" above, a geometric mean value
!       together with an assumed 1/r dependence of the outgoing waves is used
!       when performing the interpolation (in the frequency domain). In this
!       implementation, however, we might be very much in the near field, so
!       that approach is not likely to be more accurate than a plain linear
!       interpolation in the time domain.
select case ( normal )
case (1)

  H1_low  = half * ( Hz(i-1,j  ,k  ) + Hz(i  ,j  ,k  ) )
  H1_high = half * ( Hz(i-1,j  ,k+1) + Hz(i  ,j  ,k+1) )
  H2_low  = half * ( Hy(i-1,j  ,k  ) + Hy(i  ,j  ,k  ) )
  H2_high = half * ( Hy(i-1,j+1,k  ) + Hy(i  ,j+1,k  ) )

case (2)

  H1_low  = half * ( Hx(i  ,j-1,k  ) + Hx(i  ,j  ,k  ) )
  H1_high = half * ( Hx(i+1,j-1,k  ) + Hx(i+1,j  ,k  ) )
  H2_low  = half * ( Hz(i  ,j-1,k  ) + Hz(i  ,j  ,k  ) )
  H2_high = half * ( Hz(i  ,j-1,k+1) + Hz(i  ,j  ,k+1) )

case (3)

  H1_low  = half * ( Hy(i  ,j  ,k-1) + Hy(i  ,j  ,k  ) )
  H1_high = half * ( Hy(i  ,j+1,k-1) + Hy(i  ,j+1,k  ) )
  H2_low  = half * ( Hx(i  ,j  ,k-1) + Hx(i  ,j  ,k  ) )
  H2_high = half * ( Hx(i+1,j  ,k-1) + Hx(i+1,j  ,k  ) )

case default

#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! Normal out of range [1,3] in power_interH'
  write(error_unit,*) 'Normal = ', normal
#endif
  write(*,*) 'FATAL ERROR! Normal in POWER out of range [1,3] in power_interH'
  write(*,*) 'Normal = ', normal
#if !defined(SPEC) || defined(SPEC_MPI)
  CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
  stop

end select

! Interpolate the H-fields at the edge of the twinkle to its centre
! Note: The order of H1 and H2 is highly significant to the vector
!       product computed in power_print. H1 should be the component with the
!       positive sign in the vector product and H2 the one with negative sign.
H1 = half * ( H1_low + H1_high )
H2 = half * ( H2_low + H2_high )

END SUBROUTINE power_interH

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Read_power - Reads parameters for the calculation of transmitted power
!
! DESCRIPTION
!       Called from Parser to read data under the keyword POWER
!
! ERRORS
!       Wrong format halts the program
!
! HISTORY
!       Written by Lennart Hellström
!       Modified from Read_smallap by Jonas Hamberg 020812
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Read_power(pp)

USE Readline_mod, ONLY : readline
USE globalvar_mod, ONLY : coords, my_id, ny_global, nx_global, nz_global,     &
                          master_id, dims, my_MPI_COMM_CART, nnodes

#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     A r g u m e n t s
!------------------------------------------------------------------------------

integer :: pp

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ios, stat, ierr, allocstat, size
character(len=80) :: power_file
type(PowerCoords), pointer :: tempcoords

character(11) :: datfilename
character(80) :: line
! keywords is only used so that readline can be used unaltered.
character(80), PARAMETER, dimension(1:2) :: keywords =                        &
 (/'PROBLEMSIZE                   ', 'CELLSIZE                      ' /)

integer :: xb, yb, zb, no_of_twinkles, jj, rank_id
integer, dimension(3) :: owner_coords
integer, dimension(:,:), allocatable :: tcoords

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

size = nx_global*nz_global

write(datfilename,'(A,I1,A)') 'power', pp, '.dat'
open(unit=9, file=datfilename, status='old', IOSTAT=ios)
if (ios/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! failed to open file ', datfilename
#endif
  write(*,*) 'FATAL ERROR! failed to open file ', datfilename
#if !defined(SPEC) || defined(SPEC_MPI)
  CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
  stop
end if

power_file = 'default_power.def'

if (associated(first_power)) then
  allocate(last_power%next, STAT=stat)
  last_power => last_power%next
else
  allocate(last_power, STAT=stat)
  first_power => last_power
end if
nullify(last_power%coords)
nullify(last_power%next)

! Default values
last_power%stride       = HUGE(0)
last_power%skip         = 0
last_power%filenamebase = 'output'
last_power%nofreq       = 0
last_power%freqfirst    = zero
last_power%freqlast     = zero
last_power%window       = HUGE(0)
last_power%y_index      = 1
last_power%mine         = .false.

do
  call readline(80,keywords,line,9)
  select case (line)
  case('Filename')
    call readline(80,keywords,line,9)
    if (line/='' .and. line/='EOF') then
      power_file = TRIM(line)
    else
!      call check_ios(1,'POWER, Filename')
    end if
  case('Stride')
    call readline(80,keywords,line,9)
    read(line,*,IOSTAT=ios) last_power%stride
  case('Skip')
    call readline(80,keywords,line,9)
    read(line,*,IOSTAT=ios) last_power%skip
  case('Filenamebase')
    call readline(80,keywords,line,9)
    if (line/='' .and. line/='EOF') then
      last_power%filenamebase = TRIM(line)
    else
!      call check_ios(1,'POWER, Filenamebase')
    end if
  case('Freq_no')
    call readline(80,keywords,line,9)
    read(line,*,IOSTAT=ios) last_power%nofreq
  case('Freq_interval')
    call readline(80,keywords,line,9)
    read(line,*,IOSTAT=ios) last_power%freqfirst, last_power%freqlast
  case('Window_start')
    call readline(80,keywords,line,9)
    read(line,*,IOSTAT=ios) last_power%window
  case('Yindex')
    call readline(80,keywords,line,9)
    read(line,*,IOSTAT=ios) last_power%y_index
    if (mod(last_power%y_index,ny_global/dims(2))==0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
      write(error_unit,*) 'FATAL ERROR in read_power  Y-index of power'
      write(error_unit,*) 'plane cannot coincide with block boundary '
#endif
      write(*,*) 'FATAL ERROR in read_power'
      write(*,*) 'Y-index of power plane cannot coincide with block boundary '
#if !defined(SPEC) || defined(SPEC_MPI)
      CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
      stop  
    end if
    if ((last_power%y_index/(ny_global/dims(2)))==coords(2)) then
      yb = (last_power%y_index)/(ny_global/dims(2))
      last_power%mine = .true.
    end if
  case('EOF')
    exit
  case('')
    exit
  case default
  end select
end do

! Each node with last_power%mine=.true. reads the whole Power plane
! and then finds it's own part (by saving components in a
! temporary array) and then saves it. TBC, better if master reads.

if (last_power%mine) then
  allocate(tcoords(1:size,1:7), STAT=allocstat)

  no_of_twinkles = 0

  open(unit=23, file=power_file, status='old', IOSTAT=ios)
  if (ios/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! failed to open file ', power_file
#endif
    write(*,*) 'FATAL ERROR! failed to open file ', power_file
#if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
    stop
  end if

  allocate(last_power%coords,STAT=stat)

  tempcoords => last_power%coords
  nullify(tempcoords%next)

  call readline(80,keywords,line,23)
  if (line /= 'EOF' .and. line /= '') then
    read(line,*,IOSTAT=ios) tempcoords%coords(1:7)
    if ( tempcoords%coords(2)/=tempcoords%coords(3) .OR.                      &
         tempcoords%coords(4)/=tempcoords%coords(5) .OR.                      &
         tempcoords%coords(6)/=tempcoords%coords(7) ) then
      write(*,*)'ERROR! In POWER while reading ', TRIM(power_file)
      write(*,*)'Plates larger than one cell are currently not allowed'
#if !defined(SPEC) || defined(SPEC_MPI)
      CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
      stop
    end if

    !! Find the processor ID number
    xb = (tempcoords%coords(2)-1)/(nx_global/dims(1))      
    zb = (tempcoords%coords(6)-1)/(nz_global/dims(3))
      
    owner_coords(1) = xb
    owner_coords(2) = yb
    owner_coords(3) = zb
      
    if (nnodes==1) then
      rank_id = my_id
    else
      call MPI_CART_RANK(my_MPI_COMM_CART,owner_coords,rank_id,ierr)
    end if

    if (my_id==rank_id) then

      !! Compute local coordinate values
      tempcoords%coords(1) = tempcoords%coords(1)
      tempcoords%coords(2) = tempcoords%coords(2) - xb*(nx_global/dims(1))
      tempcoords%coords(3) = tempcoords%coords(3) - xb*(nx_global/dims(1))
      tempcoords%coords(4) = tempcoords%coords(4) - yb*(ny_global/dims(2))
      tempcoords%coords(5) = tempcoords%coords(5) - yb*(ny_global/dims(2))
      tempcoords%coords(6) = tempcoords%coords(6) - zb*(nz_global/dims(3))
      tempcoords%coords(7) = tempcoords%coords(7) - zb*(nz_global/dims(3))

      no_of_twinkles = no_of_twinkles+1
      !! Save the components in the temporary array
      tcoords(no_of_twinkles,1:7)=tempcoords%coords(1:7)
      
    else
    end if
    
  else
!  call check_ios(1,'power coordinates')
  end if

  do 
    call readline(80,keywords,line,23)
    if (line /= 'EOF' .and. line/= '') then
      allocate(tempcoords%next,STAT=stat)
      tempcoords => tempcoords%next
      nullify(tempcoords%next)
      read(line,*,IOSTAT=ios) tempcoords%coords(1:7)
      if ( tempcoords%coords(2)/=tempcoords%coords(3) .OR.                    &
           tempcoords%coords(4)/=tempcoords%coords(5) .OR.                    &
           tempcoords%coords(6)/=tempcoords%coords(7) ) then
        write(*,*)'ERROR! In POWER while reading ', TRIM(power_file)
        write(*,*)'Plates larger than one cell are currently not allowed'
#if !defined(SPEC) || defined(SPEC_MPI)
        CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#endif
        stop
      end if

      !! Find the processor ID number
      xb = (tempcoords%coords(2)-1)/(nx_global/dims(1))      
      zb = (tempcoords%coords(6)-1)/(nz_global/dims(3))
      
      owner_coords(1) = xb
      owner_coords(2) = yb
      owner_coords(3) = zb
      
      if (nnodes==1) then
        rank_id=my_id
      else
        call MPI_CART_RANK(my_MPI_COMM_CART,owner_coords,rank_id,ierr)
      end if

      if (my_id==rank_id) then

        !! Compute local coordinate values
        tempcoords%coords(1) = tempcoords%coords(1)
        tempcoords%coords(2) = tempcoords%coords(2) - xb*(nx_global/dims(1))
        tempcoords%coords(3) = tempcoords%coords(3) - xb*(nx_global/dims(1))
        tempcoords%coords(4) = tempcoords%coords(4) - yb*(ny_global/dims(2))
        tempcoords%coords(5) = tempcoords%coords(5) - yb*(ny_global/dims(2))
        tempcoords%coords(6) = tempcoords%coords(6) - zb*(nz_global/dims(3))
        tempcoords%coords(7) = tempcoords%coords(7) - zb*(nz_global/dims(3))
        
        no_of_twinkles = no_of_twinkles +1
        !! Save the components in the temporary array
        tcoords(no_of_twinkles,1:7)=tempcoords%coords(1:7)
        
      else               
      end if
      
    else
      exit
    end if
  end do

! If no_of_twinkles>0 then the node has a part of the Power plane and it
! copies it's own data from the temporary array
  if (no_of_twinkles>0) then
    allocate(last_power%coords,STAT=stat)
    tempcoords => last_power%coords
    nullify(tempcoords%next)
    tempcoords%coords(1:7)=tcoords(1,1:7)
      
    if (no_of_twinkles>1) then
      do jj=2,no_of_twinkles
        allocate(tempcoords%next,STAT=stat)
        tempcoords => tempcoords%next
        nullify(tempcoords%next)
        tempcoords%coords(1:7)=tcoords(jj,1:7)
      end do
    end if
  else
    last_power%mine = .false.
  end if
   
  close(23)
  deallocate(tcoords, STAT=allocstat)
   
end if

close(9)

if (my_id==master_id) then
  write(*,*) '*******POWER*******************************'
  write(*,*) 'Input file    :   ',TRIM(power_file)
  write(*,*) 'Stride:           ',last_power%stride
  write(*,*) 'Skip:             ',last_power%skip
  write(*,*) 'Filenamebase:     ',TRIM(last_power%filenamebase)
  write(*,*) 'No. frequencies:  ',last_power%nofreq
  write(*,*) 'First frequency:  ',last_power%freqfirst
  write(*,*) 'Last frequency:   ',last_power%freqlast
  write(*,*) 'DFT window start: ',last_power%window
  write(*,*) 'Y-index (global): ',last_power%y_index
  write(*,*) '==========================================='
  write(*,*) trim(power_file), ' will belong to nodes in y-block: ',          &
             (last_power%y_index)/(ny_global/dims(2))
  write(*,*) '==========================================='
end if

END SUBROUTINE Read_power

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       power_updateH - perform extra leap-frog update on H fields near bound.
!
! DESCRIPTION
!       Perform extra leap-frog update on H fields near block boundaries.
!       Hx(nx+1,:,:) and  Hz(:,:,nz+1) are computed
!       They are needed in order to enable interpolation in power_interH.
!
!       If the twinkle has local index (nx,j,k) we need these four H-fields:
!         Hx(nx  ,j-1:j,k   )  (updated by updateH in update.f90)
!         Hx(nx+1,j-1:j,k   )  (updated in this routine) 
!       Hx(nx+1,j,k) uses Ey(nx+1,j,k:k+1) & Ez(nx+1,j:j+1,k). These are the 
!       components that are sent by the upper x-neighbor in SUBROUTINE 
!       communicateE.
!
!       If the twinkle has local index (i,j,nz) we need these four H-fields:
!         Hz(i   ,j-1:j,nz  )  (updated by updateH in update.f90)
!         Hz(i   ,j-1:j,nz+1)  (updated in this routine) 
!
!       Hz(i,j,nz+1) uses Ex(i,j:j+1,nz+1) & Ey(i:i+1,j,nz+1). These are the 
!       components that are sent by the upper z-neighbor in SUBROUTINE 
!       communicateE.
!
!       We cannot yet handle the case of a twinkle having local index (nx,j,nz)
!       Hence the limitation that either px or pz must be one.
!
!       A lot of unnecessary computation is made. We would only need to do it 
!       for y-index!? TBC Fix this
!
! SYNOPSIS
!       call updateH(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
!       call power_updateH(Ex,Ey,Ez,Hx,Hy,Hz,nx,ny,nz)
!
!       This routine must be called prior to the call to communicateE. Hence,
!       we cannot simply put this stuff power_DFT (Maybe we could, but at the
!       end, i.e., doing it one time step ahead of time.)
!
! ERRORS
!       none
!
! SEE ALSO
!       updateH in update.f90
!
! HISTORY
!       Written by Ulf Andersson 2006-07-15 (by moving out from leapfrog.f90)
!
!       2010-12-31: Made sure that this is not done at the outer boundary. 
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE power_updateH(Ex,Ey,Ez,Hx,   Hz,nx,ny,nz)

USE globalvar_mod, ONLY : dxinv, dyinv, dzinv, dtdmu, dims, coords

!------------------------------------------------------------------------------
!                     A r g u m e n t s
!------------------------------------------------------------------------------

real(kind=rfp), intent(in   ),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(in   ),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(in   ),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

real(kind=rfp), intent(inout),                                                &
 dimension(Hxsize(1):Hxsize(2), Hxsize(3):Hxsize(4), Hxsize(5):Hxsize(6)) :: Hx
real(kind=rfp), intent(inout),                                                &
 dimension(Hzsize(1):Hzsize(2), Hzsize(3):Hzsize(4), Hzsize(5):Hzsize(6)) :: Hz

integer                                                        :: nx, ny, nz

!------------------------------------------------------------------------------
!                     L o c a l   v a r i a b l e s
!------------------------------------------------------------------------------

real(kind=rfp) :: Cbdx, Cbdy, Cbdz

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

Cbdx = dtdmu*dxinv
Cbdy = dtdmu*dyinv
Cbdz = dtdmu*dzinv
  
if ( coords(1) < (dims(1)-1) ) then
  Hx(nx+1,1:ny,1:nz  ) = Hx(nx+ 1,1:ny  ,1:nz) +                              &
       (  (Ey(nx+1,1:ny,2:nz+1) - Ey(nx+1,1:ny  ,1:nz))*Cbdz +                &
          (Ez(nx+1,1:ny,1:nz  ) - Ez(nx+1,2:ny+1,1:nz))*Cbdy  )
end if

if ( coords(3) < (dims(3)-1) ) then
  Hz(1:nx,1:ny  ,nz+1) = Hz(1:nx  ,1:ny,nz+1) +                               &
       (  (Ex(1:nx,2:ny+1,nz+1) - Ex(1:nx  ,1:ny,nz+1))*Cbdy +                &
          (Ey(1:nx,1:ny  ,nz+1) - Ey(2:nx+1,1:ny,nz+1))*Cbdx  )
end if

END SUBROUTINE Power_UpdateH

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE power_mod

