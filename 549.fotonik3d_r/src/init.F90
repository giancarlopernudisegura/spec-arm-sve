!+
! NAME
!       init - Initializations
!
! DESCRIPTION
!       Initializations:
!         1) Start up MPI by calling com_init_MPI
!         2) Master reads yee.dat and perform some safety checks.
!            Data from yee.dat is used to fill info.
!         3) communicate_init is called
!         4) Global variables are calculated
!         5) Initialization routines of modules are called.
!            (Huygens_init, update_init, and Mur_init)
!
! SYNOPSIS
!       call init(nx,ny,nz)
!         integer, intent(out) :: nx, ny, nz
!
! HISTORY
!       Written by Ulf Andersson
!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE init(nx,ny,nz)

USE globalvar_mod  
USE Huygens_mod, ONLY : Huygens_init
USE update_mod, ONLY : update_init
#if !defined(SPEC) || defined(SPEC_MPI)
USE communicate_mod, ONLY : com_init_MPI, communicate_init, info_type
#else
USE communicate_mod, ONLY : com_init_MPI,                   info_type
#endif
USE Mur_mod, ONLY : Mur_init
USE PEC_mod, ONLY : PEC_read, PEC_init
USE Material_mod, ONLY : Mat_init
USE Plane_Source_mod, ONLY : Plane_Source_init
USE power_mod, ONLY : power_found, power_init
USE UPML_mod, ONLY : UPML_init
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(out) :: nx, ny, nz

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

type(info_type) :: info
integer :: comtype, PEC, OBJ, POWER
integer :: ios, prn
logical :: failure = .false.
real(kind=rfp) :: CFL, pl
real(kind=rfp), dimension(ndims) :: Epol, k0, X0
!character (len=*), parameter :: F100 ='(A,I3,A,I3,A)'

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

!----------------------- Start up MPI -----------------------------------------
call com_init_MPI()

if (master_id>=nnodes) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! master>=#nodes. (0<=master_is<#nodes needed)'
#endif
  write(*,*) 'FATAL ERROR! master_id>=#nodes. (0<=master_is<#nodes needed)'
  stop
end if

if (my_id==master_id) then
  write(*,*) '================================================================'
  if (rfp==sfp) then
    write(*,*) 'Using 32-bit precision'
  else if (rfp==dfp) then
    write(*,*) 'Using 64-bit precision'
  else
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! rfp has strange value in init.f90 '
#endif
    write(*,*) 'FATAL ERROR! rfp has strange value in init.f90, my_id = ',    &
               my_id
#if defined(SPEC)
    stop 1
#else
    stop
#endif
  end if

#if defined(SPEC)
! This file will be opened during the run using position 'append'.  Ensure 
! that it is always cleared at the start -- even if user runs the program 
! "by hand", instead of under control of the SPEC tools.
    open(unit=57, file='pscyee.out', status='REPLACE', IOSTAT=ios)
    if (ios/=0)then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! init routine fail to open file pscyee.out'
#endif
      write(*,*) 'FATAL ERROR! init routine failed to open file pscyee.out'
      stop
    end if
    close(57)
