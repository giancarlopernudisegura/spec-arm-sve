!+
! NAME
!       leapfrog - leap-frog scheme
!
! DESCRIPTION
!       Performs explicit leap-frog timestepping for nts time steps.
!
! METHOD
!       During timestepping these SBROUTINES are called
!          MPI_WTIME                      if ((ts==2).and.(my_id==master_id))
!          updateH                        (always)
!          power_updateH                  if (power_found)
!          HuygensH                       if (pulse>0)
!          UPML_updateH                   if (OBC>0)
!          communicateH                   if (nnodes/=1)
!          ------------- Formally, a half time step is taken here -------------
!          Mur_storeE                     if (OBC==OBC_Mur)
!          Mat_updateE                    if (mat_inhomo)
!          updateE                        if ~(mat_inhomo)
!          PEC_apply                      if (PEC/=0)
!          HuygensE                       if (pulse>0)
!          Plane_Source_Apply             if (pulse==-2)
!          UPML_updateE                   if (OBC>0)
!          Mur_updateE                    if (OBC==OBC_Mur)
!          communicateE                   if (nnodes/=1)
!          collect                        if (mod(ts,stride)==0).and.(
!                                            (nts/=ts).and.(out>0)
!
!       After timestepping the clock is stopped.
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE leapfrog(nx,ny,nz,filenumber,perf,Ex,Ey,Ez,Hx,Hy,Hz)

USE globalvar_mod
USE update_mod, ONLY : updateE, updateH
#if !defined(SPEC) || defined(SPEC_MPI)
USE communicate_mod, ONLY : com_clock, communicateE, communicateH
#endif
#if defined(INTERNAL_TIMING)
USE communicate_mod, ONLY : com_clock
#endif
USE Mur_mod, ONLY : Mur_storeE, Mur_updateE
USE Huygens_mod, ONLY : HuygensE, HuygensH
USE PEC_mod, ONLY : PEC, PEC_apply
USE Material_mod, ONLY : Mat_inhomo, Mat_updateE
USE Plane_Source_mod , ONLY : Plane_Source_block_index, Plane_Source_Apply
USE power_mod, ONLY : power_found, power_dft, power_print, power_updateH,     &
                      PowerTyp, first_power
USE UPML_mod, ONLY :  UPML_updateE, UPML_updateH

IMPLICIT NONE

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer,        intent(in)                                     :: nx, ny, nz
integer,        intent(inout)                                  :: filenumber
real(kind=dfp), intent(inout), dimension(2)                    :: perf

real(kind=rfp), intent(inout),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(inout),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(inout),                                                &
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

integer :: ts, prn, tts
#if defined(SPEC)
real(kind=dfp) :: delta, MFlops
real(kind=dfp), save :: tid1=0, tid2=0
#else
real(kind=dfp) :: delta, tid1, tid2, MFlops
#endif
! Point-source variables
real(kind=rfp), parameter :: t_0 = 2.633183379602568e-14_rfp
real(kind=rfp), parameter :: t_w = 4.654854559561718e-15_rfp
integer :: nx_min, nx_max, nx_psource_local, nx_psource_global
integer :: ny_min, ny_max, ny_psource_local, ny_psource_global
integer :: nz_min, nz_max, nz_psource_local, nz_psource_global

! Field record variables
real(kind=rfp), allocatable, dimension(:,:) :: HzT ! Point probe Hz

! Power module variables
type(PowerTyp), pointer :: tmppower        ! Temporary power pointer
integer :: icoords                         ! Power coordinate counter
integer :: ipower                          ! Power entry counter

!------------------------------------------------------------------------------
!                     I n t e r f a c e s
!------------------------------------------------------------------------------

INTERFACE
SUBROUTINE calcflops(nx,ny,nz,delta,MFlops)
  USE parameter_mod
  integer,        intent(in)  :: nx, ny, nz
  real(kind=dfp), intent(in)  :: delta
  real(kind=dfp), intent(out) :: MFlops
END SUBROUTINE calcflops
END INTERFACE

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if ( (probe_number>0)) then
  if ( (coords(1)==probe(1)/nx).and.                                          &
       (coords(2)==probe(2)/ny).and.                                          &
       (coords(3)==probe(3)/nz) )then
    allocate( HzT(stride,probe_number) )
    HzT = 0.0_rfp
  end if
end if

#if defined(SPEC) && !(defined(SPEC_MPI) || defined(INTERNAL_TIMING))
tid1 = 0
tid2 = 0
#endif

do ts = 1,nts            

  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) '-----------------------------------------------------'
    write(*,*) '(Master) Entering main loop'
  end if
  !! Start the clock on the master. The first time step is excluded from the
  !! timing since it may contain initialization overhead. It may also happen
  !! that some node is much slower than the master with this initialization.
  !! If this node is sufficiently far away from the master node in the 
  !! Cartesian topology it may happen that the master reaches the second 
  !! time step while this node is still struggling with the first time step
  if (ts==2) then 
    !! Make sure that all nodes have completed the first time step.
    !! This is achieved with the MPI_BARRIER call in com_clock

