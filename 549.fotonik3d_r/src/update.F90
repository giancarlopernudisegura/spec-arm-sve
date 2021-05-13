!+
! NAME
!       update_mod - leap-frog update module
!
! DESCRIPTION
!       Module for the leap-frog update for homogeneous materials. 
!
! PUBLIC
!       Subroutine update_init
!       Subroutine updateH
!       Subroutine updateE
!       Subroutine update_initH
!       Subroutine update_initE
!
! HISTORY
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE update_mod

USE parameter_mod

IMPLICIT NONE

PRIVATE
!
! Update Variables
!
real(kind=rfp) :: Cbdx, Cbdy, Cbdz
real(kind=rfp) :: Dbdx, Dbdy, Dbdz

PUBLIC update_init, updateH, updateE, update_initH, update_initE

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       update_init - Initializes update variables
!
! DESCRIPTION
!       Initializes update variables
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE update_init()

USE globalvar_mod, ONLY : dxinv, dyinv, dzinv, dtdmu, dtdeps 

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

Cbdx = dtdmu*dxinv
Cbdy = dtdmu*dyinv
Cbdz = dtdmu*dzinv

Dbdx = dtdeps*dxinv
Dbdy = dtdeps*dyinv
Dbdz = dtdeps*dzinv

END SUBROUTINE update_init

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       updateH - leap-frog update of the H-fields for homo. materials.
!
! DESCRIPTION
!       Performs the leap-frog update of the H-fields according to
!       formula (3.26) in Taflove's book. The terminology used is the
!       same, i.e., the coefficients defined in (3.28) are used. (Note that
!       we have switched the use of C and D as compared with Taflove.) 
!       However, they are constant in the code, i.e., this routine is for homo-
!       geneous materials. The updated H-fields are: TBC
!
! METHOD
!
! ERRORS
!
! SEE ALSO
!       updateE
!
! HISTORY
!       Written by Ulf Andersson
!
!       Leftover loops introduced by Ulf A. 2010-12-29. This is in preparation 
!       for UPML. Normal magnetic components on the boundary shall be handled
!       by UPML. Thus Hx(1,:,:), Hy(:,1:) and Hz(:,:,1) are no longer updated
!       by this routine. The fact that the updates of Hz(:,:,1) are removed 
!       causes a tiny difference in the result since the power plane reaches
!       all the way done to k=1.
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE updateH(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)

USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize

IMPLICIT NONE

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

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!! First the leftovers
i = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(j,k),                                               &
!$OMP SHARED(i,ny,nz,Cbdx,Cbdy,Cbdz,Ex,Ey,Ez,Hy,Hz)
#endif
do k=1,nz
  do j=1,ny
    Hy(i,j,k) = Hy(i,j,k) + (  (Ez(i+1,j,k)-Ez(i,j,k  ))*Cbdx +               &
                               (Ex(i  ,j,k)-Ex(i,j,k+1))*Cbdz  )
    Hz(i,j,k) = Hz(i,j,k) + (  (Ex(i,j+1,k)-Ex(i  ,j,k))*Cbdy +               &
                               (Ey(i,j  ,k)-Ey(i+1,j,k))*Cbdx  )
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,k),                                               &
!$OMP SHARED(j,nx,nz,Cbdx,Cbdy,Cbdz,Ex,Ey,Ez,Hx,Hz)
#endif
do k=2,nz
  do i=2,nx
    Hz(i,j,k) = Hz(i,j,k) + (  (Ex(i,j+1,k)-Ex(i  ,j,k))*Cbdy +               &
                               (Ey(i,j  ,k)-Ey(i+1,j,k))*Cbdx  )
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
!$OMP PARALLEL DO PRIVATE(i,k),                                               &
!$OMP SHARED(j,nx,nz,Cbdx,Cbdy,Cbdz,Ex,Ey,Ez,Hx,Hz)
#endif
do k=1,nz
  do i=2,nx
    Hx(i,j,k) = Hx(i,j,k) + (  (Ey(i,j,k+1)-Ey(i,j  ,k))*Cbdz +               &
                               (Ez(i,j,k  )-Ez(i,j+1,k))*Cbdy  )
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j),                                               &
!$OMP SHARED(k,nx,ny,Cbdx,Cbdy,Cbdz,Ex,Ey,Ez,Hx,Hy)
#endif
do j=2,ny
  do i=2,nx
    Hx(i,j,k) = Hx(i,j,k) + (  (Ey(i,j,k+1)-Ey(i,j  ,k))*Cbdz +               &
                               (Ez(i,j,k  )-Ez(i,j+1,k))*Cbdy  )
    Hy(i,j,k) = Hy(i,j,k) + (  (Ez(i+1,j,k)-Ez(i,j,k  ))*Cbdx +               &
                               (Ex(i  ,j,k)-Ex(i,j,k+1))*Cbdz  )
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