#endif



  !----------------------- Master Reads Input file ... ------------------------
  write(*,*) '-----------------------------------------------------'
  write(*,*) 'Master reads the input file yee.dat:'
  write(*,*)
  open(unit=9, file='yee.dat', status='old', IOSTAT=ios)
  if (ios/=0) then
    write(*,*) 'CRITICAL ERROR! Failed to open file yee.dat in init'
    failure = .true. 
  else ! yee.dat was successfully opened.
    read(9,*) dims
    write(*,*) '(px,py,pz) == dims(1:3) = ', dims
    if ((dims(1)*dims(2)*dims(3))>nnodes) then
      write(*,*) 'CRITICAL ERROR: px*py*pz > #nodes'
      write(*,*) 'The number of allocated nodes are: ', nnodes
      write(*,*) 'but px*py*pz= ', dims(1)*dims(2)*dims(3)
      failure = .true.         
    end if
    if (((dims(1)*dims(2)*dims(3))<nnodes).and.                               &
         (dims(1)*dims(2)*dims(3))/=0) then !px*py*pz==0 => use MPI_DIMS_CREATE
      write(*,*)                                                              &
           'I will not use all the allocated nodes because px*py*pz < #nodes'
      write(*,*) 'The number of allocated nodes are: ', nnodes
      write(*,*) 'and px*py*pz= ', dims(1)*dims(2)*dims(3)
    end if
    read(9,*) nx_global,ny_global,nz_global    ! problem size for total problem
    write(*,*) 'nx_global, ny_global, nz_global = ',                          &
                nx_global, ny_global, nz_global
    read(9,*) dx, dy, dz
    write(*,*) 'dx, dy, dz = ', dx, dy, dz
    read(9,*) nts           ! number of time steps
    write(*,*) 'nts = ', nts           
    read(9,*) out           ! output
    write(*,*) 'out = ', out           
    read(9,*) k0       ! wave-direction
    write(*,*) 'k0 = ', k0       
    !! normalization of k0 i.e. direction of propagation for the incident wave.
    k0 = k0/sqrt(dot_product(k0,k0))
    read(9,*) Epol          ! electric polarization
    write(*,*) 'Epol = ', Epol          
    read(9,*) X0            ! wave-offset
    write(*,*) 'X0 = ', X0            
    read(9,*) pl            ! pulse-length
    write(*,*) 'pl = ', pl            
    read(9,*) pulse         ! pulse-type
    write(*,*) 'pulse = ', pulse         
    read(9,*) number_of_runs! how many times we shall run the code
    write(*,*) 'number_of_runs = ', number_of_runs
    read(9,*) ds            ! downsizing when writing the result
    write(*,*) 'ds = ', ds            
    read(9,*) stride        ! output written every stride iteration
    write(*,*) 'stride = ', stride        
    read(9,*) comtype       ! communication type
    write(*,*) 'comtype = ', comtype       
    read(9,*) CFL           ! Courant-Friedrich-Levy number
    write(*,*) 'CFL = ', CFL           
    read(9,*) PEC           ! PEC
    write(*,*) 'PEC = ', PEC           
    read(9,*) OBC           ! Outer Boundary Condition
    write(*,*) 'OBC = ', OBC  
    number_of_PML_cells = max(0,OBC)
    write(*,*) 'number_of_PML_cells = ', number_of_PML_cells 
    read(9,*) OBJ           ! Dielectric object
    write(*,*) 'OBJ = ', OBJ           
    read(9,*) POWER         ! Power flow computation
    write(*,*) 'POWER = ', POWER           
    read(9,*) probe_number         ! number of point probes for record
    write(*,*) 'Number of Probes =  ', probe_number      
    if (probe_number > 0) then
      !! Allocate arrays to store probe position index
      allocate( probe(probe_number*3) )
      probe = 0 
      !! Read index into probes
      do prn = 1, probe_number   
        read(9,*) probe(3*prn-2), probe(3*prn-1), probe(3*prn)
      end do
      write(*,*) 'Probes =  ', probe 
    end if

    write(*,*)
    write(*,*) '-----------------------------------------------------'
    close(unit=9, IOSTAT=ios)
    if (ios/=0)then
      write(*,*) 'Warning! Failed to close file yee.dat in init'
    end if

    !! Some safety checks

    if (dot_product(k0,Epol) >= 1.0E-6_rfp) then
      write(*,*) 'CRITICAL ERROR:  E-polarization is not'
      write(*,*) 'perpendicular to direction of propagation'
      failure = .true.
    end if

    if ((out/=3).and.(ds/=1)) then
      write(*,*) 'WARNING: downsizing only implemented when out = 3'
    end if

    if (number_of_runs<1) then
      write(*,*) 'Maybe we should run the code at least once! '
      number_of_runs = 1
      write(*,*) 'CHANGING number_of_runs to ', number_of_runs
    end if
  !----------------------- ... and share it with the workers ------------------
    if (nnodes>1) then
      info%i(1:3) = dims
      info%i(4) = nx_global
      info%i(5) = ny_global
      info%i(6) = nz_global
      info%i(7) = nts
      info%i(8) = out
      info%i(9) = pulse
      info%i(10) = number_of_runs
      info%i(11) = ds
      info%i(12) = stride
      info%i(13) = comtype
      info%i(14) = PEC
      info%i(15) = OBC
      info%i(16) = OBJ
      info%i(17) = POWER
      info%i(18) = probe_number
      if (probe_number > 0) then
        info%i(19:18+probe_number*3) = probe
      end if

      info%r(1) = dx
      info%r(2) = dy
      info%r(3) = dz
      info%r(4:6) = k0
      info%r(7:9) = Epol
      info%r(10:12) = X0
      info%r(13) = pl
      info%r(14) = CFL

    end if

  end if 
end if ! (my_id==master_id) then

if (nnodes>1) then
#if !defined(SPEC) || defined(SPEC_MPI)
 call communicate_init(failure,info,nx,ny,nz,CFL,Epol,k0,X0,pl,PEC,OBJ,POWER)
#else
 write (*,*) 'If we are in serial code, how did nnodes get to be > 1?'
 stop
#endif
else
  if (failure) then
    WRITE(*,*) 'CRITICAL ERROR in input file. Aborting.'
#if defined(SPEC)
    stop 1
#else
    stop
#endif
  end if
  included_Cart = .true.
  my_id = master_id
  coords = 0
  dims = 1
  nx = nx_global
  ny = ny_global
  nz = nz_global
end if

