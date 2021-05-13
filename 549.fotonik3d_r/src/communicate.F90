!+
! NAME
!       communicate_mod - communication of electromagnetic field variables
!
! DESCRIPTION
!       Module for communication of electromagnetic field variables
!       In this version of communicate_mod we communicate in all three spatial
!       dimension.
!
!       The value of the integer variable comtype decides which MPI strategy
!       that will be used. Possible values are 1 to 10 and 101-103:
!
!       1) MPI_RECV followed by MPI_SSEND  
!       2) MPI_SSEND followed by MPI_RECV  
!       3) red-black (a combination of 1 and 2)                   
!         every second node (red nodes): MPI_RECV followed by MPI_SSEND
!         the other half  (black nodes): MPI_SSEND followed by MPI_RECV
!       4) MPI_SENDRECV                    
!       5) MPI_ISEND followed by MPI_RECV followed by MPI_WAIT    
!       6) MPI_BSEND followed by MPI_RECV                         
!       7) MPI_SENDRECV using derived data types                  
!       8) MPI_IRECV followed by MPI_SSEND followed by MPI_WAIT
!       9) MPI_SENDRECV_REPLACE
!       10) Persistent BSEND communication
!
!       All the strategies above also appears in communicateY.f90. In this file
!       they are performed first in the x-dim, then in the y-dim. and finally
!       in the z-dim. There are also three MPI strategies that are unique to 
!       the full 3D parallelization:
!
!       101) MPI_ISEND followed by MPI_RECV repeated for the 3 dimensions.
!        this is then followed by an MPI_WAITALL(3,...) (cf comtype=5)
!       102) MPI_ISEND followed by MPI_IRECV repeated for the 3 dimensions.
!        this is then followed by an MPI_WAITALL(6,...)
!       103) MPI_ISEND followed by MPI_IRECV repeated for the 3 dimensions.
!        The following MPI_WAITALL is delayed until after update[EH].
!        It is done by calls to communicate[EH]_finalize.
!        NOTE1! To use comtype=103, you MUST edit leapfrog.f90. Calls to the
!        SUBROUTINES communicateH_finalize and communicateE_finalize must be
!        added. (see under SYNOPSIS in these two routines.)
!        NOTE2! Arithmetic operations are performed in different order.
!
! PUBLIC
!       SUBROUTINE com_init_MPI
!       SUBROUTINE communicate_init
!       SUBROUTINE com_clock
!       SUBROUTINE communicateH
!       SUBROUTINE communicateE
!       SUBROUTINE communicate_end
!       SUBROUTINE communicateH_finalize
!       SUBROUTINE communicateE_finalize
!       TYPE info_type
!
! HISTORY
!       Written by Ulf Andersson
!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE communicate_mod

USE parameter_mod
USE globalvar_mod, ONLY: Exsize, Eysize, Ezsize, Hxsize, Hysize, Hzsize
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
   use, intrinsic :: iso_fortran_env, only : error_unit
#endif

IMPLICIT NONE

#if defined(INTERNAL_TIMING)
PUBLIC com_init_MPI, com_clock,                                               &
       communicate_end,                                                       &
! communicateH,communicateE,communicate_init,& ! Needed for ARCH=OpenMPI_netDCF
       iinfo_size, rinfo_size, info_type
#elif !defined(SPEC) || defined(SPEC_MPI)
PUBLIC com_init_MPI, communicate_init, com_clock,                             &
       communicateH, communicateE, communicate_end,                           &
       communicateH_finalize, communicateE_finalize,                          &
       iinfo_size, rinfo_size, info_type
#else
PUBLIC com_init_MPI,                                                          &
       communicate_end,                                                       &
       iinfo_size, rinfo_size, info_type
#endif

!------------------------------------------------------------------------------
!                     T y p e  d e f i n i t i o n
!------------------------------------------------------------------------------

integer, parameter :: iinfo_size = 48, rinfo_size = 14
type :: info_type
  sequence  ! To ensure that the parts lies consequently in memory
  real(kind=rfp), dimension(rinfo_size) :: r ! Declare r before i. With rfp=dfp
  integer,        dimension(iinfo_size) :: i ! and iinfo_size an odd number we
end type info_type                           ! can get misalignment if i is
                                             ! declared before r. This is not 
PRIVATE                                      ! error but may cause warnings.

real(kind=rfp), dimension(:,:,:), allocatable ::  recX_H,  recY_H,  recZ_H
real(kind=rfp), dimension(:,:,:), allocatable ::  recX_E,  recY_E,  recZ_E
real(kind=rfp), dimension(:,:,:), allocatable :: sendX_H, sendY_H, sendZ_H
real(kind=rfp), dimension(:,:,:), allocatable :: sendX_E, sendY_E, sendZ_E
integer, dimension(2*ndims) :: req_vec_H, req_vec_E
integer :: comtype
integer :: below_X, above_X, below_Y, above_Y, below_Z, above_Z  ! neighbors
integer :: xsize, ysize, zsize  ! messages sizes
integer :: mesXdir, mesYdir, mesZdir
integer :: bsize
character, dimension(:), allocatable :: buffer
logical :: E_finalize_called,H_finalize_called, second_timestep,first_timestep

integer, parameter :: pers_downX_tag = 1
integer, parameter :: pers_upX_tag = 2
integer, parameter :: pers_downY_tag = 3
integer, parameter :: pers_upY_tag = 4
integer, parameter :: pers_downZ_tag = 5
integer, parameter :: pers_upZ_tag = 6

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       com_init_MPI - Initialize MPI
!
! DESCRIPTION
!       MPI initializations.
!
! METHOD
!       1) Calls MPI_INIT.
!       2) Gives a value to nnodes by calling MPI_COMM_SIZE.
!       3) Gives a value to my_id by calling MPI_COMM_RANK.
!       4) Gives my_MPI_FLOAT a value, depending on the value of rfp.
!
! SEE ALSO
!       init.f90
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE com_init_MPI()

USE globalvar_mod, ONLY : nnodes, my_id, my_MPI_FLOAT
#if !defined(SPEC) || defined(SPEC_MPI) || defined(INTERNAL_TIMING)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ierr
#if !defined(SPEC_MPI)
integer :: idummy
parameter (idummy=0)
#endif

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

call MPI_INIT(ierr)
#if defined(SPEC) && !defined(SPEC_MPI)
call MPI_COMM_SIZE(idummy, nnodes, ierr)
call MPI_COMM_RANK(idummy, my_id, ierr)
#else
call MPI_COMM_SIZE(MPI_COMM_WORLD, nnodes, ierr)
call MPI_COMM_RANK(MPI_COMM_WORLD, my_id, ierr)

!write(*,F100) 'Process', my_id, ' of', nnodes, ' is alive'
if (rfp==sfp) then
  my_MPI_FLOAT = MPI_REAL
else if (rfp==dfp) then
  my_MPI_FLOAT = MPI_DOUBLE_PRECISION
else
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
  write(error_unit,*) 'FATAL ERROR! rfp has strange value in com_init_MPI '
#endif
  write(*,*) 'FATAL ERROR! rfp has strange value in com_init_MPI, my_id = ',  &
             my_id
  stop
end if
#endif

end SUBROUTINE com_init_MPI

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       communicate_init - Initialization
!
! DESCRIPTION
!       Set PRIVATE variable comtype.
!       Creates a Cartesian topology. 
!
! SEE ALSO
!       init.f90
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#if !defined(SPEC) || defined(SPEC_MPI)
SUBROUTINE communicate_init(failure,info,nx,ny,nz,CFL,Epol,k0,X0,pl,          &
                            PEC,OBJ,POWER)

USE globalvar_mod 
include 'mpif.h'

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

logical,                          intent(in)  :: failure
type(info_type),                  intent(in)  :: info
integer,                          intent(out) :: nx, ny, nz
integer,                          intent(out) :: PEC, OBJ, POWER
real(kind=rfp),                   intent(out) :: CFL, pl
real(kind=rfp), dimension(ndims), intent(out) :: Epol, k0, X0

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer, parameter :: count = 2
integer :: itmp, dir, disp, rank, ierr, infotype_MPI, extent
logical :: periods(ndims) = .false.
logical :: reorder = .true.
logical :: DIMS_CREATE_called = .false.
integer, dimension(ndims)  :: temp_coords
integer, dimension(nnodes) :: my_MPI_COMM_CART_vector
integer, dimension(count)  :: array_of_blocklengths, array_of_displacements,  &
                              array_of_types
integer :: bsize_x, bsize_y, bsize_z, allocstat, oneD_slice

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

call MPI_BCAST(failure,1,MPI_LOGICAL,master_id,MPI_COMM_WORLD,ierr)
if (failure) then
!  write(*,*) 'Node', my_id, 'giving up'
  call MPI_FINALIZE(ierr)
  stop
end if

! Broadcast the information arrays in info. (info%i and info%r)
array_of_blocklengths(1) = iinfo_size
array_of_blocklengths(2) = rinfo_size
array_of_displacements(1) = 0
call MPI_TYPE_EXTENT(MPI_INTEGER,extent,ierr)
array_of_displacements(2) = extent*iinfo_size
array_of_types(1) = MPI_INTEGER
array_of_types(2) = my_MPI_FLOAT

call MPI_TYPE_STRUCT(count,array_of_blocklengths,array_of_displacements,      &
                     array_of_types,infotype_MPI,ierr)
call MPI_TYPE_COMMIT(infotype_MPI,ierr)
call MPI_BCAST(info,1,infotype_MPI,master_id,MPI_COMM_WORLD,ierr)
call MPI_TYPE_FREE(infotype_MPI,ierr)

