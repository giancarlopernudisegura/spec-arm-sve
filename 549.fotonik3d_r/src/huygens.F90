!+
! NAME
!       Huygens_mod - Plane wave excitation modules
!
! DESCRIPTION
!       Module for generation of incident fields.
!
!       It is NOT efficiently implemented yet. Retarded times should be
!       precalculated and some kind of "look-up-table" should be used.
!
!       It is not suitable to include Huygens's surfaces in a performance test.
!       Use a point source instead.
!
! PUBLIC
!       SUBROUTINE HuygensH
!       SUBROUTINE HuygensE
!       SUBROUTINE Huygens_init
!
! HISTORY
!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE Huygens_mod

USE parameter_mod
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

PUBLIC Huygens_init, HuygensH, HuygensE
PRIVATE Uin

PRIVATE

integer :: dblx, dblxp1, dbly, dblyp1, dblz, dblzp1
integer :: dbhx, dbhxp1, dbhy, dbhyp1, dbhz, dbhzp1
real(kind=rfp), dimension(3) :: dtdmuEpol, dtdepsHpol, k0, X0
real(kind=rfp) :: pl

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Huygens_init - Huygens initialization
!
! DESCRIPTION
!       Huygens initialization
!
! SEE ALSO
!       init.f90
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE Huygens_init(nx,ny,nz,Epol,init_k0,init_X0,init_pl)

USE globalvar_mod, ONLY : dtdmu, dtdeps, dims, coords

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer,                      intent(in) :: nx, ny, nz
real(kind=rfp), dimension(3), intent(in) :: Epol, init_k0, init_X0
real(kind=rfp),               intent(in) :: init_pl

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

real(kind=rfp), dimension(3) :: Hpol

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

k0 = init_k0
X0 = init_X0
pl = init_pl
!
! Calculate magnetic polarization as cross product of k0 and Epol.
!
Hpol(1) = k0(2)*Epol(3)-k0(3)*Epol(2)
Hpol(2) = k0(3)*Epol(1)-k0(1)*Epol(3)
Hpol(3) = k0(1)*Epol(2)-k0(2)*Epol(1)
Hpol = sqrt(eps0/mu0)*Hpol
!
! Initialize coefficients 
!
dtdmuEpol  = dtdmu*Epol
dtdepsHpol = dtdeps*Hpol
!
! Initialize array limits 
!
if (dims(1)==1) then
  dblx = db
  dblxp1 = dblx+1
  dbhx = nx-db+1
  dbhxp1 = dbhx+1
else
  if (coords(1)==0) then
    dblx = db
    dbhx = nx
    dblxp1 = dblx+1
    dbhxp1 = dbhx
  else if (coords(1)==dims(1)-1) then
    dblx = 1
    dbhx = nx-db+1
    dblxp1 = dblx
    dbhxp1 = dbhx+1
  else
    dblx = 1
    dbhx = nx
    dblxp1 = dblx
    dbhxp1 = dbhx
  end if
end if

if (dims(2)==1) then
  dbly = db
  dbhy = ny-db+1
  dblyp1 = dbly+1
  dbhyp1 = dbhy+1
else
  if (coords(2)==0) then
    dbly = db
    dbhy = ny
    dblyp1 = dbly+1
    dbhyp1 = dbhy
  else if (coords(2)==dims(2)-1) then
    dbly = 1
    dbhy = ny-db+1
    dblyp1 = dbly
    dbhyp1 = dbhy+1
  else
    dbly = 1
    dbhy = ny
    dblyp1 = dbly
    dbhyp1 = dbhy
  end if
end if

if (dims(3)==1) then
  dblz = db
  dblzp1 = dblz+1
  dbhz = nz-db+1
  dbhzp1 = dbhz+1
else
  if (coords(3)==0) then
    dblz = db
    dbhz = nz
    dblzp1 = dblz+1
    dbhzp1 = dbhz
  else if (coords(3)==dims(3)-1) then
    dblz = 1
    dbhz = nz-db+1
    dblzp1 = dblz
    dbhzp1 = dbhz+1
  else
    dblz = 1
    dbhz = nz
    dblzp1 = dblz
    dbhzp1 = dbhz
  end if
end if

END SUBROUTINE Huygens_init

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       HuygensH - Huygens H-field update
!
! DESCRIPTION
!       PUBLIC Huygens update function
!
! SEE ALSO
!       HuygensE
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE HuygensH(nx,ny,nz,ts,Hx,Hy,Hz)