!! and then the fused loops
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j,k),                                             &
!$OMP SHARED(nx,ny,nz,Cbdx,Cbdy,Cbdz,Ex,Ey,Ez,Hx,Hy,Hz)
#endif
do k=2,nz
  do j=2,ny
    do i=2,nx
      Hx(i,j,k) = Hx(i,j,k) + (  (Ey(i,j,k+1)-Ey(i,j  ,k))*Cbdz +             &
                                 (Ez(i,j,k  )-Ez(i,j+1,k))*Cbdy  )
      Hy(i,j,k) = Hy(i,j,k) + (  (Ez(i+1,j,k)-Ez(i,j,k  ))*Cbdx +             &
                                 (Ex(i  ,j,k)-Ex(i,j,k+1))*Cbdz  )
      Hz(i,j,k) = Hz(i,j,k) + (  (Ex(i,j+1,k)-Ex(i  ,j,k))*Cbdy +             &
                                 (Ey(i,j  ,k)-Ey(i+1,j,k))*Cbdx  )
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

END SUBROUTINE updateH 

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       updateE - leap-frog update of the E-fields for homo. materials.
!
! DESCRIPTION
!       Performs the leap-frog update of the E-fields according to
!       formula (3.27) in Taflove's book. The terminology used is the
!       same, i.e., the coefficients defined in (3.29) are used.  (Note that
!       we have switched the use of C and D as compared with Taflove.)
!       However, they are constant in the code, i.e., this routine is for homo-
!       geneous materials. The updated E-fields are 
!
!       Ex(1:nx,2:ny,2:nz), Ey(2:nx,1:ny,2:nz) and Ez(2:nx,2:ny,1:nz)
!
!       The points omitted by the update are treated the ABC (Mur) 
!
! METHOD
!
! ERRORS
!
! SEE ALSO
!       updateH
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE updateE(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)

USE globalvar_mod, ONLY : imin, jmin, kmin
USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize

IMPLICIT NONE

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

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!! First the leftovers
if (imin/=1) then                               
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(j,k),                                               &
!$OMP SHARED(jmin,kmin,ny,nz,Dbdy,Dbdz,Ex,Hy,Hz)
#endif
  do k=kmin,nz
    do j=jmin,ny
      Ex(1,j,k) = Ex(1,j,k) + (  (Hz(1,j,k  )-Hz(1,j-1,k))*Dbdy +             &
                                 (Hy(1,j,k-1)-Hy(1,j  ,k))*Dbdz  )
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
end if

if (jmin/=1) then                               
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,k),                                               &
!$OMP SHARED(imin,kmin,nx,nz,Dbdx,Dbdz,Ey,Hx,Hy)
#endif
  do k=kmin,nz
    do i=imin,nx
      Ey(i,1,k) = Ey(i,1,k) + (  (Hx(i  ,1,k)-Hx(i,1,k-1))*Dbdz +             &
                                 (Hz(i-1,1,k)-Hz(i,1,k  ))*Dbdx  )
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
end if