dims = info%i(1:3) 
nx_global = info%i(4)
ny_global = info%i(5)
nz_global = info%i(6)
nts = info%i(7)
out = info%i(8)
pulse = info%i(9)
number_of_runs = info%i(10)
ds = info%i(11)
stride = info%i(12)
comtype = info%i(13)
PEC = info%i(14)
OBC = info%i(15)
OBJ = info%i(16)
POWER = info%i(17)
probe_number = info%i(18) 
if (probe_number > 0) then
  if (my_id /= master_id) then
    allocate( probe(probe_number*3) )
    probe = 0 
  end if
  probe = info%i(19:18+probe_number*3)
end if

dx = info%r(1)
dy = info%r(2)
dz = info%r(3)
k0 = info%r(4:6)
Epol = info%r(7:9)
X0 = info%r(10:12)
pl = info%r(13)
CFL = info%r(14)


!----------------------- Create a Cartesian topology --------------------------

! If px*py*pz=0, we let MPI help us find a suitable domain decomp.
if ((dims(1)*dims(2)*dims(3))==0) then
  call MPI_DIMS_CREATE(nnodes, ndims, dims, ierr)
  if (ierr/=0) then
    if (my_id==master_id) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Call MPI_DIMS_CREATE failed, px, py, pz = ',&
                 dims
#endif
      write(*,*) 'FATAL ERROR! Call to MPI_DIMS_CREATE failed, px, py, pz = ',&
                 dims
    end if
    call MPI_FINALIZE(ierr)
    stop
  end if
  DIMS_CREATE_called = .true.
  if (dims(3)<dims(1)) then
    itmp = dims(1)
    dims(1) = dims(3)
    dims(3) = itmp
    if (my_id==master_id) then
      write(*,*) 'Using MPI_DIMS_CREATE for domain decomp., px, py, pz = ',dims
      write(*,*) '(The original suggestion from MPI_DIMS_CREATE was altered'
      write(*,*) ' It was: px, py, pz = ',dims(3:1:-1), ')'
    end if
  elseif (my_id==master_id) then
    write(*,*) 'Using MPI_DIMS_CREATE for domain decomp., px, py, pz = ', dims
  end if
end if

if (mod(nx_global,dims(1))/=0) then
  if (my_id==master_id) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! nx is not a multiple of px: nx,px =' ,      &
               nx_global, dims(1)
#endif
    write(*,*) 'FATAL ERROR! nx is not a multiple of px: nx,px =' ,           &
               nx_global, dims(1)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
  end if
end if
if (mod(ny_global,dims(2))/=0) then
  if (my_id==master_id) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
    write(error_unit,*) 'FATAL ERROR! ny is not a multiple of py: ny,py =' ,  &
               ny_global, dims(2)
#endif
    write(*,*) 'FATAL ERROR! ny is not a multiple of py: ny,py =' ,           &
               ny_global, dims(2)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
  end if
end if
if (mod(nz_global,dims(3))/=0) then
  if (my_id==master_id) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! nz is not a multiple of pz: nz,pz =' ,      &
               nz_global, dims(3)
#endif
    write(*,*) 'FATAL ERROR! nz is not a multiple of pz: nz,pz =' ,           &
               nz_global, dims(3)
    CALL MPI_ABORT(MPI_COMM_WORLD, 1, ierr)
  end if
end if
nx = nx_global/dims(1)
ny = ny_global/dims(2)
nz = nz_global/dims(3)

! Some safety checks
!
! Warn for leading dimensions that are powers-of-two
if (MOD(nx+2,8)==0) then
  if (DIMS_CREATE_called) then
    !! Since we may already have adjusted n[xyz]_global, we might as well fix 
    !! this by increasing nx_local with 1, i.e. increase nx_global with dims(1)
    nx_global = nx_global + dims(1)
    nx = nx + 1
    if (my_id==master_id) then
      write(*,*) 'NOTE: Increasing nx_global to', nx_global 
      write(*,*) 'Leading dimension (nx_local+2) contained three powers of two'
    end if
  else
    if (my_id==master_id) then
      if (MOD(nx+2,16)==0) then
        write(*,*) 'WARNING: leading dim. contains at least four powers of two'
        write(*,*) 'This may cause a performance problem (low cache hit rate)'
      else
        write(*,*) 'NOTE: leading dimension contains three powers of two'
        write(*,*) 'On some architectures this may cause a performance problem'
      end if
      write(*,*) 'nx_local+2 = ', nx+2
    end if
  end if
end if

! Check that the Huygens' surface is in the first and last block in each dim.
if ((db >= min(nx,ny,nz)).and.(pulse>0)) then
  write(*,*) 'CRITICAL ERROR: Huygens surfaces need '
  write(*,*) 'db<min(nx_local,ny_local,nz_local), where db = ', db
  call MPI_FINALIZE(ierr)
  stop
end if

! Create the Cartesian topology
call MPI_CART_CREATE(MPI_COMM_WORLD,ndims,dims,                               &
                     periods,reorder,my_MPI_COMM_CART,ierr) 
included_Cart = my_MPI_COMM_CART/=MPI_COMM_NULL

if (included_Cart) then
  call MPI_COMM_SIZE(my_MPI_COMM_CART, nnodes, ierr)
end if
if ((reorder).and.(included_Cart)) then
  !! The nodes may have been renumbered if reorder is TRUE. This call
  !! should/can only be made by those nodes included in the Cart. grid.
  call MPI_COMM_RANK(my_MPI_COMM_CART, my_id, ierr)
end if

! Let the master know which nodes that were included in the Cartesian grid
! Those who were excluded will have my_MPI_COMM_CART==MPI_COMM_NULL
if (included_Cart) then
  call MPI_GATHER(my_MPI_COMM_CART,       1,MPI_INTEGER,                      &
                  my_MPI_COMM_CART_vector,1,MPI_INTEGER,                      &
                  master_id,my_MPI_COMM_CART,ierr)
end if

! Letting each node find its coordinates in the Cartesian grid
if (included_Cart) then
  call MPI_CART_COORDS(my_MPI_COMM_CART,my_id,ndims,coords,ierr)
else
  write(*,*) 'Node ', my_id, 'not included in the Cartesian grid'
end if

! Let the master write this information to standard out.
if (my_id==master_id) then
  write(*,*) 'A Cartesian topology has been created by MPI_CART_CREATE!'
  do rank=0,nnodes-1
    if (my_MPI_COMM_CART_vector(rank+1)/=MPI_COMM_NULL) then
      call MPI_CART_COORDS(my_MPI_COMM_CART,rank,ndims,temp_coords,ierr)
      write(*,*) 'Node', rank, 'has coordinates', temp_coords
    end if
  end do
end if

! Find the neighbors
if (included_Cart) then
  disp = 1 
  dir = 0
  call MPI_CART_SHIFT(my_MPI_COMM_CART,dir,disp,below_X,above_X,ierr)
!if (below_X/=MPI_PROC_NULL) then                                            
!  write(*,*) 'Node', my_id, 'has node ', below_X, 'below in x-dir.'
!end if
!if (above_X/=MPI_PROC_NULL) then                                            
!  write(*,*) 'Node', my_id, 'has node ', above_X, 'above in x-dir.'
!end if
  dir = 1
  call MPI_CART_SHIFT(my_MPI_COMM_CART,dir,disp,below_Y,above_Y,ierr)
!if (below_Y/=MPI_PROC_NULL) then                                            
!  write(*,*) 'Node', my_id, 'has node ', below_Y, 'below in y-dir.'
!end if
!if (above_Y/=MPI_PROC_NULL) then                                            
!  write(*,*) 'Node', my_id, 'has node ', above_Y, 'above in y-dir.'
!end if
  dir = 2
  call MPI_CART_SHIFT(my_MPI_COMM_CART,dir,disp,below_Z,above_Z,ierr)
!if (below_Z/=MPI_PROC_NULL) then                                            
!  write(*,*) 'Node', my_id, 'has node ', below_Z, 'below in z-dir.'
!end if
!if (above_Z/=MPI_PROC_NULL) then                                            
!  write(*,*) 'Node', my_id, 'has node ', above_Z, 'above in z-dir.'
!end if
end if

! Calculate message sizes
xsize = 2*ny*nz
ysize = 2*nx*nz
zsize = 2*nx*ny

if (my_id==master_id) then
  !! Test the resolution of the MPI clock.
  write(*,*) '-----------------------------------------------------'
  write(*,*) 'MPI_WTICK = ', MPI_WTICK()
end if

! Allocate buffer for BSEND. We allocate the same size on all nodes.
! It would be possible to use smaller buffer on nodes with fewer neighbors
! in the Cartesian grid.
if ((comtype==6).or.(comtype==10)) then
  CALL MPI_PACK_SIZE(xsize,my_MPI_FLOAT,my_MPI_COMM_CART,bsize_x,ierr)
  CALL MPI_PACK_SIZE(ysize,my_MPI_FLOAT,my_MPI_COMM_CART,bsize_y,ierr)
  CALL MPI_PACK_SIZE(zsize,my_MPI_FLOAT,my_MPI_COMM_CART,bsize_z,ierr)
  !! If dims(1)==1, no messages are sent in the x-dir. (No buffer space needed)
  !! If dims(1)==2, no node sends more than one message/time step in the x-dir.
  !! If dims(1)>2, at least one node sends two messages/time step in the x-dir.
  bsize = (bsize_x+MPI_BSEND_OVERHEAD)*min(2,dims(1)-1) +                     &
          (bsize_y+MPI_BSEND_OVERHEAD)*min(2,dims(2)-1) +                     &
          (bsize_z+MPI_BSEND_OVERHEAD)*min(2,dims(3)-1) 
  if (my_id==master_id) then
    write(*,*) 'communicate_init: bsize (on master) = ', bsize, ' bytes'
  end if
  if (bsize>0) then ! dims(1)=dims(2)=dims(3)=1 gives bsize=0
    allocate( buffer(1:bsize), STAT=allocstat )
    if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Allocation of buffer fail communicate_init'
#endif
      write(*,*) 'FATAL ERROR! Allocation of buffer failed in communicate_init'
      stop
    end if
    call MPI_BUFFER_ATTACH(buffer,bsize,ierr)
  end if
