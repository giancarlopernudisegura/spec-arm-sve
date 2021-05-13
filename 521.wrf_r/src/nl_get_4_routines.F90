!STARTOFREGISTRYGENERATEDINCLUDE 'inc/nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit. Your changes to this file will be lost.
!
SUBROUTINE nl_get_auxhist18_interval_h ( id_id , auxhist18_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_interval_h
  INTEGER id_id
  auxhist18_interval_h = model_config_rec%auxhist18_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_interval_h
SUBROUTINE nl_get_auxhist18_interval_m ( id_id , auxhist18_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_interval_m
  INTEGER id_id
  auxhist18_interval_m = model_config_rec%auxhist18_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_interval_m
SUBROUTINE nl_get_auxhist18_interval_s ( id_id , auxhist18_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_interval_s
  INTEGER id_id
  auxhist18_interval_s = model_config_rec%auxhist18_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_interval_s
SUBROUTINE nl_get_auxhist18_interval ( id_id , auxhist18_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_interval
  INTEGER id_id
  auxhist18_interval = model_config_rec%auxhist18_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_interval
SUBROUTINE nl_get_auxhist18_begin_y ( id_id , auxhist18_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_begin_y
  INTEGER id_id
  auxhist18_begin_y = model_config_rec%auxhist18_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_begin_y
SUBROUTINE nl_get_auxhist18_begin_d ( id_id , auxhist18_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_begin_d
  INTEGER id_id
  auxhist18_begin_d = model_config_rec%auxhist18_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_begin_d
SUBROUTINE nl_get_auxhist18_begin_h ( id_id , auxhist18_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_begin_h
  INTEGER id_id
  auxhist18_begin_h = model_config_rec%auxhist18_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_begin_h
SUBROUTINE nl_get_auxhist18_begin_m ( id_id , auxhist18_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_begin_m
  INTEGER id_id
  auxhist18_begin_m = model_config_rec%auxhist18_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_begin_m
SUBROUTINE nl_get_auxhist18_begin_s ( id_id , auxhist18_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_begin_s
  INTEGER id_id
  auxhist18_begin_s = model_config_rec%auxhist18_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_begin_s
SUBROUTINE nl_get_auxhist18_begin ( id_id , auxhist18_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_begin
  INTEGER id_id
  auxhist18_begin = model_config_rec%auxhist18_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_begin
SUBROUTINE nl_get_auxhist18_end_y ( id_id , auxhist18_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_end_y
  INTEGER id_id
  auxhist18_end_y = model_config_rec%auxhist18_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_end_y
SUBROUTINE nl_get_auxhist18_end_d ( id_id , auxhist18_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_end_d
  INTEGER id_id
  auxhist18_end_d = model_config_rec%auxhist18_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_end_d
SUBROUTINE nl_get_auxhist18_end_h ( id_id , auxhist18_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_end_h
  INTEGER id_id
  auxhist18_end_h = model_config_rec%auxhist18_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_end_h
SUBROUTINE nl_get_auxhist18_end_m ( id_id , auxhist18_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_end_m
  INTEGER id_id
  auxhist18_end_m = model_config_rec%auxhist18_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_end_m
SUBROUTINE nl_get_auxhist18_end_s ( id_id , auxhist18_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_end_s
  INTEGER id_id
  auxhist18_end_s = model_config_rec%auxhist18_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_end_s
SUBROUTINE nl_get_auxhist18_end ( id_id , auxhist18_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_end
  INTEGER id_id
  auxhist18_end = model_config_rec%auxhist18_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_end
SUBROUTINE nl_get_io_form_auxhist18 ( id_id , io_form_auxhist18 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist18
  INTEGER id_id
  io_form_auxhist18 = model_config_rec%io_form_auxhist18
  RETURN
END SUBROUTINE nl_get_io_form_auxhist18
SUBROUTINE nl_get_frames_per_auxhist18 ( id_id , frames_per_auxhist18 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist18
  INTEGER id_id
  frames_per_auxhist18 = model_config_rec%frames_per_auxhist18(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist18
SUBROUTINE nl_get_auxhist19_inname ( id_id , auxhist19_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist19_inname
  INTEGER id_id
  auxhist19_inname = trim(model_config_rec%auxhist19_inname)
  RETURN
END SUBROUTINE nl_get_auxhist19_inname
SUBROUTINE nl_get_auxhist19_outname ( id_id , auxhist19_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist19_outname
  INTEGER id_id
  auxhist19_outname = trim(model_config_rec%auxhist19_outname)
  RETURN
END SUBROUTINE nl_get_auxhist19_outname
SUBROUTINE nl_get_auxhist19_interval_y ( id_id , auxhist19_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_interval_y
  INTEGER id_id
  auxhist19_interval_y = model_config_rec%auxhist19_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_interval_y
SUBROUTINE nl_get_auxhist19_interval_d ( id_id , auxhist19_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_interval_d
  INTEGER id_id
  auxhist19_interval_d = model_config_rec%auxhist19_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_interval_d
SUBROUTINE nl_get_auxhist19_interval_h ( id_id , auxhist19_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_interval_h
  INTEGER id_id
  auxhist19_interval_h = model_config_rec%auxhist19_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_interval_h
SUBROUTINE nl_get_auxhist19_interval_m ( id_id , auxhist19_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_interval_m
  INTEGER id_id
  auxhist19_interval_m = model_config_rec%auxhist19_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_interval_m
SUBROUTINE nl_get_auxhist19_interval_s ( id_id , auxhist19_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_interval_s
  INTEGER id_id
  auxhist19_interval_s = model_config_rec%auxhist19_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_interval_s
SUBROUTINE nl_get_auxhist19_interval ( id_id , auxhist19_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_interval
  INTEGER id_id
  auxhist19_interval = model_config_rec%auxhist19_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_interval
SUBROUTINE nl_get_auxhist19_begin_y ( id_id , auxhist19_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_begin_y
  INTEGER id_id
  auxhist19_begin_y = model_config_rec%auxhist19_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_begin_y
SUBROUTINE nl_get_auxhist19_begin_d ( id_id , auxhist19_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_begin_d
  INTEGER id_id
  auxhist19_begin_d = model_config_rec%auxhist19_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_begin_d
SUBROUTINE nl_get_auxhist19_begin_h ( id_id , auxhist19_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_begin_h
  INTEGER id_id
  auxhist19_begin_h = model_config_rec%auxhist19_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_begin_h
SUBROUTINE nl_get_auxhist19_begin_m ( id_id , auxhist19_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_begin_m
  INTEGER id_id
  auxhist19_begin_m = model_config_rec%auxhist19_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_begin_m
SUBROUTINE nl_get_auxhist19_begin_s ( id_id , auxhist19_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_begin_s
  INTEGER id_id
  auxhist19_begin_s = model_config_rec%auxhist19_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_begin_s
SUBROUTINE nl_get_auxhist19_begin ( id_id , auxhist19_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_begin
  INTEGER id_id
  auxhist19_begin = model_config_rec%auxhist19_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_begin
SUBROUTINE nl_get_auxhist19_end_y ( id_id , auxhist19_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_end_y
  INTEGER id_id
  auxhist19_end_y = model_config_rec%auxhist19_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_end_y
SUBROUTINE nl_get_auxhist19_end_d ( id_id , auxhist19_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_end_d
  INTEGER id_id
  auxhist19_end_d = model_config_rec%auxhist19_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_end_d
SUBROUTINE nl_get_auxhist19_end_h ( id_id , auxhist19_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_end_h
  INTEGER id_id
  auxhist19_end_h = model_config_rec%auxhist19_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_end_h
SUBROUTINE nl_get_auxhist19_end_m ( id_id , auxhist19_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_end_m
  INTEGER id_id
  auxhist19_end_m = model_config_rec%auxhist19_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_end_m
SUBROUTINE nl_get_auxhist19_end_s ( id_id , auxhist19_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_end_s
  INTEGER id_id
  auxhist19_end_s = model_config_rec%auxhist19_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_end_s
SUBROUTINE nl_get_auxhist19_end ( id_id , auxhist19_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist19_end
  INTEGER id_id
  auxhist19_end = model_config_rec%auxhist19_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist19_end
SUBROUTINE nl_get_io_form_auxhist19 ( id_id , io_form_auxhist19 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist19
  INTEGER id_id
  io_form_auxhist19 = model_config_rec%io_form_auxhist19
  RETURN
END SUBROUTINE nl_get_io_form_auxhist19
SUBROUTINE nl_get_frames_per_auxhist19 ( id_id , frames_per_auxhist19 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist19
  INTEGER id_id
  frames_per_auxhist19 = model_config_rec%frames_per_auxhist19(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist19
SUBROUTINE nl_get_auxhist20_inname ( id_id , auxhist20_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist20_inname
  INTEGER id_id
  auxhist20_inname = trim(model_config_rec%auxhist20_inname)
  RETURN
END SUBROUTINE nl_get_auxhist20_inname
SUBROUTINE nl_get_auxhist20_outname ( id_id , auxhist20_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist20_outname
  INTEGER id_id
  auxhist20_outname = trim(model_config_rec%auxhist20_outname)
  RETURN
END SUBROUTINE nl_get_auxhist20_outname
SUBROUTINE nl_get_auxhist20_interval_y ( id_id , auxhist20_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_interval_y
  INTEGER id_id
  auxhist20_interval_y = model_config_rec%auxhist20_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_interval_y
SUBROUTINE nl_get_auxhist20_interval_d ( id_id , auxhist20_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_interval_d
  INTEGER id_id
  auxhist20_interval_d = model_config_rec%auxhist20_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_interval_d
SUBROUTINE nl_get_auxhist20_interval_h ( id_id , auxhist20_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_interval_h
  INTEGER id_id
  auxhist20_interval_h = model_config_rec%auxhist20_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_interval_h
SUBROUTINE nl_get_auxhist20_interval_m ( id_id , auxhist20_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_interval_m
  INTEGER id_id
  auxhist20_interval_m = model_config_rec%auxhist20_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_interval_m
SUBROUTINE nl_get_auxhist20_interval_s ( id_id , auxhist20_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_interval_s
  INTEGER id_id
  auxhist20_interval_s = model_config_rec%auxhist20_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_interval_s
SUBROUTINE nl_get_auxhist20_interval ( id_id , auxhist20_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_interval
  INTEGER id_id
  auxhist20_interval = model_config_rec%auxhist20_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_interval
SUBROUTINE nl_get_auxhist20_begin_y ( id_id , auxhist20_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_begin_y
  INTEGER id_id
  auxhist20_begin_y = model_config_rec%auxhist20_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_begin_y
SUBROUTINE nl_get_auxhist20_begin_d ( id_id , auxhist20_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_begin_d
  INTEGER id_id
  auxhist20_begin_d = model_config_rec%auxhist20_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_begin_d
SUBROUTINE nl_get_auxhist20_begin_h ( id_id , auxhist20_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_begin_h
  INTEGER id_id
  auxhist20_begin_h = model_config_rec%auxhist20_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_begin_h
SUBROUTINE nl_get_auxhist20_begin_m ( id_id , auxhist20_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_begin_m
  INTEGER id_id
  auxhist20_begin_m = model_config_rec%auxhist20_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_begin_m
SUBROUTINE nl_get_auxhist20_begin_s ( id_id , auxhist20_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_begin_s
  INTEGER id_id
  auxhist20_begin_s = model_config_rec%auxhist20_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_begin_s
SUBROUTINE nl_get_auxhist20_begin ( id_id , auxhist20_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_begin
  INTEGER id_id
  auxhist20_begin = model_config_rec%auxhist20_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_begin
SUBROUTINE nl_get_auxhist20_end_y ( id_id , auxhist20_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_end_y
  INTEGER id_id
  auxhist20_end_y = model_config_rec%auxhist20_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_end_y
SUBROUTINE nl_get_auxhist20_end_d ( id_id , auxhist20_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_end_d
  INTEGER id_id
  auxhist20_end_d = model_config_rec%auxhist20_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_end_d
SUBROUTINE nl_get_auxhist20_end_h ( id_id , auxhist20_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_end_h
  INTEGER id_id
  auxhist20_end_h = model_config_rec%auxhist20_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_end_h
SUBROUTINE nl_get_auxhist20_end_m ( id_id , auxhist20_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_end_m
  INTEGER id_id
  auxhist20_end_m = model_config_rec%auxhist20_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_end_m
SUBROUTINE nl_get_auxhist20_end_s ( id_id , auxhist20_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_end_s
  INTEGER id_id
  auxhist20_end_s = model_config_rec%auxhist20_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_end_s
SUBROUTINE nl_get_auxhist20_end ( id_id , auxhist20_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist20_end
  INTEGER id_id
  auxhist20_end = model_config_rec%auxhist20_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist20_end
SUBROUTINE nl_get_io_form_auxhist20 ( id_id , io_form_auxhist20 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist20
  INTEGER id_id
  io_form_auxhist20 = model_config_rec%io_form_auxhist20
  RETURN
END SUBROUTINE nl_get_io_form_auxhist20
SUBROUTINE nl_get_frames_per_auxhist20 ( id_id , frames_per_auxhist20 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist20
  INTEGER id_id
  frames_per_auxhist20 = model_config_rec%frames_per_auxhist20(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist20
SUBROUTINE nl_get_auxhist21_inname ( id_id , auxhist21_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist21_inname
  INTEGER id_id
  auxhist21_inname = trim(model_config_rec%auxhist21_inname)
  RETURN
END SUBROUTINE nl_get_auxhist21_inname
SUBROUTINE nl_get_auxhist21_outname ( id_id , auxhist21_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist21_outname
  INTEGER id_id
  auxhist21_outname = trim(model_config_rec%auxhist21_outname)
  RETURN
END SUBROUTINE nl_get_auxhist21_outname
SUBROUTINE nl_get_auxhist21_interval_y ( id_id , auxhist21_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_interval_y
  INTEGER id_id
  auxhist21_interval_y = model_config_rec%auxhist21_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_interval_y
SUBROUTINE nl_get_auxhist21_interval_d ( id_id , auxhist21_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_interval_d
  INTEGER id_id
  auxhist21_interval_d = model_config_rec%auxhist21_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_interval_d
SUBROUTINE nl_get_auxhist21_interval_h ( id_id , auxhist21_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_interval_h
  INTEGER id_id
  auxhist21_interval_h = model_config_rec%auxhist21_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_interval_h
SUBROUTINE nl_get_auxhist21_interval_m ( id_id , auxhist21_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_interval_m
  INTEGER id_id
  auxhist21_interval_m = model_config_rec%auxhist21_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_interval_m
SUBROUTINE nl_get_auxhist21_interval_s ( id_id , auxhist21_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_interval_s
  INTEGER id_id
  auxhist21_interval_s = model_config_rec%auxhist21_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_interval_s
SUBROUTINE nl_get_auxhist21_interval ( id_id , auxhist21_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_interval
  INTEGER id_id
  auxhist21_interval = model_config_rec%auxhist21_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_interval
SUBROUTINE nl_get_auxhist21_begin_y ( id_id , auxhist21_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_begin_y
  INTEGER id_id
  auxhist21_begin_y = model_config_rec%auxhist21_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_begin_y
SUBROUTINE nl_get_auxhist21_begin_d ( id_id , auxhist21_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_begin_d
  INTEGER id_id
  auxhist21_begin_d = model_config_rec%auxhist21_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_begin_d
SUBROUTINE nl_get_auxhist21_begin_h ( id_id , auxhist21_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_begin_h
  INTEGER id_id
  auxhist21_begin_h = model_config_rec%auxhist21_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_begin_h
SUBROUTINE nl_get_auxhist21_begin_m ( id_id , auxhist21_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_begin_m
  INTEGER id_id
  auxhist21_begin_m = model_config_rec%auxhist21_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_begin_m
SUBROUTINE nl_get_auxhist21_begin_s ( id_id , auxhist21_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_begin_s
  INTEGER id_id
  auxhist21_begin_s = model_config_rec%auxhist21_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_begin_s
SUBROUTINE nl_get_auxhist21_begin ( id_id , auxhist21_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_begin
  INTEGER id_id
  auxhist21_begin = model_config_rec%auxhist21_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_begin
SUBROUTINE nl_get_auxhist21_end_y ( id_id , auxhist21_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_end_y
  INTEGER id_id
  auxhist21_end_y = model_config_rec%auxhist21_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_end_y
SUBROUTINE nl_get_auxhist21_end_d ( id_id , auxhist21_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_end_d
  INTEGER id_id
  auxhist21_end_d = model_config_rec%auxhist21_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_end_d
SUBROUTINE nl_get_auxhist21_end_h ( id_id , auxhist21_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_end_h
  INTEGER id_id
  auxhist21_end_h = model_config_rec%auxhist21_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_end_h
SUBROUTINE nl_get_auxhist21_end_m ( id_id , auxhist21_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_end_m
  INTEGER id_id
  auxhist21_end_m = model_config_rec%auxhist21_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_end_m
SUBROUTINE nl_get_auxhist21_end_s ( id_id , auxhist21_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_end_s
  INTEGER id_id
  auxhist21_end_s = model_config_rec%auxhist21_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_end_s
SUBROUTINE nl_get_auxhist21_end ( id_id , auxhist21_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist21_end
  INTEGER id_id
  auxhist21_end = model_config_rec%auxhist21_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist21_end
SUBROUTINE nl_get_io_form_auxhist21 ( id_id , io_form_auxhist21 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist21
  INTEGER id_id
  io_form_auxhist21 = model_config_rec%io_form_auxhist21
  RETURN
END SUBROUTINE nl_get_io_form_auxhist21
SUBROUTINE nl_get_frames_per_auxhist21 ( id_id , frames_per_auxhist21 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist21
  INTEGER id_id
  frames_per_auxhist21 = model_config_rec%frames_per_auxhist21(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist21
SUBROUTINE nl_get_auxhist22_inname ( id_id , auxhist22_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist22_inname
  INTEGER id_id
  auxhist22_inname = trim(model_config_rec%auxhist22_inname)
  RETURN
END SUBROUTINE nl_get_auxhist22_inname
SUBROUTINE nl_get_auxhist22_outname ( id_id , auxhist22_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist22_outname
  INTEGER id_id
  auxhist22_outname = trim(model_config_rec%auxhist22_outname)
  RETURN
END SUBROUTINE nl_get_auxhist22_outname
SUBROUTINE nl_get_auxhist22_interval_y ( id_id , auxhist22_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_interval_y
  INTEGER id_id
  auxhist22_interval_y = model_config_rec%auxhist22_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_interval_y
SUBROUTINE nl_get_auxhist22_interval_d ( id_id , auxhist22_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_interval_d
  INTEGER id_id
  auxhist22_interval_d = model_config_rec%auxhist22_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_interval_d
SUBROUTINE nl_get_auxhist22_interval_h ( id_id , auxhist22_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_interval_h
  INTEGER id_id
  auxhist22_interval_h = model_config_rec%auxhist22_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_interval_h
SUBROUTINE nl_get_auxhist22_interval_m ( id_id , auxhist22_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_interval_m
  INTEGER id_id
  auxhist22_interval_m = model_config_rec%auxhist22_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_interval_m
SUBROUTINE nl_get_auxhist22_interval_s ( id_id , auxhist22_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_interval_s
  INTEGER id_id
  auxhist22_interval_s = model_config_rec%auxhist22_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_interval_s
SUBROUTINE nl_get_auxhist22_interval ( id_id , auxhist22_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_interval
  INTEGER id_id
  auxhist22_interval = model_config_rec%auxhist22_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_interval
SUBROUTINE nl_get_auxhist22_begin_y ( id_id , auxhist22_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_begin_y
  INTEGER id_id
  auxhist22_begin_y = model_config_rec%auxhist22_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_begin_y
SUBROUTINE nl_get_auxhist22_begin_d ( id_id , auxhist22_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_begin_d
  INTEGER id_id
  auxhist22_begin_d = model_config_rec%auxhist22_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_begin_d
SUBROUTINE nl_get_auxhist22_begin_h ( id_id , auxhist22_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_begin_h
  INTEGER id_id
  auxhist22_begin_h = model_config_rec%auxhist22_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_begin_h
SUBROUTINE nl_get_auxhist22_begin_m ( id_id , auxhist22_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_begin_m
  INTEGER id_id
  auxhist22_begin_m = model_config_rec%auxhist22_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_begin_m
SUBROUTINE nl_get_auxhist22_begin_s ( id_id , auxhist22_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_begin_s
  INTEGER id_id
  auxhist22_begin_s = model_config_rec%auxhist22_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_begin_s
SUBROUTINE nl_get_auxhist22_begin ( id_id , auxhist22_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_begin
  INTEGER id_id
  auxhist22_begin = model_config_rec%auxhist22_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_begin
SUBROUTINE nl_get_auxhist22_end_y ( id_id , auxhist22_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_end_y
  INTEGER id_id
  auxhist22_end_y = model_config_rec%auxhist22_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_end_y
SUBROUTINE nl_get_auxhist22_end_d ( id_id , auxhist22_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_end_d
  INTEGER id_id
  auxhist22_end_d = model_config_rec%auxhist22_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_end_d
SUBROUTINE nl_get_auxhist22_end_h ( id_id , auxhist22_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_end_h
  INTEGER id_id
  auxhist22_end_h = model_config_rec%auxhist22_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_end_h
SUBROUTINE nl_get_auxhist22_end_m ( id_id , auxhist22_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_end_m
  INTEGER id_id
  auxhist22_end_m = model_config_rec%auxhist22_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_end_m
SUBROUTINE nl_get_auxhist22_end_s ( id_id , auxhist22_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_end_s
  INTEGER id_id
  auxhist22_end_s = model_config_rec%auxhist22_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_end_s
SUBROUTINE nl_get_auxhist22_end ( id_id , auxhist22_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist22_end
  INTEGER id_id
  auxhist22_end = model_config_rec%auxhist22_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist22_end
SUBROUTINE nl_get_io_form_auxhist22 ( id_id , io_form_auxhist22 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist22
  INTEGER id_id
  io_form_auxhist22 = model_config_rec%io_form_auxhist22
  RETURN
END SUBROUTINE nl_get_io_form_auxhist22
SUBROUTINE nl_get_frames_per_auxhist22 ( id_id , frames_per_auxhist22 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist22
  INTEGER id_id
  frames_per_auxhist22 = model_config_rec%frames_per_auxhist22(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist22
SUBROUTINE nl_get_auxhist23_inname ( id_id , auxhist23_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist23_inname
  INTEGER id_id
  auxhist23_inname = trim(model_config_rec%auxhist23_inname)
  RETURN
END SUBROUTINE nl_get_auxhist23_inname
SUBROUTINE nl_get_auxhist23_outname ( id_id , auxhist23_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist23_outname
  INTEGER id_id
  auxhist23_outname = trim(model_config_rec%auxhist23_outname)
  RETURN
END SUBROUTINE nl_get_auxhist23_outname
SUBROUTINE nl_get_auxhist23_interval_y ( id_id , auxhist23_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_interval_y
  INTEGER id_id
  auxhist23_interval_y = model_config_rec%auxhist23_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_interval_y
SUBROUTINE nl_get_auxhist23_interval_d ( id_id , auxhist23_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_interval_d
  INTEGER id_id
  auxhist23_interval_d = model_config_rec%auxhist23_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_interval_d
SUBROUTINE nl_get_auxhist23_interval_h ( id_id , auxhist23_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_interval_h
  INTEGER id_id
  auxhist23_interval_h = model_config_rec%auxhist23_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_interval_h
SUBROUTINE nl_get_auxhist23_interval_m ( id_id , auxhist23_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_interval_m
  INTEGER id_id
  auxhist23_interval_m = model_config_rec%auxhist23_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_interval_m
SUBROUTINE nl_get_auxhist23_interval_s ( id_id , auxhist23_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_interval_s
  INTEGER id_id
  auxhist23_interval_s = model_config_rec%auxhist23_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_interval_s
SUBROUTINE nl_get_auxhist23_interval ( id_id , auxhist23_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_interval
  INTEGER id_id
  auxhist23_interval = model_config_rec%auxhist23_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_interval
SUBROUTINE nl_get_auxhist23_begin_y ( id_id , auxhist23_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_begin_y
  INTEGER id_id
  auxhist23_begin_y = model_config_rec%auxhist23_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_begin_y
SUBROUTINE nl_get_auxhist23_begin_d ( id_id , auxhist23_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_begin_d
  INTEGER id_id
  auxhist23_begin_d = model_config_rec%auxhist23_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_begin_d
SUBROUTINE nl_get_auxhist23_begin_h ( id_id , auxhist23_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_begin_h
  INTEGER id_id
  auxhist23_begin_h = model_config_rec%auxhist23_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_begin_h
SUBROUTINE nl_get_auxhist23_begin_m ( id_id , auxhist23_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_begin_m
  INTEGER id_id
  auxhist23_begin_m = model_config_rec%auxhist23_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_begin_m
SUBROUTINE nl_get_auxhist23_begin_s ( id_id , auxhist23_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_begin_s
  INTEGER id_id
  auxhist23_begin_s = model_config_rec%auxhist23_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_begin_s
SUBROUTINE nl_get_auxhist23_begin ( id_id , auxhist23_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_begin
  INTEGER id_id
  auxhist23_begin = model_config_rec%auxhist23_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_begin
SUBROUTINE nl_get_auxhist23_end_y ( id_id , auxhist23_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_end_y
  INTEGER id_id
  auxhist23_end_y = model_config_rec%auxhist23_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_end_y
SUBROUTINE nl_get_auxhist23_end_d ( id_id , auxhist23_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_end_d
  INTEGER id_id
  auxhist23_end_d = model_config_rec%auxhist23_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_end_d
SUBROUTINE nl_get_auxhist23_end_h ( id_id , auxhist23_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_end_h
  INTEGER id_id
  auxhist23_end_h = model_config_rec%auxhist23_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_end_h
SUBROUTINE nl_get_auxhist23_end_m ( id_id , auxhist23_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_end_m
  INTEGER id_id
  auxhist23_end_m = model_config_rec%auxhist23_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_end_m
SUBROUTINE nl_get_auxhist23_end_s ( id_id , auxhist23_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_end_s
  INTEGER id_id
  auxhist23_end_s = model_config_rec%auxhist23_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_end_s
SUBROUTINE nl_get_auxhist23_end ( id_id , auxhist23_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist23_end
  INTEGER id_id
  auxhist23_end = model_config_rec%auxhist23_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist23_end
SUBROUTINE nl_get_io_form_auxhist23 ( id_id , io_form_auxhist23 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist23
  INTEGER id_id
  io_form_auxhist23 = model_config_rec%io_form_auxhist23
  RETURN
END SUBROUTINE nl_get_io_form_auxhist23
SUBROUTINE nl_get_frames_per_auxhist23 ( id_id , frames_per_auxhist23 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist23
  INTEGER id_id
  frames_per_auxhist23 = model_config_rec%frames_per_auxhist23(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist23
SUBROUTINE nl_get_auxhist24_inname ( id_id , auxhist24_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist24_inname
  INTEGER id_id
  auxhist24_inname = trim(model_config_rec%auxhist24_inname)
  RETURN
END SUBROUTINE nl_get_auxhist24_inname
SUBROUTINE nl_get_auxhist24_outname ( id_id , auxhist24_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist24_outname
  INTEGER id_id
  auxhist24_outname = trim(model_config_rec%auxhist24_outname)
  RETURN
END SUBROUTINE nl_get_auxhist24_outname
SUBROUTINE nl_get_auxhist24_interval_y ( id_id , auxhist24_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_interval_y
  INTEGER id_id
  auxhist24_interval_y = model_config_rec%auxhist24_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_interval_y
SUBROUTINE nl_get_auxhist24_interval_d ( id_id , auxhist24_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_interval_d
  INTEGER id_id
  auxhist24_interval_d = model_config_rec%auxhist24_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_interval_d
SUBROUTINE nl_get_auxhist24_interval_h ( id_id , auxhist24_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_interval_h
  INTEGER id_id
  auxhist24_interval_h = model_config_rec%auxhist24_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_interval_h
SUBROUTINE nl_get_auxhist24_interval_m ( id_id , auxhist24_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_interval_m
  INTEGER id_id
  auxhist24_interval_m = model_config_rec%auxhist24_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_interval_m
SUBROUTINE nl_get_auxhist24_interval_s ( id_id , auxhist24_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_interval_s
  INTEGER id_id
  auxhist24_interval_s = model_config_rec%auxhist24_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_interval_s
SUBROUTINE nl_get_auxhist24_interval ( id_id , auxhist24_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_interval
  INTEGER id_id
  auxhist24_interval = model_config_rec%auxhist24_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_interval
SUBROUTINE nl_get_auxhist24_begin_y ( id_id , auxhist24_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_begin_y
  INTEGER id_id
  auxhist24_begin_y = model_config_rec%auxhist24_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_begin_y
SUBROUTINE nl_get_auxhist24_begin_d ( id_id , auxhist24_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_begin_d
  INTEGER id_id
  auxhist24_begin_d = model_config_rec%auxhist24_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_begin_d
SUBROUTINE nl_get_auxhist24_begin_h ( id_id , auxhist24_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_begin_h
  INTEGER id_id
  auxhist24_begin_h = model_config_rec%auxhist24_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_begin_h
SUBROUTINE nl_get_auxhist24_begin_m ( id_id , auxhist24_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_begin_m
  INTEGER id_id
  auxhist24_begin_m = model_config_rec%auxhist24_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_begin_m
SUBROUTINE nl_get_auxhist24_begin_s ( id_id , auxhist24_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_begin_s
  INTEGER id_id
  auxhist24_begin_s = model_config_rec%auxhist24_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_begin_s
SUBROUTINE nl_get_auxhist24_begin ( id_id , auxhist24_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_begin
  INTEGER id_id
  auxhist24_begin = model_config_rec%auxhist24_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_begin
SUBROUTINE nl_get_auxhist24_end_y ( id_id , auxhist24_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_end_y
  INTEGER id_id
  auxhist24_end_y = model_config_rec%auxhist24_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_end_y
SUBROUTINE nl_get_auxhist24_end_d ( id_id , auxhist24_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_end_d
  INTEGER id_id
  auxhist24_end_d = model_config_rec%auxhist24_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_end_d
SUBROUTINE nl_get_auxhist24_end_h ( id_id , auxhist24_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_end_h
  INTEGER id_id
  auxhist24_end_h = model_config_rec%auxhist24_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_end_h
SUBROUTINE nl_get_auxhist24_end_m ( id_id , auxhist24_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_end_m
  INTEGER id_id
  auxhist24_end_m = model_config_rec%auxhist24_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_end_m
SUBROUTINE nl_get_auxhist24_end_s ( id_id , auxhist24_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_end_s
  INTEGER id_id
  auxhist24_end_s = model_config_rec%auxhist24_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_end_s
SUBROUTINE nl_get_auxhist24_end ( id_id , auxhist24_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist24_end
  INTEGER id_id
  auxhist24_end = model_config_rec%auxhist24_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist24_end
SUBROUTINE nl_get_io_form_auxhist24 ( id_id , io_form_auxhist24 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist24
  INTEGER id_id
  io_form_auxhist24 = model_config_rec%io_form_auxhist24
  RETURN
END SUBROUTINE nl_get_io_form_auxhist24
SUBROUTINE nl_get_frames_per_auxhist24 ( id_id , frames_per_auxhist24 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist24
  INTEGER id_id
  frames_per_auxhist24 = model_config_rec%frames_per_auxhist24(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist24
SUBROUTINE nl_get_auxinput1_outname ( id_id , auxinput1_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput1_outname
  INTEGER id_id
  auxinput1_outname = trim(model_config_rec%auxinput1_outname)
  RETURN
END SUBROUTINE nl_get_auxinput1_outname
SUBROUTINE nl_get_auxinput1_interval_y ( id_id , auxinput1_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_interval_y
  INTEGER id_id
  auxinput1_interval_y = model_config_rec%auxinput1_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_interval_y
SUBROUTINE nl_get_auxinput1_interval_d ( id_id , auxinput1_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_interval_d
  INTEGER id_id
  auxinput1_interval_d = model_config_rec%auxinput1_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_interval_d
SUBROUTINE nl_get_auxinput1_interval_h ( id_id , auxinput1_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_interval_h
  INTEGER id_id
  auxinput1_interval_h = model_config_rec%auxinput1_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_interval_h
SUBROUTINE nl_get_auxinput1_interval_m ( id_id , auxinput1_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_interval_m
  INTEGER id_id
  auxinput1_interval_m = model_config_rec%auxinput1_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_interval_m
SUBROUTINE nl_get_auxinput1_interval_s ( id_id , auxinput1_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_interval_s
  INTEGER id_id
  auxinput1_interval_s = model_config_rec%auxinput1_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_interval_s
SUBROUTINE nl_get_auxinput1_interval ( id_id , auxinput1_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_interval
  INTEGER id_id
  auxinput1_interval = model_config_rec%auxinput1_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_interval
SUBROUTINE nl_get_auxinput1_begin_y ( id_id , auxinput1_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_begin_y
  INTEGER id_id
  auxinput1_begin_y = model_config_rec%auxinput1_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_begin_y
SUBROUTINE nl_get_auxinput1_begin_d ( id_id , auxinput1_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_begin_d
  INTEGER id_id
  auxinput1_begin_d = model_config_rec%auxinput1_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_begin_d
SUBROUTINE nl_get_auxinput1_begin_h ( id_id , auxinput1_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_begin_h
  INTEGER id_id
  auxinput1_begin_h = model_config_rec%auxinput1_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_begin_h
SUBROUTINE nl_get_auxinput1_begin_m ( id_id , auxinput1_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_begin_m
  INTEGER id_id
  auxinput1_begin_m = model_config_rec%auxinput1_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_begin_m
SUBROUTINE nl_get_auxinput1_begin_s ( id_id , auxinput1_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_begin_s
  INTEGER id_id
  auxinput1_begin_s = model_config_rec%auxinput1_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_begin_s
SUBROUTINE nl_get_auxinput1_begin ( id_id , auxinput1_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_begin
  INTEGER id_id
  auxinput1_begin = model_config_rec%auxinput1_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_begin
SUBROUTINE nl_get_auxinput1_end_y ( id_id , auxinput1_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_end_y
  INTEGER id_id
  auxinput1_end_y = model_config_rec%auxinput1_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_end_y
SUBROUTINE nl_get_auxinput1_end_d ( id_id , auxinput1_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_end_d
  INTEGER id_id
  auxinput1_end_d = model_config_rec%auxinput1_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_end_d
SUBROUTINE nl_get_auxinput1_end_h ( id_id , auxinput1_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_end_h
  INTEGER id_id
  auxinput1_end_h = model_config_rec%auxinput1_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_end_h
SUBROUTINE nl_get_auxinput1_end_m ( id_id , auxinput1_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_end_m
  INTEGER id_id
  auxinput1_end_m = model_config_rec%auxinput1_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_end_m
SUBROUTINE nl_get_auxinput1_end_s ( id_id , auxinput1_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_end_s
  INTEGER id_id
  auxinput1_end_s = model_config_rec%auxinput1_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_end_s
SUBROUTINE nl_get_auxinput1_end ( id_id , auxinput1_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput1_end
  INTEGER id_id
  auxinput1_end = model_config_rec%auxinput1_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput1_end
SUBROUTINE nl_get_frames_per_auxinput1 ( id_id , frames_per_auxinput1 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput1
  INTEGER id_id
  frames_per_auxinput1 = model_config_rec%frames_per_auxinput1(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput1
SUBROUTINE nl_get_auxinput2_inname ( id_id , auxinput2_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput2_inname
  INTEGER id_id
  auxinput2_inname = trim(model_config_rec%auxinput2_inname)
  RETURN
END SUBROUTINE nl_get_auxinput2_inname
SUBROUTINE nl_get_auxinput2_outname ( id_id , auxinput2_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput2_outname
  INTEGER id_id
  auxinput2_outname = trim(model_config_rec%auxinput2_outname)
  RETURN
END SUBROUTINE nl_get_auxinput2_outname
SUBROUTINE nl_get_auxinput2_interval_y ( id_id , auxinput2_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_interval_y
  INTEGER id_id
  auxinput2_interval_y = model_config_rec%auxinput2_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_interval_y
SUBROUTINE nl_get_auxinput2_interval_d ( id_id , auxinput2_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_interval_d
  INTEGER id_id
  auxinput2_interval_d = model_config_rec%auxinput2_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_interval_d
SUBROUTINE nl_get_auxinput2_interval_h ( id_id , auxinput2_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_interval_h
  INTEGER id_id
  auxinput2_interval_h = model_config_rec%auxinput2_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_interval_h
SUBROUTINE nl_get_auxinput2_interval_m ( id_id , auxinput2_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_interval_m
  INTEGER id_id
  auxinput2_interval_m = model_config_rec%auxinput2_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_interval_m
SUBROUTINE nl_get_auxinput2_interval_s ( id_id , auxinput2_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_interval_s
  INTEGER id_id
  auxinput2_interval_s = model_config_rec%auxinput2_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_interval_s
SUBROUTINE nl_get_auxinput2_interval ( id_id , auxinput2_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_interval
  INTEGER id_id
  auxinput2_interval = model_config_rec%auxinput2_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_interval
SUBROUTINE nl_get_auxinput2_begin_y ( id_id , auxinput2_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_begin_y
  INTEGER id_id
  auxinput2_begin_y = model_config_rec%auxinput2_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_begin_y
SUBROUTINE nl_get_auxinput2_begin_d ( id_id , auxinput2_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_begin_d
  INTEGER id_id
  auxinput2_begin_d = model_config_rec%auxinput2_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_begin_d
SUBROUTINE nl_get_auxinput2_begin_h ( id_id , auxinput2_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_begin_h
  INTEGER id_id
  auxinput2_begin_h = model_config_rec%auxinput2_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_begin_h
SUBROUTINE nl_get_auxinput2_begin_m ( id_id , auxinput2_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_begin_m
  INTEGER id_id
  auxinput2_begin_m = model_config_rec%auxinput2_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_begin_m
SUBROUTINE nl_get_auxinput2_begin_s ( id_id , auxinput2_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_begin_s
  INTEGER id_id
  auxinput2_begin_s = model_config_rec%auxinput2_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_begin_s
SUBROUTINE nl_get_auxinput2_begin ( id_id , auxinput2_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_begin
  INTEGER id_id
  auxinput2_begin = model_config_rec%auxinput2_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_begin
SUBROUTINE nl_get_auxinput2_end_y ( id_id , auxinput2_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_end_y
  INTEGER id_id
  auxinput2_end_y = model_config_rec%auxinput2_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_end_y
SUBROUTINE nl_get_auxinput2_end_d ( id_id , auxinput2_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_end_d
  INTEGER id_id
  auxinput2_end_d = model_config_rec%auxinput2_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_end_d
SUBROUTINE nl_get_auxinput2_end_h ( id_id , auxinput2_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_end_h
  INTEGER id_id
  auxinput2_end_h = model_config_rec%auxinput2_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_end_h
SUBROUTINE nl_get_auxinput2_end_m ( id_id , auxinput2_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_end_m
  INTEGER id_id
  auxinput2_end_m = model_config_rec%auxinput2_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_end_m
SUBROUTINE nl_get_auxinput2_end_s ( id_id , auxinput2_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_end_s
  INTEGER id_id
  auxinput2_end_s = model_config_rec%auxinput2_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_end_s
SUBROUTINE nl_get_auxinput2_end ( id_id , auxinput2_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput2_end
  INTEGER id_id
  auxinput2_end = model_config_rec%auxinput2_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput2_end
SUBROUTINE nl_get_io_form_auxinput2 ( id_id , io_form_auxinput2 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput2
  INTEGER id_id
  io_form_auxinput2 = model_config_rec%io_form_auxinput2
  RETURN
END SUBROUTINE nl_get_io_form_auxinput2
SUBROUTINE nl_get_frames_per_auxinput2 ( id_id , frames_per_auxinput2 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput2
  INTEGER id_id
  frames_per_auxinput2 = model_config_rec%frames_per_auxinput2(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput2
SUBROUTINE nl_get_auxinput3_inname ( id_id , auxinput3_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput3_inname
  INTEGER id_id
  auxinput3_inname = trim(model_config_rec%auxinput3_inname)
  RETURN
END SUBROUTINE nl_get_auxinput3_inname
SUBROUTINE nl_get_auxinput3_outname ( id_id , auxinput3_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput3_outname
  INTEGER id_id
  auxinput3_outname = trim(model_config_rec%auxinput3_outname)
  RETURN
END SUBROUTINE nl_get_auxinput3_outname
SUBROUTINE nl_get_auxinput3_interval_y ( id_id , auxinput3_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_interval_y
  INTEGER id_id
  auxinput3_interval_y = model_config_rec%auxinput3_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_interval_y
SUBROUTINE nl_get_auxinput3_interval_d ( id_id , auxinput3_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_interval_d
  INTEGER id_id
  auxinput3_interval_d = model_config_rec%auxinput3_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_interval_d
SUBROUTINE nl_get_auxinput3_interval_h ( id_id , auxinput3_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_interval_h
  INTEGER id_id
  auxinput3_interval_h = model_config_rec%auxinput3_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_interval_h
SUBROUTINE nl_get_auxinput3_interval_m ( id_id , auxinput3_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_interval_m
  INTEGER id_id
  auxinput3_interval_m = model_config_rec%auxinput3_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_interval_m
SUBROUTINE nl_get_auxinput3_interval_s ( id_id , auxinput3_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_interval_s
  INTEGER id_id
  auxinput3_interval_s = model_config_rec%auxinput3_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_interval_s
SUBROUTINE nl_get_auxinput3_interval ( id_id , auxinput3_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_interval
  INTEGER id_id
  auxinput3_interval = model_config_rec%auxinput3_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_interval
SUBROUTINE nl_get_auxinput3_begin_y ( id_id , auxinput3_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_begin_y
  INTEGER id_id
  auxinput3_begin_y = model_config_rec%auxinput3_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_begin_y
SUBROUTINE nl_get_auxinput3_begin_d ( id_id , auxinput3_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_begin_d
  INTEGER id_id
  auxinput3_begin_d = model_config_rec%auxinput3_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_begin_d
SUBROUTINE nl_get_auxinput3_begin_h ( id_id , auxinput3_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_begin_h
  INTEGER id_id
  auxinput3_begin_h = model_config_rec%auxinput3_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_begin_h
SUBROUTINE nl_get_auxinput3_begin_m ( id_id , auxinput3_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_begin_m
  INTEGER id_id
  auxinput3_begin_m = model_config_rec%auxinput3_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_begin_m
SUBROUTINE nl_get_auxinput3_begin_s ( id_id , auxinput3_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_begin_s
  INTEGER id_id
  auxinput3_begin_s = model_config_rec%auxinput3_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_begin_s
SUBROUTINE nl_get_auxinput3_begin ( id_id , auxinput3_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_begin
  INTEGER id_id
  auxinput3_begin = model_config_rec%auxinput3_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_begin
SUBROUTINE nl_get_auxinput3_end_y ( id_id , auxinput3_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_end_y
  INTEGER id_id
  auxinput3_end_y = model_config_rec%auxinput3_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_end_y
SUBROUTINE nl_get_auxinput3_end_d ( id_id , auxinput3_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_end_d
  INTEGER id_id
  auxinput3_end_d = model_config_rec%auxinput3_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_end_d
SUBROUTINE nl_get_auxinput3_end_h ( id_id , auxinput3_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_end_h
  INTEGER id_id
  auxinput3_end_h = model_config_rec%auxinput3_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_end_h
SUBROUTINE nl_get_auxinput3_end_m ( id_id , auxinput3_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_end_m
  INTEGER id_id
  auxinput3_end_m = model_config_rec%auxinput3_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_end_m
SUBROUTINE nl_get_auxinput3_end_s ( id_id , auxinput3_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_end_s
  INTEGER id_id
  auxinput3_end_s = model_config_rec%auxinput3_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_end_s
SUBROUTINE nl_get_auxinput3_end ( id_id , auxinput3_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput3_end
  INTEGER id_id
  auxinput3_end = model_config_rec%auxinput3_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput3_end
SUBROUTINE nl_get_io_form_auxinput3 ( id_id , io_form_auxinput3 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput3
  INTEGER id_id
  io_form_auxinput3 = model_config_rec%io_form_auxinput3
  RETURN
END SUBROUTINE nl_get_io_form_auxinput3
SUBROUTINE nl_get_frames_per_auxinput3 ( id_id , frames_per_auxinput3 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput3
  INTEGER id_id
  frames_per_auxinput3 = model_config_rec%frames_per_auxinput3(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput3
SUBROUTINE nl_get_auxinput4_inname ( id_id , auxinput4_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput4_inname
  INTEGER id_id
  auxinput4_inname = trim(model_config_rec%auxinput4_inname)
  RETURN
END SUBROUTINE nl_get_auxinput4_inname
SUBROUTINE nl_get_auxinput4_outname ( id_id , auxinput4_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput4_outname
  INTEGER id_id
  auxinput4_outname = trim(model_config_rec%auxinput4_outname)
  RETURN
END SUBROUTINE nl_get_auxinput4_outname
SUBROUTINE nl_get_auxinput4_interval_y ( id_id , auxinput4_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_interval_y
  INTEGER id_id
  auxinput4_interval_y = model_config_rec%auxinput4_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_interval_y
SUBROUTINE nl_get_auxinput4_interval_d ( id_id , auxinput4_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_interval_d
  INTEGER id_id
  auxinput4_interval_d = model_config_rec%auxinput4_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_interval_d
SUBROUTINE nl_get_auxinput4_interval_h ( id_id , auxinput4_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_interval_h
  INTEGER id_id
  auxinput4_interval_h = model_config_rec%auxinput4_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_interval_h
SUBROUTINE nl_get_auxinput4_interval_m ( id_id , auxinput4_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_interval_m
  INTEGER id_id
  auxinput4_interval_m = model_config_rec%auxinput4_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_interval_m
SUBROUTINE nl_get_auxinput4_interval_s ( id_id , auxinput4_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_interval_s
  INTEGER id_id
  auxinput4_interval_s = model_config_rec%auxinput4_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_interval_s
SUBROUTINE nl_get_auxinput4_interval ( id_id , auxinput4_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_interval
  INTEGER id_id
  auxinput4_interval = model_config_rec%auxinput4_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_interval
SUBROUTINE nl_get_auxinput4_begin_y ( id_id , auxinput4_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_begin_y
  INTEGER id_id
  auxinput4_begin_y = model_config_rec%auxinput4_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_begin_y
SUBROUTINE nl_get_auxinput4_begin_d ( id_id , auxinput4_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_begin_d
  INTEGER id_id
  auxinput4_begin_d = model_config_rec%auxinput4_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_begin_d
SUBROUTINE nl_get_auxinput4_begin_h ( id_id , auxinput4_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_begin_h
  INTEGER id_id
  auxinput4_begin_h = model_config_rec%auxinput4_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_begin_h
SUBROUTINE nl_get_auxinput4_begin_m ( id_id , auxinput4_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_begin_m
  INTEGER id_id
  auxinput4_begin_m = model_config_rec%auxinput4_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_begin_m
SUBROUTINE nl_get_auxinput4_begin_s ( id_id , auxinput4_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_begin_s
  INTEGER id_id
  auxinput4_begin_s = model_config_rec%auxinput4_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_begin_s
SUBROUTINE nl_get_auxinput4_begin ( id_id , auxinput4_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_begin
  INTEGER id_id
  auxinput4_begin = model_config_rec%auxinput4_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_begin
SUBROUTINE nl_get_auxinput4_end_y ( id_id , auxinput4_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_end_y
  INTEGER id_id
  auxinput4_end_y = model_config_rec%auxinput4_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_end_y
SUBROUTINE nl_get_auxinput4_end_d ( id_id , auxinput4_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_end_d
  INTEGER id_id
  auxinput4_end_d = model_config_rec%auxinput4_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_end_d
SUBROUTINE nl_get_auxinput4_end_h ( id_id , auxinput4_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_end_h
  INTEGER id_id
  auxinput4_end_h = model_config_rec%auxinput4_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_end_h
SUBROUTINE nl_get_auxinput4_end_m ( id_id , auxinput4_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_end_m
  INTEGER id_id
  auxinput4_end_m = model_config_rec%auxinput4_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_end_m
SUBROUTINE nl_get_auxinput4_end_s ( id_id , auxinput4_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_end_s
  INTEGER id_id
  auxinput4_end_s = model_config_rec%auxinput4_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_end_s
SUBROUTINE nl_get_auxinput4_end ( id_id , auxinput4_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput4_end
  INTEGER id_id
  auxinput4_end = model_config_rec%auxinput4_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput4_end
SUBROUTINE nl_get_io_form_auxinput4 ( id_id , io_form_auxinput4 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxinput4
  INTEGER id_id
  io_form_auxinput4 = model_config_rec%io_form_auxinput4
  RETURN
END SUBROUTINE nl_get_io_form_auxinput4
SUBROUTINE nl_get_frames_per_auxinput4 ( id_id , frames_per_auxinput4 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxinput4
  INTEGER id_id
  frames_per_auxinput4 = model_config_rec%frames_per_auxinput4(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxinput4
SUBROUTINE nl_get_auxinput5_inname ( id_id , auxinput5_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput5_inname
  INTEGER id_id
  auxinput5_inname = trim(model_config_rec%auxinput5_inname)
  RETURN
END SUBROUTINE nl_get_auxinput5_inname
SUBROUTINE nl_get_auxinput5_outname ( id_id , auxinput5_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxinput5_outname
  INTEGER id_id
  auxinput5_outname = trim(model_config_rec%auxinput5_outname)
  RETURN
END SUBROUTINE nl_get_auxinput5_outname
SUBROUTINE nl_get_auxinput5_interval_y ( id_id , auxinput5_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_interval_y
  INTEGER id_id
  auxinput5_interval_y = model_config_rec%auxinput5_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_interval_y
SUBROUTINE nl_get_auxinput5_interval_d ( id_id , auxinput5_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_interval_d
  INTEGER id_id
  auxinput5_interval_d = model_config_rec%auxinput5_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_interval_d
SUBROUTINE nl_get_auxinput5_interval_h ( id_id , auxinput5_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxinput5_interval_h
  INTEGER id_id
  auxinput5_interval_h = model_config_rec%auxinput5_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxinput5_interval_h
!ENDOFREGISTRYGENERATEDINCLUDE