if (included_Cart) then 

  !! communicate_init may alter the values of n[xyz]_global
  if (PEC/=0) then
    call PEC_read(nx_global,ny_global,nz_global)
  end if

  !! Sizes of the 3D array for the electromagnetc fields:
  !! (These values must be set when mur_init is called)
  Exsize(1) = 1    -number_of_PML_cells 
  Exsize(2) = nx   +number_of_PML_cells 
  !! Leading dimension of Ex is nx
  Exsize(3) = 1    -number_of_PML_cells 
  Exsize(4) = ny+1 +number_of_PML_cells 
  Exsize(5) = 1    -number_of_PML_cells 
  Exsize(6) = nz+1 +number_of_PML_cells 

  Eysize(1) = 1    -number_of_PML_cells 
  Eysize(2) = nx+1 +number_of_PML_cells 
  !! Leading dimension of Ey is nx+1
  Eysize(3) = 1    -number_of_PML_cells 
  Eysize(4) = ny   +number_of_PML_cells 
  Eysize(5) = 1    -number_of_PML_cells 
  Eysize(6) = nz+1 +number_of_PML_cells 

  Ezsize(1) = 0    -number_of_PML_cells ! 0 for padding reasons
  Ezsize(2) = nx+1 +number_of_PML_cells 
  !! Leading dimension of Ez is nx+2
  Ezsize(3) = 1    -number_of_PML_cells 
  Ezsize(4) = ny+1 +number_of_PML_cells 
  Ezsize(5) = 1    -number_of_PML_cells 
  Ezsize(6) = nz   +number_of_PML_cells 

  Hxsize(1) = 1    -number_of_PML_cells 
  Hxsize(2) = nx+1 +number_of_PML_cells ! Parallel version needs nx+1 here. . Serial can handle nx
  !! Leading dimension of Hx is nx+1
  Hxsize(3) = 0    -number_of_PML_cells ! Parallel version needs 0 here. Serial can handle 1
  Hxsize(4) = ny   +number_of_PML_cells 
  Hxsize(5) = 0    -number_of_PML_cells ! Parallel version needs 0 here. Serial can handle 1
  Hxsize(6) = nz   +number_of_PML_cells 

  Hysize(1) = 0    -number_of_PML_cells ! Parallel version needs 0 here. Serial can handle 1
  Hysize(2) = nx+1 +number_of_PML_cells ! +1 for padding reasons 
  !! Leading dimension of Hy is nx+2
  Hysize(3) = 1    -number_of_PML_cells 
  Hysize(4) = ny   +number_of_PML_cells 
  Hysize(5) = 0    -number_of_PML_cells ! Parallel version needs 0 here. Serial can handle 1
  Hysize(6) = nz   +number_of_PML_cells 

  Hzsize(1) = 0    -number_of_PML_cells ! Parallel version needs 0 here. Serial can handle 1
  Hzsize(2) = nx+2 +number_of_PML_cells ! +2 for padding reasons 
  !! Leading dimension of Hz is nx+3
  Hzsize(3) = 0    -number_of_PML_cells ! Parallel version needs 0 here. Serial can handle 1
  Hzsize(4) = ny   +number_of_PML_cells 
  Hzsize(5) = 1    -number_of_PML_cells 
  Hzsize(6) = nz+1 +number_of_PML_cells ! Parallel version needs nz+1 here . Serial can handle nz

  !! Loop limits in UPML
  xstart = 1  - number_of_PML_cells
  ystart = 1  - number_of_PML_cells
  zstart = 1  - number_of_PML_cells
  xstop  = nx + number_of_PML_cells
  ystop  = ny + number_of_PML_cells
  zstop  = nz + number_of_PML_cells

  !! Start values for some of the loops in update.f90 depend on
  !! whether there is an ABC or another block at the boundary.
  !! jmin and kmin are also used by mur.f90 if coords(1)==0 or coords(2)==0
  if (coords(1)==0) then
    imin = 2
  else
    imin = 1
  end if

  if (coords(2)==0) then
    jmin = 2
  else
    jmin = 1
  end if

  if (coords(3)==0) then
    kmin = 2
  else
    kmin = 1
  end if

  !! Calculate some global variables
  dxinv = 1.0_rfp/dx
  dyinv = 1.0_rfp/dy
  dzinv = 1.0_rfp/dz 
  dt = CFL / (c0*sqrt( dxinv**2+dyinv**2+dzinv**2))
  dtdmu  = dt/mu0
  dtdeps = dt/eps0

!----------------------- Call init. routines of modules -----------------------
  if (pulse>0) then
    call Huygens_init(nx,ny,nz,Epol,k0,X0,pl)  ! Needs coords to be calculated
  elseif (pulse==-2) then
    call plane_source_init(nx,ny,nz)
  end if
  call update_init()        ! update_init must be called before Mat_init
  if (OBJ/=0) then
    call Mat_init(nx,ny,nz,OBJ)                ! Needs coords to be calculated
    if (my_id==master_id) then
      write(*,*) '*******MATERIAL****************************'
      write(*,*) 'Master has completed Mat_init.'
    end if
  end if                             
  if (OBC>0) then
    call UPML_init(nx,ny,nz)
  elseif (OBC==OBC_Mur) then
    call Mur_init(nx,ny,nz)     ! Mat_init must be called before Mur_init
  end if
  call PEC_init(PEC,nx,ny,nz)                  ! Needs coords to be calculated
  !! Can I put the call to power_init before the call to Mat_init?
  if (POWER/=0) then
    power_found = .true.
    call power_init(POWER)
  end if

end if

if (my_id==master_id) then
  write(*,*) 'Leaving initialization routine init.f90'
end if

END SUBROUTINE init
