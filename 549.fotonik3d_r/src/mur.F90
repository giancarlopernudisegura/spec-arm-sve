!+
! NAME
!       Mur_mod - Mur module
!
! DESCRIPTION
!       Module for Mur 1st order absorbing boundary condition
!
!       The present implementation of material_mod asummes 
!
! PUBLIC
!       Subroutine Mur_init 
!       Subroutine Mur_storeE 
!       Subroutine Mur_updateE 
!       Subroutine Mur_end
!
! HISTORY
!       Written by Ulf Andersson
!       Expanded to treat inhomog. mat. by Ulf Andersson 2004-11-09
!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE Mur_mod

USE parameter_mod
USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

PUBLIC Mur_init, Mur_storeE, Mur_updateE, Mur_end

PRIVATE
!
! Mur Variables
!
real(kind=rfp) :: mf1, mf2, mf3
real(kind=rfp), dimension(:,:,:), allocatable :: Eyidiri, Ezidiri
real(kind=rfp), dimension(:,:,:), allocatable :: Exidirj, Ezidirj
real(kind=rfp), dimension(:,:,:), allocatable :: Exidirk, Eyidirk
real(kind=rfp), dimension(:,:), allocatable :: mf_xlow_Ey,  mf_xlow_Ez
real(kind=rfp), dimension(:,:), allocatable :: mf_xhigh_Ey, mf_xhigh_Ez
real(kind=rfp), dimension(:,:), allocatable :: mf_ylow_Ex,  mf_ylow_Ez
real(kind=rfp), dimension(:,:), allocatable :: mf_yhigh_Ex, mf_yhigh_Ez
real(kind=rfp), dimension(:,:), allocatable :: mf_zlow_Ex,  mf_zlow_Ey
real(kind=rfp), dimension(:,:), allocatable :: mf_zhigh_Ex, mf_zhigh_Ey

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Mur_init - Allocate and initialize private Mur data
!
! DESCRIPTION
!       Allocate and initialize private Mur data
!
! SEE ALSO
!       Mat_init where Mat_inhomo is set to TRUE if OBJ/=0
!
! HISTORY
!       Written by Ulf Andersson
!
!       2010-12-31: Now uses Exsize etc. This makes sure that any change in 
!                   allocation of Ex-Hz is automatically transfered to Mur.
!                   (On the other hand, it is not really necessary to copy
!                    all the tangential electric components. The ones at the
!                    edges are not needed.)
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Mur_init(nx,ny,nz)

