!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       TIMER - A timer
!
! DESCRIPTION
!       Real time clock in seconds
!
! METHOD
!       Uses the f90 intrinsic system_clock. 
!
! HISTORY
!       Written Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE timer(return_time, initial_time)

IMPLICIT NONE

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

real, intent(in)  :: initial_time
real, intent(out) :: return_time

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: count, rate, max

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

call system_clock( COUNT=count, COUNT_RATE=rate, COUNT_MAX=max )
if (rate/=0) then
  return_time = real(count)/real(rate) - initial_time 
else
  return_time = 0.0
  write(*,*) 'WARNING! No clock available (in timerRoutine.f90)'
end if

! Try to cope with clock wraparound. We assume that only one wraparound
! has occurred.
if (return_time<0.0) then
   write(*,*) 'WARNING! Clock wrapparound occured. Trying to compensate!'
   return_time = return_time + real(max)/real(rate)
end if

END SUBROUTINE timer
