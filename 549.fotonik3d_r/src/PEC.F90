!+
! NAME
!       PEC_mod - module for Perfect Electric Conductors (PEC)
!
! DESCRIPTION
!       This module is not yet commented properly
!
! PUBLIC
!       integer :: PEC
!       Subroutine PEC_read
!       Subroutine PEC_init
!       Subroutine PEC_apply
!       Subroutine PEC_end
!
! HISTORY
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE PEC_mod

USE parameter_mod
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

PUBLIC PEC, PEC_init, PEC_read, PEC_apply, PEC_end

PRIVATE

integer :: PEC

type :: TPec
  integer, dimension(4) :: comp
  type(Tpec), pointer :: next
end type TPec
type(Tpec), pointer :: pecs, first_pec, nextpec

type :: TPec_local
  integer, dimension(3) :: size
  integer, dimension(3) :: count ! Only used on "master"
  integer, dimension(:,:), pointer :: Ex
  integer, dimension(:,:), pointer :: Ey
  integer, dimension(:,:), pointer :: Ez
end type TPec_local
type(Tpec_local) :: pecs_local, pecs_temp
type(Tpec_local), dimension(:,:,:), allocatable :: all_pecs_local

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       PEC_read - Reads the file PEC.dat
!
! DESCRIPTION
!
! METHOD
!       This routine is only called from SUBROUTINE init by the master.
!       It is only called if PEC=/0 (the local PEC variable in SUBROUTINE init)
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE PEC_read(nx_global,ny_global,nz_global)

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx_global,ny_global,nz_global

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: count, ios, p, i, j, k, allocstat, line_nr
logical :: error_on_line

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Let the master open and read the input file
open(unit=9, file='PEC.dat', status='old', IOSTAT=ios) 
if (ios/=0) then
  write(*,*) 'Warning! Failed to open file PEC.dat in PEC_init'
else
  nullify(first_pec)
  nullify(pecs)
  count = 0
  line_nr = 0

  do ! repeat until EOF (End Of File)
    error_on_line = .false.
    read(9,*,IOSTAT=ios) p, i, j, k
    if (ios < 0) then  ! EOF 
      exit
    else if (ios > 0) then
      write(*,*) 'Warning! Something wrong in file pec.dat'
      write(*,*) 'ios = ', ios
    end if
    line_nr = line_nr+1

    !! Check correctness of the read line. E-fields on the boundary is not OK!
    select case(p)
    case(1) ! Ex, accepted values (1:nx,2:ny,2:nz)
      if ((i<1).or.(i>nx_global)) then
        error_on_line = .true.
        write(*,*) 'Incorrect i-value in PEC.dat on line, ', line_nr
      end if
      if ((j<2).or.(j>ny_global)) then
        error_on_line = .true.
        write(*,*) 'Incorrect j-value in PEC.dat on line, ', line_nr
      end if
      if ((k<2).or.(k>nz_global)) then
        error_on_line = .true.
        write(*,*) 'Incorrect k-value in PEC.dat on line, ', line_nr
      end if

    case(2) ! Ey, accepted values (2:nx,1:ny,2:nz)
      if ((i<2).or.(i>nx_global)) then
        error_on_line = .true.
        write(*,*) 'Incorrect i-value in PEC.dat on line, ', line_nr
      end if
      if ((j<1).or.(j>ny_global)) then
        error_on_line = .true.
        write(*,*) 'Incorrect j-value in PEC.dat on line, ', line_nr
      end if
      if ((k<2).or.(k>nz_global)) then
        error_on_line = .true.
        write(*,*) 'Incorrect k-value in PEC.dat on line, ', line_nr
      end if

    case(3) ! Ez, accepted values (2:nx,2:ny,1:nz)
      if ((i<2).or.(i>nx_global)) then
        error_on_line = .true.
        write(*,*) 'Incorrect i-value in PEC.dat on line, ', line_nr
      end if
      if ((j<2).or.(j>ny_global)) then
        error_on_line = .true.
        write(*,*) 'Incorrect j-value in PEC.dat on line, ', line_nr
      end if
      if ((k<1).or.(k>nz_global)) then
        error_on_line = .true.
        write(*,*) 'Incorrect k-value in PEC.dat on line, ', line_nr
      end if
    case default
      write(*,*) 'Incorrect p-value in PEC.dat on line, ', line_nr
      error_on_line = .true.
    end select

    !! If the values are correct store them in a linked list (Correct word?)
    if (.not.error_on_line) then
      count = count+1
      if (associated(pecs)) then
        allocate(pecs%next,STAT=allocstat)
        if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of pecs%next failed in PEC_read'
