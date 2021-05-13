!STARTOFREGISTRYGENERATEDINCLUDE 'inc/nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit. Your changes to this file will be lost.
!
SUBROUTINE nl_get_auxinput16_interval_h ( id_id , auxinput16_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_interval_h
  INTEGER id_id
  auxinput16_interval_h = model_config_rec%auxinput16_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_interval_h
SUBROUTINE nl_get_auxinput16_interval_m ( id_id , auxinput16_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_interval_m
  INTEGER id_id
  auxinput16_interval_m = model_config_rec%auxinput16_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_interval_m
SUBROUTINE nl_get_auxinput16_interval_s ( id_id , auxinput16_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_interval_s
  INTEGER id_id
  auxinput16_interval_s = model_config_rec%auxinput16_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_interval_s
SUBROUTINE nl_get_auxinput16_interval ( id_id , auxinput16_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_interval
  INTEGER id_id
  auxinput16_interval = model_config_rec%auxinput16_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_interval
SUBROUTINE nl_get_auxinput16_begin_y ( id_id , auxinput16_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_begin_y
  INTEGER id_id
  auxinput16_begin_y = model_config_rec%auxinput16_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_begin_y
SUBROUTINE nl_get_auxinput16_begin_d ( id_id , auxinput16_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_begin_d
  INTEGER id_id
  auxinput16_begin_d = model_config_rec%auxinput16_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_begin_d
SUBROUTINE nl_get_auxinput16_begin_h ( id_id , auxinput16_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_begin_h
  INTEGER id_id
  auxinput16_begin_h = model_config_rec%auxinput16_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_begin_h
SUBROUTINE nl_get_auxinput16_begin_m ( id_id , auxinput16_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_begin_m
  INTEGER id_id
  auxinput16_begin_m = model_config_rec%auxinput16_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_begin_m
SUBROUTINE nl_get_auxinput16_begin_s ( id_id , auxinput16_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_begin_s
  INTEGER id_id
  auxinput16_begin_s = model_config_rec%auxinput16_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_begin_s
SUBROUTINE nl_get_auxinput16_begin ( id_id , auxinput16_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_begin
  INTEGER id_id
  auxinput16_begin = model_config_rec%auxinput16_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_begin
SUBROUTINE nl_get_auxinput16_end_y ( id_id , auxinput16_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_end_y
  INTEGER id_id
  auxinput16_end_y = model_config_rec%auxinput16_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_end_y
SUBROUTINE nl_get_auxinput16_end_d ( id_id , auxinput16_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_end_d
  INTEGER id_id
  auxinput16_end_d = model_config_rec%auxinput16_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_end_d
SUBROUTINE nl_get_auxinput16_end_h ( id_id , auxinput16_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_end_h
  INTEGER id_id
  auxinput16_end_h = model_config_rec%auxinput16_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_end_h
SUBROUTINE nl_get_auxinput16_end_m ( id_id , auxinput16_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_end_m
  INTEGER id_id
  auxinput16_end_m = model_config_rec%auxinput16_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_end_m
SUBROUTINE nl_get_auxinput16_end_s ( id_id , auxinput16_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_end_s
  INTEGER id_id
  auxinput16_end_s = model_config_rec%auxinput16_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_end_s
SUBROUTINE nl_get_auxinput16_end ( id_id , auxinput16_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput16_end
  INTEGER id_id
  auxinput16_end = model_config_rec%auxinput16_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput16_end
SUBROUTINE nl_get_io_form_auxinput16 ( id_id , io_form_auxinput16 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput16
  INTEGER id_id
  io_form_auxinput16 = model_config_rec%io_form_auxinput16
  RETURN
END SUBROUTINE nl_get_io_form_auxinput16
SUBROUTINE nl_get_frames_per_auxinput16 ( id_id , frames_per_auxinput16 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput16
  INTEGER id_id
  frames_per_auxinput16 = model_config_rec%frames_per_auxinput16(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput16
SUBROUTINE nl_get_auxinput17_inname ( id_id , auxinput17_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput17_inname
  INTEGER id_id
  auxinput17_inname = trim(model_config_rec%auxinput17_inname)
  RETURN
END SUBROUTINE nl_get_auxinput17_inname
SUBROUTINE nl_get_auxinput17_outname ( id_id , auxinput17_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput17_outname
  INTEGER id_id
  auxinput17_outname = trim(model_config_rec%auxinput17_outname)
  RETURN
END SUBROUTINE nl_get_auxinput17_outname
SUBROUTINE nl_get_auxinput17_interval_y ( id_id , auxinput17_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_interval_y
  INTEGER id_id
  auxinput17_interval_y = model_config_rec%auxinput17_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_interval_y
SUBROUTINE nl_get_auxinput17_interval_d ( id_id , auxinput17_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_interval_d
  INTEGER id_id
  auxinput17_interval_d = model_config_rec%auxinput17_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_interval_d
SUBROUTINE nl_get_auxinput17_interval_h ( id_id , auxinput17_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_interval_h
  INTEGER id_id
  auxinput17_interval_h = model_config_rec%auxinput17_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_interval_h
SUBROUTINE nl_get_auxinput17_interval_m ( id_id , auxinput17_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_interval_m
  INTEGER id_id
  auxinput17_interval_m = model_config_rec%auxinput17_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_interval_m
SUBROUTINE nl_get_auxinput17_interval_s ( id_id , auxinput17_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_interval_s
  INTEGER id_id
  auxinput17_interval_s = model_config_rec%auxinput17_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_interval_s
SUBROUTINE nl_get_auxinput17_interval ( id_id , auxinput17_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_interval
  INTEGER id_id
  auxinput17_interval = model_config_rec%auxinput17_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_interval
SUBROUTINE nl_get_auxinput17_begin_y ( id_id , auxinput17_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_begin_y
  INTEGER id_id
  auxinput17_begin_y = model_config_rec%auxinput17_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_begin_y
SUBROUTINE nl_get_auxinput17_begin_d ( id_id , auxinput17_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_begin_d
  INTEGER id_id
  auxinput17_begin_d = model_config_rec%auxinput17_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_begin_d
SUBROUTINE nl_get_auxinput17_begin_h ( id_id , auxinput17_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_begin_h
  INTEGER id_id
  auxinput17_begin_h = model_config_rec%auxinput17_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_begin_h
SUBROUTINE nl_get_auxinput17_begin_m ( id_id , auxinput17_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_begin_m
  INTEGER id_id
  auxinput17_begin_m = model_config_rec%auxinput17_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_begin_m
SUBROUTINE nl_get_auxinput17_begin_s ( id_id , auxinput17_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_begin_s
  INTEGER id_id
  auxinput17_begin_s = model_config_rec%auxinput17_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_begin_s
SUBROUTINE nl_get_auxinput17_begin ( id_id , auxinput17_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_begin
  INTEGER id_id
  auxinput17_begin = model_config_rec%auxinput17_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_begin
SUBROUTINE nl_get_auxinput17_end_y ( id_id , auxinput17_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_end_y
  INTEGER id_id
  auxinput17_end_y = model_config_rec%auxinput17_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_end_y
SUBROUTINE nl_get_auxinput17_end_d ( id_id , auxinput17_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_end_d
  INTEGER id_id
  auxinput17_end_d = model_config_rec%auxinput17_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_end_d
SUBROUTINE nl_get_auxinput17_end_h ( id_id , auxinput17_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_end_h
  INTEGER id_id
  auxinput17_end_h = model_config_rec%auxinput17_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_end_h
SUBROUTINE nl_get_auxinput17_end_m ( id_id , auxinput17_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_end_m
  INTEGER id_id
  auxinput17_end_m = model_config_rec%auxinput17_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_end_m
SUBROUTINE nl_get_auxinput17_end_s ( id_id , auxinput17_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_end_s
  INTEGER id_id
  auxinput17_end_s = model_config_rec%auxinput17_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_end_s
SUBROUTINE nl_get_auxinput17_end ( id_id , auxinput17_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput17_end
  INTEGER id_id
  auxinput17_end = model_config_rec%auxinput17_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput17_end
SUBROUTINE nl_get_io_form_auxinput17 ( id_id , io_form_auxinput17 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput17
  INTEGER id_id
  io_form_auxinput17 = model_config_rec%io_form_auxinput17
  RETURN
END SUBROUTINE nl_get_io_form_auxinput17
SUBROUTINE nl_get_frames_per_auxinput17 ( id_id , frames_per_auxinput17 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput17
  INTEGER id_id
  frames_per_auxinput17 = model_config_rec%frames_per_auxinput17(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput17
SUBROUTINE nl_get_auxinput18_inname ( id_id , auxinput18_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput18_inname
  INTEGER id_id
  auxinput18_inname = trim(model_config_rec%auxinput18_inname)
  RETURN
END SUBROUTINE nl_get_auxinput18_inname
SUBROUTINE nl_get_auxinput18_outname ( id_id , auxinput18_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput18_outname
  INTEGER id_id
  auxinput18_outname = trim(model_config_rec%auxinput18_outname)
  RETURN
END SUBROUTINE nl_get_auxinput18_outname
SUBROUTINE nl_get_auxinput18_interval_y ( id_id , auxinput18_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_interval_y
  INTEGER id_id
  auxinput18_interval_y = model_config_rec%auxinput18_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_interval_y
SUBROUTINE nl_get_auxinput18_interval_d ( id_id , auxinput18_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_interval_d
  INTEGER id_id
  auxinput18_interval_d = model_config_rec%auxinput18_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_interval_d
SUBROUTINE nl_get_auxinput18_interval_h ( id_id , auxinput18_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_interval_h
  INTEGER id_id
  auxinput18_interval_h = model_config_rec%auxinput18_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_interval_h
SUBROUTINE nl_get_auxinput18_interval_m ( id_id , auxinput18_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_interval_m
  INTEGER id_id
  auxinput18_interval_m = model_config_rec%auxinput18_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_interval_m
SUBROUTINE nl_get_auxinput18_interval_s ( id_id , auxinput18_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_interval_s
  INTEGER id_id
  auxinput18_interval_s = model_config_rec%auxinput18_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_interval_s
SUBROUTINE nl_get_auxinput18_interval ( id_id , auxinput18_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_interval
  INTEGER id_id
  auxinput18_interval = model_config_rec%auxinput18_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_interval
SUBROUTINE nl_get_auxinput18_begin_y ( id_id , auxinput18_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_begin_y
  INTEGER id_id
  auxinput18_begin_y = model_config_rec%auxinput18_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_begin_y
SUBROUTINE nl_get_auxinput18_begin_d ( id_id , auxinput18_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_begin_d
  INTEGER id_id
  auxinput18_begin_d = model_config_rec%auxinput18_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_begin_d
SUBROUTINE nl_get_auxinput18_begin_h ( id_id , auxinput18_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_begin_h
  INTEGER id_id
  auxinput18_begin_h = model_config_rec%auxinput18_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_begin_h
SUBROUTINE nl_get_auxinput18_begin_m ( id_id , auxinput18_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_begin_m
  INTEGER id_id
  auxinput18_begin_m = model_config_rec%auxinput18_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_begin_m
SUBROUTINE nl_get_auxinput18_begin_s ( id_id , auxinput18_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_begin_s
  INTEGER id_id
  auxinput18_begin_s = model_config_rec%auxinput18_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_begin_s
SUBROUTINE nl_get_auxinput18_begin ( id_id , auxinput18_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_begin
  INTEGER id_id
  auxinput18_begin = model_config_rec%auxinput18_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_begin
SUBROUTINE nl_get_auxinput18_end_y ( id_id , auxinput18_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_end_y
  INTEGER id_id
  auxinput18_end_y = model_config_rec%auxinput18_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_end_y
SUBROUTINE nl_get_auxinput18_end_d ( id_id , auxinput18_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_end_d
  INTEGER id_id
  auxinput18_end_d = model_config_rec%auxinput18_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_end_d
SUBROUTINE nl_get_auxinput18_end_h ( id_id , auxinput18_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_end_h
  INTEGER id_id
  auxinput18_end_h = model_config_rec%auxinput18_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_end_h
SUBROUTINE nl_get_auxinput18_end_m ( id_id , auxinput18_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_end_m
  INTEGER id_id
  auxinput18_end_m = model_config_rec%auxinput18_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_end_m
SUBROUTINE nl_get_auxinput18_end_s ( id_id , auxinput18_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_end_s
  INTEGER id_id
  auxinput18_end_s = model_config_rec%auxinput18_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_end_s
SUBROUTINE nl_get_auxinput18_end ( id_id , auxinput18_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput18_end
  INTEGER id_id
  auxinput18_end = model_config_rec%auxinput18_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput18_end
SUBROUTINE nl_get_io_form_auxinput18 ( id_id , io_form_auxinput18 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput18
  INTEGER id_id
  io_form_auxinput18 = model_config_rec%io_form_auxinput18
  RETURN
END SUBROUTINE nl_get_io_form_auxinput18
SUBROUTINE nl_get_frames_per_auxinput18 ( id_id , frames_per_auxinput18 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput18
  INTEGER id_id
  frames_per_auxinput18 = model_config_rec%frames_per_auxinput18(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput18
SUBROUTINE nl_get_auxinput19_inname ( id_id , auxinput19_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput19_inname
  INTEGER id_id
  auxinput19_inname = trim(model_config_rec%auxinput19_inname)
  RETURN
END SUBROUTINE nl_get_auxinput19_inname
SUBROUTINE nl_get_auxinput19_outname ( id_id , auxinput19_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput19_outname
  INTEGER id_id
  auxinput19_outname = trim(model_config_rec%auxinput19_outname)
  RETURN
END SUBROUTINE nl_get_auxinput19_outname
SUBROUTINE nl_get_auxinput19_interval_y ( id_id , auxinput19_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_interval_y
  INTEGER id_id
  auxinput19_interval_y = model_config_rec%auxinput19_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_interval_y
SUBROUTINE nl_get_auxinput19_interval_d ( id_id , auxinput19_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_interval_d
  INTEGER id_id
  auxinput19_interval_d = model_config_rec%auxinput19_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_interval_d
SUBROUTINE nl_get_auxinput19_interval_h ( id_id , auxinput19_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_interval_h
  INTEGER id_id
  auxinput19_interval_h = model_config_rec%auxinput19_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_interval_h
SUBROUTINE nl_get_auxinput19_interval_m ( id_id , auxinput19_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_interval_m
  INTEGER id_id
  auxinput19_interval_m = model_config_rec%auxinput19_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_interval_m
SUBROUTINE nl_get_auxinput19_interval_s ( id_id , auxinput19_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_interval_s
  INTEGER id_id
  auxinput19_interval_s = model_config_rec%auxinput19_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_interval_s
SUBROUTINE nl_get_auxinput19_interval ( id_id , auxinput19_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_interval
  INTEGER id_id
  auxinput19_interval = model_config_rec%auxinput19_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_interval
SUBROUTINE nl_get_auxinput19_begin_y ( id_id , auxinput19_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_begin_y
  INTEGER id_id
  auxinput19_begin_y = model_config_rec%auxinput19_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_begin_y
SUBROUTINE nl_get_auxinput19_begin_d ( id_id , auxinput19_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_begin_d
  INTEGER id_id
  auxinput19_begin_d = model_config_rec%auxinput19_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_begin_d
SUBROUTINE nl_get_auxinput19_begin_h ( id_id , auxinput19_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_begin_h
  INTEGER id_id
  auxinput19_begin_h = model_config_rec%auxinput19_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_begin_h
SUBROUTINE nl_get_auxinput19_begin_m ( id_id , auxinput19_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_begin_m
  INTEGER id_id
  auxinput19_begin_m = model_config_rec%auxinput19_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_begin_m
SUBROUTINE nl_get_auxinput19_begin_s ( id_id , auxinput19_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_begin_s
  INTEGER id_id
  auxinput19_begin_s = model_config_rec%auxinput19_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_begin_s
SUBROUTINE nl_get_auxinput19_begin ( id_id , auxinput19_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_begin
  INTEGER id_id
  auxinput19_begin = model_config_rec%auxinput19_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_begin
SUBROUTINE nl_get_auxinput19_end_y ( id_id , auxinput19_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_end_y
  INTEGER id_id
  auxinput19_end_y = model_config_rec%auxinput19_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_end_y
SUBROUTINE nl_get_auxinput19_end_d ( id_id , auxinput19_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_end_d
  INTEGER id_id
  auxinput19_end_d = model_config_rec%auxinput19_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_end_d
SUBROUTINE nl_get_auxinput19_end_h ( id_id , auxinput19_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_end_h
  INTEGER id_id
  auxinput19_end_h = model_config_rec%auxinput19_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_end_h
SUBROUTINE nl_get_auxinput19_end_m ( id_id , auxinput19_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_end_m
  INTEGER id_id
  auxinput19_end_m = model_config_rec%auxinput19_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_end_m
SUBROUTINE nl_get_auxinput19_end_s ( id_id , auxinput19_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_end_s
  INTEGER id_id
  auxinput19_end_s = model_config_rec%auxinput19_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_end_s
SUBROUTINE nl_get_auxinput19_end ( id_id , auxinput19_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput19_end
  INTEGER id_id
  auxinput19_end = model_config_rec%auxinput19_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput19_end
SUBROUTINE nl_get_io_form_auxinput19 ( id_id , io_form_auxinput19 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput19
  INTEGER id_id
  io_form_auxinput19 = model_config_rec%io_form_auxinput19
  RETURN
END SUBROUTINE nl_get_io_form_auxinput19
SUBROUTINE nl_get_frames_per_auxinput19 ( id_id , frames_per_auxinput19 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput19
  INTEGER id_id
  frames_per_auxinput19 = model_config_rec%frames_per_auxinput19(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput19
SUBROUTINE nl_get_auxinput20_inname ( id_id , auxinput20_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput20_inname
  INTEGER id_id
  auxinput20_inname = trim(model_config_rec%auxinput20_inname)
  RETURN
END SUBROUTINE nl_get_auxinput20_inname
SUBROUTINE nl_get_auxinput20_outname ( id_id , auxinput20_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput20_outname
  INTEGER id_id
  auxinput20_outname = trim(model_config_rec%auxinput20_outname)
  RETURN
END SUBROUTINE nl_get_auxinput20_outname
SUBROUTINE nl_get_auxinput20_interval_y ( id_id , auxinput20_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_interval_y
  INTEGER id_id
  auxinput20_interval_y = model_config_rec%auxinput20_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_interval_y
SUBROUTINE nl_get_auxinput20_interval_d ( id_id , auxinput20_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_interval_d
  INTEGER id_id
  auxinput20_interval_d = model_config_rec%auxinput20_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_interval_d
SUBROUTINE nl_get_auxinput20_interval_h ( id_id , auxinput20_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_interval_h
  INTEGER id_id
  auxinput20_interval_h = model_config_rec%auxinput20_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_interval_h
SUBROUTINE nl_get_auxinput20_interval_m ( id_id , auxinput20_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_interval_m
  INTEGER id_id
  auxinput20_interval_m = model_config_rec%auxinput20_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_interval_m
SUBROUTINE nl_get_auxinput20_interval_s ( id_id , auxinput20_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_interval_s
  INTEGER id_id
  auxinput20_interval_s = model_config_rec%auxinput20_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_interval_s
SUBROUTINE nl_get_auxinput20_interval ( id_id , auxinput20_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_interval
  INTEGER id_id
  auxinput20_interval = model_config_rec%auxinput20_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_interval
SUBROUTINE nl_get_auxinput20_begin_y ( id_id , auxinput20_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_begin_y
  INTEGER id_id
  auxinput20_begin_y = model_config_rec%auxinput20_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_begin_y
SUBROUTINE nl_get_auxinput20_begin_d ( id_id , auxinput20_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_begin_d
  INTEGER id_id
  auxinput20_begin_d = model_config_rec%auxinput20_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_begin_d
SUBROUTINE nl_get_auxinput20_begin_h ( id_id , auxinput20_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_begin_h
  INTEGER id_id
  auxinput20_begin_h = model_config_rec%auxinput20_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_begin_h
SUBROUTINE nl_get_auxinput20_begin_m ( id_id , auxinput20_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_begin_m
  INTEGER id_id
  auxinput20_begin_m = model_config_rec%auxinput20_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_begin_m
SUBROUTINE nl_get_auxinput20_begin_s ( id_id , auxinput20_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_begin_s
  INTEGER id_id
  auxinput20_begin_s = model_config_rec%auxinput20_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_begin_s
SUBROUTINE nl_get_auxinput20_begin ( id_id , auxinput20_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_begin
  INTEGER id_id
  auxinput20_begin = model_config_rec%auxinput20_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_begin
SUBROUTINE nl_get_auxinput20_end_y ( id_id , auxinput20_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_end_y
  INTEGER id_id
  auxinput20_end_y = model_config_rec%auxinput20_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_end_y
SUBROUTINE nl_get_auxinput20_end_d ( id_id , auxinput20_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_end_d
  INTEGER id_id
  auxinput20_end_d = model_config_rec%auxinput20_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_end_d
SUBROUTINE nl_get_auxinput20_end_h ( id_id , auxinput20_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_end_h
  INTEGER id_id
  auxinput20_end_h = model_config_rec%auxinput20_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_end_h
SUBROUTINE nl_get_auxinput20_end_m ( id_id , auxinput20_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_end_m
  INTEGER id_id
  auxinput20_end_m = model_config_rec%auxinput20_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_end_m
SUBROUTINE nl_get_auxinput20_end_s ( id_id , auxinput20_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_end_s
  INTEGER id_id
  auxinput20_end_s = model_config_rec%auxinput20_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_end_s
SUBROUTINE nl_get_auxinput20_end ( id_id , auxinput20_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput20_end
  INTEGER id_id
  auxinput20_end = model_config_rec%auxinput20_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput20_end
SUBROUTINE nl_get_io_form_auxinput20 ( id_id , io_form_auxinput20 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput20
  INTEGER id_id
  io_form_auxinput20 = model_config_rec%io_form_auxinput20
  RETURN
END SUBROUTINE nl_get_io_form_auxinput20
SUBROUTINE nl_get_frames_per_auxinput20 ( id_id , frames_per_auxinput20 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput20
  INTEGER id_id
  frames_per_auxinput20 = model_config_rec%frames_per_auxinput20(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput20
SUBROUTINE nl_get_auxinput21_inname ( id_id , auxinput21_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput21_inname
  INTEGER id_id
  auxinput21_inname = trim(model_config_rec%auxinput21_inname)
  RETURN
END SUBROUTINE nl_get_auxinput21_inname
SUBROUTINE nl_get_auxinput21_outname ( id_id , auxinput21_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput21_outname
  INTEGER id_id
  auxinput21_outname = trim(model_config_rec%auxinput21_outname)
  RETURN
END SUBROUTINE nl_get_auxinput21_outname
SUBROUTINE nl_get_auxinput21_interval_y ( id_id , auxinput21_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_interval_y
  INTEGER id_id
  auxinput21_interval_y = model_config_rec%auxinput21_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_interval_y
SUBROUTINE nl_get_auxinput21_interval_d ( id_id , auxinput21_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_interval_d
  INTEGER id_id
  auxinput21_interval_d = model_config_rec%auxinput21_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_interval_d
SUBROUTINE nl_get_auxinput21_interval_h ( id_id , auxinput21_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_interval_h
  INTEGER id_id
  auxinput21_interval_h = model_config_rec%auxinput21_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_interval_h
SUBROUTINE nl_get_auxinput21_interval_m ( id_id , auxinput21_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_interval_m
  INTEGER id_id
  auxinput21_interval_m = model_config_rec%auxinput21_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_interval_m
SUBROUTINE nl_get_auxinput21_interval_s ( id_id , auxinput21_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_interval_s
  INTEGER id_id
  auxinput21_interval_s = model_config_rec%auxinput21_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_interval_s
SUBROUTINE nl_get_auxinput21_interval ( id_id , auxinput21_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_interval
  INTEGER id_id
  auxinput21_interval = model_config_rec%auxinput21_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_interval
SUBROUTINE nl_get_auxinput21_begin_y ( id_id , auxinput21_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_begin_y
  INTEGER id_id
  auxinput21_begin_y = model_config_rec%auxinput21_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_begin_y
SUBROUTINE nl_get_auxinput21_begin_d ( id_id , auxinput21_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_begin_d
  INTEGER id_id
  auxinput21_begin_d = model_config_rec%auxinput21_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_begin_d
SUBROUTINE nl_get_auxinput21_begin_h ( id_id , auxinput21_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_begin_h
  INTEGER id_id
  auxinput21_begin_h = model_config_rec%auxinput21_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_begin_h
SUBROUTINE nl_get_auxinput21_begin_m ( id_id , auxinput21_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_begin_m
  INTEGER id_id
  auxinput21_begin_m = model_config_rec%auxinput21_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_begin_m
SUBROUTINE nl_get_auxinput21_begin_s ( id_id , auxinput21_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_begin_s
  INTEGER id_id
  auxinput21_begin_s = model_config_rec%auxinput21_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_begin_s
SUBROUTINE nl_get_auxinput21_begin ( id_id , auxinput21_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_begin
  INTEGER id_id
  auxinput21_begin = model_config_rec%auxinput21_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_begin
SUBROUTINE nl_get_auxinput21_end_y ( id_id , auxinput21_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_end_y
  INTEGER id_id
  auxinput21_end_y = model_config_rec%auxinput21_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_end_y
SUBROUTINE nl_get_auxinput21_end_d ( id_id , auxinput21_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_end_d
  INTEGER id_id
  auxinput21_end_d = model_config_rec%auxinput21_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_end_d
SUBROUTINE nl_get_auxinput21_end_h ( id_id , auxinput21_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_end_h
  INTEGER id_id
  auxinput21_end_h = model_config_rec%auxinput21_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_end_h
SUBROUTINE nl_get_auxinput21_end_m ( id_id , auxinput21_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_end_m
  INTEGER id_id
  auxinput21_end_m = model_config_rec%auxinput21_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_end_m
SUBROUTINE nl_get_auxinput21_end_s ( id_id , auxinput21_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_end_s
  INTEGER id_id
  auxinput21_end_s = model_config_rec%auxinput21_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_end_s
SUBROUTINE nl_get_auxinput21_end ( id_id , auxinput21_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput21_end
  INTEGER id_id
  auxinput21_end = model_config_rec%auxinput21_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput21_end
SUBROUTINE nl_get_io_form_auxinput21 ( id_id , io_form_auxinput21 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput21
  INTEGER id_id
  io_form_auxinput21 = model_config_rec%io_form_auxinput21
  RETURN
END SUBROUTINE nl_get_io_form_auxinput21
SUBROUTINE nl_get_frames_per_auxinput21 ( id_id , frames_per_auxinput21 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput21
  INTEGER id_id
  frames_per_auxinput21 = model_config_rec%frames_per_auxinput21(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput21
SUBROUTINE nl_get_auxinput22_inname ( id_id , auxinput22_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput22_inname
  INTEGER id_id
  auxinput22_inname = trim(model_config_rec%auxinput22_inname)
  RETURN
END SUBROUTINE nl_get_auxinput22_inname
SUBROUTINE nl_get_auxinput22_outname ( id_id , auxinput22_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput22_outname
  INTEGER id_id
  auxinput22_outname = trim(model_config_rec%auxinput22_outname)
  RETURN
END SUBROUTINE nl_get_auxinput22_outname
SUBROUTINE nl_get_auxinput22_interval_y ( id_id , auxinput22_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_interval_y
  INTEGER id_id
  auxinput22_interval_y = model_config_rec%auxinput22_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_interval_y
SUBROUTINE nl_get_auxinput22_interval_d ( id_id , auxinput22_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_interval_d
  INTEGER id_id
  auxinput22_interval_d = model_config_rec%auxinput22_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_interval_d
SUBROUTINE nl_get_auxinput22_interval_h ( id_id , auxinput22_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_interval_h
  INTEGER id_id
  auxinput22_interval_h = model_config_rec%auxinput22_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_interval_h
SUBROUTINE nl_get_auxinput22_interval_m ( id_id , auxinput22_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_interval_m
  INTEGER id_id
  auxinput22_interval_m = model_config_rec%auxinput22_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_interval_m
SUBROUTINE nl_get_auxinput22_interval_s ( id_id , auxinput22_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_interval_s
  INTEGER id_id
  auxinput22_interval_s = model_config_rec%auxinput22_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_interval_s
SUBROUTINE nl_get_auxinput22_interval ( id_id , auxinput22_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_interval
  INTEGER id_id
  auxinput22_interval = model_config_rec%auxinput22_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_interval
SUBROUTINE nl_get_auxinput22_begin_y ( id_id , auxinput22_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_begin_y
  INTEGER id_id
  auxinput22_begin_y = model_config_rec%auxinput22_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_begin_y
SUBROUTINE nl_get_auxinput22_begin_d ( id_id , auxinput22_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_begin_d
  INTEGER id_id
  auxinput22_begin_d = model_config_rec%auxinput22_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_begin_d
SUBROUTINE nl_get_auxinput22_begin_h ( id_id , auxinput22_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_begin_h
  INTEGER id_id
  auxinput22_begin_h = model_config_rec%auxinput22_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_begin_h
SUBROUTINE nl_get_auxinput22_begin_m ( id_id , auxinput22_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_begin_m
  INTEGER id_id
  auxinput22_begin_m = model_config_rec%auxinput22_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_begin_m
SUBROUTINE nl_get_auxinput22_begin_s ( id_id , auxinput22_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_begin_s
  INTEGER id_id
  auxinput22_begin_s = model_config_rec%auxinput22_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_begin_s
SUBROUTINE nl_get_auxinput22_begin ( id_id , auxinput22_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_begin
  INTEGER id_id
  auxinput22_begin = model_config_rec%auxinput22_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_begin
SUBROUTINE nl_get_auxinput22_end_y ( id_id , auxinput22_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_end_y
  INTEGER id_id
  auxinput22_end_y = model_config_rec%auxinput22_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_end_y
SUBROUTINE nl_get_auxinput22_end_d ( id_id , auxinput22_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_end_d
  INTEGER id_id
  auxinput22_end_d = model_config_rec%auxinput22_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_end_d
SUBROUTINE nl_get_auxinput22_end_h ( id_id , auxinput22_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_end_h
  INTEGER id_id
  auxinput22_end_h = model_config_rec%auxinput22_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_end_h
SUBROUTINE nl_get_auxinput22_end_m ( id_id , auxinput22_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_end_m
  INTEGER id_id
  auxinput22_end_m = model_config_rec%auxinput22_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_end_m
SUBROUTINE nl_get_auxinput22_end_s ( id_id , auxinput22_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_end_s
  INTEGER id_id
  auxinput22_end_s = model_config_rec%auxinput22_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_end_s
SUBROUTINE nl_get_auxinput22_end ( id_id , auxinput22_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput22_end
  INTEGER id_id
  auxinput22_end = model_config_rec%auxinput22_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput22_end
SUBROUTINE nl_get_io_form_auxinput22 ( id_id , io_form_auxinput22 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput22
  INTEGER id_id
  io_form_auxinput22 = model_config_rec%io_form_auxinput22
  RETURN
END SUBROUTINE nl_get_io_form_auxinput22
SUBROUTINE nl_get_frames_per_auxinput22 ( id_id , frames_per_auxinput22 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput22
  INTEGER id_id
  frames_per_auxinput22 = model_config_rec%frames_per_auxinput22(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput22
SUBROUTINE nl_get_auxinput23_inname ( id_id , auxinput23_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput23_inname
  INTEGER id_id
  auxinput23_inname = trim(model_config_rec%auxinput23_inname)
  RETURN
END SUBROUTINE nl_get_auxinput23_inname
SUBROUTINE nl_get_auxinput23_outname ( id_id , auxinput23_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput23_outname
  INTEGER id_id
  auxinput23_outname = trim(model_config_rec%auxinput23_outname)
  RETURN
END SUBROUTINE nl_get_auxinput23_outname
SUBROUTINE nl_get_auxinput23_interval_y ( id_id , auxinput23_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_interval_y
  INTEGER id_id
  auxinput23_interval_y = model_config_rec%auxinput23_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_interval_y
SUBROUTINE nl_get_auxinput23_interval_d ( id_id , auxinput23_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_interval_d
  INTEGER id_id
  auxinput23_interval_d = model_config_rec%auxinput23_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_interval_d
SUBROUTINE nl_get_auxinput23_interval_h ( id_id , auxinput23_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_interval_h
  INTEGER id_id
  auxinput23_interval_h = model_config_rec%auxinput23_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_interval_h
SUBROUTINE nl_get_auxinput23_interval_m ( id_id , auxinput23_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_interval_m
  INTEGER id_id
  auxinput23_interval_m = model_config_rec%auxinput23_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_interval_m
SUBROUTINE nl_get_auxinput23_interval_s ( id_id , auxinput23_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_interval_s
  INTEGER id_id
  auxinput23_interval_s = model_config_rec%auxinput23_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_interval_s
SUBROUTINE nl_get_auxinput23_interval ( id_id , auxinput23_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_interval
  INTEGER id_id
  auxinput23_interval = model_config_rec%auxinput23_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_interval
SUBROUTINE nl_get_auxinput23_begin_y ( id_id , auxinput23_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_begin_y
  INTEGER id_id
  auxinput23_begin_y = model_config_rec%auxinput23_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_begin_y
SUBROUTINE nl_get_auxinput23_begin_d ( id_id , auxinput23_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_begin_d
  INTEGER id_id
  auxinput23_begin_d = model_config_rec%auxinput23_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_begin_d
SUBROUTINE nl_get_auxinput23_begin_h ( id_id , auxinput23_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_begin_h
  INTEGER id_id
  auxinput23_begin_h = model_config_rec%auxinput23_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_begin_h
SUBROUTINE nl_get_auxinput23_begin_m ( id_id , auxinput23_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_begin_m
  INTEGER id_id
  auxinput23_begin_m = model_config_rec%auxinput23_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_begin_m
SUBROUTINE nl_get_auxinput23_begin_s ( id_id , auxinput23_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_begin_s
  INTEGER id_id
  auxinput23_begin_s = model_config_rec%auxinput23_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_begin_s
SUBROUTINE nl_get_auxinput23_begin ( id_id , auxinput23_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_begin
  INTEGER id_id
  auxinput23_begin = model_config_rec%auxinput23_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_begin
SUBROUTINE nl_get_auxinput23_end_y ( id_id , auxinput23_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_end_y
  INTEGER id_id
  auxinput23_end_y = model_config_rec%auxinput23_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_end_y
SUBROUTINE nl_get_auxinput23_end_d ( id_id , auxinput23_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_end_d
  INTEGER id_id
  auxinput23_end_d = model_config_rec%auxinput23_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_end_d
SUBROUTINE nl_get_auxinput23_end_h ( id_id , auxinput23_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_end_h
  INTEGER id_id
  auxinput23_end_h = model_config_rec%auxinput23_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_end_h
SUBROUTINE nl_get_auxinput23_end_m ( id_id , auxinput23_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_end_m
  INTEGER id_id
  auxinput23_end_m = model_config_rec%auxinput23_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_end_m
SUBROUTINE nl_get_auxinput23_end_s ( id_id , auxinput23_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_end_s
  INTEGER id_id
  auxinput23_end_s = model_config_rec%auxinput23_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_end_s
SUBROUTINE nl_get_auxinput23_end ( id_id , auxinput23_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput23_end
  INTEGER id_id
  auxinput23_end = model_config_rec%auxinput23_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput23_end
SUBROUTINE nl_get_io_form_auxinput23 ( id_id , io_form_auxinput23 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput23
  INTEGER id_id
  io_form_auxinput23 = model_config_rec%io_form_auxinput23
  RETURN
END SUBROUTINE nl_get_io_form_auxinput23
SUBROUTINE nl_get_frames_per_auxinput23 ( id_id , frames_per_auxinput23 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput23
  INTEGER id_id
  frames_per_auxinput23 = model_config_rec%frames_per_auxinput23(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput23
SUBROUTINE nl_get_auxinput24_inname ( id_id , auxinput24_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput24_inname
  INTEGER id_id
  auxinput24_inname = trim(model_config_rec%auxinput24_inname)
  RETURN
END SUBROUTINE nl_get_auxinput24_inname
SUBROUTINE nl_get_auxinput24_outname ( id_id , auxinput24_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput24_outname
  INTEGER id_id
  auxinput24_outname = trim(model_config_rec%auxinput24_outname)
  RETURN
END SUBROUTINE nl_get_auxinput24_outname
SUBROUTINE nl_get_auxinput24_interval_y ( id_id , auxinput24_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_interval_y
  INTEGER id_id
  auxinput24_interval_y = model_config_rec%auxinput24_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_interval_y
SUBROUTINE nl_get_auxinput24_interval_d ( id_id , auxinput24_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_interval_d
  INTEGER id_id
  auxinput24_interval_d = model_config_rec%auxinput24_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_interval_d
SUBROUTINE nl_get_auxinput24_interval_h ( id_id , auxinput24_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_interval_h
  INTEGER id_id
  auxinput24_interval_h = model_config_rec%auxinput24_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_interval_h
SUBROUTINE nl_get_auxinput24_interval_m ( id_id , auxinput24_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_interval_m
  INTEGER id_id
  auxinput24_interval_m = model_config_rec%auxinput24_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_interval_m
SUBROUTINE nl_get_auxinput24_interval_s ( id_id , auxinput24_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_interval_s
  INTEGER id_id
  auxinput24_interval_s = model_config_rec%auxinput24_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_interval_s
SUBROUTINE nl_get_auxinput24_interval ( id_id , auxinput24_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_interval
  INTEGER id_id
  auxinput24_interval = model_config_rec%auxinput24_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_interval
SUBROUTINE nl_get_auxinput24_begin_y ( id_id , auxinput24_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_begin_y
  INTEGER id_id
  auxinput24_begin_y = model_config_rec%auxinput24_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_begin_y
SUBROUTINE nl_get_auxinput24_begin_d ( id_id , auxinput24_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_begin_d
  INTEGER id_id
  auxinput24_begin_d = model_config_rec%auxinput24_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_begin_d
SUBROUTINE nl_get_auxinput24_begin_h ( id_id , auxinput24_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_begin_h
  INTEGER id_id
  auxinput24_begin_h = model_config_rec%auxinput24_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_begin_h
SUBROUTINE nl_get_auxinput24_begin_m ( id_id , auxinput24_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_begin_m
  INTEGER id_id
  auxinput24_begin_m = model_config_rec%auxinput24_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_begin_m
SUBROUTINE nl_get_auxinput24_begin_s ( id_id , auxinput24_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_begin_s
  INTEGER id_id
  auxinput24_begin_s = model_config_rec%auxinput24_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_begin_s
SUBROUTINE nl_get_auxinput24_begin ( id_id , auxinput24_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_begin
  INTEGER id_id
  auxinput24_begin = model_config_rec%auxinput24_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_begin
SUBROUTINE nl_get_auxinput24_end_y ( id_id , auxinput24_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_end_y
  INTEGER id_id
  auxinput24_end_y = model_config_rec%auxinput24_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_end_y
SUBROUTINE nl_get_auxinput24_end_d ( id_id , auxinput24_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_end_d
  INTEGER id_id
  auxinput24_end_d = model_config_rec%auxinput24_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_end_d
SUBROUTINE nl_get_auxinput24_end_h ( id_id , auxinput24_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_end_h
  INTEGER id_id
  auxinput24_end_h = model_config_rec%auxinput24_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_end_h
SUBROUTINE nl_get_auxinput24_end_m ( id_id , auxinput24_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_end_m
  INTEGER id_id
  auxinput24_end_m = model_config_rec%auxinput24_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_end_m
SUBROUTINE nl_get_auxinput24_end_s ( id_id , auxinput24_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_end_s
  INTEGER id_id
  auxinput24_end_s = model_config_rec%auxinput24_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_end_s
SUBROUTINE nl_get_auxinput24_end ( id_id , auxinput24_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput24_end
  INTEGER id_id
  auxinput24_end = model_config_rec%auxinput24_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput24_end
SUBROUTINE nl_get_io_form_auxinput24 ( id_id , io_form_auxinput24 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput24
  INTEGER id_id
  io_form_auxinput24 = model_config_rec%io_form_auxinput24
  RETURN
END SUBROUTINE nl_get_io_form_auxinput24
SUBROUTINE nl_get_frames_per_auxinput24 ( id_id , frames_per_auxinput24 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput24
  INTEGER id_id
  frames_per_auxinput24 = model_config_rec%frames_per_auxinput24(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput24
SUBROUTINE nl_get_history_interval ( id_id , history_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_interval
  INTEGER id_id
  history_interval = model_config_rec%history_interval(id_id)
  RETURN
END SUBROUTINE nl_get_history_interval
SUBROUTINE nl_get_frames_per_outfile ( id_id , frames_per_outfile )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_outfile
  INTEGER id_id
  frames_per_outfile = model_config_rec%frames_per_outfile(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_outfile
SUBROUTINE nl_get_restart ( id_id , restart )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: restart
  INTEGER id_id
  restart = model_config_rec%restart
  RETURN
END SUBROUTINE nl_get_restart
SUBROUTINE nl_get_restart_interval ( id_id , restart_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_interval
  INTEGER id_id
  restart_interval = model_config_rec%restart_interval
  RETURN
END SUBROUTINE nl_get_restart_interval
SUBROUTINE nl_get_io_form_input ( id_id , io_form_input )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_input
  INTEGER id_id
  io_form_input = model_config_rec%io_form_input
  RETURN
END SUBROUTINE nl_get_io_form_input
SUBROUTINE nl_get_io_form_history ( id_id , io_form_history )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_history
  INTEGER id_id
  io_form_history = model_config_rec%io_form_history
  RETURN
END SUBROUTINE nl_get_io_form_history
SUBROUTINE nl_get_io_form_restart ( id_id , io_form_restart )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_restart
  INTEGER id_id
  io_form_restart = model_config_rec%io_form_restart
  RETURN
END SUBROUTINE nl_get_io_form_restart
SUBROUTINE nl_get_io_form_boundary ( id_id , io_form_boundary )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_boundary
  INTEGER id_id
  io_form_boundary = model_config_rec%io_form_boundary
  RETURN
END SUBROUTINE nl_get_io_form_boundary
SUBROUTINE nl_get_debug_level ( id_id , debug_level )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: debug_level
  INTEGER id_id
  debug_level = model_config_rec%debug_level
  RETURN
END SUBROUTINE nl_get_debug_level
SUBROUTINE nl_get_self_test_domain ( id_id , self_test_domain )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: self_test_domain
  INTEGER id_id
  self_test_domain = model_config_rec%self_test_domain
  RETURN
END SUBROUTINE nl_get_self_test_domain
SUBROUTINE nl_get_history_outname ( id_id , history_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: history_outname
  INTEGER id_id
  history_outname = trim(model_config_rec%history_outname)
  RETURN
END SUBROUTINE nl_get_history_outname
SUBROUTINE nl_get_history_inname ( id_id , history_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: history_inname
  INTEGER id_id
  history_inname = trim(model_config_rec%history_inname)
  RETURN
END SUBROUTINE nl_get_history_inname
SUBROUTINE nl_get_use_netcdf_classic ( id_id , use_netcdf_classic )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: use_netcdf_classic
  INTEGER id_id
  use_netcdf_classic = model_config_rec%use_netcdf_classic
  RETURN
END SUBROUTINE nl_get_use_netcdf_classic
SUBROUTINE nl_get_history_interval_d ( id_id , history_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_interval_d
  INTEGER id_id
  history_interval_d = model_config_rec%history_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_history_interval_d
SUBROUTINE nl_get_history_interval_h ( id_id , history_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_interval_h
  INTEGER id_id
  history_interval_h = model_config_rec%history_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_history_interval_h
SUBROUTINE nl_get_history_interval_m ( id_id , history_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_interval_m
  INTEGER id_id
  history_interval_m = model_config_rec%history_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_history_interval_m
SUBROUTINE nl_get_history_interval_s ( id_id , history_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_interval_s
  INTEGER id_id
  history_interval_s = model_config_rec%history_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_history_interval_s
SUBROUTINE nl_get_inputout_interval_d ( id_id , inputout_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_interval_d
  INTEGER id_id
  inputout_interval_d = model_config_rec%inputout_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_interval_d
SUBROUTINE nl_get_inputout_interval_h ( id_id , inputout_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_interval_h
  INTEGER id_id
  inputout_interval_h = model_config_rec%inputout_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_interval_h
SUBROUTINE nl_get_inputout_interval_m ( id_id , inputout_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_interval_m
  INTEGER id_id
  inputout_interval_m = model_config_rec%inputout_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_interval_m
SUBROUTINE nl_get_inputout_interval_s ( id_id , inputout_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_interval_s
  INTEGER id_id
  inputout_interval_s = model_config_rec%inputout_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_interval_s
SUBROUTINE nl_get_inputout_interval ( id_id , inputout_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_interval
  INTEGER id_id
  inputout_interval = model_config_rec%inputout_interval(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_interval
SUBROUTINE nl_get_restart_interval_d ( id_id , restart_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_interval_d
  INTEGER id_id
  restart_interval_d = model_config_rec%restart_interval_d
  RETURN
END SUBROUTINE nl_get_restart_interval_d
SUBROUTINE nl_get_restart_interval_h ( id_id , restart_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_interval_h
  INTEGER id_id
  restart_interval_h = model_config_rec%restart_interval_h
  RETURN
END SUBROUTINE nl_get_restart_interval_h
SUBROUTINE nl_get_restart_interval_m ( id_id , restart_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_interval_m
  INTEGER id_id
  restart_interval_m = model_config_rec%restart_interval_m
  RETURN
END SUBROUTINE nl_get_restart_interval_m
SUBROUTINE nl_get_restart_interval_s ( id_id , restart_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_interval_s
  INTEGER id_id
  restart_interval_s = model_config_rec%restart_interval_s
  RETURN
END SUBROUTINE nl_get_restart_interval_s
SUBROUTINE nl_get_history_begin_y ( id_id , history_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_begin_y
  INTEGER id_id
  history_begin_y = model_config_rec%history_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_history_begin_y
SUBROUTINE nl_get_history_begin_d ( id_id , history_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_begin_d
  INTEGER id_id
  history_begin_d = model_config_rec%history_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_history_begin_d
SUBROUTINE nl_get_history_begin_h ( id_id , history_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_begin_h
  INTEGER id_id
  history_begin_h = model_config_rec%history_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_history_begin_h
SUBROUTINE nl_get_history_begin_m ( id_id , history_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_begin_m
  INTEGER id_id
  history_begin_m = model_config_rec%history_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_history_begin_m
SUBROUTINE nl_get_history_begin_s ( id_id , history_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_begin_s
  INTEGER id_id
  history_begin_s = model_config_rec%history_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_history_begin_s
SUBROUTINE nl_get_history_begin ( id_id , history_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_begin
  INTEGER id_id
  history_begin = model_config_rec%history_begin(id_id)
  RETURN
END SUBROUTINE nl_get_history_begin
SUBROUTINE nl_get_inputout_begin_y ( id_id , inputout_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_begin_y
  INTEGER id_id
  inputout_begin_y = model_config_rec%inputout_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_begin_y
SUBROUTINE nl_get_inputout_begin_d ( id_id , inputout_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_begin_d
  INTEGER id_id
  inputout_begin_d = model_config_rec%inputout_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_begin_d
SUBROUTINE nl_get_inputout_begin_h ( id_id , inputout_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_begin_h
  INTEGER id_id
  inputout_begin_h = model_config_rec%inputout_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_begin_h
SUBROUTINE nl_get_inputout_begin_m ( id_id , inputout_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_begin_m
  INTEGER id_id
  inputout_begin_m = model_config_rec%inputout_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_begin_m
SUBROUTINE nl_get_inputout_begin_s ( id_id , inputout_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: inputout_begin_s
  INTEGER id_id
  inputout_begin_s = model_config_rec%inputout_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_inputout_begin_s
SUBROUTINE nl_get_restart_begin_y ( id_id , restart_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_begin_y
  INTEGER id_id
  restart_begin_y = model_config_rec%restart_begin_y
  RETURN
END SUBROUTINE nl_get_restart_begin_y
SUBROUTINE nl_get_restart_begin_d ( id_id , restart_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_begin_d
  INTEGER id_id
  restart_begin_d = model_config_rec%restart_begin_d
  RETURN
END SUBROUTINE nl_get_restart_begin_d
SUBROUTINE nl_get_restart_begin_h ( id_id , restart_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_begin_h
  INTEGER id_id
  restart_begin_h = model_config_rec%restart_begin_h
  RETURN
END SUBROUTINE nl_get_restart_begin_h
SUBROUTINE nl_get_restart_begin_m ( id_id , restart_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_begin_m
  INTEGER id_id
  restart_begin_m = model_config_rec%restart_begin_m
  RETURN
END SUBROUTINE nl_get_restart_begin_m
SUBROUTINE nl_get_restart_begin_s ( id_id , restart_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_begin_s
  INTEGER id_id
  restart_begin_s = model_config_rec%restart_begin_s
  RETURN
END SUBROUTINE nl_get_restart_begin_s
SUBROUTINE nl_get_restart_begin ( id_id , restart_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: restart_begin
  INTEGER id_id
  restart_begin = model_config_rec%restart_begin
  RETURN
END SUBROUTINE nl_get_restart_begin
SUBROUTINE nl_get_history_end_y ( id_id , history_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_end_y
  INTEGER id_id
  history_end_y = model_config_rec%history_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_history_end_y
SUBROUTINE nl_get_history_end_d ( id_id , history_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_end_d
  INTEGER id_id
  history_end_d = model_config_rec%history_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_history_end_d
SUBROUTINE nl_get_history_end_h ( id_id , history_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_end_h
  INTEGER id_id
  history_end_h = model_config_rec%history_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_history_end_h
SUBROUTINE nl_get_history_end_m ( id_id , history_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: history_end_m
  INTEGER id_id
  history_end_m = model_config_rec%history_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_history_end_m
!ENDOFREGISTRYGENERATEDINCLUDE
