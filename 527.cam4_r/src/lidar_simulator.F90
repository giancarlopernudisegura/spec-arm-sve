! Copyright (c) 2009, Centre National de la Recherche Scientifique
! All rights reserved.
! 
! Redistribution and use in source and binary forms, with or without modification, are permitted 
! provided that the following conditions are met:
! 
!     * Redistributions of source code must retain the above copyright notice, this list 
!       of conditions and the following disclaimer.
!     * Redistributions in binary form must reproduce the above copyright notice, this list
!       of conditions and the following disclaimer in the documentation and/or other materials 
!       provided with the distribution.
!     * Neither the name of the LMD/IPSL/CNRS/UPMC nor the names of its
!       contributors may be used to endorse or promote products derived from this software without 
!       specific prior written permission.
! 
! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR 
! IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND 
! FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR 
! CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
! DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
! DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER 
! IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
! OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
      
      SUBROUTINE lidar_simulator(npoints,nlev,npart,nrefl &
                , undef &
                , pres, presf, temp &
                , q_lsliq, q_lsice, q_cvliq, q_cvice &
                , ls_radliq, ls_radice, cv_radliq, cv_radice &
                , frac_out, ice_type &
                , pmol, pnorm, tautot, refl &
                , ls_radsnow, q_lssnow, prec_frac )   !modified by ZYY
!
!---------------------------------------------------------------------------------
! Purpose: To compute lidar signal from model-simulated profiles of cloud water
!          and cloud fraction in each sub-column of each model gridbox.
!
! References: 
! Chepfer H., S. Bony, D. Winker, M. Chiriaco, J.-L. Dufresne, G. Seze (2008),
! Use of CALIPSO lidar observations to evaluate the cloudiness simulated by a 
! climate model, Geophys. Res. Lett., 35, L15704, doi:10.1029/2008GL034207.
!
! Previous references:
! Chiriaco et al, MWR, 2006; Chepfer et al., MWR, 2007
!
! Contacts: Helene Chepfer (chepfer@lmd.polytechnique.fr), Sandrine Bony (bony@lmd.jussieu.fr)
!
! May 2007: ActSim code of M. Chiriaco and H. Chepfer rewritten by S. Bony
!
! May 2008, H. Chepfer:
! - Units of pressure inputs: Pa 
! - Non Spherical particles : LS Ice NS coefficients, CONV Ice NS coefficients
! - New input: ice_type (0=ice-spheres ; 1=ice-non-spherical)
!
! June 2008, A. Bodas-Salcedo:
! - Ported to Fortran 90 and optimisation changes
!
! August 2008, J-L Dufresne:
! - Optimisation changes (sum instructions suppressed)
!
! October 2008, S. Bony,  H. Chepfer and J-L. Dufresne :  
! - Interface with COSP v2.0:
!      cloud fraction removed from inputs
!      in-cloud condensed water now in input (instead of grid-averaged value)
!      depolarisation diagnostic removed
!      parasol (polder) reflectances (for 5 different solar zenith angles) added
!
! December 2008, S. Bony,  H. Chepfer and J-L. Dufresne : 
! - Modification of the integration of the lidar equation.
! - change the cloud detection threshold
!
! April 2008, A. Bodas-Salcedo:
! - Bug fix in computation of pmol and pnorm of upper layer
!
! April 2008, J-L. Dufresne
! - Bug fix in computation of pmol and pnorm, thanks to Masaki Satoh: a factor 2 
! was missing. This affects the ATB values but not the cloud fraction. 
!
!---------------------------------------------------------------------------------
!
! Inputs:
!  npoints  : number of horizontal points
!  nlev : number of vertical levels
!  npart: numberb of cloud meteors (stratiform_liq, stratiform_ice, conv_liq, conv_ice).
!         (stratiform_snow).  !modified by ZYY
!        Currently npart must be 4 or 5
!  nrefl: number of solar zenith angles for parasol reflectances
!  pres : pressure in the middle of atmospheric layers (full levels): Pa
!  presf: pressure in the interface of atmospheric layers (half levels): Pa
!     presf(..,1) : surface pressure ; presf(..,nlev+1)= TOA pressure
!  temp : temperature of atmospheric layers: K
!  q_lsliq: LS sub-column liquid water mixing ratio (kg/kg)
!  q_lsice: LS sub-column ice water mixing ratio (kg/kg)
!  q_cvliq: CONV sub-column liquid water mixing ratio (kg/kg)
!  q_cvice: CONV sub-column ice water mixing ratio (kg/kg)
!  q_lssnow:LS sub-column snow mixing ratio (kg/kg) !modified by ZYY
!  ls_radliq: effective radius of LS liquid particles (meters)
!  ls_radice: effective radius of LS ice particles (meters)
!  cv_radliq: effective radius of CONV liquid particles (meters)
!  cv_radice: effective radius of CONV ice particles (meters)
!  ls_radsnow:effective radius of LS snow particles (meters) !modified by ZYY
!  frac_out : cloud cover in each sub-column of the gridbox (output from scops)
!  prec_frac: precip cover in each sub-column of the gridbox (output from prec_scops)
!  ice_type : ice particle shape hypothesis (ice_type=0 for spheres, ice_type=1 
!             for non spherical particles)
!
! Outputs:
!  pmol : molecular attenuated backscatter lidar signal power (m^-1.sr^-1)
!  pnorm: total attenuated backscatter lidar signal power (m^-1.sr^-1)
!  tautot: optical thickess integrated from top to level z
!  refl : parasol(polder) reflectance
!
! Version 1.0 (June 2007)
! Version 1.1 (May 2008)
! Version 1.2 (June 2008)
! Version 2.0 (October 2008)
! Version 2.1 (December 2008)
!---------------------------------------------------------------------------------

      IMPLICIT NONE

      integer, parameter :: r8 = selected_real_kind(15)

      REAL(r8) :: SRsat
      PARAMETER (SRsat = 0.01_r8) ! threshold full attenuation 

      LOGICAL ok_parasol
      PARAMETER (ok_parasol=.true.)  ! set to .true. if you want to activate parasol reflectances

      INTEGER i, k
      
      INTEGER INDX_LSLIQ,INDX_LSICE,INDX_CVLIQ,INDX_CVICE, INDX_LSSNOW !modified by ZYY
      PARAMETER (INDX_LSLIQ=1,INDX_LSICE=2,INDX_CVLIQ=3,INDX_CVICE=4,INDX_LSSNOW=5) !modified by ZYY