USE globalvar_mod, ONLY : dx, dy, dz, dxinv, dyinv, dzinv, dt, dims, coords
USE globalvar_mod, ONLY: Hxsize, Hysize, Hzsize

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer,        intent(in) :: nx, ny, nz, ts
real(kind=rfp), intent(inout),                                                &
 dimension(Hxsize(1):Hxsize(2), Hxsize(3):Hxsize(4), Hxsize(5):Hxsize(6)) :: Hx
real(kind=rfp), intent(inout),                                                &
 dimension(Hysize(1):Hysize(2), Hysize(3):Hysize(4), Hysize(5):Hysize(6)) :: Hy
real(kind=rfp), intent(inout),                                                &
 dimension(Hzsize(1):Hzsize(2), Hzsize(3):Hzsize(4), Hzsize(5):Hzsize(6)) :: Hz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ii
real(kind=rfp) :: t
real(kind=rfp), dimension(nx) :: Xvec
real(kind=rfp), dimension(ny) :: Yvec
real(kind=rfp), dimension(nz) :: Zvec
real(kind=rfp), dimension(ny,nz) :: Xx, Yx, Zx
real(kind=rfp), dimension(nx,nz) :: Xy, Yy, Zy
real(kind=rfp), dimension(nx,ny) :: Xz, Yz, Zz

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

t = (ts-1)*dt

do ii=1,nx
  Xvec(ii) = (coords(1)*nx+iI-1)*dx 
end do

do ii=1,ny
  Yvec(ii) = (coords(2)*ny+ii-1)*dy
end do

do ii=1,nz
  Zvec(ii) = (coords(3)*nz+ii-1)*dz
end do

! ------------------------ Low x Huygens Surface ---------------------------
if (coords(1)==0) then

  Xx = Xvec(dblx)
  Yx(1:ny,:) = spread(Yvec(1:ny),2,nz)
  Zx(:,1:nz) = spread(Zvec(1:nz),1,ny)

  Hy(dblx,dblyp1:dbhy,dblz:dbhz) = Hy(dblx,dblyp1:dbhy,dblz:dbhz)-dxinv*      &
                  dtdmuEpol(3)*Uin(Xx(     dblyp1:dbhy,dblz:dbhz),            &
                                   Yx(     dblyp1:dbhy,dblz:dbhz),            &
                                   Zx(     dblyp1:dbhy,dblz:dbhz)+half*dz,t )

  Hz(dblx,dbly:dbhy,dblzp1:dbhz) = Hz(dblx,dbly:dbhy,dblzp1:dbhz)+dxinv*      &
                  dtdmuEpol(2)*Uin(Xx(     dbly:dbhy,dblzp1:dbhz),            &
                                   Yx(     dbly:dbhy,dblzp1:dbhz)+half*dy,    &
                                   Zx(     dbly:dbhy,dblzp1:dbhz),t )
end if

! ------------------------ High x Huygens Surface --------------------------
if (coords(1)==dims(1)-1) then

  Xx = Xvec(dbhxp1)
  Yx(1:ny,:) = spread(Yvec(1:ny),2,nz)
  Zx(:,1:nz) = spread(Zvec(1:nz),1,ny)

  Hy(dbhx,dblyp1:dbhy,dblz:dbhz) = Hy(dbhx,dblyp1:dbhy,dblz:dbhz)+dxinv*      &
                  dtdmuEpol(3)*Uin(Xx(     dblyp1:dbhy,dblz:dbhz),            &
                                   Yx(     dblyp1:dbhy,dblz:dbhz),            &
                                   Zx(     dblyp1:dbhy,dblz:dbhz)+half*dz,t )

  Hz(dbhx,dbly:dbhy,dblzp1:dbhz) = Hz(dbhx,dbly:dbhy,dblzp1:dbhz)-dxinv*      &
                  dtdmuEpol(2)*Uin(Xx(     dbly:dbhy,dblzp1:dbhz),            &
                                   Yx(     dbly:dbhy,dblzp1:dbhz)+half*dy,    &
                                   Zx(     dbly:dbhy,dblzp1:dbhz),t )
end if

