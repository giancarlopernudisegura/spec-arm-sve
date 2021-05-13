!STARTOFREGISTRYGENERATEDINCLUDE 'inc/nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit. Your changes to this file will be lost.
!
SUBROUTINE nl_set_run_days ( id_id , run_days )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: run_days
  INTEGER id_id
  model_config_rec%run_days = run_days
  RETURN
END SUBROUTINE nl_set_run_days
SUBROUTINE nl_set_run_hours ( id_id , run_hours )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: run_hours
  INTEGER id_id
  model_config_rec%run_hours = run_hours
  RETURN
END SUBROUTINE nl_set_run_hours
SUBROUTINE nl_set_run_minutes ( id_id , run_minutes )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: run_minutes
  INTEGER id_id
  model_config_rec%run_minutes = run_minutes
  RETURN
END SUBROUTINE nl_set_run_minutes
SUBROUTINE nl_set_run_seconds ( id_id , run_seconds )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: run_seconds
  INTEGER id_id
  model_config_rec%run_seconds = run_seconds
  RETURN
END SUBROUTINE nl_set_run_seconds
SUBROUTINE nl_set_start_year ( id_id , start_year )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: start_year
  INTEGER id_id
  model_config_rec%start_year(id_id) = start_year
  RETURN
END SUBROUTINE nl_set_start_year
SUBROUTINE nl_set_start_month ( id_id , start_month )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: start_month
  INTEGER id_id
  model_config_rec%start_month(id_id) = start_month
  RETURN
END SUBROUTINE nl_set_start_month
SUBROUTINE nl_set_start_day ( id_id , start_day )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: start_day
  INTEGER id_id
  model_config_rec%start_day(id_id) = start_day
  RETURN
END SUBROUTINE nl_set_start_day
SUBROUTINE nl_set_start_hour ( id_id , start_hour )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: start_hour
  INTEGER id_id
  model_config_rec%start_hour(id_id) = start_hour
  RETURN
END SUBROUTINE nl_set_start_hour
SUBROUTINE nl_set_start_minute ( id_id , start_minute )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: start_minute
  INTEGER id_id
  model_config_rec%start_minute(id_id) = start_minute
  RETURN
END SUBROUTINE nl_set_start_minute
SUBROUTINE nl_set_start_second ( id_id , start_second )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: start_second
  INTEGER id_id
  model_config_rec%start_second(id_id) = start_second
  RETURN
END SUBROUTINE nl_set_start_second
SUBROUTINE nl_set_end_year ( id_id , end_year )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: end_year
  INTEGER id_id
  model_config_rec%end_year(id_id) = end_year
  RETURN
END SUBROUTINE nl_set_end_year
SUBROUTINE nl_set_end_month ( id_id , end_month )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: end_month
  INTEGER id_id
  model_config_rec%end_month(id_id) = end_month
  RETURN
END SUBROUTINE nl_set_end_month
SUBROUTINE nl_set_end_day ( id_id , end_day )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: end_day
  INTEGER id_id
  model_config_rec%end_day(id_id) = end_day
  RETURN
END SUBROUTINE nl_set_end_day
SUBROUTINE nl_set_end_hour ( id_id , end_hour )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: end_hour
  INTEGER id_id
  model_config_rec%end_hour(id_id) = end_hour
  RETURN
END SUBROUTINE nl_set_end_hour
SUBROUTINE nl_set_end_minute ( id_id , end_minute )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: end_minute
  INTEGER id_id
  model_config_rec%end_minute(id_id) = end_minute
  RETURN
END SUBROUTINE nl_set_end_minute
SUBROUTINE nl_set_end_second ( id_id , end_second )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: end_second
  INTEGER id_id
  model_config_rec%end_second(id_id) = end_second
  RETURN
END SUBROUTINE nl_set_end_second
SUBROUTINE nl_set_interval_seconds ( id_id , interval_seconds )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: interval_seconds
  INTEGER id_id
  model_config_rec%interval_seconds = interval_seconds
  RETURN
END SUBROUTINE nl_set_interval_seconds
SUBROUTINE nl_set_input_from_file ( id_id , input_from_file )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: input_from_file
  INTEGER id_id
  model_config_rec%input_from_file(id_id) = input_from_file
  RETURN
END SUBROUTINE nl_set_input_from_file
SUBROUTINE nl_set_fine_input_stream ( id_id , fine_input_stream )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fine_input_stream
  INTEGER id_id
  model_config_rec%fine_input_stream(id_id) = fine_input_stream
  RETURN
END SUBROUTINE nl_set_fine_input_stream
SUBROUTINE nl_set_input_from_hires ( id_id , input_from_hires )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: input_from_hires
  INTEGER id_id
  model_config_rec%input_from_hires(id_id) = input_from_hires
  RETURN
END SUBROUTINE nl_set_input_from_hires
SUBROUTINE nl_set_rsmas_data_path ( id_id , rsmas_data_path )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: rsmas_data_path
  INTEGER id_id
  model_config_rec%rsmas_data_path = trim(rsmas_data_path)
  RETURN
END SUBROUTINE nl_set_rsmas_data_path
SUBROUTINE nl_set_all_ic_times ( id_id , all_ic_times )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: all_ic_times
  INTEGER id_id
  model_config_rec%all_ic_times = all_ic_times
  RETURN
END SUBROUTINE nl_set_all_ic_times
SUBROUTINE nl_set_julyr ( id_id , julyr )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: julyr
  INTEGER id_id
  model_config_rec%julyr(id_id) = julyr
  RETURN
END SUBROUTINE nl_set_julyr
SUBROUTINE nl_set_julday ( id_id , julday )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: julday
  INTEGER id_id
  model_config_rec%julday(id_id) = julday
  RETURN