#endif
          write(*,*) 'FATAL ERROR! Allocation of pecs%next failed in PEC_read'
          stop
        end if
        nullify(pecs%next%next)
        pecs => pecs%next
        pecs%comp(1) = p
        pecs%comp(2) = i
        pecs%comp(3) = j
        pecs%comp(4) = k
      else
        allocate(pecs,STAT=allocstat)
        if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of pecs failed in PEC_read'
#endif
          write(*,*) 'FATAL ERROR! Allocation of pecs failed in PEC_read'
          stop
        end if
        nullify(pecs%next)
        pecs%comp(1) = p
        pecs%comp(2) = i
        pecs%comp(3) = j
        pecs%comp(4) = k
        first_pec => pecs
      end if
    end if
  end do
  write(*,*) 'Total number of PEC components found: ', count
end if

END SUBROUTINE PEC_read

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       PEC_init - Initialize PEC
!
! DESCRIPTION
!
! METHOD
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE PEC_init(init_PEC,nx,ny,nz)

USE globalvar_mod, ONLY : my_id, dims, coords, my_mpi_comm_cart
#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: init_PEC, nx, ny, nz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: allocstat, deallocstat, ii, jj, kk
integer :: px, py, pz
integer :: ibeg, jbeg, kbeg
integer, dimension(ndims,dims(1),dims(2),dims(3)) :: count

#if !defined(SPEC) || defined(SPEC_MPI)
integer :: status(MPI_STATUS_SIZE), ierr, dest, my_i, my_j, my_k
#else
integer :: status(5),               ierr, dest, my_i, my_j, my_k
integer :: intdummy
parameter (intdummy=0)
integer :: ianydummy
parameter (ianydummy=-1)
#endif

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

PEC = init_PEC

if (PEC/=0) then
  !! Find which block a PEC belong to.
  !! This algorithm assumes equal sized blocks.

! The master may have changed since reading the file PEC.dat
! However, only one node, the previous master,  have a non-associated first_pec
  if ( associated(first_pec) ) then
    !! Count the PECs
    count = 0 
    pecs => first_pec
    Do while ( associated(pecs) )
      px = (pecs%comp(2)-1)/nx + 1
      py = (pecs%comp(3)-1)/ny + 1
      pz = (pecs%comp(4)-1)/nz + 1 
      count(pecs%comp(1),px,py,pz) = count(pecs%comp(1),px,py,pz) + 1
      pecs => pecs%next
    end do

    !! allocate all_pecs_local. Maybe (0:dims(1)-1,0:dims(2)-1,0:dims(3)-1)?
    allocate(all_pecs_local(dims(1),dims(2),dims(3)), STAT=allocstat)
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation all_pecs_local failed in PEC_init'
#endif
      write(*,*) 'FATAL ERROR! Allocation of all_pecs_local failed in PEC_init'
      stop
    end if
    do kk=1,dims(3)
      do jj=1,dims(2)
        do ii=1,dims(1)
          all_pecs_local(ii,jj,kk)%size = count(:,ii,jj,kk)
          all_pecs_local(ii,jj,kk)%count = 0
          allocate(all_pecs_local(ii,jj,kk)%                                  &
                Ex(all_pecs_local(ii,jj,kk)%size(1),3), STAT=allocstat)
          if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Alloc. of all_pecs_local%Ex failed in PEC'
#endif
            write(*,*) 'FATAL ERROR! Alloc. of all_pecs_local%Ex failed in PEC'
            stop
          end if
          allocate(all_pecs_local(ii,jj,kk)%                                  &
                Ey(all_pecs_local(ii,jj,kk)%size(2),3), STAT=allocstat)
          if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Alloc. of all_pecs_local%Ey failed in PEC'
#endif
            write(*,*) 'FATAL ERROR! Alloc. of all_pecs_local%Ey failed in PEC'
            stop
          end if
          allocate(all_pecs_local(ii,jj,kk)%                                  &
                Ez(all_pecs_local(ii,jj,kk)%size(3),3), STAT=allocstat)
          if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Alloc. of all_pecs_local%Ez failed in PEC'