! ------------------------ Low y Huygens Surface ---------------------------
if (coords(2)==0) then

  Xy(1:nx,:) = spread(Xvec(1:nx),2,nz)
  Yy = Yvec(dbly)
  Zy(:,1:nz) = spread(Zvec(1:nz),1,nx)

  Hx(dblxp1:dbhx,dbly,dblz:dbhz) = Hx(dblxp1:dbhx,dbly,dblz:dbhz)+dyinv*      &
                  dtdmuEpol(3)*Uin(Xy(dblxp1:dbhx,     dblz:dbhz),            &
                                   Yy(dblxp1:dbhx,     dblz:dbhz),            &
                                   Zy(dblxp1:dbhx,     dblz:dbhz)+half*dz,t )

  Hz(dblx:dbhx,dbly,dblzp1:dbhz) = Hz(dblx:dbhx,dbly,dblzp1:dbhz)-dyinv*      &
                  dtdmuEpol(1)*Uin(Xy(dblx:dbhx,     dblzp1:dbhz)+half*dx,    &
                                   Yy(dblx:dbhx,     dblzp1:dbhz),            &
                                   Zy(dblx:dbhx,     dblzp1:dbhz),t )
end if

! ------------------------ High y Huygens Surface --------------------------
if (coords(2)==dims(2)-1) then

  Xy(1:nx,:) = spread(Xvec(1:nx),2,nz)
  Yy = Yvec(dbhyp1)
  Zy(:,1:nz) = spread(Zvec(1:nz),1,nx)

  Hx(dblxp1:dbhx,dbhy,dblz:dbhz) = Hx(dblxp1:dbhx,dbhy,dblz:dbhz)-dyinv*      &
                  dtdmuEpol(3)*Uin(Xy(dblxp1:dbhx,     dblz:dbhz),            &
                                   Yy(dblxp1:dbhx,     dblz:dbhz),            &
                                   Zy(dblxp1:dbhx,     dblz:dbhz)+half*dz,t )

  Hz(dblx:dbhx,dbhy,dblzp1:dbhz) = Hz(dblx:dbhx,dbhy,dblzp1:dbhz)+dyinv*      &
                  dtdmuEpol(1)*Uin(Xy(dblx:dbhx,     dblzp1:dbhz)+half*dx,    &
                                   Yy(dblx:dbhx,     dblzp1:dbhz),            &
                                   Zy(dblx:dbhx,     dblzp1:dbhz),t )
end if

! ------------------------ Low z Huygens Surface ---------------------------
if (coords(3)==0) then

  Xz(1:nx,:) = spread(Xvec(1:nx),2,ny)
  Yz(:,1:ny) = spread(Yvec(1:ny),1,nx)
  Zz = Zvec(dblz)

  Hx(dblxp1:dbhx,dbly:dbhy,dblz) = Hx(dblxp1:dbhx,dbly:dbhy,dblz)-dzinv*      &
                  dtdmuEpol(2)*Uin(Xz(dblxp1:dbhx,dbly:dbhy     ),            &
                                   Yz(dblxp1:dbhx,dbly:dbhy     )+half*dy,    &
                                   Zz(dblxp1:dbhx,dbly:dbhy     ),t )

  Hy(dblx:dbhx,dblyp1:dbhy,dblz) = Hy(dblx:dbhx,dblyp1:dbhy,dblz)+dzinv*      &
                  dtdmuEpol(1)*Uin(Xz(dblx:dbhx,dblyp1:dbhy     )+half*dx,    &
                                   Yz(dblx:dbhx,dblyp1:dbhy     ),            &
                                   Zz(dblx:dbhx,dblyp1:dbhy     ),t )
end if

! ------------------------ High z Huygens Surface --------------------------
if (coords(3)==dims(3)-1) then

  Xz(1:nx,:) = spread(Xvec(1:nx),2,ny)
  Yz(:,1:ny) = spread(Yvec(1:ny),1,nx)
  Zz = Zvec(dbhzp1)

  Hx(dblxp1:dbhx,dbly:dbhy,dbhz) = Hx(dblxp1:dbhx,dbly:dbhy,dbhz)+dzinv*      &
                  dtdmuEpol(2)*Uin(Xz(dblxp1:dbhx,dbly:dbhy     ),            &
                                   Yz(dblxp1:dbhx,dbly:dbhy     )+half*dy,    &
                                   Zz(dblxp1:dbhx,dbly:dbhy     ),t )

  Hy(dblx:dbhx,dblyp1:dbhy,dbhz) = Hy(dblx:dbhx,dblyp1:dbhy,dbhz)-dzinv*      &
                  dtdmuEpol(1)*Uin(Xz(dblx:dbhx,dblyp1:dbhy     )+half*dx,    &
                                   Yz(dblx:dbhx,dblyp1:dbhy     ),            &
                                   Zz(dblx:dbhx,dblyp1:dbhy     ),t )
end if

