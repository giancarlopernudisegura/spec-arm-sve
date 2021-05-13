!+
! NAME
!       compare_solutions - Compares binary solutions from writeout.f90
!
! DESCRIPTION
!       Compares binary solutions from pscyee_MPI (writeout.f90). Compares
!       all output files in current directory with output files in a user
!       given directory, until a difference is found, or until no more
!       files are found.
!
! METHOD
!       Reads two files yeeout.100.bin and <User_given_dir>/yeeout.100.bin
!       These two files are compared. All differences found are printed on 
!       screen. If these two files are identical, we continue with reading
!       files yeeout.101.bin and <User_given_dir>/yeeout.101.bin. This 
!       procedure continues until differences are found, or until no more
!       files are found.
!
! SYNOPSIS
!       No command line options. 
!
! FILES
!       The user is prompted for the name of one of the directories containing
!       the data file(s). The other directory is assumed to be the one from
!       which to command is launched.
!       (The user also supplies the values of nx, ny and nz.)
! 
! SEE ALSO
!       writeout.f90
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

PROGRAM compare_solutions
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

!------------------------------------------------------------------------------
!                     V a r i a b l e s
!------------------------------------------------------------------------------

! Parameters:
character (len=*), parameter :: F100='( A,3I4, 2E17.10 )'

! Scalar Variables:
integer :: nx, ny, nz, i, j, k, allocstat, ios, deallocstat, filenumber
logical :: difference

! Array Variables:
character(len=80) :: dirname, filename2
character(len=14) :: filename1
real, dimension(:,:,:), allocatable :: Ex1, Ey1, Ez1, Z0Hx1, Z0Hy1, Z0Hz1,    &
                                       Ex2, Ey2, Ez2, Z0Hx2, Z0Hy2, Z0Hz2

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Get input:

write(*,*) ' Give name of Reference solution directory'
read(*,'(A80)') dirname
write(*,*) ' Give nx'
read(*,*) nx
write(*,*) ' Give ny'
read(*,*) ny
write(*,*) ' Give nz'
read(*,*) nz

! Allocate fields