end if

! Create derived data types.
if (comtype==7) then
  call MPI_TYPE_EXTENT(my_MPI_FLOAT,extent,ierr) 
  if (my_id==master_id) then
    write(*,*) 'communicate_init: extent = ', extent
  end if

  if (dims(1)>1) then
    call MPI_TYPE_VECTOR(ny,1,(nx+2),my_MPI_FLOAT,oneD_slice,ierr)
    call MPI_TYPE_HVECTOR(nz,1,(nx+2)*(ny+2)*extent,oneD_slice,mesXdir,ierr)
    call MPI_TYPE_COMMIT(mesXdir,ierr) 
  end if

  if (dims(2)>1) then
    call MPI_TYPE_VECTOR(nx,1,1,my_MPI_FLOAT,oneD_slice,ierr)
    call MPI_TYPE_HVECTOR(nz,1,(nx+2)*(ny+2)*extent,oneD_slice,mesYdir,ierr)
    call MPI_TYPE_COMMIT(mesYdir,ierr) 
  end if

  if (dims(3)>1) then
    call MPI_TYPE_VECTOR(nx,1,1,my_MPI_FLOAT,oneD_slice,ierr)
    call MPI_TYPE_HVECTOR(ny,1,(nx+2)*extent,oneD_slice,mesZdir,ierr)
    call MPI_TYPE_COMMIT(mesZdir,ierr) 
  end if

end if

if ((comtype==10).or.(comtype==103)) then
  allocate( recX_H(ny,nz,2), recY_H(nx,nz,2), recZ_H(nx,ny,2), STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Alloc. of rec[XYZ]_H failed communicate_init'
#endif
    write(*,*) 'FATAL ERROR! Alloc. of rec[XYZ]_H failed in communicate_init'
    stop
  end if
  allocate( recX_E(ny,nz,2), recY_E(nx,nz,2), recZ_E(nx,ny,2), STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Alloc. of rec[XYZ]_E fail communicate_init'
#endif
    write(*,*) 'FATAL ERROR! Alloc. of rec[XYZ]_E failed in communicate_init'
    stop
  end if

  allocate( sendX_H(ny,nz,2),sendY_H(nx,nz,2),sendZ_H(nx,ny,2),STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Alloc. of send[XYZ]_H fail communicate_init'
#endif
    write(*,*) 'FATAL ERROR! Alloc. of send[XYZ]_H failed in communicate_init'
    stop
  end if
  allocate( sendX_E(ny,nz,2),sendY_E(nx,nz,2),sendZ_E(nx,ny,2),STAT=allocstat )
  if (allocstat/=0) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Alloc. of send[XYZ]_E fail communicate_init'
#endif
    write(*,*) 'FATAL ERROR! Alloc. of send[XYZ]_E failed in communicate_init'
    stop
  end if

  if (my_id==master_id) then
    write(*,*) 'Allocation of rec[XYZ]_[EH] and send[XYZ]_[EH] successful ',  &
               'on master! ', (nx*ny+nx*nz+ny*nz)*64, ' bytes used'
  end if

end if

! Initiate persistent communication
if (comtype==10) then

  !! x-direction 
  if (coords(1)/=dims(1)-1) then
    call MPI_BSEND_INIT(sendX_H,xsize,my_MPI_FLOAT,above_X,pers_upX_tag,      &
                        my_MPI_COMM_CART,req_vec_H(1),ierr)
    call MPI_RECV_INIT(recX_E,xsize,my_MPI_FLOAT,above_X,pers_downX_tag,      &
                       my_MPI_COMM_CART,req_vec_E(2),ierr)
  end if

  if (coords(1)/=0) then                                            
    call MPI_BSEND_INIT(sendX_E,xsize,my_MPI_FLOAT,below_X,pers_downX_tag,    &
                         my_MPI_COMM_CART,req_vec_E(1),ierr)
    call MPI_RECV_INIT(recX_H,xsize,my_MPI_FLOAT,below_X,pers_upX_tag,        &
                       my_MPI_COMM_CART,req_vec_H(2),ierr)             
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then                                  
    call MPI_BSEND_INIT(sendY_H,ysize,my_MPI_FLOAT,above_Y,pers_upY_tag,      &
                        my_MPI_COMM_CART,req_vec_H(3),ierr)
    call MPI_RECV_INIT(recY_E,ysize,my_MPI_FLOAT,above_Y,pers_downY_tag,      &
                       my_MPI_COMM_CART,req_vec_E(4),ierr)
  end if

  if (coords(2)/=0) then                                          
    call MPI_BSEND_INIT(sendY_E,ysize,my_MPI_FLOAT,below_Y,pers_downY_tag,    &
                        my_MPI_COMM_CART,req_vec_E(3),ierr)
    call MPI_RECV_INIT(recY_H,ysize,my_MPI_FLOAT,below_Y,pers_upY_tag,        &
                       my_MPI_COMM_CART,req_vec_H(4),ierr)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then                                  
    call MPI_BSEND_INIT(sendZ_H,zsize,my_MPI_FLOAT,above_Z,pers_upZ_tag,      &
                        my_MPI_COMM_CART,req_vec_H(5),ierr)
    call MPI_RECV_INIT(recZ_E,zsize,my_MPI_FLOAT,above_Z,pers_downZ_tag,      &
                       my_MPI_COMM_CART,req_vec_E(6),ierr)
  end if

  if (coords(3)/=0) then                                          
    call MPI_BSEND_INIT(sendZ_E,zsize,my_MPI_FLOAT,below_Z,pers_downZ_tag,    &
                        my_MPI_COMM_CART,req_vec_E(5),ierr)
    call MPI_RECV_INIT(recZ_H,zsize,my_MPI_FLOAT,below_Z,pers_upZ_tag,        &
                       my_MPI_COMM_CART,req_vec_H(6),ierr)
  end if

end if

END SUBROUTINE communicate_init
#endif 

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       com_clock - Wrapper to MPI_WTIME
!
! DESCRIPTION
!       Wrapper to MPI_WTIME. This routine has been introduced in order to
!       avoid having calls to MPI routines from leapfrog.
!
! METHOD 
!       1) Calls MPI_BARRIER to ensure that all nodes has reached this point
!       2) Starts the clock on the master by calling the function MPI_WTIME()
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#if !defined(SPEC) || defined(SPEC_MPI) || defined(INTERNAL_TIMING)
SUBROUTINE com_clock(tid)

USE globalvar_mod, ONLY : nnodes, my_id, my_MPI_COMM_CART
include 'mpif.h'

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

real(kind=dfp),intent(out) :: tid

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ierr

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! if nnodes==1, no Cartesian grid is defined => my_MPI_COMM_CART is undefined
if (nnodes>1) then
  !! Make sure that all nodes have reached this point before starting the clock
  call MPI_BARRIER(my_MPI_COMM_CART,ierr)
end if

if (my_id==master_id) then
  tid = MPI_WTIME()
end if

END SUBROUTINE com_clock
#endif

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       communicateH - MPI communication of magnetic fields
!
! DESCRIPTION
!       Communication of magnetic field components using MPI.
!       Magnetic field components are always sent upwards.
!
!       The magnetic field components Hy(nx,1:ny,1:nz) and Hz(nx,1:ny,1:nz) 
!       are sent upwards in the x-direction, i.e. they are sent 
!       from block (i,j,k) to block (i+1,j,k), 0<=1<px-1.
!
!       The magnetic field components Hx(1:nx,ny,1:nz) and Hz(1:nx,ny,1:nz)
!       are sent upwards in the y-direction, i.e. they are sent 
!       from block (i,j,k) to block (i,j+1,k), 0<=j<py-1.
!
!       The magnetic field components Hx(1:nx,1:ny,nz) and Hy(1:nx,1:ny,nz) 
!       are sent upwards in the z-direction, i.e. they are sent 
!       from block (i,j,k) to block (i,j,k+1), 0<=k<pz-1.
!
! SEE ALSO
!       communicateE
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#if !defined(SPEC) || defined(SPEC_MPI)
SUBROUTINE communicateH(nx,ny,nz,ts,Hx,Hy,Hz)

USE globalvar_mod, ONLY : my_id, my_MPI_FLOAT, dims, coords, my_MPI_COMM_CART
include 'mpif.h'

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

integer :: status(MPI_STATUS_SIZE), ierr, reqX, reqY, reqZ
integer, dimension(ndims) :: req_vec
integer, dimension(MPI_STATUS_SIZE,ndims):: status_vec_101
integer, dimension(MPI_STATUS_SIZE,2*ndims):: status_vec 
integer, parameter :: upX_tag = 2, Hx_tag = 4
integer, parameter :: upY_tag = 4, Hy_tag = 5
integer, parameter :: upZ_tag = 6, Hz_tag = 6
real(kind=rfp), dimension(ny,nz,2) :: sendX, recX
real(kind=rfp), dimension(nx,nz,2) :: sendY, recY
real(kind=rfp), dimension(nx,ny,2) :: sendZ, recZ

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

select case (comtype)
case(1) !======================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using original MPI_SSEND implementation'
  end if

  !! x-direction 
  if (coords(1)/=0) then                                            
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,below_X,upX_tag,my_MPI_COMM_CART,   &
                  status,ierr)             
    Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  if (coords(1)/=dims(1)-1) then
    sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  !! y-direction 
  if (coords(2)/=0) then                                          
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1)
    Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2)
  end if

  if (coords(2)/=dims(2)-1) then                                  
    sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
    sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  !! z-direction 
  if (coords(3)/=0) then                                          
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
    Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
  end if

  if (coords(3)/=dims(3)-1) then                                  
    sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
    sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

