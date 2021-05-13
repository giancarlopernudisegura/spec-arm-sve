!+
! NAME
!       globalvar_mod - Global variables
!
! DESCRIPTION
!       Global variables
!
! SEE ALSO
!       parameter_mod
!
! HISTORY
!       Written by Ulf Andersson
!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE globalvar_mod

USE parameter_mod
IMPLICIT NONE

!==============================================================================
! Variables given in yee.dat
!==============================================================================
integer, dimension(ndims) :: dims       ! domain decomposition px, py, pz
integer :: nx_global,ny_global,nz_global ! problem size
real(kind=rfp) :: dx, dy, dz            ! spatial discretization
integer :: nts                          ! number of time steps
integer :: number_of_runs               ! how many times we shall run the code
integer :: pulse                        ! pulse-type
integer :: out, ds, stride              ! output related variables
integer :: OBC                          ! Outer Boundary Condition (PEC or Mur)
integer :: probe_number                 ! Number of point probes
integer, allocatable, dimension(:) :: probe ! Point probe positions

!==============================================================================
! Variables calculated from variables given in yee.dat
!==============================================================================
real(kind=rfp) :: dxinv, dyinv, dzinv   ! inverse of spatial discretization
real(kind=rfp) :: dt, dtdmu, dtdeps     ! temporal discretization
integer        :: number_of_PML_cells   ! =max(0,OBC)
integer        :: xstart, ystart, zstart, xstop, ystop, zstop

integer, dimension(6) :: Exsize
integer, dimension(6) :: Eysize
integer, dimension(6) :: Ezsize
integer, dimension(6) :: Hxsize
integer, dimension(6) :: Hysize
integer, dimension(6) :: Hzsize

! MPI variables that are defined in init
integer :: my_MPI_FLOAT, my_id, nnodes
integer :: imin, jmin, kmin, my_MPI_COMM_CART    
integer, dimension(ndims) :: coords
logical :: included_Cart

END MODULE globalvar_mod
