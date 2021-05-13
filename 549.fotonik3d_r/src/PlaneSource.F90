!+
! NAME
!       Plane_Source_mod - Plane Source (IMIT style) excitation module.
!
! DESCRIPTION
!       Module for generation of plane source excitation.
!
! METHOD
!       The input files contains single TE modes. They are supplied by IMIT.
!
! PUBLIC
!       SUBROUTINE Plane_Source_Init
!       SUBROUTINE Plane_Source_Apply
!       SUBROUTINE Plane_Source_End
!
! HISTORY
!       Written by Ulf Andersson
!       Imported from GemsTD by Ulf Andersson 2004-11-12
!       Plane source can have any y-index value, ulfa 2006-07-14
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE Plane_Source_mod

USE parameter_mod
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

PUBLIC Plane_Source_Init, Plane_Source_Apply, Plane_Source_End,               &
       Plane_Source_block_index

PRIVATE

real(kind=rfp), dimension(:,:), allocatable :: waveguide
integer :: y_index, stride, Plane_Source_block_index
character(80) :: filename
character(80) :: source_order_of_comp
logical :: symmetrize, print_mode

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       plane_source_init
!
! DESCRIPTION
!       The possibility to use the excitation module of GemsTD is not included.
!       All nodes open PSI.dat. Ugly! TBC
!
! HISTORY
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE plane_source_init(nx,ny,nz)

USE Readline_mod, ONLY : readline
USE globalvar_mod, ONLY : dims, my_id, master_id, ny_global
#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     A r g u m e n t s
!------------------------------------------------------------------------------

integer :: nx, ny, nz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

character(80) :: line
integer :: ios, ierr, y_index_global 
! keywords is only used so that readline can be used unaltered.
character(80), PARAMETER, dimension(1:2) :: keywords =                        &
 (/'PROBLEMSIZE                   ', 'CELLSIZE                      ' /)

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Default values
source_order_of_comp = 'trains_of_z_values'
symmetrize = .false.
print_mode = .false.
stride = 1

