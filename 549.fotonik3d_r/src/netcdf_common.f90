!+
! NAME
!       netcdf_common_mod - Misc. netCDF routines
!
! DESCRIPTION
!       Routines used in handling netCDF files
!
! PUBLIC
!       SUBROUTINE netcdf_check_error
!       FUNCTION netcdf_init_header
!       integer :: netcdf_type
!
! HISTORY
!       Written by
!       Imported from GemsTD_ESB by Ulf Andersson 2004-11-12
!
!!!!!!!!!!!!!!!!!!!!!!!! SPEC !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
! Note that this file is not needed for SPEC CPU, but is included in case
! it comes in useful during analysis
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

MODULE netcdf_common_mod

USE parameter_mod

IMPLICIT NONE

PUBLIC netcdf_check_error
PUBLIC netcdf_init_header

! netCDF type corresponding to kind
integer, PUBLIC :: netcdf_type

CONTAINS

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       netcdf_check_error - Error handling for netCDF routines
!
! DESCRIPTION
!       Error handling for netCDF routines, status is the return value from a
!       netCDF library call.
!
! ERRORS
!       No error handling 
!
! HISTORY
!       Written by Erik Engquist
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

SUBROUTINE netcdf_check_error(status)

USE netcdf, ONLY : nf90_strerror, nf90_noerr

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

integer, intent(in) :: status

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if (status /= nf90_noerr) then
  write(*,*) trim(nf90_strerror(status))
  stop 'netCDF Error'
end if

END SUBROUTINE netcdf_check_error

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!+
! NAME
!       netcdf_init_header - Function that creates a new netCDF file 
!
! DESCRIPTION
!       Creates a new netCDF file with the given filename and title, along
!       with the default global attributes. Also sets the netcdf_type
!       variable. Returns the file id for the new file.
!
! ERRORS
!       Uses the errorcheck module and netCDF error handling
!
! HISTORY
!       Written by Erik Engquist
!-
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

FUNCTION netcdf_init_header(filename, title)

USE netcdf, ONLY : nf90_create, nf90_clobber, nf90_put_att, nf90_real,        &
                   nf90_double, nf90_global

!------------------------------------------------------------------------------
!                     A r g u m e n t s             
!------------------------------------------------------------------------------

character(len=*), intent(in) :: filename
character(len=*), intent(in) :: title

!------------------------------------------------------------------------------
!                     R e t u r n  A r g u m e n t
!------------------------------------------------------------------------------

integer :: netcdf_init_header

!------------------------------------------------------------------------------
!                     L o c a l  v a r i a b l e s
!------------------------------------------------------------------------------

character(len=33) :: histtext
integer           :: ncid, err
integer           :: datentime(8)

!------------------------------------------------------------------------------
!                     E x e c u t a b l e   c o d e
!------------------------------------------------------------------------------

if (rfp==dfp) then
  netcdf_type = nf90_double
else
  netcdf_type = nf90_real
end if

err = nf90_create (filename, nf90_clobber, ncid)
call netcdf_check_error(err)

err = nf90_put_att(ncid, nf90_global, 'title', title)
call netcdf_check_error(err)

call date_and_time(values = datentime)
write(histtext, '(A8,I4,A1,I2,A1,I2,A1,I2,A1,I2,A9)', IOSTAT=err) 'Created ', &
      datentime(1), '-', datentime(2), '-', datentime(3), ' ', datentime(5),  &
      ':', datentime(6), ' by frida'
err = nf90_put_att(ncid, nf90_global, 'history', histtext)
call netcdf_check_error(err)

netcdf_init_header = ncid

END FUNCTION netcdf_init_header

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

END MODULE netcdf_common_mod