! inputs:
      INTEGER npoints,nlev,npart,ice_type
      INTEGER nrefl
      real(r8) undef                 ! undefined value
      REAL(r8) pres(npoints,nlev)    ! pressure full levels
      REAL(r8) presf(npoints,nlev+1) ! pressure half levels
      REAL(r8) temp(npoints,nlev)
      REAL(r8) q_lsliq(npoints,nlev), q_lsice(npoints,nlev)
      REAL(r8) q_cvliq(npoints,nlev), q_cvice(npoints,nlev)
      REAL(r8) ls_radliq(npoints,nlev), ls_radice(npoints,nlev)
      REAL(r8) cv_radliq(npoints,nlev), cv_radice(npoints,nlev)
      REAL(r8) frac_out(npoints,nlev)
      REAL(r8) ls_radsnow(npoints,nlev) !modified by ZYY
      REAL(r8) q_lssnow(npoints,nlev) !modified by ZYY
      REAL(r8) prec_frac(npoints,nlev) !modified by ZYY

! outputs (for each subcolumn):

      REAL(r8) pmol(npoints,nlev)  ! molecular backscatter signal power (m^-1.sr^-1)
      REAL(r8) pnorm(npoints,nlev) ! total lidar backscatter signal power (m^-1.sr^-1)
      REAL(r8) tautot(npoints,nlev)! optical thickess integrated from top
      REAL(r8) refl(npoints,nrefl)! parasol reflectance ! parasol

! actsim variables:

      REAL(r8) km, rdiffm, Qscat, Cmol
      PARAMETER (Cmol = 6.2446e-32_r8) ! depends on wavelength
      PARAMETER (km = 1.38e-23_r8)     ! Boltzmann constant (J/K)

      PARAMETER (rdiffm = 0.7_r8)      ! multiple scattering correction parameter
      PARAMETER (Qscat = 2.0_r8)       ! particle scattering efficiency at 532 nm

      REAL(r8) rholiq, rhoice
      PARAMETER (rholiq=1.0e+03_r8)     ! liquid water (kg/m3)
      PARAMETER (rhoice=0.5e+03_r8)     ! ice (kg/m3)

      REAL(r8) pi, rhopart(npart)
      REAL(r8) polpart(npart,5)  ! polynomial coefficients derived for spherical and non spherical
                             ! particules

