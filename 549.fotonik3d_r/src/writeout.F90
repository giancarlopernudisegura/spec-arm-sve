!+
! NAME
!       writeout - writes electromagnetic field to file
!
! DESCRIPTION
!       writes electromagnetic field to file
!
! METHOD
!       if out==1 an ASCII file for Matlab is written
!       if out==3 a 32-bit precision binary output file yeeout.NNN.bin is 
!                written. 
!       if out==4 a 32-bit precision binary output file yeeout.NNN.bin and
!                 a DX description file pscyee.NNN.general are written
!       if out==5 a 32-bit precision binary output file yeeout.NNN.bin and
!                 an AVS description file yeeout.NNN.fld are written
!       if out==6 an ASCII file yeeout.NNN.txt is written with Ex values. 
!                 Intended for comparisons with frida results.
!
!       NNN is given by the integer filenumber which starts at 100 for the
!       first output. It is then increased with one for each new file. This
!       methodology is a heritage from using the visualization tool AVS to
!       create a movie.
!
! SEE ALSO
!       collect.f90
!
! HISTORY
!       Written by Gunnar Ledfelt and Ulf Andersson
!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE writeout(nx,ny,nz,filenumber,Ex,Ey,Ez,Hx,Hy,Hz)

USE parameter_mod
USE globalvar_mod, ONLY : out, ds, dx, dy, dz
USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer,        intent(in)                                  :: nx, ny, nz
integer,        intent(in)                                  :: filenumber

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

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k, ios
character(len=14) :: datafile, avsfile
character(len=18) ::   dxfile
real(kind=rfp) :: Z0

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

Z0 = sqrt(mu0/eps0)         ! Impedance of vacuum

if (out==1) then
  datafile = 'yeeout.m'
  open(unit=10, file=trim(datafile), status='unknown', IOSTAT=ios)
  if (ios/=0)then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Fail to open ', datafile, ' in writeout'
#endif
    write(*,*) 'FATAL ERROR! Failed to open file ', datafile, ' in writeout'
    stop
  end if
  write(10,*) 'nx=' , nx , ';'
  write(10,*) 'ny=' , ny , ';'
  write(10,*) 'nz=' , nz , ';'
  write(10,*) 'Z0=' , Z0 , ';'
  write(10,*) 'Ex=['
  write(10, '(1x, E11.3)') Ex
  write(10,*) '];' 
  write(10,*) 'Ey=['
  write(10, '(1x, E11.3)') Ey
  write(10,*) '];' 
  write(10,*) 'Ez=['
  write(10, '(1x, E11.3)') Ez
  write(10,*) '];' 
  write(10,*) 'Hx=Z0*['
  write(10, '(1x, E11.3)') Hx
  write(10,*) '];' 
  write(10,*) 'Hy=Z0*['
  write(10, '(1x, E11.3)') Hy
  write(10,*) '];' 
  write(10,*) 'Hz=Z0*['
  write(10, '(1x, E11.3)') Hz
  write(10,*) '];' 
  close(unit=10, IOSTAT=ios)
  if (ios/=0)then
    write(*,*) 'Warning! Failed to close file ', datafile, ' in writeout'
  end if

else if (out==2) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! out=2 (AVS-ASCII) no longer in writeout.f90'
#endif
  write(*,*) 'FATAL ERROR! out=2 (AVS-ASCII) no longer in use in writeout.f90'
  stop

else if ((out==3).or.(out==4).or.(out==5)) then

 if (out==4) then
    write(dxfile,'(A7,I3,A8)')'pscyee.',filenumber,'.general'
    open(unit=11, file=dxfile, form='formatted', status='unknown', IOSTAT=ios)
    if (ios/=0)then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Failed to open file ', dxfile, ' in writeout'
#endif
      write(*,*) 'FATAL ERROR! Failed to open file ', dxfile, ' in writeout'
      stop
    end if
    write(11,'(A,I3,A)') 'file = yeeout.', filenumber ,'.bin'
    write(11,'(A,I2,A,I2,A,I2)') 'grid = ', nx, ' x ', ny, ' x ', nz
    write(11,'(A)') 'format = msb ieee'
    write(11,'(A)') 'interleaving = field'
    write(11,'(A)') 'majority = column'
    write(11,'(A)') 'header = bytes 4'
    write(11,'(A)') 'field = Ex, Ey, Ez, Z0*Hx, Z0*Hy, Z0*Hz'
    write(11,'(A)')'structure = scalar, scalar, scalar, scalar, scalar, scalar'
    write(11,'(A)') 'type = float, float, float, float, float, float'
    write(11,'(2A)') 'dependency = positions, positions, positions, ',        &
                     'positions, positions, positions'
    write(11,'(A,E15.8,A,E15.8,A,E15.8)')                                     &
                    'positions = regular, regular, regular, 0, ',             &
                    dx, ', 0, ', dy, ', 0, ', dz
    write(11,'(A)')
    write(11,'(A)') 'end'

    close(unit=11, IOSTAT=ios)
    if (ios/=0)then
       write(*,*) 'Warning! Failed to close file ', dxfile, ' in writeout'
    end if
  end if

  !! Create filename for binary output file 
  write(*,*) 'Downsize =',ds,'in writeout'
  write(datafile,'(A7,I3,A4)')'yeeout.',filenumber,'.bin'
  open(unit=12, file=datafile, form='unformatted', status='unknown',IOSTAT=ios)
  if (ios/=0)then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Failed to open ', datafile, ' in writeout'
