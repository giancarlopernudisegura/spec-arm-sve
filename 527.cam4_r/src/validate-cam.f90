program main

   !----------------------------------------------------------------------------------------------
   ! Compute the RMS difference of the temperature (T) field from two files which are
   ! assumed to be in the working directory:
   !
   ! 1. h0.nc      -- The file resulting from a SPEC benchmark run.
   ! 2. h0_ctrl.nc -- The file from a control run done at no optimization
   !
   ! The benchmark is set up to do a run of CESM1_0_2 using the cam4 physics package
   ! in aquaplanet mode on a 1.9x2.5 FV grid.
   !
   ! The results of the maximum RMS difference is hardcoded in the rms_diff_max array.
   ! The validation is considered successful if the rms_diff_max is not exceeded by a
   ! factor of 2.0 at any timestep.  This program reports a PASS or FAIL status to
   ! stdout.
   !
   ! The only external required by this program is a NetCDF library.
   !----------------------------------------------------------------------------------------------

   use netcdf

   implicit none

   integer, parameter :: r8 = selected_real_kind(12)

   ! files containing T field
   character(len=1024) :: fname_bench  = 'h0.nc'
   character(len=1024) :: fname_ctrl   = 'h0_ctrl.nc'

   integer, parameter :: nlon = 144  ! number of longitudes in grid
   integer, parameter :: nlat =  96  ! number of latitudes in grid
   integer, parameter :: nlev =  26  ! number of levels in grid
   integer, parameter :: ntim =  97  ! number of time samples in control file

   real(r8) :: t1(nlon,nlat,nlev)  ! temperature field from 1st file
   real(r8) :: t2(nlon,nlat,nlev)  ! temperature field from 2nd file

   integer :: ncid1, ncid2  ! netcdf file handles
   integer :: did           ! netcdf dimension id
   integer :: vid1, vid2    ! netcdf variable ids
   integer :: ntim_bench    ! number of time samples in benchmark file
   integer :: nt
   integer :: status
   integer :: npts,i,j,k
   real(r8) :: rms_diff, rms_diff_ratio, rms_diff_ratio_max
   real(r8) :: tolerance
   integer  :: maxfail, numargs
   character(80) :: arg
   !----------------------------------------------------------------------------
   numargs = command_argument_count()
   if (numargs .ne. 4) then
      print *, "Usage: cam4_validate <maxf> <reltol> ctrl bench"
      print *, "       maxf: Maxium of failures to print"
      print *, "     reltol: Allowable Relative tolerance"
      print *, "       ctrl: Expected results (provided by SPEC)"
      print *, "      bench: Results from a benchmark run"
      stop
   endif
   call get_command_argument(1,arg)
   read(arg,'(I11)') maxfail
   call get_command_argument(2,arg)
   read(arg,'(f15.6)') tolerance
   call get_command_argument(3,fname_ctrl)
   call get_command_argument(4,fname_bench)

   ! open the benchmark file
   status = nf90_open(fname_bench, nf90_nowrite, ncid1)
   if (status /= nf90_noerr) call handle_err(status)

   ! open the control file
   status = nf90_open(fname_ctrl, nf90_nowrite, ncid2)
   if (status /= nf90_noerr) call handle_err(status)

   ! Get the number of time samples from the benchmark file
   status = nf90_inquire(ncid1, unlimitedDimId=did)
   if(status /= nf90_NoErr) call handle_err(status)
   status = nf90_inquire_dimension(ncid1, did, len=ntim_bench)
   if(status /= nf90_NoErr) call handle_err(status)

   ! get variable ids for temperature fields
   status = nf90_inq_varid(ncid1, "T", vid1)
   if(status /= nf90_NoErr) call handle_err(status)
   status = nf90_inq_varid(ncid2, "T", vid2)
   if(status /= nf90_NoErr) call handle_err(status)
   
   ! keep track of number of points that exceed the max rms diff
   npts = 0
   ! keep track of max ratio for points exceeding the max rms diff
   rms_diff_ratio_max = 0.0
   ! loop over time samples in benchmark file
   do nt = 1, ntim_bench

      ! extract 3D fields
      status = nf90_get_var(ncid1, vid1, t1, start=(/1,1,1,nt/), count=(/nlon,nlat,nlev,1/) )
      if(status /= nf90_NoErr) call handle_err(status)
      status = nf90_get_var(ncid2, vid2, t2, start=(/1,1,1,nt/), count=(/nlon,nlat,nlev,1/) )
      if(status /= nf90_NoErr) call handle_err(status)
      rms_diff_ratio = 0.0    
      do i=1,nlon
        do j=1,nlat
          do k=1,nlev
            rms_diff = abs(t1(i,j,k)-t2(i,j,k))
            if (t2(i,j,k).ne.0.0) then
               rms_diff = rms_diff/t2(i,j,k)
               rms_diff_ratio_max = max(rms_diff_ratio_max,rms_diff)
            else
               rms_diff=1.0
            endif
            if (rms_diff > tolerance) then
               npts = npts + 1
               if (npts .le. maxfail) then
                  print *, "Failure at Step: ", nt, i, j, k
                  print *, "         Actual: ", t1(i,j,k)  
                  print *, "       Expected: ", t2(i,j,k)  
                  print *, "         Reltol: ", rms_diff
               else if (npts .eq. 11) then
                  print *, "Max failures reached. No more will be printed."
               endif 
            endif
          enddo
        enddo
      enddo 
   enddo

   ! print test results
   if (npts == 0) then
      print *, 'PASS: ', ntim_bench, ' points. '
   else
      print *, 'FAIL at ',npts,' points.  Max ratio =', rms_diff_ratio_max
   end if

   ! close files
   status = nf90_close(ncid1)
   if (status /= nf90_noerr) call handle_err(status)
   status = nf90_close(ncid2)
   if (status /= nf90_noerr) call handle_err(status)

!-------------------------------------------------------------------------------
contains
!-------------------------------------------------------------------------------

subroutine handle_err(status)
   integer, intent (in) :: status
   
   if(status /= nf90_noerr) then
      print *, trim(nf90_strerror(status))
      stop "Stopped"
   end if
end subroutine handle_err

end program main