END SUBROUTINE HuygensH

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       HuygensE - Huygens E-field update
!
! DESCRIPTION
!       PUBLIC Huygens update function
!
! ERRORS
!       No error handling
!
! SEE ALSO
!       HuygensH
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE HuygensE(nx,ny,nz,ts,Ex,Ey,Ez)

USE globalvar_mod, ONLY : dx, dy, dz, dxinv, dyinv, dzinv, dt, dims, coords
USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer,        intent(in) :: nx, ny, nz, ts
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
real(kind=rfp) :: t
real(kind=rfp), dimension(nx) :: Xvec
real(kind=rfp), dimension(ny) :: Yvec
real(kind=rfp), dimension(nz) :: Zvec
real(kind=rfp), dimension(ny,nz) :: Xx, Yx, Zx
real(kind=rfp), dimension(nx,nz) :: Xy, Yy, Zy
real(kind=rfp), dimension(nx,ny) :: Xz, Yz, Zz

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

t = ts*dt - dt/2

do ii=1,nx
  Xvec(ii) = (coords(1)*nx+iI-1)*dx 
end do

do ii=1,ny
  Yvec(ii) = (coords(2)*ny+ii-1)*dy
end do

do ii=1,nz
  Zvec(ii) = (coords(3)*nz+ii-1)*dz
end do


! ------------------------ Low x Huygens Surface ---------------------------
if (coords(1)==0) then

  Xx = Xvec(dblx)
  Yx(1:ny,:) = spread(Yvec(1:ny),2,nz)
  Zx(:,1:nz) = spread(Zvec(1:nz),1,ny)

  Ey(dblx,dbly:dbhy,dblzp1:dbhz) =  Ey(dblx,dbly:dbhy,dblzp1:dbhz)+dxinv*     &
                  dtdepsHpol(3)*Uin(Xx(     dbly:dbhy,dblzp1:dbhz)+half*dx,   &
                                    Yx(     dbly:dbhy,dblzp1:dbhz)+half*dy,   &
                                    Zx(     dbly:dbhy,dblzp1:dbhz),t )

  Ez(dblx,dblyp1:dbhy,dblz:dbhz) =  Ez(dblx,dblyp1:dbhy,dblz:dbhz)-dxinv*     &
                  dtdepsHpol(2)*Uin(Xx(     dblyp1:dbhy,dblz:dbhz)+half*dx,   &
                                    Yx(     dblyp1:dbhy,dblz:dbhz),           &
                                    Zx(     dblyp1:dbhy,dblz:dbhz)+half*dz,t )
end if

! ------------------------ High x Huygens Surface --------------------------
if (coords(1)==dims(1)-1) then

  Xx = Xvec(dbhx)
  Yx(1:ny,:) = spread(Yvec(1:ny),2,nz)
  Zx(:,1:nz) = spread(Zvec(1:nz),1,ny)

  Ey(dbhxp1,dbly:dbhy,dblzp1:dbhz) =Ey(dbhxp1,dbly:dbhy,dblzp1:dbhz)-dxinv*   &
                  dtdepsHpol(3)*Uin(Xx(       dbly:dbhy,dblzp1:dbhz)+half*dx, &
                                    Yx(       dbly:dbhy,dblzp1:dbhz)+half*dy, &
                                    Zx(       dbly:dbhy,dblzp1:dbhz),t )

  Ez(dbhxp1,dblyp1:dbhy,dblz:dbhz) = Ez(dbhxp1,dblyp1:dbhy,dblz:dbhz)+dxinv*  &
                  dtdepsHpol(2)*Uin(Xx(       dblyp1:dbhy,dblz:dbhz)+half*dx, &
                                    Yx(       dblyp1:dbhy,dblz:dbhz),         &
                                    Zx(       dblyp1:dbhy,dblz:dbhz)+half*dz,t)
end if

! ------------------------ Low y Huygens Surface ---------------------------
if (coords(2)==0) then

  Xy(1:nx,:) = spread(Xvec(1:nx),2,nz)
  Yy = Yvec(dbly)
  Zy(:,1:nz) = spread(Zvec(1:nz),1,nx)

  Ex(dblx:dbhx,dbly,dblzp1:dbhz) =  Ex(dblx:dbhx,dbly,dblzp1:dbhz)-dyinv*     &
                  dtdepsHpol(3)*Uin(Xy(dblx:dbhx,     dblzp1:dbhz)+half*dx,   &
                                    Yy(dblx:dbhx,     dblzp1:dbhz)+half*dy,   &
                                    Zy(dblx:dbhx,     dblzp1:dbhz),t )

  Ez(dblxp1:dbhx,dbly,dblz:dbhz) =  Ez(dblxp1:dbhx,dbly,dblz:dbhz)+dyinv*     &
                  dtdepsHpol(1)*Uin(Xy(dblxp1:dbhx,     dblz:dbhz),           &
                                    Yy(dblxp1:dbhx,     dblz:dbhz)+half*dy,   &
                                    Zy(dblxp1:dbhx,     dblz:dbhz)+half*dz,t )
