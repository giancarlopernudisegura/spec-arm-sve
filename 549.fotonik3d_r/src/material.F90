!+
! NAME
!       material_mod - Update routines for inhomogeneous (eps_r>1) materials
!
! DESCRIPTION
!       Assumes that py is a factor of ny_global (as given in input file)
!
!       If OBJ=0, homogeneous material (vacuum) is assumed
!       If OBJ=1, the master reads one big input file (OBJ.dat)
!       If OBJ/=0 and OBJ=/1 eache node reads a separate input file.
!
! PUBLIC
!       SUBROUTINE Mat_init
!       SUBROUTINE Mat_updateE
!       logical Mat_inhomo 
!       integer(kind=two_byte), dimension(:,:,:), allocatable :: iepx,iepy,iepz
!       real(kind=rfp), dimension(:), allocatable :: Mat_eps_r
!
! SEE ALSO
!       SUBROUTINE dump_iep in material_mod of GemsTD, where the file OBJ.dat
!       is written by:
!         do jj=ny,1,-1
!           do kk=1,nz
!             do ii=1,nx
!               write(9,'(3I3)') iepx(ii,jj,kk), iepy(ii,jj,kk), iepz(ii,jj,kk)
!             end do
!           end do
!         end do
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE material_mod

USE parameter_mod
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

PUBLIC Mat_inhomo, Mat_init, Mat_updateE, iepx, iepy, iepz, Mat_eps_r

PRIVATE

logical :: Mat_inhomo = .false.
integer :: no_of_materials
!integer(kind=two_byte), dimension(:,:,:), allocatable :: iepx,iepy,iepz
integer, dimension(:,:,:), allocatable :: glob_iepx,glob_iepy,glob_iepz
integer, dimension(:,:,:), allocatable :: iepx,iepy,iepz
real(kind=rfp), dimension(:), allocatable :: Dbdx, Dbdy, Dbdz, Mat_eps_r

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Mat_init - Initializes update coefficients
!
! DESCRIPTION
!       Allocates and initializes material arrays and update coefficients
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Mat_init(nx,ny,nz,OBJ)

USE globalvar_mod, ONLY : my_id, dims, coords, my_mpi_comm_cart,              &
                          nx_global, ny_global, nz_global, nnodes,            &
                          dtdeps, dxinv, dyinv, dzinv, my_MPI_FLOAT

#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     A r g u m e n t s
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz, OBJ

!------------------------------------------------------------------------------
!                     L o c a l    v a r i a b l e s
!------------------------------------------------------------------------------

#if !defined(SPEC) || defined(SPEC_MPI)
integer :: status(MPI_STATUS_SIZE), ierr, isize
#else
integer :: status(5),               ierr, isize
integer :: idummy
parameter (idummy=0)
#endif
integer, parameter :: ixtag=1, iytag=2, iztag=3
integer :: ios, allocstat, ii, jj, kk, nn, lmax, gmax
real(kind=rfp) :: eps_r
character(len=80) :: filename
integer :: iii, kkk, recv_id  
integer, dimension(3) :: recv_coords

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Set logical variable
Mat_inhomo = .true.

! Allocate local arrays
allocate(iepx(1:nx,1:ny,1:nz), STAT=allocstat)
allocate(iepy(1:nx,1:ny,1:nz), STAT=allocstat)
allocate(iepz(1:nx,1:ny,1:nz), STAT=allocstat)

! Let the master open and read the input file
if (my_id==master_id) then
  if (OBJ==1) then
    filename = 'OBJ.dat'
  else
    filename = 'OBJ_0.dat'
  end if
  open(unit=9, file=filename, status='old', IOSTAT=ios) 
  if (ios/=0) then
    write(*,*) 'Warning! Failed to open file ', trim(filename), ' in Mat_init'
    no_of_materials = 0
    !! Better Error handling could be introduced
  else
    read(9,*) no_of_materials
    allocate(Mat_eps_r(0:no_of_materials), STAT=allocstat)
    allocate(Dbdx(0:no_of_materials), STAT=allocstat)
    allocate(Dbdy(0:no_of_materials), STAT=allocstat)
    allocate(Dbdz(0:no_of_materials), STAT=allocstat)
    !! Set vacuum values
    Mat_eps_r(0) = 1
    Dbdx(0) = dtdeps*dxinv
    Dbdy(0) = dtdeps*dyinv
    Dbdz(0) = dtdeps*dzinv
    do nn=1,no_of_materials
      read(9,*) eps_r
      Mat_eps_r(nn) = eps_r
      Dbdx(nn) = Dbdx(0)/eps_r 
      Dbdy(nn) = Dbdy(0)/eps_r
      Dbdz(nn) = Dbdz(0)/eps_r
    end do
  end if
  !! Allocate global temporary arrays
  !! It is better to allocate temporary arrays after permanent arrays
  allocate(glob_iepx(1:nx_global,1:ny,1:nz_global), STAT=allocstat)
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of glob_iepx fail material.f90'
#endif
    write(*,*) 'FATAL ERROR! Allocation of glob_iepx failed in material.f90 '
