!STARTOFREGISTRYGENERATEDINCLUDE 'inc/nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit. Your changes to this file will be lost.
!
SUBROUTINE nl_get_auxhist7_interval_m ( id_id , auxhist7_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_interval_m
  INTEGER id_id
  auxhist7_interval_m = model_config_rec%auxhist7_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_interval_m
SUBROUTINE nl_get_auxhist7_interval_s ( id_id , auxhist7_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_interval_s
  INTEGER id_id
  auxhist7_interval_s = model_config_rec%auxhist7_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_interval_s
SUBROUTINE nl_get_auxhist7_interval ( id_id , auxhist7_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_interval
  INTEGER id_id
  auxhist7_interval = model_config_rec%auxhist7_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_interval
SUBROUTINE nl_get_auxhist7_begin_y ( id_id , auxhist7_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_begin_y
  INTEGER id_id
  auxhist7_begin_y = model_config_rec%auxhist7_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_begin_y
SUBROUTINE nl_get_auxhist7_begin_d ( id_id , auxhist7_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_begin_d
  INTEGER id_id
  auxhist7_begin_d = model_config_rec%auxhist7_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_begin_d
SUBROUTINE nl_get_auxhist7_begin_h ( id_id , auxhist7_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_begin_h
  INTEGER id_id
  auxhist7_begin_h = model_config_rec%auxhist7_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_begin_h
SUBROUTINE nl_get_auxhist7_begin_m ( id_id , auxhist7_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_begin_m
  INTEGER id_id
  auxhist7_begin_m = model_config_rec%auxhist7_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_begin_m
SUBROUTINE nl_get_auxhist7_begin_s ( id_id , auxhist7_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_begin_s
  INTEGER id_id
  auxhist7_begin_s = model_config_rec%auxhist7_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_begin_s
SUBROUTINE nl_get_auxhist7_begin ( id_id , auxhist7_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_begin
  INTEGER id_id
  auxhist7_begin = model_config_rec%auxhist7_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_begin
SUBROUTINE nl_get_auxhist7_end_y ( id_id , auxhist7_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_end_y
  INTEGER id_id
  auxhist7_end_y = model_config_rec%auxhist7_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_end_y
SUBROUTINE nl_get_auxhist7_end_d ( id_id , auxhist7_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_end_d
  INTEGER id_id
  auxhist7_end_d = model_config_rec%auxhist7_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_end_d
SUBROUTINE nl_get_auxhist7_end_h ( id_id , auxhist7_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_end_h
  INTEGER id_id
  auxhist7_end_h = model_config_rec%auxhist7_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_end_h
SUBROUTINE nl_get_auxhist7_end_m ( id_id , auxhist7_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_end_m
  INTEGER id_id
  auxhist7_end_m = model_config_rec%auxhist7_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_end_m
SUBROUTINE nl_get_auxhist7_end_s ( id_id , auxhist7_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_end_s
  INTEGER id_id
  auxhist7_end_s = model_config_rec%auxhist7_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_end_s
SUBROUTINE nl_get_auxhist7_end ( id_id , auxhist7_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist7_end
  INTEGER id_id
  auxhist7_end = model_config_rec%auxhist7_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist7_end
SUBROUTINE nl_get_io_form_auxhist7 ( id_id , io_form_auxhist7 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist7
  INTEGER id_id
  io_form_auxhist7 = model_config_rec%io_form_auxhist7
  RETURN
END SUBROUTINE nl_get_io_form_auxhist7
SUBROUTINE nl_get_frames_per_auxhist7 ( id_id , frames_per_auxhist7 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist7
  INTEGER id_id
  frames_per_auxhist7 = model_config_rec%frames_per_auxhist7(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist7
SUBROUTINE nl_get_auxhist8_inname ( id_id , auxhist8_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist8_inname
  INTEGER id_id
  auxhist8_inname = trim(model_config_rec%auxhist8_inname)
  RETURN
END SUBROUTINE nl_get_auxhist8_inname
SUBROUTINE nl_get_auxhist8_outname ( id_id , auxhist8_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist8_outname
  INTEGER id_id
  auxhist8_outname = trim(model_config_rec%auxhist8_outname)
  RETURN
END SUBROUTINE nl_get_auxhist8_outname
SUBROUTINE nl_get_auxhist8_interval_y ( id_id , auxhist8_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_interval_y
  INTEGER id_id
  auxhist8_interval_y = model_config_rec%auxhist8_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_interval_y
SUBROUTINE nl_get_auxhist8_interval_d ( id_id , auxhist8_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_interval_d
  INTEGER id_id
  auxhist8_interval_d = model_config_rec%auxhist8_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_interval_d
SUBROUTINE nl_get_auxhist8_interval_h ( id_id , auxhist8_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_interval_h
  INTEGER id_id
  auxhist8_interval_h = model_config_rec%auxhist8_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_interval_h
SUBROUTINE nl_get_auxhist8_interval_m ( id_id , auxhist8_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_interval_m
  INTEGER id_id
  auxhist8_interval_m = model_config_rec%auxhist8_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_interval_m
SUBROUTINE nl_get_auxhist8_interval_s ( id_id , auxhist8_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_interval_s
  INTEGER id_id
  auxhist8_interval_s = model_config_rec%auxhist8_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_interval_s
SUBROUTINE nl_get_auxhist8_interval ( id_id , auxhist8_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_interval
  INTEGER id_id
  auxhist8_interval = model_config_rec%auxhist8_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_interval
SUBROUTINE nl_get_auxhist8_begin_y ( id_id , auxhist8_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_begin_y
  INTEGER id_id
  auxhist8_begin_y = model_config_rec%auxhist8_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_begin_y
SUBROUTINE nl_get_auxhist8_begin_d ( id_id , auxhist8_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_begin_d
  INTEGER id_id
  auxhist8_begin_d = model_config_rec%auxhist8_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_begin_d
SUBROUTINE nl_get_auxhist8_begin_h ( id_id , auxhist8_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_begin_h
  INTEGER id_id
  auxhist8_begin_h = model_config_rec%auxhist8_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_begin_h
SUBROUTINE nl_get_auxhist8_begin_m ( id_id , auxhist8_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_begin_m
  INTEGER id_id
  auxhist8_begin_m = model_config_rec%auxhist8_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_begin_m
SUBROUTINE nl_get_auxhist8_begin_s ( id_id , auxhist8_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_begin_s
  INTEGER id_id
  auxhist8_begin_s = model_config_rec%auxhist8_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_begin_s
SUBROUTINE nl_get_auxhist8_begin ( id_id , auxhist8_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_begin
  INTEGER id_id
  auxhist8_begin = model_config_rec%auxhist8_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_begin
SUBROUTINE nl_get_auxhist8_end_y ( id_id , auxhist8_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_end_y
  INTEGER id_id
  auxhist8_end_y = model_config_rec%auxhist8_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_end_y
SUBROUTINE nl_get_auxhist8_end_d ( id_id , auxhist8_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_end_d
  INTEGER id_id
  auxhist8_end_d = model_config_rec%auxhist8_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_end_d
SUBROUTINE nl_get_auxhist8_end_h ( id_id , auxhist8_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_end_h
  INTEGER id_id
  auxhist8_end_h = model_config_rec%auxhist8_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_end_h
SUBROUTINE nl_get_auxhist8_end_m ( id_id , auxhist8_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_end_m
  INTEGER id_id
  auxhist8_end_m = model_config_rec%auxhist8_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_end_m
SUBROUTINE nl_get_auxhist8_end_s ( id_id , auxhist8_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_end_s
  INTEGER id_id
  auxhist8_end_s = model_config_rec%auxhist8_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_end_s
SUBROUTINE nl_get_auxhist8_end ( id_id , auxhist8_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist8_end
  INTEGER id_id
  auxhist8_end = model_config_rec%auxhist8_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist8_end
SUBROUTINE nl_get_io_form_auxhist8 ( id_id , io_form_auxhist8 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist8
  INTEGER id_id
  io_form_auxhist8 = model_config_rec%io_form_auxhist8
  RETURN
END SUBROUTINE nl_get_io_form_auxhist8
SUBROUTINE nl_get_frames_per_auxhist8 ( id_id , frames_per_auxhist8 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist8
  INTEGER id_id
  frames_per_auxhist8 = model_config_rec%frames_per_auxhist8(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist8
SUBROUTINE nl_get_auxhist9_inname ( id_id , auxhist9_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist9_inname
  INTEGER id_id
  auxhist9_inname = trim(model_config_rec%auxhist9_inname)
  RETURN
END SUBROUTINE nl_get_auxhist9_inname
SUBROUTINE nl_get_auxhist9_outname ( id_id , auxhist9_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist9_outname
  INTEGER id_id
  auxhist9_outname = trim(model_config_rec%auxhist9_outname)
  RETURN
END SUBROUTINE nl_get_auxhist9_outname
SUBROUTINE nl_get_auxhist9_interval_y ( id_id , auxhist9_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_interval_y
  INTEGER id_id
  auxhist9_interval_y = model_config_rec%auxhist9_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_interval_y
SUBROUTINE nl_get_auxhist9_interval_d ( id_id , auxhist9_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_interval_d
  INTEGER id_id
  auxhist9_interval_d = model_config_rec%auxhist9_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_interval_d
SUBROUTINE nl_get_auxhist9_interval_h ( id_id , auxhist9_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_interval_h
  INTEGER id_id
  auxhist9_interval_h = model_config_rec%auxhist9_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_interval_h
SUBROUTINE nl_get_auxhist9_interval_m ( id_id , auxhist9_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_interval_m
  INTEGER id_id
  auxhist9_interval_m = model_config_rec%auxhist9_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_interval_m
SUBROUTINE nl_get_auxhist9_interval_s ( id_id , auxhist9_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_interval_s
  INTEGER id_id
  auxhist9_interval_s = model_config_rec%auxhist9_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_interval_s
SUBROUTINE nl_get_auxhist9_interval ( id_id , auxhist9_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_interval
  INTEGER id_id
  auxhist9_interval = model_config_rec%auxhist9_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_interval
SUBROUTINE nl_get_auxhist9_begin_y ( id_id , auxhist9_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_begin_y
  INTEGER id_id
  auxhist9_begin_y = model_config_rec%auxhist9_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_begin_y
SUBROUTINE nl_get_auxhist9_begin_d ( id_id , auxhist9_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_begin_d
  INTEGER id_id
  auxhist9_begin_d = model_config_rec%auxhist9_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_begin_d
SUBROUTINE nl_get_auxhist9_begin_h ( id_id , auxhist9_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_begin_h
  INTEGER id_id
  auxhist9_begin_h = model_config_rec%auxhist9_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_begin_h
SUBROUTINE nl_get_auxhist9_begin_m ( id_id , auxhist9_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_begin_m
  INTEGER id_id
  auxhist9_begin_m = model_config_rec%auxhist9_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_begin_m
SUBROUTINE nl_get_auxhist9_begin_s ( id_id , auxhist9_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_begin_s
  INTEGER id_id
  auxhist9_begin_s = model_config_rec%auxhist9_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_begin_s
SUBROUTINE nl_get_auxhist9_begin ( id_id , auxhist9_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_begin
  INTEGER id_id
  auxhist9_begin = model_config_rec%auxhist9_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_begin
SUBROUTINE nl_get_auxhist9_end_y ( id_id , auxhist9_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_end_y
  INTEGER id_id
  auxhist9_end_y = model_config_rec%auxhist9_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_end_y
SUBROUTINE nl_get_auxhist9_end_d ( id_id , auxhist9_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_end_d
  INTEGER id_id
  auxhist9_end_d = model_config_rec%auxhist9_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_end_d
SUBROUTINE nl_get_auxhist9_end_h ( id_id , auxhist9_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_end_h
  INTEGER id_id
  auxhist9_end_h = model_config_rec%auxhist9_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_end_h
SUBROUTINE nl_get_auxhist9_end_m ( id_id , auxhist9_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_end_m
  INTEGER id_id
  auxhist9_end_m = model_config_rec%auxhist9_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_end_m
SUBROUTINE nl_get_auxhist9_end_s ( id_id , auxhist9_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_end_s
  INTEGER id_id
  auxhist9_end_s = model_config_rec%auxhist9_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_end_s
SUBROUTINE nl_get_auxhist9_end ( id_id , auxhist9_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist9_end
  INTEGER id_id
  auxhist9_end = model_config_rec%auxhist9_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist9_end
SUBROUTINE nl_get_io_form_auxhist9 ( id_id , io_form_auxhist9 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist9
  INTEGER id_id
  io_form_auxhist9 = model_config_rec%io_form_auxhist9
  RETURN
END SUBROUTINE nl_get_io_form_auxhist9
SUBROUTINE nl_get_frames_per_auxhist9 ( id_id , frames_per_auxhist9 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist9
  INTEGER id_id
  frames_per_auxhist9 = model_config_rec%frames_per_auxhist9(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist9
SUBROUTINE nl_get_auxhist10_inname ( id_id , auxhist10_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist10_inname
  INTEGER id_id
  auxhist10_inname = trim(model_config_rec%auxhist10_inname)
  RETURN
END SUBROUTINE nl_get_auxhist10_inname
SUBROUTINE nl_get_auxhist10_outname ( id_id , auxhist10_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist10_outname
  INTEGER id_id
  auxhist10_outname = trim(model_config_rec%auxhist10_outname)
  RETURN
END SUBROUTINE nl_get_auxhist10_outname
SUBROUTINE nl_get_auxhist10_interval_y ( id_id , auxhist10_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_interval_y
  INTEGER id_id
  auxhist10_interval_y = model_config_rec%auxhist10_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_interval_y
SUBROUTINE nl_get_auxhist10_interval_d ( id_id , auxhist10_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_interval_d
  INTEGER id_id
  auxhist10_interval_d = model_config_rec%auxhist10_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_interval_d
SUBROUTINE nl_get_auxhist10_interval_h ( id_id , auxhist10_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_interval_h
  INTEGER id_id
  auxhist10_interval_h = model_config_rec%auxhist10_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_interval_h
SUBROUTINE nl_get_auxhist10_interval_m ( id_id , auxhist10_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_interval_m
  INTEGER id_id
  auxhist10_interval_m = model_config_rec%auxhist10_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_interval_m
SUBROUTINE nl_get_auxhist10_interval_s ( id_id , auxhist10_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_interval_s
  INTEGER id_id
  auxhist10_interval_s = model_config_rec%auxhist10_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_interval_s
SUBROUTINE nl_get_auxhist10_interval ( id_id , auxhist10_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_interval
  INTEGER id_id
  auxhist10_interval = model_config_rec%auxhist10_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_interval
SUBROUTINE nl_get_auxhist10_begin_y ( id_id , auxhist10_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_begin_y
  INTEGER id_id
  auxhist10_begin_y = model_config_rec%auxhist10_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_begin_y
SUBROUTINE nl_get_auxhist10_begin_d ( id_id , auxhist10_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_begin_d
  INTEGER id_id
  auxhist10_begin_d = model_config_rec%auxhist10_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_begin_d
SUBROUTINE nl_get_auxhist10_begin_h ( id_id , auxhist10_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_begin_h
  INTEGER id_id
  auxhist10_begin_h = model_config_rec%auxhist10_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_begin_h
SUBROUTINE nl_get_auxhist10_begin_m ( id_id , auxhist10_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_begin_m
  INTEGER id_id
  auxhist10_begin_m = model_config_rec%auxhist10_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_begin_m
SUBROUTINE nl_get_auxhist10_begin_s ( id_id , auxhist10_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_begin_s
  INTEGER id_id
  auxhist10_begin_s = model_config_rec%auxhist10_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_begin_s
SUBROUTINE nl_get_auxhist10_begin ( id_id , auxhist10_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_begin
  INTEGER id_id
  auxhist10_begin = model_config_rec%auxhist10_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_begin
SUBROUTINE nl_get_auxhist10_end_y ( id_id , auxhist10_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_end_y
  INTEGER id_id
  auxhist10_end_y = model_config_rec%auxhist10_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_end_y
SUBROUTINE nl_get_auxhist10_end_d ( id_id , auxhist10_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_end_d
  INTEGER id_id
  auxhist10_end_d = model_config_rec%auxhist10_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_end_d
SUBROUTINE nl_get_auxhist10_end_h ( id_id , auxhist10_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_end_h
  INTEGER id_id
  auxhist10_end_h = model_config_rec%auxhist10_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_end_h
SUBROUTINE nl_get_auxhist10_end_m ( id_id , auxhist10_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_end_m
  INTEGER id_id
  auxhist10_end_m = model_config_rec%auxhist10_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_end_m
SUBROUTINE nl_get_auxhist10_end_s ( id_id , auxhist10_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_end_s
  INTEGER id_id
  auxhist10_end_s = model_config_rec%auxhist10_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_end_s
SUBROUTINE nl_get_auxhist10_end ( id_id , auxhist10_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist10_end
  INTEGER id_id
  auxhist10_end = model_config_rec%auxhist10_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist10_end
SUBROUTINE nl_get_io_form_auxhist10 ( id_id , io_form_auxhist10 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist10
  INTEGER id_id
  io_form_auxhist10 = model_config_rec%io_form_auxhist10
  RETURN
END SUBROUTINE nl_get_io_form_auxhist10
SUBROUTINE nl_get_frames_per_auxhist10 ( id_id , frames_per_auxhist10 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist10
  INTEGER id_id
  frames_per_auxhist10 = model_config_rec%frames_per_auxhist10(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist10
SUBROUTINE nl_get_auxhist11_inname ( id_id , auxhist11_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist11_inname
  INTEGER id_id
  auxhist11_inname = trim(model_config_rec%auxhist11_inname)
  RETURN
END SUBROUTINE nl_get_auxhist11_inname
SUBROUTINE nl_get_auxhist11_outname ( id_id , auxhist11_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist11_outname
  INTEGER id_id
  auxhist11_outname = trim(model_config_rec%auxhist11_outname)
  RETURN
END SUBROUTINE nl_get_auxhist11_outname
SUBROUTINE nl_get_auxhist11_interval_y ( id_id , auxhist11_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_interval_y
  INTEGER id_id
  auxhist11_interval_y = model_config_rec%auxhist11_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_interval_y
SUBROUTINE nl_get_auxhist11_interval_d ( id_id , auxhist11_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_interval_d
  INTEGER id_id
  auxhist11_interval_d = model_config_rec%auxhist11_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_interval_d
SUBROUTINE nl_get_auxhist11_interval_h ( id_id , auxhist11_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_interval_h
  INTEGER id_id
  auxhist11_interval_h = model_config_rec%auxhist11_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_interval_h
SUBROUTINE nl_get_auxhist11_interval_m ( id_id , auxhist11_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_interval_m
  INTEGER id_id
  auxhist11_interval_m = model_config_rec%auxhist11_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_interval_m
SUBROUTINE nl_get_auxhist11_interval_s ( id_id , auxhist11_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_interval_s
  INTEGER id_id
  auxhist11_interval_s = model_config_rec%auxhist11_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_interval_s
SUBROUTINE nl_get_auxhist11_interval ( id_id , auxhist11_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_interval
  INTEGER id_id
  auxhist11_interval = model_config_rec%auxhist11_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_interval
SUBROUTINE nl_get_auxhist11_begin_y ( id_id , auxhist11_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_begin_y
  INTEGER id_id
  auxhist11_begin_y = model_config_rec%auxhist11_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_begin_y
SUBROUTINE nl_get_auxhist11_begin_d ( id_id , auxhist11_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_begin_d
  INTEGER id_id
  auxhist11_begin_d = model_config_rec%auxhist11_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_begin_d
SUBROUTINE nl_get_auxhist11_begin_h ( id_id , auxhist11_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_begin_h
  INTEGER id_id
  auxhist11_begin_h = model_config_rec%auxhist11_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_begin_h
SUBROUTINE nl_get_auxhist11_begin_m ( id_id , auxhist11_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_begin_m
  INTEGER id_id
  auxhist11_begin_m = model_config_rec%auxhist11_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_begin_m
SUBROUTINE nl_get_auxhist11_begin_s ( id_id , auxhist11_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_begin_s
  INTEGER id_id
  auxhist11_begin_s = model_config_rec%auxhist11_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_begin_s
SUBROUTINE nl_get_auxhist11_begin ( id_id , auxhist11_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_begin
  INTEGER id_id
  auxhist11_begin = model_config_rec%auxhist11_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_begin
SUBROUTINE nl_get_auxhist11_end_y ( id_id , auxhist11_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_end_y
  INTEGER id_id
  auxhist11_end_y = model_config_rec%auxhist11_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_end_y
SUBROUTINE nl_get_auxhist11_end_d ( id_id , auxhist11_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_end_d
  INTEGER id_id
  auxhist11_end_d = model_config_rec%auxhist11_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_end_d
SUBROUTINE nl_get_auxhist11_end_h ( id_id , auxhist11_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_end_h
  INTEGER id_id
  auxhist11_end_h = model_config_rec%auxhist11_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_end_h
SUBROUTINE nl_get_auxhist11_end_m ( id_id , auxhist11_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_end_m
  INTEGER id_id
  auxhist11_end_m = model_config_rec%auxhist11_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_end_m
SUBROUTINE nl_get_auxhist11_end_s ( id_id , auxhist11_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_end_s
  INTEGER id_id
  auxhist11_end_s = model_config_rec%auxhist11_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_end_s
SUBROUTINE nl_get_auxhist11_end ( id_id , auxhist11_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist11_end
  INTEGER id_id
  auxhist11_end = model_config_rec%auxhist11_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist11_end
SUBROUTINE nl_get_io_form_auxhist11 ( id_id , io_form_auxhist11 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist11
  INTEGER id_id
  io_form_auxhist11 = model_config_rec%io_form_auxhist11
  RETURN
END SUBROUTINE nl_get_io_form_auxhist11
SUBROUTINE nl_get_frames_per_auxhist11 ( id_id , frames_per_auxhist11 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist11
  INTEGER id_id
  frames_per_auxhist11 = model_config_rec%frames_per_auxhist11(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist11
SUBROUTINE nl_get_auxhist12_inname ( id_id , auxhist12_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist12_inname
  INTEGER id_id
  auxhist12_inname = trim(model_config_rec%auxhist12_inname)
  RETURN
END SUBROUTINE nl_get_auxhist12_inname
SUBROUTINE nl_get_auxhist12_outname ( id_id , auxhist12_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist12_outname
  INTEGER id_id
  auxhist12_outname = trim(model_config_rec%auxhist12_outname)
  RETURN
END SUBROUTINE nl_get_auxhist12_outname
SUBROUTINE nl_get_auxhist12_interval_y ( id_id , auxhist12_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_interval_y
  INTEGER id_id
  auxhist12_interval_y = model_config_rec%auxhist12_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_interval_y
SUBROUTINE nl_get_auxhist12_interval_d ( id_id , auxhist12_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_interval_d
  INTEGER id_id
  auxhist12_interval_d = model_config_rec%auxhist12_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_interval_d
SUBROUTINE nl_get_auxhist12_interval_h ( id_id , auxhist12_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_interval_h
  INTEGER id_id
  auxhist12_interval_h = model_config_rec%auxhist12_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_interval_h
SUBROUTINE nl_get_auxhist12_interval_m ( id_id , auxhist12_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_interval_m
  INTEGER id_id
  auxhist12_interval_m = model_config_rec%auxhist12_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_interval_m
SUBROUTINE nl_get_auxhist12_interval_s ( id_id , auxhist12_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_interval_s
  INTEGER id_id
  auxhist12_interval_s = model_config_rec%auxhist12_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_interval_s
SUBROUTINE nl_get_auxhist12_interval ( id_id , auxhist12_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_interval
  INTEGER id_id
  auxhist12_interval = model_config_rec%auxhist12_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_interval
SUBROUTINE nl_get_auxhist12_begin_y ( id_id , auxhist12_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_begin_y
  INTEGER id_id
  auxhist12_begin_y = model_config_rec%auxhist12_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_begin_y
SUBROUTINE nl_get_auxhist12_begin_d ( id_id , auxhist12_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_begin_d
  INTEGER id_id
  auxhist12_begin_d = model_config_rec%auxhist12_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_begin_d
SUBROUTINE nl_get_auxhist12_begin_h ( id_id , auxhist12_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_begin_h
  INTEGER id_id
  auxhist12_begin_h = model_config_rec%auxhist12_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_begin_h
SUBROUTINE nl_get_auxhist12_begin_m ( id_id , auxhist12_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_begin_m
  INTEGER id_id
  auxhist12_begin_m = model_config_rec%auxhist12_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_begin_m
SUBROUTINE nl_get_auxhist12_begin_s ( id_id , auxhist12_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_begin_s
  INTEGER id_id
  auxhist12_begin_s = model_config_rec%auxhist12_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_begin_s
SUBROUTINE nl_get_auxhist12_begin ( id_id , auxhist12_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_begin
  INTEGER id_id
  auxhist12_begin = model_config_rec%auxhist12_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_begin
SUBROUTINE nl_get_auxhist12_end_y ( id_id , auxhist12_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_end_y
  INTEGER id_id
  auxhist12_end_y = model_config_rec%auxhist12_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_end_y
SUBROUTINE nl_get_auxhist12_end_d ( id_id , auxhist12_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_end_d
  INTEGER id_id
  auxhist12_end_d = model_config_rec%auxhist12_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_end_d
SUBROUTINE nl_get_auxhist12_end_h ( id_id , auxhist12_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_end_h
  INTEGER id_id
  auxhist12_end_h = model_config_rec%auxhist12_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_end_h
SUBROUTINE nl_get_auxhist12_end_m ( id_id , auxhist12_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_end_m
  INTEGER id_id
  auxhist12_end_m = model_config_rec%auxhist12_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_end_m
SUBROUTINE nl_get_auxhist12_end_s ( id_id , auxhist12_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_end_s
  INTEGER id_id
  auxhist12_end_s = model_config_rec%auxhist12_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_end_s
SUBROUTINE nl_get_auxhist12_end ( id_id , auxhist12_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist12_end
  INTEGER id_id
  auxhist12_end = model_config_rec%auxhist12_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist12_end
SUBROUTINE nl_get_io_form_auxhist12 ( id_id , io_form_auxhist12 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist12
  INTEGER id_id
  io_form_auxhist12 = model_config_rec%io_form_auxhist12
  RETURN
END SUBROUTINE nl_get_io_form_auxhist12
SUBROUTINE nl_get_frames_per_auxhist12 ( id_id , frames_per_auxhist12 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist12
  INTEGER id_id
  frames_per_auxhist12 = model_config_rec%frames_per_auxhist12(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist12
SUBROUTINE nl_get_auxhist13_inname ( id_id , auxhist13_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist13_inname
  INTEGER id_id
  auxhist13_inname = trim(model_config_rec%auxhist13_inname)
  RETURN
END SUBROUTINE nl_get_auxhist13_inname
SUBROUTINE nl_get_auxhist13_outname ( id_id , auxhist13_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist13_outname
  INTEGER id_id
  auxhist13_outname = trim(model_config_rec%auxhist13_outname)
  RETURN
END SUBROUTINE nl_get_auxhist13_outname
SUBROUTINE nl_get_auxhist13_interval_y ( id_id , auxhist13_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_interval_y
  INTEGER id_id
  auxhist13_interval_y = model_config_rec%auxhist13_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_interval_y
SUBROUTINE nl_get_auxhist13_interval_d ( id_id , auxhist13_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_interval_d
  INTEGER id_id
  auxhist13_interval_d = model_config_rec%auxhist13_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_interval_d
SUBROUTINE nl_get_auxhist13_interval_h ( id_id , auxhist13_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_interval_h
  INTEGER id_id
  auxhist13_interval_h = model_config_rec%auxhist13_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_interval_h
SUBROUTINE nl_get_auxhist13_interval_m ( id_id , auxhist13_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_interval_m
  INTEGER id_id
  auxhist13_interval_m = model_config_rec%auxhist13_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_interval_m
SUBROUTINE nl_get_auxhist13_interval_s ( id_id , auxhist13_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_interval_s
  INTEGER id_id
  auxhist13_interval_s = model_config_rec%auxhist13_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_interval_s
SUBROUTINE nl_get_auxhist13_interval ( id_id , auxhist13_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_interval
  INTEGER id_id
  auxhist13_interval = model_config_rec%auxhist13_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_interval
SUBROUTINE nl_get_auxhist13_begin_y ( id_id , auxhist13_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_begin_y
  INTEGER id_id
  auxhist13_begin_y = model_config_rec%auxhist13_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_begin_y
SUBROUTINE nl_get_auxhist13_begin_d ( id_id , auxhist13_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_begin_d
  INTEGER id_id
  auxhist13_begin_d = model_config_rec%auxhist13_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_begin_d
SUBROUTINE nl_get_auxhist13_begin_h ( id_id , auxhist13_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_begin_h
  INTEGER id_id
  auxhist13_begin_h = model_config_rec%auxhist13_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_begin_h
SUBROUTINE nl_get_auxhist13_begin_m ( id_id , auxhist13_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_begin_m
  INTEGER id_id
  auxhist13_begin_m = model_config_rec%auxhist13_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_begin_m
SUBROUTINE nl_get_auxhist13_begin_s ( id_id , auxhist13_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_begin_s
  INTEGER id_id
  auxhist13_begin_s = model_config_rec%auxhist13_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_begin_s
SUBROUTINE nl_get_auxhist13_begin ( id_id , auxhist13_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_begin
  INTEGER id_id
  auxhist13_begin = model_config_rec%auxhist13_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_begin
SUBROUTINE nl_get_auxhist13_end_y ( id_id , auxhist13_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_end_y
  INTEGER id_id
  auxhist13_end_y = model_config_rec%auxhist13_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_end_y
SUBROUTINE nl_get_auxhist13_end_d ( id_id , auxhist13_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_end_d
  INTEGER id_id
  auxhist13_end_d = model_config_rec%auxhist13_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_end_d
SUBROUTINE nl_get_auxhist13_end_h ( id_id , auxhist13_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_end_h
  INTEGER id_id
  auxhist13_end_h = model_config_rec%auxhist13_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_end_h
SUBROUTINE nl_get_auxhist13_end_m ( id_id , auxhist13_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_end_m
  INTEGER id_id
  auxhist13_end_m = model_config_rec%auxhist13_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_end_m
SUBROUTINE nl_get_auxhist13_end_s ( id_id , auxhist13_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_end_s
  INTEGER id_id
  auxhist13_end_s = model_config_rec%auxhist13_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_end_s
SUBROUTINE nl_get_auxhist13_end ( id_id , auxhist13_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist13_end
  INTEGER id_id
  auxhist13_end = model_config_rec%auxhist13_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist13_end
SUBROUTINE nl_get_io_form_auxhist13 ( id_id , io_form_auxhist13 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist13
  INTEGER id_id
  io_form_auxhist13 = model_config_rec%io_form_auxhist13
  RETURN
END SUBROUTINE nl_get_io_form_auxhist13
SUBROUTINE nl_get_frames_per_auxhist13 ( id_id , frames_per_auxhist13 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist13
  INTEGER id_id
  frames_per_auxhist13 = model_config_rec%frames_per_auxhist13(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist13
SUBROUTINE nl_get_auxhist14_inname ( id_id , auxhist14_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist14_inname
  INTEGER id_id
  auxhist14_inname = trim(model_config_rec%auxhist14_inname)
  RETURN
END SUBROUTINE nl_get_auxhist14_inname
SUBROUTINE nl_get_auxhist14_outname ( id_id , auxhist14_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist14_outname
  INTEGER id_id
  auxhist14_outname = trim(model_config_rec%auxhist14_outname)
  RETURN
END SUBROUTINE nl_get_auxhist14_outname
SUBROUTINE nl_get_auxhist14_interval_y ( id_id , auxhist14_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_interval_y
  INTEGER id_id
  auxhist14_interval_y = model_config_rec%auxhist14_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_interval_y
SUBROUTINE nl_get_auxhist14_interval_d ( id_id , auxhist14_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_interval_d
  INTEGER id_id
  auxhist14_interval_d = model_config_rec%auxhist14_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_interval_d
SUBROUTINE nl_get_auxhist14_interval_h ( id_id , auxhist14_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_interval_h
  INTEGER id_id
  auxhist14_interval_h = model_config_rec%auxhist14_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_interval_h
SUBROUTINE nl_get_auxhist14_interval_m ( id_id , auxhist14_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_interval_m
  INTEGER id_id
  auxhist14_interval_m = model_config_rec%auxhist14_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_interval_m
SUBROUTINE nl_get_auxhist14_interval_s ( id_id , auxhist14_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_interval_s
  INTEGER id_id
  auxhist14_interval_s = model_config_rec%auxhist14_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_interval_s
SUBROUTINE nl_get_auxhist14_interval ( id_id , auxhist14_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_interval
  INTEGER id_id
  auxhist14_interval = model_config_rec%auxhist14_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_interval
SUBROUTINE nl_get_auxhist14_begin_y ( id_id , auxhist14_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_begin_y
  INTEGER id_id
  auxhist14_begin_y = model_config_rec%auxhist14_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_begin_y
SUBROUTINE nl_get_auxhist14_begin_d ( id_id , auxhist14_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_begin_d
  INTEGER id_id
  auxhist14_begin_d = model_config_rec%auxhist14_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_begin_d
SUBROUTINE nl_get_auxhist14_begin_h ( id_id , auxhist14_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_begin_h
  INTEGER id_id
  auxhist14_begin_h = model_config_rec%auxhist14_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_begin_h
SUBROUTINE nl_get_auxhist14_begin_m ( id_id , auxhist14_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_begin_m
  INTEGER id_id
  auxhist14_begin_m = model_config_rec%auxhist14_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_begin_m
SUBROUTINE nl_get_auxhist14_begin_s ( id_id , auxhist14_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_begin_s
  INTEGER id_id
  auxhist14_begin_s = model_config_rec%auxhist14_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_begin_s
SUBROUTINE nl_get_auxhist14_begin ( id_id , auxhist14_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_begin
  INTEGER id_id
  auxhist14_begin = model_config_rec%auxhist14_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_begin
SUBROUTINE nl_get_auxhist14_end_y ( id_id , auxhist14_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_end_y
  INTEGER id_id
  auxhist14_end_y = model_config_rec%auxhist14_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_end_y
SUBROUTINE nl_get_auxhist14_end_d ( id_id , auxhist14_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_end_d
  INTEGER id_id
  auxhist14_end_d = model_config_rec%auxhist14_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_end_d
SUBROUTINE nl_get_auxhist14_end_h ( id_id , auxhist14_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_end_h
  INTEGER id_id
  auxhist14_end_h = model_config_rec%auxhist14_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_end_h
SUBROUTINE nl_get_auxhist14_end_m ( id_id , auxhist14_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_end_m
  INTEGER id_id
  auxhist14_end_m = model_config_rec%auxhist14_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_end_m
SUBROUTINE nl_get_auxhist14_end_s ( id_id , auxhist14_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_end_s
  INTEGER id_id
  auxhist14_end_s = model_config_rec%auxhist14_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_end_s
SUBROUTINE nl_get_auxhist14_end ( id_id , auxhist14_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist14_end
  INTEGER id_id
  auxhist14_end = model_config_rec%auxhist14_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist14_end
SUBROUTINE nl_get_io_form_auxhist14 ( id_id , io_form_auxhist14 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist14
  INTEGER id_id
  io_form_auxhist14 = model_config_rec%io_form_auxhist14
  RETURN
END SUBROUTINE nl_get_io_form_auxhist14
SUBROUTINE nl_get_frames_per_auxhist14 ( id_id , frames_per_auxhist14 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist14
  INTEGER id_id
  frames_per_auxhist14 = model_config_rec%frames_per_auxhist14(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist14
SUBROUTINE nl_get_auxhist15_inname ( id_id , auxhist15_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist15_inname
  INTEGER id_id
  auxhist15_inname = trim(model_config_rec%auxhist15_inname)
  RETURN
END SUBROUTINE nl_get_auxhist15_inname
SUBROUTINE nl_get_auxhist15_outname ( id_id , auxhist15_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist15_outname
  INTEGER id_id
  auxhist15_outname = trim(model_config_rec%auxhist15_outname)
  RETURN
END SUBROUTINE nl_get_auxhist15_outname
SUBROUTINE nl_get_auxhist15_interval_y ( id_id , auxhist15_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_interval_y
  INTEGER id_id
  auxhist15_interval_y = model_config_rec%auxhist15_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_interval_y
SUBROUTINE nl_get_auxhist15_interval_d ( id_id , auxhist15_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_interval_d
  INTEGER id_id
  auxhist15_interval_d = model_config_rec%auxhist15_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_interval_d
SUBROUTINE nl_get_auxhist15_interval_h ( id_id , auxhist15_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_interval_h
  INTEGER id_id
  auxhist15_interval_h = model_config_rec%auxhist15_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_interval_h
SUBROUTINE nl_get_auxhist15_interval_m ( id_id , auxhist15_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_interval_m
  INTEGER id_id
  auxhist15_interval_m = model_config_rec%auxhist15_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_interval_m
SUBROUTINE nl_get_auxhist15_interval_s ( id_id , auxhist15_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_interval_s
  INTEGER id_id
  auxhist15_interval_s = model_config_rec%auxhist15_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_interval_s
SUBROUTINE nl_get_auxhist15_interval ( id_id , auxhist15_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_interval
  INTEGER id_id
  auxhist15_interval = model_config_rec%auxhist15_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_interval
SUBROUTINE nl_get_auxhist15_begin_y ( id_id , auxhist15_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_begin_y
  INTEGER id_id
  auxhist15_begin_y = model_config_rec%auxhist15_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_begin_y
SUBROUTINE nl_get_auxhist15_begin_d ( id_id , auxhist15_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_begin_d
  INTEGER id_id
  auxhist15_begin_d = model_config_rec%auxhist15_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_begin_d
SUBROUTINE nl_get_auxhist15_begin_h ( id_id , auxhist15_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_begin_h
  INTEGER id_id
  auxhist15_begin_h = model_config_rec%auxhist15_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_begin_h
SUBROUTINE nl_get_auxhist15_begin_m ( id_id , auxhist15_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_begin_m
  INTEGER id_id
  auxhist15_begin_m = model_config_rec%auxhist15_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_begin_m
SUBROUTINE nl_get_auxhist15_begin_s ( id_id , auxhist15_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_begin_s
  INTEGER id_id
  auxhist15_begin_s = model_config_rec%auxhist15_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_begin_s
SUBROUTINE nl_get_auxhist15_begin ( id_id , auxhist15_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_begin
  INTEGER id_id
  auxhist15_begin = model_config_rec%auxhist15_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_begin
SUBROUTINE nl_get_auxhist15_end_y ( id_id , auxhist15_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_end_y
  INTEGER id_id
  auxhist15_end_y = model_config_rec%auxhist15_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_end_y
SUBROUTINE nl_get_auxhist15_end_d ( id_id , auxhist15_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_end_d
  INTEGER id_id
  auxhist15_end_d = model_config_rec%auxhist15_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_end_d
SUBROUTINE nl_get_auxhist15_end_h ( id_id , auxhist15_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_end_h
  INTEGER id_id
  auxhist15_end_h = model_config_rec%auxhist15_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_end_h
SUBROUTINE nl_get_auxhist15_end_m ( id_id , auxhist15_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_end_m
  INTEGER id_id
  auxhist15_end_m = model_config_rec%auxhist15_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_end_m
SUBROUTINE nl_get_auxhist15_end_s ( id_id , auxhist15_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_end_s
  INTEGER id_id
  auxhist15_end_s = model_config_rec%auxhist15_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_end_s
SUBROUTINE nl_get_auxhist15_end ( id_id , auxhist15_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist15_end
  INTEGER id_id
  auxhist15_end = model_config_rec%auxhist15_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist15_end
SUBROUTINE nl_get_io_form_auxhist15 ( id_id , io_form_auxhist15 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist15
  INTEGER id_id
  io_form_auxhist15 = model_config_rec%io_form_auxhist15
  RETURN
END SUBROUTINE nl_get_io_form_auxhist15
SUBROUTINE nl_get_frames_per_auxhist15 ( id_id , frames_per_auxhist15 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist15
  INTEGER id_id
  frames_per_auxhist15 = model_config_rec%frames_per_auxhist15(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist15
SUBROUTINE nl_get_auxhist16_inname ( id_id , auxhist16_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist16_inname
  INTEGER id_id
  auxhist16_inname = trim(model_config_rec%auxhist16_inname)
  RETURN
END SUBROUTINE nl_get_auxhist16_inname
SUBROUTINE nl_get_auxhist16_outname ( id_id , auxhist16_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist16_outname
  INTEGER id_id
  auxhist16_outname = trim(model_config_rec%auxhist16_outname)
  RETURN
END SUBROUTINE nl_get_auxhist16_outname
SUBROUTINE nl_get_auxhist16_interval_y ( id_id , auxhist16_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_interval_y
  INTEGER id_id
  auxhist16_interval_y = model_config_rec%auxhist16_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_interval_y
SUBROUTINE nl_get_auxhist16_interval_d ( id_id , auxhist16_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_interval_d
  INTEGER id_id
  auxhist16_interval_d = model_config_rec%auxhist16_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_interval_d
SUBROUTINE nl_get_auxhist16_interval_h ( id_id , auxhist16_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_interval_h
  INTEGER id_id
  auxhist16_interval_h = model_config_rec%auxhist16_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_interval_h
SUBROUTINE nl_get_auxhist16_interval_m ( id_id , auxhist16_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_interval_m
  INTEGER id_id
  auxhist16_interval_m = model_config_rec%auxhist16_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_interval_m
SUBROUTINE nl_get_auxhist16_interval_s ( id_id , auxhist16_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_interval_s
  INTEGER id_id
  auxhist16_interval_s = model_config_rec%auxhist16_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_interval_s
SUBROUTINE nl_get_auxhist16_interval ( id_id , auxhist16_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_interval
  INTEGER id_id
  auxhist16_interval = model_config_rec%auxhist16_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_interval
SUBROUTINE nl_get_auxhist16_begin_y ( id_id , auxhist16_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_begin_y
  INTEGER id_id
  auxhist16_begin_y = model_config_rec%auxhist16_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_begin_y
SUBROUTINE nl_get_auxhist16_begin_d ( id_id , auxhist16_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_begin_d
  INTEGER id_id
  auxhist16_begin_d = model_config_rec%auxhist16_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_begin_d
SUBROUTINE nl_get_auxhist16_begin_h ( id_id , auxhist16_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_begin_h
  INTEGER id_id
  auxhist16_begin_h = model_config_rec%auxhist16_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_begin_h
SUBROUTINE nl_get_auxhist16_begin_m ( id_id , auxhist16_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_begin_m
  INTEGER id_id
  auxhist16_begin_m = model_config_rec%auxhist16_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_begin_m
SUBROUTINE nl_get_auxhist16_begin_s ( id_id , auxhist16_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_begin_s
  INTEGER id_id
  auxhist16_begin_s = model_config_rec%auxhist16_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_begin_s
SUBROUTINE nl_get_auxhist16_begin ( id_id , auxhist16_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_begin
  INTEGER id_id
  auxhist16_begin = model_config_rec%auxhist16_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_begin
SUBROUTINE nl_get_auxhist16_end_y ( id_id , auxhist16_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_end_y
  INTEGER id_id
  auxhist16_end_y = model_config_rec%auxhist16_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_end_y
SUBROUTINE nl_get_auxhist16_end_d ( id_id , auxhist16_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_end_d
  INTEGER id_id
  auxhist16_end_d = model_config_rec%auxhist16_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_end_d
SUBROUTINE nl_get_auxhist16_end_h ( id_id , auxhist16_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_end_h
  INTEGER id_id
  auxhist16_end_h = model_config_rec%auxhist16_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_end_h
SUBROUTINE nl_get_auxhist16_end_m ( id_id , auxhist16_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_end_m
  INTEGER id_id
  auxhist16_end_m = model_config_rec%auxhist16_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_end_m
SUBROUTINE nl_get_auxhist16_end_s ( id_id , auxhist16_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_end_s
  INTEGER id_id
  auxhist16_end_s = model_config_rec%auxhist16_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_end_s
SUBROUTINE nl_get_auxhist16_end ( id_id , auxhist16_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist16_end
  INTEGER id_id
  auxhist16_end = model_config_rec%auxhist16_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist16_end
SUBROUTINE nl_get_io_form_auxhist16 ( id_id , io_form_auxhist16 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist16
  INTEGER id_id
  io_form_auxhist16 = model_config_rec%io_form_auxhist16
  RETURN
END SUBROUTINE nl_get_io_form_auxhist16
SUBROUTINE nl_get_frames_per_auxhist16 ( id_id , frames_per_auxhist16 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist16
  INTEGER id_id
  frames_per_auxhist16 = model_config_rec%frames_per_auxhist16(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist16
SUBROUTINE nl_get_auxhist17_inname ( id_id , auxhist17_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist17_inname
  INTEGER id_id
  auxhist17_inname = trim(model_config_rec%auxhist17_inname)
  RETURN
END SUBROUTINE nl_get_auxhist17_inname
SUBROUTINE nl_get_auxhist17_outname ( id_id , auxhist17_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist17_outname
  INTEGER id_id
  auxhist17_outname = trim(model_config_rec%auxhist17_outname)
  RETURN
END SUBROUTINE nl_get_auxhist17_outname
SUBROUTINE nl_get_auxhist17_interval_y ( id_id , auxhist17_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_interval_y
  INTEGER id_id
  auxhist17_interval_y = model_config_rec%auxhist17_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_interval_y
SUBROUTINE nl_get_auxhist17_interval_d ( id_id , auxhist17_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_interval_d
  INTEGER id_id
  auxhist17_interval_d = model_config_rec%auxhist17_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_interval_d
SUBROUTINE nl_get_auxhist17_interval_h ( id_id , auxhist17_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_interval_h
  INTEGER id_id
  auxhist17_interval_h = model_config_rec%auxhist17_interval_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_interval_h
SUBROUTINE nl_get_auxhist17_interval_m ( id_id , auxhist17_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_interval_m
  INTEGER id_id
  auxhist17_interval_m = model_config_rec%auxhist17_interval_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_interval_m
SUBROUTINE nl_get_auxhist17_interval_s ( id_id , auxhist17_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_interval_s
  INTEGER id_id
  auxhist17_interval_s = model_config_rec%auxhist17_interval_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_interval_s
SUBROUTINE nl_get_auxhist17_interval ( id_id , auxhist17_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_interval
  INTEGER id_id
  auxhist17_interval = model_config_rec%auxhist17_interval(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_interval
SUBROUTINE nl_get_auxhist17_begin_y ( id_id , auxhist17_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_begin_y
  INTEGER id_id
  auxhist17_begin_y = model_config_rec%auxhist17_begin_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_begin_y
SUBROUTINE nl_get_auxhist17_begin_d ( id_id , auxhist17_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_begin_d
  INTEGER id_id
  auxhist17_begin_d = model_config_rec%auxhist17_begin_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_begin_d
SUBROUTINE nl_get_auxhist17_begin_h ( id_id , auxhist17_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_begin_h
  INTEGER id_id
  auxhist17_begin_h = model_config_rec%auxhist17_begin_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_begin_h
SUBROUTINE nl_get_auxhist17_begin_m ( id_id , auxhist17_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_begin_m
  INTEGER id_id
  auxhist17_begin_m = model_config_rec%auxhist17_begin_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_begin_m
SUBROUTINE nl_get_auxhist17_begin_s ( id_id , auxhist17_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_begin_s
  INTEGER id_id
  auxhist17_begin_s = model_config_rec%auxhist17_begin_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_begin_s
SUBROUTINE nl_get_auxhist17_begin ( id_id , auxhist17_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_begin
  INTEGER id_id
  auxhist17_begin = model_config_rec%auxhist17_begin(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_begin
SUBROUTINE nl_get_auxhist17_end_y ( id_id , auxhist17_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_end_y
  INTEGER id_id
  auxhist17_end_y = model_config_rec%auxhist17_end_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_end_y
SUBROUTINE nl_get_auxhist17_end_d ( id_id , auxhist17_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_end_d
  INTEGER id_id
  auxhist17_end_d = model_config_rec%auxhist17_end_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_end_d
SUBROUTINE nl_get_auxhist17_end_h ( id_id , auxhist17_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_end_h
  INTEGER id_id
  auxhist17_end_h = model_config_rec%auxhist17_end_h(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_end_h
SUBROUTINE nl_get_auxhist17_end_m ( id_id , auxhist17_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_end_m
  INTEGER id_id
  auxhist17_end_m = model_config_rec%auxhist17_end_m(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_end_m
SUBROUTINE nl_get_auxhist17_end_s ( id_id , auxhist17_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_end_s
  INTEGER id_id
  auxhist17_end_s = model_config_rec%auxhist17_end_s(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_end_s
SUBROUTINE nl_get_auxhist17_end ( id_id , auxhist17_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist17_end
  INTEGER id_id
  auxhist17_end = model_config_rec%auxhist17_end(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist17_end
SUBROUTINE nl_get_io_form_auxhist17 ( id_id , io_form_auxhist17 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: io_form_auxhist17
  INTEGER id_id
  io_form_auxhist17 = model_config_rec%io_form_auxhist17
  RETURN
END SUBROUTINE nl_get_io_form_auxhist17
SUBROUTINE nl_get_frames_per_auxhist17 ( id_id , frames_per_auxhist17 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: frames_per_auxhist17
  INTEGER id_id
  frames_per_auxhist17 = model_config_rec%frames_per_auxhist17(id_id)
  RETURN
END SUBROUTINE nl_get_frames_per_auxhist17
SUBROUTINE nl_get_auxhist18_inname ( id_id , auxhist18_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist18_inname
  INTEGER id_id
  auxhist18_inname = trim(model_config_rec%auxhist18_inname)
  RETURN
END SUBROUTINE nl_get_auxhist18_inname
SUBROUTINE nl_get_auxhist18_outname ( id_id , auxhist18_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(OUT) :: auxhist18_outname
  INTEGER id_id
  auxhist18_outname = trim(model_config_rec%auxhist18_outname)
  RETURN
END SUBROUTINE nl_get_auxhist18_outname
SUBROUTINE nl_get_auxhist18_interval_y ( id_id , auxhist18_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_interval_y
  INTEGER id_id
  auxhist18_interval_y = model_config_rec%auxhist18_interval_y(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_interval_y
SUBROUTINE nl_get_auxhist18_interval_d ( id_id , auxhist18_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: auxhist18_interval_d
  INTEGER id_id
  auxhist18_interval_d = model_config_rec%auxhist18_interval_d(id_id)
  RETURN
END SUBROUTINE nl_get_auxhist18_interval_d
!ENDOFREGISTRYGENERATEDINCLUDE