#endif
            write(*,*) 'FATAL ERROR! Alloc. of all_pecs_local%Ez failed in PEC'
            stop
          end if
        end do
      end do
    end do

    !! split pec list onto the blocks
    pecs => first_pec
    do while ( associated(pecs) )
      px = (pecs%comp(2)-1)/nx + 1
      py = (pecs%comp(3)-1)/ny + 1
      pz = (pecs%comp(4)-1)/nz + 1 
      all_pecs_local(px,py,pz)%count(pecs%comp(1)) =                          &
           all_pecs_local(px,py,pz)%count(pecs%comp(1)) + 1
      select case(pecs%comp(1))
      case(1)
        all_pecs_local(px,py,pz)%                                             &
          Ex(all_pecs_local(px,py,pz)%count(pecs%comp(1)),1:3) = pecs%comp(2:4)
      case(2)               
        all_pecs_local(px,py,pz)%                                             &
          Ey(all_pecs_local(px,py,pz)%count(pecs%comp(1)),1:3) = pecs%comp(2:4)
      case(3)               
        all_pecs_local(px,py,pz)%                                             &
          Ez(all_pecs_local(px,py,pz)%count(pecs%comp(1)),1:3) = pecs%comp(2:4)
      end select
      pecs => pecs%next
    end do

    !! Deallocate the linked list
    pecs => first_pec

    Do while ( associated(pecs) )
      nextpec  => pecs%next
      deallocate(pecs , STAT=deallocstat)
      if (deallocstat/=0) then
        write(*,*) 'Warning! Deallocation of pecs failed in PEC_int'
      end if
      pecs => nextpec
    end do
  
    !! Distribute the blocks
    do kk=1,dims(3)
      do jj=1,dims(2)
        do ii=1,dims(1)
          call MPI_CART_RANK(my_MPI_COMM_CART,(/ii-1,jj-1,kk-1/),dest,ierr)
          if (dest/=my_id) then
            pecs_temp = all_pecs_local(ii,jj,kk)

#           if !defined(SPEC) || defined(SPEC_MPI)
            call MPI_SSEND(pecs_temp%size,ndims,MPI_INTEGER,dest,0,           &
                           my_MPI_COMM_CART,ierr)
            if (pecs_temp%size(1) > 0) then
              call MPI_SSEND(pecs_temp%Ex,ndims*pecs_temp%size(1),MPI_INTEGER,&
                             dest,1,my_MPI_COMM_CART,ierr)
            end if
            if (pecs_temp%size(2) > 0) then
              call MPI_SSEND(pecs_temp%Ey,ndims*pecs_temp%size(2),MPI_INTEGER,&
                             dest,2,my_MPI_COMM_CART,ierr)
            end if
            if (pecs_temp%size(3) > 0) then
              call MPI_SSEND(pecs_temp%Ez,ndims*pecs_temp%size(3),MPI_INTEGER,&
                             dest,3,my_MPI_COMM_CART,ierr)
            end if
#           else
            call MPI_SSEND(pecs_temp%size,ndims,intdummy,dest,0,           &
                           my_MPI_COMM_CART,ierr)
            if (pecs_temp%size(1) > 0) then
              call MPI_SSEND(pecs_temp%Ex,ndims*pecs_temp%size(1),intdummy,&
                             dest,1,my_MPI_COMM_CART,ierr)
            end if
            if (pecs_temp%size(2) > 0) then
              call MPI_SSEND(pecs_temp%Ey,ndims*pecs_temp%size(2),intdummy,&
                             dest,2,my_MPI_COMM_CART,ierr)
            end if
            if (pecs_temp%size(3) > 0) then
              call MPI_SSEND(pecs_temp%Ez,ndims*pecs_temp%size(3),intdummy,&
                             dest,3,my_MPI_COMM_CART,ierr)
            end if
#           endif

          else
            my_i = ii
            my_j = jj
            my_k = kk
          end if
        end do
      end do
    end do

    pecs_local%size = all_pecs_local(my_i,my_j,my_k)%size
    if (pecs_local%size(1) > 0) then
      allocate(pecs_local%Ex(pecs_local%size(1),3), STAT=allocstat)
      if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*)'FATAL ERROR! Allocation of pecs_local%Ex fail in PEC_init'
