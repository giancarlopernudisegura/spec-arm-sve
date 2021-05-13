!+
! NAME
!       UPML_mod - Absorbing boundary conditions using uniaxial PML
!
! DESCRIPTION
!       Absorbing boundary conditions using uniaxial PML. 
!
! METHOD
!       Absorbing boundary conditions using uniaxial PML according to Gedney,
!       IEEE Trans. Ant. Prop., vol. 44, no. 12, pp 1630-1639, Dec. 1996 and
!       Taflove (ed.), Advances in Computational Electrodynamics, 
!       Sect. 5.4-5.9, 1998.
!
! PUBLIC
!       SUBROUTINE UPML_init
!       SUBROUTINE UPML_initH
!       SUBROUTINE UPML_initE
!       SUBROUTINE UPML_updateH
!       SUBROUTINE UPML_updateE
!       SUBROUTINE UPML_end
!
! SEE ALSO
!       Mur_mod 
!
! HISTORY
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE UPML_mod
USE parameter_mod, ONLY : rfp, one, zero
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

PUBLIC UPML_init, UPML_initE, UPML_initH, UPML_updateE, UPML_updateH, UPML_end

PRIVATE

! Upmlspec

!  12          ! Number of cells in PML layer
!  0.0001      ! Theoretical reflection, in percent
!  4           ! degree of polynomial for sigma/rho
!integer        :: pml_cells = 0  ! Number of pml_cells
integer        :: prof_type = 4   ! Type of profile for sigma
real(kind=rfp) :: R0 = 0.0001_rfp ! % of desired reflection
!
! Field variables:
real(kind=rfp), dimension(:,:,:), allocatable :: Dx_ilow, Dx_ihigh
real(kind=rfp), dimension(:,:,:), allocatable :: Dy_ilow, Dy_ihigh
real(kind=rfp), dimension(:,:,:), allocatable :: Dz_ilow, Dz_ihigh
real(kind=rfp), dimension(:,:,:), allocatable :: Dx_jlow, Dx_jhigh
real(kind=rfp), dimension(:,:,:), allocatable :: Dy_jlow, Dy_jhigh
real(kind=rfp), dimension(:,:,:), allocatable :: Dz_jlow, Dz_jhigh
real(kind=rfp), dimension(:,:,:), allocatable :: Dx_klow, Dx_khigh
real(kind=rfp), dimension(:,:,:), allocatable :: Dy_klow, Dy_khigh
real(kind=rfp), dimension(:,:,:), allocatable :: Dz_klow, Dz_khigh

real(kind=rfp), dimension(:,:,:), allocatable :: Bx_ilow, Bx_ihigh
real(kind=rfp), dimension(:,:,:), allocatable :: By_ilow, By_ihigh
real(kind=rfp), dimension(:,:,:), allocatable :: Bz_ilow, Bz_ihigh
real(kind=rfp), dimension(:,:,:), allocatable :: Bx_jlow, Bx_jhigh
real(kind=rfp), dimension(:,:,:), allocatable :: By_jlow, By_jhigh
real(kind=rfp), dimension(:,:,:), allocatable :: Bz_jlow, Bz_jhigh
real(kind=rfp), dimension(:,:,:), allocatable :: Bx_klow, Bx_khigh
real(kind=rfp), dimension(:,:,:), allocatable :: By_klow, By_khigh
real(kind=rfp), dimension(:,:,:), allocatable :: Bz_klow, Bz_khigh

! Updating coefficients:
real(kind=rfp), dimension(:), allocatable :: axe, aye, aze
real(kind=rfp), dimension(:), allocatable :: bxe, bye, bze
real(kind=rfp), dimension(:), allocatable :: cxe, cye, cze
real(kind=rfp), dimension(:), allocatable :: fxe, fye, fze

real(kind=rfp), dimension(:), allocatable :: axh, ayh, azh
real(kind=rfp), dimension(:), allocatable :: bxh, byh, bzh
real(kind=rfp), dimension(:), allocatable :: cxh, cyh, czh
real(kind=rfp), dimension(:), allocatable :: fxh, fyh, fzh

! Absorption coefficients:
real(kind=rfp), dimension(:), allocatable :: sigmx, sigmx_star 
real(kind=rfp), dimension(:), allocatable :: sigmy, sigmy_star
real(kind=rfp), dimension(:), allocatable :: sigmz, sigmz_star

real(kind=rfp), dimension(:), allocatable :: kappax, kappax_star
real(kind=rfp), dimension(:), allocatable :: kappay, kappay_star
real(kind=rfp), dimension(:), allocatable :: kappaz, kappaz_star

! Arrays for inhomogeneous materials
real(kind=rfp), dimension(:,:), allocatable :: eps_xlow_Ex,  eps_xlow_Ey,  eps_xlow_Ez
real(kind=rfp), dimension(:,:), allocatable :: eps_xhigh_Ex, eps_xhigh_Ey, eps_xhigh_Ez
real(kind=rfp), dimension(:,:), allocatable :: eps_ylow_Ex,  eps_ylow_Ey,  eps_ylow_Ez
real(kind=rfp), dimension(:,:), allocatable :: eps_yhigh_Ex, eps_yhigh_Ey, eps_yhigh_Ez
real(kind=rfp), dimension(:,:), allocatable :: eps_zlow_Ex,  eps_zlow_Ey,  eps_zlow_Ez
real(kind=rfp), dimension(:,:), allocatable :: eps_zhigh_Ex, eps_zhigh_Ey, eps_zhigh_Ez

! vaccum-values
real(kind=rfp) :: epsinv
real(kind=rfp) :: muinv

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       UPML_allocate - Allocates variables for UPML
!
! DESCRIPTION
!       Allocations are collected here. Called from UPML_init
!
! SEE ALSO
!       UPML_init, UPML_end
!
! ERRORS
!
! HISTORY
!       Written by 흆e Rydell
!       Stuff for inhomog. materials added 2011-01-02 by Ulf A.
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE UPML_allocate(nx,ny,nz)
USE parameter_mod, ONLY  : bytes_per_float, eight_byte
USE globalvar_mod, ONLY  : xstart, ystart, zstart, xstop, ystop, zstop,       &
                           dims, coords 
USE Material_mod, ONLY : Mat_inhomo

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

!------------------------------------------------------------------------------
!                      L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: allocstat
integer(kind=eight_byte) :: bytes

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