!   grid-box variables:
      REAL(r8) rad_part(npoints,nlev,npart)
      REAL(r8) rhoair(npoints,nlev), zheight(npoints,nlev+1)
      REAL(r8) beta_mol(npoints,nlev), alpha_mol(npoints,nlev)
      REAL(r8) kp_part(npoints,nlev,npart)

!   sub-column variables:
      REAL(r8) frac_sub(npoints,nlev)
      REAL(r8) qpart(npoints,nlev,npart) ! mixing ratio particles in each subcolumn
      REAL(r8) alpha_part(npoints,nlev,npart)
      REAL(r8) tau_mol_lay(npoints)  ! temporary variable, moL. opt. thickness of layer k
      REAL(r8) tau_mol(npoints,nlev) ! optical thickness between TOA and bottom of layer k
      REAL(r8) tau_part(npoints,nlev,npart)
      REAL(r8) betatot(npoints,nlev)
      REAL(r8) tautot_lay(npoints)   ! temporary variable, total opt. thickness of layer k
!     Optical thickness from TOA to surface for Parasol
      REAL(r8) tautot_S_liq(npoints),tautot_S_ice(npoints)     ! for liq and ice clouds


!------------------------------------------------------------
!---- 1. Preliminary definitions and calculations :
!------------------------------------------------------------

!      if ( npart .ne. 4 ) then
!        print *,'Error in lidar_simulator, npart should be 4, not',npart
!        stop
!      endif
!
      pi = dacos(-1.D0)

! Polynomial coefficients for spherical liq/ice particles derived from Mie theory.
! Polynomial coefficients for non spherical particles derived from a composite of
! Ray-tracing theory for large particles (e.g. Noel et al., Appl. Opt., 2001)
! and FDTD theory for very small particles (Yang et al., JQSRT, 2003).

! We repeat the same coefficients for LS and CONV cloud to make code more readable
!*     LS Liquid water coefficients:
         polpart(INDX_LSLIQ,1) =  2.6980e-8_r8     
         polpart(INDX_LSLIQ,2) = -3.7701e-6_r8
         polpart(INDX_LSLIQ,3) =  1.6594e-4_r8
         polpart(INDX_LSLIQ,4) = -0.0024_r8
         polpart(INDX_LSLIQ,5) =  0.0626_r8
!*     LS Ice coefficients: 
      if (ice_type.eq.0) then     
         polpart(INDX_LSICE,1) = -1.0176e-8_r8   
         polpart(INDX_LSICE,2) =  1.7615e-6_r8
         polpart(INDX_LSICE,3) = -1.0480e-4_r8
         polpart(INDX_LSICE,4) =  0.0019_r8
         polpart(INDX_LSICE,5) =  0.0460_r8
      endif
!*     LS Ice NS coefficients: 
      if (ice_type.eq.1) then 
         polpart(INDX_LSICE,1) = 1.3615e-8_r8  
         polpart(INDX_LSICE,2) = -2.04206e-6_r8 
         polpart(INDX_LSICE,3) = 7.51799e-5_r8
         polpart(INDX_LSICE,4) = 0.00078213_r8
         polpart(INDX_LSICE,5) = 0.0182131_r8
      endif
!*     CONV Liquid water coefficients:
         polpart(INDX_CVLIQ,1) =  2.6980e-8_r8     
         polpart(INDX_CVLIQ,2) = -3.7701e-6_r8
         polpart(INDX_CVLIQ,3) =  1.6594e-4_r8
         polpart(INDX_CVLIQ,4) = -0.0024_r8
         polpart(INDX_CVLIQ,5) =  0.0626_r8
!*     CONV Ice coefficients: 
      if (ice_type.eq.0) then 
         polpart(INDX_CVICE,1) = -1.0176e-8_r8   
         polpart(INDX_CVICE,2) =  1.7615e-6_r8
         polpart(INDX_CVICE,3) = -1.0480e-4_r8
         polpart(INDX_CVICE,4) =  0.0019_r8
         polpart(INDX_CVICE,5) =  0.0460_r8
      endif
      if (ice_type.eq.1) then
         polpart(INDX_CVICE,1) = 1.3615e-8_r8
         polpart(INDX_CVICE,2) = -2.04206e-6_r8
         polpart(INDX_CVICE,3) = 7.51799e-5_r8
         polpart(INDX_CVICE,4) = 0.00078213_r8
         polpart(INDX_CVICE,5) = 0.0182131_r8
      endif