#endif
    write(*,*) 'FATAL ERROR! Failed to open file ', datafile, ' in writeout'
    stop
  end if

  !! Write 32-bit precision binary output file 
  if (rfp==sfp) then
    write(12) (((       Ex(i,j,k),   Ey(i,j,k),   Ez(i,j,k),                  &
                     Z0*Hx(i,j,k),Z0*Hy(i,j,k),Z0*Hz(i,j,k)                   &
                                           ,i=1,nx,ds), j=1,ny,ds), k=1,nz,ds)
  else if (rfp==dfp) then
    write(12) (((  real(Ex(i,j,k)),   real(Ey(i,j,k)),   real(Ez(i,j,k)),     &
                real(Z0*Hx(i,j,k)),real(Z0*Hy(i,j,k)),real(Z0*Hz(i,j,k))      &
                                           ,i=1,nx,ds), j=1,ny,ds), k=1,nz,ds)
  else
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! rfp has strange value in writeout.f90 '
#endif
    write(*,*) 'FATAL ERROR! rfp has strange value in writeout.f90 '
    stop
  end if
  close(unit=12, IOSTAT=ios)
  if (ios/=0)then
    write(*,*) 'Warning! Failed to close file ', datafile, ' in writeout'
  end if

  if (out==5) then
    !! write the AVS header file
    write(avsfile,'(A7,I3,A4)')'yeeout.',filenumber,'.fld'
    open(unit=11, file=avsfile, form='formatted', status='unknown', IOSTAT=ios)
    if (ios/=0)then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Failed to open ', avsfile, ' in writeout'
#endif
      write(*,*) 'FATAL ERROR! Failed to open file ', avsfile, ' in writeout'
      stop
    end if
    write(11,'(A)') '# AVS'
    write(11,'(A)') '# This file is called from AVS to read'
    write(11,'(A)') '#  the grid and solution from the code'
    write(11,'(A)') '#  for computational electromagnetics written by'
    write(11,'(A)') '#                  Gunnar Ledfelt '
    write(11,'(A)') '#                  autumn 1995 C2M2.'
    write(11,'(A)') '#  Some modifications are done because the full '
    write(11,'(A)') '#  solution is not written to the solution file.'
    write(11,'(A)') '#  These modifications must be removed when the'
    write(11,'(A)') '#  full solution is to be considered. <= wrong.'
    write(11,'(A)') '# '
    write(11,'(A)') 'ndim=3'
    write(11,'(A,I4)') 'dim1=',nx/ds
    write(11,'(A,I4)') 'dim2=',ny/ds
    write(11,'(A,I4)') 'dim3=',nz/ds
    write(11,'(A)') 'nspace=3'
    write(11,'(A)') 'veclen=6'
    write(11,'(A)') '#'
    write(11,'(A)') 'data=float '
    write(11,'(A)') 'field=irregular'
    write(11,'(A)') '#'
    write(11,'(A,A14,A)')                                                     &
        'variable 1 file=',datafile,' filetype=unformatted skip=0 stride=9'
    write(11,'(A,A14,A)')                                                     &
        'variable 2 file=',datafile,' filetype=unformatted skip=4 stride=9'
    write(11,'(A,A14,A)')                                                     &
        'variable 3 file=',datafile,' filetype=unformatted skip=8 stride=9'
    write(11,'(A,A14,A)')                                                     &
        'variable 4 file=',datafile,' filetype=unformatted skip=12 stride=9'
    write(11,'(A,A14,A)')                                                     &
        'variable 5 file=',datafile,' filetype=unformatted skip=16 stride=9'
    write(11,'(A,A14,A)')                                                     &
        'variable 6 file=',datafile,' filetype=unformatted skip=20 stride=9'
    write(11,'(A)') 'label= Ex Ey Ez Z0Hx Z0Hy Z0Hz'                           
    write(11,'(A,A14,A)')                                                     &
        'coord 1 file=',datafile,' filetype=unformatted skip=24    stride=9'
    write(11,'(A,A14,A)')                                                     &
        'coord 2 file=',datafile,' filetype=unformatted skip=28    stride=9'
    write(11,'(A,A14,A)')                                                     &
        'coord 3 file=',datafile,' filetype=unformatted skip=32    stride=9'
    write(11,'(A1,A1)')char(12),char(12)
    close(unit=11, IOSTAT=ios)
    if (ios/=0)then
       write(*,*) 'Warning! Failed to close file ', avsfile, ' in writeout'
    end if
  end if
  
elseif (out==6) then
  write(datafile,'(A7,I3,A4)')'yeeout.',filenumber,'.txt'
  open(unit=10, file=trim(datafile), status='unknown', IOSTAT=ios)
  if (ios/=0)then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Failed to open ', datafile, ' in writeout'
#endif
    write(*,*) 'FATAL ERROR! Failed to open file ', datafile, ' in writeout'
    stop
  end if

  write(10,'(1x, E25.13E4,4I4)') (((Ex(i,j,k),1,i,j,k,i=1,nx), j=2,ny),k=2,nz)

  close(unit=10, IOSTAT=ios)
  if (ios/=0)then
    write(*,*) 'Warning! Failed to close file ', datafile, ' in writeout'
  end if

end if

END SUBROUTINE writeout 