allocate(   Ex1(nx,ny,nz),   Ey1(nx,ny,nz),   Ez1(nx,ny,nz), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! Allocation of E[xyz]1 failed.'
#endif
  write(*,*) 'FATAL ERROR! Allocation of E[xyz]1 failed.'
  stop
end if

allocate( Z0Hx1(nx,ny,nz), Z0Hy1(nx,ny,nz), Z0Hz1(nx,ny,nz), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! Allocation of Z0H[xyz]1 failed.'
#endif
  write(*,*) 'FATAL ERROR! Allocation of Z0H[xyz]1 failed.'
  stop
end if

allocate(   Ex2(nx,ny,nz),   Ey2(nx,ny,nz),   Ez2(nx,ny,nz), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! Allocation of E[xyz]2 failed.'
#endif
  write(*,*) 'FATAL ERROR! Allocation of E[xyz]2 failed.'
  stop
end if
allocate( Z0Hx2(nx,ny,nz), Z0Hy2(nx,ny,nz), Z0Hz2(nx,ny,nz), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! Allocation of Z0H[xyz]2 failed.'
#endif
  write(*,*) 'FATAL ERROR! Allocation of Z0H[xyz]2 failed.'
  stop
end if

filenumber = 100
difference = .false.
do ! while files are identical
  !! =============== Open, read and close the files ===============

  !! Create filename
  write(filename1,'(A7,I3,A4)')'yeeout.',filenumber,'.bin'
  !! First file
  write(*,*) 'Reading file: ', trim(filename1)

  open(unit=11,file=filename1,form='unformatted', status='old', IOSTAT=ios)
  if (ios/=0) then
    write(*,*) 'File ', trim(filename1), ' not found! Aborting!'
    write(*,*) 'The value of IOSTAT was:', ios
    stop
  end if

  read(11,IOSTAT=ios) (((  Ex1(i,j,k),   Ey1(i,j,k),   Ez1(i,j,k),            &
                         Z0Hx1(i,j,k), Z0Hy1(i,j,k), Z0Hz1(i,j,k),            &
                                                      i=1,nx), j=1,ny), k=1,nz)
  if (ios/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Failure when reading file ', trim(filename1)
#endif
    write(*,*) 'FATAL ERROR! Failure when reading file ', trim(filename1)
    write(*,*) 'The value of IOSTAT was:', ios
    stop
  end if

  close(unit=11, IOSTAT=ios)
  if (ios/=0)then
    write(*,*) 'Warning! Failed to close file ', trim(filename1)
    write(*,*) 'The value of IOSTAT was:', ios
  end if

  !! Second file

  filename2 = trim(dirname) // '/' // filename1
  write(*,*) 'Reading file: ', trim(filename2)

  open(unit=22,file=filename2,form='unformatted', status='old', IOSTAT=ios)
  if (ios/=0) then
    write(*,*) 'File ', trim(filename2), ' not found! Aborting!'
    write(*,*) 'The value of IOSTAT was:', ios
    stop
  end if

  read(22,IOSTAT=ios) (((  Ex2(i,j,k),   Ey2(i,j,k),   Ez2(i,j,k),            &
                         Z0Hx2(i,j,k), Z0Hy2(i,j,k), Z0Hz2(i,j,k),            &
                                                      i=1,nx), j=1,ny), k=1,nz)
  if (ios/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Failure when reading file ', trim(filename2)
#endif
    write(*,*) 'FATAL ERROR! Failure when reading file ', trim(filename2)
    write(*,*) 'The value of IOSTAT was:', ios
    stop
  end if

  close(unit=22, IOSTAT=ios)
  if (ios/=0)then
    write(*,*) 'Warning! Failed to close file ', trim(filename2)
    write(*,*) 'The value of IOSTAT was:', ios
  end if

  !! =============== Compare the solutions ===============

  do k=1,nz
    do j=1,ny
      do i=1,nx
        !! Ex
        if (Ex2(i,j,k)/=Ex1(i,j,k)) then
          difference = .true.
          write(*,F100) 'Ex  ', i, j, k, Ex1(i,j,k), Ex2(i,j,k)
        end if
        !! Ey
        if (Ey2(i,j,k)/=Ey1(i,j,k)) then
          difference = .true.
          write(*,F100) 'Ey  ', i, j, k, Ey1(i,j,k), Ey2(i,j,k)
        end if
        !! Ez
        if (Ez2(i,j,k)/=Ez1(i,j,k)) then
          difference = .true.
          write(*,F100) 'Ez  ', i, j, k, Ez1(i,j,k), Ez2(i,j,k)
        end if
        !! Z0Hx
        if (Z0Hx2(i,j,k)/=Z0Hx1(i,j,k)) then
          difference = .true.
          write(*,F100) 'Z0Hx', i, j, k, Z0Hx1(i,j,k), Z0Hx2(i,j,k)
        end if
        !! Z0Hy
        if (Z0Hy2(i,j,k)/=Z0Hy1(i,j,k)) then
          difference = .true.
          write(*,F100) 'Z0Hy', i, j, k, Z0Hy1(i,j,k), Z0Hy2(i,j,k)
        end if
        !! Z0Hz
        if (Z0Hz2(i,j,k)/=Z0Hz1(i,j,k)) then
          difference = .true.
          write(*,F100) 'Z0Hz', i, j, k, Z0Hz1(i,j,k), Z0Hz2(i,j,k)
        end if
      end do
    end do
  end do

  if (difference) then
    write(*,*) 'Comp, i,  j,  k,    value(i,j,k),    value(i,j,k)'
    write(*,*) 'Files ', trim(filename1), ' and ', trim(filename2), ' differ.'
    exit
  end if

  !! Increase file counter
!  write(*,*) 'Comparing files, all differences will be printed on screen.'
  write(*,*) 'Files ', trim(filename1), ' and ',                              &
                       trim(filename2), ' were identical.'
  filenumber = filenumber+1

end do ! while

! Deallocate fields
deallocate( Ex1, Ey1, Ez1, Z0Hx1, Z0Hy1, Z0Hz1,                               &
            Ex2, Ey2, Ez2, Z0Hx2, Z0Hy2, Z0Hz2, STAT=deallocstat )
if (deallocstat/=0) then
  write(*,*) 'Deallocation failed!'
end if

END PROGRAM compare_solutions
