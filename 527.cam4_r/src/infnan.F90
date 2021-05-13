module infnan
!-------------------------------------------------------------------------
!
! Purpose:
!
! Set parameters for the floating point flags "inf" Infinity
! and "nan" not-a-number. As well as "bigint" the point
! at which integers start to overflow. These values are used
! to initialize arrays with as a way to detect if arrays
! are being used before being set.
!
! Author: CCM Core group
!
! $Id$
!
!-------------------------------------------------------------------------
  use shr_kind_mod, only: r8 => shr_kind_r8
#ifndef SPEC

#ifdef __PGI
! quiet nan for portland group compilers
  real(r8), parameter :: inf = real(O'0777600000000000000000',r8)
  real(r8), parameter :: nan = real(O'0777700000000000000000',r8)
  integer,  parameter :: bigint = int(O'17777777777')    
#else
! signaling nan otherwise
  real(r8), parameter :: inf = real(O'0777600000000000000000',r8)
  real(r8), parameter :: nan = real(O'0777610000000000000000',r8)
  integer,  parameter :: bigint = int(O'17777777777')           ! largest possible 32-bit integer
#endif

#else
! SPEC 3/2016:
! The point of the code in this module is debugging: detect uninitialized 
! variables.  From a benchmarking point of view, it is conceivable that 
! a user might wish to test systems that do not use IEEE-754.
! Therefore,
!  1) Code should not assume that it knows the octal value of infinity, 
!     because that value is processor dependent.
!  2) SPEC does not require that IEEE features such as NaN and infinity
!     be supported. 
! 
  real(r8), parameter :: inf    = huge(1e0_r8)
  real(r8), parameter :: nan    = -1 *  huge(1e0_r8)
  integer,  parameter :: bigint = huge(1)
#endif
  real(r8), parameter :: uninit_r8 = inf                   ! uninitialized floating point number
end module infnan