#if defined(SPEC) && !defined(SPEC_MPI)
    write(*,*) 'Aborting'
    stop
#else
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)    
#endif
  end if
  allocate(glob_iepy(1:nx_global,1:ny,1:nz_global), STAT=allocstat)
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of glob_iepy fail material.f90'
#endif
    write(*,*) 'FATAL ERROR! Allocation of glob_iepy failed in material.f90 '
#   if defined(SPEC) && !defined(SPEC_MPI)
    write(*,*) 'Aborting'
    stop
#   else
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)    
#   endif
  end if
  allocate(glob_iepz(1:nx_global,1:ny,1:nz_global), STAT=allocstat)
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of glob_iepz fail material.f90 '
#endif
    write(*,*) 'FATAL ERROR! Allocation of glob_iepz failed in material.f90 '
#   if defined(SPEC) && !defined(SPEC_MPI)
    write(*,*) 'Aborting'
    stop
#   else
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)    
#   endif
  end if
  write(*,*) 'Global temporary arrays for iep[xyz] allocated on master'
  write(*,*) 'size (Mbytes) of each of the three arrays is ',                 &
              4*nx_global*ny*nz_global/1024/1024
end if

! There is no my_MPI_COMM_CART if we only have one node!
if (nnodes>1) then
# if defined(SPEC) && !defined(SPEC_MPI)
  write (*,*) 'Wait - nnoodes should be 1 in serial code, right?'
  stop
# else
  call MPI_BCAST(no_of_materials,1,MPI_integer,master_id,my_MPI_COMM_CART,ierr)
  if (my_id/=master_id) then
    allocate(Mat_eps_r(0:no_of_materials), STAT=allocstat)
    allocate(Dbdx(0:no_of_materials), STAT=allocstat)
    allocate(Dbdy(0:no_of_materials), STAT=allocstat)
    allocate(Dbdz(0:no_of_materials), STAT=allocstat)
  end if
  call MPI_BCAST(Mat_eps_r,no_of_materials+1,my_MPI_FLOAT,master_id,          &
                 my_MPI_COMM_CART,ierr)
  call MPI_BCAST(Dbdx,no_of_materials+1,my_MPI_FLOAT,master_id,               &
                 my_MPI_COMM_CART,ierr)
  call MPI_BCAST(Dbdy,no_of_materials+1,my_MPI_FLOAT,master_id,               &
                 my_MPI_COMM_CART,ierr)
  call MPI_BCAST(Dbdz,no_of_materials+1,my_MPI_FLOAT,master_id,               &
                 my_MPI_COMM_CART,ierr)
# endif
end if

if (OBJ==1) then ! The master reads one big file.
  !! Read the iepx values etc. and scatter them
  !! Assume that they are in descending y-plane order.
  !! Each plane is then in (x1,z1), (x2,z1) order
  isize = nx*ny*nz
  if (my_id==master_id) then
    do nn=dims(2)-1,0,-1
      do jj=ny,1,-1
        if ((isize*nnodes)>1e8) then
          write(*,*) 'Mat_init: y-slice', nn*ny+jj
        end if
        do kk=1,nz_global
          do ii=1,nx_global
            !! Master node stores the data in the temporary global array
            read(9,*) glob_iepx(ii,jj,kk), glob_iepy(ii,jj,kk),               &
                      glob_iepz(ii,jj,kk)
          end do
        end do
      end do
      
      do kkk=0, dims(3)-1
        do iii=0, dims(1)-1
               
          recv_coords(1) = iii
          recv_coords(2) = nn
          recv_coords(3) = kkk                  
          
          if ((kkk+iii+nn)/=0) then
                  
            call MPI_CART_RANK(my_MPI_COMM_CART,recv_coords,recv_id,ierr)
                  
            iepx = glob_iepx(1+nx*iii:iii*nx+nx,1:ny,1+nz*kkk:kkk*nz+nz)
            iepy = glob_iepy(1+nx*iii:iii*nx+nx,1:ny,1+nz*kkk:kkk*nz+nz)
            iepz = glob_iepz(1+nx*iii:iii*nx+nx,1:ny,1+nz*kkk:kkk*nz+nz)
                  