case(2) !======================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using improved MPI_SSEND implementation'
    write(*,*) '(MPI_SSEND is now called before MPI_RECV)'
  end if

  !! x-direction 
  if (coords(1)/=dims(1)-1) then
    sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  if (coords(1)/=0) then                                            
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,below_X,upX_tag,my_MPI_COMM_CART,   &
                  status,ierr)             
    Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then                                  
    sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
    sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  if (coords(2)/=0) then                                          
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1)
    Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then                                  
    sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
    sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  if (coords(3)/=0) then                                          
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
    Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
  end if

case(3) !======================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using red-black communication'
  end if

  !! x-direction 
  if (mod(coords(1),2)==1) then
    if (coords(1)/=dims(1)-1) then
      sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
      sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
      call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,                &
                     my_MPI_COMM_CART,ierr)
    end if

    if (coords(1)/=0) then                                            
      call MPI_RECV(recX,xsize,my_MPI_FLOAT,below_X,upX_tag,my_MPI_COMM_CART, &
                    status,ierr)             
      Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
      Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
    end if

  else
    if (coords(1)/=0) then                                            
      call MPI_RECV(recX,xsize,my_MPI_FLOAT,below_X,upX_tag,my_MPI_COMM_CART, &
                    status,ierr)             
      Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
      Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
    end if

    if (coords(1)/=dims(1)-1) then
      sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
      sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
      call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,                &
                     my_MPI_COMM_CART,ierr)
    end if
  end if

  !! y-direction 
  if (mod(coords(2),2)==1) then
    if (coords(2)/=dims(2)-1) then                                  
      sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
      sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
      call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,                &
                     my_MPI_COMM_CART,ierr)
    end if

    if (coords(2)/=0) then                                          
      call MPI_RECV(recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,my_MPI_COMM_CART, &
                    status,ierr)
      Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1)
      Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2)
    end if
  else
    if (coords(2)/=0) then                                          
      call MPI_RECV(recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,my_MPI_COMM_CART, &
                    status,ierr)
      Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1)
      Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2)
    end if
    if (coords(2)/=dims(2)-1) then                                  
      sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
      sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
      call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,                &
                     my_MPI_COMM_CART,ierr)
    end if
  end if

  !! z-direction 
  if (mod(coords(1),2)==1) then
    if (coords(3)/=dims(3)-1) then                                  
      sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
      sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
      call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,                &
                     my_MPI_COMM_CART,ierr)
    end if

    if (coords(3)/=0) then                                          
      call MPI_RECV(recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,my_MPI_COMM_CART, &
                    status,ierr)
      Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
      Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
    end if

  else
    if (coords(3)/=0) then
      call MPI_RECV(recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,my_MPI_COMM_CART, &
                    status,ierr)
      Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
      Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
    end if

    if (coords(3)/=dims(3)-1) then                                  
      sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
      sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
      call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,                &
                     my_MPI_COMM_CART,ierr)
    end if
  end if

case(4) !======================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using SENDRECV communication'
  end if

  !! x-direction 
  if (dims(1)>1) then
    if (coords(1)/=dims(1)-1) then
      sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
      sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    end if
    call MPI_SENDRECV(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,               &
                       recX,xsize,my_MPI_FLOAT,below_X,upX_tag,               &
                      my_MPI_COMM_CART,status,ierr)
    if (coords(1)/=0) then                                            
      Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
      Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
    end if
  end if

  !! y-direction 
  if (dims(2)>1) then
    if (coords(2)/=dims(2)-1) then
      sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
      sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    end if
    call MPI_SENDRECV(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,               &
                       recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,               &
                      my_MPI_COMM_CART,status,ierr)
    if (coords(2)/=0) then
      Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1) 
      Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2) 
    end if
  end if

  !! z-direction 
  if (dims(3)>1) then
    if (coords(3)/=dims(3)-1) then                                  
      sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
      sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    end if
    call MPI_SENDRECV(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,               &
                       recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,               &
                      my_MPI_COMM_CART,status,ierr)
    if (coords(3)/=0) then                                          
      Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
      Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
    end if

  end if

case(5) !======================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using ISEND communication'
    write(*,*) '(MPI_ISEND, MPI_RECV, MPI_WAIT)'
  end if

  !! x-direction 
  if (coords(1)/=dims(1)-1) then
    sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    call MPI_ISEND(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,my_MPI_COMM_CART, &
                   reqX,ierr)
  end if

  if (coords(1)/=0) then                                            
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,below_X,upX_tag,my_MPI_COMM_CART,   &
                  status,ierr)             
    Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  if (coords(1)/=dims(1)-1) then
    call MPI_WAIT(reqX,status,ierr)
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then                                  
    sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
    sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    call MPI_ISEND(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,my_MPI_COMM_CART, &
                   reqY,ierr)
  end if

  if (coords(2)/=0) then                                          
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1)
    Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2)
  end if

  if (coords(2)/=dims(2)-1) then
    call MPI_WAIT(reqY,status,ierr)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then                                  
    sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
    sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    call MPI_ISEND(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,my_MPI_COMM_CART, &
                   reqZ,ierr)
  end if

  if (coords(3)/=0) then                                          
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
    Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
  end if

  if (coords(3)/=dims(3)-1) then
    call MPI_WAIT(reqZ,status,ierr)
  end if

case(101) !====================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using ISEND communication'
    write(*,*) '(3(MPI_ISEND+MPI_RECV)+MPI_WAITALL)'
  end if

  req_vec = MPI_REQUEST_NULL

  !! x-direction 
  if (coords(1)/=dims(1)-1) then
    sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    call MPI_ISEND(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,my_MPI_COMM_CART, &
                   req_vec(1),ierr)
  end if

  if (coords(1)/=0) then                                            
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,below_X,upX_tag,my_MPI_COMM_CART,   &
                  status,ierr)             
    Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then                                  
    sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
    sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    call MPI_ISEND(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,my_MPI_COMM_CART, &
                   req_vec(2),ierr)
  end if

  if (coords(2)/=0) then                                          
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1)
    Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then                                  
    sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
    sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    call MPI_ISEND(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,my_MPI_COMM_CART, &
                   req_vec(3),ierr)
  end if

  if (coords(3)/=0) then                                          
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
    Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
  end if

  !! Wait for completion (it is OK to have inactive handles in req_vec)
  call MPI_WAITALL(ndims,req_vec,status_vec_101,ierr)

case(102) !====================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using ISEND communication'
    write(*,*) '(3(MPI_ISEND+MPI_IRECV)+MPI_WAITALL)'
  end if

  req_vec_H = MPI_REQUEST_NULL

  !! x-direction 
  if (coords(1)/=dims(1)-1) then
    sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    call MPI_ISEND(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,my_MPI_COMM_CART, &
                   req_vec_H(1),ierr)
  end if

  if (coords(1)/=0) then                                            
    call MPI_IRECV(recX,xsize,my_MPI_FLOAT,below_X,upX_tag,my_MPI_COMM_CART,  &
                   req_vec_H(4),ierr)             
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then                                  
    sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
    sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    call MPI_ISEND(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,my_MPI_COMM_CART, &
                   req_vec_H(2),ierr)
  end if

  if (coords(2)/=0) then                                          
    call MPI_IRECV(recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,my_MPI_COMM_CART,  &
                   req_vec_H(5),ierr)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then                                  
    sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
    sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    call MPI_ISEND(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,my_MPI_COMM_CART, &
                   req_vec_H(3),ierr)
  end if

  if (coords(3)/=0) then                                          
    call MPI_IRECV(recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,my_MPI_COMM_CART,  &
                   req_vec_H(6),ierr)
  end if

  !! Wait for completion (it is OK to have inactive handles in req_vec_H)
  call MPI_WAITALL(2*ndims,req_vec_H,status_vec,ierr)

  !! Copy the received messages into the magnetic field variables.
  if (coords(1)/=0) then                                            
    Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if
  if (coords(2)/=0) then                                          
    Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1)
    Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2)
  end if
  if (coords(3)/=0) then                                          
    Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
    Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
  end if

case(103) !====================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using ISEND communication'
    write(*,*) '(3(MPI_ISEND+MPI_IRECV)+delayed MPI_WAITALL)'
  end if

  if (ts==1) then
    H_finalize_called = .false.
    first_timestep = .true.   ! ts is not available in SUBROUTINE communicateE
    second_timestep = .false. ! Hence PRIVATE these LOGICAL module variables
  end if                      ! (first_timestep and second_timestep) 
  if (ts==2) then
    first_timestep = .false.
    second_timestep = .true.
  end if
  if (ts==3) then
    second_timestep = .false. 
  end if

  if ((ts==2).and.(.Not.H_finalize_called)) then
    if (my_id==master_id) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! call communicateH_finalize must be added'
