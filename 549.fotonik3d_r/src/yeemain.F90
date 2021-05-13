!+
! NAME
!       pscyee_MPI - MPI implementation of simplified GEMS FD-TD code.
!       (The name of this file is yeemain.f90)
!
! DESCRIPTION
!       MPI implementation of simplified GEMS FD-TD code.
!
! METHOD
!       1) Starts clock
!       2) Calls init.f90
!       3) Allocates(*) electromagnetic field variables
!       4) loops from 1 to number_of_runs
!          a) Initializes electromagnetic field variables to zero
!          b) Calls leapfrog
!       5) Presents the performance result for the fastest execution in 4)
!       6) Calls *_end routines and deallocates electromagnetic field variables
!       7) Stops clock and present total execution wall clock time
!
!       (*) All six electromagnetic field components are allocated with the 
!       same size. This is a bit of waste of memory. However it simplifies
!       the process of collecting the entire field on the master.
!       (see collect for more comments on this issue)
!
! FILES
!       Input file yee.dat must exist.
!       If requested by user output files containing electromagnetic
!       field data are created (see writeout.f90).
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

PROGRAM pscyee_MPI

USE globalvar_mod
USE Mur_mod, ONLY : Mur_end
USE PEC_mod, ONLY : PEC_end
USE communicate_mod, ONLY : communicate_end
USE Plane_Source_mod, ONLY : Plane_Source_End
USE power_mod, ONLY : power_found, power_stop
USE update_mod, ONLY : update_initE, update_initH
USE UPML_mod, ONLY : UPML_initH, UPML_initE, UPML_end
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif
IMPLICIT NONE
#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     P a r a m e t e r s
!------------------------------------------------------------------------------

character (len=*), parameter ::                                               &
     F345 = '(A17,I3,A1,I2,A1,I2,A1,I4,A1,I4,A1,I4,A1,I4,A1,F8.2,A1,F6.2,A3)'

!------------------------------------------------------------------------------
!                     V a r i a b l e s
!------------------------------------------------------------------------------

! Scalar Variables:
integer :: nx, ny, nz
integer :: filenumber = 100
integer :: allocstat, deallocstat
real :: ti, tf                                    ! Timing variables
integer :: iii, ierr, i, j, k
integer(kind=eight_byte) :: bytes
!$ integer :: OMP_GET_NUM_THREADS

! Array Variables:
real(kind=dfp), dimension(2) :: perf                    
real(kind=rfp), dimension(:,:,:), allocatable :: Ex, Ey, Ez, Hx, Hy, Hz

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! The clock is started on all processors since we do not yet know which 
! process that is the master.
#if !defined(SPEC) || defined(INTERNAL_TIMING)
call timer(ti, 0.0)
!$       write(*,*) 'OpenMP enabled, #threads', OMP_GET_NUM_THREADS()
#endif

call init(nx,ny,nz)


if (included_Cart) then

!----------------------- Allocate memory --------------------------------------
  bytes = 0
  !! Having the same size on all six arrays is idiotic. Fix this! TBC
  allocate( Ex(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)),&
            STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! Allocation of Ex failed in yeemain.f90 '
#endif
    write(*,*) 'FATAL ERROR! Allocation of Ex failed in yeemain.f90 ',        &
               'my_id = ', my_id
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if
  bytes = bytes + 8*((Exsize(2)-Exsize(1)+1)*                                 &
                     (Exsize(4)-Exsize(3)+1)*                                 &
                     (Exsize(6)-Exsize(5)+1))

  allocate( Ey(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)),&
            STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! Allocation of Ey failed in yeemain.f90 '
#endif
    write(*,*) 'FATAL ERROR! Allocation of Ey failed in yeemain.f90 ',        &
               'my_id = ', my_id
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if
  bytes = bytes + 8*((Eysize(2)-Eysize(1)+1)*                                 &
                     (Eysize(4)-Eysize(3)+1)*                                 &
                     (Eysize(6)-Eysize(5)+1))

  allocate( Ez(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)),&
            STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! Allocation of Ez failed in yeemain.f90 '