!*     LS SNOW coefficients:  !modified by ZYY -- Mar 10
         polpart(INDX_LSSNOW,1) = 1.3615e-8_r8 !modified by ZYY -- Mar 10
         polpart(INDX_LSSNOW,2) = -2.04206e-6_r8 !modified by ZYY -- Mar 10
         polpart(INDX_LSSNOW,3) = 7.51799e-5_r8 !modified by ZYY -- Mar 10
         polpart(INDX_LSSNOW,4) = 0.00078213_r8 !modified by ZYY -- Mar 10
         polpart(INDX_LSSNOW,5) = 0.0182131_r8 !modified by ZYY -- Mar 10

! density:
!*    clear-sky air:
      rhoair = pres/(287.04_r8*temp)

!*    liquid/ice particules:
      rhopart(INDX_LSLIQ) = rholiq
      rhopart(INDX_LSICE) = rhoice
      rhopart(INDX_CVLIQ) = rholiq
      rhopart(INDX_CVICE) = rhoice
      rhopart(INDX_LSSNOW) = rhoice/2._r8 !modified by ZYY on Apr

! effective radius particles:
      rad_part(:,:,INDX_LSLIQ) = ls_radliq(:,:)
      rad_part(:,:,INDX_LSICE) = ls_radice(:,:)
      rad_part(:,:,INDX_CVLIQ) = cv_radliq(:,:)
      rad_part(:,:,INDX_CVICE) = cv_radice(:,:)
      rad_part(:,:,INDX_LSSNOW) = ls_radsnow(:,:) !modified by ZYY
      rad_part(:,:,:)=MAX(rad_part(:,:,:),0._r8)
      rad_part(:,:,:)=MIN(rad_part(:,:,:),70.0e-6_r8)
      
! altitude at half pressure levels:
      zheight(:,1) = 0.0_r8
      do k = 2, nlev+1
        zheight(:,k) = zheight(:,k-1) &
                  -(presf(:,k)-presf(:,k-1))/(rhoair(:,k-1)*9.81_r8)
      enddo

! cloud fraction (0 or 1) in each sub-column:
! (if frac_out=1or2 -> frac_sub=1; if frac_out=0 -> frac_sub=0)
      frac_sub = MIN( frac_out, 1.0_r8 )

!------------------------------------------------------------
!---- 2. Molecular alpha and beta:
!------------------------------------------------------------

      beta_mol = pres/km/temp * Cmol
      alpha_mol = 8.0_r8*pi/3.0_r8 * beta_mol

!------------------------------------------------------------
!---- 3. Particles alpha and beta:
!------------------------------------------------------------

! polynomes kp_lidar derived from Mie theory:
      do i = 1, npart
       where ( rad_part(:,:,i).gt.0.0_r8)
         kp_part(:,:,i) = &
            polpart(i,1)*(rad_part(:,:,i)*1e6_r8)**4 &
          + polpart(i,2)*(rad_part(:,:,i)*1e6_r8)**3 &
          + polpart(i,3)*(rad_part(:,:,i)*1e6_r8)**2 &
          + polpart(i,4)*(rad_part(:,:,i)*1e6_r8) &
          + polpart(i,5)
        elsewhere
         kp_part(:,:,i) = 0._r8
        endwhere
      enddo
      
! mixing ratio particules in each subcolumn:
          qpart(:,:,INDX_LSLIQ) = q_lsliq(:,:) ! oct08
          qpart(:,:,INDX_LSICE) = q_lsice(:,:) ! oct08
          qpart(:,:,INDX_CVLIQ) = q_cvliq(:,:) ! oct08
          qpart(:,:,INDX_CVICE) = q_cvice(:,:) ! oct08
          qpart(:,:,INDX_LSSNOW) = q_lssnow(:,:) ! feb11 !modified by ZYY