#endif
      write(*,*) 'FATAL ERROR! A call to communicateH_finalize must be added'
    end if
    call MPI_FINALIZE(ierr)
    stop
  end if

  req_vec_H = MPI_REQUEST_NULL

  !! x-direction 
  if (coords(1)/=dims(1)-1) then
    sendX_H(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
    sendX_H(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    call MPI_ISEND(sendX_H,xsize,my_MPI_FLOAT,above_X,upX_tag,                &
                   my_MPI_COMM_CART,req_vec_H(1),ierr)
  end if

  if (coords(1)/=0) then                                            
    call MPI_IRECV(recX_H,xsize,my_MPI_FLOAT,below_X,upX_tag,                 &
                   my_MPI_COMM_CART,req_vec_H(4),ierr)             
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then                                  
    sendY_H(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
    sendY_H(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    call MPI_ISEND(sendY_H,ysize,my_MPI_FLOAT,above_Y,upY_tag,                &
                   my_MPI_COMM_CART,req_vec_H(2),ierr)
  end if

  if (coords(2)/=0) then                                          
    call MPI_IRECV(recY_H,ysize,my_MPI_FLOAT,below_Y,upY_tag,                 &
                   my_MPI_COMM_CART,req_vec_H(5),ierr)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then                                  
    sendZ_H(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
    sendZ_H(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    call MPI_ISEND(sendZ_H,zsize,my_MPI_FLOAT,above_Z,upZ_tag,                &
                   my_MPI_COMM_CART,req_vec_H(3),ierr)
  end if

  if (coords(3)/=0) then                                          
    call MPI_IRECV(recZ_H,zsize,my_MPI_FLOAT,below_Z,upZ_tag,                 &
                   my_MPI_COMM_CART,req_vec_H(6),ierr)
  end if

case(6) !======================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using BSEND communication'
    write(*,*) '(MPI_BSEND, MPI_RECV)'
  end if

  !! x-direction 
  if (coords(1)/=dims(1)-1) then
    sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    call MPI_BSEND(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  if (coords(1)/=0) then                                            
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,below_X,upX_tag,my_MPI_COMM_CART,   &
                  status,ierr)             
    Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then                                  
    sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
    sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    call MPI_BSEND(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  if (coords(2)/=0) then                                          
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1)
    Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then                                  
    sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
    sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    call MPI_BSEND(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  if (coords(3)/=0) then                                          
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,my_MPI_COMM_CART,   &
                  status,ierr)
    Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
    Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
  end if

case(7) !===================================================================== 
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using SENDRECV communication (with derived data types)'
  end if

  !! x-direction 
  if (dims(1)>1) then
    call MPI_SENDRECV(Hy(nx,1,1),1,mesXdir,above_X,Hy_tag,                    &
                      Hy( 0,1,1),1,mesXdir,below_X,Hy_tag,                    &
                      my_MPI_COMM_CART,status,ierr)              
    call MPI_SENDRECV(Hz(nx,1,1),1,mesXdir,above_X,Hz_tag,                    &
                      Hz( 0,1,1),1,mesXdir,below_X,Hz_tag,                    &
                      my_MPI_COMM_CART,status,ierr)              
  end if

  !! y-direction                                               
  if (dims(2)>1) then                                          
    call MPI_SENDRECV(Hx(1,ny,1),1,mesYdir,above_Y,Hx_tag,                    &
                      Hx(1, 0,1),1,mesYdir,below_Y,Hx_tag,                    &
                      my_MPI_COMM_CART,status,ierr)              
    call MPI_SENDRECV(Hz(1,ny,1),1,mesYdir,above_Y,Hz_tag,                    &
                      Hz(1, 0,1),1,mesYdir,below_Y,Hz_tag,                    &
                      my_MPI_COMM_CART,status,ierr)              
  end if

  !! z-direction                                               
  if (dims(3)>1) then                                          
    call MPI_SENDRECV(Hx(1,1,nz),1,mesZdir,above_Z,Hx_tag,                    &
                      Hx(1,1, 0),1,mesZdir,below_Z,Hx_tag,                    &
                      my_MPI_COMM_CART,status,ierr)              
    call MPI_SENDRECV(Hy(1,1,nz),1,mesZdir,above_Z,Hy_tag,                    &
                      Hy(1,1, 0),1,mesZdir,below_Z,Hy_tag,                    &
                      my_MPI_COMM_CART,status,ierr)
  end if

case(8) !======================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using IRECV communication'
    write(*,*) '(MPI_IRECV, MPI_SSEND, MPI_WAIT)'
  end if

  !! x-direction 
  if (coords(1)/=0) then                                            
    call MPI_IRECV(recX,xsize,my_MPI_FLOAT,below_X,upX_tag,my_MPI_COMM_CART,  &
                   reqX,ierr)             
  end if

  if (coords(1)/=dims(1)-1) then
    sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  if (coords(1)/=0) then
    call MPI_WAIT(reqX,status,ierr)
    Hy(0,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Hz(0,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  !! y-direction 
  if (coords(2)/=0) then                                          
    call MPI_IRECV(recY,ysize,my_MPI_FLOAT,below_Y,upY_tag,my_MPI_COMM_CART,  &
                   reqY,ierr)
  end if

  if (coords(2)/=dims(2)-1) then                                  
    sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
    sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  if (coords(2)/=0) then
    call MPI_WAIT(reqY,status,ierr)
    Hx(1:nx,0,1:nz) = recY(1:nx,1:nz,1)
    Hz(1:nx,0,1:nz) = recY(1:nx,1:nz,2)
  end if

  !! z-direction 
  if (coords(3)/=0) then                                          
    call MPI_IRECV(recZ,zsize,my_MPI_FLOAT,below_Z,upZ_tag,my_MPI_COMM_CART,  &
                   reqZ,ierr)
  end if

  if (coords(3)/=dims(3)-1) then                                  
    sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
    sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,my_MPI_COMM_CART, &
                   ierr)
  end if

  if (coords(3)/=0) then
    call MPI_WAIT(reqZ,status,ierr)
    Hx(1:nx,1:ny,0) = recZ(1:nx,1:ny,1)
    Hy(1:nx,1:ny,0) = recZ(1:nx,1:ny,2)
  end if

case(9) !======================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using SENDRECV_REPLACE communication'
  end if

  !! x-direction 
  if (dims(1)>1) then
    if (coords(1)/=dims(1)-1) then
      sendX(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
      sendX(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    end if
    call MPI_SENDRECV_REPLACE(sendX,xsize,my_MPI_FLOAT,above_X,upX_tag,       &
                              below_X,upX_tag,my_MPI_COMM_CART,status,ierr)
    if (coords(1)/=0) then                                            
      Hy(0,1:ny,1:nz) = sendX(1:ny,1:nz,1)
      Hz(0,1:ny,1:nz) = sendX(1:ny,1:nz,2)
    end if
  end if

  !! y-direction 
  if (dims(2)>1) then
    if (coords(2)/=dims(2)-1) then
      sendY(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
      sendY(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    end if
    call MPI_SENDRECV_REPLACE(sendY,ysize,my_MPI_FLOAT,above_Y,upY_tag,       &
                              below_Y,upY_tag,my_MPI_COMM_CART,status,ierr)
    if (coords(2)/=0) then
      Hx(1:nx,0,1:nz) = sendY(1:nx,1:nz,1) 
      Hz(1:nx,0,1:nz) = sendY(1:nx,1:nz,2) 
    end if
  end if

  !! z-direction 
  if (dims(3)>1) then
    if (coords(3)/=dims(3)-1) then                                  
      sendZ(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
      sendZ(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    end if
    call MPI_SENDRECV_REPLACE(sendZ,zsize,my_MPI_FLOAT,above_Z,upZ_tag,       &
                              below_Z,upZ_tag,my_MPI_COMM_CART,status,ierr)
    if (coords(3)/=0) then                                          
      Hx(1:nx,1:ny,0) = sendZ(1:nx,1:ny,1)
      Hy(1:nx,1:ny,0) = sendZ(1:nx,1:ny,2)
    end if

  end if

case(10) !=====================================================================
  if ((ts==1).and.(my_id==master_id)) then
    write(*,*) 'Using persistent BSEND communication'
    write(*,*) '(MPI_BSEND, MPI_RECV)'
  end if

  !! x-direction
  if (coords(1)/=dims(1)-1) then
    sendX_H(1:ny,1:nz,1) = Hy(nx,1:ny,1:nz)
    sendX_H(1:ny,1:nz,2) = Hz(nx,1:ny,1:nz)
    call MPI_START(req_vec_H(1),ierr)
  end if

  if (coords(1)/=0) then                                            
    call MPI_START(req_vec_H(2),ierr)
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then                                  
    sendY_H(1:nx,1:nz,1) = Hx(1:nx,ny,1:nz)
    sendY_H(1:nx,1:nz,2) = Hz(1:nx,ny,1:nz)
    call MPI_START(req_vec_H(3),ierr)
  end if

  if (coords(2)/=0) then                                          
    call MPI_START(req_vec_H(4),ierr)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then                                  
    sendZ_H(1:nx,1:ny,1) = Hx(1:nx,1:ny,nz)
    sendZ_H(1:nx,1:ny,2) = Hy(1:nx,1:ny,nz)
    call MPI_START(req_vec_H(5),ierr)
  end if

  if (coords(3)/=0) then                                          
    call MPI_START(req_vec_H(6),ierr)
  end if

  call MPI_WAITALL(2*ndims,req_vec_H,status,ierr)

  !! Copy the received messages into the magnetic field variables.
  if (coords(1)/=0) then                                            
    Hy(0,1:ny,1:nz) = recX_H(1:ny,1:nz,1)
    Hz(0,1:ny,1:nz) = recX_H(1:ny,1:nz,2)
  end if
  if (coords(2)/=0) then                                          
    Hx(1:nx,0,1:nz) = recY_H(1:nx,1:nz,1)
    Hz(1:nx,0,1:nz) = recY_H(1:nx,1:nz,2)
  end if
  if (coords(3)/=0) then                                          
    Hx(1:nx,1:ny,0) = recZ_H(1:nx,1:ny,1)
    Hy(1:nx,1:ny,0) = recZ_H(1:nx,1:ny,2)
  end if

!case(11) !====================================================================

case default
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Incorrect comtype number in communicateH!'
#endif
  write(*,*) 'FATAL ERROR! Incorrect comtype number in communicateH!'
  write(*,*) 'node = ', my_id
  write(*,*) 'comtype = ', comtype
  stop 

end select

END SUBROUTINE communicateH 
#endif

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       communicateE - MPI communication of electric fields
!
! DESCRIPTION
!       Communication of electric field components using MPI.
!       Electric field components are always sent downwards.
!
!       The electric field components Ey(1,1:ny,1:nz) and Ez(1,1:ny,1:nz) 
!       are sent downwards in the x-direction, i.e. they are sent 
!       from block (i,j,k) to block (i-1,j,k), 1<=i<px.
!
!       The electric field components Ex(1:nx,1,1:nz) and Ez(1:nx,1,1:nz) 
!       are sent downwards in the y-direction, i.e. they are sent 
!       from block (i,j,k) to block (i,j-1,k), 1<=j<py.
!
!       The electric field components Ex(1:nx,1:ny,1) and Ey(1:nx,1:ny,1) 
!       are sent downwards in the z-direction, i.e. they are sent 
!       from block (i,j,k) to block (i,j,k-1), 1<=k<pz.
!
! SEE ALSO
!       communicateH
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#if !defined(SPEC) || defined(SPEC_MPI)

SUBROUTINE communicateE(nx,ny,nz,Ex,Ey,Ez)

USE globalvar_mod, ONLY : my_id, my_MPI_FLOAT, dims, coords, my_MPI_COMM_CART
include 'mpif.h'

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer,        intent(in) :: nx, ny, nz
real(kind=rfp), intent(inout),                                                &
 dimension(Exsize(1):Exsize(2), Exsize(3):Exsize(4), Exsize(5):Exsize(6)) :: Ex
real(kind=rfp), intent(inout),                                                &
 dimension(Eysize(1):Eysize(2), Eysize(3):Eysize(4), Eysize(5):Eysize(6)) :: Ey
real(kind=rfp), intent(inout),                                                &
 dimension(Ezsize(1):Ezsize(2), Ezsize(3):Ezsize(4), Ezsize(5):Ezsize(6)) :: Ez

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: status(MPI_STATUS_SIZE), ierr, reqX, reqY, reqZ
integer, dimension(ndims) :: req_vec
integer, dimension(MPI_STATUS_SIZE,ndims):: status_vec_101
integer, dimension(MPI_STATUS_SIZE,2*ndims):: status_vec 
integer, parameter :: downX_tag = 1, Ex_tag = 1
integer, parameter :: downY_tag = 3, Ey_tag = 2
integer, parameter :: downZ_tag = 5, Ez_tag = 3
real(kind=rfp), dimension(ny,nz,2) :: sendX, recX
real(kind=rfp), dimension(nx,nz,2) :: sendY, recY
real(kind=rfp), dimension(nx,ny,2) :: sendZ, recZ

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

select case (comtype) 
case(1) !======================================================================
! Original MPI_SSEND            

  !! x-direction 
  if (coords(1)/=dims(1)-1) then
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,above_X,downX_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  if (coords(1)/=0) then
    sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
    Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
  end if

  if (coords(2)/=0) then
    sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
    sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
    Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
  end if

  if (coords(3)/=0) then
    sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
    sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

case(2) !======================================================================
! Improved MPI_SSEND   

  !! x-direction 
  if (coords(1)/=0) then
    sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  if (coords(1)/=dims(1)-1) then
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,above_X,downX_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  !! y-direction 
  if (coords(2)/=0) then
    sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
    sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  if (coords(2)/=dims(2)-1) then
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
    Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
  end if

  !! z-direction 
  if (coords(3)/=0) then
    sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
    sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  if (coords(3)/=dims(3)-1) then
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
    Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
  end if

case(3) !======================================================================
! red-black

  !! x-direction 
  if (mod(coords(1),2)==1) then
    if (coords(1)/=0) then
      sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
      sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
      call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,              &
                     my_MPI_COMM_CART,ierr)
    end if

    if (coords(1)/=dims(1)-1) then
      call MPI_RECV(recX,xsize,my_MPI_FLOAT,above_X,downX_tag,                &
                    my_MPI_COMM_CART,status,ierr)
      Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
      Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
    end if

  else
    if (coords(1)/=dims(1)-1) then
      call MPI_RECV(recX,xsize,my_MPI_FLOAT,above_X,downX_tag,                &
                    my_MPI_COMM_CART,status,ierr)
      Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
      Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
    end if

    if (coords(1)/=0) then
      sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
      sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
      call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,              &
                     my_MPI_COMM_CART,ierr)
    end if
  end if
  !! y-direction 
  if (mod(coords(2),2)==1) then
    if (coords(2)/=0) then
      sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
      sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
      call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,              &
                     my_MPI_COMM_CART,ierr)
    end if
    if (coords(2)/=dims(2)-1) then
      call MPI_RECV(recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,                &
                    my_MPI_COMM_CART,status,ierr)
      Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
      Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
    end if

  else
    if (coords(2)/=dims(2)-1) then
      call MPI_RECV(recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,                &
                    my_MPI_COMM_CART,status,ierr)
      Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
      Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
    end if
    if (coords(2)/=0) then
      sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
      sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
      call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,              &
                     my_MPI_COMM_CART,ierr)
    end if
  end if
  !! z-direction 
  if (mod(coords(3),2)==1) then
    if (coords(3)/=0) then
      sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
      sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
      call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,              &
                     my_MPI_COMM_CART,ierr)
    end if

    if (coords(3)/=dims(3)-1) then
      call MPI_RECV(recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,                &
                    my_MPI_COMM_CART,status,ierr)
      Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
      Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
    end if

  else
    if (coords(3)/=dims(3)-1) then
      call MPI_RECV(recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,                &
                    my_MPI_COMM_CART,status,ierr)
      Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
      Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
    end if

    if (coords(3)/=0) then
      sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
      sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
      call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,              &
                     my_MPI_COMM_CART,ierr)
    end if
  end if
 
case(4) !======================================================================
! SENDRECV

  !! x-direction 
  if (dims(1)>1) then
    if (coords(1)/=0) then
      sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
      sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    end if
    call MPI_SENDRECV(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,             &
                       recX,xsize,my_MPI_FLOAT,above_X,downX_tag,             &
                      my_MPI_COMM_CART,status,ierr)
    if (coords(1)/=dims(1)-1) then
      Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
      Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
    end if
  end if

  !! y-direction 
  if (dims(2)>1) then
    if (coords(2)/=0) then
      sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
      sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    end if
    call MPI_SENDRECV(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,             &
                       recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,             &
                      my_MPI_COMM_CART,status,ierr)
    if (coords(2)/=dims(2)-1) then
      Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
      Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
    end if
  end if

  !! z-direction 
  if (dims(3)>1) then
    if (coords(3)/=0) then
      sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
      sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    end if
    call MPI_SENDRECV(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,             &
                       recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,             &
                      my_MPI_COMM_CART,status,ierr)
    if (coords(3)/=dims(3)-1) then
      Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
      Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
    end if
  end if

case(5) !======================================================================
! ISEND (MPI_ISEND, MPI_RECV, MPI_WAIT)

  !! x-direction 
  if (coords(1)/=0) then
    sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    call MPI_ISEND(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,                &
                   my_MPI_COMM_CART,reqX,ierr)
  end if

  if (coords(1)/=dims(1)-1) then
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,above_X,downX_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  if (coords(1)/=0) then
    call MPI_WAIT(reqX,status,ierr)
  end if

  !! y-direction 
  if (coords(2)/=0) then
    sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
    sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    call MPI_ISEND(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,                &
                   my_MPI_COMM_CART,reqY,ierr)
  end if

  if (coords(2)/=dims(2)-1) then
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
    Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
  end if

  if (coords(2)/=0) then
    call MPI_WAIT(reqY,status,ierr)
  end if

  !! z-direction 
  if (coords(3)/=0) then
    sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
    sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    call MPI_ISEND(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,                &
                   my_MPI_COMM_CART,reqZ,ierr)
  end if

  if (coords(3)/=dims(3)-1) then
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
    Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
  end if

  if (coords(3)/=0) then
    call MPI_WAIT(reqZ,status,ierr)
  end if

case(101) !====================================================================
! ISEND (3(MPI_ISEND+MPI_RECV)+3MPI_WAIT)
  req_vec = MPI_REQUEST_NULL

  !! x-direction 
  if (coords(1)/=0) then
    sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    call MPI_ISEND(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,                &
                   my_MPI_COMM_CART,req_vec(1),ierr)
  end if

  if (coords(1)/=dims(1)-1) then
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,above_X,downX_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  !! y-direction 
  if (coords(2)/=0) then
    sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
    sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    call MPI_ISEND(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,                &
                   my_MPI_COMM_CART,req_vec(2),ierr)
  end if

  if (coords(2)/=dims(2)-1) then
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
    Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
  end if

  !! z-direction 
  if (coords(3)/=0) then
    sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
    sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    call MPI_ISEND(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,                &
                   my_MPI_COMM_CART,req_vec(3),ierr)
  end if

  if (coords(3)/=dims(3)-1) then
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
    Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
  end if

  !! Wait for completion (it is OK to have inactive handles in req_vec)
  call MPI_WAITALL(ndims,req_vec,status_vec_101,ierr)

case(102) !====================================================================
! ISEND (3(MPI_ISEND+MPI_IRECV)+MPI_WAITALL)

  req_vec_E = MPI_REQUEST_NULL

  !! x-direction 
  if (coords(1)/=0) then
    sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    call MPI_ISEND(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,                &
                   my_MPI_COMM_CART,req_vec_E(1),ierr)
  end if

  if (coords(1)/=dims(1)-1) then
    call MPI_IRECV(recX,xsize,my_MPI_FLOAT,above_X,downX_tag,my_MPI_COMM_CART,&
                   req_vec_E(4),ierr)
  end if

  !! y-direction 
  if (coords(2)/=0) then
    sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
    sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    call MPI_ISEND(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,                &
                   my_MPI_COMM_CART,req_vec_E(2),ierr)
  end if

  if (coords(2)/=dims(2)-1) then
    call MPI_IRECV(recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,my_MPI_COMM_CART,&
                   req_vec_E(5),ierr)
  end if

  !! z-direction 
  if (coords(3)/=0) then
    sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
    sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    call MPI_ISEND(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,                &
                   my_MPI_COMM_CART,req_vec_E(3),ierr)
  end if

  if (coords(3)/=dims(3)-1) then
    call MPI_IRECV(recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,my_MPI_COMM_CART,&
                   req_vec_E(6),ierr)
  end if

  !! Wait for completion (it is OK to have inactive handles in req_vec_E)
  call MPI_WAITALL(2*ndims,req_vec_E,status_vec,ierr)

  !! Copy the received messages into the electric field variables.
  if (coords(1)/=dims(1)-1) then
    Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if
  if (coords(2)/=dims(2)-1) then
    Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
    Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
  end if
  if (coords(3)/=dims(3)-1) then
    Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
    Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
  end if

case(103) !====================================================================
! ISEND (3(MPI_ISEND+MPI_IRECV)+delayed MPI_WAITALL)

  if (first_timestep) then
    E_finalize_called = .false.
  end if
  if (second_timestep.and.(.Not.E_finalize_called)) then
    if (my_id==master_id) then
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! call to communicateE_finalize must be added'
#endif
      write(*,*) 'FATAL ERROR! A call to communicateE_finalize must be added'
    end if
    call MPI_FINALIZE(ierr)
    stop
  end if

  req_vec_E = MPI_REQUEST_NULL

  !! x-direction 
  if (coords(1)/=0) then
    sendX_H(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
    sendX_H(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    call MPI_ISEND(sendX_H,xsize,my_MPI_FLOAT,below_X,downX_tag,              &
                   my_MPI_COMM_CART,req_vec_E(1),ierr)
  end if

  if (coords(1)/=dims(1)-1) then
    call MPI_IRECV(recX_E,xsize,my_MPI_FLOAT,above_X,downX_tag,               &
                   my_MPI_COMM_CART,req_vec_E(4),ierr)
  end if

  !! y-direction 
  if (coords(2)/=0) then
    sendY_H(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
    sendY_H(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    call MPI_ISEND(sendY_H,ysize,my_MPI_FLOAT,below_Y,downY_tag,              &
                   my_MPI_COMM_CART,req_vec_E(2),ierr)
  end if

  if (coords(2)/=dims(2)-1) then
    call MPI_IRECV(recY_E,ysize,my_MPI_FLOAT,above_Y,downY_tag,               &
                   my_MPI_COMM_CART,req_vec_E(5),ierr)
  end if

  !! z-direction 
  if (coords(3)/=0) then
    sendZ_H(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
    sendZ_H(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    call MPI_ISEND(sendZ_H,zsize,my_MPI_FLOAT,below_Z,downZ_tag,              &
                   my_MPI_COMM_CART,req_vec_E(3),ierr)
  end if

  if (coords(3)/=dims(3)-1) then
    call MPI_IRECV(recZ_E,zsize,my_MPI_FLOAT,above_Z,downZ_tag,               &
                   my_MPI_COMM_CART,req_vec_E(6),ierr)
  end if

case(6) !======================================================================
! BSEND (MPI_BSEND, MPI_RECV)

  !! x-direction 
  if (coords(1)/=0) then
    sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    call MPI_BSEND(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  if (coords(1)/=dims(1)-1) then
    call MPI_RECV(recX,xsize,my_MPI_FLOAT,above_X,downX_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  !! y-direction 
  if (coords(2)/=0) then
    sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
    sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    call MPI_BSEND(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  if (coords(2)/=dims(2)-1) then
    call MPI_RECV(recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
    Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
  end if

  !! z-direction 
  if (coords(3)/=0) then
    sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
    sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    call MPI_BSEND(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  if (coords(3)/=dims(3)-1) then
    call MPI_RECV(recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,my_MPI_COMM_CART, &
                  status,ierr)
    Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
    Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
  end if

case(7) !======================================================================
! SENDRECV (using HVEC)

  !! x-direction 
  if (dims(1)>1) then
    call MPI_SENDRECV(Ey(  1 ,1,1),1,mesXdir,below_X,Ex_tag,                  &
                      Ey(nx+1,1,1),1,mesXdir,above_X,Ex_tag,                  &
                      my_MPI_COMM_CART,status,ierr)
    call MPI_SENDRECV(Ez(  1 ,1,1),1,mesXdir,below_X,Ey_tag,                  &
                      Ez(nx+1,1,1),1,mesXdir,above_X,Ey_tag,                  &
                      my_MPI_COMM_CART,status,ierr)
  end if

  !! y-direction 
  if (dims(2)>1) then
    call MPI_SENDRECV(Ex(1,  1 ,1),1,mesYdir,below_Y,Ex_tag,                  &
                      Ex(1,ny+1,1),1,mesYdir,above_Y,Ex_tag,                  &
                      my_MPI_COMM_CART,status,ierr)
    call MPI_SENDRECV(Ez(1,  1 ,1),1,mesYdir,below_Y,Ez_tag,                  &
                      Ez(1,ny+1,1),1,mesYdir,above_Y,Ez_tag,                  &
                      my_MPI_COMM_CART,status,ierr)
  end if

  !! z-direction 
  if (dims(3)>1) then
    call MPI_SENDRECV(Ex(1,1,  1 ),1,mesZdir,below_Z,Ex_tag,                  &
                      Ex(1,1,nz+1),1,mesZdir,above_Z,Ex_tag,                  &
                      my_MPI_COMM_CART,status,ierr)
    call MPI_SENDRECV(Ey(1,1,  1 ),1,mesZdir,below_Z,Ey_tag,                  &
                      Ey(1,1,nz+1),1,mesZdir,above_Z,Ey_tag,                  &
                      my_MPI_COMM_CART,status,ierr)
  end if

case(8) !======================================================================
! IRECV (MPI_IRECV, MPI_SSEND, MPI_WAIT)

  !! x-direction 
  if (coords(1)/=dims(1)-1) then
    call MPI_IRECV(recX,xsize,my_MPI_FLOAT,above_X,downX_tag,my_MPI_COMM_CART,&
                   reqX,ierr)
  end if

  if (coords(1)/=0) then
    sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
    sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    call MPI_SSEND(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  if (coords(1)/=dims(1)-1) then
    call MPI_WAIT(reqX,status,ierr)
    Ey(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,1)
    Ez(nx+1,1:ny,1:nz) = recX(1:ny,1:nz,2)
  end if

  !! y-direction 
  if (coords(2)/=dims(2)-1) then
    call MPI_IRECV(recY,ysize,my_MPI_FLOAT,above_Y,downY_tag,my_MPI_COMM_CART,&
                   reqY,ierr)
  end if

  if (coords(2)/=0) then
    sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
    sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    call MPI_SSEND(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  if (coords(2)/=dims(2)-1) then
    call MPI_WAIT(reqY,status,ierr)
    Ex(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,1)
    Ez(1:nx,ny+1,1:nz) = recY(1:nx,1:nz,2)
  end if

  !! z-direction 
  if (coords(3)/=dims(3)-1) then
    call MPI_IRECV(recZ,zsize,my_MPI_FLOAT,above_Z,downZ_tag,my_MPI_COMM_CART,&
                   reqZ,ierr)
  end if

  if (coords(3)/=0) then
    sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
    sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    call MPI_SSEND(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,                &
                   my_MPI_COMM_CART,ierr)
  end if

  if (coords(3)/=dims(3)-1) then
    call MPI_WAIT(reqZ,status,ierr)
    Ex(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,1)
    Ey(1:nx,1:ny,nz+1) = recZ(1:nx,1:ny,2)
  end if

case(9) !======================================================================
! SENDRECV_REPLACE

  !! x-direction 
  if (dims(1)>1) then
    if (coords(1)/=0) then
      sendX(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
      sendX(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    end if
    call MPI_SENDRECV_REPLACE(sendX,xsize,my_MPI_FLOAT,below_X,downX_tag,     &
                              above_X,downX_tag,my_MPI_COMM_CART,status,ierr)
    if (coords(1)/=dims(1)-1) then
      Ey(nx+1,1:ny,1:nz) = sendX(1:ny,1:nz,1)
      Ez(nx+1,1:ny,1:nz) = sendX(1:ny,1:nz,2)
    end if
  end if

  !! y-direction 
  if (dims(2)>1) then
    if (coords(2)/=0) then
      sendY(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
      sendY(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    end if
    call MPI_SENDRECV_REPLACE(sendY,ysize,my_MPI_FLOAT,below_Y,downY_tag,     &
                              above_Y,downY_tag,my_MPI_COMM_CART,status,ierr)
    if (coords(2)/=dims(2)-1) then
      Ex(1:nx,ny+1,1:nz) = sendY(1:nx,1:nz,1)
      Ez(1:nx,ny+1,1:nz) = sendY(1:nx,1:nz,2)
    end if
  end if

  !! z-direction 
  if (dims(3)>1) then
    if (coords(3)/=0) then
      sendZ(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
      sendZ(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    end if
    call MPI_SENDRECV_REPLACE(sendZ,zsize,my_MPI_FLOAT,below_Z,downZ_tag,     &
                              above_Z,downZ_tag,my_MPI_COMM_CART,status,ierr)
    if (coords(3)/=dims(3)-1) then
      Ex(1:nx,1:ny,nz+1) = sendZ(1:nx,1:ny,1)
      Ey(1:nx,1:ny,nz+1) = sendZ(1:nx,1:ny,2)
    end if
  end if

case(10) !=====================================================================
! persistent BSEND (MPI_BSEND, MPI_RECV)

  !! x-direction 
  if (coords(1)/=0) then
    sendX_E(1:ny,1:nz,1) = Ey(1,1:ny,1:nz)
    sendX_E(1:ny,1:nz,2) = Ez(1,1:ny,1:nz)
    call MPI_START(req_vec_E(1),ierr)
  end if

  if (coords(1)/=dims(1)-1) then
    call MPI_START(req_vec_E(2),ierr)
  end if

  !! y-direction 
  if (coords(2)/=0) then
    sendY_E(1:nx,1:nz,1) = Ex(1:nx,1,1:nz)
    sendY_E(1:nx,1:nz,2) = Ez(1:nx,1,1:nz)
    call MPI_START(req_vec_E(3),ierr)
  end if

  if (coords(2)/=dims(2)-1) then
    call MPI_START(req_vec_E(4),ierr)
  end if

  !! z-direction 
  if (coords(3)/=0) then
    sendZ_E(1:nx,1:ny,1) = Ex(1:nx,1:ny,1)
    sendZ_E(1:nx,1:ny,2) = Ey(1:nx,1:ny,1)
    call MPI_START(req_vec_E(5),ierr)
  end if

  if (coords(3)/=dims(3)-1) then
    call MPI_START(req_vec_E(6),ierr)
  end if

  call MPI_WAITALL(2*ndims,req_vec_E,status,ierr)

  !! Copy the received messages into the electric field variables.
  if (coords(1)/=dims(1)-1) then
    Ey(nx+1,1:ny,1:nz) = recX_E(1:ny,1:nz,1)
    Ez(nx+1,1:ny,1:nz) = recX_E(1:ny,1:nz,2)
  end if
  if (coords(2)/=dims(2)-1) then
    Ex(1:nx,ny+1,1:nz) = recY_E(1:nx,1:nz,1)
    Ez(1:nx,ny+1,1:nz) = recY_E(1:nx,1:nz,2)
  end if
  if (coords(3)/=dims(3)-1) then
    Ex(1:nx,1:ny,nz+1) = recZ_E(1:nx,1:ny,1)
    Ey(1:nx,1:ny,nz+1) = recZ_E(1:nx,1:ny,2)
  end if

!case(11) !====================================================================

case default
#if (defined SPEC &&  ! defined SPEC_NO_ISO_FORTRAN_ENV)
write(error_unit,*) 'FATAL ERROR! Incorrect comtype number in communicateE!'
#endif
  write(*,*) 'FATAL ERROR! Incorrect comtype number in communicateE!'
  write(*,*) 'node = ', my_id
  write(*,*) 'comtype = ', comtype
  stop 

end select

END SUBROUTINE communicateE

#endif

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       communicate_end - Deallocate buffers and finalizes MPI
!
! DESCRIPTION
!       If comtype==6, we detach and deallocate buffer
!       If comtype==7, we FREE derived data types
!       Finalizes MPI
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE communicate_end()

USE globalvar_mod, ONLY : dims, my_id
#if !defined(SPEC) || defined(SPEC_MPI)
include 'mpif.h'
#endif

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

integer :: ierr, deallocstat

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

! Deallocate buffer for BSEND
if (((comtype==6).or.(comtype==10)).and.(dims(1)*dims(2)*dims(3)>1)) then
  call MPI_BUFFER_DETACH(buffer,bsize,ierr)
  deallocate( buffer, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Deallocation of buffer failed in communicate_end'
  end if
end if

if (comtype==7) then
  if (dims(1)>1) then
    call MPI_TYPE_FREE(mesXdir,ierr)
  end if
  if (dims(2)>1) then
    call MPI_TYPE_FREE(mesYdir,ierr)
  end if
  if (dims(3)>1) then
    call MPI_TYPE_FREE(mesZdir,ierr)
  end if
end if

if ((comtype==10).or.(comtype==103)) then
  deallocate( recX_H, recY_H, recZ_H, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Dealloc. of rec[XYZ]_H failed in communicate_end'
  end if
  deallocate( recX_E, recY_E, recZ_E, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Dealloc. of rec[XYZ]_E failed in communicate_end'
  end if

  deallocate( sendX_H, sendY_H, sendZ_H, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Dealloc. of send[XYZ]_H failed in communicate_end'
  end if
  deallocate( sendX_E, sendY_E, sendZ_E, STAT=deallocstat )
  if (deallocstat/=0) then
    write(*,*) 'Warning! Dealloc. of send[XYZ]_E failed in communicate_end'
  end if
end if

call MPI_FINALIZE(ierr)

END SUBROUTINE communicate_end

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       communicateE_finalize - makes sure that non-blocking com. is completed
!
! DESCRIPTION
!       This routine is only active if comtype=103
!         1) Makes sure that all pending communication of E fields is finalized
!         2) Compensates values that where incorrectly calculated in updateH
!           due to absence of correct ghost values.
!      
!       There is no need to store the ghost values. They are not needed.
!       This means that the ghost cells always contains the value 0.
!
!       The PRIVATE LOGICAL module variable E_finalize_called is used as a 
!       safety check to ensure that this routine is called when comtype=103.
!
! SYNOPSIS
!       if (nnodes/=1) then
!         call  communicateE(nx,ny,nz,Ex,Ey,Ez)
!       end if
!       <New time step>
!       call updateH(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
!       if ((nnodes/=1).and.(ts>1)) then
!         call communicateE_finalize(nx,ny,nz,Ex,Ey,Ez,Hx,Hy,Hz)
!       end if
!
!       DO NOT call communicateE_finalize after final time step.
!
! SEE ALSO
!       communicateE and updateH
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#if !defined(SPEC) || defined(SPEC_MPI)

SUBROUTINE communicateE_finalize(nx,ny,nz,Ex,Ey,Ez,Hx,Hy,Hz)

USE globalvar_mod, ONLY : dims, coords, dtdmu, dxinv, dyinv, dzinv
include 'mpif.h'

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer,        intent(in) :: nx, ny, nz

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

integer, dimension(MPI_STATUS_SIZE,2*ndims):: status_vec 
integer :: ierr
real(kind=rfp) :: Cbdx, Cbdy, Cbdz

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if (comtype==103) then
  E_finalize_called =.true.
  !! Wait for completion (it is OK to have inactive handles in req_vec_E)
  call MPI_WAITALL(2*ndims,req_vec_E,status_vec,ierr)

  if (coords(1)/=dims(1)-1) then
    Cbdx = dtdmu*dxinv
    !! Compensate
    Hy(nx,1:ny,1:nz) = Hy(nx,1:ny,1:nz) + recX_E(1:ny,1:nz,2)*Cbdx 
    Hz(nx,1:ny,1:nz) = Hz(nx,1:ny,1:nz) - recX_E(1:ny,1:nz,1)*Cbdx
  end if

  if (coords(2)/=dims(2)-1) then
    Cbdy = dtdmu*dyinv
    !! Compensate
    Hx(1:nx,ny,1:nz) = Hx(1:nx,ny,1:nz) - recY_E(1:nx,1:nz,2)*Cbdy
    Hz(1:nx,ny,1:nz) = Hz(1:nx,ny,1:nz) + recY_E(1:nx,1:nz,1)*Cbdy
  end if

  if (coords(3)/=dims(3)-1) then
    Cbdz = dtdmu*dzinv
    !! Compensate
    Hx(1:nx,1:ny,nz) = Hx(1:nx,1:ny  ,nz) + recZ_E(1:nx,1:ny,2)*Cbdz
    Hy(1:nx,1:ny,nz) = Hy(1:nx,1:ny,nz  ) - recZ_E(1:nx,1:ny,1)*Cbdz
  end if
end if

END SUBROUTINE communicateE_finalize

#endif

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       communicateH_finalize - makes sure that non-blocking com. is completed
!
! DESCRIPTION
!       This routine is only active if comtype=103
!         1) Makes sure that all pending communication of H fields is finalized
!         2) Compensates values that where incorrectly calculated in updateE
!           due to absence of correct ghost values.
!      
!       There is no need to store the ghost values. They are not needed.
!       This means that the ghost cells always contains the value 0.
!
!       The PRIVATE LOGICAL module variable H_finalize_called is used as a 
!       safety check to ensure that this routine is called when comtype=103.
!
! SYNOPSIS
!       if (nnodes/=1) then
!         call communicateH(nx,ny,nz,ts,Hx,Hy,Hz)
!       end if
!       call Mur_storeE(nx,ny,nz,Ex,Ey,Ez)
!       call updateE(nx,ny,nz,Hx,Hy,Hz,Ex,Ey,Ez)
!       if (nnodes/=1) then
!         call communicateH_finalize(nx,ny,nz,Ex,Ey,Ez,Hx,Hy,Hz)
!       end if
!
! SEE ALSO
!       communicateH and updateE
!
! HISTORY
!       Written by Ulf Andersson
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#if !defined(SPEC) || defined(SPEC_MPI)

SUBROUTINE communicateH_finalize(nx,ny,nz,Ex,Ey,Ez,Hx,Hy,Hz)

USE globalvar_mod, ONLY : dims, coords, imin, jmin, kmin, dtdeps,             &
                          dxinv, dyinv, dzinv
include 'mpif.h'

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer,        intent(in) :: nx, ny, nz

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

integer, dimension(MPI_STATUS_SIZE,2*ndims):: status_vec 
integer :: ierr
real(kind=rfp) :: Dbdx, Dbdy, Dbdz

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if (comtype==103) then
  H_finalize_called =.true.

  !! Wait for completion (it is OK to have inactive handles in req_vec_H)
  call MPI_WAITALL(2*ndims,req_vec_H,status_vec,ierr)

  if (coords(1)/=0) then
    Dbdx = dtdeps*dxinv
    !! Compensate
    Ey(1,1:ny,kmin:nz) = Ey(1,1:ny,kmin:nz) + recX_H(1:ny,kmin:nz,2)*Dbdx
    Ez(1,jmin:ny,1:nz) = Ez(1,jmin:ny,1:nz) - recX_H(jmin:ny,1:nz,1)*Dbdx  
  end if

  if (coords(2)/=0) then                                          
    Dbdy = dtdeps*dyinv
    !! Compensate
    Ex(1:nx,1,kmin:nz) = Ex(1:nx,1,kmin:nz) - recY_H(1:nx,kmin:nz,2)*Dbdy 
    Ez(imin:nx,1,1:nz) = Ez(imin:nx,1,1:nz) + recY_H(imin:nx,1:nz,1)*Dbdy  
  end if

  if (coords(3)/=0) then                                          
    Dbdz = dtdeps*dzinv
    !! Compensate
    Ex(1:nx,jmin:ny,1) = Ex(1:nx,jmin:ny,1) + recZ_H(1:nx,jmin:ny,2)*Dbdz  
    Ey(imin:nx,1:ny,1) = Ey(imin:nx,1:ny,1) - recZ_H(imin:nx,1:ny,1)*Dbdz
  end if

end if

END SUBROUTINE communicateH_finalize
#endif

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE communicate_mod