#endif
    write(*,*) 'FATAL ERROR! Allocation of Ez failed in yeemain.f90 ',        &
               'my_id = ', my_id
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if
  bytes = bytes + 8*((Ezsize(2)-Ezsize(1)+1)*                                 &
                     (Ezsize(4)-Ezsize(3)+1)*                                 &
                     (Ezsize(6)-Ezsize(5)+1))

  allocate( Hx(Hxsize(1):Hxsize(2), Hxsize(3):Hxsize(4), Hxsize(5):Hxsize(6)),&
            STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! Allocation of Hx failed in yeemain.f90 '
#endif
    write(*,*) 'FATAL ERROR! Allocation of Hx failed in yeemain.f90 ',        &
               'my_id = ', my_id
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if
  bytes = bytes + 8*((Hxsize(2)-Hxsize(1)+1)*                                 &
                     (Hxsize(4)-Hxsize(3)+1)*                                 &
                     (Hxsize(6)-Hxsize(5)+1))

  allocate( Hy(Hysize(1):Hysize(2), Hysize(3):Hysize(4), Hysize(5):Hysize(6)),&
            STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! Allocation of Hy failed in yeemain.f90 '
#endif
    write(*,*) 'FATAL ERROR! Allocation of Hy failed in yeemain.f90 ',        &
               'my_id = ', my_id
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if
  bytes = bytes + bytes_per_float*((Hysize(2)-Hysize(1)+1)*                   &
                                   (Hysize(4)-Hysize(3)+1)*                   &
                                   (Hysize(6)-Hysize(5)+1))

  allocate( Hz(Hzsize(1):Hzsize(2), Hzsize(3):Hzsize(4), Hzsize(5):Hzsize(6)),&
            STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! Allocation of Hz failed in yeemain.f90 '
#endif
    write(*,*) 'FATAL ERROR! Allocation of Hz failed in yeemain.f90 ',        &
               'my_id = ', my_id
#   if !defined(SPEC) || defined(SPEC_MPI)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
#   endif
    stop
  end if
  bytes = bytes + 8*((Hzsize(2)-Hzsize(1)+1)*                                 &
                     (Hzsize(4)-Hzsize(3)+1)*                                 &
                     (Hzsize(6)-Hzsize(5)+1))

  bytes = bytes/1024/1024
  write(*,*) 'Electromagnetic fields allocated, Mbytes = ', bytes

  perf = 1000.0_rfp
  do iii=1,number_of_runs
  
    !! Inform the user
    if ((number_of_runs>1).and.(my_id==master_id).and.(iii==1)) then
      write(*,'(2A,I1,A)') ' The core of the code (the timestepping in ',     &
                           'leapfrog) will be run ', number_of_runs, ' times'
    end if
    if ((number_of_runs>1).and.(my_id==master_id)) then
      select case (iii)
      case (1)
        write(*,*) 'First run will commence'
      case (2)
        write(*,*) 'Second run will commence'
      case (3)
        write(*,*) 'Third run will commence'
      case default
        write(*,'(I1,A)') iii, 'th run will commence'
      end select
    end if

    !! Initialize electromagnetic fields to zero
    call update_initE(nx,ny,nz,Ex,Ey,Ez)
    call update_initH(nx,ny,nz,Hx,Hy,Hz)
    call UPML_initE(nx,ny,nz,Ex,Ey,Ez)
    call UPML_initH(nx,ny,nz,Hx,Hy,Hz)

    !! Do the time-stepping
    call leapfrog(nx,ny,nz,filenumber,perf,Ex,Ey,Ez,Hx,Hy,Hz)

    if (my_id==master_id) then
      write(*,'(A)') '====================================================='
      write(*,'(A)') '====================================================='
    end if

  end do

  if ((my_id==master_id).and.(number_of_runs>1)) then
    write(*,*) 'number_of_runs = ', number_of_runs
    write(*,*)
    write(*,*) 'Best result in Matlab syntax:'
    write(*,*)                                                                &
         '%                px,py,pz,  nx,  ny,  nz, nts, MFlop/s, time(s)'
    write(*,F345) 'PERF  = [ PERF  ;', dims(1), ',', dims(2), ',', dims(3),   &
                  ',', nx_global, ',', ny_global, ',', nz_global, ',', nts,   &
                  ',', perf(2), ',', perf(1), ' ];'
  end if

  if (out>0) then
    if (nnodes>1) then
      !! if out>0 we collect the solution on one node.
      !! There is no need to call collect if nnodes==1
#if defined(SPEC) && !defined(SPEC_MPI)
      write (*,*) 'How did we get to where nnodes>1?'
      stop
#else
      call collect(nx,ny,nz,filenumber,Hx,Hy,Hz,Ex,Ey,Ez)
#endif
    else if (nnodes==1) then
      call writeout(nx,ny,nz,filenumber,Ex,Ey,Ez,Hx,Hy,Hz)
    end if
  end if

end if

call communicate_end ! All processes must call this routine. It contains
                     ! MPI_FINALIZE

if (included_Cart) then
!----------------------- Deallocate memory ------------------------------------
  if (OBC>0) then
    call UPML_end
  elseif (OBC==OBC_Mur) then
    call Mur_end
  end if
  call PEC_end
  call Plane_Source_end 
  if (power_found) then
    call power_stop
  end if

  deallocate( Ex, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of Ex failed, my_id = ', my_id
  end if
  deallocate( Ey, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of Ey failed, my_id = ', my_id
  end if
  deallocate( Ez, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of Ez failed, my_id = ', my_id
  end if
  deallocate( Hx, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of Hx failed, my_id = ', my_id
  end if
  deallocate( Hy, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of Hy failed, my_id = ', my_id
  end if
  deallocate( Hz, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of Hz failed, my_id = ', my_id
  end if

end if

! Stop clock on master.
if (my_id==master_id) then
# if !defined(SPEC) || defined(INTERNAL_TIMING)
  call timer(tf, ti) 
  write(*,'(A,F8.2,A)') '   (The entire code took ', tf, ' s.)'
# endif
end if

END PROGRAM pscyee_MPI