USE globalvar_mod, ONLY : dims, coords, my_id, dx, dy, dz, dt
USE Material_mod, ONLY : Mat_inhomo

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: allocstat

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Allocate Mur arrays for storing old values.
allocate( Eyidiri(2,Eysize(3):Eysize(4), Eysize(5):Eysize(6)), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of Eyidiri failed! my_id =', my_id
#endif
  write(*,*) 'FATAL ERROR! Allocation of Eyidiri failed! my_id = ', my_id
  stop
end if

allocate( Ezidiri(2,Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of Ezidiri failed! my_id =', my_id
#endif
  write(*,*) 'FATAL ERROR! Allocation of Ezidiri failed! my_id = ', my_id
  stop
end if

allocate( Exidirj(Exsize(1):Exsize(2),2,Exsize(5):Exsize(6)), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of Exidirj failed! my_id =', my_id
#endif
  write(*,*) 'FATAL ERROR! Allocation of Exidirj failed! my_id = ', my_id
  stop
end if

allocate( Ezidirj(Ezsize(1):Ezsize(2),2,Ezsize(5):Ezsize(6)), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of Ezidirj failed! my_id =', my_id
#endif
  write(*,*) 'FATAL ERROR! Allocation of Ezidirj failed! my_id = ', my_id
  stop
end if

allocate( Exidirk(Exsize(1):Exsize(2), Exsize(3):Exsize(4),2), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of Exidirk failed! my_id =', my_id
#endif
  write(*,*) 'FATAL ERROR! Allocation of Exidirk failed! my_id = ', my_id
  stop
end if

allocate( Eyidirk(Eysize(1):Eysize(2), Eysize(3):Eysize(4),2), STAT=allocstat )
if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of Eyidirk fail! my_id = ', my_id
#endif
  write(*,*) 'FATAL ERROR! Allocation of Eyidirk failed! my_id = ', my_id
  stop
end if

! Initialize Mur arrays
Eyidiri = 0.0_rfp
Ezidiri = 0.0_rfp
Exidirj = 0.0_rfp
Ezidirj = 0.0_rfp
Exidirk = 0.0_rfp
Eyidirk = 0.0_rfp

! Initialize Mur coefficients
if (mat_inhomo) then
  !! We assume that material extend to the border. TBC Add a check for this.
  if (coords(1)==0) then
    allocate( mf_xlow_Ey( ny,nz), mf_xlow_Ez( ny,nz), STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 1st Mur coeff. alloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 1st Mur coeff. alloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(1)==dims(1)-1) then
    allocate( mf_xhigh_Ey(ny,nz), mf_xhigh_Ez(ny,nz), STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 2nd Mur coeff. alloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 2nd Mur coeff. alloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(2)==0) then
    allocate( mf_ylow_Ex( nx,nz), mf_ylow_Ez( nx,nz), STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 3rd Mur coeff. alloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 3rd Mur coeff. alloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(2)==dims(2)-1) then
    allocate( mf_yhigh_Ex(nx,nz), mf_yhigh_Ez(nx,nz), STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 4th Mur coeff. alloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 4th Mur coeff. alloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(3)==0) then
    allocate( mf_zlow_Ex( nx,ny), mf_zlow_Ey( nx,ny), STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 5th Mur coeff. alloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 5th Mur coeff. alloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(3)==dims(3)-1) then
    allocate( mf_zhigh_Ex(nx,ny), mf_zhigh_Ey(nx,ny), STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 6th Mur coeff. alloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 6th Mur coeff. alloc. failed! my_id = ', my_id
      stop
    end if
  end if

  call MUR_set_mf_arrays(nx,ny,nz)

else
  mf1 = (c0*dt-dx)/(c0*dt+dx)
  mf2 = (c0*dt-dy)/(c0*dt+dy)
  mf3 = (c0*dt-dz)/(c0*dt+dz)
end if

END SUBROUTINE Mur_init

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Mur_updateE - First order Mur ABC on first and last+1 E components
!
! DESCRIPTION
!       Applies the first order Mur ABC on all E comp. with index 1 or "n+1"
!
!       Example of a Mur formula:
!
!       Ey(1,i,j)^{n+1} = Ey(2,i,j)^n - mf1*(Ey(1,i,j)^n - Ey(2,i,j))^{n+1})
!
!       where mf1 = (c0*dt-dx)/(c0*dt+dx) and the last index refers to the time
!       level. Note that Ey(2,i,j)^n is stored in a variable Eyidiri(1,i,j)
!
!       Historical Note: Once upon a time we applied Mur at E(1) and H(n). 
!       This was done by the two subroutines Mur_updateE and Mur_updateH.(ulfa)
!
! METHOD
!       First applies the Mur scheme to the E-fields on the lower x side,
!       namely Ey(1,1:ny,2:nz) and Ez(1,2:ny,1:nz)
!       ( Note that Ey(1,1:ny,1) and Ez(1,1,1:nz) are omitted since they
!         will be treated as belonging to the y and z sides respectively.
!         Also note that Ex(1,:,:) is not at the outer boundary and is hence
!         not treated with an ABC! )
!
!       Then goes on to treat the lower y side, the lower z side and the upper
!       sides in the same order.
!
!       Note that the E fields on the edges of the computational domain could 
!       be set to anything. They never influence the solution in the interior.
!       (E fields on the edges are only used by neighboring H fields on the 
!       surface of the computational domain. These H fields are never used!)
!
! SEE ALSO
!       SUBROUTINE updateE in update.f90 and Mur_storeE
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Mur_updateE(nx,ny,nz,Ex,Ey,Ez)

USE globalvar_mod, ONLY : dims, coords, jmin, kmin
USE Material_mod, ONLY : Mat_inhomo

!------------------------------------------------------------------------------
!  Passed variables
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz
real(kind=rfp), intent(inout),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(inout),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(inout),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!
! Mur ABC for low index
!

! Low x
if (coords(1)==0) then
  if (Mat_inhomo) then
    Ey(1,1:ny,kmin:nz) = Eyidiri(1,1:ny,kmin:nz) - mf_xlow_Ey(1:ny,kmin:nz)*  &
                                       (Ey(1,1:ny,kmin:nz)-Ey(2,1:ny,kmin:nz))
    Ez(1,jmin:ny,1:nz) = Ezidiri(1,jmin:ny,1:nz) - mf_xlow_Ez(jmin:ny,1:nz)*  &
                                       (Ez(1,jmin:ny,1:nz)-Ez(2,jmin:ny,1:nz))
  else
    Ey(1,1:ny,kmin:nz) = Eyidiri(1,1:ny,kmin:nz) -                            &
                         mf1 * (Ey(1,1:ny,kmin:nz)-Ey(2,1:ny,kmin:nz))
    Ez(1,jmin:ny,1:nz) = Ezidiri(1,jmin:ny,1:nz) -                            &
                         mf1 * (Ez(1,jmin:ny,1:nz)-Ez(2,jmin:ny,1:nz))
  end if
end if

! Low y
if (coords(2)==0) then
  if (Mat_inhomo) then
    Ex(1:nx,1,kmin:nz) = Exidirj(1:nx,1,kmin:nz) - mf_ylow_Ex(1:nx,kmin:nz)*  &
                                       (Ex(1:nx,1,kmin:nz)-Ex(1:nx,2,kmin:nz))
    Ez(1:nx,1,   1:nz) = Ezidirj(1:nx,1,   1:nz) - mf_ylow_Ez(1:nx,1:nz)*     &
                                       (Ez(1:nx,1,   1:nz)-Ez(1:nx,2,   1:nz))
  else
    Ex(1:nx,1,kmin:nz) = Exidirj(1:nx,1,kmin:nz) -                            &
                         mf2 * (Ex(1:nx,1,kmin:nz)-Ex(1:nx,2,kmin:nz))
    Ez(1:nx,1,   1:nz) = Ezidirj(1:nx,1,   1:nz) -                            &
                         mf2 * (Ez(1:nx,1,   1:nz)-Ez(1:nx,2,   1:nz))
  end if
end if

! Low z
if (coords(3)==0) then
  if (Mat_inhomo) then
    Ex(1:nx,1:ny,1)    = Exidirk(1:nx,1:ny, 1) - mf_zlow_Ex(1:nx,1:ny)*       &
                                             (Ex(1:nx,1:ny,1)-Ex(1:nx,1:ny,2))
    Ey(1:nx,1:ny,1)    = Eyidirk(1:nx,1:ny, 1) - mf_zlow_Ey(1:nx,1:ny)*       &
                                             (Ey(1:nx,1:ny,1)-Ey(1:nx,1:ny,2))
  else
    Ex(1:nx,1:ny,1)    = Exidirk(1:nx,1:ny, 1) -                              &
                         mf3 * (Ex(1:nx,1:ny,1)-Ex(1:nx,1:ny,2))
    Ey(1:nx,1:ny,1)    = Eyidirk(1:nx,1:ny, 1) -                              &
                         mf3 * (Ey(1:nx,1:ny,1)-Ey(1:nx,1:ny,2))
  end if
end if

!
! Mur ABC for high index
!

! High x
if (coords(1)==dims(1)-1) then
  if (Mat_inhomo) then
    Ey(nx+1,1:ny,1:nz) = Eyidiri(2,1:ny,1:nz) - mf_xhigh_Ey(1:ny,1:nz)*       &
                                         (Ey(nx+1,1:ny,1:nz)-Ey(nx,1:ny,1:nz))
    Ez(nx+1,1:ny,1:nz) = Ezidiri(2,1:ny,1:nz) - mf_xhigh_Ez(1:ny,1:nz)*       &
                                         (Ez(nx+1,1:ny,1:nz)-Ez(nx,1:ny,1:nz))
  else
    Ey(nx+1,1:ny,1:nz) = Eyidiri(2,1:ny,1:nz) -                               &
                         mf1 * (Ey(nx+1,1:ny,1:nz)-Ey(nx,1:ny,1:nz))
    Ez(nx+1,1:ny,1:nz) = Ezidiri(2,1:ny,1:nz) -                               &
                         mf1 * (Ez(nx+1,1:ny,1:nz)-Ez(nx,1:ny,1:nz))
  end if
end if

! High y
if (coords(2)==dims(2)-1) then
  if (Mat_inhomo) then
    Ex(1:nx,ny+1,1:nz) = Exidirj(1:nx,2,1:nz) - mf_yhigh_Ex(1:nx,1:nz)*       &
                                         (Ex(1:nx,ny+1,1:nz)-Ex(1:nx,ny,1:nz)) 
    Ez(1:nx,ny+1,1:nz) = Ezidirj(1:nx,2,1:nz) - mf_yhigh_Ez(1:nx,1:nz)*       &
                                         (Ez(1:nx,ny+1,1:nz)-Ez(1:nx,ny,1:nz))
  else
    Ex(1:nx,ny+1,1:nz) = Exidirj(1:nx,2,1:nz) -                               &
                         mf2 * (Ex(1:nx,ny+1,1:nz)-Ex(1:nx,ny,1:nz)) 
    Ez(1:nx,ny+1,1:nz) = Ezidirj(1:nx,2,1:nz) -                               &
                         mf2 * (Ez(1:nx,ny+1,1:nz)-Ez(1:nx,ny,1:nz))
  end if
end if

! High z
if (coords(3)==dims(3)-1) then
  if (Mat_inhomo) then
    Ex(1:nx,1:ny,nz+1) = Exidirk(1:nx,1:ny, 2) - mf_zhigh_Ex(1:nx,1:ny)*      &
                                         (Ex(1:nx,1:ny,nz+1)-Ex(1:nx,1:ny,nz))
    Ey(1:nx,1:ny,nz+1) = Eyidirk(1:nx,1:ny, 2) - mf_zhigh_Ey(1:nx,1:ny)*      &
                                         (Ey(1:nx,1:ny,nz+1)-Ey(1:nx,1:ny,nz))
  else
    Ex(1:nx,1:ny,nz+1) = Exidirk(1:nx,1:ny, 2) -                              &
                         mf3 * (Ex(1:nx,1:ny,nz+1)-Ex(1:nx,1:ny,nz))
    Ey(1:nx,1:ny,nz+1) = Eyidirk(1:nx,1:ny, 2) -                              &
                         mf3 * (Ey(1:nx,1:ny,nz+1)-Ey(1:nx,1:ny,nz))
  end if
end if

END SUBROUTINE Mur_updateE

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Mur_storeE - Stores "second cell"-values needed in the next Mur update
!
! DESCRIPTION
!       The "second cell"-values needed in the next call to Mur_updateE
!       are stored in Eyidiri etc. This is necessary since the "second cell"-
!       values are given new values in updateE and we need both the new and 
!       the old value in Mur_updateE. (It is possible to implement 
!       Mur_updateE so that no old values are needed.)
!
! METHOD
!       Performs  Eyidiri(1,:,:) = Ey(   2,:,:)  etc.
!
! SYNOPSIS
!       call Mur_storeE(nx,ny,nz,Ex,Ey,Ez)
!       call updateE(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
!       call Mur_updateE(nx,ny,nz,Ex,Ey,Ez)
!
! SEE ALSO
!       Mur_updateE and SUBROUTINE updateE in update.f90
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Mur_storeE(nx,ny,nz,Ex,Ey,Ez)

USE globalvar_mod, ONLY : dims, coords

!------------------------------------------------------------------------------
!  Passed variables
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz
real(kind=rfp), intent(inout),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(inout),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(inout),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! save old values inside the boundary before updating
if (coords(1)==0) then
  Eyidiri(1,:,:) = Ey(   2,:,:)
  Ezidiri(1,:,:) = Ez(   2,:,:) 
end if
if (coords(2)==0) then
  Exidirj(:,1,:) = Ex(:,   2,:)
  Ezidirj(:,1,:) = Ez(:,   2,:)  
end if
if (coords(3)==0) then
  Exidirk(:,:,1) = Ex(:,:,   2)
  Eyidirk(:,:,1) = Ey(:,:,   2) 
end if
if (coords(1)==dims(1)-1) then
  Eyidiri(2,:,:) = Ey(nx,:,:)
  Ezidiri(2,:,:) = Ez(nx,:,:) 
end if
if (coords(2)==dims(2)-1) then
  Exidirj(:,2,:) = Ex(:,ny,:)
  Ezidirj(:,2,:) = Ez(:,ny,:)  
end if
if (coords(3)==dims(3)-1) then
  Exidirk(:,:,2) = Ex(:,:,nz)
  Eyidirk(:,:,2) = Ey(:,:,nz) 
end if

END SUBROUTINE Mur_storeE

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Mur_end - Deallocate private Mur data
!
! DESCRIPTION
!       Deallocate private Mur data
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Mur_end()

USE globalvar_mod, ONLY : dims, coords, my_id
USE Material_mod, ONLY : Mat_inhomo

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: allocstat

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

deallocate( Eyidiri , Ezidiri, STAT=allocstat )
if (allocstat/=0) then
  write(*,*) 'Warning! First Mur deallocation failed! my_id = ', my_id
end if
                 
deallocate( Exidirj , Ezidirj, STAT=allocstat )
if (allocstat/=0) then
  write(*,*) 'Warning! Second Mur deallocation failed! my_id = ', my_id
end if
                 
deallocate( Exidirk , Eyidirk, STAT=allocstat )
if (allocstat/=0) then
  write(*,*) 'Warning! Third Mur deallocation failed! my_id = ', my_id
end if

if (mat_inhomo) then

  if (coords(1)==0) then
    deallocate( mf_xlow_Ey,  mf_xlow_Ez, STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 1st Mur coeff. dealloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 1st Mur coeff. dealloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(1)==dims(1)-1) then
    deallocate( mf_xhigh_Ey, mf_xhigh_Ez, STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 2nd Mur coeff. dealloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 2nd Mur coeff. dealloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(2)==0) then
    deallocate( mf_ylow_Ex,  mf_ylow_Ez,  STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 3rd Mur coeff. dealloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 3rd Mur coeff. dealloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(2)==dims(2)-1) then
    deallocate( mf_yhigh_Ex, mf_yhigh_Ez, STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 4th Mur coeff. dealloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 4th Mur coeff. dealloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(3)==0) then
    deallocate( mf_zlow_Ex,  mf_zlow_Ey,  STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 5th Mur coeff. dealloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 5th Mur coeff. dealloc. failed! my_id = ', my_id
      stop
    end if
  end if

  if (coords(3)==dims(3)-1) then
    deallocate( mf_zhigh_Ex, mf_zhigh_Ey, STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! 6th Mur coeff. dealloc. fail! my_id =', my_id
#endif
      write(*,*) 'FATAL ERROR! 6th Mur coeff. dealloc. failed! my_id = ', my_id
      stop
    end if
  end if

end if

END SUBROUTINE Mur_end

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       MUR_set_mf_arrays - Gives values to mf_[xyz][low,high]_E[xyz] arrays
!
! DESCRIPTION
!       PRIVATE SUBROUTINE called by MUR_init if mat_inhomo is .true.
!       Gives values to arrays mf_xlow_Ey, mf_xlow_Ez, etc.
!
! METHOD
!       Uses iep[xyz] to find the eps_r value for each component on the 
!       boundary. eps_r is then use to compute c (speed of light).
!
!       iep[xyz] have the size (1:nx,1:ny,1:nz). Hence they do not exist
!       for tangential E-fields at the upper boundaries. To find eps_r for
!       Ez(nx+1,jj,kk) we use iepz(nx,jj,kk). For symmetry reasons we use
!       iepz(2,jj,kk) to find eps_r for Ez(1,jj,kk).
!
! ERRORS
!       No error handling
!
! SEE ALSO
!       MUR_init
!
! HISTORY
!       Written by Ulf Andersson 2003-02-28
!       Imported from GemsTD by Ulf Andersson 2004-11-09
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE MUR_set_mf_arrays(nx,ny,nz)

USE material_mod,  ONLY : iepx, iepy, iepz, Mat_eps_r
USE globalvar_mod, ONLY : dims, coords, dx, dy, dz, dt

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

!------------------------------------------------------------------------------
!                      L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ii, jj, kk, matid
real(kind=rfp) :: c, Da

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

Da = 1
! Set mf_x*
do kk=1,nz
  do jj=1,ny

    if (coords(1)==0) then
      matid = iepy(2,jj,kk)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_xlow_Ey(jj,kk)  = (c*dt-dx)/(c*dt+dx)

      matid = iepz(2,jj,kk)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_xlow_Ez(jj,kk)  = (c*dt-dx)/(c*dt+dx)
    end if

    if (coords(1)==dims(1)-1) then
      matid = iepy(nx,jj,kk)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_xhigh_Ey(jj,kk) = (c*dt-dx)/(c*dt+dx)

      matid = iepz(nx,jj,kk)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_xhigh_Ez(jj,kk) = (c*dt-dx)/(c*dt+dx)
    end if

  end do
end do

! Set mf_y*
do kk=1,nz
  do ii=1,nx

    if (coords(2)==0) then
      matid = iepx(ii,2,kk)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_ylow_Ex(ii,kk)  = (c*dt-dy)/(c*dt+dy)

      matid = iepz(ii,2,kk)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_ylow_Ez(ii,kk)  = (c*dt-dy)/(c*dt+dy)
    end if

    if (coords(2)==dims(2)-1) then
      matid = iepx(ii,ny,kk)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_yhigh_Ex(ii,kk) = (c*dt-dy)/(c*dt+dy)

      matid = iepz(ii,ny,kk)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_yhigh_Ez(ii,kk) = (c*dt-dy)/(c*dt+dy)
    end if

  end do
end do

! Set mf_z*
do jj=1,ny
  do ii=1,nx

    if (coords(3)==0) then
      matid = iepx(ii,jj,2)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_zlow_Ex(ii,jj)  = (c*dt-dz)/(c*dt+dz)

      matid = iepy(ii,jj,2)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_zlow_Ey(ii,jj)  = (c*dt-dz)/(c*dt+dz)
    end if

    if (coords(3)==dims(3)-1) then
      matid = iepx(ii,jj,nz)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_zhigh_Ex(ii,jj) = (c*dt-dz)/(c*dt+dz)

      matid = iepy(ii,jj,nz)
      c = c0/sqrt(Mat_eps_r(matid))
      mf_zhigh_Ey(ii,jj) = (c*dt-dz)/(c*dt+dz)
    end if

  end do
end do

END SUBROUTINE MUR_set_mf_arrays

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE Mur_mod