open(unit=9, file='PSI.dat', status='old', IOSTAT=ios)
if (ios/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! Failed to open file PSI.dat'
#endif
  write(*,*) 'FATAL ERROR! Failed to open file PSI.dat'
# if !defined(SPEC) || defined(SPEC_MPI)
  CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
# endif
  stop
end if
do
  call readline(80,keywords,line,9)
  select case (line)
  case('Index')
    call readline(80,keywords,line,9)
    read(line,*) y_index_global
    Plane_Source_block_index = (y_index_global-1)/ny
    y_index = y_index_global - Plane_Source_block_index*ny ! global to local
  case('Filename')
    call readline(80,keywords,line,9)
    read(line,*) Filename
  case('Order_of_components')
    call readline(80,keywords,line,9)
    read(line,*) source_order_of_comp
  case('Symmetrize')
    symmetrize = .true.
  case('Print_mode')
    print_mode = .true.
  case('Stride')
    call readline(80,keywords,line,9)
    read(line,*,IOSTAT=ios) stride
  case('EOF')
    exit
  case('')
    exit
  case default
  end select
end do

if (my_id==master_id) then
  write(*,*) '*******PLANE SOURCE************************'
  write(*,*) 'index (y,global):', y_index_global
  write(*,*) 'index (y,local):', y_index
  write(*,*) 'Plane_Source_block_index = ', Plane_Source_block_index
  write(*,*) 'Filename:', trim(filename)
  write(*,*) 'Source_order_of_comp: ', trim(source_order_of_comp)
  if (symmetrize) then
    write(*,*) 'Symmetrize is TRUE'
  end if
  if (print_mode) then
    write(*,*) 'Print_mode is TRUE'
  end if
  if (stride/=1) then
    write(*,*) 'stride:', stride
  end if
end if

close(9)

! Safety checks
if (y_index_global<2) then ! y_index==1 is bad only on first node.
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR in Plane_source_init! index<2'
#endif
  write(*,*) 'FATAL ERROR in Plane_source_init! index<2'
# if !defined(SPEC) || defined(SPEC_MPI)
  CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
# endif
  stop 
end if
if (y_index_global>=ny_global) then 
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR in Plane_source_init! index>=ny_global'
#endif
  write(*,*) 'FATAL ERROR in Plane_source_init! index>=ny_global'
# if !defined(SPEC) || defined(SPEC_MPI)
  CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
# endif
  stop
end if

Call Plane_Source_Read(nx,nz)
if (my_id==master_id) then
  write(*,*) '*******************************************'
end if

END SUBROUTINE Plane_source_init

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Plane_Source_Read - Reads the mode solution from file.
!
! DESCRIPTION
!       Reads the mode solution from file. Stores it in waveguide(nx+1,nz+1).
!       (The mode solution ASCII file contains the single TE mode.)
!
! METHOD
!       We read the input file into a temporary one-dimensional array.
!       Then, we copy this data into waveguide(:,:). This is a legacy from
!       previous versions that read a binary file.
!
!       The input file must contains one value per line. The order of the data
!       can be either (source_order_of_comp='trains_of_z_values')
!         (x1,z1)-value
!         (x1,z2)-value
!         (x1,z3)-value
!       or (source_order_of_comp='trains_of_x_values')
!         (x1,z1)-value
!         (x2,z1)-value
!         (x3,z1)-value
!       The number of lines in the input file must be (nx+1)*(nz+1)
!
! HISTORY
!       Written by Ulf Andersson
!       Updated by Tommy Sundström March 2004
!       Symmetrize option added by Ulf Andersson 2004-10-15
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Plane_Source_Read(nx,nz)

USE globalvar_mod, ONLY : dims, coords, my_MPI_FLOAT, nx_global, nz_global,   &
                          my_id, my_mpi_comm_cart, nnodes

#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, nz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: allocstat, unit, ios, ii, jj, kk, ierr, kkk, iii
real(kind=sfp), dimension((nx_global+1)*(nz_global+1)):: waveguide1D
real(kind=rfp), dimension(:,:), allocatable :: wg_global
integer, dimension(3) :: recv_coords

#if !defined(SPEC) || defined(SPEC_MPI)
integer :: status(MPI_STATUS_SIZE), nodesize, recv_rank
#else
integer :: status(5), nodesize, recv_rank
#endif
integer, parameter :: plane_tag=1

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Allocate the source field

nodesize = (1+nx)*(1+nz)

if (my_id==master_id) then
  !! Master node reads the data
  allocate(waveguide(1:nx+1,1:nz+1), STAT=allocstat)
  allocate(wg_global(1:nx_global+1,1:nz_global+1), STAT=allocstat)
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation wg_global fail in PlaneSource.f90'
#endif
    write(*,*) 'FATAL ERROR! Allocation of wg_global fsiled in PlaneSource.f90'
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if

  unit = 18
  open(unit=unit, file=filename, form='formatted', status='old', IOSTAT=ios)
  if (ios/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! Failed to open file ', trim(filename)
#endif
    write(*,*) 'FATAL ERROR! Failed to open file ', trim(filename)
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if

  !! DEBUG printout
  if (stride/=1) then
    write(*,*) 'nx_global, nz_global, stride = ', nx_global, nz_global, stride
    write(*,*) 'jj_max = ', (nx_global/stride+1)*(nz_global/stride+1)
  end if
  do jj=1, (nx_global/stride+1)*(nz_global/stride+1)
    read(unit, *, IOSTAT=ios) waveguide1D(jj)  
    if (ios/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
      write(error_unit,*) 'FATAL ERROR! Read error on file ',                 &
               trim(filename),  ', jj = ', jj
#endif
      write(*,*) 'FATAL ERROR! Read error on file ', trim(filename),          &
                 ', jj = ', jj
#     if !defined(SPEC) || defined(SPEC_MPI)
      CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#     endif
      stop
    end if
  end do
  close(unit=unit, IOSTAT=ios)
  if (ios/=0) then
    write(*,*) 'WARNING! Failed to close file:', trim(filename)
  end if

  !! Master node stores the data in a temporary array wg_global(:,:)

  if (source_order_of_comp == 'trains_of_z_values') then
    !! Second component is (x1,z2), third is (x1,z3) etc.
    jj=1
    do ii=1, nx_global+1, stride
      do kk=1, nz_global+1, stride
        wg_global(ii,kk)=waveguide1D(jj)
        jj=jj+1
      end do
    end do

  else if (source_order_of_comp == 'trains_of_x_values') then
    !! Second component is (x2,z1), third is (x3,z1) etc.
    jj=1
    do kk=1,nz_global+1,stride
      do ii=1,nx_global+1,stride
        wg_global(ii,kk) = waveguide1D(jj)
        jj = jj + 1
      end do
    end do

  else   
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write (error_unit,*) 'FATAL ERROR, variable "source_order_of_comp" in ',      &
         '"PlaneSource.f90" has to be either "trains_of_x_values" or ',       &
         '" ...  z...", now it is:', source_order_of_comp
#endif
    write (*,*) 'FATAL ERROR, the variable "source_order_of_comp" in ',       &
         '"PlaneSource.f90" has to be either "trains_of_x_values" or ',       &
         '" ...  z...", now it is:', source_order_of_comp
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if

  if (symmetrize) then
    do kk=1,nz_global+1,stride
      do ii=1,nx_global/2,stride
        wg_global(ii,kk)=0.5*(wg_global(ii,kk)+wg_global(nx_global+2-ii,kk))
        wg_global(nx_global+2-ii,kk) = wg_global(ii,kk)
        !! waveguide(nx_global/2+1,kk) is on the symmetry line & thus unchanged
      end do
    end do
  end if

  !! if stride>1 we need to interpolate
  if (stride==2) then
    !! Stride==2 assumed so far!!!!
    do kk=1,nz_global+1,stride
      do ii=1,nx_global+1,stride
        if ((mod(kk-1,stride)/=0).and.(mod(ii-1,stride)/=0)) then
          if (mod(kk-1,stride)==0) then
            wg_global(ii,kk) = half*(wg_global(ii-1,kk)+wg_global(ii+1,kk))
          else if (mod(ii-1,stride)==0) then
            wg_global(ii,kk) = half*(wg_global(ii,kk-1)+wg_global(ii,kk+1))
          else
            wg_global(ii,kk) =0.25_rfp*(wg_global(ii-1,kk)+wg_global(ii+1,kk) &
                                       +wg_global(ii,kk-1)+wg_global(ii,kk+1) )
          end if
        end if
      end do
    end do
  else if (stride/=1) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! stride in PlaneSource.f90 not supported'
#endif
    write(*,*) 'FATAL ERROR! stride value in PlaneSource.f90 not supported'
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if

  if (print_mode) then
    !! Write variable waveguide on Matlab file
    !! Note that Matlab plots waveguide as a matrix. Suggested Matlab commands:
    !! Plane_Source_2D; clf, mesh(source); xlabel('z'); ylabel('x')
    open(unit=21, file='Plane_Source_2D.m', status='unknown')
    write(21,*) 'source(', nx_global+1, ',', nz_global+1, ')=0;'
    do ii=1,nx_global+1
      do kk=1,nz_global+1
        write(21,*) 'source(', ii, ',', kk, ')=', wg_global(ii,kk), ';'
!      write(21,*) ii, kk, wg_global(ii,kk)
      end do
    end do
    close(21)
  end if

  !! Master node sends to each node its own data
  if (nnodes>1) then
    recv_coords(2) = Plane_Source_block_index
    do iii=0, dims(1)-1
      recv_coords(1) = iii
      do kkk=0, dims(3)-1         
        recv_coords(3) = kkk
        call MPI_CART_RANK(my_MPI_COMM_CART,recv_coords,recv_rank,ierr)
        if (my_id/=recv_rank) then            
          waveguide(1:nx+1,1:nz+1)=wg_global(1+nx*iii:nx*iii+(nx+1),          &
                                           1+nz*kkk:nz*kkk+(nz+1))
          call MPI_SSEND(waveguide,nodesize,my_MPI_FLOAT,recv_rank,plane_tag, &
                       my_MPI_COMM_CART,ierr)
        end if
      end do
    end do
  end if

  !! Give masters its own piece.
  if (Plane_Source_block_index==0) then
    waveguide(1:nx+1,1:nz+1) = wg_global(1:nx+1,1:nz+1)
  end if

  !! Deallocate the global source field
  deallocate(wg_global, STAT=allocstat)
  

else if (coords(2)==Plane_Source_block_index) then

  allocate(waveguide(1:nx+1,1:nz+1), STAT=allocstat)
  call MPI_RECV(waveguide,nodesize,my_MPI_FLOAT,master_id,plane_tag,          &
                my_MPI_COMM_CART,status,ierr)

end if

END SUBROUTINE Plane_Source_Read

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Plane_Source_Apply - Applies plane source to Ex(:,y_index,:).
!
! DESCRIPTION
!       Applies plane source to Ex. It is done as a soft source.
!       (e.g. Ex(:,y_index,:) = Ex(:,y_index,:) + pulse(t)*wavequide(:,:))
!       pulse is usually a modulated Gaussian, but can be any function from 
!       excite_mod.
!
! HISTORY
!       Written by Ulf Andersson
!       Updated by Tommy Sundström March 2004
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Plane_Source_Apply(Ex,nx,ny,nz,ts)

USE globalvar_mod, ONLY : dt, Exsize

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

real(kind=rfp), intent(inout),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
integer, intent(in) :: nx, ny, nz, ts

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ii, kk
real(kind=rfp) :: pulse, t

real(kind=rfp), parameter :: t_0 = 2.633183379602568e-14_rfp
real(kind=rfp), parameter :: t_w = 4.654854559561718e-15_rfp
real(kind=rfp), parameter :: f_0 = 1.934144890322581e+14

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!t = (ts-0.5_rfp)*dt
t = ts*dt
pulse = sin(two*pi*f_0*t)*exp(-((t-t_0)/t_w)**2)

! The size of waveguide is (1:nx+1,1:nz+1) Components Ex(nx+1,:,:) are never 
! used. Hence there is no need to update them
do kk=1,nz+1
  do ii=1,nx
    Ex(ii,y_index,kk) = Ex(ii,y_index,kk) + pulse*waveguide(ii,kk)
  end do
end do

END SUBROUTINE Plane_Source_Apply

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Plane_Source_End - Deallocate plane source data
!
! DESCRIPTION
!       Deallocate PRIVATE plane source data
!
! ERRORS
!       No error handling
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Plane_Source_End

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: allocstat

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if (allocated(waveguide)) then
  deallocate(waveguide, STAT=allocstat)
end if

END SUBROUTINE Plane_Source_End

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE Plane_Source_mod