if (kmin/=1) then                               
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j),                                               &
!$OMP SHARED(imin,jmin,nx,ny,Dbdx,Dbdy,Ez,Hx,Hy)
#endif
  do j=jmin,ny 
    do i=imin,nx 
      Ez(i,j,1) = Ez(i,j,1) + (  (Hy(i,j  ,1)-Hy(i-1,j,1))*Dbdx +             &
                                 (Hx(i,j-1,1)-Hx(i  ,j,1))*Dbdy  )
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
end if

!! and then the fused loops
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j,k),                                             &
!$OMP SHARED(imin,jmin,kmin,nx,ny,nz,Dbdx,Dbdy,Dbdz,Ex,Ey,Ez,Hx,Hy,Hz)
#endif
do k=kmin,nz
  do j=jmin,ny 
    do i=imin,nx 
      Ex(i,j,k) = Ex(i,j,k) + (  (Hz(i,j,k  )-Hz(i,j-1,k))*Dbdy +             &
                                 (Hy(i,j,k-1)-Hy(i,j  ,k))*Dbdz  )
      Ey(i,j,k) = Ey(i,j,k) + (  (Hx(i  ,j,k)-Hx(i,j,k-1))*Dbdz +             &
                                 (Hz(i-1,j,k)-Hz(i,j,k  ))*Dbdx  )
      Ez(i,j,k) = Ez(i,j,k) + (  (Hy(i,j  ,k)-Hy(i-1,j,k))*Dbdx +             &
                                 (Hx(i,j-1,k)-Hx(i  ,j,k))*Dbdy  )
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
                              
END SUBROUTINE updateE

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       update_initH - Initializes the magnetic components to zero.
!
! DESCRIPTION
!       Initializes the magnetic components to zero.
!
! METHOD
!       Exactly the same loops as in updateH are used. This is to get
!       first touch by the same thread that does the actual update later.
!       This is important on NUMA machines.
!
! ERRORS
!
! SEE ALSO
!       updateH
!
! HISTORY
!       Written by Ulf Andersson 2010-12-31
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE update_initH(nx,ny,nz,Hx,Hy,Hz)

USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize, OBC

IMPLICIT NONE

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz

real(kind=rfp), intent(  out),                                                &
 dimension(Hxsize(1):Hxsize(2), Hxsize(3):Hxsize(4), Hxsize(5):Hxsize(6)) :: Hx
real(kind=rfp), intent(  out),                                                &
 dimension(Hysize(1):Hysize(2), Hysize(3):Hysize(4), Hysize(5):Hysize(6)) :: Hy
real(kind=rfp), intent(  out),                                                &
 dimension(Hzsize(1):Hzsize(2), Hzsize(3):Hzsize(4), Hzsize(5):Hzsize(6)) :: Hz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!! First the leftovers
i = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(j,k),                                               &
!$OMP SHARED(i,ny,nz,Hy,Hz)
#endif
do k=1,nz
  do j=1,ny
    Hy(i,j,k) = zero
    Hz(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

j = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,k),                                               &
!$OMP SHARED(j,nx,nz,Hx,Hz)
#endif
do k=2,nz
  do i=2,nx
    Hz(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
!$OMP PARALLEL DO PRIVATE(i,k),                                               &
!$OMP SHARED(j,nx,nz,Hx,Hz)
#endif
do k=1,nz
  do i=2,nx
    Hx(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

k = 1
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j),                                               &
!$OMP SHARED(k,nx,ny,Hx,Hy)
#endif
do j=2,ny
  do i=2,nx
    Hx(i,j,k) = zero
    Hy(i,j,k) = zero
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

!! and then the fused loops
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j,k),                                             &
!$OMP SHARED(nx,ny,nz,Hx,Hy,Hz)
#endif
do k=2,nz
  do j=2,ny
    do i=2,nx
      Hx(i,j,k) = zero
      Hy(i,j,k) = zero
      Hz(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif

! If we have PML, then we want H to be initialized to zero in the UPML regions
! The easiest way to do this is to set the entire 3D arrays to zero.
if (OBC>0) then
  Hx = zero
  Hy = zero
  Hz = zero
end if

END SUBROUTINE update_initH

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       update_initE - Initializes the Electric components to zero.
!
! DESCRIPTION
!       Initializes the Electric components to zero.
!
! METHOD
!       Exactly the same loops as in updateE are used. This is to get
!       first touch by the same thread that does the actual update later.
!       This is important on NUMA machines.
!
!       In order to ensure that all components are set to zero we proceed by 
!       initializing the components that are updated by Mur or UPML. 
!
! ERRORS
!
! SEE ALSO
!       updateE
!
! HISTORY
!       Written by Ulf Andersson 2010-12-31
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE update_initE(nx,ny,nz,Ex,Ey,Ez)

USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize
USE globalvar_mod, ONLY : imin, jmin, kmin, OBC, coords, dims

IMPLICIT NONE

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: nx, ny, nz
real(kind=rfp), intent(  out),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(  out),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(  out),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: i, j, k

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!! First the leftovers
if (imin/=1) then                               
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(j,k),                                               &
!$OMP SHARED(jmin,kmin,ny,nz,Ex)
#endif
  do k=kmin,nz
    do j=jmin,ny
      Ex(1,j,k) = zero
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
end if

if (jmin/=1) then                               
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,k),                                               &
!$OMP SHARED(imin,kmin,nx,nz,Ey)
#endif
  do k=kmin,nz
    do i=imin,nx
      Ey(i,1,k) = zero
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
end if

if (kmin/=1) then                               
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j),                                               &
!$OMP SHARED(imin,jmin,nx,ny,Ez)
#endif
  do j=jmin,ny 
    do i=imin,nx 
      Ez(i,j,1) = zero
    end do
  end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
end if

!! and then the fused loops
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP PARALLEL DO PRIVATE(i,j,k),                                             &
!$OMP SHARED(imin,jmin,kmin,nx,ny,nz,Ex,Ey,Ez)
#endif
do k=kmin,nz
  do j=jmin,ny 
    do i=imin,nx 
      Ex(i,j,k) = zero
      Ey(i,j,k) = zero
      Ez(i,j,k) = zero
    end do
  end do
end do
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)
!$OMP END PARALLEL DO
#endif
                          
! If we have PML, then we want E to be initialized to zero in the UPML regions
! The easiest way to do this is to set the entire 3D arrays to zero.
if (OBC>0) then
  Ex = zero
  Ey = zero
  Ez = zero

!! Initialize the E components that mur/PEC updates
else
  !! Low x
  if (coords(1)==0) then
    Ey(1,1:ny,kmin:nz) = zero
    Ez(1,jmin:ny,1:nz) = zero
  end if
  !! Low y
  if (coords(2)==0) then
    Ex(1:nx,1,kmin:nz) = zero 
    Ez(1:nx,1,   1:nz) = zero 
  end if
  !! Low z
  if (coords(3)==0) then
    Ex(1:nx,1:ny,1)    = zero 
    Ey(1:nx,1:ny,1)    = zero 
  end if
  !! High x
  if (coords(1)==dims(1)-1) then
    Ey(nx+1,1:ny,1:nz) = zero 
    Ez(nx+1,1:ny,1:nz) = zero 
  end if
  !! High y
  if (coords(2)==dims(2)-1) then
    Ex(1:nx,ny+1,1:nz) = zero 
    Ez(1:nx,ny+1,1:nz) = zero 
  end if
  !! High z
  if (coords(3)==dims(3)-1) then
    Ex(1:nx,1:ny,nz+1) = zero 
    Ey(1:nx,1:ny,nz+1) = zero 
  end if
end if

END SUBROUTINE update_initE

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE update_mod