#endif
        write(*,*)'FATAL ERROR! Allocation of pecs_local%Ex failed in PEC_init'
        stop
      end if
      pecs_local%Ex = all_pecs_local(my_i,my_j,my_k)%Ex
    end if
    if (pecs_local%size(2) > 0) then
      allocate(pecs_local%Ey(pecs_local%size(2),3), STAT=allocstat)
      if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*)'FATAL ERROR! Allocation of pecs_local%Ey fail in PEC_init'
#endif
        write(*,*)'FATAL ERROR! Allocation of pecs_local%Ey failed in PEC_init'
        stop
      end if
      pecs_local%Ey = all_pecs_local(my_i,my_j,my_k)%Ey
    end if
    if (pecs_local%size(3) > 0) then
      allocate(pecs_local%Ez(pecs_local%size(3),3), STAT=allocstat)
      if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*)'FATAL ERROR! Allocation of pecs_local%Ez fail in PEC_init'
#endif
        write(*,*)'FATAL ERROR! Allocation of pecs_local%Ez failed in PEC_init'
        stop
      end if
      pecs_local%Ez = all_pecs_local(my_i,my_j,my_k)%Ez
    end if

    !! deallocate all_pecs_local
    do kk=1,dims(3)
      do jj=1,dims(2)
        do ii=1,dims(1)
          deallocate(all_pecs_local(ii,jj,kk)%Ex, STAT=deallocstat)
          if (deallocstat/=0) then
            write(*,*) 'Warning! Dealloc. of all_pecs_local%Ex failed in PEC'
          end if
          deallocate(all_pecs_local(ii,jj,kk)%Ey, STAT=deallocstat)
          if (deallocstat/=0) then
            write(*,*) 'Warning! Dealloc. of all_pecs_local%Ey failed in PEC'
          end if
          deallocate(all_pecs_local(ii,jj,kk)%Ez, STAT=deallocstat)
          if (deallocstat/=0) then
            write(*,*) 'Warning! Dealloc. of all_pecs_local%Ez failed in PEC'
          end if
        end do
      end do
    end do
    deallocate(all_pecs_local, STAT=deallocstat)
    if (deallocstat/=0) then
      write(*,*) 'Warning! Deallocation of all_pecs_local failed in PEC_init'
    end if

  else
#   if !defined(SPEC) || defined(SPEC_MPI)
    call MPI_RECV(pecs_local%size,ndims,MPI_INTEGER,MPI_ANY_SOURCE,0,         &
                  my_MPI_COMM_CART,status,ierr)
    if (pecs_local%size(1) > 0) then
      allocate(pecs_local%Ex(pecs_local%size(1),3), STAT=allocstat)
      if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*)'FATAL ERROR! Allocation of pecs_local%Ex fail in PEC_init'
#endif
        write(*,*)'FATAL ERROR! Allocation of pecs_local%Ex failed in PEC_init'
        stop
      end if
      call MPI_RECV(pecs_local%Ex,ndims*pecs_local%size(1),MPI_INTEGER,       &
                    MPI_ANY_SOURCE,1,my_MPI_COMM_CART,status,ierr)
    end if
    if (pecs_local%size(2) > 0) then
      allocate(pecs_local%Ey(pecs_local%size(2),3), STAT=allocstat)
      if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*)'FATAL ERROR! Allocation of pecs_local%Ey fail in PEC_init'
#endif
        write(*,*)'FATAL ERROR! Allocation of pecs_local%Ey failed in PEC_init'
        stop
      end if
      call MPI_RECV(pecs_local%Ey,ndims*pecs_local%size(2),MPI_INTEGER,       &
                    MPI_ANY_SOURCE,2,my_MPI_COMM_CART,status,ierr)
    end if
    if (pecs_local%size(3) > 0) then
      allocate(pecs_local%Ez(pecs_local%size(3),3), STAT=allocstat)
      if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*)'FATAL ERROR! Allocation of pecs_local%Ez fail in PEC_init'
#endif
        write(*,*)'FATAL ERROR! Allocation of pecs_local%Ez failed in PEC_init'
        stop
      end if
      call MPI_RECV(pecs_local%Ez,ndims*pecs_local%size(3),MPI_INTEGER,       &
                    MPI_ANY_SOURCE,3,my_MPI_COMM_CART,status,ierr)
    end if