end if

! ------------------------ High y Huygens Surface --------------------------
if (coords(2)==dims(2)-1) then

  Xy(1:nx,:) = spread(Xvec(1:nx),2,nz)
  Yy = Yvec(dbhy)
  Zy(:,1:nz) = spread(Zvec(1:nz),1,nx)

  Ex(dblx:dbhx,dbhyp1,dblzp1:dbhz) =Ex(dblx:dbhx,dbhyp1,dblzp1:dbhz)+dyinv*   &
                  dtdepsHpol(3)*Uin(Xy(dblx:dbhx,       dblzp1:dbhz)+half*dx, &
                                    Yy(dblx:dbhx,       dblzp1:dbhz)+half*dy, &
                                    Zy(dblx:dbhx,       dblzp1:dbhz),t )

  Ez(dblxp1:dbhx,dbhyp1,dblz:dbhz) =Ez(dblxp1:dbhx,dbhyp1,dblz:dbhz)-dyinv*   &
                  dtdepsHpol(1)*Uin(Xy(dblxp1:dbhx,       dblz:dbhz),         &
                                    Yy(dblxp1:dbhx,       dblz:dbhz)+half*dy, &
                                    Zy(dblxp1:dbhx,       dblz:dbhz)+half*dz,t)
end if

! ------------------------ Low z Huygens Surface ---------------------------
if (coords(3)==0) then

  Xz(1:nx,:) = spread(Xvec(1:nx),2,ny)
  Yz(:,1:ny) = spread(Yvec(1:ny),1,nx)
  Zz = Zvec(dblz)

  Ex(dblx:dbhx,dblyp1:dbhy,dblz) =  Ex(dblx:dbhx,dblyp1:dbhy,dblz)+dzinv*     &
                  dtdepsHpol(2)*Uin(Xz(dblx:dbhx,dblyp1:dbhy     )+half*dx,   &
                                    Yz(dblx:dbhx,dblyp1:dbhy     ),           &
                                    Zz(dblx:dbhx,dblyp1:dbhy     )+half*dz,t )

  Ey(dblxp1:dbhx,dbly:dbhy,dblz) =  Ey(dblxp1:dbhx,dbly:dbhy,dblz)-dzinv*     &
                  dtdepsHpol(1)*Uin(Xz(dblxp1:dbhx,dbly:dbhy     ),           &
                                    Yz(dblxp1:dbhx,dbly:dbhy     )+half*dy,   &
                                    Zz(dblxp1:dbhx,dbly:dbhy     )+half*dz,t )
end if

! ------------------------ High z Huygens Surface --------------------------
if (coords(3)==dims(3)-1) then

  Xz(1:nx,:) = spread(Xvec(1:nx),2,ny)
  Yz(:,1:ny) = spread(Yvec(1:ny),1,nx)
  Zz = Zvec(dbhz)

  Ex(dblx:dbhx,dblyp1:dbhy,dbhzp1) =Ex(dblx:dbhx,dblyp1:dbhy,dbhzp1)-dzinv*   &
                  dtdepsHpol(2)*Uin(Xz(dblx:dbhx,dblyp1:dbhy       )+half*dx, &
                                    Yz(dblx:dbhx,dblyp1:dbhy       ),         &
                                    Zz(dblx:dbhx,dblyp1:dbhy       )+half*dz,t)

  Ey(dblxp1:dbhx,dbly:dbhy,dbhzp1) =Ey(dblxp1:dbhx,dbly:dbhy,dbhzp1)+dzinv*   &
                  dtdepsHpol(1)*Uin(Xz(dblxp1:dbhx,dbly:dbhy       ),         &
                                    Yz(dblxp1:dbhx,dbly:dbhy       )+half*dy, &
                                    Zz(dblxp1:dbhx,dbly:dbhy       )+half*dz,t)
end if