! alpha of particles in each subcolumn:
      do i = 1, npart
        where ( rad_part(:,:,i).gt.0.0_r8)
          alpha_part(:,:,i) = 3.0_r8/4.0_r8 * Qscat &
                 * rhoair(:,:) * qpart(:,:,i) &
                 / (rhopart(i) * rad_part(:,:,i) )
        elsewhere
          alpha_part(:,:,i) = 0._r8
        endwhere
      enddo

!------------------------------------------------------------
!---- 4. Backscatter signal:
!------------------------------------------------------------

! optical thickness (molecular):
!     opt. thick of each layer
      tau_mol(:,1:nlev) = alpha_mol(:,1:nlev) &
         & *(zheight(:,2:nlev+1)-zheight(:,1:nlev))
!     opt. thick from TOA
      DO k = nlev-1, 1, -1
        tau_mol(:,k) = tau_mol(:,k) + tau_mol(:,k+1)
      ENDDO

! optical thickness (particles):

      tau_part = rdiffm * alpha_part
      DO i = 1, npart
!       opt. thick of each layer
        tau_part(:,:,i) = tau_part(:,:,i) &
           & * (zheight(:,2:nlev+1)-zheight(:,1:nlev) )
!       opt. thick from TOA
        DO k = nlev-1, 1, -1 
          tau_part(:,k,i) = tau_part(:,k,i) + tau_part(:,k+1,i)
        ENDDO
      ENDDO

! molecular signal:
!      Upper layer 
       pmol(:,nlev) = beta_mol(:,nlev) / (2._r8*tau_mol(:,nlev)) &
            & * (1._r8-exp(-2.0_r8*tau_mol(:,nlev)))
!      Other layers
       DO k= nlev-1, 1, -1
        tau_mol_lay(:) = tau_mol(:,k)-tau_mol(:,k+1) ! opt. thick. of layer k
        WHERE (tau_mol_lay(:).GT.0._r8)
          pmol(:,k) = beta_mol(:,k) * EXP(-2.0_r8*tau_mol(:,k+1)) / (2._r8*tau_mol_lay(:)) &
            & * (1._r8-exp(-2.0_r8*tau_mol_lay(:)))
        ELSEWHERE
!         This must never happend, but just in case, to avoid div. by 0
          pmol(:,k) = beta_mol(:,k) * EXP(-2.0_r8*tau_mol(:,k+1))
        END WHERE
      END DO
!
! Total signal (molecular + particules):
!
! For performance reason on vector computers, the 2 following lines should not be used
! and should be replace by the later one.
!      betatot(:,:) = beta_mol(:,:) + sum(kp_part*alpha_part,dim=3)
!      tautot(:,:)  = tau_mol(:,:)  + sum(tau_part,dim=3)
      betatot(:,:) = beta_mol(:,:)
      tautot(:,:)  = tau_mol(:,:)
      DO i = 1, npart
           betatot(:,:) = betatot(:,:) + kp_part(:,:,i)*alpha_part(:,:,i)
           tautot(:,:) = tautot(:,:)  + tau_part(:,:,i)
      ENDDO ! i
!
!     Upper layer 
      pnorm(:,nlev) = betatot(:,nlev) / (2._r8*tautot(:,nlev)) &
            & * (1._r8-exp(-2.0_r8*tautot(:,nlev)))
!     Other layers
      DO k= nlev-1, 1, -1
        tautot_lay(:) = tautot(:,k)-tautot(:,k+1) ! optical thickness of layer k
        WHERE (tautot_lay(:).GT.0._r8)
       pnorm(:,k) = betatot(:,k) * EXP(-2.0_r8*tautot(:,k+1)) / (2._r8*tautot_lay(:)) &
!correc          pnorm(:,k) = betatot(:,k) * EXP(-2.0*tautot(:,k+1)) & ! correc Satoh
!correc               &               / (2.0*tautot_lay(:)) &          ! correc Satoh
               & * (1._r8-EXP(-2.0_r8*tautot_lay(:)))
        ELSEWHERE
!         This must never happend, but just in case, to avoid div. by 0
          pnorm(:,k) = betatot(:,k) * EXP(-2.0_r8*tautot(:,k+1))
        END WHERE
      END DO

!-------- End computation Lidar --------------------------

!---------------------------------------------------------
!  Parasol/Polder module
!
!  Purpose : Compute reflectance for one particular viewing direction
!  and 5 solar zenith angles (calculation valid only over ocean)
! ---------------------------------------------------------

! initialization:
    refl(:,:) = 0.0_r8