#   else
    call MPI_RECV(pecs_local%size,ndims,intdummy,ianydummy,0,         &
                  my_MPI_COMM_CART,status,ierr)
    if (pecs_local%size(1) > 0) then
      allocate(pecs_local%Ex(pecs_local%size(1),3), STAT=allocstat)
      if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*)'FATAL ERROR! Allocation of pecs_local%Ex fail in PEC_init'
#endif
        write(*,*)'FATAL ERROR! Allocation of pecs_local%Ex failed in PEC_init'
        stop
      end if
      call MPI_RECV(pecs_local%Ex,ndims*pecs_local%size(1),intdummy,       &
                    ianydummy,1,my_MPI_COMM_CART,status,ierr)
    end if
    if (pecs_local%size(2) > 0) then
      allocate(pecs_local%Ey(pecs_local%size(2),3), STAT=allocstat)
      if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*)'FATAL ERROR! Allocation of pecs_local%Ey fail in PEC_init'
#endif
        write(*,*)'FATAL ERROR! Allocation of pecs_local%Ey failed in PEC_init'
        stop
      end if
      call MPI_RECV(pecs_local%Ey,ndims*pecs_local%size(2),intdummy,       &
                    ianydummy,2,my_MPI_COMM_CART,status,ierr)
    end if
    if (pecs_local%size(3) > 0) then
      allocate(pecs_local%Ez(pecs_local%size(3),3), STAT=allocstat)
      if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*)'FATAL ERROR! Allocation of pecs_local%Ez fail in PEC_init'
#endif
        write(*,*)'FATAL ERROR! Allocation of pecs_local%Ez failed in PEC_init'
        stop
      end if
      call MPI_RECV(pecs_local%Ez,ndims*pecs_local%size(3),intdummy,       &
                    ianydummy,3,my_MPI_COMM_CART,status,ierr)
    end if
#   endif

  end if

  !! Transform to local coordinates.
  !! (ibeg,jbeg,kbeg) is the global number of local cell (1,1,1)
  ibeg = coords(1)*nx + 1
  jbeg = coords(2)*ny + 1
  kbeg = coords(3)*nz + 1

  do ii=1,pecs_local%size(1)
    pecs_local%Ex(ii,:) = pecs_local%Ex(ii,:) - (/ ibeg-1, jbeg-1, kbeg-1 /)
  end do
  do ii=1,pecs_local%size(2)
    pecs_local%Ey(ii,:) = pecs_local%Ey(ii,:) - (/ ibeg-1, jbeg-1, kbeg-1 /)
  end do
  do ii=1,pecs_local%size(3)
    pecs_local%Ez(ii,:) = pecs_local%Ez(ii,:) - (/ ibeg-1, jbeg-1, kbeg-1 /)
  end do

end if ! if (PEC/=0)

END SUBROUTINE PEC_init

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       PEC_apply - Apply PEC
!
! DESCRIPTION
!
! METHOD
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE PEC_apply(Ex,Ey,Ez)

USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

real(kind=rfp), intent(inout),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(inout),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(inout),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ii

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

do ii=1,pecs_local%size(1)
  Ex(pecs_local%Ex(ii,1),pecs_local%Ex(ii,2),pecs_local%Ex(ii,3)) = 0
end do

do ii=1,pecs_local%size(2)
  Ey(pecs_local%Ey(ii,1),pecs_local%Ey(ii,2),pecs_local%Ey(ii,3)) = 0
end do

do ii=1,pecs_local%size(3)
  Ez(pecs_local%Ez(ii,1),pecs_local%Ez(ii,2),pecs_local%Ez(ii,3)) = 0
end do

END SUBROUTINE PEC_apply

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       PEC_end - deallocates PEC data
!
! DESCRIPTION
!
! METHOD
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE PEC_end()

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: deallocstat

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if (pecs_local%size(1) > 0) then
  deallocate(pecs_local%Ex, STAT=deallocstat)
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of pecs_local%Ex failed in PEC_end'
  end if
end if

if (pecs_local%size(2) > 0) then
  deallocate(pecs_local%Ey, STAT=deallocstat)
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of pecs_local%Ey failed in PEC_end'
  end if
end if

if (pecs_local%size(3) > 0) then
  deallocate(pecs_local%Ez, STAT=deallocstat)
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of pecs_local%Ez failed in PEC_end'
  end if
end if

END SUBROUTINE PEC_end

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE PEC_mod
