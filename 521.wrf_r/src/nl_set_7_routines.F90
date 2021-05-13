!STARTOFREGISTRYGENERATEDINCLUDE 'inc/nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit. Your changes to this file will be lost.
!
SUBROUTINE nl_set_history_end_s ( id_id , history_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: history_end_s
  INTEGER id_id
  model_config_rec%history_end_s(id_id) = history_end_s
  RETURN
END SUBROUTINE nl_set_history_end_s
SUBROUTINE nl_set_history_end ( id_id , history_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: history_end
  INTEGER id_id
  model_config_rec%history_end(id_id) = history_end
  RETURN
END SUBROUTINE nl_set_history_end
SUBROUTINE nl_set_inputout_end_y ( id_id , inputout_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: inputout_end_y
  INTEGER id_id
  model_config_rec%inputout_end_y(id_id) = inputout_end_y
  RETURN
END SUBROUTINE nl_set_inputout_end_y
SUBROUTINE nl_set_inputout_end_d ( id_id , inputout_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: inputout_end_d
  INTEGER id_id
  model_config_rec%inputout_end_d(id_id) = inputout_end_d
  RETURN
END SUBROUTINE nl_set_inputout_end_d
SUBROUTINE nl_set_inputout_end_h ( id_id , inputout_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: inputout_end_h
  INTEGER id_id
  model_config_rec%inputout_end_h(id_id) = inputout_end_h
  RETURN
END SUBROUTINE nl_set_inputout_end_h
SUBROUTINE nl_set_inputout_end_m ( id_id , inputout_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: inputout_end_m
  INTEGER id_id
  model_config_rec%inputout_end_m(id_id) = inputout_end_m
  RETURN
END SUBROUTINE nl_set_inputout_end_m
SUBROUTINE nl_set_inputout_end_s ( id_id , inputout_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: inputout_end_s
  INTEGER id_id
  model_config_rec%inputout_end_s(id_id) = inputout_end_s
  RETURN
END SUBROUTINE nl_set_inputout_end_s
SUBROUTINE nl_set_simulation_start_year ( id_id , simulation_start_year )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: simulation_start_year
  INTEGER id_id
  model_config_rec%simulation_start_year = simulation_start_year
  RETURN
END SUBROUTINE nl_set_simulation_start_year
SUBROUTINE nl_set_simulation_start_month ( id_id , simulation_start_month )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: simulation_start_month
  INTEGER id_id
  model_config_rec%simulation_start_month = simulation_start_month
  RETURN
END SUBROUTINE nl_set_simulation_start_month
SUBROUTINE nl_set_simulation_start_day ( id_id , simulation_start_day )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: simulation_start_day
  INTEGER id_id
  model_config_rec%simulation_start_day = simulation_start_day
  RETURN
END SUBROUTINE nl_set_simulation_start_day
SUBROUTINE nl_set_simulation_start_hour ( id_id , simulation_start_hour )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: simulation_start_hour
  INTEGER id_id
  model_config_rec%simulation_start_hour = simulation_start_hour
  RETURN
END SUBROUTINE nl_set_simulation_start_hour
SUBROUTINE nl_set_simulation_start_minute ( id_id , simulation_start_minute )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: simulation_start_minute
  INTEGER id_id
  model_config_rec%simulation_start_minute = simulation_start_minute
  RETURN
END SUBROUTINE nl_set_simulation_start_minute
SUBROUTINE nl_set_simulation_start_second ( id_id , simulation_start_second )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: simulation_start_second
  INTEGER id_id
  model_config_rec%simulation_start_second = simulation_start_second
  RETURN
END SUBROUTINE nl_set_simulation_start_second
SUBROUTINE nl_set_reset_simulation_start ( id_id , reset_simulation_start )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: reset_simulation_start
  INTEGER id_id
  model_config_rec%reset_simulation_start = reset_simulation_start
  RETURN
END SUBROUTINE nl_set_reset_simulation_start
SUBROUTINE nl_set_sr_x ( id_id , sr_x )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sr_x
  INTEGER id_id
  model_config_rec%sr_x(id_id) = sr_x
  RETURN
END SUBROUTINE nl_set_sr_x
SUBROUTINE nl_set_sr_y ( id_id , sr_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sr_y
  INTEGER id_id
  model_config_rec%sr_y(id_id) = sr_y
  RETURN
END SUBROUTINE nl_set_sr_y
SUBROUTINE nl_set_sgfdda_inname ( id_id , sgfdda_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: sgfdda_inname
  INTEGER id_id
  model_config_rec%sgfdda_inname = trim(sgfdda_inname)
  RETURN
END SUBROUTINE nl_set_sgfdda_inname
SUBROUTINE nl_set_gfdda_inname ( id_id , gfdda_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: gfdda_inname
  INTEGER id_id
  model_config_rec%gfdda_inname = trim(gfdda_inname)
  RETURN
END SUBROUTINE nl_set_gfdda_inname
SUBROUTINE nl_set_sgfdda_interval_d ( id_id , sgfdda_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_interval_d
  INTEGER id_id
  model_config_rec%sgfdda_interval_d(id_id) = sgfdda_interval_d
  RETURN
END SUBROUTINE nl_set_sgfdda_interval_d
SUBROUTINE nl_set_sgfdda_interval_h ( id_id , sgfdda_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_interval_h
  INTEGER id_id
  model_config_rec%sgfdda_interval_h(id_id) = sgfdda_interval_h
  RETURN
END SUBROUTINE nl_set_sgfdda_interval_h
SUBROUTINE nl_set_sgfdda_interval_m ( id_id , sgfdda_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_interval_m
  INTEGER id_id
  model_config_rec%sgfdda_interval_m(id_id) = sgfdda_interval_m
  RETURN
END SUBROUTINE nl_set_sgfdda_interval_m
SUBROUTINE nl_set_sgfdda_interval_s ( id_id , sgfdda_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_interval_s
  INTEGER id_id
  model_config_rec%sgfdda_interval_s(id_id) = sgfdda_interval_s
  RETURN
END SUBROUTINE nl_set_sgfdda_interval_s
SUBROUTINE nl_set_sgfdda_interval_y ( id_id , sgfdda_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_interval_y
  INTEGER id_id
  model_config_rec%sgfdda_interval_y(id_id) = sgfdda_interval_y
  RETURN
END SUBROUTINE nl_set_sgfdda_interval_y
SUBROUTINE nl_set_sgfdda_interval ( id_id , sgfdda_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_interval
  INTEGER id_id
  model_config_rec%sgfdda_interval(id_id) = sgfdda_interval
  RETURN
END SUBROUTINE nl_set_sgfdda_interval
SUBROUTINE nl_set_gfdda_interval_d ( id_id , gfdda_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_interval_d
  INTEGER id_id
  model_config_rec%gfdda_interval_d(id_id) = gfdda_interval_d
  RETURN
END SUBROUTINE nl_set_gfdda_interval_d
SUBROUTINE nl_set_gfdda_interval_h ( id_id , gfdda_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_interval_h
  INTEGER id_id
  model_config_rec%gfdda_interval_h(id_id) = gfdda_interval_h
  RETURN
END SUBROUTINE nl_set_gfdda_interval_h
SUBROUTINE nl_set_gfdda_interval_m ( id_id , gfdda_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_interval_m
  INTEGER id_id
  model_config_rec%gfdda_interval_m(id_id) = gfdda_interval_m
  RETURN
END SUBROUTINE nl_set_gfdda_interval_m
SUBROUTINE nl_set_gfdda_interval_s ( id_id , gfdda_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_interval_s
  INTEGER id_id
  model_config_rec%gfdda_interval_s(id_id) = gfdda_interval_s
  RETURN
END SUBROUTINE nl_set_gfdda_interval_s
SUBROUTINE nl_set_gfdda_interval_y ( id_id , gfdda_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_interval_y
  INTEGER id_id
  model_config_rec%gfdda_interval_y(id_id) = gfdda_interval_y
  RETURN
END SUBROUTINE nl_set_gfdda_interval_y
SUBROUTINE nl_set_gfdda_interval ( id_id , gfdda_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_interval
  INTEGER id_id
  model_config_rec%gfdda_interval(id_id) = gfdda_interval
  RETURN
END SUBROUTINE nl_set_gfdda_interval
SUBROUTINE nl_set_sgfdda_begin_y ( id_id , sgfdda_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_begin_y
  INTEGER id_id
  model_config_rec%sgfdda_begin_y(id_id) = sgfdda_begin_y
  RETURN
END SUBROUTINE nl_set_sgfdda_begin_y
SUBROUTINE nl_set_sgfdda_begin_d ( id_id , sgfdda_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_begin_d
  INTEGER id_id
  model_config_rec%sgfdda_begin_d(id_id) = sgfdda_begin_d
  RETURN
END SUBROUTINE nl_set_sgfdda_begin_d
SUBROUTINE nl_set_sgfdda_begin_h ( id_id , sgfdda_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_begin_h
  INTEGER id_id
  model_config_rec%sgfdda_begin_h(id_id) = sgfdda_begin_h
  RETURN
END SUBROUTINE nl_set_sgfdda_begin_h
SUBROUTINE nl_set_sgfdda_begin_m ( id_id , sgfdda_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_begin_m
  INTEGER id_id
  model_config_rec%sgfdda_begin_m(id_id) = sgfdda_begin_m
  RETURN
END SUBROUTINE nl_set_sgfdda_begin_m
SUBROUTINE nl_set_sgfdda_begin_s ( id_id , sgfdda_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_begin_s
  INTEGER id_id
  model_config_rec%sgfdda_begin_s(id_id) = sgfdda_begin_s
  RETURN
END SUBROUTINE nl_set_sgfdda_begin_s
SUBROUTINE nl_set_gfdda_begin_y ( id_id , gfdda_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_begin_y
  INTEGER id_id
  model_config_rec%gfdda_begin_y(id_id) = gfdda_begin_y
  RETURN
END SUBROUTINE nl_set_gfdda_begin_y
SUBROUTINE nl_set_gfdda_begin_d ( id_id , gfdda_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_begin_d
  INTEGER id_id
  model_config_rec%gfdda_begin_d(id_id) = gfdda_begin_d
  RETURN
END SUBROUTINE nl_set_gfdda_begin_d
SUBROUTINE nl_set_gfdda_begin_h ( id_id , gfdda_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_begin_h
  INTEGER id_id
  model_config_rec%gfdda_begin_h(id_id) = gfdda_begin_h
  RETURN
END SUBROUTINE nl_set_gfdda_begin_h
SUBROUTINE nl_set_gfdda_begin_m ( id_id , gfdda_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_begin_m
  INTEGER id_id
  model_config_rec%gfdda_begin_m(id_id) = gfdda_begin_m
  RETURN
END SUBROUTINE nl_set_gfdda_begin_m
SUBROUTINE nl_set_gfdda_begin_s ( id_id , gfdda_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_begin_s
  INTEGER id_id
  model_config_rec%gfdda_begin_s(id_id) = gfdda_begin_s
  RETURN
END SUBROUTINE nl_set_gfdda_begin_s
SUBROUTINE nl_set_sgfdda_end_y ( id_id , sgfdda_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_end_y
  INTEGER id_id
  model_config_rec%sgfdda_end_y(id_id) = sgfdda_end_y
  RETURN
END SUBROUTINE nl_set_sgfdda_end_y
SUBROUTINE nl_set_sgfdda_end_d ( id_id , sgfdda_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_end_d
  INTEGER id_id
  model_config_rec%sgfdda_end_d(id_id) = sgfdda_end_d
  RETURN
END SUBROUTINE nl_set_sgfdda_end_d
SUBROUTINE nl_set_sgfdda_end_h ( id_id , sgfdda_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_end_h
  INTEGER id_id
  model_config_rec%sgfdda_end_h(id_id) = sgfdda_end_h
  RETURN
END SUBROUTINE nl_set_sgfdda_end_h
SUBROUTINE nl_set_sgfdda_end_m ( id_id , sgfdda_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_end_m
  INTEGER id_id
  model_config_rec%sgfdda_end_m(id_id) = sgfdda_end_m
  RETURN
END SUBROUTINE nl_set_sgfdda_end_m
SUBROUTINE nl_set_sgfdda_end_s ( id_id , sgfdda_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sgfdda_end_s
  INTEGER id_id
  model_config_rec%sgfdda_end_s(id_id) = sgfdda_end_s
  RETURN
END SUBROUTINE nl_set_sgfdda_end_s
SUBROUTINE nl_set_gfdda_end_y ( id_id , gfdda_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_end_y
  INTEGER id_id
  model_config_rec%gfdda_end_y(id_id) = gfdda_end_y
  RETURN
END SUBROUTINE nl_set_gfdda_end_y
SUBROUTINE nl_set_gfdda_end_d ( id_id , gfdda_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_end_d
  INTEGER id_id
  model_config_rec%gfdda_end_d(id_id) = gfdda_end_d
  RETURN
END SUBROUTINE nl_set_gfdda_end_d
SUBROUTINE nl_set_gfdda_end_h ( id_id , gfdda_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_end_h
  INTEGER id_id
  model_config_rec%gfdda_end_h(id_id) = gfdda_end_h
  RETURN
END SUBROUTINE nl_set_gfdda_end_h
SUBROUTINE nl_set_gfdda_end_m ( id_id , gfdda_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_end_m
  INTEGER id_id
  model_config_rec%gfdda_end_m(id_id) = gfdda_end_m
  RETURN
END SUBROUTINE nl_set_gfdda_end_m
SUBROUTINE nl_set_gfdda_end_s ( id_id , gfdda_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gfdda_end_s
  INTEGER id_id
  model_config_rec%gfdda_end_s(id_id) = gfdda_end_s
  RETURN
END SUBROUTINE nl_set_gfdda_end_s
SUBROUTINE nl_set_io_form_sgfdda ( id_id , io_form_sgfdda )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: io_form_sgfdda
  INTEGER id_id
  model_config_rec%io_form_sgfdda = io_form_sgfdda
  RETURN
END SUBROUTINE nl_set_io_form_sgfdda
SUBROUTINE nl_set_io_form_gfdda ( id_id , io_form_gfdda )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: io_form_gfdda
  INTEGER id_id
  model_config_rec%io_form_gfdda = io_form_gfdda
  RETURN
END SUBROUTINE nl_set_io_form_gfdda
SUBROUTINE nl_set_iofields_filename ( id_id , iofields_filename )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: iofields_filename
  INTEGER id_id
  model_config_rec%iofields_filename(id_id) = iofields_filename
  RETURN
END SUBROUTINE nl_set_iofields_filename
SUBROUTINE nl_set_ignore_iofields_warning ( id_id , ignore_iofields_warning )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: ignore_iofields_warning
  INTEGER id_id
  model_config_rec%ignore_iofields_warning = ignore_iofields_warning
  RETURN
END SUBROUTINE nl_set_ignore_iofields_warning
SUBROUTINE nl_set_ncd_nofill ( id_id , ncd_nofill )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: ncd_nofill
  INTEGER id_id
  model_config_rec%ncd_nofill = ncd_nofill
  RETURN
END SUBROUTINE nl_set_ncd_nofill
SUBROUTINE nl_set_ifire ( id_id , ifire )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ifire
  INTEGER id_id
  model_config_rec%ifire(id_id) = ifire
  RETURN
END SUBROUTINE nl_set_ifire
SUBROUTINE nl_set_fire_boundary_guard ( id_id , fire_boundary_guard )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_boundary_guard
  INTEGER id_id
  model_config_rec%fire_boundary_guard(id_id) = fire_boundary_guard
  RETURN
END SUBROUTINE nl_set_fire_boundary_guard
SUBROUTINE nl_set_fire_num_ignitions ( id_id , fire_num_ignitions )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_num_ignitions
  INTEGER id_id
  model_config_rec%fire_num_ignitions(id_id) = fire_num_ignitions
  RETURN
END SUBROUTINE nl_set_fire_num_ignitions
SUBROUTINE nl_set_fire_ignition_ros1 ( id_id , fire_ignition_ros1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_ros1
  INTEGER id_id
  model_config_rec%fire_ignition_ros1(id_id) = fire_ignition_ros1
  RETURN
END SUBROUTINE nl_set_fire_ignition_ros1
SUBROUTINE nl_set_fire_ignition_start_lon1 ( id_id , fire_ignition_start_lon1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lon1
  INTEGER id_id
  model_config_rec%fire_ignition_start_lon1(id_id) = fire_ignition_start_lon1
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lon1
SUBROUTINE nl_set_fire_ignition_start_lat1 ( id_id , fire_ignition_start_lat1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lat1
  INTEGER id_id
  model_config_rec%fire_ignition_start_lat1(id_id) = fire_ignition_start_lat1
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lat1
SUBROUTINE nl_set_fire_ignition_end_lon1 ( id_id , fire_ignition_end_lon1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lon1
  INTEGER id_id
  model_config_rec%fire_ignition_end_lon1(id_id) = fire_ignition_end_lon1
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lon1
SUBROUTINE nl_set_fire_ignition_end_lat1 ( id_id , fire_ignition_end_lat1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lat1
  INTEGER id_id
  model_config_rec%fire_ignition_end_lat1(id_id) = fire_ignition_end_lat1
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lat1
SUBROUTINE nl_set_fire_ignition_radius1 ( id_id , fire_ignition_radius1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_radius1
  INTEGER id_id
  model_config_rec%fire_ignition_radius1(id_id) = fire_ignition_radius1
  RETURN
END SUBROUTINE nl_set_fire_ignition_radius1
SUBROUTINE nl_set_fire_ignition_start_time1 ( id_id , fire_ignition_start_time1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_time1
  INTEGER id_id
  model_config_rec%fire_ignition_start_time1(id_id) = fire_ignition_start_time1
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_time1
SUBROUTINE nl_set_fire_ignition_end_time1 ( id_id , fire_ignition_end_time1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_time1
  INTEGER id_id
  model_config_rec%fire_ignition_end_time1(id_id) = fire_ignition_end_time1
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_time1
SUBROUTINE nl_set_fire_ignition_ros2 ( id_id , fire_ignition_ros2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_ros2
  INTEGER id_id
  model_config_rec%fire_ignition_ros2(id_id) = fire_ignition_ros2
  RETURN
END SUBROUTINE nl_set_fire_ignition_ros2
SUBROUTINE nl_set_fire_ignition_start_lon2 ( id_id , fire_ignition_start_lon2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lon2
  INTEGER id_id
  model_config_rec%fire_ignition_start_lon2(id_id) = fire_ignition_start_lon2
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lon2
SUBROUTINE nl_set_fire_ignition_start_lat2 ( id_id , fire_ignition_start_lat2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lat2
  INTEGER id_id
  model_config_rec%fire_ignition_start_lat2(id_id) = fire_ignition_start_lat2
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lat2
SUBROUTINE nl_set_fire_ignition_end_lon2 ( id_id , fire_ignition_end_lon2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lon2
  INTEGER id_id
  model_config_rec%fire_ignition_end_lon2(id_id) = fire_ignition_end_lon2
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lon2
SUBROUTINE nl_set_fire_ignition_end_lat2 ( id_id , fire_ignition_end_lat2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lat2
  INTEGER id_id
  model_config_rec%fire_ignition_end_lat2(id_id) = fire_ignition_end_lat2
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lat2
SUBROUTINE nl_set_fire_ignition_radius2 ( id_id , fire_ignition_radius2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_radius2
  INTEGER id_id
  model_config_rec%fire_ignition_radius2(id_id) = fire_ignition_radius2
  RETURN
END SUBROUTINE nl_set_fire_ignition_radius2
SUBROUTINE nl_set_fire_ignition_start_time2 ( id_id , fire_ignition_start_time2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_time2
  INTEGER id_id
  model_config_rec%fire_ignition_start_time2(id_id) = fire_ignition_start_time2
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_time2
SUBROUTINE nl_set_fire_ignition_end_time2 ( id_id , fire_ignition_end_time2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_time2
  INTEGER id_id
  model_config_rec%fire_ignition_end_time2(id_id) = fire_ignition_end_time2
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_time2
SUBROUTINE nl_set_fire_ignition_ros3 ( id_id , fire_ignition_ros3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_ros3
  INTEGER id_id
  model_config_rec%fire_ignition_ros3(id_id) = fire_ignition_ros3
  RETURN
END SUBROUTINE nl_set_fire_ignition_ros3
SUBROUTINE nl_set_fire_ignition_start_lon3 ( id_id , fire_ignition_start_lon3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lon3
  INTEGER id_id
  model_config_rec%fire_ignition_start_lon3(id_id) = fire_ignition_start_lon3
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lon3
SUBROUTINE nl_set_fire_ignition_start_lat3 ( id_id , fire_ignition_start_lat3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lat3
  INTEGER id_id
  model_config_rec%fire_ignition_start_lat3(id_id) = fire_ignition_start_lat3
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lat3
SUBROUTINE nl_set_fire_ignition_end_lon3 ( id_id , fire_ignition_end_lon3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lon3
  INTEGER id_id
  model_config_rec%fire_ignition_end_lon3(id_id) = fire_ignition_end_lon3
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lon3
SUBROUTINE nl_set_fire_ignition_end_lat3 ( id_id , fire_ignition_end_lat3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lat3
  INTEGER id_id
  model_config_rec%fire_ignition_end_lat3(id_id) = fire_ignition_end_lat3
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lat3
SUBROUTINE nl_set_fire_ignition_radius3 ( id_id , fire_ignition_radius3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_radius3
  INTEGER id_id
  model_config_rec%fire_ignition_radius3(id_id) = fire_ignition_radius3
  RETURN
END SUBROUTINE nl_set_fire_ignition_radius3
SUBROUTINE nl_set_fire_ignition_start_time3 ( id_id , fire_ignition_start_time3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_time3
  INTEGER id_id
  model_config_rec%fire_ignition_start_time3(id_id) = fire_ignition_start_time3
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_time3
SUBROUTINE nl_set_fire_ignition_end_time3 ( id_id , fire_ignition_end_time3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_time3
  INTEGER id_id
  model_config_rec%fire_ignition_end_time3(id_id) = fire_ignition_end_time3
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_time3
SUBROUTINE nl_set_fire_ignition_ros4 ( id_id , fire_ignition_ros4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_ros4
  INTEGER id_id
  model_config_rec%fire_ignition_ros4(id_id) = fire_ignition_ros4
  RETURN
END SUBROUTINE nl_set_fire_ignition_ros4
SUBROUTINE nl_set_fire_ignition_start_lon4 ( id_id , fire_ignition_start_lon4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lon4
  INTEGER id_id
  model_config_rec%fire_ignition_start_lon4(id_id) = fire_ignition_start_lon4
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lon4
SUBROUTINE nl_set_fire_ignition_start_lat4 ( id_id , fire_ignition_start_lat4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lat4
  INTEGER id_id
  model_config_rec%fire_ignition_start_lat4(id_id) = fire_ignition_start_lat4
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lat4
SUBROUTINE nl_set_fire_ignition_end_lon4 ( id_id , fire_ignition_end_lon4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lon4
  INTEGER id_id
  model_config_rec%fire_ignition_end_lon4(id_id) = fire_ignition_end_lon4
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lon4
SUBROUTINE nl_set_fire_ignition_end_lat4 ( id_id , fire_ignition_end_lat4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lat4
  INTEGER id_id
  model_config_rec%fire_ignition_end_lat4(id_id) = fire_ignition_end_lat4
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lat4
SUBROUTINE nl_set_fire_ignition_radius4 ( id_id , fire_ignition_radius4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_radius4
  INTEGER id_id
  model_config_rec%fire_ignition_radius4(id_id) = fire_ignition_radius4
  RETURN
END SUBROUTINE nl_set_fire_ignition_radius4
SUBROUTINE nl_set_fire_ignition_start_time4 ( id_id , fire_ignition_start_time4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_time4
  INTEGER id_id
  model_config_rec%fire_ignition_start_time4(id_id) = fire_ignition_start_time4
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_time4
SUBROUTINE nl_set_fire_ignition_end_time4 ( id_id , fire_ignition_end_time4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_time4
  INTEGER id_id
  model_config_rec%fire_ignition_end_time4(id_id) = fire_ignition_end_time4
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_time4
SUBROUTINE nl_set_fire_ignition_ros5 ( id_id , fire_ignition_ros5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_ros5
  INTEGER id_id
  model_config_rec%fire_ignition_ros5(id_id) = fire_ignition_ros5
  RETURN
END SUBROUTINE nl_set_fire_ignition_ros5
SUBROUTINE nl_set_fire_ignition_start_lon5 ( id_id , fire_ignition_start_lon5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lon5
  INTEGER id_id
  model_config_rec%fire_ignition_start_lon5(id_id) = fire_ignition_start_lon5
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lon5
SUBROUTINE nl_set_fire_ignition_start_lat5 ( id_id , fire_ignition_start_lat5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_lat5
  INTEGER id_id
  model_config_rec%fire_ignition_start_lat5(id_id) = fire_ignition_start_lat5
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_lat5
SUBROUTINE nl_set_fire_ignition_end_lon5 ( id_id , fire_ignition_end_lon5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lon5
  INTEGER id_id
  model_config_rec%fire_ignition_end_lon5(id_id) = fire_ignition_end_lon5
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lon5
SUBROUTINE nl_set_fire_ignition_end_lat5 ( id_id , fire_ignition_end_lat5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_lat5
  INTEGER id_id
  model_config_rec%fire_ignition_end_lat5(id_id) = fire_ignition_end_lat5
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_lat5
SUBROUTINE nl_set_fire_ignition_radius5 ( id_id , fire_ignition_radius5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_radius5
  INTEGER id_id
  model_config_rec%fire_ignition_radius5(id_id) = fire_ignition_radius5
  RETURN
END SUBROUTINE nl_set_fire_ignition_radius5
SUBROUTINE nl_set_fire_ignition_start_time5 ( id_id , fire_ignition_start_time5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_time5
  INTEGER id_id
  model_config_rec%fire_ignition_start_time5(id_id) = fire_ignition_start_time5
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_time5
SUBROUTINE nl_set_fire_ignition_end_time5 ( id_id , fire_ignition_end_time5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_time5
  INTEGER id_id
  model_config_rec%fire_ignition_end_time5(id_id) = fire_ignition_end_time5
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_time5
SUBROUTINE nl_set_fire_ignition_start_x1 ( id_id , fire_ignition_start_x1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_x1
  INTEGER id_id
  model_config_rec%fire_ignition_start_x1(id_id) = fire_ignition_start_x1
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_x1
SUBROUTINE nl_set_fire_ignition_start_y1 ( id_id , fire_ignition_start_y1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_y1
  INTEGER id_id
  model_config_rec%fire_ignition_start_y1(id_id) = fire_ignition_start_y1
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_y1
SUBROUTINE nl_set_fire_ignition_end_x1 ( id_id , fire_ignition_end_x1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_x1
  INTEGER id_id
  model_config_rec%fire_ignition_end_x1(id_id) = fire_ignition_end_x1
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_x1
SUBROUTINE nl_set_fire_ignition_end_y1 ( id_id , fire_ignition_end_y1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_y1
  INTEGER id_id
  model_config_rec%fire_ignition_end_y1(id_id) = fire_ignition_end_y1
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_y1
SUBROUTINE nl_set_fire_ignition_start_x2 ( id_id , fire_ignition_start_x2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_x2
  INTEGER id_id
  model_config_rec%fire_ignition_start_x2(id_id) = fire_ignition_start_x2
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_x2
SUBROUTINE nl_set_fire_ignition_start_y2 ( id_id , fire_ignition_start_y2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_y2
  INTEGER id_id
  model_config_rec%fire_ignition_start_y2(id_id) = fire_ignition_start_y2
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_y2
SUBROUTINE nl_set_fire_ignition_end_x2 ( id_id , fire_ignition_end_x2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_x2
  INTEGER id_id
  model_config_rec%fire_ignition_end_x2(id_id) = fire_ignition_end_x2
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_x2
SUBROUTINE nl_set_fire_ignition_end_y2 ( id_id , fire_ignition_end_y2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_y2
  INTEGER id_id
  model_config_rec%fire_ignition_end_y2(id_id) = fire_ignition_end_y2
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_y2
SUBROUTINE nl_set_fire_ignition_start_x3 ( id_id , fire_ignition_start_x3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_x3
  INTEGER id_id
  model_config_rec%fire_ignition_start_x3(id_id) = fire_ignition_start_x3
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_x3
SUBROUTINE nl_set_fire_ignition_start_y3 ( id_id , fire_ignition_start_y3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_y3
  INTEGER id_id
  model_config_rec%fire_ignition_start_y3(id_id) = fire_ignition_start_y3
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_y3
SUBROUTINE nl_set_fire_ignition_end_x3 ( id_id , fire_ignition_end_x3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_x3
  INTEGER id_id
  model_config_rec%fire_ignition_end_x3(id_id) = fire_ignition_end_x3
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_x3
SUBROUTINE nl_set_fire_ignition_end_y3 ( id_id , fire_ignition_end_y3 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_y3
  INTEGER id_id
  model_config_rec%fire_ignition_end_y3(id_id) = fire_ignition_end_y3
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_y3
SUBROUTINE nl_set_fire_ignition_start_x4 ( id_id , fire_ignition_start_x4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_x4
  INTEGER id_id
  model_config_rec%fire_ignition_start_x4(id_id) = fire_ignition_start_x4
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_x4
SUBROUTINE nl_set_fire_ignition_start_y4 ( id_id , fire_ignition_start_y4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_y4
  INTEGER id_id
  model_config_rec%fire_ignition_start_y4(id_id) = fire_ignition_start_y4
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_y4
SUBROUTINE nl_set_fire_ignition_end_x4 ( id_id , fire_ignition_end_x4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_x4
  INTEGER id_id
  model_config_rec%fire_ignition_end_x4(id_id) = fire_ignition_end_x4
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_x4
SUBROUTINE nl_set_fire_ignition_end_y4 ( id_id , fire_ignition_end_y4 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_y4
  INTEGER id_id
  model_config_rec%fire_ignition_end_y4(id_id) = fire_ignition_end_y4
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_y4
SUBROUTINE nl_set_fire_ignition_start_x5 ( id_id , fire_ignition_start_x5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_x5
  INTEGER id_id
  model_config_rec%fire_ignition_start_x5(id_id) = fire_ignition_start_x5
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_x5
SUBROUTINE nl_set_fire_ignition_start_y5 ( id_id , fire_ignition_start_y5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_start_y5
  INTEGER id_id
  model_config_rec%fire_ignition_start_y5(id_id) = fire_ignition_start_y5
  RETURN
END SUBROUTINE nl_set_fire_ignition_start_y5
SUBROUTINE nl_set_fire_ignition_end_x5 ( id_id , fire_ignition_end_x5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_x5
  INTEGER id_id
  model_config_rec%fire_ignition_end_x5(id_id) = fire_ignition_end_x5
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_x5
SUBROUTINE nl_set_fire_ignition_end_y5 ( id_id , fire_ignition_end_y5 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ignition_end_y5
  INTEGER id_id
  model_config_rec%fire_ignition_end_y5(id_id) = fire_ignition_end_y5
  RETURN
END SUBROUTINE nl_set_fire_ignition_end_y5
SUBROUTINE nl_set_fire_lat_init ( id_id , fire_lat_init )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_lat_init
  INTEGER id_id
  model_config_rec%fire_lat_init(id_id) = fire_lat_init
  RETURN
END SUBROUTINE nl_set_fire_lat_init
SUBROUTINE nl_set_fire_lon_init ( id_id , fire_lon_init )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_lon_init
  INTEGER id_id
  model_config_rec%fire_lon_init(id_id) = fire_lon_init
  RETURN
END SUBROUTINE nl_set_fire_lon_init
SUBROUTINE nl_set_fire_ign_time ( id_id , fire_ign_time )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ign_time
  INTEGER id_id
  model_config_rec%fire_ign_time(id_id) = fire_ign_time
  RETURN
END SUBROUTINE nl_set_fire_ign_time
SUBROUTINE nl_set_fire_shape ( id_id , fire_shape )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_shape
  INTEGER id_id
  model_config_rec%fire_shape(id_id) = fire_shape
  RETURN
END SUBROUTINE nl_set_fire_shape
SUBROUTINE nl_set_fire_sprd_mdl ( id_id , fire_sprd_mdl )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_sprd_mdl
  INTEGER id_id
  model_config_rec%fire_sprd_mdl(id_id) = fire_sprd_mdl
  RETURN
END SUBROUTINE nl_set_fire_sprd_mdl
SUBROUTINE nl_set_fire_crwn_hgt ( id_id , fire_crwn_hgt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_crwn_hgt
  INTEGER id_id
  model_config_rec%fire_crwn_hgt(id_id) = fire_crwn_hgt
  RETURN
END SUBROUTINE nl_set_fire_crwn_hgt
SUBROUTINE nl_set_fire_ext_grnd ( id_id , fire_ext_grnd )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ext_grnd
  INTEGER id_id
  model_config_rec%fire_ext_grnd(id_id) = fire_ext_grnd
  RETURN
END SUBROUTINE nl_set_fire_ext_grnd
SUBROUTINE nl_set_fire_ext_crwn ( id_id , fire_ext_crwn )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_ext_crwn
  INTEGER id_id
  model_config_rec%fire_ext_crwn(id_id) = fire_ext_crwn
  RETURN
END SUBROUTINE nl_set_fire_ext_crwn
SUBROUTINE nl_set_fire_wind_height ( id_id , fire_wind_height )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_wind_height
  INTEGER id_id
  model_config_rec%fire_wind_height(id_id) = fire_wind_height
  RETURN
END SUBROUTINE nl_set_fire_wind_height
SUBROUTINE nl_set_fire_fuel_read ( id_id , fire_fuel_read )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_fuel_read
  INTEGER id_id
  model_config_rec%fire_fuel_read(id_id) = fire_fuel_read
  RETURN
END SUBROUTINE nl_set_fire_fuel_read
SUBROUTINE nl_set_fire_fuel_cat ( id_id , fire_fuel_cat )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_fuel_cat
  INTEGER id_id
  model_config_rec%fire_fuel_cat(id_id) = fire_fuel_cat
  RETURN
END SUBROUTINE nl_set_fire_fuel_cat
SUBROUTINE nl_set_fire_print_msg ( id_id , fire_print_msg )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_print_msg
  INTEGER id_id
  model_config_rec%fire_print_msg(id_id) = fire_print_msg
  RETURN
END SUBROUTINE nl_set_fire_print_msg
SUBROUTINE nl_set_fire_print_file ( id_id , fire_print_file )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_print_file
  INTEGER id_id
  model_config_rec%fire_print_file(id_id) = fire_print_file
  RETURN
END SUBROUTINE nl_set_fire_print_file
SUBROUTINE nl_set_fire_fuel_left_method ( id_id , fire_fuel_left_method )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_fuel_left_method
  INTEGER id_id
  model_config_rec%fire_fuel_left_method(id_id) = fire_fuel_left_method
  RETURN
END SUBROUTINE nl_set_fire_fuel_left_method
SUBROUTINE nl_set_fire_fuel_left_irl ( id_id , fire_fuel_left_irl )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_fuel_left_irl
  INTEGER id_id
  model_config_rec%fire_fuel_left_irl(id_id) = fire_fuel_left_irl
  RETURN
END SUBROUTINE nl_set_fire_fuel_left_irl
SUBROUTINE nl_set_fire_fuel_left_jrl ( id_id , fire_fuel_left_jrl )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_fuel_left_jrl
  INTEGER id_id
  model_config_rec%fire_fuel_left_jrl(id_id) = fire_fuel_left_jrl
  RETURN
END SUBROUTINE nl_set_fire_fuel_left_jrl
SUBROUTINE nl_set_fire_back_weight ( id_id , fire_back_weight )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_back_weight
  INTEGER id_id
  model_config_rec%fire_back_weight(id_id) = fire_back_weight
  RETURN
END SUBROUTINE nl_set_fire_back_weight
SUBROUTINE nl_set_fire_grows_only ( id_id , fire_grows_only )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_grows_only
  INTEGER id_id
  model_config_rec%fire_grows_only(id_id) = fire_grows_only
  RETURN
END SUBROUTINE nl_set_fire_grows_only
SUBROUTINE nl_set_fire_upwinding ( id_id , fire_upwinding )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_upwinding
  INTEGER id_id
  model_config_rec%fire_upwinding(id_id) = fire_upwinding
  RETURN
END SUBROUTINE nl_set_fire_upwinding
SUBROUTINE nl_set_fire_upwind_split ( id_id , fire_upwind_split )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_upwind_split
  INTEGER id_id
  model_config_rec%fire_upwind_split(id_id) = fire_upwind_split
  RETURN
END SUBROUTINE nl_set_fire_upwind_split
SUBROUTINE nl_set_fire_viscosity ( id_id , fire_viscosity )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_viscosity
  INTEGER id_id
  model_config_rec%fire_viscosity(id_id) = fire_viscosity
  RETURN
END SUBROUTINE nl_set_fire_viscosity
SUBROUTINE nl_set_fire_lfn_ext_up ( id_id , fire_lfn_ext_up )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_lfn_ext_up
  INTEGER id_id
  model_config_rec%fire_lfn_ext_up(id_id) = fire_lfn_ext_up
  RETURN
END SUBROUTINE nl_set_fire_lfn_ext_up
SUBROUTINE nl_set_fire_topo_from_atm ( id_id , fire_topo_from_atm )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_topo_from_atm
  INTEGER id_id
  model_config_rec%fire_topo_from_atm(id_id) = fire_topo_from_atm
  RETURN
END SUBROUTINE nl_set_fire_topo_from_atm
SUBROUTINE nl_set_fire_advection ( id_id , fire_advection )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_advection
  INTEGER id_id
  model_config_rec%fire_advection(id_id) = fire_advection
  RETURN
END SUBROUTINE nl_set_fire_advection
SUBROUTINE nl_set_fire_test_steps ( id_id , fire_test_steps )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_test_steps
  INTEGER id_id
  model_config_rec%fire_test_steps(id_id) = fire_test_steps
  RETURN
END SUBROUTINE nl_set_fire_test_steps
SUBROUTINE nl_set_fire_const_time ( id_id , fire_const_time )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_const_time
  INTEGER id_id
  model_config_rec%fire_const_time(id_id) = fire_const_time
  RETURN
END SUBROUTINE nl_set_fire_const_time
SUBROUTINE nl_set_fire_const_grnhfx ( id_id , fire_const_grnhfx )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_const_grnhfx
  INTEGER id_id
  model_config_rec%fire_const_grnhfx(id_id) = fire_const_grnhfx
  RETURN
END SUBROUTINE nl_set_fire_const_grnhfx
SUBROUTINE nl_set_fire_const_grnqfx ( id_id , fire_const_grnqfx )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_const_grnqfx
  INTEGER id_id
  model_config_rec%fire_const_grnqfx(id_id) = fire_const_grnqfx
  RETURN
END SUBROUTINE nl_set_fire_const_grnqfx
SUBROUTINE nl_set_fire_atm_feedback ( id_id , fire_atm_feedback )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_atm_feedback
  INTEGER id_id
  model_config_rec%fire_atm_feedback(id_id) = fire_atm_feedback
  RETURN
END SUBROUTINE nl_set_fire_atm_feedback
SUBROUTINE nl_set_fire_mountain_type ( id_id , fire_mountain_type )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fire_mountain_type
  INTEGER id_id
  model_config_rec%fire_mountain_type(id_id) = fire_mountain_type
  RETURN
END SUBROUTINE nl_set_fire_mountain_type
SUBROUTINE nl_set_fire_mountain_height ( id_id , fire_mountain_height )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_mountain_height
  INTEGER id_id
  model_config_rec%fire_mountain_height(id_id) = fire_mountain_height
  RETURN
END SUBROUTINE nl_set_fire_mountain_height
SUBROUTINE nl_set_fire_mountain_start_x ( id_id , fire_mountain_start_x )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_mountain_start_x
  INTEGER id_id
  model_config_rec%fire_mountain_start_x(id_id) = fire_mountain_start_x
  RETURN
END SUBROUTINE nl_set_fire_mountain_start_x
SUBROUTINE nl_set_fire_mountain_start_y ( id_id , fire_mountain_start_y )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_mountain_start_y
  INTEGER id_id
  model_config_rec%fire_mountain_start_y(id_id) = fire_mountain_start_y
  RETURN
END SUBROUTINE nl_set_fire_mountain_start_y
SUBROUTINE nl_set_fire_mountain_end_x ( id_id , fire_mountain_end_x )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_mountain_end_x
  INTEGER id_id
  model_config_rec%fire_mountain_end_x(id_id) = fire_mountain_end_x
  RETURN
END SUBROUTINE nl_set_fire_mountain_end_x
SUBROUTINE nl_set_fire_mountain_end_y ( id_id , fire_mountain_end_y )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fire_mountain_end_y
  INTEGER id_id
  model_config_rec%fire_mountain_end_y(id_id) = fire_mountain_end_y
  RETURN
END SUBROUTINE nl_set_fire_mountain_end_y
SUBROUTINE nl_set_delt_perturbation ( id_id , delt_perturbation )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: delt_perturbation
  INTEGER id_id
  model_config_rec%delt_perturbation(id_id) = delt_perturbation
  RETURN
END SUBROUTINE nl_set_delt_perturbation
SUBROUTINE nl_set_xrad_perturbation ( id_id , xrad_perturbation )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: xrad_perturbation
  INTEGER id_id
  model_config_rec%xrad_perturbation(id_id) = xrad_perturbation
  RETURN
END SUBROUTINE nl_set_xrad_perturbation
SUBROUTINE nl_set_yrad_perturbation ( id_id , yrad_perturbation )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: yrad_perturbation
  INTEGER id_id
  model_config_rec%yrad_perturbation(id_id) = yrad_perturbation
  RETURN
END SUBROUTINE nl_set_yrad_perturbation
SUBROUTINE nl_set_zrad_perturbation ( id_id , zrad_perturbation )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: zrad_perturbation
  INTEGER id_id
  model_config_rec%zrad_perturbation(id_id) = zrad_perturbation
  RETURN
END SUBROUTINE nl_set_zrad_perturbation
SUBROUTINE nl_set_hght_perturbation ( id_id , hght_perturbation )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: hght_perturbation
  INTEGER id_id
  model_config_rec%hght_perturbation(id_id) = hght_perturbation
  RETURN
END SUBROUTINE nl_set_hght_perturbation
SUBROUTINE nl_set_stretch_grd ( id_id , stretch_grd )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: stretch_grd
  INTEGER id_id
  model_config_rec%stretch_grd(id_id) = stretch_grd
  RETURN
END SUBROUTINE nl_set_stretch_grd
SUBROUTINE nl_set_stretch_hyp ( id_id , stretch_hyp )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: stretch_hyp
  INTEGER id_id
  model_config_rec%stretch_hyp(id_id) = stretch_hyp
  RETURN
END SUBROUTINE nl_set_stretch_hyp
SUBROUTINE nl_set_z_grd_scale ( id_id , z_grd_scale )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: z_grd_scale
  INTEGER id_id
  model_config_rec%z_grd_scale(id_id) = z_grd_scale
  RETURN
END SUBROUTINE nl_set_z_grd_scale
SUBROUTINE nl_set_sfc_full_init ( id_id , sfc_full_init )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: sfc_full_init
  INTEGER id_id
  model_config_rec%sfc_full_init(id_id) = sfc_full_init
  RETURN
END SUBROUTINE nl_set_sfc_full_init
SUBROUTINE nl_set_sfc_lu_index ( id_id , sfc_lu_index )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sfc_lu_index
  INTEGER id_id
  model_config_rec%sfc_lu_index(id_id) = sfc_lu_index
  RETURN
END SUBROUTINE nl_set_sfc_lu_index
SUBROUTINE nl_set_sfc_tsk ( id_id , sfc_tsk )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: sfc_tsk
  INTEGER id_id
  model_config_rec%sfc_tsk(id_id) = sfc_tsk
  RETURN
END SUBROUTINE nl_set_sfc_tsk
SUBROUTINE nl_set_sfc_tmn ( id_id , sfc_tmn )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: sfc_tmn
  INTEGER id_id
  model_config_rec%sfc_tmn(id_id) = sfc_tmn
  RETURN
END SUBROUTINE nl_set_sfc_tmn
SUBROUTINE nl_set_fire_read_lu ( id_id , fire_read_lu )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: fire_read_lu
  INTEGER id_id
  model_config_rec%fire_read_lu(id_id) = fire_read_lu
  RETURN
END SUBROUTINE nl_set_fire_read_lu
SUBROUTINE nl_set_fire_read_tsk ( id_id , fire_read_tsk )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: fire_read_tsk
  INTEGER id_id
  model_config_rec%fire_read_tsk(id_id) = fire_read_tsk
  RETURN
END SUBROUTINE nl_set_fire_read_tsk
SUBROUTINE nl_set_fire_read_tmn ( id_id , fire_read_tmn )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: fire_read_tmn
  INTEGER id_id
  model_config_rec%fire_read_tmn(id_id) = fire_read_tmn
  RETURN
END SUBROUTINE nl_set_fire_read_tmn
SUBROUTINE nl_set_fire_read_atm_ht ( id_id , fire_read_atm_ht )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: fire_read_atm_ht
  INTEGER id_id
  model_config_rec%fire_read_atm_ht(id_id) = fire_read_atm_ht
  RETURN
END SUBROUTINE nl_set_fire_read_atm_ht
SUBROUTINE nl_set_fire_read_fire_ht ( id_id , fire_read_fire_ht )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: fire_read_fire_ht
  INTEGER id_id
  model_config_rec%fire_read_fire_ht(id_id) = fire_read_fire_ht
  RETURN
END SUBROUTINE nl_set_fire_read_fire_ht
SUBROUTINE nl_set_fire_read_atm_grad ( id_id , fire_read_atm_grad )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: fire_read_atm_grad
  INTEGER id_id
  model_config_rec%fire_read_atm_grad(id_id) = fire_read_atm_grad
  RETURN
END SUBROUTINE nl_set_fire_read_atm_grad
SUBROUTINE nl_set_fire_read_fire_grad ( id_id , fire_read_fire_grad )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: fire_read_fire_grad
  INTEGER id_id
  model_config_rec%fire_read_fire_grad(id_id) = fire_read_fire_grad
  RETURN
END SUBROUTINE nl_set_fire_read_fire_grad
SUBROUTINE nl_set_sfc_vegfra ( id_id , sfc_vegfra )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: sfc_vegfra
  INTEGER id_id
  model_config_rec%sfc_vegfra(id_id) = sfc_vegfra
  RETURN
END SUBROUTINE nl_set_sfc_vegfra
SUBROUTINE nl_set_sfc_canwat ( id_id , sfc_canwat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: sfc_canwat
  INTEGER id_id
  model_config_rec%sfc_canwat(id_id) = sfc_canwat
  RETURN
END SUBROUTINE nl_set_sfc_canwat
SUBROUTINE nl_set_sfc_ivgtyp ( id_id , sfc_ivgtyp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sfc_ivgtyp
  INTEGER id_id
  model_config_rec%sfc_ivgtyp(id_id) = sfc_ivgtyp
  RETURN
END SUBROUTINE nl_set_sfc_ivgtyp
SUBROUTINE nl_set_sfc_isltyp ( id_id , sfc_isltyp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sfc_isltyp
  INTEGER id_id
  model_config_rec%sfc_isltyp(id_id) = sfc_isltyp
  RETURN
END SUBROUTINE nl_set_sfc_isltyp
SUBROUTINE nl_set_do_avgflx_em ( id_id , do_avgflx_em )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: do_avgflx_em
  INTEGER id_id
  model_config_rec%do_avgflx_em(id_id) = do_avgflx_em
  RETURN
END SUBROUTINE nl_set_do_avgflx_em
SUBROUTINE nl_set_do_avgflx_cugd ( id_id , do_avgflx_cugd )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: do_avgflx_cugd
  INTEGER id_id
  model_config_rec%do_avgflx_cugd(id_id) = do_avgflx_cugd
  RETURN
END SUBROUTINE nl_set_do_avgflx_cugd
SUBROUTINE nl_set_stoch_force_opt ( id_id , stoch_force_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: stoch_force_opt
  INTEGER id_id
  model_config_rec%stoch_force_opt(id_id) = stoch_force_opt
  RETURN
END SUBROUTINE nl_set_stoch_force_opt
SUBROUTINE nl_set_stoch_vertstruc_opt ( id_id , stoch_vertstruc_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: stoch_vertstruc_opt
  INTEGER id_id
  model_config_rec%stoch_vertstruc_opt(id_id) = stoch_vertstruc_opt
  RETURN
END SUBROUTINE nl_set_stoch_vertstruc_opt
SUBROUTINE nl_set_nens ( id_id , nens )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: nens
  INTEGER id_id
  model_config_rec%nens = nens
  RETURN
END SUBROUTINE nl_set_nens
SUBROUTINE nl_set_tot_backscat_psi ( id_id , tot_backscat_psi )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: tot_backscat_psi
  INTEGER id_id
  model_config_rec%tot_backscat_psi(id_id) = tot_backscat_psi
  RETURN
END SUBROUTINE nl_set_tot_backscat_psi
SUBROUTINE nl_set_tot_backscat_t ( id_id , tot_backscat_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: tot_backscat_t
  INTEGER id_id
  model_config_rec%tot_backscat_t(id_id) = tot_backscat_t
  RETURN
END SUBROUTINE nl_set_tot_backscat_t
SUBROUTINE nl_set_ztau_psi ( id_id , ztau_psi )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: ztau_psi
  INTEGER id_id
  model_config_rec%ztau_psi = ztau_psi
  RETURN
END SUBROUTINE nl_set_ztau_psi
SUBROUTINE nl_set_ztau_t ( id_id , ztau_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: ztau_t
  INTEGER id_id
  model_config_rec%ztau_t = ztau_t
  RETURN
END SUBROUTINE nl_set_ztau_t
SUBROUTINE nl_set_rexponent_psi ( id_id , rexponent_psi )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: rexponent_psi
  INTEGER id_id
  model_config_rec%rexponent_psi = rexponent_psi
  RETURN
END SUBROUTINE nl_set_rexponent_psi
SUBROUTINE nl_set_rexponent_t ( id_id , rexponent_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: rexponent_t
  INTEGER id_id
  model_config_rec%rexponent_t = rexponent_t
  RETURN
END SUBROUTINE nl_set_rexponent_t
SUBROUTINE nl_set_zsigma2_eps ( id_id , zsigma2_eps )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: zsigma2_eps
  INTEGER id_id
  model_config_rec%zsigma2_eps = zsigma2_eps
  RETURN
END SUBROUTINE nl_set_zsigma2_eps
SUBROUTINE nl_set_zsigma2_eta ( id_id , zsigma2_eta )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: zsigma2_eta
  INTEGER id_id
  model_config_rec%zsigma2_eta = zsigma2_eta
  RETURN
END SUBROUTINE nl_set_zsigma2_eta
SUBROUTINE nl_set_kminforc ( id_id , kminforc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: kminforc
  INTEGER id_id
  model_config_rec%kminforc = kminforc
  RETURN
END SUBROUTINE nl_set_kminforc
SUBROUTINE nl_set_lminforc ( id_id , lminforc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lminforc
  INTEGER id_id
  model_config_rec%lminforc = lminforc
  RETURN
END SUBROUTINE nl_set_lminforc
SUBROUTINE nl_set_kminforct ( id_id , kminforct )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: kminforct
  INTEGER id_id
  model_config_rec%kminforct = kminforct
  RETURN
END SUBROUTINE nl_set_kminforct
SUBROUTINE nl_set_lminforct ( id_id , lminforct )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lminforct
  INTEGER id_id
  model_config_rec%lminforct = lminforct
  RETURN
END SUBROUTINE nl_set_lminforct
SUBROUTINE nl_set_kmaxforc ( id_id , kmaxforc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: kmaxforc
  INTEGER id_id
  model_config_rec%kmaxforc = kmaxforc
  RETURN
END SUBROUTINE nl_set_kmaxforc
SUBROUTINE nl_set_lmaxforc ( id_id , lmaxforc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lmaxforc
  INTEGER id_id
  model_config_rec%lmaxforc = lmaxforc
  RETURN
END SUBROUTINE nl_set_lmaxforc
SUBROUTINE nl_set_kmaxforct ( id_id , kmaxforct )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: kmaxforct
  INTEGER id_id
  model_config_rec%kmaxforct = kmaxforct
  RETURN
END SUBROUTINE nl_set_kmaxforct
SUBROUTINE nl_set_lmaxforct ( id_id , lmaxforct )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lmaxforct
  INTEGER id_id
  model_config_rec%lmaxforct = lmaxforct
  RETURN
END SUBROUTINE nl_set_lmaxforct
SUBROUTINE nl_set_kmaxforch ( id_id , kmaxforch )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: kmaxforch
  INTEGER id_id
  model_config_rec%kmaxforch = kmaxforch
  RETURN
END SUBROUTINE nl_set_kmaxforch
SUBROUTINE nl_set_lmaxforch ( id_id , lmaxforch )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lmaxforch
  INTEGER id_id
  model_config_rec%lmaxforch = lmaxforch
  RETURN
END SUBROUTINE nl_set_lmaxforch
SUBROUTINE nl_set_kmaxforcth ( id_id , kmaxforcth )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: kmaxforcth
  INTEGER id_id
  model_config_rec%kmaxforcth = kmaxforcth
  RETURN
END SUBROUTINE nl_set_kmaxforcth
SUBROUTINE nl_set_lmaxforcth ( id_id , lmaxforcth )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lmaxforcth
  INTEGER id_id
  model_config_rec%lmaxforcth = lmaxforcth
  RETURN
END SUBROUTINE nl_set_lmaxforcth
SUBROUTINE nl_set_gridpointvariance ( id_id , gridpointvariance )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: gridpointvariance
  INTEGER id_id
  model_config_rec%gridpointvariance(id_id) = gridpointvariance
  RETURN
END SUBROUTINE nl_set_gridpointvariance
SUBROUTINE nl_set_sppt_thresh_fact ( id_id , sppt_thresh_fact )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: sppt_thresh_fact
  INTEGER id_id
  model_config_rec%sppt_thresh_fact(id_id) = sppt_thresh_fact
  RETURN
END SUBROUTINE nl_set_sppt_thresh_fact
SUBROUTINE nl_set_l_sppt ( id_id , l_sppt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: l_sppt
  INTEGER id_id
  model_config_rec%l_sppt(id_id) = l_sppt
  RETURN
END SUBROUTINE nl_set_l_sppt
SUBROUTINE nl_set_tau_sppt ( id_id , tau_sppt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: tau_sppt
  INTEGER id_id
  model_config_rec%tau_sppt(id_id) = tau_sppt
  RETURN
END SUBROUTINE nl_set_tau_sppt
SUBROUTINE nl_set_stoch_force_global_opt ( id_id , stoch_force_global_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: stoch_force_global_opt
  INTEGER id_id
  model_config_rec%stoch_force_global_opt = stoch_force_global_opt
  RETURN
END SUBROUTINE nl_set_stoch_force_global_opt
SUBROUTINE nl_set_sfs_opt ( id_id , sfs_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sfs_opt
  INTEGER id_id
  model_config_rec%sfs_opt(id_id) = sfs_opt
  RETURN
END SUBROUTINE nl_set_sfs_opt
SUBROUTINE nl_set_m_opt ( id_id , m_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: m_opt
  INTEGER id_id
  model_config_rec%m_opt(id_id) = m_opt
  RETURN
END SUBROUTINE nl_set_m_opt
SUBROUTINE nl_set_lakedepth_default ( id_id , lakedepth_default )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: lakedepth_default
  INTEGER id_id
  model_config_rec%lakedepth_default(id_id) = lakedepth_default
  RETURN
END SUBROUTINE nl_set_lakedepth_default
SUBROUTINE nl_set_lake_min_elev ( id_id , lake_min_elev )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: lake_min_elev
  INTEGER id_id
  model_config_rec%lake_min_elev(id_id) = lake_min_elev
  RETURN
END SUBROUTINE nl_set_lake_min_elev
SUBROUTINE nl_set_use_lakedepth ( id_id , use_lakedepth )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: use_lakedepth
  INTEGER id_id
  model_config_rec%use_lakedepth(id_id) = use_lakedepth
  RETURN
END SUBROUTINE nl_set_use_lakedepth
SUBROUTINE nl_set_p_lev_diags ( id_id , p_lev_diags )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: p_lev_diags
  INTEGER id_id
  model_config_rec%p_lev_diags = p_lev_diags
  RETURN
END SUBROUTINE nl_set_p_lev_diags
SUBROUTINE nl_set_p_lev_diags_dfi ( id_id , p_lev_diags_dfi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: p_lev_diags_dfi
  INTEGER id_id
  model_config_rec%p_lev_diags_dfi = p_lev_diags_dfi
  RETURN
END SUBROUTINE nl_set_p_lev_diags_dfi
SUBROUTINE nl_set_num_press_levels ( id_id , num_press_levels )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_press_levels
  INTEGER id_id
  model_config_rec%num_press_levels = num_press_levels
  RETURN
END SUBROUTINE nl_set_num_press_levels
SUBROUTINE nl_set_press_levels ( id_id , press_levels )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: press_levels
  INTEGER id_id
  model_config_rec%press_levels(id_id) = press_levels
  RETURN
END SUBROUTINE nl_set_press_levels
SUBROUTINE nl_set_use_tot_or_hyd_p ( id_id , use_tot_or_hyd_p )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: use_tot_or_hyd_p
  INTEGER id_id
  model_config_rec%use_tot_or_hyd_p = use_tot_or_hyd_p
  RETURN
END SUBROUTINE nl_set_use_tot_or_hyd_p
SUBROUTINE nl_set_extrap_below_grnd ( id_id , extrap_below_grnd )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: extrap_below_grnd
  INTEGER id_id
  model_config_rec%extrap_below_grnd = extrap_below_grnd
  RETURN
END SUBROUTINE nl_set_extrap_below_grnd
SUBROUTINE nl_set_p_lev_missing ( id_id , p_lev_missing )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: p_lev_missing
  INTEGER id_id
  model_config_rec%p_lev_missing = p_lev_missing
  RETURN
END SUBROUTINE nl_set_p_lev_missing
SUBROUTINE nl_set_p_lev_interval ( id_id , p_lev_interval )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: p_lev_interval
  INTEGER id_id
  model_config_rec%p_lev_interval(id_id) = p_lev_interval
  RETURN
END SUBROUTINE nl_set_p_lev_interval
SUBROUTINE nl_set_afwa_diag_opt ( id_id , afwa_diag_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_diag_opt
  INTEGER id_id
  model_config_rec%afwa_diag_opt(id_id) = afwa_diag_opt
  RETURN
END SUBROUTINE nl_set_afwa_diag_opt
SUBROUTINE nl_set_afwa_ptype_opt ( id_id , afwa_ptype_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_ptype_opt
  INTEGER id_id
  model_config_rec%afwa_ptype_opt(id_id) = afwa_ptype_opt
  RETURN
END SUBROUTINE nl_set_afwa_ptype_opt
SUBROUTINE nl_set_afwa_vil_opt ( id_id , afwa_vil_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_vil_opt
  INTEGER id_id
  model_config_rec%afwa_vil_opt(id_id) = afwa_vil_opt
  RETURN
END SUBROUTINE nl_set_afwa_vil_opt
SUBROUTINE nl_set_afwa_radar_opt ( id_id , afwa_radar_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_radar_opt
  INTEGER id_id
  model_config_rec%afwa_radar_opt(id_id) = afwa_radar_opt
  RETURN
END SUBROUTINE nl_set_afwa_radar_opt
SUBROUTINE nl_set_afwa_severe_opt ( id_id , afwa_severe_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_severe_opt
  INTEGER id_id
  model_config_rec%afwa_severe_opt(id_id) = afwa_severe_opt
  RETURN
END SUBROUTINE nl_set_afwa_severe_opt
SUBROUTINE nl_set_afwa_icing_opt ( id_id , afwa_icing_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_icing_opt
  INTEGER id_id
  model_config_rec%afwa_icing_opt(id_id) = afwa_icing_opt
  RETURN
END SUBROUTINE nl_set_afwa_icing_opt
SUBROUTINE nl_set_afwa_vis_opt ( id_id , afwa_vis_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_vis_opt
  INTEGER id_id
  model_config_rec%afwa_vis_opt(id_id) = afwa_vis_opt
  RETURN
END SUBROUTINE nl_set_afwa_vis_opt
SUBROUTINE nl_set_afwa_cloud_opt ( id_id , afwa_cloud_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_cloud_opt
  INTEGER id_id
  model_config_rec%afwa_cloud_opt(id_id) = afwa_cloud_opt
  RETURN
END SUBROUTINE nl_set_afwa_cloud_opt
SUBROUTINE nl_set_afwa_therm_opt ( id_id , afwa_therm_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_therm_opt
  INTEGER id_id
  model_config_rec%afwa_therm_opt(id_id) = afwa_therm_opt
  RETURN
END SUBROUTINE nl_set_afwa_therm_opt
SUBROUTINE nl_set_afwa_turb_opt ( id_id , afwa_turb_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_turb_opt
  INTEGER id_id
  model_config_rec%afwa_turb_opt(id_id) = afwa_turb_opt
  RETURN
END SUBROUTINE nl_set_afwa_turb_opt
SUBROUTINE nl_set_afwa_buoy_opt ( id_id , afwa_buoy_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_buoy_opt
  INTEGER id_id
  model_config_rec%afwa_buoy_opt(id_id) = afwa_buoy_opt
  RETURN
END SUBROUTINE nl_set_afwa_buoy_opt
SUBROUTINE nl_set_afwa_hailcast_opt ( id_id , afwa_hailcast_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: afwa_hailcast_opt
  INTEGER id_id
  model_config_rec%afwa_hailcast_opt(id_id) = afwa_hailcast_opt
  RETURN
END SUBROUTINE nl_set_afwa_hailcast_opt
SUBROUTINE nl_set_afwa_ptype_ccn_tmp ( id_id , afwa_ptype_ccn_tmp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: afwa_ptype_ccn_tmp
  INTEGER id_id
  model_config_rec%afwa_ptype_ccn_tmp = afwa_ptype_ccn_tmp
  RETURN
END SUBROUTINE nl_set_afwa_ptype_ccn_tmp
SUBROUTINE nl_set_afwa_ptype_tot_melt ( id_id , afwa_ptype_tot_melt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: afwa_ptype_tot_melt
  INTEGER id_id
  model_config_rec%afwa_ptype_tot_melt = afwa_ptype_tot_melt
  RETURN
END SUBROUTINE nl_set_afwa_ptype_tot_melt
SUBROUTINE nl_set_perturb_bdy ( id_id , perturb_bdy )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: perturb_bdy
  INTEGER id_id
  model_config_rec%perturb_bdy = perturb_bdy
  RETURN
END SUBROUTINE nl_set_perturb_bdy
SUBROUTINE nl_set_chem_opt ( id_id , chem_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: chem_opt
  INTEGER id_id
  model_config_rec%chem_opt(id_id) = chem_opt
  RETURN
END SUBROUTINE nl_set_chem_opt
!ENDOFREGISTRYGENERATEDINCLUDE