#   if !defined(SPEC) || defined(SPEC_MPI) || defined(INTERNAL_TIMING)
    call com_clock(tid1)
#   endif

#   if !defined(SPEC) || defined(INTERNAL_TIMING)
    if (my_id==master_id) then
      write(*,*)                                                              &
       'Timing started on the master in the beginning of the second time step'
    end if
#   endif
  end if

  call updateH(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)

  if (power_found) then
    call power_updateH(Ex,Ey,Ez,Hx,   Hz,nx,ny,nz)
  end if

  if (pulse>0) then
    call HuygensH(nx,ny,nz,ts,Hx,Hy,Hz)
  end if

  if (OBC>0) then
    call UPML_updateH(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
  end if

  if (nnodes/=1) then
#   if defined(SPEC) && !defined(SPEC_MPI)
    write (*,*) 'Hmmm, how did nnodes get to be >1 if we are serial?'
    stop
#   else
    call communicateH(nx,ny,nz,ts,Hx,Hy,Hz)
#endif
  end if

  if (OBC==OBC_Mur) then
    if (ts==1) then
      write(*,*) '1st order Mur used as OBC!'
    end if
    call Mur_storeE(nx,ny,nz,Ex,Ey,Ez)
  elseif ((OBC==OBC_PEC).and.(ts==1).and.(my_id==master_id)) then
    write(*,*) 'PEC is used as OBC'
  elseif (OBC>0) then
    if (ts==1) then
      write(*,*) 'UPML used as OBC!'
    end if
  end if

  if (mat_inhomo) then
    call Mat_updateE(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
  else
    call updateE(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
  end if

  if (PEC/=0) then
    call PEC_apply(Ex,Ey,Ez)
  end if

  if (pulse>0) then
    call HuygensE(nx,ny,nz,ts,Ex,Ey,Ez)

  else if (pulse==-1) then
    !! A Gaussian point source 
    nx_min = coords(1)*nx + 1  
    ny_min = coords(2)*ny + 1
    nz_min = coords(3)*nz + 1
    nx_max = (coords(1)+1)*nx
    ny_max = (coords(2)+1)*ny
    nz_max = (coords(3)+1)*nz
    nx_psource_global = nx_global/2
    ny_psource_global = ny_global/2
    nz_psource_global = nz_global/2
    !! Check if the point source is in my block
    if( ((nx_min<=(nx_psource_global)).and.((nx_psource_global)<=nx_max)).and.&
        ((ny_min<=(ny_psource_global)).and.((ny_psource_global)<=ny_max)).and.&
        ((nz_min<=(nz_psource_global)).and.((nz_psource_global)<=nz_max)) )then

      nx_psource_local = nx_psource_global - nx_min + 1
      ny_psource_local = ny_psource_global - ny_min + 1
      nz_psource_local = nz_psource_global - nz_min + 1
      if (ts==1) then
        write(*,'(A,3I4)') 'Using point source, coordinates =',               &
                   nx_psource_global, ny_psource_global, nz_psource_global
      end if

      Ez(   nx_psource_local,ny_psource_local,nz_psource_local) =             &
         Ez(nx_psource_local,ny_psource_local,nz_psource_local) +             &
                 dtdeps*dxinv*dyinv*dzinv*exp(-(((ts-0.5_rfp)*dt-t_0)/t_w)**2)
!     write(*,'(G25.15)')Ez(nx_psource_local,ny_psource_local,nz_psource_local)
    end if

  else if ((pulse==-2).and.(coords(2)==Plane_Source_block_index)) then
    CALL Plane_Source_Apply(Ex,nx,ny,nz,ts)
!    write(*,'(G25.15)')Ex(nx/2,10,nz/2)
  end if

  if (OBC>0) then
    call UPML_updateE(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
    ! UMPL
  elseif (OBC==OBC_Mur) then
    !! Mur 1:st order BC for tangential components of E at the boundary 
    call Mur_updateE(nx,ny,nz,Ex,Ey,Ez)
  elseif (OBC==OBC_PEC) then
    !! PEC is implicitly enforced, tangential components of E at boundary 
    !! stays zero, except where a plane source is used.
    if ((pulse==-2).and.(coords(2)==Plane_Source_block_index)) then 
      if (coords(3)==0) then
        Ex(:,:,1) = 0.0_rfp
      end if
      if (coords(3)==dims(3)-1) then
        Ex(:,:,nz+1) = 0.0_rfp
      end if
    end if
  end if 

! Field record (assumes all probes are in the same block)

  if (probe_number>0) then
    if ( (coords(1)==probe(1)/nx).and.                                        &
         (coords(2)==probe(2)/ny).and.                                        &
         (coords(3)==probe(3)/nz) )then
 
      if ( mod(ts,stride) > 0 ) then
        do prn=1, probe_number
          HzT(mod(ts,stride),prn) = Hz(probe(3*prn-2)-coords(1)*nx,           &
                                       probe(3*prn-1)-coords(2)*ny,           &
                                       probe(3*prn)  -coords(3)*nz)
        end do
      else
        do prn=1, probe_number
          HzT(stride,prn) = Hz(probe(3*prn-2)-coords(1)*nx,                   &
                               probe(3*prn-1)-coords(2)*ny,                   &
                               probe(3*prn)  -coords(3)*nz)
        end do
        if ( ts > stride) then
          open (unit=11,file='fieldrecord.dat',status='unknown',              &
                action='write',position='append')
        else
          open (unit=11,file='fieldrecord.dat',status='unknown',action='write')
        end if
        do tts=1, stride
          write(11,*) (HzT(tts,prn),prn=1,probe_number)
        end do
        close(11)
      end if
    
    end if
  end if

  if (nnodes/=1) then
#   if defined(SPEC) && !defined(SPEC_MPI)
    write (*,*) 'Hmmm, how did nnodes get to be >1 if we are serial?'
    stop
#   else
    call communicateE(nx,ny,nz,Ex,Ey,Ez)
#   endif
  end if
  if (power_found) then
    !! Must be called after communicateE is called
    CALL power_DFT(Ex,Ey,Ez,Hx,Hy,Hz,nx,ny,nz,(ts-1)*dt,ts)
  end if

  if ((mod(ts,stride)==0).and.(nts/=ts)) then
  
    if (out>0) then
      !! Collect the solution on one node
      if (my_id==master_id) then   
        write(*,*) 'Writing output-files numbers ', filenumber, 'ts =', ts
      end if
      if (nnodes>1) then
#if defined(SPEC) && !defined(SPEC_MPI)
        write (*,*) 'Hmmm, how did nnodes get to be >1 if we are serial?'
        stop
#else
        call collect(nx,ny,nz,filenumber,Hx,Hy,Hz,Ex,Ey,Ez)
#endif
      else
        call writeout(nx,ny,nz,filenumber,Ex,Ey,Ez,Hx,Hy,Hz)
      end if
      filenumber = filenumber+1
    else if (my_id==master_id) then
      write(*,*) 'Progress report (no output), ts =', ts    
    end if
  end if

  if (power_found) then
    !! We let all nodes call power_print (even those nodes which are without 
    !! power plane) in order to use MPI_REDUCE in power_print Subroutine

    tmppower => first_power
    icoords = 1
    ipower = 1
    do while(associated(tmppower))
      if ( ( ts>tmppower%skip .AND. mod(ts,tmppower%stride)==0 ) .OR.         &
           ts == nts ) then
        call power_print(tmppower,icoords,ipower)
      end if
      tmppower => tmppower%next
      ipower = ipower + 1
    end do
  end if

end do

if (my_id==master_id) then
  write(*,*) 'Ending main loop' !-------------------------------------------
end if

if (nts>1) then
#if !defined(SPEC) || defined(SPEC_MPI) || defined(INTERNAL_TIMING)
  call com_clock(tid2)
#endif
  if (my_id==master_id) then
    delta = tid2-tid1
    !! nx*dims(1),ny*dims(2),nz*dims(3) is the global problem size.
    call calcflops(nx*dims(1),ny*dims(2),nz*dims(3),delta,MFlops)  
    if (perf(1)>delta) then
      perf(1) = delta
      perf(2) = MFlops
    end if
  end if
end if

END SUBROUTINE leapfrog
