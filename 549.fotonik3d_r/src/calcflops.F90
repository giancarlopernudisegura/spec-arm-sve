!+
! NAME
!       calcflops - Calculate Flop/s
!
! DESCRIPTION
!       Calculate the performance of the code in MFlop/s
!
! METHOD
!       Given nx, ny, nz and nts the number of flops performed in
!       update, Huygens and Mur is calculated. This is then divided 
!       with the results of the timing (delta) to get the performance.
!
! SYNOPSIS
!       < Start clock in the beginning of the second time step with
!       tid1 = MPI_WTIME() >
!       < After completion of the timestepping, stop the clock with
!       tid2 = MPI_WTIME() >
!       delta = tid2-tid1
!       call calcflops(nx,ny,nz,delta,MFlops)
!         integer, intent(in)  :: nx, ny, nz
!         real(kind=dfp), intent(in)  :: delta
!         real(kind=dfp), intent(out) :: MFlops
!
! SEE ALSO
!       timerRoutine.f90
!
! HISTORY
!       Written by Ulf Andersson
!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE calcflops(nx,ny,nz,delta,MFlops)

USE parameter_mod
USE globalvar_mod, ONLY : pulse, nts, OBC, number_of_pml_cells
USE power_mod, ONLY : power_found, power_ncoords_times_nfreq

IMPLICIT NONE

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer,        intent(in)  :: nx, ny, nz
real(kind=dfp), intent(in)  :: delta
real(kind=dfp), intent(out) :: MFlops

!------------------------------------------------------------------------------
!                     L o c a l  p a r a m e t e r s
!------------------------------------------------------------------------------

integer, parameter :: int8=max(selected_int_kind(9),selected_int_kind(12))
!integer, parameter :: int8=selected_int_kind(12) ! tmp fix for PGI v. 6
character (len=*), parameter :: F200='(A,I11,A)'

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer(kind=int8) :: nxl, nyl, nzl, nxp, nyp, nzp
integer(kind=int8) :: FusFlop, UpdEFlop, UpdHFlop, UpdFlop, OBCFlop,          &
                      HuyFlop, pulFlop, UinFlop, PW_Flop, totFlop, UPMLceller

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

#ifdef SPEC
MFlops = 0.0  ! silence a warning
#endif
nxl = nx      ! In the calculations below all variables on
nyl = ny      ! the r.h.s. must be of type integer(kind=int8)
nzl = nz
!--- update --- number of a.o. ---
FusFlop = 18
UpdEFlop = (nyl-1) * (nzl-1) * FusFlop/3 +     & ! Leftovers                  &
           (nxl-1) * (nzl-1) * FusFlop/3 +     & ! ---------- = ----------    &
           (nxl-1) * (nyl-1) * FusFlop/3 +     & ! ---------- = ----------    &
           (nxl-1) * (nyl-1) * (nzl-1) * FusFlop ! The fused loops     
UpdHFlop = nxl*nyl*nzl * FusFlop
UpdFlop = UpdEFlop + UpdHFlop
if (OBC>0) then
  nxp = nxl+2*number_of_pml_cells
  nyp = nyl+2*number_of_pml_cells
  nzp = nzl+2*number_of_pml_cells
  UPMLceller = nxp*nyp*nzp - nxl*nyl*nzl
  OBCFlop = UPMLceller*90   ! (8+7)*6 a.o. in all UPML cells
elseif (OBC==OBC_Mur) then
  OBCFlop = nyl * (nzl-1) * 6 +                                               &
            nzl * (nyl-1) * 6 +                                               &
            nxl * (nzl-1) * 6 +                                               &
            nxl *  nzl    * 6 +                                               &
            nxl *  nyl    * 6 +                                               &
            nxl *  nyl    * 6
else ! (OBC==OBC_PEC) 
  OBCFlop = 0
end if
!--- Huygens --- number of a.o. ---  
if (pulse<=0) then    ! No Huygens' surfaces. Flops for point source neglected.
  HuyFlop = 0

else
  if ((pulse==1).or.(pulse==2)) then
    pulFlop = 1+2   
  else
    pulFlop = 0+2
  end if
  UinFlop = (9+pulFlop) 
  HuyFlop = (nyl-2*db  ) * (nzl-2*db+1) * (14 + 4 * UinFlop) +                &
            (nyl-2*db+1) * (nzl-2*db  ) * (14 + 4 * UinFlop) +                &
            (nxl-2*db  ) * (nzl-2*db+1) * (14 + 4 * UinFlop) +                &
            (nxl-2*db+1) * (nzl-2*db  ) * (14 + 4 * UinFlop) +                &
            (nxl-2*db  ) * (nyl-2*db+1) * (14 + 4 * UinFlop) +                &
            (nxl-2*db+1) * (nyl-2*db  ) * (14 + 4 * UinFlop)
end if

!--- power computation!!! 
if (power_ncoords_times_nfreq>0) then
  !! This ignores the field interpolation, but that is only prop. to #coords
  PW_Flop = 16*power_ncoords_times_nfreq ! 16 = 4*4 c3=c1+c2*r
  !! When no optimization used the number of a.o. will double up because the
  !! mult of complex expfunc[EH] with real [EH]field[12] (two a.o.) will
  !! be performed as a mult between two complex numbers (six a.o.)
else
  PW_Flop = 0
end if

#if !defined(SPEC) || defined(INTERNAL_TIMING)
totFlop = UpdFlop+OBCFlop+HuyFlop+PW_Flop
if (delta>0) then
! Clock is started in second step!
! Use of real is to avoid integer overflow when using integer(kind=4)
  MFlops = real(totFlop,kind(delta))*                           &
           real(nts-1,  kind(delta))/(delta*1000000.0) 
end if

write(*,'(A)')  '-----------------------------------------------------'
write(*,F200)   '  Number of a.o. per time step (Upd) =', UpdFlop, ' Flop.'
if (OBC/=OBC_PEC) then
  write(*,F200)   '  Number of a.o. per time step (OBC) =', OBCFlop, ' Flop.'
end if
if (HuyFlop/=0) then
  write(*,F200) '  Number of a.o. per time step (Huy) =', HuyFlop, ' Flop.'
end if
if (power_ncoords_times_nfreq>0) then
  write(*,F200) '  Number of a.o. per time step (POW) =', PW_Flop, ' Flop.'
end if
write(*,F200)   '  Number of a.o. per time step (tot) =', totFlop, ' Flop.'
if (delta>0) then
  write(*,'(A,F8.2,A)') '   MFLOPS   FOR MAINLOOP =', MFlops, ' MFlop/s.'
end if
write(*,'(A,F8.2,A)') '   USERTIME FOR MAINLOOP =', delta, ' sec.'
write(*,'(A)') '-----------------------------------------------------'
#endif

END SUBROUTINE calcflops