END SUBROUTINE HuygensE

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       Uin - Excitation function
!
! DESCRIPTION
!       Excitation function 
!
! RETURN VALUES
!       The values returned is the incident wave amplitude at time t
!       for the coordinate point (x,y,z). 
!       The coordinate points are given as points on a surface and hence
!       Uin returns a 2D real scalar with size (size(x,1),size(x,2)).
!
! HISTORY
!       Written by Gunnar Ledfelt and Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

FUNCTION Uin( x,y,z,t )

USE parameter_mod
USE globalvar_mod, ONLY : pulse

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

real(kind=rfp), intent(in), dimension(:,:) :: x, y, z
real(kind=rfp), intent(in)                 :: t

!------------------------------------------------------------------------------
!                     R e t u r n  t y p e
!------------------------------------------------------------------------------

real(kind=rfp), dimension(size(x,1),size(x,2)) :: Uin ! amplitude of pulse

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

real(kind=rfp), dimension(size(x,1),size(x,2)) :: Utemp, temp
real(kind=rfp)  :: mpl   ! modulation pulse width, see case 7

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

Utemp = 0.0_rfp
temp = k0(1)*(x-X0(1)) + k0(2)*(y-X0(2)) + k0(3)*(z-X0(3))

if (pulse==1) then
  where ( (temp <= (c0*t)) .and. ((temp+pl) >= (c0*t)) )
    Utemp = - sin( pi/pl *(temp -c0*t))
  end where

else if (pulse==2) then
  where ( (temp <= (c0*t)) .and. ((temp+pl) >= (c0*t)) )
    Utemp = - cos( pi/pl *(temp -c0*t))
  end where

else if (pulse==3) then
  where ( (temp <= (c0*t)) .and. ((temp+pl) >= (c0*t)) )
    Utemp = 1.0_rfp
  end where

else if (pulse==4) then
  where ( (temp <= (c0*t)) .and. ((temp+pl) >= (c0*t)) )
    Utemp = 1.0_rfp /32.0_rfp*( 10.0_rfp                                      &
                        - 15.0_rfp*cos( 2.0_rfp*pi* (temp -c0*t)/pl )         &
                        +  6.0_rfp*cos( 4.0_rfp*pi* (temp -c0*t)/pl )         &
                        -          cos( 6.0_rfp*pi* (temp -c0*t)/pl ) )
  end where

else if (pulse==5) then
  where ( (temp <= (c0*t)) .and. ((temp+pl) >= (c0*t)) )
    Utemp = sin( 2.0_rfp*pi* (temp -c0*t)/pl )/32.0_rfp*( 10.0_rfp            &
                        - 15.0_rfp*cos( 2.0_rfp*pi* (temp -c0*t)/pl )         &
                        +  6.0_rfp*cos( 4.0_rfp*pi* (temp -c0*t)/pl )         &
                        -          cos( 6.0_rfp*pi* (temp -c0*t)/pl ) )
  end where

else if (pulse==6) then   ! Gauss-pulse with pulse-width pl
  where ( (temp <= (c0*t)) .and. ((temp+pl) >= (c0*t)) )
    Utemp = exp( -(  3.0_rfp* ((c0*t-temp)-pl/2.0_rfp) / (pl/2.0_rfp)  )**2)
  end where

else if (pulse==7) then   ! Gauss-modulated with sine-period pl
  mpl = 5.0_rfp*pl        ! Gauss-modulation with pulse-width mpl
  where ( (temp <= (c0*t)) .and. ((temp+mpl) >= (c0*t)) )
    Utemp = sin(2.0_rfp*pi*(c0*t-temp)/pl) *                                  &
            exp( -(  3.0_rfp* ((c0*t-temp)-mpl/2.0_rfp) / (mpl/2.0_rfp)  )**2) 
  end where

else if (pulse==8) then   ! Double exponential pulse 
  where (temp <= (c0*t))
    Utemp = -exp( -(c0*t-temp)*2.3_rfp/3.0_rfp) +                             &
             exp( -(c0*t-temp)*4.6_rfp/3.0_rfp) 
!    Utemp =  exp( -(c0*t-temp)/pl) - exp( -(c0*t-temp)/(pl*2.0_rfp)) 
  end where

else if (pulse==9) then
  where (temp <= (c0*t))
    Utemp = - sin( 2.0_rfp*pi/pl *(temp-c0*t))
  end where

else
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Wrong number of pulse in huygens.f90'
#endif
  write(*,*) 'FATAL ERROR! Wrong number of pulse in huygens.f90'
  write(*,*) 'pulse =', pulse
  stop 

end if
Uin = Utemp

END FUNCTION Uin

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE Huygens_mod