END SUBROUTINE nl_set_julday
SUBROUTINE nl_set_gmt ( id_id , gmt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: gmt
  INTEGER id_id
  model_config_rec%gmt(id_id) = gmt
  RETURN
END SUBROUTINE nl_set_gmt
SUBROUTINE nl_set_input_inname ( id_id , input_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: input_inname
  INTEGER id_id
  model_config_rec%input_inname = trim(input_inname)
  RETURN
END SUBROUTINE nl_set_input_inname
SUBROUTINE nl_set_input_outname ( id_id , input_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: input_outname
  INTEGER id_id
  model_config_rec%input_outname = trim(input_outname)
  RETURN
END SUBROUTINE nl_set_input_outname
SUBROUTINE nl_set_bdy_inname ( id_id , bdy_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: bdy_inname
  INTEGER id_id
  model_config_rec%bdy_inname = trim(bdy_inname)
  RETURN
END SUBROUTINE nl_set_bdy_inname
SUBROUTINE nl_set_bdy_outname ( id_id , bdy_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: bdy_outname
  INTEGER id_id
  model_config_rec%bdy_outname = trim(bdy_outname)
  RETURN
END SUBROUTINE nl_set_bdy_outname
SUBROUTINE nl_set_rst_inname ( id_id , rst_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: rst_inname
  INTEGER id_id
  model_config_rec%rst_inname = trim(rst_inname)
  RETURN
END SUBROUTINE nl_set_rst_inname
SUBROUTINE nl_set_rst_outname ( id_id , rst_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: rst_outname
  INTEGER id_id
  model_config_rec%rst_outname = trim(rst_outname)
  RETURN
END SUBROUTINE nl_set_rst_outname
SUBROUTINE nl_set_write_input ( id_id , write_input )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: write_input
  INTEGER id_id
  model_config_rec%write_input = write_input
  RETURN
END SUBROUTINE nl_set_write_input
SUBROUTINE nl_set_write_restart_at_0h ( id_id , write_restart_at_0h )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: write_restart_at_0h
  INTEGER id_id
  model_config_rec%write_restart_at_0h = write_restart_at_0h
  RETURN
END SUBROUTINE nl_set_write_restart_at_0h
SUBROUTINE nl_set_write_hist_at_0h_rst ( id_id , write_hist_at_0h_rst )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: write_hist_at_0h_rst
  INTEGER id_id
  model_config_rec%write_hist_at_0h_rst = write_hist_at_0h_rst
  RETURN
END SUBROUTINE nl_set_write_hist_at_0h_rst
SUBROUTINE nl_set_adjust_output_times ( id_id , adjust_output_times )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: adjust_output_times
  INTEGER id_id
  model_config_rec%adjust_output_times = adjust_output_times
  RETURN
END SUBROUTINE nl_set_adjust_output_times
SUBROUTINE nl_set_adjust_input_times ( id_id , adjust_input_times )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: adjust_input_times
  INTEGER id_id
  model_config_rec%adjust_input_times = adjust_input_times
  RETURN
END SUBROUTINE nl_set_adjust_input_times
SUBROUTINE nl_set_diag_print ( id_id , diag_print )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: diag_print
  INTEGER id_id
  model_config_rec%diag_print = diag_print
  RETURN
END SUBROUTINE nl_set_diag_print
SUBROUTINE nl_set_nocolons ( id_id , nocolons )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: nocolons
  INTEGER id_id
  model_config_rec%nocolons = nocolons
  RETURN
END SUBROUTINE nl_set_nocolons
SUBROUTINE nl_set_cycling ( id_id , cycling )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: cycling
  INTEGER id_id
  model_config_rec%cycling = cycling
  RETURN
END SUBROUTINE nl_set_cycling
SUBROUTINE nl_set_output_diagnostics ( id_id , output_diagnostics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: output_diagnostics
  INTEGER id_id
  model_config_rec%output_diagnostics = output_diagnostics
  RETURN
END SUBROUTINE nl_set_output_diagnostics
SUBROUTINE nl_set_nwp_diagnostics ( id_id , nwp_diagnostics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: nwp_diagnostics
  INTEGER id_id
  model_config_rec%nwp_diagnostics = nwp_diagnostics
  RETURN
END SUBROUTINE nl_set_nwp_diagnostics
SUBROUTINE nl_set_output_ready_flag ( id_id , output_ready_flag )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: output_ready_flag
  INTEGER id_id
  model_config_rec%output_ready_flag = output_ready_flag
  RETURN
END SUBROUTINE nl_set_output_ready_flag
SUBROUTINE nl_set_dfi_opt ( id_id , dfi_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_opt
  INTEGER id_id
  model_config_rec%dfi_opt = dfi_opt
  RETURN
END SUBROUTINE nl_set_dfi_opt
SUBROUTINE nl_set_dfi_savehydmeteors ( id_id , dfi_savehydmeteors )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_savehydmeteors
  INTEGER id_id
  model_config_rec%dfi_savehydmeteors = dfi_savehydmeteors
  RETURN
END SUBROUTINE nl_set_dfi_savehydmeteors
SUBROUTINE nl_set_dfi_nfilter ( id_id , dfi_nfilter )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_nfilter
  INTEGER id_id
  model_config_rec%dfi_nfilter = dfi_nfilter
  RETURN
END SUBROUTINE nl_set_dfi_nfilter
SUBROUTINE nl_set_dfi_write_filtered_input ( id_id , dfi_write_filtered_input )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: dfi_write_filtered_input
  INTEGER id_id
  model_config_rec%dfi_write_filtered_input = dfi_write_filtered_input
  RETURN
END SUBROUTINE nl_set_dfi_write_filtered_input
SUBROUTINE nl_set_dfi_write_dfi_history ( id_id , dfi_write_dfi_history )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: dfi_write_dfi_history
  INTEGER id_id
  model_config_rec%dfi_write_dfi_history = dfi_write_dfi_history
  RETURN
END SUBROUTINE nl_set_dfi_write_dfi_history
SUBROUTINE nl_set_dfi_cutoff_seconds ( id_id , dfi_cutoff_seconds )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_cutoff_seconds
  INTEGER id_id
  model_config_rec%dfi_cutoff_seconds = dfi_cutoff_seconds
  RETURN
END SUBROUTINE nl_set_dfi_cutoff_seconds
SUBROUTINE nl_set_dfi_time_dim ( id_id , dfi_time_dim )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_time_dim
  INTEGER id_id
  model_config_rec%dfi_time_dim = dfi_time_dim
  RETURN
END SUBROUTINE nl_set_dfi_time_dim
SUBROUTINE nl_set_dfi_fwdstop_year ( id_id , dfi_fwdstop_year )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_fwdstop_year
  INTEGER id_id
  model_config_rec%dfi_fwdstop_year = dfi_fwdstop_year
  RETURN
END SUBROUTINE nl_set_dfi_fwdstop_year
SUBROUTINE nl_set_dfi_fwdstop_month ( id_id , dfi_fwdstop_month )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_fwdstop_month
  INTEGER id_id
  model_config_rec%dfi_fwdstop_month = dfi_fwdstop_month
  RETURN
END SUBROUTINE nl_set_dfi_fwdstop_month
SUBROUTINE nl_set_dfi_fwdstop_day ( id_id , dfi_fwdstop_day )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_fwdstop_day
  INTEGER id_id
  model_config_rec%dfi_fwdstop_day = dfi_fwdstop_day
  RETURN
END SUBROUTINE nl_set_dfi_fwdstop_day
SUBROUTINE nl_set_dfi_fwdstop_hour ( id_id , dfi_fwdstop_hour )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_fwdstop_hour
  INTEGER id_id
  model_config_rec%dfi_fwdstop_hour = dfi_fwdstop_hour
  RETURN
END SUBROUTINE nl_set_dfi_fwdstop_hour
SUBROUTINE nl_set_dfi_fwdstop_minute ( id_id , dfi_fwdstop_minute )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_fwdstop_minute
  INTEGER id_id
  model_config_rec%dfi_fwdstop_minute = dfi_fwdstop_minute
  RETURN
END SUBROUTINE nl_set_dfi_fwdstop_minute
SUBROUTINE nl_set_dfi_fwdstop_second ( id_id , dfi_fwdstop_second )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_fwdstop_second
  INTEGER id_id
  model_config_rec%dfi_fwdstop_second = dfi_fwdstop_second
  RETURN
END SUBROUTINE nl_set_dfi_fwdstop_second
SUBROUTINE nl_set_dfi_bckstop_year ( id_id , dfi_bckstop_year )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_bckstop_year
  INTEGER id_id
  model_config_rec%dfi_bckstop_year = dfi_bckstop_year
  RETURN
END SUBROUTINE nl_set_dfi_bckstop_year
SUBROUTINE nl_set_dfi_bckstop_month ( id_id , dfi_bckstop_month )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_bckstop_month
  INTEGER id_id
  model_config_rec%dfi_bckstop_month = dfi_bckstop_month
  RETURN
END SUBROUTINE nl_set_dfi_bckstop_month
SUBROUTINE nl_set_dfi_bckstop_day ( id_id , dfi_bckstop_day )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_bckstop_day
  INTEGER id_id
  model_config_rec%dfi_bckstop_day = dfi_bckstop_day
  RETURN
END SUBROUTINE nl_set_dfi_bckstop_day
SUBROUTINE nl_set_dfi_bckstop_hour ( id_id , dfi_bckstop_hour )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_bckstop_hour
  INTEGER id_id
  model_config_rec%dfi_bckstop_hour = dfi_bckstop_hour
  RETURN
END SUBROUTINE nl_set_dfi_bckstop_hour
SUBROUTINE nl_set_dfi_bckstop_minute ( id_id , dfi_bckstop_minute )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_bckstop_minute
  INTEGER id_id
  model_config_rec%dfi_bckstop_minute = dfi_bckstop_minute
  RETURN
END SUBROUTINE nl_set_dfi_bckstop_minute
SUBROUTINE nl_set_dfi_bckstop_second ( id_id , dfi_bckstop_second )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_bckstop_second
  INTEGER id_id
  model_config_rec%dfi_bckstop_second = dfi_bckstop_second
  RETURN
END SUBROUTINE nl_set_dfi_bckstop_second
SUBROUTINE nl_set_time_step ( id_id , time_step )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: time_step
  INTEGER id_id
  model_config_rec%time_step = time_step
  RETURN
END SUBROUTINE nl_set_time_step
SUBROUTINE nl_set_time_step_fract_num ( id_id , time_step_fract_num )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: time_step_fract_num
  INTEGER id_id
  model_config_rec%time_step_fract_num = time_step_fract_num
  RETURN
END SUBROUTINE nl_set_time_step_fract_num
SUBROUTINE nl_set_time_step_fract_den ( id_id , time_step_fract_den )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: time_step_fract_den
  INTEGER id_id
  model_config_rec%time_step_fract_den = time_step_fract_den
  RETURN
END SUBROUTINE nl_set_time_step_fract_den
SUBROUTINE nl_set_time_step_dfi ( id_id , time_step_dfi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: time_step_dfi
  INTEGER id_id
  model_config_rec%time_step_dfi = time_step_dfi
  RETURN
END SUBROUTINE nl_set_time_step_dfi
SUBROUTINE nl_set_min_time_step ( id_id , min_time_step )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: min_time_step
  INTEGER id_id
  model_config_rec%min_time_step(id_id) = min_time_step
  RETURN
END SUBROUTINE nl_set_min_time_step
SUBROUTINE nl_set_min_time_step_den ( id_id , min_time_step_den )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: min_time_step_den
  INTEGER id_id
  model_config_rec%min_time_step_den(id_id) = min_time_step_den
  RETURN
END SUBROUTINE nl_set_min_time_step_den
SUBROUTINE nl_set_max_time_step ( id_id , max_time_step )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: max_time_step
  INTEGER id_id
  model_config_rec%max_time_step(id_id) = max_time_step
  RETURN
END SUBROUTINE nl_set_max_time_step
SUBROUTINE nl_set_max_time_step_den ( id_id , max_time_step_den )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: max_time_step_den
  INTEGER id_id
  model_config_rec%max_time_step_den(id_id) = max_time_step_den
  RETURN
END SUBROUTINE nl_set_max_time_step_den
SUBROUTINE nl_set_target_cfl ( id_id , target_cfl )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: target_cfl
  INTEGER id_id
  model_config_rec%target_cfl(id_id) = target_cfl
  RETURN
END SUBROUTINE nl_set_target_cfl
SUBROUTINE nl_set_target_hcfl ( id_id , target_hcfl )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: target_hcfl
  INTEGER id_id
  model_config_rec%target_hcfl(id_id) = target_hcfl
  RETURN
END SUBROUTINE nl_set_target_hcfl
SUBROUTINE nl_set_max_step_increase_pct ( id_id , max_step_increase_pct )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: max_step_increase_pct
  INTEGER id_id
  model_config_rec%max_step_increase_pct(id_id) = max_step_increase_pct
  RETURN
END SUBROUTINE nl_set_max_step_increase_pct
SUBROUTINE nl_set_starting_time_step ( id_id , starting_time_step )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: starting_time_step
  INTEGER id_id
  model_config_rec%starting_time_step(id_id) = starting_time_step
  RETURN
END SUBROUTINE nl_set_starting_time_step
SUBROUTINE nl_set_starting_time_step_den ( id_id , starting_time_step_den )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: starting_time_step_den
  INTEGER id_id
  model_config_rec%starting_time_step_den(id_id) = starting_time_step_den
  RETURN
END SUBROUTINE nl_set_starting_time_step_den
SUBROUTINE nl_set_step_to_output_time ( id_id , step_to_output_time )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: step_to_output_time
  INTEGER id_id
  model_config_rec%step_to_output_time = step_to_output_time
  RETURN
END SUBROUTINE nl_set_step_to_output_time
SUBROUTINE nl_set_adaptation_domain ( id_id , adaptation_domain )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: adaptation_domain
  INTEGER id_id
  model_config_rec%adaptation_domain = adaptation_domain
  RETURN
END SUBROUTINE nl_set_adaptation_domain
SUBROUTINE nl_set_use_adaptive_time_step ( id_id , use_adaptive_time_step )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: use_adaptive_time_step
  INTEGER id_id
  model_config_rec%use_adaptive_time_step = use_adaptive_time_step
  RETURN
END SUBROUTINE nl_set_use_adaptive_time_step
SUBROUTINE nl_set_use_adaptive_time_step_dfi ( id_id , use_adaptive_time_step_dfi )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: use_adaptive_time_step_dfi
  INTEGER id_id
  model_config_rec%use_adaptive_time_step_dfi = use_adaptive_time_step_dfi
  RETURN
END SUBROUTINE nl_set_use_adaptive_time_step_dfi
SUBROUTINE nl_set_max_dom ( id_id , max_dom )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: max_dom
  INTEGER id_id
  model_config_rec%max_dom = max_dom
  RETURN
END SUBROUTINE nl_set_max_dom
SUBROUTINE nl_set_lats_to_mic ( id_id , lats_to_mic )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lats_to_mic
  INTEGER id_id
  model_config_rec%lats_to_mic = lats_to_mic
  RETURN
END SUBROUTINE nl_set_lats_to_mic
SUBROUTINE nl_set_s_we ( id_id , s_we )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: s_we
  INTEGER id_id
  model_config_rec%s_we(id_id) = s_we
  RETURN
END SUBROUTINE nl_set_s_we
SUBROUTINE nl_set_e_we ( id_id , e_we )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: e_we
  INTEGER id_id
  model_config_rec%e_we(id_id) = e_we
  RETURN
END SUBROUTINE nl_set_e_we
SUBROUTINE nl_set_s_sn ( id_id , s_sn )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: s_sn
  INTEGER id_id
  model_config_rec%s_sn(id_id) = s_sn
  RETURN
END SUBROUTINE nl_set_s_sn
SUBROUTINE nl_set_e_sn ( id_id , e_sn )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: e_sn
  INTEGER id_id
  model_config_rec%e_sn(id_id) = e_sn
  RETURN
END SUBROUTINE nl_set_e_sn
SUBROUTINE nl_set_s_vert ( id_id , s_vert )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: s_vert
  INTEGER id_id
  model_config_rec%s_vert(id_id) = s_vert
  RETURN
END SUBROUTINE nl_set_s_vert
SUBROUTINE nl_set_e_vert ( id_id , e_vert )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: e_vert
  INTEGER id_id
  model_config_rec%e_vert(id_id) = e_vert
  RETURN
END SUBROUTINE nl_set_e_vert
SUBROUTINE nl_set_num_metgrid_levels ( id_id , num_metgrid_levels )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_metgrid_levels
  INTEGER id_id
  model_config_rec%num_metgrid_levels = num_metgrid_levels
  RETURN
END SUBROUTINE nl_set_num_metgrid_levels
SUBROUTINE nl_set_num_metgrid_soil_levels ( id_id , num_metgrid_soil_levels )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_metgrid_soil_levels
  INTEGER id_id
  model_config_rec%num_metgrid_soil_levels = num_metgrid_soil_levels
  RETURN
END SUBROUTINE nl_set_num_metgrid_soil_levels
SUBROUTINE nl_set_p_top_requested ( id_id , p_top_requested )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: p_top_requested
  INTEGER id_id
  model_config_rec%p_top_requested = p_top_requested
  RETURN
END SUBROUTINE nl_set_p_top_requested
SUBROUTINE nl_set_interp_theta ( id_id , interp_theta )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: interp_theta
  INTEGER id_id
  model_config_rec%interp_theta = interp_theta
  RETURN
END SUBROUTINE nl_set_interp_theta
SUBROUTINE nl_set_interp_type ( id_id , interp_type )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: interp_type
  INTEGER id_id
  model_config_rec%interp_type = interp_type
  RETURN
END SUBROUTINE nl_set_interp_type
SUBROUTINE nl_set_vert_refine_method ( id_id , vert_refine_method )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: vert_refine_method
  INTEGER id_id
  model_config_rec%vert_refine_method(id_id) = vert_refine_method
  RETURN
END SUBROUTINE nl_set_vert_refine_method
SUBROUTINE nl_set_vert_refine_fact ( id_id , vert_refine_fact )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: vert_refine_fact
  INTEGER id_id
  model_config_rec%vert_refine_fact = vert_refine_fact
  RETURN
END SUBROUTINE nl_set_vert_refine_fact
SUBROUTINE nl_set_extrap_type ( id_id , extrap_type )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: extrap_type
  INTEGER id_id
  model_config_rec%extrap_type = extrap_type
  RETURN
END SUBROUTINE nl_set_extrap_type
SUBROUTINE nl_set_t_extrap_type ( id_id , t_extrap_type )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: t_extrap_type
  INTEGER id_id
  model_config_rec%t_extrap_type = t_extrap_type
  RETURN
END SUBROUTINE nl_set_t_extrap_type
SUBROUTINE nl_set_hypsometric_opt ( id_id , hypsometric_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: hypsometric_opt
  INTEGER id_id
  model_config_rec%hypsometric_opt = hypsometric_opt
  RETURN
END SUBROUTINE nl_set_hypsometric_opt
SUBROUTINE nl_set_lowest_lev_from_sfc ( id_id , lowest_lev_from_sfc )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: lowest_lev_from_sfc
  INTEGER id_id
  model_config_rec%lowest_lev_from_sfc = lowest_lev_from_sfc
  RETURN
END SUBROUTINE nl_set_lowest_lev_from_sfc
SUBROUTINE nl_set_use_levels_below_ground ( id_id , use_levels_below_ground )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: use_levels_below_ground
  INTEGER id_id
  model_config_rec%use_levels_below_ground = use_levels_below_ground
  RETURN
END SUBROUTINE nl_set_use_levels_below_ground
SUBROUTINE nl_set_use_tavg_for_tsk ( id_id , use_tavg_for_tsk )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: use_tavg_for_tsk
  INTEGER id_id
  model_config_rec%use_tavg_for_tsk = use_tavg_for_tsk
  RETURN
END SUBROUTINE nl_set_use_tavg_for_tsk
SUBROUTINE nl_set_use_surface ( id_id , use_surface )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: use_surface
  INTEGER id_id
  model_config_rec%use_surface = use_surface
  RETURN
END SUBROUTINE nl_set_use_surface
SUBROUTINE nl_set_lagrange_order ( id_id , lagrange_order )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lagrange_order
  INTEGER id_id
  model_config_rec%lagrange_order = lagrange_order
  RETURN
END SUBROUTINE nl_set_lagrange_order
SUBROUTINE nl_set_force_sfc_in_vinterp ( id_id , force_sfc_in_vinterp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: force_sfc_in_vinterp
  INTEGER id_id
  model_config_rec%force_sfc_in_vinterp = force_sfc_in_vinterp
  RETURN
END SUBROUTINE nl_set_force_sfc_in_vinterp
SUBROUTINE nl_set_zap_close_levels ( id_id , zap_close_levels )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: zap_close_levels
  INTEGER id_id
  model_config_rec%zap_close_levels = zap_close_levels
  RETURN
END SUBROUTINE nl_set_zap_close_levels
SUBROUTINE nl_set_maxw_horiz_pres_diff ( id_id , maxw_horiz_pres_diff )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: maxw_horiz_pres_diff
  INTEGER id_id
  model_config_rec%maxw_horiz_pres_diff = maxw_horiz_pres_diff
  RETURN
END SUBROUTINE nl_set_maxw_horiz_pres_diff
SUBROUTINE nl_set_trop_horiz_pres_diff ( id_id , trop_horiz_pres_diff )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: trop_horiz_pres_diff
  INTEGER id_id
  model_config_rec%trop_horiz_pres_diff = trop_horiz_pres_diff
  RETURN
END SUBROUTINE nl_set_trop_horiz_pres_diff
SUBROUTINE nl_set_maxw_above_this_level ( id_id , maxw_above_this_level )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: maxw_above_this_level
  INTEGER id_id
  model_config_rec%maxw_above_this_level = maxw_above_this_level
  RETURN
END SUBROUTINE nl_set_maxw_above_this_level
SUBROUTINE nl_set_sfcp_to_sfcp ( id_id , sfcp_to_sfcp )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: sfcp_to_sfcp
  INTEGER id_id
  model_config_rec%sfcp_to_sfcp = sfcp_to_sfcp
  RETURN
END SUBROUTINE nl_set_sfcp_to_sfcp
SUBROUTINE nl_set_adjust_heights ( id_id , adjust_heights )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: adjust_heights
  INTEGER id_id
  model_config_rec%adjust_heights = adjust_heights
  RETURN
END SUBROUTINE nl_set_adjust_heights
SUBROUTINE nl_set_smooth_cg_topo ( id_id , smooth_cg_topo )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: smooth_cg_topo
  INTEGER id_id
  model_config_rec%smooth_cg_topo = smooth_cg_topo
  RETURN
END SUBROUTINE nl_set_smooth_cg_topo
SUBROUTINE nl_set_nest_interp_coord ( id_id , nest_interp_coord )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: nest_interp_coord
  INTEGER id_id
  model_config_rec%nest_interp_coord = nest_interp_coord
  RETURN
END SUBROUTINE nl_set_nest_interp_coord
SUBROUTINE nl_set_aggregate_lu ( id_id , aggregate_lu )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: aggregate_lu
  INTEGER id_id
  model_config_rec%aggregate_lu = aggregate_lu
  RETURN
END SUBROUTINE nl_set_aggregate_lu
SUBROUTINE nl_set_rh2qv_wrt_liquid ( id_id , rh2qv_wrt_liquid )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: rh2qv_wrt_liquid
  INTEGER id_id
  model_config_rec%rh2qv_wrt_liquid = rh2qv_wrt_liquid
  RETURN
END SUBROUTINE nl_set_rh2qv_wrt_liquid
SUBROUTINE nl_set_rh2qv_method ( id_id , rh2qv_method )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: rh2qv_method
  INTEGER id_id
  model_config_rec%rh2qv_method = rh2qv_method
  RETURN
END SUBROUTINE nl_set_rh2qv_method
SUBROUTINE nl_set_qv_max_p_safe ( id_id , qv_max_p_safe )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: qv_max_p_safe
  INTEGER id_id
  model_config_rec%qv_max_p_safe = qv_max_p_safe
  RETURN
END SUBROUTINE nl_set_qv_max_p_safe
SUBROUTINE nl_set_qv_max_flag ( id_id , qv_max_flag )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: qv_max_flag
  INTEGER id_id
  model_config_rec%qv_max_flag = qv_max_flag
  RETURN
END SUBROUTINE nl_set_qv_max_flag
SUBROUTINE nl_set_qv_max_value ( id_id , qv_max_value )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: qv_max_value
  INTEGER id_id
  model_config_rec%qv_max_value = qv_max_value
  RETURN
END SUBROUTINE nl_set_qv_max_value
SUBROUTINE nl_set_qv_min_p_safe ( id_id , qv_min_p_safe )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: qv_min_p_safe
  INTEGER id_id
  model_config_rec%qv_min_p_safe = qv_min_p_safe
  RETURN
END SUBROUTINE nl_set_qv_min_p_safe
SUBROUTINE nl_set_qv_min_flag ( id_id , qv_min_flag )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: qv_min_flag
  INTEGER id_id
  model_config_rec%qv_min_flag = qv_min_flag
  RETURN
END SUBROUTINE nl_set_qv_min_flag
SUBROUTINE nl_set_qv_min_value ( id_id , qv_min_value )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: qv_min_value
  INTEGER id_id
  model_config_rec%qv_min_value = qv_min_value
  RETURN
END SUBROUTINE nl_set_qv_min_value
SUBROUTINE nl_set_dx ( id_id , dx )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: dx
  INTEGER id_id
  model_config_rec%dx(id_id) = dx
  RETURN
END SUBROUTINE nl_set_dx
SUBROUTINE nl_set_dy ( id_id , dy )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: dy
  INTEGER id_id
  model_config_rec%dy(id_id) = dy
  RETURN
END SUBROUTINE nl_set_dy
SUBROUTINE nl_set_grid_id ( id_id , grid_id )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: grid_id
  INTEGER id_id
  model_config_rec%grid_id(id_id) = grid_id
  RETURN
END SUBROUTINE nl_set_grid_id
SUBROUTINE nl_set_grid_allowed ( id_id , grid_allowed )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: grid_allowed
  INTEGER id_id
  model_config_rec%grid_allowed(id_id) = grid_allowed
  RETURN
END SUBROUTINE nl_set_grid_allowed
SUBROUTINE nl_set_parent_id ( id_id , parent_id )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: parent_id
  INTEGER id_id
  model_config_rec%parent_id(id_id) = parent_id
  RETURN
END SUBROUTINE nl_set_parent_id
SUBROUTINE nl_set_i_parent_start ( id_id , i_parent_start )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: i_parent_start
  INTEGER id_id
  model_config_rec%i_parent_start(id_id) = i_parent_start
  RETURN
END SUBROUTINE nl_set_i_parent_start
SUBROUTINE nl_set_j_parent_start ( id_id , j_parent_start )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: j_parent_start
  INTEGER id_id
  model_config_rec%j_parent_start(id_id) = j_parent_start
  RETURN
END SUBROUTINE nl_set_j_parent_start
SUBROUTINE nl_set_parent_grid_ratio ( id_id , parent_grid_ratio )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: parent_grid_ratio
  INTEGER id_id
  model_config_rec%parent_grid_ratio(id_id) = parent_grid_ratio
  RETURN
END SUBROUTINE nl_set_parent_grid_ratio
SUBROUTINE nl_set_parent_time_step_ratio ( id_id , parent_time_step_ratio )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: parent_time_step_ratio
  INTEGER id_id
  model_config_rec%parent_time_step_ratio(id_id) = parent_time_step_ratio
  RETURN
END SUBROUTINE nl_set_parent_time_step_ratio
SUBROUTINE nl_set_feedback ( id_id , feedback )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: feedback
  INTEGER id_id
  model_config_rec%feedback = feedback
  RETURN
END SUBROUTINE nl_set_feedback
SUBROUTINE nl_set_smooth_option ( id_id , smooth_option )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: smooth_option
  INTEGER id_id
  model_config_rec%smooth_option = smooth_option
  RETURN
END SUBROUTINE nl_set_smooth_option
SUBROUTINE nl_set_blend_width ( id_id , blend_width )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: blend_width
  INTEGER id_id
  model_config_rec%blend_width = blend_width
  RETURN
END SUBROUTINE nl_set_blend_width
SUBROUTINE nl_set_ztop ( id_id , ztop )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: ztop
  INTEGER id_id
  model_config_rec%ztop(id_id) = ztop
  RETURN
END SUBROUTINE nl_set_ztop
SUBROUTINE nl_set_moad_grid_ratio ( id_id , moad_grid_ratio )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: moad_grid_ratio
  INTEGER id_id
  model_config_rec%moad_grid_ratio(id_id) = moad_grid_ratio
  RETURN
END SUBROUTINE nl_set_moad_grid_ratio
SUBROUTINE nl_set_moad_time_step_ratio ( id_id , moad_time_step_ratio )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: moad_time_step_ratio
  INTEGER id_id
  model_config_rec%moad_time_step_ratio(id_id) = moad_time_step_ratio
  RETURN
END SUBROUTINE nl_set_moad_time_step_ratio
SUBROUTINE nl_set_shw ( id_id , shw )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: shw
  INTEGER id_id
  model_config_rec%shw(id_id) = shw
  RETURN
END SUBROUTINE nl_set_shw
SUBROUTINE nl_set_tile_sz_x ( id_id , tile_sz_x )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tile_sz_x
  INTEGER id_id
  model_config_rec%tile_sz_x = tile_sz_x
  RETURN
END SUBROUTINE nl_set_tile_sz_x
SUBROUTINE nl_set_tile_sz_y ( id_id , tile_sz_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tile_sz_y
  INTEGER id_id
  model_config_rec%tile_sz_y = tile_sz_y
  RETURN
END SUBROUTINE nl_set_tile_sz_y
SUBROUTINE nl_set_numtiles ( id_id , numtiles )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: numtiles
  INTEGER id_id
  model_config_rec%numtiles = numtiles
  RETURN
END SUBROUTINE nl_set_numtiles
SUBROUTINE nl_set_numtiles_inc ( id_id , numtiles_inc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: numtiles_inc
  INTEGER id_id
  model_config_rec%numtiles_inc = numtiles_inc
  RETURN
END SUBROUTINE nl_set_numtiles_inc
SUBROUTINE nl_set_numtiles_x ( id_id , numtiles_x )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: numtiles_x
  INTEGER id_id
  model_config_rec%numtiles_x = numtiles_x
  RETURN
END SUBROUTINE nl_set_numtiles_x
SUBROUTINE nl_set_numtiles_y ( id_id , numtiles_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: numtiles_y
  INTEGER id_id
  model_config_rec%numtiles_y = numtiles_y
  RETURN
END SUBROUTINE nl_set_numtiles_y
SUBROUTINE nl_set_tile_strategy ( id_id , tile_strategy )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tile_strategy
  INTEGER id_id
  model_config_rec%tile_strategy = tile_strategy
  RETURN
END SUBROUTINE nl_set_tile_strategy
SUBROUTINE nl_set_nproc_x ( id_id , nproc_x )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: nproc_x
  INTEGER id_id
  model_config_rec%nproc_x = nproc_x
  RETURN
END SUBROUTINE nl_set_nproc_x
SUBROUTINE nl_set_nproc_y ( id_id , nproc_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: nproc_y
  INTEGER id_id
  model_config_rec%nproc_y = nproc_y
  RETURN
END SUBROUTINE nl_set_nproc_y
SUBROUTINE nl_set_irand ( id_id , irand )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: irand
  INTEGER id_id
  model_config_rec%irand = irand
  RETURN
END SUBROUTINE nl_set_irand
SUBROUTINE nl_set_dt ( id_id , dt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: dt
  INTEGER id_id
  model_config_rec%dt(id_id) = dt
  RETURN
END SUBROUTINE nl_set_dt
SUBROUTINE nl_set_num_moves ( id_id , num_moves )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_moves
  INTEGER id_id
  model_config_rec%num_moves = num_moves
  RETURN
END SUBROUTINE nl_set_num_moves
SUBROUTINE nl_set_ts_buf_size ( id_id , ts_buf_size )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ts_buf_size
  INTEGER id_id
  model_config_rec%ts_buf_size = ts_buf_size
  RETURN
END SUBROUTINE nl_set_ts_buf_size
SUBROUTINE nl_set_max_ts_locs ( id_id , max_ts_locs )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: max_ts_locs
  INTEGER id_id
  model_config_rec%max_ts_locs = max_ts_locs
  RETURN
END SUBROUTINE nl_set_max_ts_locs
SUBROUTINE nl_set_vortex_interval ( id_id , vortex_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: vortex_interval
  INTEGER id_id
  model_config_rec%vortex_interval(id_id) = vortex_interval
  RETURN
END SUBROUTINE nl_set_vortex_interval
SUBROUTINE nl_set_max_vortex_speed ( id_id , max_vortex_speed )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: max_vortex_speed
  INTEGER id_id
  model_config_rec%max_vortex_speed(id_id) = max_vortex_speed
  RETURN
END SUBROUTINE nl_set_max_vortex_speed
SUBROUTINE nl_set_corral_dist ( id_id , corral_dist )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: corral_dist
  INTEGER id_id
  model_config_rec%corral_dist(id_id) = corral_dist
  RETURN
END SUBROUTINE nl_set_corral_dist
SUBROUTINE nl_set_track_level ( id_id , track_level )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: track_level
  INTEGER id_id
  model_config_rec%track_level = track_level
  RETURN
END SUBROUTINE nl_set_track_level
SUBROUTINE nl_set_time_to_move ( id_id , time_to_move )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: time_to_move
  INTEGER id_id
  model_config_rec%time_to_move(id_id) = time_to_move
  RETURN
END SUBROUTINE nl_set_time_to_move
SUBROUTINE nl_set_move_id ( id_id , move_id )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: move_id
  INTEGER id_id
  model_config_rec%move_id(id_id) = move_id
  RETURN
END SUBROUTINE nl_set_move_id
SUBROUTINE nl_set_move_interval ( id_id , move_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: move_interval
  INTEGER id_id
  model_config_rec%move_interval(id_id) = move_interval
  RETURN
END SUBROUTINE nl_set_move_interval
SUBROUTINE nl_set_move_cd_x ( id_id , move_cd_x )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: move_cd_x
  INTEGER id_id
  model_config_rec%move_cd_x(id_id) = move_cd_x
  RETURN
END SUBROUTINE nl_set_move_cd_x
SUBROUTINE nl_set_move_cd_y ( id_id , move_cd_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: move_cd_y
  INTEGER id_id
  model_config_rec%move_cd_y(id_id) = move_cd_y
  RETURN
END SUBROUTINE nl_set_move_cd_y
SUBROUTINE nl_set_swap_x ( id_id , swap_x )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: swap_x
  INTEGER id_id
  model_config_rec%swap_x(id_id) = swap_x
  RETURN
END SUBROUTINE nl_set_swap_x
SUBROUTINE nl_set_swap_y ( id_id , swap_y )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: swap_y
  INTEGER id_id
  model_config_rec%swap_y(id_id) = swap_y
  RETURN
END SUBROUTINE nl_set_swap_y
SUBROUTINE nl_set_cycle_x ( id_id , cycle_x )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: cycle_x
  INTEGER id_id
  model_config_rec%cycle_x(id_id) = cycle_x
  RETURN
END SUBROUTINE nl_set_cycle_x
SUBROUTINE nl_set_cycle_y ( id_id , cycle_y )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: cycle_y
  INTEGER id_id
  model_config_rec%cycle_y(id_id) = cycle_y
  RETURN
END SUBROUTINE nl_set_cycle_y
SUBROUTINE nl_set_reorder_mesh ( id_id , reorder_mesh )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: reorder_mesh
  INTEGER id_id
  model_config_rec%reorder_mesh = reorder_mesh
  RETURN
END SUBROUTINE nl_set_reorder_mesh
SUBROUTINE nl_set_perturb_input ( id_id , perturb_input )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: perturb_input
  INTEGER id_id
  model_config_rec%perturb_input = perturb_input
  RETURN
END SUBROUTINE nl_set_perturb_input
SUBROUTINE nl_set_eta_levels ( id_id , eta_levels )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: eta_levels
  INTEGER id_id
  model_config_rec%eta_levels(id_id) = eta_levels
  RETURN
END SUBROUTINE nl_set_eta_levels
SUBROUTINE nl_set_max_dz ( id_id , max_dz )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: max_dz
  INTEGER id_id
  model_config_rec%max_dz = max_dz
  RETURN
END SUBROUTINE nl_set_max_dz
SUBROUTINE nl_set_ocean_levels ( id_id , ocean_levels )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ocean_levels
  INTEGER id_id
  model_config_rec%ocean_levels = ocean_levels
  RETURN
END SUBROUTINE nl_set_ocean_levels
SUBROUTINE nl_set_ocean_z ( id_id , ocean_z )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: ocean_z
  INTEGER id_id
  model_config_rec%ocean_z(id_id) = ocean_z
  RETURN
END SUBROUTINE nl_set_ocean_z
SUBROUTINE nl_set_ocean_t ( id_id , ocean_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: ocean_t
  INTEGER id_id
  model_config_rec%ocean_t(id_id) = ocean_t
  RETURN
END SUBROUTINE nl_set_ocean_t
SUBROUTINE nl_set_ocean_s ( id_id , ocean_s )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: ocean_s
  INTEGER id_id
  model_config_rec%ocean_s(id_id) = ocean_s
  RETURN
END SUBROUTINE nl_set_ocean_s
SUBROUTINE nl_set_num_traj ( id_id , num_traj )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_traj
  INTEGER id_id
  model_config_rec%num_traj = num_traj
  RETURN
END SUBROUTINE nl_set_num_traj
SUBROUTINE nl_set_max_ts_level ( id_id , max_ts_level )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: max_ts_level
  INTEGER id_id
  model_config_rec%max_ts_level = max_ts_level
  RETURN
END SUBROUTINE nl_set_max_ts_level
SUBROUTINE nl_set_track_loc_in ( id_id , track_loc_in )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: track_loc_in
  INTEGER id_id
  model_config_rec%track_loc_in = track_loc_in
  RETURN
END SUBROUTINE nl_set_track_loc_in
SUBROUTINE nl_set_num_ext_model_couple_dom ( id_id , num_ext_model_couple_dom )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_ext_model_couple_dom
  INTEGER id_id
  model_config_rec%num_ext_model_couple_dom = num_ext_model_couple_dom
  RETURN
END SUBROUTINE nl_set_num_ext_model_couple_dom
SUBROUTINE nl_set_insert_bogus_storm ( id_id , insert_bogus_storm )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: insert_bogus_storm
  INTEGER id_id
  model_config_rec%insert_bogus_storm = insert_bogus_storm
  RETURN
END SUBROUTINE nl_set_insert_bogus_storm
SUBROUTINE nl_set_remove_storm ( id_id , remove_storm )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: remove_storm
  INTEGER id_id
  model_config_rec%remove_storm = remove_storm
  RETURN
END SUBROUTINE nl_set_remove_storm
SUBROUTINE nl_set_num_storm ( id_id , num_storm )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_storm
  INTEGER id_id
  model_config_rec%num_storm = num_storm
  RETURN
END SUBROUTINE nl_set_num_storm
SUBROUTINE nl_set_latc_loc ( id_id , latc_loc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: latc_loc
  INTEGER id_id
  model_config_rec%latc_loc(id_id) = latc_loc
  RETURN
END SUBROUTINE nl_set_latc_loc
SUBROUTINE nl_set_lonc_loc ( id_id , lonc_loc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: lonc_loc
  INTEGER id_id
  model_config_rec%lonc_loc(id_id) = lonc_loc
  RETURN
END SUBROUTINE nl_set_lonc_loc
SUBROUTINE nl_set_vmax_meters_per_second ( id_id , vmax_meters_per_second )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: vmax_meters_per_second
  INTEGER id_id
  model_config_rec%vmax_meters_per_second(id_id) = vmax_meters_per_second
  RETURN
END SUBROUTINE nl_set_vmax_meters_per_second
SUBROUTINE nl_set_rmax ( id_id , rmax )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: rmax
  INTEGER id_id
  model_config_rec%rmax(id_id) = rmax
  RETURN
END SUBROUTINE nl_set_rmax
SUBROUTINE nl_set_vmax_ratio ( id_id , vmax_ratio )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: vmax_ratio
  INTEGER id_id
  model_config_rec%vmax_ratio(id_id) = vmax_ratio
  RETURN
END SUBROUTINE nl_set_vmax_ratio
SUBROUTINE nl_set_rankine_lid ( id_id , rankine_lid )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: rankine_lid
  INTEGER id_id
  model_config_rec%rankine_lid = rankine_lid
  RETURN
END SUBROUTINE nl_set_rankine_lid
SUBROUTINE nl_set_mp_physics ( id_id , mp_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: mp_physics
  INTEGER id_id
  model_config_rec%mp_physics(id_id) = mp_physics
  RETURN
END SUBROUTINE nl_set_mp_physics
SUBROUTINE nl_set_nssl_cccn ( id_id , nssl_cccn )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_cccn
  INTEGER id_id
  model_config_rec%nssl_cccn(id_id) = nssl_cccn
  RETURN
END SUBROUTINE nl_set_nssl_cccn
SUBROUTINE nl_set_nssl_alphah ( id_id , nssl_alphah )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_alphah
  INTEGER id_id
  model_config_rec%nssl_alphah(id_id) = nssl_alphah
  RETURN
END SUBROUTINE nl_set_nssl_alphah
SUBROUTINE nl_set_nssl_alphahl ( id_id , nssl_alphahl )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_alphahl
  INTEGER id_id
  model_config_rec%nssl_alphahl(id_id) = nssl_alphahl
  RETURN
END SUBROUTINE nl_set_nssl_alphahl
SUBROUTINE nl_set_nssl_cnoh ( id_id , nssl_cnoh )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_cnoh
  INTEGER id_id
  model_config_rec%nssl_cnoh(id_id) = nssl_cnoh
  RETURN
END SUBROUTINE nl_set_nssl_cnoh
SUBROUTINE nl_set_nssl_cnohl ( id_id , nssl_cnohl )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_cnohl
  INTEGER id_id
  model_config_rec%nssl_cnohl(id_id) = nssl_cnohl
  RETURN
END SUBROUTINE nl_set_nssl_cnohl
SUBROUTINE nl_set_nssl_cnor ( id_id , nssl_cnor )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_cnor
  INTEGER id_id
  model_config_rec%nssl_cnor(id_id) = nssl_cnor
  RETURN
END SUBROUTINE nl_set_nssl_cnor
SUBROUTINE nl_set_nssl_cnos ( id_id , nssl_cnos )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_cnos
  INTEGER id_id
  model_config_rec%nssl_cnos(id_id) = nssl_cnos
  RETURN
END SUBROUTINE nl_set_nssl_cnos
SUBROUTINE nl_set_nssl_rho_qh ( id_id , nssl_rho_qh )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_rho_qh
  INTEGER id_id
  model_config_rec%nssl_rho_qh(id_id) = nssl_rho_qh
  RETURN
END SUBROUTINE nl_set_nssl_rho_qh
SUBROUTINE nl_set_nssl_rho_qhl ( id_id , nssl_rho_qhl )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_rho_qhl
  INTEGER id_id
  model_config_rec%nssl_rho_qhl(id_id) = nssl_rho_qhl
  RETURN
END SUBROUTINE nl_set_nssl_rho_qhl
SUBROUTINE nl_set_nssl_rho_qs ( id_id , nssl_rho_qs )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: nssl_rho_qs
  INTEGER id_id
  model_config_rec%nssl_rho_qs(id_id) = nssl_rho_qs
  RETURN
END SUBROUTINE nl_set_nssl_rho_qs
SUBROUTINE nl_set_gsfcgce_hail ( id_id , gsfcgce_hail )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gsfcgce_hail
  INTEGER id_id
  model_config_rec%gsfcgce_hail = gsfcgce_hail
  RETURN
END SUBROUTINE nl_set_gsfcgce_hail
SUBROUTINE nl_set_gsfcgce_2ice ( id_id , gsfcgce_2ice )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gsfcgce_2ice
  INTEGER id_id
  model_config_rec%gsfcgce_2ice = gsfcgce_2ice
  RETURN
END SUBROUTINE nl_set_gsfcgce_2ice
SUBROUTINE nl_set_progn ( id_id , progn )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: progn
  INTEGER id_id
  model_config_rec%progn(id_id) = progn
  RETURN
END SUBROUTINE nl_set_progn
SUBROUTINE nl_set_accum_mode ( id_id , accum_mode )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: accum_mode
  INTEGER id_id
  model_config_rec%accum_mode = accum_mode
  RETURN
END SUBROUTINE nl_set_accum_mode
SUBROUTINE nl_set_aitken_mode ( id_id , aitken_mode )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: aitken_mode
  INTEGER id_id
  model_config_rec%aitken_mode = aitken_mode
  RETURN
END SUBROUTINE nl_set_aitken_mode
SUBROUTINE nl_set_coarse_mode ( id_id , coarse_mode )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: coarse_mode
  INTEGER id_id
  model_config_rec%coarse_mode = coarse_mode
  RETURN
END SUBROUTINE nl_set_coarse_mode
SUBROUTINE nl_set_do_radar_ref ( id_id , do_radar_ref )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: do_radar_ref
  INTEGER id_id
  model_config_rec%do_radar_ref = do_radar_ref
  RETURN
END SUBROUTINE nl_set_do_radar_ref
SUBROUTINE nl_set_compute_radar_ref ( id_id , compute_radar_ref )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: compute_radar_ref
  INTEGER id_id
  model_config_rec%compute_radar_ref = compute_radar_ref
  RETURN
END SUBROUTINE nl_set_compute_radar_ref
SUBROUTINE nl_set_ra_lw_physics ( id_id , ra_lw_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ra_lw_physics
  INTEGER id_id
  model_config_rec%ra_lw_physics(id_id) = ra_lw_physics
  RETURN
END SUBROUTINE nl_set_ra_lw_physics
SUBROUTINE nl_set_ra_sw_physics ( id_id , ra_sw_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ra_sw_physics
  INTEGER id_id
  model_config_rec%ra_sw_physics(id_id) = ra_sw_physics
  RETURN
END SUBROUTINE nl_set_ra_sw_physics
SUBROUTINE nl_set_radt ( id_id , radt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: radt
  INTEGER id_id
  model_config_rec%radt(id_id) = radt
  RETURN
END SUBROUTINE nl_set_radt
SUBROUTINE nl_set_naer ( id_id , naer )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: naer
  INTEGER id_id
  model_config_rec%naer(id_id) = naer
  RETURN
END SUBROUTINE nl_set_naer
SUBROUTINE nl_set_sf_sfclay_physics ( id_id , sf_sfclay_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sf_sfclay_physics
  INTEGER id_id
  model_config_rec%sf_sfclay_physics(id_id) = sf_sfclay_physics
  RETURN
END SUBROUTINE nl_set_sf_sfclay_physics
SUBROUTINE nl_set_sf_surface_physics ( id_id , sf_surface_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sf_surface_physics
  INTEGER id_id
  model_config_rec%sf_surface_physics(id_id) = sf_surface_physics
  RETURN
END SUBROUTINE nl_set_sf_surface_physics
SUBROUTINE nl_set_bl_pbl_physics ( id_id , bl_pbl_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: bl_pbl_physics
  INTEGER id_id
  model_config_rec%bl_pbl_physics(id_id) = bl_pbl_physics
  RETURN
END SUBROUTINE nl_set_bl_pbl_physics
SUBROUTINE nl_set_bl_mynn_tkebudget ( id_id , bl_mynn_tkebudget )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: bl_mynn_tkebudget
  INTEGER id_id
  model_config_rec%bl_mynn_tkebudget(id_id) = bl_mynn_tkebudget
  RETURN
END SUBROUTINE nl_set_bl_mynn_tkebudget
SUBROUTINE nl_set_bl_mynn_tkeadvect ( id_id , bl_mynn_tkeadvect )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: bl_mynn_tkeadvect
  INTEGER id_id
  model_config_rec%bl_mynn_tkeadvect(id_id) = bl_mynn_tkeadvect
  RETURN
END SUBROUTINE nl_set_bl_mynn_tkeadvect
SUBROUTINE nl_set_bl_mynn_cloudpdf ( id_id , bl_mynn_cloudpdf )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: bl_mynn_cloudpdf
  INTEGER id_id
  model_config_rec%bl_mynn_cloudpdf = bl_mynn_cloudpdf
  RETURN
END SUBROUTINE nl_set_bl_mynn_cloudpdf
SUBROUTINE nl_set_mfshconv ( id_id , mfshconv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: mfshconv
  INTEGER id_id
  model_config_rec%mfshconv(id_id) = mfshconv
  RETURN
END SUBROUTINE nl_set_mfshconv
SUBROUTINE nl_set_sf_urban_physics ( id_id , sf_urban_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sf_urban_physics
  INTEGER id_id
  model_config_rec%sf_urban_physics(id_id) = sf_urban_physics
  RETURN
END SUBROUTINE nl_set_sf_urban_physics
SUBROUTINE nl_set_bldt ( id_id , bldt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: bldt
  INTEGER id_id
  model_config_rec%bldt(id_id) = bldt
  RETURN
END SUBROUTINE nl_set_bldt
SUBROUTINE nl_set_cu_physics ( id_id , cu_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: cu_physics
  INTEGER id_id
  model_config_rec%cu_physics(id_id) = cu_physics
  RETURN
END SUBROUTINE nl_set_cu_physics
SUBROUTINE nl_set_shcu_physics ( id_id , shcu_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: shcu_physics
  INTEGER id_id
  model_config_rec%shcu_physics(id_id) = shcu_physics
  RETURN
END SUBROUTINE nl_set_shcu_physics
SUBROUTINE nl_set_cu_diag ( id_id , cu_diag )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: cu_diag
  INTEGER id_id
  model_config_rec%cu_diag(id_id) = cu_diag
  RETURN
END SUBROUTINE nl_set_cu_diag
SUBROUTINE nl_set_kfeta_trigger ( id_id , kfeta_trigger )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: kfeta_trigger
  INTEGER id_id
  model_config_rec%kfeta_trigger = kfeta_trigger
  RETURN
END SUBROUTINE nl_set_kfeta_trigger
SUBROUTINE nl_set_nsas_dx_factor ( id_id , nsas_dx_factor )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: nsas_dx_factor
  INTEGER id_id
  model_config_rec%nsas_dx_factor = nsas_dx_factor
  RETURN
END SUBROUTINE nl_set_nsas_dx_factor
SUBROUTINE nl_set_cudt ( id_id , cudt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: cudt
  INTEGER id_id
  model_config_rec%cudt(id_id) = cudt
  RETURN
END SUBROUTINE nl_set_cudt
SUBROUTINE nl_set_gsmdt ( id_id , gsmdt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: gsmdt
  INTEGER id_id
  model_config_rec%gsmdt(id_id) = gsmdt
  RETURN
END SUBROUTINE nl_set_gsmdt
SUBROUTINE nl_set_isfflx ( id_id , isfflx )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: isfflx
  INTEGER id_id
  model_config_rec%isfflx = isfflx
  RETURN
END SUBROUTINE nl_set_isfflx
SUBROUTINE nl_set_ifsnow ( id_id , ifsnow )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ifsnow
  INTEGER id_id
  model_config_rec%ifsnow = ifsnow
  RETURN
END SUBROUTINE nl_set_ifsnow
SUBROUTINE nl_set_icloud ( id_id , icloud )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: icloud
  INTEGER id_id
  model_config_rec%icloud = icloud
  RETURN
END SUBROUTINE nl_set_icloud
SUBROUTINE nl_set_swrad_scat ( id_id , swrad_scat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: swrad_scat
  INTEGER id_id
  model_config_rec%swrad_scat = swrad_scat
  RETURN
END SUBROUTINE nl_set_swrad_scat
SUBROUTINE nl_set_surface_input_source ( id_id , surface_input_source )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: surface_input_source
  INTEGER id_id
  model_config_rec%surface_input_source = surface_input_source
  RETURN
END SUBROUTINE nl_set_surface_input_source
SUBROUTINE nl_set_num_soil_layers ( id_id , num_soil_layers )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_soil_layers
  INTEGER id_id
  model_config_rec%num_soil_layers = num_soil_layers
  RETURN
END SUBROUTINE nl_set_num_soil_layers
SUBROUTINE nl_set_maxpatch ( id_id , maxpatch )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: maxpatch
  INTEGER id_id
  model_config_rec%maxpatch = maxpatch
  RETURN
END SUBROUTINE nl_set_maxpatch
SUBROUTINE nl_set_num_snow_layers ( id_id , num_snow_layers )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_snow_layers
  INTEGER id_id
  model_config_rec%num_snow_layers = num_snow_layers
  RETURN
END SUBROUTINE nl_set_num_snow_layers
SUBROUTINE nl_set_num_snso_layers ( id_id , num_snso_layers )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_snso_layers
  INTEGER id_id
  model_config_rec%num_snso_layers = num_snso_layers
  RETURN
END SUBROUTINE nl_set_num_snso_layers
SUBROUTINE nl_set_num_urban_layers ( id_id , num_urban_layers )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_urban_layers
  INTEGER id_id
  model_config_rec%num_urban_layers = num_urban_layers
  RETURN
END SUBROUTINE nl_set_num_urban_layers
SUBROUTINE nl_set_num_urban_hi ( id_id , num_urban_hi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_urban_hi
  INTEGER id_id
  model_config_rec%num_urban_hi = num_urban_hi
  RETURN
END SUBROUTINE nl_set_num_urban_hi
SUBROUTINE nl_set_num_months ( id_id , num_months )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_months
  INTEGER id_id
  model_config_rec%num_months = num_months
  RETURN
END SUBROUTINE nl_set_num_months
SUBROUTINE nl_set_sf_surface_mosaic ( id_id , sf_surface_mosaic )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sf_surface_mosaic
  INTEGER id_id
  model_config_rec%sf_surface_mosaic = sf_surface_mosaic
  RETURN
END SUBROUTINE nl_set_sf_surface_mosaic
SUBROUTINE nl_set_mosaic_cat ( id_id , mosaic_cat )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: mosaic_cat
  INTEGER id_id
  model_config_rec%mosaic_cat = mosaic_cat
  RETURN
END SUBROUTINE nl_set_mosaic_cat
SUBROUTINE nl_set_mosaic_cat_soil ( id_id , mosaic_cat_soil )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: mosaic_cat_soil
  INTEGER id_id
  model_config_rec%mosaic_cat_soil = mosaic_cat_soil
  RETURN
END SUBROUTINE nl_set_mosaic_cat_soil
SUBROUTINE nl_set_mosaic_lu ( id_id , mosaic_lu )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: mosaic_lu
  INTEGER id_id
  model_config_rec%mosaic_lu = mosaic_lu
  RETURN
END SUBROUTINE nl_set_mosaic_lu
SUBROUTINE nl_set_mosaic_soil ( id_id , mosaic_soil )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: mosaic_soil
  INTEGER id_id
  model_config_rec%mosaic_soil = mosaic_soil
  RETURN
END SUBROUTINE nl_set_mosaic_soil
SUBROUTINE nl_set_maxiens ( id_id , maxiens )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: maxiens
  INTEGER id_id
  model_config_rec%maxiens = maxiens
  RETURN
END SUBROUTINE nl_set_maxiens
SUBROUTINE nl_set_maxens ( id_id , maxens )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: maxens
  INTEGER id_id
  model_config_rec%maxens = maxens
  RETURN
END SUBROUTINE nl_set_maxens
!ENDOFREGISTRYGENERATEDINCLUDE