! activate parasol calculations:
    if (ok_parasol) then

!     Optical thickness from TOA to surface
      tautot_S_liq = 0._r8
      tautot_S_ice = 0._r8
      tautot_S_liq(:) = tautot_S_liq(:) &
         + tau_part(:,1,1) + tau_part(:,1,3)
      tautot_S_ice(:) = tautot_S_ice(:) &
         + tau_part(:,1,2) + tau_part(:,1,4) &
         + tau_part(:,1,5) !modified by ZYY

      call parasol(npoints,nrefl,undef  &
                 ,tautot_S_liq,tautot_S_ice &
                 ,refl)

    endif ! ok_parasol

  END SUBROUTINE lidar_simulator
!
!---------------------------------------------------------------------------------
!
  SUBROUTINE parasol(npoints,nrefl,undef  &
                       ,tautot_S_liq,tautot_S_ice  &
                       ,refl)
!---------------------------------------------------------------------------------
! Purpose: To compute Parasol reflectance signal from model-simulated profiles 
!          of cloud water and cloud fraction in each sub-column of each model 
!          gridbox.
!
!
! December 2008, S. Bony,  H. Chepfer and J-L. Dufresne : 
! - optimization for vectorization
!
! Version 2.0 (October 2008)
! Version 2.1 (December 2008)
!---------------------------------------------------------------------------------

    IMPLICIT NONE

    integer, parameter :: r8 = selected_real_kind(15)

! inputs
    INTEGER npoints              ! Number of horizontal gridpoints
    INTEGER nrefl                ! Number of angles for which the reflectance 
                                 ! is computed. Can not be greater then ntetas
    REAL(r8) undef                   ! Undefined value. Currently not used
    REAL(r8) tautot_S_liq(npoints)   ! liquid water cloud optical thickness, 
                                   ! integrated from TOA to surface
    REAL(r8) tautot_S_ice(npoints)   ! same for ice water clouds only
! outputs
    REAL(r8) refl(npoints,nrefl)     ! Parasol reflectances
!
! Local variables
    REAL(r8) tautot_S(npoints)       ! cloud optical thickness, from TOA to surface
    REAL(r8) frac_taucol_liq(npoints), frac_taucol_ice(npoints)

    REAL(r8) pi
!   look up table variables:
    INTEGER ny, it
    INTEGER ntetas, nbtau        ! number of angle and of optical thickness
                                   ! of the look-up table
    PARAMETER (ntetas=5, nbtau=7)
    REAL(r8) aa(ntetas,nbtau-1), ab(ntetas,nbtau-1)
    REAL(r8) ba(ntetas,nbtau-1), bb(ntetas,nbtau-1)  
    REAL(r8) tetas(ntetas),tau(nbtau)                        
    REAL(r8) r_norm(ntetas)
    REAL(r8) rlumA(ntetas,nbtau), rlumB(ntetas,nbtau)       
    REAL(r8) rlumA_mod(npoints,5), rlumB_mod(npoints,5) 

    DATA tau   /0._r8, 1._r8, 5._r8, 10._r8, 20._r8, 50._r8, 100._r8/
    DATA tetas /0._r8, 20._r8, 40._r8, 60._r8, 80._r8/
    
! Look-up table for spherical liquid particles:
    DATA (rlumA(1,ny),ny=1,nbtau) /0.03_r8, 0.090886_r8, 0.283965_r8, &
     0.480587_r8, 0.695235_r8, 0.908229_r8, 1.0_r8 /
    DATA (rlumA(2,ny),ny=1,nbtau) /0.03_r8, 0.072185_r8, 0.252596_r8, &
      0.436401_r8,  0.631352_r8, 0.823924_r8, 0.909013_r8 /
    DATA (rlumA(3,ny),ny=1,nbtau) /0.03_r8, 0.058410_r8, 0.224707_r8, &
      0.367451_r8,  0.509180_r8, 0.648152_r8, 0.709554_r8 /
    DATA (rlumA(4,ny),ny=1,nbtau) /0.03_r8, 0.052498_r8, 0.175844_r8, &
      0.252916_r8,  0.326551_r8, 0.398581_r8, 0.430405_r8 /
    DATA (rlumA(5,ny),ny=1,nbtau) /0.03_r8, 0.034730_r8, 0.064488_r8, &
      0.081667_r8,  0.098215_r8, 0.114411_r8, 0.121567_r8 /