bytes = 0
allocate(Bx_ilow(xstart:1,ystart:ystop,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'Bx_ilow')
allocate(By_ilow(xstart:1,ystart:ystop,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'By_ilow')
allocate(Bz_ilow(xstart:1,ystart:ystop,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'Bz_ilow')
bytes = bytes + (1-xstart+1)*(ystop-ystart+1)*(zstop-zstart+1)*3

allocate(Bx_ihigh(nx+1:xstop,ystart:ystop,zstart:zstop), STAT=allocstat) 
call check_allocate(allocstat,'Bx_ihigh')
allocate(By_ihigh(nx+1:xstop,ystart:ystop,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'By_ihigh')
allocate(Bz_ihigh(nx+1:xstop,ystart:ystop,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'Bz_ihigh')
bytes = bytes + (xstop-nx)*(ystop-ystart+1)*(zstop-zstart+1)*3

allocate(Bx_jlow(1:nx,ystart:1,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'Bx_jlow')
allocate(By_jlow(1:nx,ystart:1,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'By_jlow')
allocate(Bz_jlow(1:nx,ystart:1,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'Bz_jlow')
bytes = bytes + nx*(1-ystart+1)*(zstop-zstart+1)*3

allocate(Bx_jhigh(1:nx,ny+1:ystop,zstart:zstop), STAT=allocstat) 
call check_allocate(allocstat,'Bx_jhigh')
allocate(By_jhigh(1:nx,ny+1:ystop,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'By_jhigh')
allocate(Bz_jhigh(1:nx,ny+1:ystop,zstart:zstop), STAT=allocstat)
call check_allocate(allocstat,'Bz_jhigh')
bytes = bytes + nx*(ystop-ny)*(zstop-zstart+1)*3

allocate(Bx_klow(1:nx,1:ny,zstart:1), STAT=allocstat)
call check_allocate(allocstat,'Bx_klow')
allocate(By_klow(1:nx,1:ny,zstart:1), STAT=allocstat)
call check_allocate(allocstat,'By_klow')
allocate(Bz_klow(1:nx,1:ny,zstart:1), STAT=allocstat)
call check_allocate(allocstat,'Bz_klow')
bytes = bytes + nx*ny*(1-zstart+1)*3

allocate(Bx_khigh(1:nx,1:ny,nz+1:zstop), STAT=allocstat) 
call check_allocate(allocstat,'Bx_khigh')
allocate(By_khigh(1:nx,1:ny,nz+1:zstop), STAT=allocstat)
call check_allocate(allocstat,'By_khigh')
allocate(Bz_khigh(1:nx,1:ny,nz+1:zstop), STAT=allocstat)
call check_allocate(allocstat,'Bz_khigh')
bytes = bytes + nx*ny*(zstop-nz)*3

!------------------------------
allocate(Dx_ilow(xstart:1,ystart:ystop+1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dx_ilow')
allocate(Dy_ilow(xstart:1,ystart:ystop+1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dy_ilow')
allocate(Dz_ilow(xstart:1,ystart:ystop+1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dz_ilow')
bytes = bytes + (1-xstart+1)*(ystop-ystart+2)*(zstop-zstart+2)*3

allocate(Dx_ihigh(nx+1:xstop+1,ystart:ystop+1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dx_ihigh')
allocate(Dy_ihigh(nx+1:xstop+1,ystart:ystop+1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dy_ihigh')
allocate(Dz_ihigh(nx+1:xstop+1,ystart:ystop+1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dz_ihigh')
bytes = bytes + (xstop-nx+1)*(ystop-ystart+2)*(zstop-zstart+2)*3

allocate(Dx_jlow(1:nx,ystart:1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dx_jlow')
allocate(Dy_jlow(1:nx,ystart:1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dy_jlow')
allocate(Dz_jlow(1:nx,ystart:1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dz_jlow')
bytes = bytes + nx*(1-ystart+1)*(zstop-zstart+2)*3

allocate(Dx_jhigh(1:nx,ny+1:ystop+1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dx_jhigh')
allocate(Dy_jhigh(1:nx,ny+1:ystop+1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dy_jhigh')
allocate(Dz_jhigh(1:nx,ny+1:ystop+1,zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dz_jhigh')
bytes = bytes + nx*(ystop-ny+1)*(zstop-zstart+2)*3

allocate(Dx_klow(1:nx,1:ny,zstart:1), STAT=allocstat)
call check_allocate(allocstat,'Dx_klow')
allocate(Dy_klow(1:nx,1:ny,zstart:1), STAT=allocstat)
call check_allocate(allocstat,'Dy_klow')
allocate(Dz_klow(1:nx,1:ny,zstart:1), STAT=allocstat)
call check_allocate(allocstat,'Dz_klow')
bytes = bytes + nx*ny*(1-zstart+1)*3

allocate(Dx_khigh(1:nx,1:ny,nz+1:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dx_khigh')
allocate(Dy_khigh(1:nx,1:ny,nz+1:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dy_khigh')
allocate(Dz_khigh(1:nx,1:ny,nz+1:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'Dz_khigh')
bytes = bytes + nx*ny*(zstop-nz+1)*3

!------------------------------
allocate(sigmx(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'sigmx')
allocate(sigmy(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'sigmy')
allocate(sigmz(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'sigmz')

allocate(sigmx_star(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'sigmx_star')
allocate(sigmy_star(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'sigmy_star')
allocate(sigmz_star(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'sigmz_star')
!------------------------------
allocate(kappax(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'kappax')
allocate(kappay(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'kappay')
allocate(kappaz(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'kappaz')

allocate(kappax_star(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'kappax_star')
allocate(kappay_star(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'kappay_star')
allocate(kappaz_star(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'kappaz_star')
!------------------------------
allocate(axe(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'axe')
allocate(aye(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'aye')
allocate(aze(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'aze')

allocate(bxe(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'bxe')
allocate(bye(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'bye')
allocate(bze(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'bze')

allocate(cxe(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'cxe')
allocate(cye(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'cye')
allocate(cze(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'cze')

allocate(fxe(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'fxe')
allocate(fye(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'fye')
allocate(fze(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'fze')
!------------------------------
allocate(axh(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'axh')
allocate(ayh(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'ayh')
allocate(azh(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'azh')

allocate(bxh(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'bxh')
allocate(byh(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'byh')
allocate(bzh(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'bzh')

allocate(cxh(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'cxh')
allocate(cyh(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'cyh')
allocate(czh(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'czh')

allocate(fxh(xstart:xstop+1), STAT=allocstat)
call check_allocate(allocstat,'fxh')
allocate(fyh(ystart:ystop+1), STAT=allocstat)
call check_allocate(allocstat,'fyh')
allocate(fzh(zstart:zstop+1), STAT=allocstat)
call check_allocate(allocstat,'fzh')

bytes = bytes*bytes_per_float/1024/1024
write(*,*) 'Fields allocated in UPML_mod, Mbytes used = ', bytes

! For inhomog. materials:
if (Mat_inhomo) then
  !! We assume that material extend to the border. TBC Add a check for this.
  if (coords(1)==0) then
    allocate(  eps_xlow_Ex(ystart+1:ystop, zstart+1:zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_xlow_Ex')
    allocate(  eps_xlow_Ey(ystart  :ystop, zstart+1:zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_xlow_Ey')
    allocate(  eps_xlow_Ez(ystart+1:ystop, zstart  :zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_xlow_Ez')
  end if

  if (coords(1)==dims(1)-1) then
    allocate( eps_xhigh_Ex(ystart+1:ystop, zstart+1:zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_xhigh_Ex')
    allocate( eps_xhigh_Ey(ystart  :ystop, zstart+1:zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_xhigh_Ey')
    allocate( eps_xhigh_Ez(ystart+1:ystop, zstart  :zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_xhigh_Ez')
  end if

  if (coords(2)==0) then
    allocate(  eps_ylow_Ex(1:nx, zstart+1:zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_ylow_Ex')
    allocate(  eps_ylow_Ey(1:nx, zstart+1:zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_ylow_Ey')
    allocate(  eps_ylow_Ez(1:nx, zstart  :zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_ylow_Ez')
  end if

  if (coords(2)==dims(2)-1) then
    allocate( eps_yhigh_Ex(1:nx, zstart+1:zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_yhigh_Ex')
    allocate( eps_yhigh_Ey(1:nx, zstart+1:zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_yhigh_Ey')
    allocate( eps_yhigh_Ez(1:nx, zstart  :zstop), STAT=allocstat )
    call check_allocate(allocstat,'eps_yhigh_Ez')
  end if

  if (coords(3)==0) then
    allocate(  eps_zlow_Ex( nx,ny), STAT=allocstat )
    call check_allocate(allocstat,'eps_zlow_Ex')
    allocate(  eps_zlow_Ey( nx,ny), STAT=allocstat )
    call check_allocate(allocstat,'eps_zlow_Ey')
    allocate(  eps_zlow_Ez( nx,ny), STAT=allocstat )
    call check_allocate(allocstat,'eps_zlow_Ez')
  end if

  if (coords(3)==dims(3)-1) then
    allocate( eps_zhigh_Ex(nx,ny), STAT=allocstat )
    call check_allocate(allocstat,'eps_zhigh_Ex')
    allocate( eps_zhigh_Ey(nx,ny), STAT=allocstat )
    call check_allocate(allocstat,'eps_zhigh_Ey')
    allocate( eps_zhigh_Ez(nx,ny), STAT=allocstat )
    call check_allocate(allocstat,'eps_zhigh_Ez')
  end if
  
end if

END SUBROUTINE UPML_allocate

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE check_allocate(stat,outputstr)

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: stat
character(len=*), intent(in) :: outputstr

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if (stat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! Allocation of ', outputstr,               &
             ' failed in UPML_allocate!'
#endif
  write(*,*) 'FATAL ERROR! Allocation of ', outputstr,                        &
             ' failed in UPML_allocate!'
  stop
end if

END SUBROUTINE check_allocate

SUBROUTINE UPML_set_eps_arrays(nx,ny,nz)

USE globalvar_mod, ONLY : dims, coords
USE material_mod,  ONLY : iepx, iepy, iepz, Mat_eps_r

integer :: nx, ny, nz

integer :: ii, jj, kk

! Set the default value (Vacuum) to all parts
eps_xlow_Ex  = epsinv
eps_xlow_Ey  = epsinv
eps_xlow_Ez  = epsinv
eps_xhigh_Ex = epsinv
eps_xhigh_Ey = epsinv
eps_xhigh_Ez = epsinv
eps_ylow_Ex  = epsinv
eps_ylow_Ey  = epsinv
eps_ylow_Ez  = epsinv
eps_yhigh_Ex = epsinv
eps_yhigh_Ey = epsinv
eps_yhigh_Ez = epsinv
eps_zlow_Ex  = epsinv
eps_zlow_Ey  = epsinv
eps_zlow_Ey  = epsinv
eps_zhigh_Ex = epsinv
eps_zhigh_Ey = epsinv
eps_zhigh_Ey = epsinv

! Set eps_x*
do kk=1,nz
  do jj=1,ny

    if (coords(1)==0) then
      eps_xlow_Ex(jj,kk)  = epsinv/Mat_eps_r(iepx( 2,jj,kk))
      eps_xlow_Ey(jj,kk)  = epsinv/Mat_eps_r(iepy( 2,jj,kk))
      eps_xlow_Ez(jj,kk)  = epsinv/Mat_eps_r(iepz( 2,jj,kk))
    end if

    if (coords(1)==dims(1)-1) then
      eps_xhigh_Ex(jj,kk) = epsinv/Mat_eps_r(iepx(nx,jj,kk))
      eps_xhigh_Ey(jj,kk) = epsinv/Mat_eps_r(iepy(nx,jj,kk))
      eps_xhigh_Ez(jj,kk) = epsinv/Mat_eps_r(iepz(nx,jj,kk))
    end if

  end do
end do

! Set eps_y*
do kk=1,nz
  do ii=1,nx

    if (coords(2)==0) then
      eps_ylow_Ex(ii,kk)  = epsinv/Mat_eps_r(iepx(ii, 2,kk))
      eps_ylow_Ey(ii,kk)  = epsinv/Mat_eps_r(iepy(ii, 2,kk))
      eps_ylow_Ez(ii,kk)  = epsinv/Mat_eps_r(iepz(ii, 2,kk))
    end if

    if (coords(2)==dims(2)-1) then
      eps_yhigh_Ex(ii,kk) = epsinv/Mat_eps_r(iepx(ii,ny,kk))
      eps_yhigh_Ey(ii,kk) = epsinv/Mat_eps_r(iepy(ii,ny,kk))
      eps_yhigh_Ez(ii,kk) = epsinv/Mat_eps_r(iepz(ii,ny,kk))
    end if

  end do
end do

! Set eps_z*
do jj=1,ny
  do ii=1,nx

    if (coords(3)==0) then
      eps_zlow_Ex(ii,jj)  = epsinv/Mat_eps_r(iepx(ii,jj, 2))
      eps_zlow_Ey(ii,jj)  = epsinv/Mat_eps_r(iepy(ii,jj, 2))
      eps_zlow_Ez(ii,jj)  = epsinv/Mat_eps_r(iepz(ii,jj, 2))
    end if

    if (coords(3)==dims(3)-1) then
      eps_zhigh_Ex(ii,jj) = epsinv/Mat_eps_r(iepx(ii,jj,nz))
      eps_zhigh_Ey(ii,jj) = epsinv/Mat_eps_r(iepy(ii,jj,nz))
      eps_zhigh_Ez(ii,jj) = epsinv/Mat_eps_r(iepz(ii,jj,nz))
    end if

  end do
end do

END SUBROUTINE UPML_set_eps_arrays

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       UPMLinit - Initializes the UPML absorption variables
!
! DESCRIPTION
!       Initializes the UPML variables and updating coefficients. The profile
!       for sigma is a polynomial of order prof_type. If prof_type==0 then
!       geometric progression is used. Variables are allocated in UPMLallocate.
!
! METHOD
!       Sigma ranges from ?start to *stop+1. The higher end is filled first
!       and the lower end is the filled by mirroring the higher end.
!       Sigma(1) and sigma(n+1) both lie on the border between the interior
!       and the UPML region. They are both equal to zero since the fields in
!       cell 1 are split between UPML and the interior region, unlike those
!       in cell n?+1.
!
! ERRORS
!       The code stops if incorrect parameters are specified or if mat_type = 4
!
! SEE ALSO
!       UPMLupdateH, UPMLupdateE, UPMLallocate
!
! HISTORY
!       Written by Ulf Andersson and 흆e Rydell
!       Stuff for inhomog. materials added 2011-01-02 by Ulf A.
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE UPML_init(nx,ny,nz)
USE parameter_mod, ONLY : eps0, mu0
USE globalvar_mod, ONLY : xstart, ystart, zstart, xstop, ystop, zstop, dx, dy,&
                          dz, dxinv, dyinv, dzinv, dt, c0, number_of_PML_cells
USE Material_mod, ONLY : Mat_inhomo

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

!------------------------------------------------------------------------------
!                      L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

real(kind=rfp), parameter :: g = 2.15_rfp  ! Magic number for geom. progr.
integer                   :: i, j, k, m
integer                   :: xpml_start, ypml_start, zpml_start
real(kind=rfp)            :: sigma0, gpfact
real(kind=rfp)            :: rho, sigma_max_X, sigma_max_Y, sigma_max_Z
real(kind=rfp)            :: deltaX, deltaY, deltaZ
real(kind=rfp)            :: kappamax, q

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

call UPML_allocate(nx,ny,nz)   ! Allocate variables

! Initialize fields:

! Initialize D arrays to zero using the same OpenMP para. as in updateE_simple
call UPML_initD(nx,ny,nz)
! Initialize D arrays to zero again to make sure all comp. are set to zero
Dx_ilow  = 0.0_rfp;  Dy_ilow  = 0.0_rfp;  Dz_ilow  = 0.0_rfp
Dx_ihigh = 0.0_rfp;  Dy_ihigh = 0.0_rfp;  Dz_ihigh = 0.0_rfp
Dx_jlow  = 0.0_rfp;  Dy_jlow  = 0.0_rfp;  Dz_jlow  = 0.0_rfp
Dx_jhigh = 0.0_rfp;  Dy_jhigh = 0.0_rfp;  Dz_jhigh = 0.0_rfp
Dx_klow  = 0.0_rfp;  Dy_klow  = 0.0_rfp;  Dz_klow  = 0.0_rfp
Dx_khigh = 0.0_rfp;  Dy_khigh = 0.0_rfp;  Dz_khigh = 0.0_rfp

! Initialize B arrays to zero using the same OpenMP para. as in updateH
call UPML_initB(nx,ny,nz)
! Initialize B arrays to zero again to make sure all comp. are set to zero
Bx_ilow  = 0.0_rfp;  By_ilow  = 0.0_rfp;  Bz_ilow  = 0.0_rfp
Bx_ihigh = 0.0_rfp;  By_ihigh = 0.0_rfp;  Bz_ihigh = 0.0_rfp
Bx_jlow  = 0.0_rfp;  By_jlow  = 0.0_rfp;  Bz_jlow  = 0.0_rfp
Bx_jhigh = 0.0_rfp;  By_jhigh = 0.0_rfp;  Bz_jhigh = 0.0_rfp
Bx_klow  = 0.0_rfp;  By_klow  = 0.0_rfp;  Bz_klow  = 0.0_rfp
Bx_khigh = 0.0_rfp;  By_khigh = 0.0_rfp;  Bz_khigh = 0.0_rfp

write(*,*)
write(*,*) 'number_of_PML_cells = ', number_of_PML_cells
R0 = R0*0.01_rfp
! write(*,*) 'R0 = ', R0
! Exact comparison between real*8 and real*8 values should be OK here (ulfa)
if ((dx/=dy).or.(dx/=dz)) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! UPML assumes dx=dy=dz!'
#endif
  write(*,*) 'FATAL ERROR! UPML assumes dx=dy=dz!'
  stop 
end if

xpml_start = nx+1
ypml_start = ny+1
zpml_start = nz+1

deltaX = number_of_PML_cells/dxinv
! write(*,*) 'deltaX = ', deltaX
 
deltaY = number_of_PML_cells/dyinv
! write(*,*) 'deltaY = ', deltaY

deltaZ = number_of_PML_cells/dzinv
! write(*,*) 'deltaZ = ', deltaZ

! Initializations of sigma and sigma_star:

sigmx = 0.0_rfp;  sigmx_star = 0.0_rfp
sigmy = 0.0_rfp;  sigmy_star = 0.0_rfp
sigmz = 0.0_rfp;  sigmz_star = 0.0_rfp

! Initialize variables to their default values (used in regions
! where the corresponding sigma is 0):

kappax = 1.0_rfp;  kappax_star = 1.0_rfp
kappay = 1.0_rfp;  kappay_star = 1.0_rfp
kappaz = 1.0_rfp;  kappaz_star = 1.0_rfp

axe = 1.0_rfp;  axh = 1.0_rfp
aye = 1.0_rfp;  ayh = 1.0_rfp
aze = 1.0_rfp;  azh = 1.0_rfp

bxe = dt;  bxh = dt
bye = dt;  byh = dt
bze = dt;  bzh = dt

cxe = 1.0_rfp/dt;  cxh = 1.0_rfp/dt
cye = 1.0_rfp/dt;  cyh = 1.0_rfp/dt
cze = 1.0_rfp/dt;  czh = 1.0_rfp/dt

fxe = 1.0_rfp/dt;  fxh = 1.0_rfp/dt
fye = 1.0_rfp/dt;  fyh = 1.0_rfp/dt
fze = 1.0_rfp/dt;  fzh = 1.0_rfp/dt

!****************************Higher PML*******************************!

! Sigma and sigma_star are the same but they are
! shifted half a cell size.

!-----------------------Geometric progression--------------------------

q =  1.0_rfp    ! Used for kappa

if (prof_type==0) then

  write(*,*) 'Using geometric progression profile for sigma'

  sigma0 = eps0*c0*log(g)/(2.0_rfp*dx*(g**Number_of_PML_cells-1))*log(R0)
  gpfact = sigma0*(g-1)/(sqrt(g)*log(g))

  do i=xpml_start,xstop+1
    rho = (i-xpml_start)*dx

    sigmx(i)      = -gpfact*g**(rho/dx)
    sigmx_star(i) = -gpfact*g**(rho/dx+0.5)

    kappax(i)      = q**(rho/dx)
    kappax_star(i) = q**(rho/dx+0.5_rfp)
  end do

  sigmx(xpml_start) = -sigma0*(sqrt(g)-1)/log(g)

! Note that sigmx_star(xstop+1) is never used since it lies
! outside the PML layer
!  sigma_max_X = sigmx(xstop+1)

  sigma0 = ((eps0*c0*log(g))/(2.0_rfp*dy*(g**Number_of_PML_cells-1)))*log(R0)
  gpfact = sigma0*(g-1)/(sqrt(g)*log(g))

  do j=ypml_start,ystop+1
    rho = (j-ypml_start)*dy

    sigmy(j)      = -gpfact*g**(rho/dy)
    sigmy_star(j) = -gpfact*g**(rho/dy+0.5_rfp)

    kappay(j)      = q**(rho/dy)
    kappay_star(j) = q**(rho/dy+0.5_rfp)
  end do

  sigmy(ypml_start) = -sigma0*(sqrt(g)-1)/log(g)

! Note that sigmy_star(ystop+1) is never used since it lies
! outside the PML layer
!  sigma_max_Y = sigmy(ystop+1)

  sigma0 = ((eps0*c0*log(g))/(2.0_rfp*dz*(g**Number_of_PML_cells-1)))*log(R0)
  gpfact = sigma0*(g-1)/(sqrt(g)*log(g))

  do k=zpml_start,zstop+1
    rho = (k-zpml_start)*dz

    sigmz(k)      = -gpfact*g**(rho/dz)
    sigmz_star(k) = -gpfact*g**(rho/dz+0.5_rfp)

    kappaz(k)      = q**(rho/dz)
    kappaz_star(k) = q**(rho/dz+0.5_rfp)
  end do

  sigmz(zpml_start) = -sigma0*(sqrt(g)-1)/log(g)

! Note that sigmz_star(zstop+1) is never used since it lies
! outside the PML layer
!  sigma_max_Z = sigmz(zstop+1)

!-------------------------Polynomial profile---------------------------

else

  m = prof_type   ! m is the degree of the polynomial
  write(*,*) 'Using polynomial profile for sigma, with degree', m

  kappamax = 1.0_rfp

  sigma_max_X = -(m+1)*eps0*c0*log(R0)/(2*deltaX) ! log is nat. log. (ln)

  do i=xpml_start,xstop+1
    rho = (i-xpml_start)*dx

    sigmx(i)      = (sigma_max_X/(dx*(m+1)*deltaX**prof_type))*               &
                    ((rho+dx/2)**(m+1)-(rho-dx/2)**(m+1))
    sigmx_star(i) = (sigma_max_X/(dx*(m+1)*deltaX**prof_type))*               &
                    ((rho+dx)**(m+1)-rho**(m+1))

    kappax(i)      = 1.0_rfp + (kappamax-1.0_rfp)*(rho/deltaX)**m
    kappax_star(i) = 1.0_rfp + (kappamax-1.0_rfp)*(rho/deltaX + 0.5_rfp*dx)**m
  end do

  sigmx(xpml_start) = sigma_max_X/(deltaX**m*(m+1)*dx)*(dx/2)**(m+1)

! Note that sigmx_star(xstop+1) is never used since it lies
! outside the PML layer

  sigma_max_Y = -(m+1)*eps0*c0*log(R0)/(2*deltaY) ! log is nat. log. (ln)

  do j=ypml_start,ystop+1
    rho = (j-ypml_start)*dy

    sigmy(j)      = (sigma_max_Y/(dy*(m+1)*deltaY**prof_type))*               &
                    ((rho+dy/2)**(m+1)-(rho-dy/2)**(m+1))
    sigmy_star(j) = (sigma_max_Y/(dy*(m+1)*deltaY**prof_type))*               &
                    ((rho+dy)**(m+1)-rho**(m+1))

    kappay(j)      = 1.0_rfp + (kappamax-1.0_rfp)*(rho/deltaY)**m
    kappay_star(j) = 1.0_rfp + (kappamax-1.0_rfp)*(rho/deltaY + 0.5_rfp*dy)**m
  end do

  sigmy(ypml_start) = sigma_max_Y/(deltaY**m*(m+1)*dy)*(dy/2)**(m+1)

! Note that sigmy_star(ystop+1) is never used since it lies
! outside the PML layer

  sigma_max_Z = -(m+1)*eps0*c0*log(R0)/(2*deltaZ) ! log is nat. log. (ln)

  do k=zpml_start,zstop+1
    rho = (k-zpml_start)*dz

    sigmz(k)      = (sigma_max_Z/(dz*(m+1)*deltaZ**prof_type))*               &
                    ((rho+dz/2)**(m+1)-(rho-dz/2)**(m+1))
    sigmz_star(k) = (sigma_max_Z/(dz*(m+1)*deltaZ**prof_type))*               &
                    ((rho+dz)**(m+1)-rho**(m+1))

    kappaz(k)      = 1.0_rfp + (kappamax-1.0_rfp)*(rho/deltaZ)**m
    kappaz_star(k) = 1.0_rfp + (kappamax-1.0_rfp)*(rho/deltaZ + 0.5_rfp*dz)**m
  end do

  sigmz(zpml_start) = sigma_max_Z/(deltaZ**m*(m+1)*dz)*(dz/2)**(m+1)

! Note that sigmz_star(zstop+1) is never used since it lies
! outside the PML layer

end if

!***************************Lower PML********************************!
! (Mirroring of higher PML)

do i=xstart,1
  sigmx(i)       = sigmx(xstop-number_of_PML_cells+2-i)
  sigmx_star(i)  = sigmx_star(xstop-number_of_PML_cells+1-i)

  kappax(i)      = kappax(xstop-number_of_PML_cells+2-i)
  kappax_star(i) = kappax_star(xstop-number_of_PML_cells+1-i)
end do

do j=ystart,1
  sigmy(j)       = sigmy(ystop-number_of_PML_cells+2-j)
  sigmy_star(j)  = sigmy_star(ystop-number_of_PML_cells+1-j)

  kappay(j)      = kappay(ystop-number_of_PML_cells+2-j)
  kappay_star(j) = kappay_star(ystop-number_of_PML_cells+1-j)
end do

do k=zstart,1
  sigmz(k)       = sigmz(zstop-number_of_PML_cells+2-k)
  sigmz_star(k)  = sigmz_star(zstop-number_of_PML_cells+1-k)

  kappaz(k)      = kappaz(zstop-number_of_PML_cells+2-k)
  kappaz_star(k) = kappaz_star(zstop-number_of_PML_cells+1-k)
end do

!******************************************************************************

! Updating coefficients for the electric and magnetic fields:

! For higher and lower UPML, otherwise default values as above.
! (Sigma and sigma_star are the same but they are shifted 0.5 cell size.)

! Note that the coefficients beginning with c or f and ending in e are used
! for all fields situated at the edge of a cell (in their respective
! direction). Those ending in an h are used for fields at the center of a cell
! (also E fields). These coefficients should be renamed to avoid confusion.

do i=xpml_start,xstop+1
  axe(i) = (2.0_rfp*eps0*kappax(i)-sigmx(i)*dt)/                              &
           (2.0_rfp*eps0*kappax(i)+sigmx(i)*dt)
  axh(i) = (2.0_rfp*eps0*kappax_star(i)-sigmx_star(i)*dt)/                    &
           (2.0_rfp*eps0*kappax_star(i)+sigmx_star(i)*dt)

  bxe(i) = 2.0_rfp*eps0*dt / (2.0_rfp*eps0*kappax(i)+sigmx(i)*dt)
  bxh(i) = 2.0_rfp*eps0*dt / (2.0_rfp*eps0*kappax_star(i)+sigmx_star(i)*dt)

  cxe(i) = kappax(i)/dt + sigmx(i)/(2.0_rfp*eps0)
  cxh(i) = kappax_star(i)/dt + sigmx_star(i)/(2.0_rfp*eps0)

  fxe(i) = kappax(i)/dt - sigmx(i)/(2.0_rfp*eps0)
  fxh(i) = kappax_star(i)/dt - sigmx_star(i)/(2.0_rfp*eps0)
end do

do i=xstart,1   ! Mirroring
  axe(i) = axe(xstop-number_of_PML_cells+2-i)
  bxe(i) = bxe(xstop-number_of_PML_cells+2-i)
  cxe(i) = cxe(xstop-number_of_PML_cells+2-i)
  fxe(i) = fxe(xstop-number_of_PML_cells+2-i)

  axh(i) = axh(xstop-number_of_PML_cells+1-i)
  bxh(i) = bxh(xstop-number_of_PML_cells+1-i)
  cxh(i) = cxh(xstop-number_of_PML_cells+1-i)
  fxh(i) = fxh(xstop-number_of_PML_cells+1-i)
end do
!---------
do j=ypml_start,ystop+1
  aye(j) = (2.0_rfp*eps0*kappay(j)-sigmy(j)*dt)/                              &
           (2.0_rfp*eps0*kappay(j)+sigmy(j)*dt)
  ayh(j) = (2.0_rfp*eps0*kappay_star(j)-sigmy_star(j)*dt)/                    &
           (2.0_rfp*eps0*kappay_star(j)+sigmy_star(j)*dt)

  bye(j) = 2.0_rfp*eps0*dt / (2.0_rfp*eps0*kappay(j)+sigmy(j)*dt)
  byh(j) = 2.0_rfp*eps0*dt / (2.0_rfp*eps0*kappay_star(j)+sigmy_star(j)*dt)

  cye(j) = kappay(j)/dt + sigmy(j)/(2.0_rfp*eps0)
  cyh(j) = kappay_star(j)/dt + sigmy_star(j)/(2.0_rfp*eps0)

  fye(j) = kappay(j)/dt - sigmy(j)/(2.0_rfp*eps0)
  fyh(j) = kappay_star(j)/dt - sigmy_star(j)/(2.0_rfp*eps0)
end do

do j=ystart,1   ! Mirroring
  aye(j) = aye(ystop-number_of_PML_cells+2-j)
  bye(j) = bye(ystop-number_of_PML_cells+2-j)
  cye(j) = cye(ystop-number_of_PML_cells+2-j)
  fye(j) = fye(ystop-number_of_PML_cells+2-j)

  ayh(j) = ayh(ystop-number_of_PML_cells+1-j)
  byh(j) = byh(ystop-number_of_PML_cells+1-j)
  cyh(j) = cyh(ystop-number_of_PML_cells+1-j)
  fyh(j) = fyh(ystop-number_of_PML_cells+1-j)
end do
!---------
do k=zpml_start,zstop+1
  aze(k) = (2.0_rfp*eps0*kappaz(k)-sigmz(k)*dt)/                              &
           (2.0_rfp*eps0*kappaz(k)+sigmz(k)*dt)
  azh(k) = (2.0_rfp*eps0*kappaz_star(k)-sigmz_star(k)*dt)/                    &
           (2.0_rfp*eps0*kappaz_star(k)+sigmz_star(k)*dt)

  bze(k) = 2.0_rfp*eps0*dt / (2.0_rfp*eps0*kappaz(k)+sigmz(k)*dt)
  bzh(k) = 2.0_rfp*eps0*dt / (2.0_rfp*eps0*kappaz_star(k)+sigmz_star(k)*dt)

  cze(k) = kappaz(k)/dt + sigmz(k)/(2.0_rfp*eps0)
  czh(k) = kappaz_star(k)/dt + sigmz_star(k)/(2.0_rfp*eps0)

  fze(k) = kappaz(k)/dt - sigmz(k)/(2.0_rfp*eps0)
  fzh(k) = kappaz_star(k)/dt - sigmz_star(k)/(2.0_rfp*eps0)
end do

do k=zstart,1   ! Mirroring
  aze(k) = aze(zstop-number_of_PML_cells+2-k)
  bze(k) = bze(zstop-number_of_PML_cells+2-k)
  cze(k) = cze(zstop-number_of_PML_cells+2-k)
  fze(k) = fze(zstop-number_of_PML_cells+2-k)

  azh(k) = azh(zstop-number_of_PML_cells+1-k)
  bzh(k) = bzh(zstop-number_of_PML_cells+1-k)
  czh(k) = czh(zstop-number_of_PML_cells+1-k)
  fzh(k) = fzh(zstop-number_of_PML_cells+1-k)
end do

epsinv = one/eps0
muinv  = one/mu0

if (Mat_inhomo) then
  CALL UPML_set_eps_arrays(nx,ny,nz)
end if

END SUBROUTINE UPML_init

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       UPML_initB - 
!
! DESCRIPTION
!
! METHOD
!
! ERRORS
!
! SEE ALSO
!
! HISTORY
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE UPML_initB(nx,ny,nz)

USE globalvar_mod, ONLY: xstart, ystart, zstart, xstop, ystop, zstop

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!*********************** Block 1 (ilow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL 

!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ystart,ystop
    do i=xstart,0
      Bx_ilow(i,j,k) = zero
      By_ilow(i,j,k) = zero
      Bz_ilow(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

i = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(j,k)
#endif
do k=1,nz
  do j=1,ny
    Bx_ilow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!************************ Block 2 (ihigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ystart,ystop
    do i=nx+1,xstop
      Bx_ihigh(i,j,k) = zero
      By_ihigh(i,j,k) = zero
      Bz_ihigh(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************* Block 3 (jlow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ystart,0
    do i=1,nx
      Bx_jlow(i,j,k) = zero
      By_jlow(i,j,k) = zero
      Bz_jlow(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j=1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,k)
#endif
do k=1,nz
  do i=1,nx
    By_jlow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 4 (jhigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ny+1,ystop
    do i=1,nx
      Bx_jhigh(i,j,k) = zero 
      By_jhigh(i,j,k) = zero 
      Bz_jhigh(i,j,k) = zero 
    end do   
  end do 
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 5 (klow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,0
  do j=1,ny
    do i=1,nx
      Bx_klow(i,j,k) = zero 
      By_klow(i,j,k) = zero 
      Bz_klow(i,j,k) = zero 
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k=1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j)
#endif
do j=1,ny
  do i=1,nx
    Bz_klow(i,j,k) = zero 
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 6 (khigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=nz+1,zstop
  do j=1,ny
    do i=1,nx
      Bx_khigh(i,j,k) = zero 
      By_khigh(i,j,k) = zero 
      Bz_khigh(i,j,k) = zero 
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
!$OMP END PARALLEL 
#endif

END SUBROUTINE UPML_INITB

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       UPML_initH - 
!
! DESCRIPTION
!
! METHOD
!
! ERRORS
!
! SEE ALSO
!
! HISTORY
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE UPML_initH(nx,ny,nz,Hx,Hy,Hz)

USE globalvar_mod, ONLY: xstart, ystart, zstart, xstop, ystop, zstop,         &
                         Hxsize, Hysize, Hzsize

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

real(kind=rfp), intent(inout),                                                &
 dimension(Hxsize(1):Hxsize(2), Hxsize(3):Hxsize(4), Hxsize(5):Hxsize(6)) :: Hx
real(kind=rfp), intent(inout),                                                &
 dimension(Hysize(1):Hysize(2), Hysize(3):Hysize(4), Hysize(5):Hysize(6)) :: Hy
real(kind=rfp), intent(inout),                                                &
 dimension(Hzsize(1):Hzsize(2), Hzsize(3):Hzsize(4), Hzsize(5):Hzsize(6)) :: Hz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!*********************** Block 1 (ilow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL 
#endif

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ystart,ystop
    do i=xstart,0
      Hx(i,j,k) = zero
      Hy(i,j,k) = zero
      Hz(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

i = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(j,k)
#endif
do k=1,nz
  do j=1,ny
    Hx(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!************************ Block 2 (ihigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ystart,ystop
    do i=nx+1,xstop
      Hx(i,j,k) = zero
      Hy(i,j,k) = zero
      Hz(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************* Block 3 (jlow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ystart,0
    do i=1,nx
      Hx(i,j,k) = zero
      Hy(i,j,k) = zero
      Hz(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j=1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,k)
#endif
do k=1,nz
  do i=1,nx
    Hy(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 4 (jhigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ny+1,ystop
    do i=1,nx
      Hx(i,j,k) = zero
      Hy(i,j,k) = zero
      Hz(i,j,k) = zero
    end do   
  end do 
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 5 (klow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,0
  do j=1,ny
    do i=1,nx
      Hx(i,j,k) = zero
      Hy(i,j,k) = zero
      Hz(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k=1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j)
#endif
do j=1,ny
  do i=1,nx
    Hz(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 6 (khigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=nz+1,zstop
  do j=1,ny
    do i=1,nx
      Hx(i,j,k) = zero
      Hy(i,j,k) = zero
      Hz(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
!$OMP END PARALLEL 
#endif

END SUBROUTINE UPML_INITH

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       UPML_updateH - Updates the H-fields in the UPML layers
!
! DESCRIPTION
!       Updates the H-fields in the UPML layers
!
! METHOD
!       Corners and edges are merged with sides so that there are six
!       PML blocks. These six blocks are:
!
!         Block 1: i=xstart,0   ; j=ystart,ystop ; k=zstart,zstop
!         Block 2: i=nx+1,xstop ; j=ystart,ystop ; k=zstart,zstop
!         Block 3: i=1,nx       ; j=ystart,0     ; k=zstart,zstop
!         Block 4: i=1,nx       ; j=ny+1,ystop   ; k=zstart,zstop
!         Block 5: i=1,nx       ; j=1,ny         ; k=zstart,0
!         Block 6: i=1,nx       ; j=1,ny         ; k=nz+1,zstop
!
!       The blocks are updated in order. The coefficients are initialized in
!       UPMLinit.
!
! ERRORS
!       No error handling
!
! SEE ALSO
!       UPML_updateE & UPML_init
!
! HISTORY
!       Written by 흆e Rydell
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE UPML_updateH(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)

USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize,      &
                         xstart, ystart, zstart, xstop, ystop, zstop,         &
                         dxinv, dyinv, dzinv

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

real(kind=rfp), intent(in   ),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(in   ),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(in   ),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

real(kind=rfp), intent(inout),                                                &
 dimension(Hxsize(1):Hxsize(2), Hxsize(3):Hxsize(4), Hxsize(5):Hxsize(6)) :: Hx
real(kind=rfp), intent(inout),                                                &
 dimension(Hysize(1):Hysize(2), Hysize(3):Hysize(4), Hysize(5):Hysize(6)) :: Hy
real(kind=rfp), intent(inout),                                                &
 dimension(Hzsize(1):Hzsize(2), Hzsize(3):Hzsize(4), Hzsize(5):Hzsize(6)) :: Hz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k
real(kind=rfp) :: Bxold, Byold, Bzold

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!*********************** Block 1 (ilow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL PRIVATE(i,j,k,Bxold,Byold,Bzold)

!$OMP DO
#endif
do k=zstart,zstop
  do j=ystart,ystop
    do i=xstart,0

      Bxold = Bx_ilow(i,j,k)

      Bx_ilow(i,j,k) = ayh(j) * Bx_ilow(i,j,k) +                              &
                       byh(j) * ((Ey(i,j,k+1)-Ey(i,j,k  ))*dzinv +            &
                                 (Ez(i,j,k  )-Ez(i,j+1,k))*dyinv)
                                                       
      Hx(i,j,k) = azh(k) * Hx(i,j,k) +                                        &
                  bzh(k) * (cxe(i)*Bx_ilow(i,j,k) - fxe(i)*Bxold) * muinv
      !------
      Byold = By_ilow(i,j,k)

      By_ilow(i,j,k) = azh(k) * By_ilow(i,j,k) +                              &
                       bzh(k) * ((Ez(i+1,j,k)-Ez(i,j,k  ))*dxinv +            &
                                 (Ex(i,j,k  )-Ex(i,j,k+1))*dzinv)

      Hy(i,j,k) = axh(i) * Hy(i,j,k) +                                        &
                  bxh(i) * (cye(j)*By_ilow(i,j,k) - fye(j)*Byold) * muinv
      !------
      Bzold = Bz_ilow(i,j,k)

      Bz_ilow(i,j,k) = axh(i) * Bz_ilow(i,j,k) +                              &
                       bxh(i) * ((Ex(i,j+1,k)-Ex(i,j,k  ))*dyinv +            &
                                 (Ey(i,j,k  )-Ey(i+1,j,k))*dxinv)

      Hz(i,j,k) = ayh(j) * Hz(i,j,k) +                                        &
                  byh(j) * (cze(k)*Bz_ilow(i,j,k) - fze(k)*Bzold) * muinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

i = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(j,k)
#endif
do k=1,nz
  do j=1,ny

    Bxold = Bx_ilow(i,j,k)

    Bx_ilow(i,j,k) = ayh(j) * Bx_ilow(i,j,k) +                                &
                     byh(j) * ((Ey(i,j,k+1)-Ey(i,j,k  ))*dzinv +              &
                               (Ez(i,j,k  )-Ez(i,j+1,k))*dyinv)
                                                       
    Hx(i,j,k) = azh(k) * Hx(i,j,k) +                                          &
                bzh(k) * (cxe(i)*Bx_ilow(i,j,k) - fxe(i)*Bxold) * muinv
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!************************ Block 2 (ihigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ystart,ystop
    do i=nx+1,xstop

      Bxold = Bx_ihigh(i,j,k)

      Bx_ihigh(i,j,k) = ayh(j) * Bx_ihigh(i,j,k) +                            &
                        byh(j) * ((Ey(i,j,k+1)-Ey(i,j,k  ))*dzinv +           &
                                  (Ez(i,j,k  )-Ez(i,j+1,k))*dyinv)

      Hx(i,j,k) = azh(k) * Hx(i,j,k) +                                        &
                  bzh(k) * (cxe(i)*Bx_ihigh(i,j,k) - fxe(i)*Bxold) * muinv
      !------
      Byold = By_ihigh(i,j,k)

      By_ihigh(i,j,k) = azh(k) * By_ihigh(i,j,k) +                            &
                        bzh(k) * ((Ez(i+1,j,k)-Ez(i,j,k  ))*dxinv +           &
                                  (Ex(i,j,k  )-Ex(i,j,k+1))*dzinv)

      Hy(i,j,k) = axh(i) * Hy(i,j,k) +                                        &
                  bxh(i) * (cye(j)*By_ihigh(i,j,k) - fye(j)*Byold) * muinv
      !------
      Bzold = Bz_ihigh(i,j,k)

      Bz_ihigh(i,j,k) = axh(i) * Bz_ihigh(i,j,k) +                            &
                        bxh(i) * ((Ex(i,j+1,k)-Ex(i,j,k  ))*dyinv +           &
                                  (Ey(i,j,k  )-Ey(i+1,j,k))*dxinv)

      Hz(i,j,k) = ayh(j) * Hz(i,j,k) +                                        &
                  byh(j) * (cze(k)*Bz_ihigh(i,j,k) - fze(k)*Bzold) * muinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************* Block 3 (jlow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ystart,0
    do i=1,nx

      Bxold = Bx_jlow(i,j,k)

      Bx_jlow(i,j,k) = ayh(j) * Bx_jlow(i,j,k) +                              &
                       byh(j) * ((Ey(i,j,k+1)-Ey(i,j,k  ))*dzinv +            &
                                 (Ez(i,j,k  )-Ez(i,j+1,k))*dyinv)

      Hx(i,j,k) = azh(k) * Hx(i,j,k) +                                        &
                  bzh(k) * (cxe(i)*Bx_jlow(i,j,k) - fxe(i)*Bxold) * muinv
      !------
      Byold = By_jlow(i,j,k)

      By_jlow(i,j,k) = azh(k) * By_jlow(i,j,k) +                              &
                       bzh(k) * ((Ez(i+1,j,k)-Ez(i,j,k  ))*dxinv +            &
                                 (Ex(i,j,k  )-Ex(i,j,k+1))*dzinv)

      Hy(i,j,k) = axh(i) * Hy(i,j,k) +                                        &
                  bxh(i) * (cye(j)*By_jlow(i,j,k) - fye(j)*Byold) * muinv
      !------
      Bzold = Bz_jlow(i,j,k)

      Bz_jlow(i,j,k) = axh(i) * Bz_jlow(i,j,k) +                              &
                       bxh(i) * ((Ex(i,j+1,k)-Ex(i,j,k  ))*dyinv +            &
                                 (Ey(i,j,k  )-Ey(i+1,j,k))*dxinv)

      Hz(i,j,k) = ayh(j) * Hz(i,j,k) +                                        &
                  byh(j) * (cze(k)*Bz_jlow(i,j,k) - fze(k)*Bzold) * muinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j=1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,k)
#endif
do k=1,nz
  do i=1,nx

    Byold = By_jlow(i,j,k)

    By_jlow(i,j,k) = azh(k) * By_jlow(i,j,k) +                                &
                     bzh(k) * ((Ez(i+1,j,k)-Ez(i,j,k  ))*dxinv +              &
                               (Ex(i,j,k  )-Ex(i,j,k+1))*dzinv)

    Hy(i,j,k) = axh(i) * Hy(i,j,k) +                                          &
                bxh(i) * (cye(j)*By_jlow(i,j,k) - fye(j)*Byold) * muinv

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 4 (jhigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,zstop
  do j=ny+1,ystop
    do i=1,nx

      Bxold = Bx_jhigh(i,j,k)

      Bx_jhigh(i,j,k) = ayh(j) * Bx_jhigh(i,j,k) +                            &
                        byh(j) * ((Ey(i,j,k+1)-Ey(i,j,k  ))*dzinv +           &
                                  (Ez(i,j,k  )-Ez(i,j+1,k))*dyinv)

      Hx(i,j,k) = azh(k) * Hx(i,j,k) +                                        &
                  bzh(k) * (cxe(i)*Bx_jhigh(i,j,k) - fxe(i)*Bxold) * muinv
      !------
      Byold = By_jhigh(i,j,k)

      By_jhigh(i,j,k) = azh(k) * By_jhigh(i,j,k) +                            &
                        bzh(k) * ((Ez(i+1,j,k)-Ez(i,j,k  ))*dxinv +           &
                                  (Ex(i,j,k  )-Ex(i,j,k+1))*dzinv)

      Hy(i,j,k) = axh(i) * Hy(i,j,k) +                                        &
                  bxh(i) * (cye(j)*By_jhigh(i,j,k) - fye(j)*Byold) * muinv
      !------
      Bzold = Bz_jhigh(i,j,k)

      Bz_jhigh(i,j,k) = axh(i) * Bz_jhigh(i,j,k) +                            &
                        bxh(i) * ((Ex(i,j+1,k)-Ex(i,j,k  ))*dyinv +           &
                                  (Ey(i,j,k  )-Ey(i+1,j,k))*dxinv)

      Hz(i,j,k) = ayh(j) * Hz(i,j,k) +                                        &
                  byh(j) * (cze(k)*Bz_jhigh(i,j,k) - fze(k)*Bzold) * muinv
    end do   
  end do 
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 5 (klow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=zstart,0
  do j=1,ny
    do i=1,nx

      Bxold = Bx_klow(i,j,k)

      Bx_klow(i,j,k) = ayh(j) * Bx_klow(i,j,k) +                              &
                       byh(j) * ((Ey(i,j,k+1)-Ey(i,j,k  ))*dzinv +            &
                                 (Ez(i,j,k  )-Ez(i,j+1,k))*dyinv)

      Hx(i,j,k) = azh(k) * Hx(i,j,k) +                                        &
                  bzh(k) * (cxe(i)*Bx_klow(i,j,k) - fxe(i)*Bxold) * muinv
      !------
      Byold = By_klow(i,j,k)

      By_klow(i,j,k) = azh(k) * By_klow(i,j,k) +                              &
                       bzh(k) * ((Ez(i+1,j,k)-Ez(i,j,k  ))*dxinv +            &
                                 (Ex(i,j,k  )-Ex(i,j,k+1))*dzinv)

      Hy(i,j,k) = axh(i) * Hy(i,j,k) +                                        &
                  bxh(i) * (cye(j)*By_klow(i,j,k) - fye(j)*Byold) * muinv
      !------
      Bzold = Bz_klow(i,j,k)

      Bz_klow(i,j,k) = axh(i) * Bz_klow(i,j,k) +                              &
                       bxh(i) * ((Ex(i,j+1,k)-Ex(i,j,k  ))*dyinv +            &
                                 (Ey(i,j,k  )-Ey(i+1,j,k))*dxinv)

      Hz(i,j,k) = ayh(j) * Hz(i,j,k) +                                        &
                  byh(j) * (cze(k)*Bz_klow(i,j,k) - fze(k)*Bzold) * muinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k=1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j)
#endif
do j=1,ny
  do i=1,nx

    Bzold = Bz_klow(i,j,k)

    Bz_klow(i,j,k) = axh(i) * Bz_klow(i,j,k) +                                &
                     bxh(i) * ((Ex(i,j+1,k)-Ex(i,j,k  ))*dyinv +              &
                               (Ey(i,j,k  )-Ey(i+1,j,k))*dxinv)

    Hz(i,j,k) = ayh(j) * Hz(i,j,k) +                                          &
                byh(j) * (cze(k)*Bz_klow(i,j,k) - fze(k)*Bzold) * muinv
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 6 (khigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO PRIVATE(i,j,k)
#endif
do k=nz+1,zstop
  do j=1,ny
    do i=1,nx

      Bxold = Bx_khigh(i,j,k)

      Bx_khigh(i,j,k) = ayh(j) * Bx_khigh(i,j,k) +                            &
                        byh(j) * ((Ey(i,j,k+1)-Ey(i,j,k  ))*dzinv +           &
                                  (Ez(i,j,k  )-Ez(i,j+1,k))*dyinv)

      Hx(i,j,k) = azh(k) * Hx(i,j,k) +                                        &
                  bzh(k) * (cxe(i)*Bx_khigh(i,j,k) - fxe(i)*Bxold) * muinv
      !------
      Byold = By_khigh(i,j,k)

      By_khigh(i,j,k) = azh(k) * By_khigh(i,j,k) +                            &
                        bzh(k) * ((Ez(i+1,j,k)-Ez(i,j,k  ))*dxinv +           &
                                  (Ex(i,j,k  )-Ex(i,j,k+1))*dzinv)

      Hy(i,j,k) = axh(i) * Hy(i,j,k) +                                        &
                  bxh(i) * (cye(j)*By_khigh(i,j,k) - fye(j)*Byold) * muinv
      !------
      Bzold = Bz_khigh(i,j,k)

      Bz_khigh(i,j,k) = axh(i) * Bz_khigh(i,j,k) +                            &
                        bxh(i) * ((Ex(i,j+1,k)-Ex(i,j,k  ))*dyinv +           &
                                  (Ey(i,j,k  )-Ey(i+1,j,k))*dxinv)

      Hz(i,j,k) = ayh(j) * Hz(i,j,k) +                                        &
                  byh(j) * (cze(k)*Bz_khigh(i,j,k) - fze(k)*Bzold) * muinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
!$OMP END PARALLEL 
#endif

END SUBROUTINE UPML_updateH

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       UPML_updateE - Wrapper for the E-fields updates (homo & simple)
!
! SEE ALSO
!       UPML_updateE_homo & UPML_updateE_simple
!
! HISTORY
!       Written by Ulf Andersson 2011-01-02
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE UPML_updateE(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)

USE Material_mod, ONLY : Mat_inhomo
USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize  

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

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
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if (Mat_inhomo) then
  CALL UPML_updateE_simple(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
else
  CALL UPML_updateE_homo(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
end if

END SUBROUTINE UPML_updateE

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       UPML_updateE_homo - Updates the E-fields in the UPML layers
!
! DESCRIPTION
!       Updates the E-fields in the UPML layers
!
! METHOD
!       Corners and edges are merged with sides so that there are six
!       PML blocks. These six blocks are:
!
!         Block 1: i=xstart+1,0 ; j=ystart+1,ystop ; k=zstart+1,zstop
!         Block 2: i=nx+1,xstop ; j=ystart+1,ystop ; k=zstart+1,zstop
!         Block 3: i=1,nx       ; j=ystart+1,0     ; k=zstart+1,zstop
!         Block 4: i=1,nx       ; j=ny+1,ystop     ; k=zstart+1,zstop
!         Block 5: i=1,nx       ; j=1,ny           ; k=zstart+1,0
!         Block 6: i=1,nx       ; j=1,ny           ; k=nz+1,zstop
!
!       The above list is the start and stop of each index where all
!       three (physical) E-fields shall be updated with a leap-frog scheme.
!       The difference as compared to the corresponding list in 
!       UPMLupdateH is that here all [xyz]start is replace by [xyz]start+1.
!
!       The blocks are updated in order. 
!       The coefficients are initialized in UPML_init.
!
! ERRORS
!       No error handling.
!
! SEE ALSO
!       UPML_updateE & UPML_init
!
! HISTORY
!       Written by 흆e Rydell
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE UPML_updateE_homo(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)

USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize,      &
                         xstart, ystart, zstart, xstop, ystop, zstop,         &
                         dxinv, dyinv, dzinv

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

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
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k
real(kind=rfp) :: Dxold, Dyold, Dzold

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------


!********************** Block 1 (ilow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL PRIVATE(i,j,k,Dxold,Dyold,Dzold)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    do i=xstart+1,0

      Dxold = Dx_ilow(i,j,k)

      Dx_ilow(i,j,k) = aye(j) * Dx_ilow(i,j,k) +                              &
                       bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +            &
                                 (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
                  bze(k) * (cxh(i)*Dx_ilow(i,j,k) - fxh(i)*Dxold) * epsinv
      !------
      Dyold = Dy_ilow(i,j,k)

      Dy_ilow(i,j,k) = aze(k) * Dy_ilow(i,j,k) +                              &
                       bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +            &
                                 (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
                  bxe(i) * (cyh(j)*Dy_ilow(i,j,k) - fyh(j)*Dyold) * epsinv
      !------
      Dzold = Dz_ilow(i,j,k)

      Dz_ilow(i,j,k) = axe(i) * Dz_ilow(i,j,k) +                              &
                       bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +            &
                                 (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
                  bye(j) * (czh(k)*Dz_ilow(i,j,k) - fzh(k)*Dzold) * epsinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!
! Update the fields on the boundary between Yee and PML
!
i = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do j=1,ny

    Dyold = Dy_ilow(i,j,k)

    Dy_ilow(i,j,k) = aze(k) * Dy_ilow(i,j,k) +                                &
                     bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +              &
                               (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
                bxe(i) * (cyh(j)*Dy_ilow(i,j,k) - fyh(j)*Dyold) * epsinv
    !------
    Dzold = Dz_ilow(i,j,k)

    Dz_ilow(i,j,k) = axe(i) * Dz_ilow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
                bye(j) * (czh(k)*Dz_ilow(i,j,k) - fzh(k)*Dzold) * epsinv
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif
!
! Update fields in the first PML cell. Two of three are PEC! 
!
i = xstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop

    Dxold = Dx_ilow(i,j,k)

    Dx_ilow(i,j,k) = aye(j) * Dx_ilow(i,j,k) +                                &
                     bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +              &
                               (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

    Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                          &
                bze(k) * (cxh(i)*Dx_ilow(i,j,k) - fxh(i)*Dxold) * epsinv

!         Ey(i,j,k) = 0
!         Ez(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=xstart+1,0

    Dyold = Dy_ilow(i,j,k)

    Dy_ilow(i,j,k) = aze(k) * Dy_ilow(i,j,k) +                                &
                     bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +              &
                               (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
                bxe(i) * (cyh(j)*Dy_ilow(i,j,k) - fyh(j)*Dyold) * epsinv

!         Ex(i,j,k) = 0
!         Ez(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,ystop
  do i=xstart+1,0

    Dzold = Dz_ilow(i,j,k)

    Dz_ilow(i,j,k) = axe(i) * Dz_ilow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
                bye(j) * (czh(k)*Dz_ilow(i,j,k) - fzh(k)*Dzold) * epsinv

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 2 (ihigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    do i=nx+1,xstop

      Dxold = Dx_ihigh(i,j,k)

      Dx_ihigh(i,j,k) = aye(j) * Dx_ihigh(i,j,k) +                            &
                        bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +           &
                                  (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
                  bze(k) * (cxh(i)*Dx_ihigh(i,j,k) - fxh(i)*Dxold) * epsinv
      !------
      Dyold = Dy_ihigh(i,j,k)

      Dy_ihigh(i,j,k) = aze(k) * Dy_ihigh(i,j,k) +                            &
                        bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +           &
                                  (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
                  bxe(i) * (cyh(j)*Dy_ihigh(i,j,k) - fyh(j)*Dyold) * epsinv
      !------
      Dzold = Dz_ihigh(i,j,k)

      Dz_ihigh(i,j,k) = axe(i) * Dz_ihigh(i,j,k) +                            &
                        bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +           &
                                  (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
                  bye(j) * (czh(k)*Dz_ihigh(i,j,k) - fzh(k)*Dzold) * epsinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!
! Update fields in the first PML cell. Two of three are PEC! 
!
j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=nx+1,xstop

    Dyold = Dy_ihigh(i,j,k)

    Dy_ihigh(i,j,k) = aze(k) * Dy_ihigh(i,j,k) +                              &
                      bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +             &
                                (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
                bxe(i) * (cyh(j)*Dy_ihigh(i,j,k) - fyh(j)*Dyold) * epsinv

!         Ex(i,j,k) = 0
!         Ez(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,ystop
  do i=nx+1,xstop

    Dzold = Dz_ihigh(i,j,k)

    Dz_ihigh(i,j,k) = axe(i) * Dz_ihigh(i,j,k) +                              &
                      bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +             &
                                (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
                bye(j) * (czh(k)*Dz_ihigh(i,j,k) - fzh(k)*Dzold) * epsinv

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 3 (jlow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,0
    do i=1,nx

      Dxold = Dx_jlow(i,j,k)

      Dx_jlow(i,j,k) = aye(j) * Dx_jlow(i,j,k) +                              &
                       bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +            &
                                 (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
                  bze(k) * (cxh(i)*Dx_jlow(i,j,k) - fxh(i)*Dxold) * epsinv
      !------
      Dyold = Dy_jlow(i,j,k)

      Dy_jlow(i,j,k) = aze(k) * Dy_jlow(i,j,k) +                              &
                       bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +            &
                                 (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
                  bxe(i) * (cyh(j)*Dy_jlow(i,j,k) - fyh(j)*Dyold) * epsinv
      !------
      Dzold = Dz_jlow(i,j,k)

      Dz_jlow(i,j,k) = axe(i) * Dz_jlow(i,j,k) +                              &
                       bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +            &
                                 (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
                  bye(j) * (czh(k)*Dz_jlow(i,j,k) - fzh(k)*Dzold) * epsinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!
! Update the fields on the boundary between Yee and PML.
! (Note that Ez(1,1,:) are excluded from this block since these fields
! were updated in Block 1).
j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do i=1,nx

    Dxold = Dx_jlow(i,j,k)

    Dx_jlow(i,j,k) = aye(j) * Dx_jlow(i,j,k) +                                &
                     bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +              &
                               (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

    Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                          &
                bze(k) * (cxh(i)*Dx_jlow(i,j,k) - fxh(i)*Dxold) * epsinv
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do i=2,nx

    Dzold = Dz_jlow(i,j,k)

    Dz_jlow(i,j,k) = axe(i) * Dz_jlow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
                bye(j) * (czh(k)*Dz_jlow(i,j,k) - fzh(k)*Dzold) * epsinv
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif
!
! Update fields in the first PML cell. Two of three are PEC!
!
j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=1,nx

    Dyold = Dy_jlow(i,j,k)

    Dy_jlow(i,j,k) = aze(k) * Dy_jlow(i,j,k) +                                &
                     bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +              &
                               (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
                bxe(i) * (cyh(j)*Dy_jlow(i,j,k) - fyh(j)*Dyold) * epsinv

!         Ex(i,j,k) = 0
!         Ez(i,j,k) = 0

  end do
end do   
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,0
  do i=1,nx

    Dzold = Dz_jlow(i,j,k)

    Dz_jlow(i,j,k) = axe(i) * Dz_jlow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
                bye(j) * (czh(k)*Dz_jlow(i,j,k) - fzh(k)*Dzold) * epsinv

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do   
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 4 (jhigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ny+1,ystop
    do i=1,nx

      Dxold = Dx_jhigh(i,j,k)

      Dx_jhigh(i,j,k) = aye(j) * Dx_jhigh(i,j,k) +                            &
                        bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +           &
                                  (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
                  bze(k) * (cxh(i)*Dx_jhigh(i,j,k) - fxh(i)*Dxold) * epsinv
      !------
      Dyold = Dy_jhigh(i,j,k)

      Dy_jhigh(i,j,k) = aze(k) * Dy_jhigh(i,j,k) +                            &
                        bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +           &
                                  (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
                  bxe(i) * (cyh(j)*Dy_jhigh(i,j,k) - fyh(j)*Dyold) * epsinv
      !------
      Dzold = Dz_jhigh(i,j,k)

      Dz_jhigh(i,j,k) = axe(i) * Dz_jhigh(i,j,k) +                            &
                        bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +           &
                                  (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
                  bye(j) * (czh(k)*Dz_jhigh(i,j,k) - fzh(k)*Dzold) * epsinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif
!
! Update fields in the first PML cell. Two of three are PEC! 
!

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ny+1,ystop
  do i=1,nx

    Dzold = Dz_jhigh(i,j,k)

    Dz_jhigh(i,j,k) = axe(i) * Dz_jhigh(i,j,k) +                              &
                      bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +             &
                                (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
                bye(j) * (czh(k)*Dz_jhigh(i,j,k) - fzh(k)*Dzold) * epsinv

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************* Block 5 (klow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,0
  do j=1,ny
    do i=1,nx

      Dxold = Dx_klow(i,j,k)

      Dx_klow(i,j,k) = aye(j) * Dx_klow(i,j,k) +                              &
                       bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +            &
                                 (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
                  bze(k) * (cxh(i)*Dx_klow(i,j,k) - fxh(i)*Dxold) * epsinv
      !------
      Dyold = Dy_klow(i,j,k)

      Dy_klow(i,j,k) = aze(k) * Dy_klow(i,j,k) +                              &
                       bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +            &
                                 (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
                  bxe(i) * (cyh(j)*Dy_klow(i,j,k) - fyh(j)*Dyold) * epsinv
      !------
      Dzold = Dz_klow(i,j,k)

      Dz_klow(i,j,k) = axe(i) * Dz_klow(i,j,k) +                              &
                       bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +            &
                                 (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
                  bye(j) * (czh(k)*Dz_klow(i,j,k) - fzh(k)*Dzold) * epsinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!
! Update the fields on the boundary between Yee and PML.
! (Note that Ex(:,1,1) and Ey(1,:,1) have already been updated in
! previous blocks and are not included here.)
k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=2,ny
  do i=1,nx

    Dxold = Dx_klow(i,j,k)

    Dx_klow(i,j,k) = aye(j) * Dx_klow(i,j,k) +                                &
                     bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +              &
                               (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

    Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                          &
                bze(k) * (cxh(i)*Dx_klow(i,j,k) - fxh(i)*Dxold) * epsinv
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=1,ny
  do i=2,nx

    Dyold = Dy_klow(i,j,k)

    Dy_klow(i,j,k) = aze(k) * Dy_klow(i,j,k) +                                &
                     bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +              &
                               (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
                bxe(i) * (cyh(j)*Dy_klow(i,j,k) - fyh(j)*Dyold) * epsinv
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif
!
! Update fields in the first PML cell. Two of three are PEC! 
!
k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=1,ny
  do i=1,nx
    
    Dzold = Dz_klow(i,j,k)

    Dz_klow(i,j,k) = axe(i) * Dz_klow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
                bye(j) * (czh(k)*Dz_klow(i,j,k) - fzh(k)*Dzold) * epsinv

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 6 (khigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=nz+1,zstop
  do j=1,ny
    do i=1,nx     

      Dxold = Dx_khigh(i,j,k)

      Dx_khigh(i,j,k) = aye(j) * Dx_khigh(i,j,k) +                            &
                        bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +           &
                                  (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
                  bze(k) * (cxh(i)*Dx_khigh(i,j,k) - fxh(i)*Dxold) * epsinv
      !------
      Dyold = Dy_khigh(i,j,k)

      Dy_khigh(i,j,k) = aze(k) * Dy_khigh(i,j,k) +                            &
                        bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +           &
                                  (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
                  bxe(i) * (cyh(j)*Dy_khigh(i,j,k) - fyh(j)*Dyold) * epsinv
      !------
      Dzold = Dz_khigh(i,j,k)

      Dz_khigh(i,j,k) = axe(i) * Dz_khigh(i,j,k) +                            &
                        bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +           &
                                  (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
                  bye(j) * (czh(k)*Dz_khigh(i,j,k) - fzh(k)*Dzold) * epsinv
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
!$OMP END PARALLEL 
#endif

! PEC in the stop+1 cells
!
! As long as the fields are initialized to zero they will stay zero in the
! stop+1 cells. The PEC for the lower end is spread out on the six 
! different PML blocks.
! 

END SUBROUTINE UPML_updateE_homo

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       UPML_updateE_simple - Updates the E-fields in the UPML layers
!
! DESCRIPTION
!       Updates the E-fields in the UPML layers for inhomog. materials
!       (Space dependent epsilon)
!
! METHOD
!       Corners and edges are merged with sides so that there are six
!       PML blocks. These six blocks are:
!
!         Block 1: i=xstart+1,0 ; j=ystart+1,ystop ; k=zstart+1,zstop
!         Block 2: i=nx+1,xstop ; j=ystart+1,ystop ; k=zstart+1,zstop
!         Block 3: i=1,nx       ; j=ystart+1,0     ; k=zstart+1,zstop
!         Block 4: i=1,nx       ; j=ny+1,ystop     ; k=zstart+1,zstop
!         Block 5: i=1,nx       ; j=1,ny           ; k=zstart+1,0
!         Block 6: i=1,nx       ; j=1,ny           ; k=nz+1,zstop
!
!       The above list is the start and stop of each index where all
!       three (physical) E-fields shall be updated with a leap-frog scheme.
!       The difference as compared to the corresponding list in 
!       UPMLupdateH is that here all [xyz]start is replace by [xyz]start+1.
!
!       The blocks are updated in order. 
!       The coefficients are initialized in UPML_init.
!
!       The only difference between this routine and UPML_updateE_homo is
!       that epsinv has been replaced with 2D arrays.
!
! ERRORS
!       No error handling.
!
! SEE ALSO
!       UPML_updateE_homo & UPML_init
!
! HISTORY
!       Written by Ulf Andersson 2011-01-02 by adapting UPML_updateE_homo!      
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE UPML_updateE_simple(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)

USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize,      &
                         xstart, ystart, zstart, xstop, ystop, zstop,         &
                         dxinv, dyinv, dzinv

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

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
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k
real(kind=rfp) :: Dxold, Dyold, Dzold

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------


!********************** Block 1 (ilow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL PRIVATE(i,j,k,Dxold,Dyold,Dzold)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    do i=xstart+1,0

      Dxold = Dx_ilow(i,j,k)

      Dx_ilow(i,j,k) = aye(j) * Dx_ilow(i,j,k) +                              &
                       bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +            &
                                 (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
           bze(k) * (cxh(i)*Dx_ilow(i,j,k) - fxh(i)*Dxold) * eps_xlow_Ex(j,k)
      !------
      Dyold = Dy_ilow(i,j,k)

      Dy_ilow(i,j,k) = aze(k) * Dy_ilow(i,j,k) +                              &
                       bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +            &
                                 (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
           bxe(i) * (cyh(j)*Dy_ilow(i,j,k) - fyh(j)*Dyold) * eps_xlow_Ey(j,k)
      !------
      Dzold = Dz_ilow(i,j,k)

      Dz_ilow(i,j,k) = axe(i) * Dz_ilow(i,j,k) +                              &
                       bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +            &
                                 (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
           bye(j) * (czh(k)*Dz_ilow(i,j,k) - fzh(k)*Dzold) * eps_xlow_Ez(j,k)
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!
! Update the fields on the boundary between Yee and PML
!
i = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do j=1,ny

    Dyold = Dy_ilow(i,j,k)

    Dy_ilow(i,j,k) = aze(k) * Dy_ilow(i,j,k) +                                &
                     bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +              &
                               (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
         bxe(i) * (cyh(j)*Dy_ilow(i,j,k) - fyh(j)*Dyold) * eps_xlow_Ey(j,k)
    !------
    Dzold = Dz_ilow(i,j,k)

    Dz_ilow(i,j,k) = axe(i) * Dz_ilow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
         bye(j) * (czh(k)*Dz_ilow(i,j,k) - fzh(k)*Dzold) * eps_xlow_Ez(j,k)
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif
!
! Update fields in the first PML cell. Two of three are PEC! 
!
i = xstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop

    Dxold = Dx_ilow(i,j,k)

    Dx_ilow(i,j,k) = aye(j) * Dx_ilow(i,j,k) +                                &
                     bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +              &
                               (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

    Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                          &
         bze(k) * (cxh(i)*Dx_ilow(i,j,k) - fxh(i)*Dxold) * eps_xlow_Ex(j,k)

!         Ey(i,j,k) = 0
!         Ez(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=xstart+1,0

    Dyold = Dy_ilow(i,j,k)

    Dy_ilow(i,j,k) = aze(k) * Dy_ilow(i,j,k) +                                &
                     bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +              &
                               (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
         bxe(i) * (cyh(j)*Dy_ilow(i,j,k) - fyh(j)*Dyold) * eps_xlow_Ey(j,k)

!         Ex(i,j,k) = 0
!         Ez(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,ystop
  do i=xstart+1,0

    Dzold = Dz_ilow(i,j,k)

    Dz_ilow(i,j,k) = axe(i) * Dz_ilow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
         bye(j) * (czh(k)*Dz_ilow(i,j,k) - fzh(k)*Dzold) * eps_xlow_Ez(j,k)

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 2 (ihigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    do i=nx+1,xstop

      Dxold = Dx_ihigh(i,j,k)

      Dx_ihigh(i,j,k) = aye(j) * Dx_ihigh(i,j,k) +                            &
                        bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +           &
                                  (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
           bze(k) * (cxh(i)*Dx_ihigh(i,j,k) - fxh(i)*Dxold) * eps_xhigh_Ex(j,k)
      !------
      Dyold = Dy_ihigh(i,j,k)

      Dy_ihigh(i,j,k) = aze(k) * Dy_ihigh(i,j,k) +                            &
                        bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +           &
                                  (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
           bxe(i) * (cyh(j)*Dy_ihigh(i,j,k) - fyh(j)*Dyold) * eps_xhigh_Ey(j,k)
      !------
      Dzold = Dz_ihigh(i,j,k)

      Dz_ihigh(i,j,k) = axe(i) * Dz_ihigh(i,j,k) +                            &
                        bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +           &
                                  (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
           bye(j) * (czh(k)*Dz_ihigh(i,j,k) - fzh(k)*Dzold) * eps_xhigh_Ez(j,k)
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!
! Update fields in the first PML cell. Two of three are PEC! 
!
j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=nx+1,xstop

    Dyold = Dy_ihigh(i,j,k)

    Dy_ihigh(i,j,k) = aze(k) * Dy_ihigh(i,j,k) +                              &
                      bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +             &
                                (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
         bxe(i) * (cyh(j)*Dy_ihigh(i,j,k) - fyh(j)*Dyold) * eps_xhigh_Ey(j,k)

!         Ex(i,j,k) = 0
!         Ez(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,ystop
  do i=nx+1,xstop

    Dzold = Dz_ihigh(i,j,k)

    Dz_ihigh(i,j,k) = axe(i) * Dz_ihigh(i,j,k) +                              &
                      bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +             &
                                (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
         bye(j) * (czh(k)*Dz_ihigh(i,j,k) - fzh(k)*Dzold) * eps_xhigh_Ez(j,k)

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 3 (jlow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,0
    do i=1,nx

      Dxold = Dx_jlow(i,j,k)

      Dx_jlow(i,j,k) = aye(j) * Dx_jlow(i,j,k) +                              &
                       bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +            &
                                 (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
           bze(k) * (cxh(i)*Dx_jlow(i,j,k) - fxh(i)*Dxold) * eps_ylow_Ex(i,k)
      !------
      Dyold = Dy_jlow(i,j,k)

      Dy_jlow(i,j,k) = aze(k) * Dy_jlow(i,j,k) +                              &
                       bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +            &
                                 (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
           bxe(i) * (cyh(j)*Dy_jlow(i,j,k) - fyh(j)*Dyold) * eps_ylow_Ey(i,k)
      !------
      Dzold = Dz_jlow(i,j,k)

      Dz_jlow(i,j,k) = axe(i) * Dz_jlow(i,j,k) +                              &
                       bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +            &
                                 (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
           bye(j) * (czh(k)*Dz_jlow(i,j,k) - fzh(k)*Dzold) * eps_ylow_Ez(i,k)
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!
! Update the fields on the boundary between Yee and PML.
! (Note that Ez(1,1,:) are excluded from this block since these fields
! were updated in Block 1).
j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do i=1,nx

    Dxold = Dx_jlow(i,j,k)

    Dx_jlow(i,j,k) = aye(j) * Dx_jlow(i,j,k) +                                &
                     bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +              &
                               (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

    Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                          &
         bze(k) * (cxh(i)*Dx_jlow(i,j,k) - fxh(i)*Dxold) * eps_ylow_Ex(i,k)
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do i=2,nx

    Dzold = Dz_jlow(i,j,k)

    Dz_jlow(i,j,k) = axe(i) * Dz_jlow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
         bye(j) * (czh(k)*Dz_jlow(i,j,k) - fzh(k)*Dzold) * eps_ylow_Ez(i,k)
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif
!
! Update fields in the first PML cell. Two of three are PEC!
!
j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=1,nx

    Dyold = Dy_jlow(i,j,k)

    Dy_jlow(i,j,k) = aze(k) * Dy_jlow(i,j,k) +                                &
                     bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +              &
                               (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
         bxe(i) * (cyh(j)*Dy_jlow(i,j,k) - fyh(j)*Dyold) * eps_ylow_Ey(i,k)

!         Ex(i,j,k) = 0
!         Ez(i,j,k) = 0

  end do
end do   
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,0
  do i=1,nx

    Dzold = Dz_jlow(i,j,k)

    Dz_jlow(i,j,k) = axe(i) * Dz_jlow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
         bye(j) * (czh(k)*Dz_jlow(i,j,k) - fzh(k)*Dzold) * eps_ylow_Ez(i,k)

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do   
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 4 (jhigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ny+1,ystop
    do i=1,nx

      Dxold = Dx_jhigh(i,j,k)

      Dx_jhigh(i,j,k) = aye(j) * Dx_jhigh(i,j,k) +                            &
                        bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +           &
                                  (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
           bze(k) * (cxh(i)*Dx_jhigh(i,j,k) - fxh(i)*Dxold) * eps_yhigh_Ex(i,k)
      !------
      Dyold = Dy_jhigh(i,j,k)

      Dy_jhigh(i,j,k) = aze(k) * Dy_jhigh(i,j,k) +                            &
                        bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +           &
                                  (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
           bxe(i) * (cyh(j)*Dy_jhigh(i,j,k) - fyh(j)*Dyold) * eps_yhigh_Ey(i,k)
      !------
      Dzold = Dz_jhigh(i,j,k)

      Dz_jhigh(i,j,k) = axe(i) * Dz_jhigh(i,j,k) +                            &
                        bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +           &
                                  (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
           bye(j) * (czh(k)*Dz_jhigh(i,j,k) - fzh(k)*Dzold) * eps_yhigh_Ez(i,k)
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif
!
! Update fields in the first PML cell. Two of three are PEC! 
!

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ny+1,ystop
  do i=1,nx

    Dzold = Dz_jhigh(i,j,k)

    Dz_jhigh(i,j,k) = axe(i) * Dz_jhigh(i,j,k) +                              &
                      bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +             &
                                (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
         bye(j) * (czh(k)*Dz_jhigh(i,j,k) - fzh(k)*Dzold) * eps_yhigh_Ez(i,k)

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************* Block 5 (klow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,0
  do j=1,ny
    do i=1,nx

      Dxold = Dx_klow(i,j,k)

      Dx_klow(i,j,k) = aye(j) * Dx_klow(i,j,k) +                              &
                       bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +            &
                                 (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
           bze(k) * (cxh(i)*Dx_klow(i,j,k) - fxh(i)*Dxold) * eps_zlow_Ex(i,j)
      !------
      Dyold = Dy_klow(i,j,k)

      Dy_klow(i,j,k) = aze(k) * Dy_klow(i,j,k) +                              &
                       bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +            &
                                 (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
           bxe(i) * (cyh(j)*Dy_klow(i,j,k) - fyh(j)*Dyold) * eps_zlow_Ey(i,j)
      !------
      Dzold = Dz_klow(i,j,k)

      Dz_klow(i,j,k) = axe(i) * Dz_klow(i,j,k) +                              &
                       bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +            &
                                 (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
           bye(j) * (czh(k)*Dz_klow(i,j,k) - fzh(k)*Dzold) * eps_zlow_Ez(i,j)
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!
! Update the fields on the boundary between Yee and PML.
! (Note that Ex(:,1,1) and Ey(1,:,1) have already been updated in
! previous blocks and are not included here.)
k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=2,ny
  do i=1,nx

    Dxold = Dx_klow(i,j,k)

    Dx_klow(i,j,k) = aye(j) * Dx_klow(i,j,k) +                                &
                     bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +              &
                               (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

    Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                          &
         bze(k) * (cxh(i)*Dx_klow(i,j,k) - fxh(i)*Dxold) * eps_zlow_Ex(i,j)
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=1,ny
  do i=2,nx

    Dyold = Dy_klow(i,j,k)

    Dy_klow(i,j,k) = aze(k) * Dy_klow(i,j,k) +                                &
                     bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +              &
                               (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

    Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                          &
         bxe(i) * (cyh(j)*Dy_klow(i,j,k) - fyh(j)*Dyold) * eps_zlow_Ey(i,j)
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif
!
! Update fields in the first PML cell. Two of three are PEC! 
!
k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=1,ny
  do i=1,nx
    
    Dzold = Dz_klow(i,j,k)

    Dz_klow(i,j,k) = axe(i) * Dz_klow(i,j,k) +                                &
                     bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +              &
                               (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

    Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                          &
         bye(j) * (czh(k)*Dz_klow(i,j,k) - fzh(k)*Dzold) * eps_zlow_Ez(i,j)

!         Ex(i,j,k) = 0
!         Ey(i,j,k) = 0

  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 6 (khigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=nz+1,zstop
  do j=1,ny
    do i=1,nx     

      Dxold = Dx_khigh(i,j,k)

      Dx_khigh(i,j,k) = aye(j) * Dx_khigh(i,j,k) +                            &
                        bye(j) * ((Hz(i,j,k  )-Hz(i,j-1,k))*dyinv +           &
                                  (Hy(i,j,k-1)-Hy(i,j,k  ))*dzinv)

      Ex(i,j,k) = aze(k) * Ex(i,j,k) +                                        &
           bze(k) * (cxh(i)*Dx_khigh(i,j,k) - fxh(i)*Dxold) * eps_zhigh_Ex(i,j)
      !------
      Dyold = Dy_khigh(i,j,k)

      Dy_khigh(i,j,k) = aze(k) * Dy_khigh(i,j,k) +                            &
                        bze(k) * ((Hx(i,j,k  )-Hx(i,j,k-1))*dzinv +           &
                                  (Hz(i-1,j,k)-Hz(i,j,k  ))*dxinv)

      Ey(i,j,k) = axe(i) * Ey(i,j,k) +                                        &
           bxe(i) * (cyh(j)*Dy_khigh(i,j,k) - fyh(j)*Dyold) * eps_zhigh_Ey(i,j)
      !------
      Dzold = Dz_khigh(i,j,k)

      Dz_khigh(i,j,k) = axe(i) * Dz_khigh(i,j,k) +                            &
                        bxe(i) * ((Hy(i,j,k  )-Hy(i-1,j,k))*dxinv +           &
                                  (Hx(i,j-1,k)-Hx(i,j,k  ))*dyinv)

      Ez(i,j,k) = aye(j) * Ez(i,j,k) +                                        &
           bye(j) * (czh(k)*Dz_khigh(i,j,k) - fzh(k)*Dzold) * eps_zhigh_Ez(i,j)
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
!$OMP END PARALLEL 
#endif

! PEC in the stop+1 cells
!
! As long as the fields are initialized to zero they will stay zero in the
! stop+1 cells. The PEC for the lower end is spread out on the six 
! different PML blocks.
! 

END SUBROUTINE UPML_updateE_simple

SUBROUTINE UPML_initD(nx,ny,nz)

USE globalvar_mod, ONLY: xstart, ystart, zstart, xstop, ystop, zstop

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------


!********************** Block 1 (ilow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL PRIVATE(i,j,k)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    do i=xstart+1,0
      Dx_ilow(i,j,k) = zero
      Dy_ilow(i,j,k) = zero
      Dz_ilow(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

i = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do j=1,ny
    Dy_ilow(i,j,k) = zero
    Dz_ilow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

i = xstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    Dx_ilow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=xstart+1,0
    Dy_ilow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,ystop
  do i=xstart+1,0
    Dz_ilow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 2 (ihigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    do i=nx+1,xstop
      Dx_ihigh(i,j,k) = zero
      Dy_ihigh(i,j,k) = zero
      Dz_ihigh(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=nx+1,xstop
    Dy_ihigh(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,ystop
  do i=nx+1,xstop
    Dz_ihigh(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 3 (jlow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,0
    do i=1,nx
      Dx_jlow(i,j,k) = zero
      Dy_jlow(i,j,k) = zero
      Dz_jlow(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do i=1,nx
    Dx_jlow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do i=2,nx
    Dz_jlow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=1,nx
    Dy_jlow(i,j,k) = zero
  end do
end do   
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,0
  do i=1,nx
    Dz_jlow(i,j,k) = zero
  end do
end do   
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 4 (jhigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ny+1,ystop
    do i=1,nx
      Dx_jhigh(i,j,k) = zero
      Dy_jhigh(i,j,k) = zero
      Dz_jhigh(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ny+1,ystop
  do i=1,nx
    Dz_jhigh(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************* Block 5 (klow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,0
  do j=1,ny
    do i=1,nx
      Dx_klow(i,j,k) = zero
      Dy_klow(i,j,k) = zero
      Dz_klow(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=2,ny
  do i=1,nx
    Dx_klow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=1,ny
  do i=2,nx
    Dy_klow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=1,ny
  do i=1,nx
    Dz_klow(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 6 (khigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=nz+1,zstop
  do j=1,ny
    do i=1,nx     
      Dx_khigh(i,j,k) = zero
      Dy_khigh(i,j,k) = zero
      Dz_khigh(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
!$OMP END PARALLEL 
#endif

END SUBROUTINE UPML_initD

SUBROUTINE UPML_initE(nx,ny,nz,Ex,Ey,Ez)

USE globalvar_mod, ONLY: xstart, ystart, zstart, xstop, ystop, zstop,         &
                         Exsize, Eysize, Ezsize

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

real(kind=rfp), intent(inout),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(inout),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(inout),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------


!********************** Block 1 (ilow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL PRIVATE(i,j,k)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    do i=xstart+1,0
      Ex(i,j,k) = zero
      Ey(i,j,k) = zero
      Ez(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

i = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do j=1,ny
    Ey(i,j,k) = zero
    Ez(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

i = xstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    Ex(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=xstart+1,0
    Ey(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,ystop
  do i=xstart+1,0
    Ez(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 2 (ihigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,ystop
    do i=nx+1,xstop
      Ex(i,j,k) = zero
      Ey(i,j,k) = zero
      Ez(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=nx+1,xstop
    Ey(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,ystop
  do i=nx+1,xstop
    Ez(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 3 (jlow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ystart+1,0
    do i=1,nx
      Ex(i,j,k) = zero
      Ey(i,j,k) = zero
      Ez(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do i=1,nx
    Ex(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=1,nz
  do i=2,nx
    Ez(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

j = ystart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do i=1,nx
    Ey(i,j,k) = zero
  end do
end do   
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ystart+1,0
  do i=1,nx
    Ez(i,j,k) = zero
  end do
end do   
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 4 (jhigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,zstop
  do j=ny+1,ystop
    do i=1,nx
      Ex(i,j,k) = zero
      Ey(i,j,k) = zero
      Ez(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=ny+1,ystop
  do i=1,nx
    Ez(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************* Block 5 (klow) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=zstart+1,0
  do j=1,ny
    do i=1,nx
      Ex(i,j,k) = zero
      Ey(i,j,k) = zero
      Ez(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=2,ny
  do i=1,nx
    Ex(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=1,ny
  do i=2,nx
    Ey(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

k = zstart
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do j=1,ny
  do i=1,nx
    Ez(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
#endif

!********************** Block 6 (khigh) ************************

#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP DO 
#endif
do k=nz+1,zstop
  do j=1,ny
    do i=1,nx     
      Ex(i,j,k) = zero
      Ey(i,j,k) = zero
      Ez(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END DO NOWAIT
!$OMP END PARALLEL 
#endif

END SUBROUTINE UPML_initE

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       UPMLend - Deallocates memory
!
! DESCRIPTION
!       Deallocates memory used by UPML
!
! ERRORS
!       Uses errorcheck module
!
! SEE ALSO
!       UPML_allocate, UPML_init, UPML_updateH & UPML_updateE
!
! HISTORY
!       Written by 흆e Rydell
!       Stuff for inhomog. materials added 2011-01-02 by Ulf A.
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE UPML_end

USE globalvar_mod, ONLY : dims, coords
USE Material_mod, ONLY : Mat_inhomo

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: allocstat

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

deallocate(Bx_ilow, STAT=allocstat)
call check_deallocate(allocstat,'Bx_ilow')
deallocate(By_ilow, STAT=allocstat)
call check_deallocate(allocstat,'By_ilow')
deallocate(Bz_ilow, STAT=allocstat)
call check_deallocate(allocstat,'Bz_ilow')

deallocate(Bx_ihigh, STAT=allocstat)
call check_deallocate(allocstat,'Bx_ihigh')
deallocate(By_ihigh, STAT=allocstat)
call check_deallocate(allocstat,'By_ihigh')
deallocate(Bz_ihigh, STAT=allocstat)
call check_deallocate(allocstat,'Bz_ihigh')

deallocate(Bx_jlow, STAT=allocstat)
call check_deallocate(allocstat,'Bx_jlow')
deallocate(By_jlow, STAT=allocstat)
call check_deallocate(allocstat,'By_jlow')
deallocate(Bz_jlow, STAT=allocstat)
call check_deallocate(allocstat,'Bz_jlow')

deallocate(Bx_jhigh, STAT=allocstat)
call check_deallocate(allocstat,'Bx_jhigh')
deallocate(By_jhigh, STAT=allocstat)
call check_deallocate(allocstat,'By_jhigh')
deallocate(Bz_jhigh, STAT=allocstat)
call check_deallocate(allocstat,'Bz_jhigh')

deallocate(Bx_klow, STAT=allocstat)
call check_deallocate(allocstat,'Bx_klow')
deallocate(By_klow, STAT=allocstat)
call check_deallocate(allocstat,'By_klow')
deallocate(Bz_klow, STAT=allocstat)
call check_deallocate(allocstat,'Bz_klow')

deallocate(Bx_khigh, STAT=allocstat)
call check_deallocate(allocstat,'Bx_khigh') 
deallocate(By_khigh, STAT=allocstat)
call check_deallocate(allocstat,'By_khigh')
deallocate(Bz_khigh, STAT=allocstat)
call check_deallocate(allocstat,'Bz_khigh')

deallocate(Dx_ilow, STAT=allocstat)
call check_deallocate(allocstat,'Dx_ilow')
deallocate(Dy_ilow, STAT=allocstat)
call check_deallocate(allocstat,'Dy_ilow')
deallocate(Dz_ilow, STAT=allocstat)
call check_deallocate(allocstat,'Dz_ilow')

deallocate(Dx_ihigh, STAT=allocstat)
call check_deallocate(allocstat,'Dx_ihigh') 
deallocate(Dy_ihigh, STAT=allocstat)
call check_deallocate(allocstat,'Dy_ihigh')
deallocate(Dz_ihigh, STAT=allocstat)
call check_deallocate(allocstat,'Dz_ihigh')

deallocate(Dx_jlow, STAT=allocstat)
call check_deallocate(allocstat,'Dx_jlow')
deallocate(Dy_jlow, STAT=allocstat)
call check_deallocate(allocstat,'Dy_jlow')
deallocate(Dz_jlow, STAT=allocstat)
call check_deallocate(allocstat,'Dz_jlow')

deallocate(Dx_jhigh, STAT=allocstat)
call check_deallocate(allocstat,'Dx_jhigh')
deallocate(Dy_jhigh, STAT=allocstat)
call check_deallocate(allocstat,'Dy_jhigh')
deallocate(Dz_jhigh, STAT=allocstat)
call check_deallocate(allocstat,'Dz_jhigh')

deallocate(Dx_klow, STAT=allocstat)
call check_deallocate(allocstat,'Dx_klow')
deallocate(Dy_klow, STAT=allocstat)
call check_deallocate(allocstat,'Dy_klow')
deallocate(Dz_klow, STAT=allocstat)
call check_deallocate(allocstat,'Dz_klow')

deallocate(Dx_khigh, STAT=allocstat)
call check_deallocate(allocstat,'Dx_khigh')
deallocate(Dy_khigh, STAT=allocstat)
call check_deallocate(allocstat,'Dy_khigh')
deallocate(Dz_khigh, STAT=allocstat)
call check_deallocate(allocstat,'Dz_khigh')
!--------------------
deallocate( sigmx, STAT=allocstat )
call check_deallocate(allocstat,'sigmx')
deallocate( sigmy, STAT=allocstat )
call check_deallocate(allocstat,'sigmy')
deallocate( sigmz, STAT=allocstat )
call check_deallocate(allocstat,'sigmz')

deallocate( sigmx_star, STAT=allocstat )
call check_deallocate(allocstat,'sigmx_star')
deallocate( sigmy_star, STAT=allocstat )
call check_deallocate(allocstat,'sigmy_star')
deallocate( sigmz_star, STAT=allocstat )
call check_deallocate(allocstat,'sigmz_star')

deallocate(kappax, STAT=allocstat)
call check_deallocate(allocstat,'kappax')
deallocate(kappay, STAT=allocstat)
call check_deallocate(allocstat,'kappay')
deallocate(kappaz, STAT=allocstat)
call check_deallocate(allocstat,'kappaz')

deallocate(kappax_star, STAT=allocstat)
call check_deallocate(allocstat,'kappax_star')
deallocate(kappay_star, STAT=allocstat)
call check_deallocate(allocstat,'kappay_star')
deallocate(kappaz_star, STAT=allocstat)
call check_deallocate(allocstat,'kappaz_star')
!--------------------
deallocate(axe, STAT=allocstat)
call check_deallocate(allocstat,'axe')
deallocate(aye, STAT=allocstat)
call check_deallocate(allocstat,'aye')
deallocate(aze, STAT=allocstat)
call check_deallocate(allocstat,'aze')

deallocate(bxe, STAT=allocstat)
call check_deallocate(allocstat,'bxe')
deallocate(bye, STAT=allocstat)
call check_deallocate(allocstat,'bye')
deallocate(bze, STAT=allocstat)
call check_deallocate(allocstat,'bze')

deallocate(cxe, STAT=allocstat)
call check_deallocate(allocstat,'cxe')
deallocate(cye, STAT=allocstat)
call check_deallocate(allocstat,'cye')
deallocate(cze, STAT=allocstat)
call check_deallocate(allocstat,'cze')

deallocate(fxe, STAT=allocstat)
call check_deallocate(allocstat,'fxe')
deallocate(fye, STAT=allocstat)
call check_deallocate(allocstat,'fye')
deallocate(fze, STAT=allocstat)
call check_deallocate(allocstat,'fze')

deallocate(axh, STAT=allocstat)
call check_deallocate(allocstat,'axh')
deallocate(ayh, STAT=allocstat)
call check_deallocate(allocstat,'ayh')
deallocate(azh, STAT=allocstat)
call check_deallocate(allocstat,'azh')

deallocate(bxh, STAT=allocstat)
call check_deallocate(allocstat,'bxh')
deallocate(byh, STAT=allocstat)
call check_deallocate(allocstat,'byh')
deallocate(bzh, STAT=allocstat)
call check_deallocate(allocstat,'bzh')

deallocate(cxh, STAT=allocstat)
call check_deallocate(allocstat,'cxh')
deallocate(cyh, STAT=allocstat)
call check_deallocate(allocstat,'cyh')
deallocate(czh, STAT=allocstat)
call check_deallocate(allocstat,'czh')

deallocate(fxh, STAT=allocstat)
call check_deallocate(allocstat,'fxh')
deallocate(fyh, STAT=allocstat)
call check_deallocate(allocstat,'fyh')
deallocate(fzh, STAT=allocstat)
call check_deallocate(allocstat,'fzh')

! For inhomog. materials:
if (Mat_inhomo) then
  if (coords(1)==0) then
    deallocate(  eps_xlow_Ex, STAT=allocstat )
    call check_deallocate(allocstat,'eps_xlow_Ex')
    deallocate(  eps_xlow_Ey, STAT=allocstat )
    call check_deallocate(allocstat,'eps_xlow_Ey')
    deallocate(  eps_xlow_Ez, STAT=allocstat )
    call check_deallocate(allocstat,'eps_xlow_Ez')
  end if

  if (coords(1)==dims(1)-1) then
    deallocate( eps_xhigh_Ex, STAT=allocstat )
    call check_deallocate(allocstat,'eps_xhigh_Ex')
    deallocate( eps_xhigh_Ey, STAT=allocstat )
    call check_deallocate(allocstat,'eps_xhigh_Ey')
    deallocate( eps_xhigh_Ez, STAT=allocstat )
    call check_deallocate(allocstat,'eps_xhigh_Ez')
  end if

  if (coords(2)==0) then
    deallocate(  eps_ylow_Ex, STAT=allocstat )
    call check_deallocate(allocstat,'eps_ylow_Ex')
    deallocate(  eps_ylow_Ey, STAT=allocstat )
    call check_deallocate(allocstat,'eps_ylow_Ey')
    deallocate(  eps_ylow_Ez, STAT=allocstat )
    call check_deallocate(allocstat,'eps_ylow_Ez')
  end if

  if (coords(2)==dims(2)-1) then
    deallocate( eps_yhigh_Ex, STAT=allocstat )
    call check_deallocate(allocstat,'eps_yhigh_Ex')
    deallocate( eps_yhigh_Ey, STAT=allocstat )
    call check_deallocate(allocstat,'eps_yhigh_Ey')
    deallocate( eps_yhigh_Ez, STAT=allocstat )
    call check_deallocate(allocstat,'eps_yhigh_Ez')
  end if

  if (coords(3)==0) then
    deallocate(  eps_zlow_Ex, STAT=allocstat )
    call check_deallocate(allocstat,'eps_zlow_Ex')
    deallocate(  eps_zlow_Ey, STAT=allocstat )
    call check_deallocate(allocstat,'eps_zlow_Ey')
    deallocate(  eps_zlow_Ez, STAT=allocstat )
    call check_deallocate(allocstat,'eps_zlow_Ez')
  end if

  if (coords(3)==dims(3)-1) then
    deallocate( eps_zhigh_Ex, STAT=allocstat )
    call check_deallocate(allocstat,'eps_zhigh_Ex')
    deallocate( eps_zhigh_Ey, STAT=allocstat )
    call check_deallocate(allocstat,'eps_zhigh_Ey')
    deallocate( eps_zhigh_Ez, STAT=allocstat )
    call check_deallocate(allocstat,'eps_zhigh_Ez')
  end if
  
end if

END SUBROUTINE UPML_end

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE check_deallocate(stat,outputstr)

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: stat
character(len=*), intent(in) :: outputstr

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if (stat/=0) then
  write(*,*) 'WARNING! Deallocation of ', outputstr,                          &
             ' failed in UPML_allocate!'
end if

END SUBROUTINE check_deallocate

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE UPML_mod
