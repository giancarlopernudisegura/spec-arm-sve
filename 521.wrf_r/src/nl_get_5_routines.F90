!STARTOFREGISTRYGENERATEDINCLUDE 'inc/nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit. Your changes to this file will be lost.
!
SUBROUTINE nl_get_auxinput5_interval_m ( id_id , auxinput5_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_interval_m
  INTEGER id_id
  auxinput5_interval_m = model_config_rec%auxinput5_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_interval_m
SUBROUTINE nl_get_auxinput5_interval_s ( id_id , auxinput5_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_interval_s
  INTEGER id_id
  auxinput5_interval_s = model_config_rec%auxinput5_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_interval_s
SUBROUTINE nl_get_auxinput5_interval ( id_id , auxinput5_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_interval
  INTEGER id_id
  auxinput5_interval = model_config_rec%auxinput5_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_interval
SUBROUTINE nl_get_auxinput5_begin_y ( id_id , auxinput5_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_begin_y
  INTEGER id_id
  auxinput5_begin_y = model_config_rec%auxinput5_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_begin_y
SUBROUTINE nl_get_auxinput5_begin_d ( id_id , auxinput5_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_begin_d
  INTEGER id_id
  auxinput5_begin_d = model_config_rec%auxinput5_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_begin_d
SUBROUTINE nl_get_auxinput5_begin_h ( id_id , auxinput5_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_begin_h
  INTEGER id_id
  auxinput5_begin_h = model_config_rec%auxinput5_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_begin_h
SUBROUTINE nl_get_auxinput5_begin_m ( id_id , auxinput5_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_begin_m
  INTEGER id_id
  auxinput5_begin_m = model_config_rec%auxinput5_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_begin_m
SUBROUTINE nl_get_auxinput5_begin_s ( id_id , auxinput5_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_begin_s
  INTEGER id_id
  auxinput5_begin_s = model_config_rec%auxinput5_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_begin_s
SUBROUTINE nl_get_auxinput5_begin ( id_id , auxinput5_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_begin
  INTEGER id_id
  auxinput5_begin = model_config_rec%auxinput5_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_begin
SUBROUTINE nl_get_auxinput5_end_y ( id_id , auxinput5_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_end_y
  INTEGER id_id
  auxinput5_end_y = model_config_rec%auxinput5_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_end_y
SUBROUTINE nl_get_auxinput5_end_d ( id_id , auxinput5_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_end_d
  INTEGER id_id
  auxinput5_end_d = model_config_rec%auxinput5_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_end_d
SUBROUTINE nl_get_auxinput5_end_h ( id_id , auxinput5_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_end_h
  INTEGER id_id
  auxinput5_end_h = model_config_rec%auxinput5_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_end_h
SUBROUTINE nl_get_auxinput5_end_m ( id_id , auxinput5_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_end_m
  INTEGER id_id
  auxinput5_end_m = model_config_rec%auxinput5_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_end_m
SUBROUTINE nl_get_auxinput5_end_s ( id_id , auxinput5_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_end_s
  INTEGER id_id
  auxinput5_end_s = model_config_rec%auxinput5_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_end_s
SUBROUTINE nl_get_auxinput5_end ( id_id , auxinput5_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_end
  INTEGER id_id
  auxinput5_end = model_config_rec%auxinput5_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_end
SUBROUTINE nl_get_io_form_auxinput5 ( id_id , io_form_auxinput5 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput5
  INTEGER id_id
  io_form_auxinput5 = model_config_rec%io_form_auxinput5
  RETURN
END SUBROUTINE nl_get_io_form_auxinput5
SUBROUTINE nl_get_frames_per_auxinput5 ( id_id , frames_per_auxinput5 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput5
  INTEGER id_id
  frames_per_auxinput5 = model_config_rec%frames_per_auxinput5(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput5
SUBROUTINE nl_get_auxinput6_inname ( id_id , auxinput6_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput6_inname
  INTEGER id_id
  auxinput6_inname = trim(model_config_rec%auxinput6_inname)
  RETURN
END SUBROUTINE nl_get_auxinput6_inname
SUBROUTINE nl_get_auxinput6_outname ( id_id , auxinput6_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput6_outname
  INTEGER id_id
  auxinput6_outname = trim(model_config_rec%auxinput6_outname)
  RETURN
END SUBROUTINE nl_get_auxinput6_outname
SUBROUTINE nl_get_auxinput6_interval_y ( id_id , auxinput6_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_interval_y
  INTEGER id_id
  auxinput6_interval_y = model_config_rec%auxinput6_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_interval_y
SUBROUTINE nl_get_auxinput6_interval_d ( id_id , auxinput6_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_interval_d
  INTEGER id_id
  auxinput6_interval_d = model_config_rec%auxinput6_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_interval_d
SUBROUTINE nl_get_auxinput6_interval_h ( id_id , auxinput6_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_interval_h
  INTEGER id_id
  auxinput6_interval_h = model_config_rec%auxinput6_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_interval_h
SUBROUTINE nl_get_auxinput6_interval_m ( id_id , auxinput6_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_interval_m
  INTEGER id_id
  auxinput6_interval_m = model_config_rec%auxinput6_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_interval_m
SUBROUTINE nl_get_auxinput6_interval_s ( id_id , auxinput6_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_interval_s
  INTEGER id_id
  auxinput6_interval_s = model_config_rec%auxinput6_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_interval_s
SUBROUTINE nl_get_auxinput6_interval ( id_id , auxinput6_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_interval
  INTEGER id_id
  auxinput6_interval = model_config_rec%auxinput6_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_interval
SUBROUTINE nl_get_auxinput6_begin_y ( id_id , auxinput6_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_begin_y
  INTEGER id_id
  auxinput6_begin_y = model_config_rec%auxinput6_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_begin_y
SUBROUTINE nl_get_auxinput6_begin_d ( id_id , auxinput6_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_begin_d
  INTEGER id_id
  auxinput6_begin_d = model_config_rec%auxinput6_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_begin_d
SUBROUTINE nl_get_auxinput6_begin_h ( id_id , auxinput6_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_begin_h
  INTEGER id_id
  auxinput6_begin_h = model_config_rec%auxinput6_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_begin_h
SUBROUTINE nl_get_auxinput6_begin_m ( id_id , auxinput6_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_begin_m
  INTEGER id_id
  auxinput6_begin_m = model_config_rec%auxinput6_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_begin_m
SUBROUTINE nl_get_auxinput6_begin_s ( id_id , auxinput6_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_begin_s
  INTEGER id_id
  auxinput6_begin_s = model_config_rec%auxinput6_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_begin_s
SUBROUTINE nl_get_auxinput6_begin ( id_id , auxinput6_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_begin
  INTEGER id_id
  auxinput6_begin = model_config_rec%auxinput6_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_begin
SUBROUTINE nl_get_auxinput6_end_y ( id_id , auxinput6_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_end_y
  INTEGER id_id
  auxinput6_end_y = model_config_rec%auxinput6_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_end_y
SUBROUTINE nl_get_auxinput6_end_d ( id_id , auxinput6_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_end_d
  INTEGER id_id
  auxinput6_end_d = model_config_rec%auxinput6_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_end_d
SUBROUTINE nl_get_auxinput6_end_h ( id_id , auxinput6_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_end_h
  INTEGER id_id
  auxinput6_end_h = model_config_rec%auxinput6_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_end_h
SUBROUTINE nl_get_auxinput6_end_m ( id_id , auxinput6_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_end_m
  INTEGER id_id
  auxinput6_end_m = model_config_rec%auxinput6_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_end_m
SUBROUTINE nl_get_auxinput6_end_s ( id_id , auxinput6_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_end_s
  INTEGER id_id
  auxinput6_end_s = model_config_rec%auxinput6_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_end_s
SUBROUTINE nl_get_auxinput6_end ( id_id , auxinput6_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput6_end
  INTEGER id_id
  auxinput6_end = model_config_rec%auxinput6_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput6_end
SUBROUTINE nl_get_io_form_auxinput6 ( id_id , io_form_auxinput6 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput6
  INTEGER id_id
  io_form_auxinput6 = model_config_rec%io_form_auxinput6
  RETURN
END SUBROUTINE nl_get_io_form_auxinput6
SUBROUTINE nl_get_frames_per_auxinput6 ( id_id , frames_per_auxinput6 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput6
  INTEGER id_id
  frames_per_auxinput6 = model_config_rec%frames_per_auxinput6(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput6
SUBROUTINE nl_get_auxinput7_inname ( id_id , auxinput7_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput7_inname
  INTEGER id_id
  auxinput7_inname = trim(model_config_rec%auxinput7_inname)
  RETURN
END SUBROUTINE nl_get_auxinput7_inname
SUBROUTINE nl_get_auxinput7_outname ( id_id , auxinput7_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput7_outname
  INTEGER id_id
  auxinput7_outname = trim(model_config_rec%auxinput7_outname)
  RETURN
END SUBROUTINE nl_get_auxinput7_outname
SUBROUTINE nl_get_auxinput7_interval_y ( id_id , auxinput7_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_interval_y
  INTEGER id_id
  auxinput7_interval_y = model_config_rec%auxinput7_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_interval_y
SUBROUTINE nl_get_auxinput7_interval_d ( id_id , auxinput7_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_interval_d
  INTEGER id_id
  auxinput7_interval_d = model_config_rec%auxinput7_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_interval_d
SUBROUTINE nl_get_auxinput7_interval_h ( id_id , auxinput7_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_interval_h
  INTEGER id_id
  auxinput7_interval_h = model_config_rec%auxinput7_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_interval_h
SUBROUTINE nl_get_auxinput7_interval_m ( id_id , auxinput7_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_interval_m
  INTEGER id_id
  auxinput7_interval_m = model_config_rec%auxinput7_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_interval_m
SUBROUTINE nl_get_auxinput7_interval_s ( id_id , auxinput7_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_interval_s
  INTEGER id_id
  auxinput7_interval_s = model_config_rec%auxinput7_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_interval_s
SUBROUTINE nl_get_auxinput7_interval ( id_id , auxinput7_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_interval
  INTEGER id_id
  auxinput7_interval = model_config_rec%auxinput7_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_interval
SUBROUTINE nl_get_auxinput7_begin_y ( id_id , auxinput7_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_begin_y
  INTEGER id_id
  auxinput7_begin_y = model_config_rec%auxinput7_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_begin_y
SUBROUTINE nl_get_auxinput7_begin_d ( id_id , auxinput7_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_begin_d
  INTEGER id_id
  auxinput7_begin_d = model_config_rec%auxinput7_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_begin_d
SUBROUTINE nl_get_auxinput7_begin_h ( id_id , auxinput7_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_begin_h
  INTEGER id_id
  auxinput7_begin_h = model_config_rec%auxinput7_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_begin_h
SUBROUTINE nl_get_auxinput7_begin_m ( id_id , auxinput7_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_begin_m
  INTEGER id_id
  auxinput7_begin_m = model_config_rec%auxinput7_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_begin_m
SUBROUTINE nl_get_auxinput7_begin_s ( id_id , auxinput7_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_begin_s
  INTEGER id_id
  auxinput7_begin_s = model_config_rec%auxinput7_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_begin_s
SUBROUTINE nl_get_auxinput7_begin ( id_id , auxinput7_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_begin
  INTEGER id_id
  auxinput7_begin = model_config_rec%auxinput7_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_begin
SUBROUTINE nl_get_auxinput7_end_y ( id_id , auxinput7_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_end_y
  INTEGER id_id
  auxinput7_end_y = model_config_rec%auxinput7_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_end_y
SUBROUTINE nl_get_auxinput7_end_d ( id_id , auxinput7_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_end_d
  INTEGER id_id
  auxinput7_end_d = model_config_rec%auxinput7_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_end_d
SUBROUTINE nl_get_auxinput7_end_h ( id_id , auxinput7_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_end_h
  INTEGER id_id
  auxinput7_end_h = model_config_rec%auxinput7_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_end_h
SUBROUTINE nl_get_auxinput7_end_m ( id_id , auxinput7_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_end_m
  INTEGER id_id
  auxinput7_end_m = model_config_rec%auxinput7_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_end_m
SUBROUTINE nl_get_auxinput7_end_s ( id_id , auxinput7_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_end_s
  INTEGER id_id
  auxinput7_end_s = model_config_rec%auxinput7_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_end_s
SUBROUTINE nl_get_auxinput7_end ( id_id , auxinput7_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput7_end
  INTEGER id_id
  auxinput7_end = model_config_rec%auxinput7_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput7_end
SUBROUTINE nl_get_io_form_auxinput7 ( id_id , io_form_auxinput7 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput7
  INTEGER id_id
  io_form_auxinput7 = model_config_rec%io_form_auxinput7
  RETURN
END SUBROUTINE nl_get_io_form_auxinput7
SUBROUTINE nl_get_frames_per_auxinput7 ( id_id , frames_per_auxinput7 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput7
  INTEGER id_id
  frames_per_auxinput7 = model_config_rec%frames_per_auxinput7(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput7
SUBROUTINE nl_get_auxinput8_inname ( id_id , auxinput8_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput8_inname
  INTEGER id_id
  auxinput8_inname = trim(model_config_rec%auxinput8_inname)
  RETURN
END SUBROUTINE nl_get_auxinput8_inname
SUBROUTINE nl_get_auxinput8_outname ( id_id , auxinput8_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput8_outname
  INTEGER id_id
  auxinput8_outname = trim(model_config_rec%auxinput8_outname)
  RETURN
END SUBROUTINE nl_get_auxinput8_outname
SUBROUTINE nl_get_auxinput8_interval_y ( id_id , auxinput8_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_interval_y
  INTEGER id_id
  auxinput8_interval_y = model_config_rec%auxinput8_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_interval_y
SUBROUTINE nl_get_auxinput8_interval_d ( id_id , auxinput8_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_interval_d
  INTEGER id_id
  auxinput8_interval_d = model_config_rec%auxinput8_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_interval_d
SUBROUTINE nl_get_auxinput8_interval_h ( id_id , auxinput8_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_interval_h
  INTEGER id_id
  auxinput8_interval_h = model_config_rec%auxinput8_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_interval_h
SUBROUTINE nl_get_auxinput8_interval_m ( id_id , auxinput8_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_interval_m
  INTEGER id_id
  auxinput8_interval_m = model_config_rec%auxinput8_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_interval_m
SUBROUTINE nl_get_auxinput8_interval_s ( id_id , auxinput8_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_interval_s
  INTEGER id_id
  auxinput8_interval_s = model_config_rec%auxinput8_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_interval_s
SUBROUTINE nl_get_auxinput8_interval ( id_id , auxinput8_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_interval
  INTEGER id_id
  auxinput8_interval = model_config_rec%auxinput8_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_interval
SUBROUTINE nl_get_auxinput8_begin_y ( id_id , auxinput8_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_begin_y
  INTEGER id_id
  auxinput8_begin_y = model_config_rec%auxinput8_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_begin_y
SUBROUTINE nl_get_auxinput8_begin_d ( id_id , auxinput8_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_begin_d
  INTEGER id_id
  auxinput8_begin_d = model_config_rec%auxinput8_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_begin_d
SUBROUTINE nl_get_auxinput8_begin_h ( id_id , auxinput8_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_begin_h
  INTEGER id_id
  auxinput8_begin_h = model_config_rec%auxinput8_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_begin_h
SUBROUTINE nl_get_auxinput8_begin_m ( id_id , auxinput8_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_begin_m
  INTEGER id_id
  auxinput8_begin_m = model_config_rec%auxinput8_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_begin_m
SUBROUTINE nl_get_auxinput8_begin_s ( id_id , auxinput8_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_begin_s
  INTEGER id_id
  auxinput8_begin_s = model_config_rec%auxinput8_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_begin_s
SUBROUTINE nl_get_auxinput8_begin ( id_id , auxinput8_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_begin
  INTEGER id_id
  auxinput8_begin = model_config_rec%auxinput8_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_begin
SUBROUTINE nl_get_auxinput8_end_y ( id_id , auxinput8_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_end_y
  INTEGER id_id
  auxinput8_end_y = model_config_rec%auxinput8_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_end_y
SUBROUTINE nl_get_auxinput8_end_d ( id_id , auxinput8_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_end_d
  INTEGER id_id
  auxinput8_end_d = model_config_rec%auxinput8_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_end_d
SUBROUTINE nl_get_auxinput8_end_h ( id_id , auxinput8_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_end_h
  INTEGER id_id
  auxinput8_end_h = model_config_rec%auxinput8_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_end_h
SUBROUTINE nl_get_auxinput8_end_m ( id_id , auxinput8_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_end_m
  INTEGER id_id
  auxinput8_end_m = model_config_rec%auxinput8_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_end_m
SUBROUTINE nl_get_auxinput8_end_s ( id_id , auxinput8_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_end_s
  INTEGER id_id
  auxinput8_end_s = model_config_rec%auxinput8_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_end_s
SUBROUTINE nl_get_auxinput8_end ( id_id , auxinput8_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput8_end
  INTEGER id_id
  auxinput8_end = model_config_rec%auxinput8_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput8_end
SUBROUTINE nl_get_io_form_auxinput8 ( id_id , io_form_auxinput8 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput8
  INTEGER id_id
  io_form_auxinput8 = model_config_rec%io_form_auxinput8
  RETURN
END SUBROUTINE nl_get_io_form_auxinput8
SUBROUTINE nl_get_frames_per_auxinput8 ( id_id , frames_per_auxinput8 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput8
  INTEGER id_id
  frames_per_auxinput8 = model_config_rec%frames_per_auxinput8(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput8
SUBROUTINE nl_get_auxinput9_inname ( id_id , auxinput9_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput9_inname
  INTEGER id_id
  auxinput9_inname = trim(model_config_rec%auxinput9_inname)
  RETURN
END SUBROUTINE nl_get_auxinput9_inname
SUBROUTINE nl_get_auxinput9_outname ( id_id , auxinput9_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput9_outname
  INTEGER id_id
  auxinput9_outname = trim(model_config_rec%auxinput9_outname)
  RETURN
END SUBROUTINE nl_get_auxinput9_outname
SUBROUTINE nl_get_auxinput9_interval_y ( id_id , auxinput9_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_interval_y
  INTEGER id_id
  auxinput9_interval_y = model_config_rec%auxinput9_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_interval_y
SUBROUTINE nl_get_auxinput9_interval_d ( id_id , auxinput9_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_interval_d
  INTEGER id_id
  auxinput9_interval_d = model_config_rec%auxinput9_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_interval_d
SUBROUTINE nl_get_auxinput9_interval_h ( id_id , auxinput9_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_interval_h
  INTEGER id_id
  auxinput9_interval_h = model_config_rec%auxinput9_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_interval_h
SUBROUTINE nl_get_auxinput9_interval_m ( id_id , auxinput9_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_interval_m
  INTEGER id_id
  auxinput9_interval_m = model_config_rec%auxinput9_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_interval_m
SUBROUTINE nl_get_auxinput9_interval_s ( id_id , auxinput9_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_interval_s
  INTEGER id_id
  auxinput9_interval_s = model_config_rec%auxinput9_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_interval_s
SUBROUTINE nl_get_auxinput9_interval ( id_id , auxinput9_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_interval
  INTEGER id_id
  auxinput9_interval = model_config_rec%auxinput9_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_interval
SUBROUTINE nl_get_auxinput9_begin_y ( id_id , auxinput9_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_begin_y
  INTEGER id_id
  auxinput9_begin_y = model_config_rec%auxinput9_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_begin_y
SUBROUTINE nl_get_auxinput9_begin_d ( id_id , auxinput9_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_begin_d
  INTEGER id_id
  auxinput9_begin_d = model_config_rec%auxinput9_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_begin_d
SUBROUTINE nl_get_auxinput9_begin_h ( id_id , auxinput9_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_begin_h
  INTEGER id_id
  auxinput9_begin_h = model_config_rec%auxinput9_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_begin_h
SUBROUTINE nl_get_auxinput9_begin_m ( id_id , auxinput9_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_begin_m
  INTEGER id_id
  auxinput9_begin_m = model_config_rec%auxinput9_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_begin_m
SUBROUTINE nl_get_auxinput9_begin_s ( id_id , auxinput9_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_begin_s
  INTEGER id_id
  auxinput9_begin_s = model_config_rec%auxinput9_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_begin_s
SUBROUTINE nl_get_auxinput9_begin ( id_id , auxinput9_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_begin
  INTEGER id_id
  auxinput9_begin = model_config_rec%auxinput9_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_begin
SUBROUTINE nl_get_auxinput9_end_y ( id_id , auxinput9_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_end_y
  INTEGER id_id
  auxinput9_end_y = model_config_rec%auxinput9_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_end_y
SUBROUTINE nl_get_auxinput9_end_d ( id_id , auxinput9_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_end_d
  INTEGER id_id
  auxinput9_end_d = model_config_rec%auxinput9_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_end_d
SUBROUTINE nl_get_auxinput9_end_h ( id_id , auxinput9_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_end_h
  INTEGER id_id
  auxinput9_end_h = model_config_rec%auxinput9_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_end_h
SUBROUTINE nl_get_auxinput9_end_m ( id_id , auxinput9_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_end_m
  INTEGER id_id
  auxinput9_end_m = model_config_rec%auxinput9_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_end_m
SUBROUTINE nl_get_auxinput9_end_s ( id_id , auxinput9_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_end_s
  INTEGER id_id
  auxinput9_end_s = model_config_rec%auxinput9_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_end_s
SUBROUTINE nl_get_auxinput9_end ( id_id , auxinput9_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput9_end
  INTEGER id_id
  auxinput9_end = model_config_rec%auxinput9_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput9_end
SUBROUTINE nl_get_io_form_auxinput9 ( id_id , io_form_auxinput9 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput9
  INTEGER id_id
  io_form_auxinput9 = model_config_rec%io_form_auxinput9
  RETURN
END SUBROUTINE nl_get_io_form_auxinput9
SUBROUTINE nl_get_frames_per_auxinput9 ( id_id , frames_per_auxinput9 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput9
  INTEGER id_id
  frames_per_auxinput9 = model_config_rec%frames_per_auxinput9(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput9
SUBROUTINE nl_get_auxinput10_inname ( id_id , auxinput10_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput10_inname
  INTEGER id_id
  auxinput10_inname = trim(model_config_rec%auxinput10_inname)
  RETURN
END SUBROUTINE nl_get_auxinput10_inname
SUBROUTINE nl_get_auxinput10_outname ( id_id , auxinput10_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput10_outname
  INTEGER id_id
  auxinput10_outname = trim(model_config_rec%auxinput10_outname)
  RETURN
END SUBROUTINE nl_get_auxinput10_outname
SUBROUTINE nl_get_auxinput10_interval_y ( id_id , auxinput10_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_interval_y
  INTEGER id_id
  auxinput10_interval_y = model_config_rec%auxinput10_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_interval_y
SUBROUTINE nl_get_auxinput10_interval_d ( id_id , auxinput10_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_interval_d
  INTEGER id_id
  auxinput10_interval_d = model_config_rec%auxinput10_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_interval_d
SUBROUTINE nl_get_auxinput10_interval_h ( id_id , auxinput10_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_interval_h
  INTEGER id_id
  auxinput10_interval_h = model_config_rec%auxinput10_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_interval_h
SUBROUTINE nl_get_auxinput10_interval_m ( id_id , auxinput10_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_interval_m
  INTEGER id_id
  auxinput10_interval_m = model_config_rec%auxinput10_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_interval_m
SUBROUTINE nl_get_auxinput10_interval_s ( id_id , auxinput10_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_interval_s
  INTEGER id_id
  auxinput10_interval_s = model_config_rec%auxinput10_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_interval_s
SUBROUTINE nl_get_auxinput10_interval ( id_id , auxinput10_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_interval
  INTEGER id_id
  auxinput10_interval = model_config_rec%auxinput10_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_interval
SUBROUTINE nl_get_auxinput10_begin_y ( id_id , auxinput10_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_begin_y
  INTEGER id_id
  auxinput10_begin_y = model_config_rec%auxinput10_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_begin_y
SUBROUTINE nl_get_auxinput10_begin_d ( id_id , auxinput10_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_begin_d
  INTEGER id_id
  auxinput10_begin_d = model_config_rec%auxinput10_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_begin_d
SUBROUTINE nl_get_auxinput10_begin_h ( id_id , auxinput10_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_begin_h
  INTEGER id_id
  auxinput10_begin_h = model_config_rec%auxinput10_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_begin_h
SUBROUTINE nl_get_auxinput10_begin_m ( id_id , auxinput10_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_begin_m
  INTEGER id_id
  auxinput10_begin_m = model_config_rec%auxinput10_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_begin_m
SUBROUTINE nl_get_auxinput10_begin_s ( id_id , auxinput10_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_begin_s
  INTEGER id_id
  auxinput10_begin_s = model_config_rec%auxinput10_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_begin_s
SUBROUTINE nl_get_auxinput10_begin ( id_id , auxinput10_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_begin
  INTEGER id_id
  auxinput10_begin = model_config_rec%auxinput10_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_begin
SUBROUTINE nl_get_auxinput10_end_y ( id_id , auxinput10_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_end_y
  INTEGER id_id
  auxinput10_end_y = model_config_rec%auxinput10_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_end_y
SUBROUTINE nl_get_auxinput10_end_d ( id_id , auxinput10_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_end_d
  INTEGER id_id
  auxinput10_end_d = model_config_rec%auxinput10_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_end_d
SUBROUTINE nl_get_auxinput10_end_h ( id_id , auxinput10_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_end_h
  INTEGER id_id
  auxinput10_end_h = model_config_rec%auxinput10_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_end_h
SUBROUTINE nl_get_auxinput10_end_m ( id_id , auxinput10_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_end_m
  INTEGER id_id
  auxinput10_end_m = model_config_rec%auxinput10_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_end_m
SUBROUTINE nl_get_auxinput10_end_s ( id_id , auxinput10_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_end_s
  INTEGER id_id
  auxinput10_end_s = model_config_rec%auxinput10_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_end_s
SUBROUTINE nl_get_auxinput10_end ( id_id , auxinput10_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput10_end
  INTEGER id_id
  auxinput10_end = model_config_rec%auxinput10_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput10_end
SUBROUTINE nl_get_io_form_auxinput10 ( id_id , io_form_auxinput10 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput10
  INTEGER id_id
  io_form_auxinput10 = model_config_rec%io_form_auxinput10
  RETURN
END SUBROUTINE nl_get_io_form_auxinput10
SUBROUTINE nl_get_frames_per_auxinput10 ( id_id , frames_per_auxinput10 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput10
  INTEGER id_id
  frames_per_auxinput10 = model_config_rec%frames_per_auxinput10(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput10
SUBROUTINE nl_get_auxinput11_inname ( id_id , auxinput11_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput11_inname
  INTEGER id_id
  auxinput11_inname = trim(model_config_rec%auxinput11_inname)
  RETURN
END SUBROUTINE nl_get_auxinput11_inname
SUBROUTINE nl_get_auxinput11_outname ( id_id , auxinput11_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput11_outname
  INTEGER id_id
  auxinput11_outname = trim(model_config_rec%auxinput11_outname)
  RETURN
END SUBROUTINE nl_get_auxinput11_outname
SUBROUTINE nl_get_auxinput11_interval_y ( id_id , auxinput11_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_interval_y
  INTEGER id_id
  auxinput11_interval_y = model_config_rec%auxinput11_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_interval_y
SUBROUTINE nl_get_auxinput11_interval_d ( id_id , auxinput11_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_interval_d
  INTEGER id_id
  auxinput11_interval_d = model_config_rec%auxinput11_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_interval_d
SUBROUTINE nl_get_auxinput11_interval_h ( id_id , auxinput11_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_interval_h
  INTEGER id_id
  auxinput11_interval_h = model_config_rec%auxinput11_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_interval_h
SUBROUTINE nl_get_auxinput11_interval_m ( id_id , auxinput11_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_interval_m
  INTEGER id_id
  auxinput11_interval_m = model_config_rec%auxinput11_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_interval_m
SUBROUTINE nl_get_auxinput11_interval_s ( id_id , auxinput11_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_interval_s
  INTEGER id_id
  auxinput11_interval_s = model_config_rec%auxinput11_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_interval_s
SUBROUTINE nl_get_auxinput11_interval ( id_id , auxinput11_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_interval
  INTEGER id_id
  auxinput11_interval = model_config_rec%auxinput11_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_interval
SUBROUTINE nl_get_auxinput11_begin_y ( id_id , auxinput11_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_begin_y
  INTEGER id_id
  auxinput11_begin_y = model_config_rec%auxinput11_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_begin_y
SUBROUTINE nl_get_auxinput11_begin_d ( id_id , auxinput11_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_begin_d
  INTEGER id_id
  auxinput11_begin_d = model_config_rec%auxinput11_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_begin_d
SUBROUTINE nl_get_auxinput11_begin_h ( id_id , auxinput11_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_begin_h
  INTEGER id_id
  auxinput11_begin_h = model_config_rec%auxinput11_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_begin_h
SUBROUTINE nl_get_auxinput11_begin_m ( id_id , auxinput11_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_begin_m
  INTEGER id_id
  auxinput11_begin_m = model_config_rec%auxinput11_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_begin_m
SUBROUTINE nl_get_auxinput11_begin_s ( id_id , auxinput11_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_begin_s
  INTEGER id_id
  auxinput11_begin_s = model_config_rec%auxinput11_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_begin_s
SUBROUTINE nl_get_auxinput11_begin ( id_id , auxinput11_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_begin
  INTEGER id_id
  auxinput11_begin = model_config_rec%auxinput11_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_begin
SUBROUTINE nl_get_auxinput11_end_y ( id_id , auxinput11_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_end_y
  INTEGER id_id
  auxinput11_end_y = model_config_rec%auxinput11_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_end_y
SUBROUTINE nl_get_auxinput11_end_d ( id_id , auxinput11_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_end_d
  INTEGER id_id
  auxinput11_end_d = model_config_rec%auxinput11_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_end_d
SUBROUTINE nl_get_auxinput11_end_h ( id_id , auxinput11_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_end_h
  INTEGER id_id
  auxinput11_end_h = model_config_rec%auxinput11_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_end_h
SUBROUTINE nl_get_auxinput11_end_m ( id_id , auxinput11_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_end_m
  INTEGER id_id
  auxinput11_end_m = model_config_rec%auxinput11_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_end_m
SUBROUTINE nl_get_auxinput11_end_s ( id_id , auxinput11_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_end_s
  INTEGER id_id
  auxinput11_end_s = model_config_rec%auxinput11_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_end_s
SUBROUTINE nl_get_auxinput11_end ( id_id , auxinput11_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput11_end
  INTEGER id_id
  auxinput11_end = model_config_rec%auxinput11_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput11_end
SUBROUTINE nl_get_io_form_auxinput11 ( id_id , io_form_auxinput11 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput11
  INTEGER id_id
  io_form_auxinput11 = model_config_rec%io_form_auxinput11
  RETURN
END SUBROUTINE nl_get_io_form_auxinput11
SUBROUTINE nl_get_frames_per_auxinput11 ( id_id , frames_per_auxinput11 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput11
  INTEGER id_id
  frames_per_auxinput11 = model_config_rec%frames_per_auxinput11(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput11
SUBROUTINE nl_get_auxinput12_inname ( id_id , auxinput12_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput12_inname
  INTEGER id_id
  auxinput12_inname = trim(model_config_rec%auxinput12_inname)
  RETURN
END SUBROUTINE nl_get_auxinput12_inname
SUBROUTINE nl_get_auxinput12_outname ( id_id , auxinput12_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput12_outname
  INTEGER id_id
  auxinput12_outname = trim(model_config_rec%auxinput12_outname)
  RETURN
END SUBROUTINE nl_get_auxinput12_outname
SUBROUTINE nl_get_auxinput12_interval_y ( id_id , auxinput12_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_interval_y
  INTEGER id_id
  auxinput12_interval_y = model_config_rec%auxinput12_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_interval_y
SUBROUTINE nl_get_auxinput12_interval_d ( id_id , auxinput12_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_interval_d
  INTEGER id_id
  auxinput12_interval_d = model_config_rec%auxinput12_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_interval_d
SUBROUTINE nl_get_auxinput12_interval_h ( id_id , auxinput12_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_interval_h
  INTEGER id_id
  auxinput12_interval_h = model_config_rec%auxinput12_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_interval_h
SUBROUTINE nl_get_auxinput12_interval_m ( id_id , auxinput12_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_interval_m
  INTEGER id_id
  auxinput12_interval_m = model_config_rec%auxinput12_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_interval_m
SUBROUTINE nl_get_auxinput12_interval_s ( id_id , auxinput12_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_interval_s
  INTEGER id_id
  auxinput12_interval_s = model_config_rec%auxinput12_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_interval_s
SUBROUTINE nl_get_auxinput12_interval ( id_id , auxinput12_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_interval
  INTEGER id_id
  auxinput12_interval = model_config_rec%auxinput12_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_interval
SUBROUTINE nl_get_auxinput12_begin_y ( id_id , auxinput12_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_begin_y
  INTEGER id_id
  auxinput12_begin_y = model_config_rec%auxinput12_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_begin_y
SUBROUTINE nl_get_auxinput12_begin_d ( id_id , auxinput12_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_begin_d
  INTEGER id_id
  auxinput12_begin_d = model_config_rec%auxinput12_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_begin_d
SUBROUTINE nl_get_auxinput12_begin_h ( id_id , auxinput12_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_begin_h
  INTEGER id_id
  auxinput12_begin_h = model_config_rec%auxinput12_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_begin_h
SUBROUTINE nl_get_auxinput12_begin_m ( id_id , auxinput12_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_begin_m
  INTEGER id_id
  auxinput12_begin_m = model_config_rec%auxinput12_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_begin_m
SUBROUTINE nl_get_auxinput12_begin_s ( id_id , auxinput12_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_begin_s
  INTEGER id_id
  auxinput12_begin_s = model_config_rec%auxinput12_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_begin_s
SUBROUTINE nl_get_auxinput12_begin ( id_id , auxinput12_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_begin
  INTEGER id_id
  auxinput12_begin = model_config_rec%auxinput12_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_begin
SUBROUTINE nl_get_auxinput12_end_y ( id_id , auxinput12_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_end_y
  INTEGER id_id
  auxinput12_end_y = model_config_rec%auxinput12_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_end_y
SUBROUTINE nl_get_auxinput12_end_d ( id_id , auxinput12_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_end_d
  INTEGER id_id
  auxinput12_end_d = model_config_rec%auxinput12_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_end_d
SUBROUTINE nl_get_auxinput12_end_h ( id_id , auxinput12_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_end_h
  INTEGER id_id
  auxinput12_end_h = model_config_rec%auxinput12_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_end_h
SUBROUTINE nl_get_auxinput12_end_m ( id_id , auxinput12_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_end_m
  INTEGER id_id
  auxinput12_end_m = model_config_rec%auxinput12_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_end_m
SUBROUTINE nl_get_auxinput12_end_s ( id_id , auxinput12_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_end_s
  INTEGER id_id
  auxinput12_end_s = model_config_rec%auxinput12_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_end_s
SUBROUTINE nl_get_auxinput12_end ( id_id , auxinput12_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput12_end
  INTEGER id_id
  auxinput12_end = model_config_rec%auxinput12_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput12_end
SUBROUTINE nl_get_io_form_auxinput12 ( id_id , io_form_auxinput12 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput12
  INTEGER id_id
  io_form_auxinput12 = model_config_rec%io_form_auxinput12
  RETURN
END SUBROUTINE nl_get_io_form_auxinput12
SUBROUTINE nl_get_frames_per_auxinput12 ( id_id , frames_per_auxinput12 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput12
  INTEGER id_id
  frames_per_auxinput12 = model_config_rec%frames_per_auxinput12(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput12
SUBROUTINE nl_get_auxinput13_inname ( id_id , auxinput13_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput13_inname
  INTEGER id_id
  auxinput13_inname = trim(model_config_rec%auxinput13_inname)
  RETURN
END SUBROUTINE nl_get_auxinput13_inname
SUBROUTINE nl_get_auxinput13_outname ( id_id , auxinput13_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput13_outname
  INTEGER id_id
  auxinput13_outname = trim(model_config_rec%auxinput13_outname)
  RETURN
END SUBROUTINE nl_get_auxinput13_outname
SUBROUTINE nl_get_auxinput13_interval_y ( id_id , auxinput13_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_interval_y
  INTEGER id_id
  auxinput13_interval_y = model_config_rec%auxinput13_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_interval_y
SUBROUTINE nl_get_auxinput13_interval_d ( id_id , auxinput13_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_interval_d
  INTEGER id_id
  auxinput13_interval_d = model_config_rec%auxinput13_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_interval_d
SUBROUTINE nl_get_auxinput13_interval_h ( id_id , auxinput13_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_interval_h
  INTEGER id_id
  auxinput13_interval_h = model_config_rec%auxinput13_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_interval_h
SUBROUTINE nl_get_auxinput13_interval_m ( id_id , auxinput13_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_interval_m
  INTEGER id_id
  auxinput13_interval_m = model_config_rec%auxinput13_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_interval_m
SUBROUTINE nl_get_auxinput13_interval_s ( id_id , auxinput13_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_interval_s
  INTEGER id_id
  auxinput13_interval_s = model_config_rec%auxinput13_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_interval_s
SUBROUTINE nl_get_auxinput13_interval ( id_id , auxinput13_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_interval
  INTEGER id_id
  auxinput13_interval = model_config_rec%auxinput13_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_interval
SUBROUTINE nl_get_auxinput13_begin_y ( id_id , auxinput13_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_begin_y
  INTEGER id_id
  auxinput13_begin_y = model_config_rec%auxinput13_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_begin_y
SUBROUTINE nl_get_auxinput13_begin_d ( id_id , auxinput13_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_begin_d
  INTEGER id_id
  auxinput13_begin_d = model_config_rec%auxinput13_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_begin_d
SUBROUTINE nl_get_auxinput13_begin_h ( id_id , auxinput13_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_begin_h
  INTEGER id_id
  auxinput13_begin_h = model_config_rec%auxinput13_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_begin_h
SUBROUTINE nl_get_auxinput13_begin_m ( id_id , auxinput13_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_begin_m
  INTEGER id_id
  auxinput13_begin_m = model_config_rec%auxinput13_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_begin_m
SUBROUTINE nl_get_auxinput13_begin_s ( id_id , auxinput13_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_begin_s
  INTEGER id_id
  auxinput13_begin_s = model_config_rec%auxinput13_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_begin_s
SUBROUTINE nl_get_auxinput13_begin ( id_id , auxinput13_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_begin
  INTEGER id_id
  auxinput13_begin = model_config_rec%auxinput13_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_begin
SUBROUTINE nl_get_auxinput13_end_y ( id_id , auxinput13_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_end_y
  INTEGER id_id
  auxinput13_end_y = model_config_rec%auxinput13_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_end_y
SUBROUTINE nl_get_auxinput13_end_d ( id_id , auxinput13_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_end_d
  INTEGER id_id
  auxinput13_end_d = model_config_rec%auxinput13_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_end_d
SUBROUTINE nl_get_auxinput13_end_h ( id_id , auxinput13_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_end_h
  INTEGER id_id
  auxinput13_end_h = model_config_rec%auxinput13_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_end_h
SUBROUTINE nl_get_auxinput13_end_m ( id_id , auxinput13_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_end_m
  INTEGER id_id
  auxinput13_end_m = model_config_rec%auxinput13_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_end_m
SUBROUTINE nl_get_auxinput13_end_s ( id_id , auxinput13_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_end_s
  INTEGER id_id
  auxinput13_end_s = model_config_rec%auxinput13_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_end_s
SUBROUTINE nl_get_auxinput13_end ( id_id , auxinput13_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput13_end
  INTEGER id_id
  auxinput13_end = model_config_rec%auxinput13_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput13_end
SUBROUTINE nl_get_io_form_auxinput13 ( id_id , io_form_auxinput13 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput13
  INTEGER id_id
  io_form_auxinput13 = model_config_rec%io_form_auxinput13
  RETURN
END SUBROUTINE nl_get_io_form_auxinput13
SUBROUTINE nl_get_frames_per_auxinput13 ( id_id , frames_per_auxinput13 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput13
  INTEGER id_id
  frames_per_auxinput13 = model_config_rec%frames_per_auxinput13(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput13
SUBROUTINE nl_get_auxinput14_inname ( id_id , auxinput14_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput14_inname
  INTEGER id_id
  auxinput14_inname = trim(model_config_rec%auxinput14_inname)
  RETURN
END SUBROUTINE nl_get_auxinput14_inname
SUBROUTINE nl_get_auxinput14_outname ( id_id , auxinput14_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput14_outname
  INTEGER id_id
  auxinput14_outname = trim(model_config_rec%auxinput14_outname)
  RETURN
END SUBROUTINE nl_get_auxinput14_outname
SUBROUTINE nl_get_auxinput14_interval_y ( id_id , auxinput14_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_interval_y
  INTEGER id_id
  auxinput14_interval_y = model_config_rec%auxinput14_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_interval_y
SUBROUTINE nl_get_auxinput14_interval_d ( id_id , auxinput14_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_interval_d
  INTEGER id_id
  auxinput14_interval_d = model_config_rec%auxinput14_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_interval_d
SUBROUTINE nl_get_auxinput14_interval_h ( id_id , auxinput14_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_interval_h
  INTEGER id_id
  auxinput14_interval_h = model_config_rec%auxinput14_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_interval_h
SUBROUTINE nl_get_auxinput14_interval_m ( id_id , auxinput14_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_interval_m
  INTEGER id_id
  auxinput14_interval_m = model_config_rec%auxinput14_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_interval_m
SUBROUTINE nl_get_auxinput14_interval_s ( id_id , auxinput14_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_interval_s
  INTEGER id_id
  auxinput14_interval_s = model_config_rec%auxinput14_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_interval_s
SUBROUTINE nl_get_auxinput14_interval ( id_id , auxinput14_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_interval
  INTEGER id_id
  auxinput14_interval = model_config_rec%auxinput14_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_interval
SUBROUTINE nl_get_auxinput14_begin_y ( id_id , auxinput14_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_begin_y
  INTEGER id_id
  auxinput14_begin_y = model_config_rec%auxinput14_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_begin_y
SUBROUTINE nl_get_auxinput14_begin_d ( id_id , auxinput14_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_begin_d
  INTEGER id_id
  auxinput14_begin_d = model_config_rec%auxinput14_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_begin_d
SUBROUTINE nl_get_auxinput14_begin_h ( id_id , auxinput14_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_begin_h
  INTEGER id_id
  auxinput14_begin_h = model_config_rec%auxinput14_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_begin_h
SUBROUTINE nl_get_auxinput14_begin_m ( id_id , auxinput14_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_begin_m
  INTEGER id_id
  auxinput14_begin_m = model_config_rec%auxinput14_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_begin_m
SUBROUTINE nl_get_auxinput14_begin_s ( id_id , auxinput14_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_begin_s
  INTEGER id_id
  auxinput14_begin_s = model_config_rec%auxinput14_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_begin_s
SUBROUTINE nl_get_auxinput14_begin ( id_id , auxinput14_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_begin
  INTEGER id_id
  auxinput14_begin = model_config_rec%auxinput14_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_begin
SUBROUTINE nl_get_auxinput14_end_y ( id_id , auxinput14_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_end_y
  INTEGER id_id
  auxinput14_end_y = model_config_rec%auxinput14_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_end_y
SUBROUTINE nl_get_auxinput14_end_d ( id_id , auxinput14_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_end_d
  INTEGER id_id
  auxinput14_end_d = model_config_rec%auxinput14_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_end_d
SUBROUTINE nl_get_auxinput14_end_h ( id_id , auxinput14_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_end_h
  INTEGER id_id
  auxinput14_end_h = model_config_rec%auxinput14_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_end_h
SUBROUTINE nl_get_auxinput14_end_m ( id_id , auxinput14_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_end_m
  INTEGER id_id
  auxinput14_end_m = model_config_rec%auxinput14_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_end_m
SUBROUTINE nl_get_auxinput14_end_s ( id_id , auxinput14_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_end_s
  INTEGER id_id
  auxinput14_end_s = model_config_rec%auxinput14_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_end_s
SUBROUTINE nl_get_auxinput14_end ( id_id , auxinput14_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput14_end
  INTEGER id_id
  auxinput14_end = model_config_rec%auxinput14_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput14_end
SUBROUTINE nl_get_io_form_auxinput14 ( id_id , io_form_auxinput14 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput14
  INTEGER id_id
  io_form_auxinput14 = model_config_rec%io_form_auxinput14
  RETURN
END SUBROUTINE nl_get_io_form_auxinput14
SUBROUTINE nl_get_frames_per_auxinput14 ( id_id , frames_per_auxinput14 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput14
  INTEGER id_id
  frames_per_auxinput14 = model_config_rec%frames_per_auxinput14(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput14
SUBROUTINE nl_get_auxinput15_inname ( id_id , auxinput15_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput15_inname
  INTEGER id_id
  auxinput15_inname = trim(model_config_rec%auxinput15_inname)
  RETURN
END SUBROUTINE nl_get_auxinput15_inname
SUBROUTINE nl_get_auxinput15_outname ( id_id , auxinput15_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput15_outname
  INTEGER id_id
  auxinput15_outname = trim(model_config_rec%auxinput15_outname)
  RETURN
END SUBROUTINE nl_get_auxinput15_outname
SUBROUTINE nl_get_auxinput15_interval_y ( id_id , auxinput15_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_interval_y
  INTEGER id_id
  auxinput15_interval_y = model_config_rec%auxinput15_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_interval_y
SUBROUTINE nl_get_auxinput15_interval_d ( id_id , auxinput15_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_interval_d
  INTEGER id_id
  auxinput15_interval_d = model_config_rec%auxinput15_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_interval_d
SUBROUTINE nl_get_auxinput15_interval_h ( id_id , auxinput15_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_interval_h
  INTEGER id_id
  auxinput15_interval_h = model_config_rec%auxinput15_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_interval_h
SUBROUTINE nl_get_auxinput15_interval_m ( id_id , auxinput15_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_interval_m
  INTEGER id_id
  auxinput15_interval_m = model_config_rec%auxinput15_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_interval_m
SUBROUTINE nl_get_auxinput15_interval_s ( id_id , auxinput15_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_interval_s
  INTEGER id_id
  auxinput15_interval_s = model_config_rec%auxinput15_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_interval_s
SUBROUTINE nl_get_auxinput15_interval ( id_id , auxinput15_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_interval
  INTEGER id_id
  auxinput15_interval = model_config_rec%auxinput15_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_interval
SUBROUTINE nl_get_auxinput15_begin_y ( id_id , auxinput15_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_begin_y
  INTEGER id_id
  auxinput15_begin_y = model_config_rec%auxinput15_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_begin_y
SUBROUTINE nl_get_auxinput15_begin_d ( id_id , auxinput15_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_begin_d
  INTEGER id_id
  auxinput15_begin_d = model_config_rec%auxinput15_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_begin_d
SUBROUTINE nl_get_auxinput15_begin_h ( id_id , auxinput15_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_begin_h
  INTEGER id_id
  auxinput15_begin_h = model_config_rec%auxinput15_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_begin_h
SUBROUTINE nl_get_auxinput15_begin_m ( id_id , auxinput15_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_begin_m
  INTEGER id_id
  auxinput15_begin_m = model_config_rec%auxinput15_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_begin_m
SUBROUTINE nl_get_auxinput15_begin_s ( id_id , auxinput15_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_begin_s
  INTEGER id_id
  auxinput15_begin_s = model_config_rec%auxinput15_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_begin_s
SUBROUTINE nl_get_auxinput15_begin ( id_id , auxinput15_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_begin
  INTEGER id_id
  auxinput15_begin = model_config_rec%auxinput15_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_begin
SUBROUTINE nl_get_auxinput15_end_y ( id_id , auxinput15_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_end_y
  INTEGER id_id
  auxinput15_end_y = model_config_rec%auxinput15_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_end_y
SUBROUTINE nl_get_auxinput15_end_d ( id_id , auxinput15_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_end_d
  INTEGER id_id
  auxinput15_end_d = model_config_rec%auxinput15_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_end_d
SUBROUTINE nl_get_auxinput15_end_h ( id_id , auxinput15_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_end_h
  INTEGER id_id
  auxinput15_end_h = model_config_rec%auxinput15_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_end_h
SUBROUTINE nl_get_auxinput15_end_m ( id_id , auxinput15_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_end_m
  INTEGER id_id
  auxinput15_end_m = model_config_rec%auxinput15_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_end_m
SUBROUTINE nl_get_auxinput15_end_s ( id_id , auxinput15_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_end_s
  INTEGER id_id
  auxinput15_end_s = model_config_rec%auxinput15_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_end_s
SUBROUTINE nl_get_auxinput15_end ( id_id , auxinput15_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput15_end
  INTEGER id_id
  auxinput15_end = model_config_rec%auxinput15_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput15_end
SUBROUTINE nl_get_io_form_auxinput15 ( id_id , io_form_auxinput15 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput15
  INTEGER id_id
  io_form_auxinput15 = model_config_rec%io_form_auxinput15
  RETURN
END SUBROUTINE nl_get_io_form_auxinput15
SUBROUTINE nl_get_frames_per_auxinput15 ( id_id , frames_per_auxinput15 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput15
  INTEGER id_id
  frames_per_auxinput15 = model_config_rec%frames_per_auxinput15(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput15
SUBROUTINE nl_get_auxinput16_inname ( id_id , auxinput16_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput16_inname
  INTEGER id_id
  auxinput16_inname = trim(model_config_rec%auxinput16_inname)
  RETURN
END SUBROUTINE nl_get_auxinput16_inname
SUBROUTINE nl_get_auxinput16_outname ( id_id , auxinput16_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput16_outname
  INTEGER id_id
  auxinput16_outname = trim(model_config_rec%auxinput16_outname)
  RETURN
END SUBROUTINE nl_get_auxinput16_outname
SUBROUTINE nl_get_auxinput16_interval_y ( id_id , auxinput16_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_interval_y
  INTEGER id_id
  auxinput16_interval_y = model_config_rec%auxinput16_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_interval_y
SUBROUTINE nl_get_auxinput16_interval_d ( id_id , auxinput16_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_interval_d
  INTEGER id_id
  auxinput16_interval_d = model_config_rec%auxinput16_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_interval_d
!ENDOFREGISTRYGENERATEDINCLUDE
