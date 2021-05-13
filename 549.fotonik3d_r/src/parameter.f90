!+
! NAME
!       parameter_mod - Global Parameters.
!
! DESCRIPTION
!       Global Parameters
!
! METHOD
!       Choose between 32-bit (single) precision and 64-bit (double) precision
!       by assigning the proper value to rfp (sfp or dfp)
!
! HISTORY
!       Written by Ulf Andersson
!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE parameter_mod

IMPLICIT NONE

integer, parameter :: sfp = selected_real_kind(6,37)
integer, parameter :: dfp = selected_real_kind(13,99)

integer, parameter :: cfp = selected_real_kind(6,37)
integer, parameter :: zfp = selected_real_kind(13,99)

!integer, parameter :: rfp=sfp ! 32-bit precision
integer, parameter :: rfp=dfp ! 64-bit precision
integer, parameter :: bytes_per_float = 8   !  8 for 64-bit and 4 for 32-bit
integer, parameter :: kfp=zfp ! cfp gives 32-bit precision, zfp gives 64 bit
integer, parameter :: bytes_per_cmplx = 16  ! 16 for 64-bit and 8 for 32-bit

real(kind=rfp), parameter :: pi = 3.141592653589793_rfp

real(kind=rfp), parameter :: eps0 = 8.8541878E-12_rfp  ! permittivity in vacuum
real(kind=rfp), parameter :: mu0  = 1.256637061E-6_rfp ! permeability in vacuum
real(kind=rfp), parameter :: c0 = 2.99792458E+8_rfp  ! speed of light in vacuum

integer, parameter ::  db = 3   ! Distance to boundary from Huygens' surfaces

integer, parameter :: ndims=3   ! Number of spatial dimensions

integer, parameter :: master_id=0   

! Short names for some common real values 
real(kind=rfp), parameter :: zero = 0.0_rfp
real(kind=rfp), parameter :: half = 0.5_rfp
real(kind=rfp), parameter :: one  = 1.0_rfp
real(kind=rfp), parameter :: two  = 2.0_rfp

! Parameters for boundary condition types
! If OBC is positive, the UPML is used and the number of PML cells are =OBC
integer, parameter :: OBC_Mur = -1
integer, parameter :: OBC_PEC = -3

integer, parameter ::   one_byte = selected_int_kind(2)   !   One byte integer
integer, parameter ::   two_byte = selected_int_kind(3)   !   Two byte integer
integer, parameter ::  four_byte = selected_int_kind(5)   !  Four byte integer
integer, parameter :: eight_byte = selected_int_kind(15)  !  Eight byte integer

END MODULE parameter_mod
