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


!------------------------------------------------------------------------------------
! Authors: Sandrine Bony and Helene Chepfer (LMD/IPSL, CNRS, UPMC, France).
!------------------------------------------------------------------------------------
MODULE MOD_LMD_IPSL_STATS
  USE MOD_LLNL_STATS
  IMPLICIT NONE

CONTAINS
      SUBROUTINE diag_lidar(npoints,ncol,llm,max_bin,nrefl &
                  ,pnorm,pmol,refl,land,pplay,undef,ok_lidar_cfad &
                  ,cfad2,srbval &
                  ,ncat,lidarcld,cldlayer,parasolrefl)
!
! -----------------------------------------------------------------------------------
! Lidar outputs :
!
! Diagnose cloud fraction (3D cloud fraction + low/middle/high/total cloud fraction
! from the lidar signals (ATB and molecular ATB) computed from model outputs
!      +
! Compute CFADs of lidar scattering ratio SR and of depolarization index
!
! Authors: Sandrine Bony and Helene Chepfer (LMD/IPSL, CNRS, UPMC, France).
!
! December 2008, S. Bony,  H. Chepfer and J-L. Dufresne :
! - change of the cloud detection threshold S_cld from 3 to 5, for better
! with both day and night observations. The optical thinest clouds are missed.
! - remove of the detection of the first fully attenuated layer encountered from above.
! December 2008, A. Bodas-Salcedo:
! - Dimensions of pmol reduced to (npoints,llm)
! August 2009, A. Bodas-Salcedo:
! - Warning message regarding PARASOL being valid only over ocean deleted.
! February 2010, A. Bodas-Salcedo:
! - Undef passed into cosp_cfad_sr
! June 2010, T. Yokohata, T. Nishimura and K. Ogochi
! Optimisation of COSP_CFAD_SR
!
! Version 1.0 (June 2007)
! Version 1.1 (May 2008)
! Version 1.2 (June 2008)
! Version 2.0 (October 2008)
! Version 2.1 (December 2008)
! c------------------------------------------------------------------------------------

! c inputs :
      integer npoints
      integer ncol
      integer llm
      integer max_bin               ! nb of bins for SR CFADs
      integer ncat                  ! nb of cloud layer types (low,mid,high,total)
      integer nrefl                 ! nb of solar zenith angles for parasol reflectances

      real(r8) undef                    ! undefined value
      real(r8) pnorm(npoints,ncol,llm)  ! lidar ATB
      real(r8) pmol(npoints,llm)        ! molecular ATB
      real(r8) land(npoints)            ! Landmask [0 - Ocean, 1 - Land]
      real(r8) pplay(npoints,llm)       ! pressure on model levels (Pa)
      logical ok_lidar_cfad         ! true if lidar CFAD diagnostics need to be computed
      real(r8) refl(npoints,ncol,nrefl) ! subgrid parasol reflectance ! parasol

! c outputs :
      real(r8) lidarcld(npoints,llm)     ! 3D "lidar" cloud fraction
      real(r8) cldlayer(npoints,ncat)    ! "lidar" cloud fraction (low, mid, high, total)
      real(r8) cfad2(npoints,max_bin,llm) ! CFADs of SR
      real(r8) srbval(max_bin)           ! SR bins in CFADs
      real(r8) parasolrefl(npoints,nrefl)! grid-averaged parasol reflectance

! c threshold for cloud detection :
      real(r8) S_clr
      parameter (S_clr = 1.2_r8)
      real(r8) S_cld
!      parameter (S_cld = 3.0)  ! Previous thresold for cloud detection
      parameter (S_cld = 5.0_r8)  ! New (dec 2008) thresold for cloud detection
      real(r8) S_att
      parameter (S_att = 0.01_r8)

! c local variables :
      integer ic,k
      real(r8) x3d(npoints,ncol,llm)
      real(r8) x3d_c(npoints,llm),pnorm_c(npoints,llm)
      real(r8) xmax
!
! c -------------------------------------------------------
! c 0- Initializations
! c -------------------------------------------------------
!

!  Should be modified in future version
      xmax=undef-1.0_r8

! c -------------------------------------------------------
! c 1- Lidar scattering ratio :
! c -------------------------------------------------------
!
!       where ((pnorm.lt.xmax) .and. (pmol.lt.xmax) .and. (pmol.gt. 0.0 ))
!          x3d = pnorm/pmol
!       elsewhere
!           x3d = undef
!       end where
! A.B-S: pmol reduced to 2D (npoints,llm) (Dec 08)
      do ic = 1, ncol
        pnorm_c = pnorm(:,ic,:)
        where ((pnorm_c.lt.xmax) .and. (pmol.lt.xmax) .and. (pmol.gt. 0.0_r8 ))
            x3d_c = pnorm_c/pmol
        elsewhere
            x3d_c = undef
        end where
        x3d(:,ic,:) = x3d_c
      enddo

! c -------------------------------------------------------
! c 2- Diagnose cloud fractions (3D, low, middle, high, total)
! c from subgrid-scale lidar scattering ratios :
! c -------------------------------------------------------

      CALL COSP_CLDFRAC(npoints,ncol,llm,ncat,  &
              x3d,pplay, S_att,S_cld,undef,lidarcld, &
              cldlayer)

! c -------------------------------------------------------
! c 3- CFADs
! c -------------------------------------------------------
      if (ok_lidar_cfad) then
!
! c CFADs of subgrid-scale lidar scattering ratios :
! c -------------------------------------------------------
      CALL COSP_CFAD_SR(npoints,ncol,llm,max_bin,undef, &
                 x3d, &
                 S_att,S_clr,xmax,cfad2,srbval)

      endif   ! ok_lidar_cfad
! c -------------------------------------------------------

! c -------------------------------------------------------
! c 4- Compute grid-box averaged Parasol reflectances
! c -------------------------------------------------------

      parasolrefl(:,:) = 0.0_r8

      do k = 1, nrefl
       do ic = 1, ncol
         parasolrefl(:,k) = parasolrefl(:,k) + refl(:,ic,k)
       enddo
      enddo

      do k = 1, nrefl
        parasolrefl(:,k) = parasolrefl(:,k) / float(ncol)
! if land=1 -> parasolrefl=undef
! if land=0 -> parasolrefl=parasolrefl
        parasolrefl(:,k) = parasolrefl(:,k) * MAX(1.0_r8-land(:),0.0_r8) &
                           + (1.0_r8 - MAX(1.0_r8-land(:),0.0_r8))*undef
      enddo

      RETURN
      END SUBROUTINE diag_lidar


!%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
!-------------------- FUNCTION COSP_CFAD_SR ------------------------
! Author: Sandrine Bony (LMD/IPSL, CNRS, Paris)
!%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      SUBROUTINE COSP_CFAD_SR(Npoints,Ncolumns,Nlevels,Nbins,undef, &
                      x,S_att,S_clr,xmax,cfad,srbval)
      IMPLICIT NONE

!--- Input arguments
! Npoints: Number of horizontal points
! Ncolumns: Number of subcolumns
! Nlevels: Number of levels
! Nbins: Number of x axis bins
! xmax: maximum value allowed for x
! S_att: Threshold for full attenuation
! S_clr: Threshold for clear-sky layer
!
!--- Input-Outout arguments
! x: variable to process (Npoints,Ncolumns,Nlevels), mofified where saturation occurs
!
! -- Output arguments
! srbval : values of the histogram bins
! cfad: 2D histogram on each horizontal point

! Input arguments
      integer Npoints,Ncolumns,Nlevels,Nbins
      real(r8) xmax,S_att,S_clr,undef
! Input-output arguments
      real(r8) x(Npoints,Ncolumns,Nlevels)
! Output :
      real(r8) cfad(Npoints,Nbins,Nlevels)
      real(r8) srbval(Nbins)
! Local variables
      integer i, j, k, ib
      real(r8) srbval_ext(0:Nbins)

! c -------------------------------------------------------
! c 0- Initializations
! c -------------------------------------------------------
      if ( Nbins .lt. 6) return

      srbval(1) =  S_att
      srbval(2) =  S_clr
      srbval(3) =  3.0_r8
      srbval(4) =  5.0_r8
      srbval(5) =  7.0_r8
      srbval(6) = 10.0_r8
      do i = 7, MIN(10,Nbins)
       srbval(i) = srbval(i-1) + 5.0_r8
      enddo
      DO i = 11, MIN(13,Nbins)
       srbval(i) = srbval(i-1) + 10.0_r8
      enddo
      srbval(MIN(14,Nbins)) = 80.0_r8
      srbval(Nbins) = xmax
      cfad(:,:,:) = 0.0_r8

      srbval_ext(1:Nbins) = srbval
      srbval_ext(0) = -1.0_r8
! c -------------------------------------------------------
! c c- Compute CFAD
! c -------------------------------------------------------

      do j = 1, Nlevels
         do ib = 1, Nbins
            do k = 1, Ncolumns
               do i = 1, Npoints
                  if (x(i,k,j) /= undef) then
                     if ((x(i,k,j).gt.srbval_ext(ib-1)).and.(x(i,k,j).le.srbval_ext(ib))) &
                          cfad(i,ib,j) = cfad(i,ib,j) + 1.0_r8
                  else 
                     cfad(i,ib,j) = undef
                  endif
               enddo
            enddo
         enddo
      enddo

      where (cfad .ne. undef)  cfad = cfad / float(Ncolumns)

! c -------------------------------------------------------
      RETURN
      END SUBROUTINE COSP_CFAD_SR

!%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
!-------------------- SUBROUTINE COSP_CLDFRAC -------------------
! c Purpose: Cloud fraction diagnosed from lidar measurements
!%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      SUBROUTINE COSP_CLDFRAC(Npoints,Ncolumns,Nlevels,Ncat, &
                  x,pplay,S_att,S_cld,undef,lidarcld, &
                  cldlayer)
      IMPLICIT NONE
! Input arguments
      integer Npoints,Ncolumns,Nlevels,Ncat
      real(r8) x(Npoints,Ncolumns,Nlevels)
      real(r8) pplay(Npoints,Nlevels)
      real(r8) S_att,S_cld
      real(r8) undef
! Output :
      real(r8) lidarcld(Npoints,Nlevels) ! 3D cloud fraction
      real(r8) cldlayer(Npoints,Ncat)    ! low, middle, high, total cloud fractions
! Local variables
      integer ip, k, iz, ic
      real(r8) p1
      real(r8) cldy(Npoints,Ncolumns,Nlevels)
      real(r8) srok(Npoints,Ncolumns,Nlevels)
      real(r8) cldlay(Npoints,Ncolumns,Ncat)
      real(r8) nsublay(Npoints,Ncolumns,Ncat), nsublayer(Npoints,Ncat)
      real(r8) nsub(Npoints,Nlevels)
#ifdef SYS_SX
      real(r8) cldlay1(Npoints,Ncolumns)
      real(r8) cldlay2(Npoints,Ncolumns)
      real(r8) cldlay3(Npoints,Ncolumns)
      real(r8) nsublay1(Npoints,Ncolumns)
      real(r8) nsublay2(Npoints,Ncolumns)
      real(r8) nsublay3(Npoints,Ncolumns)
#endif

! ---------------------------------------------------------------
! 1- initialization
! ---------------------------------------------------------------

      if ( Ncat .ne. 4 ) then
         print *,'Error in lmd_ipsl_stats.cosp_cldfrac, Ncat must be 4, not',Ncat
         stop
      endif

      lidarcld = 0.0_r8
      nsub = 0.0_r8
      cldlay = 0.0_r8
      nsublay = 0.0_r8

! ---------------------------------------------------------------
! 2- Cloud detection
! ---------------------------------------------------------------

      do k = 1, Nlevels

! cloud detection at subgrid-scale:
         where ( (x(:,:,k).gt.S_cld) .and. (x(:,:,k).ne. undef) )
           cldy(:,:,k)=1.0_r8
         elsewhere
           cldy(:,:,k)=0.0_r8
         endwhere

! number of usefull sub-columns:
         where ( (x(:,:,k).gt.S_att) .and. (x(:,:,k).ne. undef)  )
           srok(:,:,k)=1.0_r8
         elsewhere
           srok(:,:,k)=0.0_r8
         endwhere

      enddo ! k

! ---------------------------------------------------------------
! 3- grid-box 3D cloud fraction and layered cloud fractions (ISCCP pressure
! categories) :
! ---------------------------------------------------------------
      lidarcld = 0.0_r8
      nsub = 0.0_r8
#ifdef SYS_SX
!! XXX: Use cldlay[1-3] and nsublay[1-3] to avoid bank-conflicts.
      cldlay1 = 0.0_r8
      cldlay2 = 0.0_r8
      cldlay3 = 0.0_r8
      cldlay(:,:,4) = 0.0_r8 !! XXX: Ncat == 4
      nsublay1 = 0.0_r8
      nsublay2 = 0.0_r8
      nsublay3 = 0.0_r8
      nsublay(:,:,4) = 0.0_r8
      do k = Nlevels, 1, -1
       do ic = 1, Ncolumns
        do ip = 1, Npoints
         p1 = pplay(ip,k)

         if ( p1.gt.0._r8 .and. p1.lt.(440._r8*100._r8)) then ! high clouds
            cldlay3(ip,ic) = MAX(cldlay3(ip,ic), cldy(ip,ic,k))
            nsublay3(ip,ic) = MAX(nsublay3(ip,ic), srok(ip,ic,k))
         else if(p1.ge.(440._r8*100._r8) .and. p1.lt.(680._r8*100._r8)) then  ! mid clouds
            cldlay2(ip,ic) = MAX(cldlay2(ip,ic), cldy(ip,ic,k))
            nsublay2(ip,ic) = MAX(nsublay2(ip,ic), srok(ip,ic,k))
         else
            cldlay1(ip,ic) = MAX(cldlay1(ip,ic), cldy(ip,ic,k))
            nsublay1(ip,ic) = MAX(nsublay1(ip,ic), srok(ip,ic,k))
         endif

         cldlay(ip,ic,4) = MAX(cldlay(ip,ic,4), cldy(ip,ic,k))
         lidarcld(ip,k)=lidarcld(ip,k) + cldy(ip,ic,k)
         nsublay(ip,ic,4) = MAX(nsublay(ip,ic,4),srok(ip,ic,k))
         nsub(ip,k)=nsub(ip,k) + srok(ip,ic,k)
        enddo
       enddo
      enddo
      cldlay(:,:,1) = cldlay1
      cldlay(:,:,2) = cldlay2
      cldlay(:,:,3) = cldlay3
      nsublay(:,:,1) = nsublay1
      nsublay(:,:,2) = nsublay2
      nsublay(:,:,3) = nsublay3
#else
      cldlay = 0.0_r8
      nsublay = 0.0_r8
      do k = Nlevels, 1, -1
       do ic = 1, Ncolumns
        do ip = 1, Npoints

          iz=1
          p1 = pplay(ip,k)
          if ( p1.gt.0._r8 .and. p1.lt.(440._r8*100._r8)) then ! high clouds
            iz=3
          else if(p1.ge.(440._r8*100._r8) .and. p1.lt.(680._r8*100._r8)) then  ! mid clouds
            iz=2
         endif

         cldlay(ip,ic,iz) = MAX(cldlay(ip,ic,iz),cldy(ip,ic,k))
         cldlay(ip,ic,4) = MAX(cldlay(ip,ic,4),cldy(ip,ic,k))
         lidarcld(ip,k)=lidarcld(ip,k) + cldy(ip,ic,k)

         nsublay(ip,ic,iz) = MAX(nsublay(ip,ic,iz),srok(ip,ic,k))
         nsublay(ip,ic,4) = MAX(nsublay(ip,ic,4),srok(ip,ic,k))
         nsub(ip,k)=nsub(ip,k) + srok(ip,ic,k)

        enddo
       enddo
      enddo
#endif

! -- grid-box 3D cloud fraction

      where ( nsub(:,:).gt.0.0_r8 )
         lidarcld(:,:) = lidarcld(:,:)/nsub(:,:)
      elsewhere
         lidarcld(:,:) = undef
      endwhere

! -- layered cloud fractions

      cldlayer = 0.0_r8
      nsublayer = 0.0_r8

      do iz = 1, Ncat
       do ic = 1, Ncolumns

          cldlayer(:,iz)=cldlayer(:,iz) + cldlay(:,ic,iz)
          nsublayer(:,iz)=nsublayer(:,iz) + nsublay(:,ic,iz)

       enddo
      enddo
      where ( nsublayer(:,:).gt.0.0_r8 )
         cldlayer(:,:) = cldlayer(:,:)/nsublayer(:,:)
      elsewhere
         cldlayer(:,:) = undef
      endwhere

      RETURN
      END SUBROUTINE COSP_CLDFRAC
! ---------------------------------------------------------------

END MODULE MOD_LMD_IPSL_STATS