! Look-up table for ice particles:
    DATA (rlumB(1,ny),ny=1,nbtau) /0.03_r8, 0.092170_r8, 0.311941_r8, &
       0.511298_r8, 0.712079_r8 , 0.898243_r8 , 0.976646_r8 /
    DATA (rlumB(2,ny),ny=1,nbtau) /0.03_r8, 0.087082_r8, 0.304293_r8, &
       0.490879_r8,  0.673565_r8, 0.842026_r8, 0.912966_r8 /
    DATA (rlumB(3,ny),ny=1,nbtau) /0.03_r8, 0.083325_r8, 0.285193_r8, &
      0.430266_r8,  0.563747_r8, 0.685773_r8,  0.737154_r8 /
    DATA (rlumB(4,ny),ny=1,nbtau) /0.03_r8, 0.084935_r8, 0.233450_r8, &
      0.312280_r8, 0.382376_r8, 0.446371_r8, 0.473317_r8 /
    DATA (rlumB(5,ny),ny=1,nbtau) /0.03_r8, 0.054157_r8, 0.089911_r8, &
      0.107854_r8, 0.124127_r8, 0.139004_r8, 0.145269_r8 /

!--------------------------------------------------------------------------------
! Lum_norm=f(tetaS,tau_cloud) derived from adding-doubling calculations
!        valid ONLY ABOVE OCEAN (albedo_sfce=5%)
!        valid only in one viewing direction (theta_v=30�, phi_s-phi_v=320�)
!        based on adding-doubling radiative transfer computation
!        for tau values (0 to 100) and for tetas values (0 to 80)
!        for 2 scattering phase functions: liquid spherical, ice non spherical

    IF ( nrefl.GT. ntetas ) THEN
        PRINT *,'Error in lidar_simulator, nrefl should be less then ',ntetas,' not',nrefl
        STOP
    ENDIF

    rlumA_mod=0
    rlumB_mod=0
!
    pi = ACOS(-1.0_r8)
    r_norm(:)=1._r8/ COS(pi/180._r8*tetas(:))
!
    tautot_S_liq(:)=MAX(tautot_S_liq(:),tau(1))
    tautot_S_ice(:)=MAX(tautot_S_ice(:),tau(1))
    tautot_S(:) = tautot_S_ice(:) + tautot_S_liq(:)
!
! relative fraction of the opt. thick due to liquid or ice clouds
    WHERE (tautot_S(:) .GT. 0._r8)
        frac_taucol_liq(:) = tautot_S_liq(:) / tautot_S(:)
        frac_taucol_ice(:) = tautot_S_ice(:) / tautot_S(:)
    ELSEWHERE
        frac_taucol_liq(:) = 1._r8
        frac_taucol_ice(:) = 0._r8
    END WHERE
    tautot_S(:)=MIN(tautot_S(:),tau(nbtau))
!
! Linear interpolation :

    DO ny=1,nbtau-1
! microphysics A (liquid clouds) 
      aA(:,ny) = (rlumA(:,ny+1)-rlumA(:,ny))/(tau(ny+1)-tau(ny))
      bA(:,ny) = rlumA(:,ny) - aA(:,ny)*tau(ny)
! microphysics B (ice clouds)
      aB(:,ny) = (rlumB(:,ny+1)-rlumB(:,ny))/(tau(ny+1)-tau(ny))
      bB(:,ny) = rlumB(:,ny) - aB(:,ny)*tau(ny)
    ENDDO
!
    DO it=1,ntetas
      DO ny=1,nbtau-1
        WHERE (tautot_S(:).GE.tau(ny).AND.tautot_S(:).LE.tau(ny+1))
            rlumA_mod(:,it) = aA(it,ny)*tautot_S(:) + bA(it,ny)
            rlumB_mod(:,it) = aB(it,ny)*tautot_S(:) + bB(it,ny)
        END WHERE
      END DO
    END DO
!
    DO it=1,ntetas
      refl(:,it) = frac_taucol_liq(:) * rlumA_mod(:,it) &
         + frac_taucol_ice(:) * rlumB_mod(:,it)
! normalized radiance -> reflectance: 
      refl(:,it) = refl(:,it) * r_norm(it)
    ENDDO

    RETURN
  END SUBROUTINE parasol