#           if defined(SPEC) && !defined(SPEC_MPI)
!           These should be resolved from MPI_dummy
            call MPI_SSEND(iepx,isize,idummy,recv_id,ixtag,              &
                           my_MPI_COMM_CART,ierr)
            call MPI_SSEND(iepy,isize,idummy,recv_id,iytag,              &
                           my_MPI_COMM_CART,ierr)
            call MPI_SSEND(iepz,isize,idummy,recv_id,iztag,              &
                           my_MPI_COMM_CART,ierr)                    
#           else
            call MPI_SSEND(iepx,isize,MPI_INTEGER,recv_id,ixtag,              &
                           my_MPI_COMM_CART,ierr)
            call MPI_SSEND(iepy,isize,MPI_INTEGER,recv_id,iytag,              &
                           my_MPI_COMM_CART,ierr)
            call MPI_SSEND(iepz,isize,MPI_INTEGER,recv_id,iztag,              &
                           my_MPI_COMM_CART,ierr)                    
#           endif
                  
          else
          end if
        end do
      end do
    end do

    !! Make sure the master get the correct part of the global value
    iepx = glob_iepx(1:nx,1:ny,1:nz)
    iepy = glob_iepy(1:nx,1:ny,1:nz)
    iepz = glob_iepz(1:nx,1:ny,1:nz)
      
    close(9)
  else
#   if defined(SPEC) && !defined(SPEC_MPI)
    write (*,*) 'If we are in serial mode, I do not think we are supposed'
    write (*,*) 'to be trying to call MPI_RECV'
    stop
#   else
    call MPI_RECV(iepx,isize,MPI_INTEGER,master_id,ixtag,my_MPI_COMM_CART,    &
                  status,ierr)
    call MPI_RECV(iepy,isize,MPI_INTEGER,master_id,iytag,my_MPI_COMM_CART,    &
                  status,ierr)
    call MPI_RECV(iepz,isize,MPI_INTEGER,master_id,iztag,my_MPI_COMM_CART,    &
                  status,ierr)
#   endif
  end if

else ! All nodes read individual files
  !! The master has already opened its file
  if (my_id/=master_id) then
    if (my_id<10) then
      write(filename,'(A,I1,A)') 'OBJ_', my_id, '.dat'
    elseif (my_id<100) then
      write(filename,'(A,I2,A)') 'OBJ_', my_id, '.dat'
    else
      write(filename,'(A,I3,A)') 'OBJ_', my_id, '.dat'
    end if
    open(unit=9, file=filename, status='old', IOSTAT=ios) 
    if (ios/=0) then
      write(*,*) 'Warning! Failed to open file ', trim(filename),             &
                 ' in Mat_init'
      stop
    end if
  else
    write(*,*) 'Each node reads its own OBJ_N.dat file' 
  end if
  !! read the file
  do jj=ny,1,-1
    do kk=1,nz_global
      do ii=1,nx_global
        read(9,*) iepx(ii,jj,kk), iepy(ii,jj,kk), iepz(ii,jj,kk)
      end do
    end do
  end do
  close(9)

end if

! A safety check.
lmax = max(maxval(iepx),maxval(iepy),maxval(iepz))
!write(*,*) 'Mat_init:lmax =', lmax, ' my_id = ', my_id
if (nnodes>1) then
# if defined(SPEC) && !defined(SPEC_MPI)
  write (*,*) 'If we are in serial mode, nnodes ought to be 1, right?'
  stop
# else
  call MPI_ALLREDUCE(lmax,gmax,1,MPI_INTEGER,MPI_MAX,my_MPI_COMM_CART,ierr)
# endif
else
  gmax = lmax
end if

if (gmax>no_of_materials) then
  write(*,*) 'CRITICAL ERROR! gmax>no_of_materials in  SUBROUTINE Mat_init'
  call MPI_FINALIZE(ierr)
  stop
end if

if (my_id==master_id) then
  !! Deallocate the temporary global arrays
  deallocate(glob_iepx, STAT=allocstat)
  deallocate(glob_iepy, STAT=allocstat)
  deallocate(glob_iepz)
end if

END SUBROUTINE Mat_init

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       mat_updateE - Updates the E field for non-dispersive inhomo. materials
!
! DESCRIPTION
!       Updates the E field for non-dispersive inhomogeneous materials
!
! SEE ALSO 
!       updateE in update.f90
!
! HISTORY
!       Written by Åke Rydell
!       Exported to pscyee by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE mat_updateE(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)

USE globalvar_mod, ONLY : imin, jmin, kmin
USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx,ny,nz

real(kind=rfp), intent(inout),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(inout),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(inout),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

real(kind=rfp), intent(in   ),                                                &
 dimension(Hxsize(1):Hxsize(2), Hxsize(3):Hxsize(4), Hxsize(5):Hxsize(6)) :: Hx
real(kind=rfp), intent(in   ),                                                &
 dimension(Hysize(1):Hysize(2), Hysize(3):Hysize(4), Hysize(5):Hysize(6)) :: Hy
real(kind=rfp), intent(in   ),                                                &
 dimension(Hzsize(1):Hzsize(2), Hzsize(3):Hzsize(4), Hzsize(5):Hzsize(6)) :: Hz

!------------------------------------------------------------------------------
!                      L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k, mp

!------------------------------------------------------------------------------
!                      E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! leftovers:
if (imin/=1) then                               
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(j,k,mp)
#endif
  do k=kmin,nz
    do j=jmin,ny
      mp =  iepx(1,j,k)
      Ex(1,j,k) = Ex(1,j,k) +                                                 &
                  Dbdy(mp)*(Hz(1,j,k  )-Hz(1,j-1,k)) +                        &
                  Dbdz(mp)*(Hy(1,j,k-1)-Hy(1,j  ,k))
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
end if

if (jmin/=1) then                               
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,k,mp)
#endif
  do k=kmin,nz
    do i=imin,nx
      mp = iepy(i,1,k)
      Ey(i,1,k) = Ey(i,1,k) +                                                 &
                  Dbdz(mp)*(Hx(i  ,1,k)-Hx(i,1,k-1)) +                        &
                  Dbdx(mp)*(Hz(i-1,1,k)-Hz(i,1,k  ))
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
end if

if (kmin/=1) then                               
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j,mp)
#endif
  do j=jmin,ny
    do i=imin,nx
      mp = iepz(i,j,1)
      Ez(i,j,1) = Ez(i,j,1) +                                                 &
                  Dbdx(mp)*(Hy(i,j  ,1)-Hy(i-1,j,1)) +                        &
                  Dbdy(mp)*(Hx(i,j-1,1)-Hx(i  ,j,1))
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
end if

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j,k,mp)
#endif
do k=kmin,nz
  do j=jmin,ny
    do i=imin,nx
      mp = iepx(i,j,k)
      Ex(i,j,k) = Ex(i,j,k) +                                                 &
                  Dbdy(mp)*(Hz(i,j,k  )-Hz(i,j-1,k)) +                        &
                  Dbdz(mp)*(Hy(i,j,k-1)-Hy(i,j  ,k))

      mp =  iepy(i,j,k)
      Ey(i,j,k) = Ey(i,j,k) +                                                 &
                  Dbdz(mp)*(Hx(i  ,j,k)-Hx(i,j,k-1)) +                        &
                  Dbdx(mp)*(Hz(i-1,j,k)-Hz(i,j,k  ))

      mp =  iepz(i,j,k)
      Ez(i,j,k) = Ez(i,j,k) +                                                 &
                  Dbdx(mp)*(Hy(i,j  ,k)-Hy(i-1,j,k)) +                        &
                  Dbdy(mp)*(Hx(i,j-1,k)-Hx(i  ,j,k))
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

END SUBROUTINE mat_updateE

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE material_mod
