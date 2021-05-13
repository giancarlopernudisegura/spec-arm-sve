!STARTOFREGISTRYGENERATEDINCLUDE 'inc/nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit. Your changes to this file will be lost.
!
SUBROUTINE nl_get_maxens2 ( id_id , maxens2 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: maxens2
  INTEGER id_id
  maxens2 = model_config_rec%maxens2
  RETURN
END SUBROUTINE nl_get_maxens2
SUBROUTINE nl_get_maxens3 ( id_id , maxens3 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: maxens3
  INTEGER id_id
  maxens3 = model_config_rec%maxens3
  RETURN
END SUBROUTINE nl_get_maxens3
SUBROUTINE nl_get_ensdim ( id_id , ensdim )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: ensdim
  INTEGER id_id
  ensdim = model_config_rec%ensdim
  RETURN
END SUBROUTINE nl_get_ensdim
SUBROUTINE nl_get_cugd_avedx ( id_id , cugd_avedx )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: cugd_avedx
  INTEGER id_id
  cugd_avedx = model_config_rec%cugd_avedx
  RETURN
END SUBROUTINE nl_get_cugd_avedx
SUBROUTINE nl_get_clos_choice ( id_id , clos_choice )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: clos_choice
  INTEGER id_id
  clos_choice = model_config_rec%clos_choice
  RETURN
END SUBROUTINE nl_get_clos_choice
SUBROUTINE nl_get_imomentum ( id_id , imomentum )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: imomentum
  INTEGER id_id
  imomentum = model_config_rec%imomentum
  RETURN
END SUBROUTINE nl_get_imomentum
SUBROUTINE nl_get_ishallow ( id_id , ishallow )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: ishallow
  INTEGER id_id
  ishallow = model_config_rec%ishallow
  RETURN
END SUBROUTINE nl_get_ishallow
SUBROUTINE nl_get_convtrans_avglen_m ( id_id , convtrans_avglen_m )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: convtrans_avglen_m
  INTEGER id_id
  convtrans_avglen_m = model_config_rec%convtrans_avglen_m
  RETURN
END SUBROUTINE nl_get_convtrans_avglen_m
SUBROUTINE nl_get_num_land_cat ( id_id , num_land_cat )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: num_land_cat
  INTEGER id_id
  num_land_cat = model_config_rec%num_land_cat
  RETURN
END SUBROUTINE nl_get_num_land_cat
SUBROUTINE nl_get_num_soil_cat ( id_id , num_soil_cat )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: num_soil_cat
  INTEGER id_id
  num_soil_cat = model_config_rec%num_soil_cat
  RETURN
END SUBROUTINE nl_get_num_soil_cat
SUBROUTINE nl_get_mp_zero_out ( id_id , mp_zero_out )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: mp_zero_out
  INTEGER id_id
  mp_zero_out = model_config_rec%mp_zero_out
  RETURN
END SUBROUTINE nl_get_mp_zero_out
SUBROUTINE nl_get_mp_zero_out_thresh ( id_id , mp_zero_out_thresh )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: mp_zero_out_thresh
  INTEGER id_id
  mp_zero_out_thresh = model_config_rec%mp_zero_out_thresh
  RETURN
END SUBROUTINE nl_get_mp_zero_out_thresh
SUBROUTINE nl_get_seaice_threshold ( id_id , seaice_threshold )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: seaice_threshold
  INTEGER id_id
  seaice_threshold = model_config_rec%seaice_threshold
  RETURN
END SUBROUTINE nl_get_seaice_threshold
SUBROUTINE nl_get_sst_update ( id_id , sst_update )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: sst_update
  INTEGER id_id
  sst_update = model_config_rec%sst_update
  RETURN
END SUBROUTINE nl_get_sst_update
SUBROUTINE nl_get_sst_skin ( id_id , sst_skin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: sst_skin
  INTEGER id_id
  sst_skin = model_config_rec%sst_skin
  RETURN
END SUBROUTINE nl_get_sst_skin
SUBROUTINE nl_get_tmn_update ( id_id , tmn_update )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: tmn_update
  INTEGER id_id
  tmn_update = model_config_rec%tmn_update
  RETURN
END SUBROUTINE nl_get_tmn_update
SUBROUTINE nl_get_usemonalb ( id_id , usemonalb )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: usemonalb
  INTEGER id_id
  usemonalb = model_config_rec%usemonalb
  RETURN
END SUBROUTINE nl_get_usemonalb
SUBROUTINE nl_get_rdmaxalb ( id_id , rdmaxalb )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: rdmaxalb
  INTEGER id_id
  rdmaxalb = model_config_rec%rdmaxalb
  RETURN
END SUBROUTINE nl_get_rdmaxalb
SUBROUTINE nl_get_rdlai2d ( id_id , rdlai2d )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: rdlai2d
  INTEGER id_id
  rdlai2d = model_config_rec%rdlai2d
  RETURN
END SUBROUTINE nl_get_rdlai2d
SUBROUTINE nl_get_ua_phys ( id_id , ua_phys )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: ua_phys
  INTEGER id_id
  ua_phys = model_config_rec%ua_phys
  RETURN
END SUBROUTINE nl_get_ua_phys
SUBROUTINE nl_get_co2tf ( id_id , co2tf )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: co2tf
  INTEGER id_id
  co2tf = model_config_rec%co2tf
  RETURN
END SUBROUTINE nl_get_co2tf
SUBROUTINE nl_get_ra_call_offset ( id_id , ra_call_offset )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: ra_call_offset
  INTEGER id_id
  ra_call_offset = model_config_rec%ra_call_offset
  RETURN
END SUBROUTINE nl_get_ra_call_offset
SUBROUTINE nl_get_cam_abs_freq_s ( id_id , cam_abs_freq_s )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: cam_abs_freq_s
  INTEGER id_id
  cam_abs_freq_s = model_config_rec%cam_abs_freq_s
  RETURN
END SUBROUTINE nl_get_cam_abs_freq_s
SUBROUTINE nl_get_levsiz ( id_id , levsiz )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: levsiz
  INTEGER id_id
  levsiz = model_config_rec%levsiz
  RETURN
END SUBROUTINE nl_get_levsiz
SUBROUTINE nl_get_paerlev ( id_id , paerlev )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: paerlev
  INTEGER id_id
  paerlev = model_config_rec%paerlev
  RETURN
END SUBROUTINE nl_get_paerlev
SUBROUTINE nl_get_cam_abs_dim1 ( id_id , cam_abs_dim1 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: cam_abs_dim1
  INTEGER id_id
  cam_abs_dim1 = model_config_rec%cam_abs_dim1
  RETURN
END SUBROUTINE nl_get_cam_abs_dim1
SUBROUTINE nl_get_cam_abs_dim2 ( id_id , cam_abs_dim2 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: cam_abs_dim2
  INTEGER id_id
  cam_abs_dim2 = model_config_rec%cam_abs_dim2
  RETURN
END SUBROUTINE nl_get_cam_abs_dim2
SUBROUTINE nl_get_lagday ( id_id , lagday )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: lagday
  INTEGER id_id
  lagday = model_config_rec%lagday
  RETURN
END SUBROUTINE nl_get_lagday
SUBROUTINE nl_get_no_src_types ( id_id , no_src_types )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: no_src_types
  INTEGER id_id
  no_src_types = model_config_rec%no_src_types
  RETURN
END SUBROUTINE nl_get_no_src_types
SUBROUTINE nl_get_alevsiz ( id_id , alevsiz )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: alevsiz
  INTEGER id_id
  alevsiz = model_config_rec%alevsiz
  RETURN
END SUBROUTINE nl_get_alevsiz
SUBROUTINE nl_get_o3input ( id_id , o3input )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: o3input
  INTEGER id_id
  o3input = model_config_rec%o3input
  RETURN
END SUBROUTINE nl_get_o3input
SUBROUTINE nl_get_aer_opt ( id_id , aer_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: aer_opt
  INTEGER id_id
  aer_opt = model_config_rec%aer_opt
  RETURN
END SUBROUTINE nl_get_aer_opt
SUBROUTINE nl_get_swint_opt ( id_id , swint_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: swint_opt
  INTEGER id_id
  swint_opt = model_config_rec%swint_opt
  RETURN
END SUBROUTINE nl_get_swint_opt
SUBROUTINE nl_get_aer_type ( id_id , aer_type )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: aer_type
  INTEGER id_id
  aer_type = model_config_rec%aer_type(id_id)
  RETURN
END SUBROUTINE nl_get_aer_type
SUBROUTINE nl_get_aer_aod550_opt ( id_id , aer_aod550_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: aer_aod550_opt
  INTEGER id_id
  aer_aod550_opt = model_config_rec%aer_aod550_opt(id_id)
  RETURN
END SUBROUTINE nl_get_aer_aod550_opt
SUBROUTINE nl_get_aer_angexp_opt ( id_id , aer_angexp_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: aer_angexp_opt
  INTEGER id_id
  aer_angexp_opt = model_config_rec%aer_angexp_opt(id_id)
  RETURN
END SUBROUTINE nl_get_aer_angexp_opt
SUBROUTINE nl_get_aer_ssa_opt ( id_id , aer_ssa_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: aer_ssa_opt
  INTEGER id_id
  aer_ssa_opt = model_config_rec%aer_ssa_opt(id_id)
  RETURN
END SUBROUTINE nl_get_aer_ssa_opt
SUBROUTINE nl_get_aer_asy_opt ( id_id , aer_asy_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: aer_asy_opt
  INTEGER id_id
  aer_asy_opt = model_config_rec%aer_asy_opt(id_id)
  RETURN
END SUBROUTINE nl_get_aer_asy_opt
SUBROUTINE nl_get_aer_aod550_val ( id_id , aer_aod550_val )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: aer_aod550_val
  INTEGER id_id
  aer_aod550_val = model_config_rec%aer_aod550_val(id_id)
  RETURN
END SUBROUTINE nl_get_aer_aod550_val
SUBROUTINE nl_get_aer_angexp_val ( id_id , aer_angexp_val )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: aer_angexp_val
  INTEGER id_id
  aer_angexp_val = model_config_rec%aer_angexp_val(id_id)
  RETURN
END SUBROUTINE nl_get_aer_angexp_val
SUBROUTINE nl_get_aer_ssa_val ( id_id , aer_ssa_val )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: aer_ssa_val
  INTEGER id_id
  aer_ssa_val = model_config_rec%aer_ssa_val(id_id)
  RETURN
END SUBROUTINE nl_get_aer_ssa_val
SUBROUTINE nl_get_aer_asy_val ( id_id , aer_asy_val )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: aer_asy_val
  INTEGER id_id
  aer_asy_val = model_config_rec%aer_asy_val(id_id)
  RETURN
END SUBROUTINE nl_get_aer_asy_val
SUBROUTINE nl_get_cu_rad_feedback ( id_id , cu_rad_feedback )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: cu_rad_feedback
  INTEGER id_id
  cu_rad_feedback = model_config_rec%cu_rad_feedback(id_id)
  RETURN
END SUBROUTINE nl_get_cu_rad_feedback
SUBROUTINE nl_get_icloud_cu ( id_id , icloud_cu )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: icloud_cu
  INTEGER id_id
  icloud_cu = model_config_rec%icloud_cu
  RETURN
END SUBROUTINE nl_get_icloud_cu
SUBROUTINE nl_get_pxlsm_smois_init ( id_id , pxlsm_smois_init )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: pxlsm_smois_init
  INTEGER id_id
  pxlsm_smois_init = model_config_rec%pxlsm_smois_init(id_id)
  RETURN
END SUBROUTINE nl_get_pxlsm_smois_init
SUBROUTINE nl_get_omlcall ( id_id , omlcall )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: omlcall
  INTEGER id_id
  omlcall = model_config_rec%omlcall
  RETURN
END SUBROUTINE nl_get_omlcall
SUBROUTINE nl_get_sf_ocean_physics ( id_id , sf_ocean_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: sf_ocean_physics
  INTEGER id_id
  sf_ocean_physics = model_config_rec%sf_ocean_physics
  RETURN
END SUBROUTINE nl_get_sf_ocean_physics
SUBROUTINE nl_get_traj_opt ( id_id , traj_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: traj_opt
  INTEGER id_id
  traj_opt = model_config_rec%traj_opt
  RETURN
END SUBROUTINE nl_get_traj_opt
SUBROUTINE nl_get_tracercall ( id_id , tracercall )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: tracercall
  INTEGER id_id
  tracercall = model_config_rec%tracercall
  RETURN
END SUBROUTINE nl_get_tracercall
SUBROUTINE nl_get_omdt ( id_id , omdt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: omdt
  INTEGER id_id
  omdt = model_config_rec%omdt
  RETURN
END SUBROUTINE nl_get_omdt
SUBROUTINE nl_get_oml_hml0 ( id_id , oml_hml0 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: oml_hml0
  INTEGER id_id
  oml_hml0 = model_config_rec%oml_hml0
  RETURN
END SUBROUTINE nl_get_oml_hml0
SUBROUTINE nl_get_oml_gamma ( id_id , oml_gamma )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: oml_gamma
  INTEGER id_id
  oml_gamma = model_config_rec%oml_gamma
  RETURN
END SUBROUTINE nl_get_oml_gamma
SUBROUTINE nl_get_isftcflx ( id_id , isftcflx )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: isftcflx
  INTEGER id_id
  isftcflx = model_config_rec%isftcflx
  RETURN
END SUBROUTINE nl_get_isftcflx
SUBROUTINE nl_get_iz0tlnd ( id_id , iz0tlnd )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: iz0tlnd
  INTEGER id_id
  iz0tlnd = model_config_rec%iz0tlnd
  RETURN
END SUBROUTINE nl_get_iz0tlnd
SUBROUTINE nl_get_shadlen ( id_id , shadlen )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: shadlen
  INTEGER id_id
  shadlen = model_config_rec%shadlen
  RETURN
END SUBROUTINE nl_get_shadlen
SUBROUTINE nl_get_slope_rad ( id_id , slope_rad )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: slope_rad
  INTEGER id_id
  slope_rad = model_config_rec%slope_rad(id_id)
  RETURN
END SUBROUTINE nl_get_slope_rad
SUBROUTINE nl_get_topo_shading ( id_id , topo_shading )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: topo_shading
  INTEGER id_id
  topo_shading = model_config_rec%topo_shading(id_id)
  RETURN
END SUBROUTINE nl_get_topo_shading
SUBROUTINE nl_get_topo_wind ( id_id , topo_wind )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: topo_wind
  INTEGER id_id
  topo_wind = model_config_rec%topo_wind(id_id)
  RETURN
END SUBROUTINE nl_get_topo_wind
SUBROUTINE nl_get_no_mp_heating ( id_id , no_mp_heating )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: no_mp_heating
  INTEGER id_id
  no_mp_heating = model_config_rec%no_mp_heating
  RETURN
END SUBROUTINE nl_get_no_mp_heating
SUBROUTINE nl_get_fractional_seaice ( id_id , fractional_seaice )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: fractional_seaice
  INTEGER id_id
  fractional_seaice = model_config_rec%fractional_seaice
  RETURN
END SUBROUTINE nl_get_fractional_seaice
SUBROUTINE nl_get_seaice_snowdepth_opt ( id_id , seaice_snowdepth_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: seaice_snowdepth_opt
  INTEGER id_id
  seaice_snowdepth_opt = model_config_rec%seaice_snowdepth_opt
  RETURN
END SUBROUTINE nl_get_seaice_snowdepth_opt
SUBROUTINE nl_get_seaice_snowdepth_max ( id_id , seaice_snowdepth_max )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: seaice_snowdepth_max
  INTEGER id_id
  seaice_snowdepth_max = model_config_rec%seaice_snowdepth_max
  RETURN
END SUBROUTINE nl_get_seaice_snowdepth_max
SUBROUTINE nl_get_seaice_snowdepth_min ( id_id , seaice_snowdepth_min )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: seaice_snowdepth_min
  INTEGER id_id
  seaice_snowdepth_min = model_config_rec%seaice_snowdepth_min
  RETURN
END SUBROUTINE nl_get_seaice_snowdepth_min
SUBROUTINE nl_get_seaice_albedo_opt ( id_id , seaice_albedo_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: seaice_albedo_opt
  INTEGER id_id
  seaice_albedo_opt = model_config_rec%seaice_albedo_opt
  RETURN
END SUBROUTINE nl_get_seaice_albedo_opt
SUBROUTINE nl_get_seaice_albedo_default ( id_id , seaice_albedo_default )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: seaice_albedo_default
  INTEGER id_id
  seaice_albedo_default = model_config_rec%seaice_albedo_default
  RETURN
END SUBROUTINE nl_get_seaice_albedo_default
SUBROUTINE nl_get_seaice_thickness_opt ( id_id , seaice_thickness_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: seaice_thickness_opt
  INTEGER id_id
  seaice_thickness_opt = model_config_rec%seaice_thickness_opt
  RETURN
END SUBROUTINE nl_get_seaice_thickness_opt
SUBROUTINE nl_get_seaice_thickness_default ( id_id , seaice_thickness_default )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: seaice_thickness_default
  INTEGER id_id
  seaice_thickness_default = model_config_rec%seaice_thickness_default
  RETURN
END SUBROUTINE nl_get_seaice_thickness_default
SUBROUTINE nl_get_tice2tsk_if2cold ( id_id , tice2tsk_if2cold )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: tice2tsk_if2cold
  INTEGER id_id
  tice2tsk_if2cold = model_config_rec%tice2tsk_if2cold
  RETURN
END SUBROUTINE nl_get_tice2tsk_if2cold
SUBROUTINE nl_get_bucket_mm ( id_id , bucket_mm )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: bucket_mm
  INTEGER id_id
  bucket_mm = model_config_rec%bucket_mm
  RETURN
END SUBROUTINE nl_get_bucket_mm
SUBROUTINE nl_get_bucket_j ( id_id , bucket_j )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: bucket_j
  INTEGER id_id
  bucket_j = model_config_rec%bucket_j
  RETURN
END SUBROUTINE nl_get_bucket_j
SUBROUTINE nl_get_mp_tend_lim ( id_id , mp_tend_lim )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: mp_tend_lim
  INTEGER id_id
  mp_tend_lim = model_config_rec%mp_tend_lim
  RETURN
END SUBROUTINE nl_get_mp_tend_lim
SUBROUTINE nl_get_prec_acc_dt ( id_id , prec_acc_dt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: prec_acc_dt
  INTEGER id_id
  prec_acc_dt = model_config_rec%prec_acc_dt(id_id)
  RETURN
END SUBROUTINE nl_get_prec_acc_dt
SUBROUTINE nl_get_prec_acc_opt ( id_id , prec_acc_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: prec_acc_opt
  INTEGER id_id
  prec_acc_opt = model_config_rec%prec_acc_opt
  RETURN
END SUBROUTINE nl_get_prec_acc_opt
SUBROUTINE nl_get_bucketr_opt ( id_id , bucketr_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: bucketr_opt
  INTEGER id_id
  bucketr_opt = model_config_rec%bucketr_opt
  RETURN
END SUBROUTINE nl_get_bucketr_opt
SUBROUTINE nl_get_process_time_series ( id_id , process_time_series )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: process_time_series
  INTEGER id_id
  process_time_series = model_config_rec%process_time_series
  RETURN
END SUBROUTINE nl_get_process_time_series
SUBROUTINE nl_get_grav_settling ( id_id , grav_settling )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: grav_settling
  INTEGER id_id
  grav_settling = model_config_rec%grav_settling(id_id)
  RETURN
END SUBROUTINE nl_get_grav_settling
SUBROUTINE nl_get_sas_pgcon ( id_id , sas_pgcon )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: sas_pgcon
  INTEGER id_id
  sas_pgcon = model_config_rec%sas_pgcon(id_id)
  RETURN
END SUBROUTINE nl_get_sas_pgcon
SUBROUTINE nl_get_scalar_pblmix ( id_id , scalar_pblmix )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: scalar_pblmix
  INTEGER id_id
  scalar_pblmix = model_config_rec%scalar_pblmix(id_id)
  RETURN
END SUBROUTINE nl_get_scalar_pblmix
SUBROUTINE nl_get_tracer_pblmix ( id_id , tracer_pblmix )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: tracer_pblmix
  INTEGER id_id
  tracer_pblmix = model_config_rec%tracer_pblmix(id_id)
  RETURN
END SUBROUTINE nl_get_tracer_pblmix
SUBROUTINE nl_get_use_aero_icbc ( id_id , use_aero_icbc )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: use_aero_icbc
  INTEGER id_id
  use_aero_icbc = model_config_rec%use_aero_icbc
  RETURN
END SUBROUTINE nl_get_use_aero_icbc
SUBROUTINE nl_get_ccn_conc ( id_id , ccn_conc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: ccn_conc
  INTEGER id_id
  ccn_conc = model_config_rec%ccn_conc
  RETURN
END SUBROUTINE nl_get_ccn_conc
SUBROUTINE nl_get_hail_opt ( id_id , hail_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: hail_opt
  INTEGER id_id
  hail_opt = model_config_rec%hail_opt
  RETURN
END SUBROUTINE nl_get_hail_opt
SUBROUTINE nl_get_dveg ( id_id , dveg )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: dveg
  INTEGER id_id
  dveg = model_config_rec%dveg
  RETURN
END SUBROUTINE nl_get_dveg
SUBROUTINE nl_get_opt_crs ( id_id , opt_crs )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_crs
  INTEGER id_id
  opt_crs = model_config_rec%opt_crs
  RETURN
END SUBROUTINE nl_get_opt_crs
SUBROUTINE nl_get_opt_btr ( id_id , opt_btr )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_btr
  INTEGER id_id
  opt_btr = model_config_rec%opt_btr
  RETURN
END SUBROUTINE nl_get_opt_btr
SUBROUTINE nl_get_opt_run ( id_id , opt_run )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_run
  INTEGER id_id
  opt_run = model_config_rec%opt_run
  RETURN
END SUBROUTINE nl_get_opt_run
SUBROUTINE nl_get_opt_sfc ( id_id , opt_sfc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_sfc
  INTEGER id_id
  opt_sfc = model_config_rec%opt_sfc
  RETURN
END SUBROUTINE nl_get_opt_sfc
SUBROUTINE nl_get_opt_frz ( id_id , opt_frz )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_frz
  INTEGER id_id
  opt_frz = model_config_rec%opt_frz
  RETURN
END SUBROUTINE nl_get_opt_frz
SUBROUTINE nl_get_opt_inf ( id_id , opt_inf )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_inf
  INTEGER id_id
  opt_inf = model_config_rec%opt_inf
  RETURN
END SUBROUTINE nl_get_opt_inf
SUBROUTINE nl_get_opt_rad ( id_id , opt_rad )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_rad
  INTEGER id_id
  opt_rad = model_config_rec%opt_rad
  RETURN
END SUBROUTINE nl_get_opt_rad
SUBROUTINE nl_get_opt_alb ( id_id , opt_alb )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_alb
  INTEGER id_id
  opt_alb = model_config_rec%opt_alb
  RETURN
END SUBROUTINE nl_get_opt_alb
SUBROUTINE nl_get_opt_snf ( id_id , opt_snf )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_snf
  INTEGER id_id
  opt_snf = model_config_rec%opt_snf
  RETURN
END SUBROUTINE nl_get_opt_snf
SUBROUTINE nl_get_opt_tbot ( id_id , opt_tbot )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_tbot
  INTEGER id_id
  opt_tbot = model_config_rec%opt_tbot
  RETURN
END SUBROUTINE nl_get_opt_tbot
SUBROUTINE nl_get_opt_stc ( id_id , opt_stc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: opt_stc
  INTEGER id_id
  opt_stc = model_config_rec%opt_stc
  RETURN
END SUBROUTINE nl_get_opt_stc
SUBROUTINE nl_get_wtddt ( id_id , wtddt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: wtddt
  INTEGER id_id
  wtddt = model_config_rec%wtddt(id_id)
  RETURN
END SUBROUTINE nl_get_wtddt
SUBROUTINE nl_get_wrf_hydro ( id_id , wrf_hydro )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: wrf_hydro
  INTEGER id_id
  wrf_hydro = model_config_rec%wrf_hydro
  RETURN
END SUBROUTINE nl_get_wrf_hydro
SUBROUTINE nl_get_fgdt ( id_id , fgdt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: fgdt
  INTEGER id_id
  fgdt = model_config_rec%fgdt(id_id)
  RETURN
END SUBROUTINE nl_get_fgdt
SUBROUTINE nl_get_fgdtzero ( id_id , fgdtzero )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: fgdtzero
  INTEGER id_id
  fgdtzero = model_config_rec%fgdtzero(id_id)
  RETURN
END SUBROUTINE nl_get_fgdtzero
SUBROUTINE nl_get_grid_fdda ( id_id , grid_fdda )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: grid_fdda
  INTEGER id_id
  grid_fdda = model_config_rec%grid_fdda(id_id)
  RETURN
END SUBROUTINE nl_get_grid_fdda
SUBROUTINE nl_get_grid_sfdda ( id_id , grid_sfdda )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: grid_sfdda
  INTEGER id_id
  grid_sfdda = model_config_rec%grid_sfdda(id_id)
  RETURN
END SUBROUTINE nl_get_grid_sfdda
SUBROUTINE nl_get_if_no_pbl_nudging_uv ( id_id , if_no_pbl_nudging_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: if_no_pbl_nudging_uv
  INTEGER id_id
  if_no_pbl_nudging_uv = model_config_rec%if_no_pbl_nudging_uv(id_id)
  RETURN
END SUBROUTINE nl_get_if_no_pbl_nudging_uv
SUBROUTINE nl_get_if_no_pbl_nudging_t ( id_id , if_no_pbl_nudging_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: if_no_pbl_nudging_t
  INTEGER id_id
  if_no_pbl_nudging_t = model_config_rec%if_no_pbl_nudging_t(id_id)
  RETURN
END SUBROUTINE nl_get_if_no_pbl_nudging_t
SUBROUTINE nl_get_if_no_pbl_nudging_ph ( id_id , if_no_pbl_nudging_ph )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: if_no_pbl_nudging_ph
  INTEGER id_id
  if_no_pbl_nudging_ph = model_config_rec%if_no_pbl_nudging_ph(id_id)
  RETURN
END SUBROUTINE nl_get_if_no_pbl_nudging_ph
SUBROUTINE nl_get_if_no_pbl_nudging_q ( id_id , if_no_pbl_nudging_q )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: if_no_pbl_nudging_q
  INTEGER id_id
  if_no_pbl_nudging_q = model_config_rec%if_no_pbl_nudging_q(id_id)
  RETURN
END SUBROUTINE nl_get_if_no_pbl_nudging_q
SUBROUTINE nl_get_if_zfac_uv ( id_id , if_zfac_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: if_zfac_uv
  INTEGER id_id
  if_zfac_uv = model_config_rec%if_zfac_uv(id_id)
  RETURN
END SUBROUTINE nl_get_if_zfac_uv
SUBROUTINE nl_get_k_zfac_uv ( id_id , k_zfac_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: k_zfac_uv
  INTEGER id_id
  k_zfac_uv = model_config_rec%k_zfac_uv(id_id)
  RETURN
END SUBROUTINE nl_get_k_zfac_uv
SUBROUTINE nl_get_if_zfac_t ( id_id , if_zfac_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: if_zfac_t
  INTEGER id_id
  if_zfac_t = model_config_rec%if_zfac_t(id_id)
  RETURN
END SUBROUTINE nl_get_if_zfac_t
SUBROUTINE nl_get_k_zfac_t ( id_id , k_zfac_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: k_zfac_t
  INTEGER id_id
  k_zfac_t = model_config_rec%k_zfac_t(id_id)
  RETURN
END SUBROUTINE nl_get_k_zfac_t
SUBROUTINE nl_get_if_zfac_ph ( id_id , if_zfac_ph )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: if_zfac_ph
  INTEGER id_id
  if_zfac_ph = model_config_rec%if_zfac_ph(id_id)
  RETURN
END SUBROUTINE nl_get_if_zfac_ph
SUBROUTINE nl_get_k_zfac_ph ( id_id , k_zfac_ph )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: k_zfac_ph
  INTEGER id_id
  k_zfac_ph = model_config_rec%k_zfac_ph(id_id)
  RETURN
END SUBROUTINE nl_get_k_zfac_ph
SUBROUTINE nl_get_if_zfac_q ( id_id , if_zfac_q )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: if_zfac_q
  INTEGER id_id
  if_zfac_q = model_config_rec%if_zfac_q(id_id)
  RETURN
END SUBROUTINE nl_get_if_zfac_q
SUBROUTINE nl_get_k_zfac_q ( id_id , k_zfac_q )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: k_zfac_q
  INTEGER id_id
  k_zfac_q = model_config_rec%k_zfac_q(id_id)
  RETURN
END SUBROUTINE nl_get_k_zfac_q
SUBROUTINE nl_get_dk_zfac_uv ( id_id , dk_zfac_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: dk_zfac_uv
  INTEGER id_id
  dk_zfac_uv = model_config_rec%dk_zfac_uv(id_id)
  RETURN
END SUBROUTINE nl_get_dk_zfac_uv
SUBROUTINE nl_get_dk_zfac_t ( id_id , dk_zfac_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: dk_zfac_t
  INTEGER id_id
  dk_zfac_t = model_config_rec%dk_zfac_t(id_id)
  RETURN
END SUBROUTINE nl_get_dk_zfac_t
SUBROUTINE nl_get_dk_zfac_ph ( id_id , dk_zfac_ph )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: dk_zfac_ph
  INTEGER id_id
  dk_zfac_ph = model_config_rec%dk_zfac_ph(id_id)
  RETURN
END SUBROUTINE nl_get_dk_zfac_ph
SUBROUTINE nl_get_guv ( id_id , guv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: guv
  INTEGER id_id
  guv = model_config_rec%guv(id_id)
  RETURN
END SUBROUTINE nl_get_guv
SUBROUTINE nl_get_guv_sfc ( id_id , guv_sfc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: guv_sfc
  INTEGER id_id
  guv_sfc = model_config_rec%guv_sfc(id_id)
  RETURN
END SUBROUTINE nl_get_guv_sfc
SUBROUTINE nl_get_gt ( id_id , gt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: gt
  INTEGER id_id
  gt = model_config_rec%gt(id_id)
  RETURN
END SUBROUTINE nl_get_gt
SUBROUTINE nl_get_gt_sfc ( id_id , gt_sfc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: gt_sfc
  INTEGER id_id
  gt_sfc = model_config_rec%gt_sfc(id_id)
  RETURN
END SUBROUTINE nl_get_gt_sfc
SUBROUTINE nl_get_gq ( id_id , gq )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: gq
  INTEGER id_id
  gq = model_config_rec%gq(id_id)
  RETURN
END SUBROUTINE nl_get_gq
SUBROUTINE nl_get_gq_sfc ( id_id , gq_sfc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: gq_sfc
  INTEGER id_id
  gq_sfc = model_config_rec%gq_sfc(id_id)
  RETURN
END SUBROUTINE nl_get_gq_sfc
SUBROUTINE nl_get_gph ( id_id , gph )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: gph
  INTEGER id_id
  gph = model_config_rec%gph(id_id)
  RETURN
END SUBROUTINE nl_get_gph
SUBROUTINE nl_get_dtramp_min ( id_id , dtramp_min )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: dtramp_min
  INTEGER id_id
  dtramp_min = model_config_rec%dtramp_min
  RETURN
END SUBROUTINE nl_get_dtramp_min
SUBROUTINE nl_get_if_ramping ( id_id , if_ramping )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: if_ramping
  INTEGER id_id
  if_ramping = model_config_rec%if_ramping
  RETURN
END SUBROUTINE nl_get_if_ramping
SUBROUTINE nl_get_rinblw ( id_id , rinblw )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: rinblw
  INTEGER id_id
  rinblw = model_config_rec%rinblw
  RETURN
END SUBROUTINE nl_get_rinblw
SUBROUTINE nl_get_xwavenum ( id_id , xwavenum )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: xwavenum
  INTEGER id_id
  xwavenum = model_config_rec%xwavenum(id_id)
  RETURN
END SUBROUTINE nl_get_xwavenum
SUBROUTINE nl_get_ywavenum ( id_id , ywavenum )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: ywavenum
  INTEGER id_id
  ywavenum = model_config_rec%ywavenum(id_id)
  RETURN
END SUBROUTINE nl_get_ywavenum
SUBROUTINE nl_get_pxlsm_soil_nudge ( id_id , pxlsm_soil_nudge )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: pxlsm_soil_nudge
  INTEGER id_id
  pxlsm_soil_nudge = model_config_rec%pxlsm_soil_nudge(id_id)
  RETURN
END SUBROUTINE nl_get_pxlsm_soil_nudge
SUBROUTINE nl_get_obs_nudge_opt ( id_id , obs_nudge_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_nudge_opt
  INTEGER id_id
  obs_nudge_opt = model_config_rec%obs_nudge_opt(id_id)
  RETURN
END SUBROUTINE nl_get_obs_nudge_opt
SUBROUTINE nl_get_max_obs ( id_id , max_obs )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: max_obs
  INTEGER id_id
  max_obs = model_config_rec%max_obs
  RETURN
END SUBROUTINE nl_get_max_obs
SUBROUTINE nl_get_fdda_start ( id_id , fdda_start )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: fdda_start
  INTEGER id_id
  fdda_start = model_config_rec%fdda_start(id_id)
  RETURN
END SUBROUTINE nl_get_fdda_start
SUBROUTINE nl_get_fdda_end ( id_id , fdda_end )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: fdda_end
  INTEGER id_id
  fdda_end = model_config_rec%fdda_end(id_id)
  RETURN
END SUBROUTINE nl_get_fdda_end
SUBROUTINE nl_get_obs_nudge_wind ( id_id , obs_nudge_wind )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_nudge_wind
  INTEGER id_id
  obs_nudge_wind = model_config_rec%obs_nudge_wind(id_id)
  RETURN
END SUBROUTINE nl_get_obs_nudge_wind
SUBROUTINE nl_get_obs_coef_wind ( id_id , obs_coef_wind )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_coef_wind
  INTEGER id_id
  obs_coef_wind = model_config_rec%obs_coef_wind(id_id)
  RETURN
END SUBROUTINE nl_get_obs_coef_wind
SUBROUTINE nl_get_obs_nudge_temp ( id_id , obs_nudge_temp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_nudge_temp
  INTEGER id_id
  obs_nudge_temp = model_config_rec%obs_nudge_temp(id_id)
  RETURN
END SUBROUTINE nl_get_obs_nudge_temp
SUBROUTINE nl_get_obs_coef_temp ( id_id , obs_coef_temp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_coef_temp
  INTEGER id_id
  obs_coef_temp = model_config_rec%obs_coef_temp(id_id)
  RETURN
END SUBROUTINE nl_get_obs_coef_temp
SUBROUTINE nl_get_obs_nudge_mois ( id_id , obs_nudge_mois )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_nudge_mois
  INTEGER id_id
  obs_nudge_mois = model_config_rec%obs_nudge_mois(id_id)
  RETURN
END SUBROUTINE nl_get_obs_nudge_mois
SUBROUTINE nl_get_obs_coef_mois ( id_id , obs_coef_mois )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_coef_mois
  INTEGER id_id
  obs_coef_mois = model_config_rec%obs_coef_mois(id_id)
  RETURN
END SUBROUTINE nl_get_obs_coef_mois
SUBROUTINE nl_get_obs_nudge_pstr ( id_id , obs_nudge_pstr )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_nudge_pstr
  INTEGER id_id
  obs_nudge_pstr = model_config_rec%obs_nudge_pstr(id_id)
  RETURN
END SUBROUTINE nl_get_obs_nudge_pstr
SUBROUTINE nl_get_obs_coef_pstr ( id_id , obs_coef_pstr )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_coef_pstr
  INTEGER id_id
  obs_coef_pstr = model_config_rec%obs_coef_pstr(id_id)
  RETURN
END SUBROUTINE nl_get_obs_coef_pstr
SUBROUTINE nl_get_obs_no_pbl_nudge_uv ( id_id , obs_no_pbl_nudge_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_no_pbl_nudge_uv
  INTEGER id_id
  obs_no_pbl_nudge_uv = model_config_rec%obs_no_pbl_nudge_uv(id_id)
  RETURN
END SUBROUTINE nl_get_obs_no_pbl_nudge_uv
SUBROUTINE nl_get_obs_no_pbl_nudge_t ( id_id , obs_no_pbl_nudge_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_no_pbl_nudge_t
  INTEGER id_id
  obs_no_pbl_nudge_t = model_config_rec%obs_no_pbl_nudge_t(id_id)
  RETURN
END SUBROUTINE nl_get_obs_no_pbl_nudge_t
SUBROUTINE nl_get_obs_no_pbl_nudge_q ( id_id , obs_no_pbl_nudge_q )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_no_pbl_nudge_q
  INTEGER id_id
  obs_no_pbl_nudge_q = model_config_rec%obs_no_pbl_nudge_q(id_id)
  RETURN
END SUBROUTINE nl_get_obs_no_pbl_nudge_q
SUBROUTINE nl_get_obs_sfc_scheme_horiz ( id_id , obs_sfc_scheme_horiz )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_sfc_scheme_horiz
  INTEGER id_id
  obs_sfc_scheme_horiz = model_config_rec%obs_sfc_scheme_horiz
  RETURN
END SUBROUTINE nl_get_obs_sfc_scheme_horiz
SUBROUTINE nl_get_obs_sfc_scheme_vert ( id_id , obs_sfc_scheme_vert )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_sfc_scheme_vert
  INTEGER id_id
  obs_sfc_scheme_vert = model_config_rec%obs_sfc_scheme_vert
  RETURN
END SUBROUTINE nl_get_obs_sfc_scheme_vert
SUBROUTINE nl_get_obs_max_sndng_gap ( id_id , obs_max_sndng_gap )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_max_sndng_gap
  INTEGER id_id
  obs_max_sndng_gap = model_config_rec%obs_max_sndng_gap
  RETURN
END SUBROUTINE nl_get_obs_max_sndng_gap
SUBROUTINE nl_get_obs_nudgezfullr1_uv ( id_id , obs_nudgezfullr1_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullr1_uv
  INTEGER id_id
  obs_nudgezfullr1_uv = model_config_rec%obs_nudgezfullr1_uv
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullr1_uv
SUBROUTINE nl_get_obs_nudgezrampr1_uv ( id_id , obs_nudgezrampr1_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampr1_uv
  INTEGER id_id
  obs_nudgezrampr1_uv = model_config_rec%obs_nudgezrampr1_uv
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampr1_uv
SUBROUTINE nl_get_obs_nudgezfullr2_uv ( id_id , obs_nudgezfullr2_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullr2_uv
  INTEGER id_id
  obs_nudgezfullr2_uv = model_config_rec%obs_nudgezfullr2_uv
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullr2_uv
SUBROUTINE nl_get_obs_nudgezrampr2_uv ( id_id , obs_nudgezrampr2_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampr2_uv
  INTEGER id_id
  obs_nudgezrampr2_uv = model_config_rec%obs_nudgezrampr2_uv
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampr2_uv
SUBROUTINE nl_get_obs_nudgezfullr4_uv ( id_id , obs_nudgezfullr4_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullr4_uv
  INTEGER id_id
  obs_nudgezfullr4_uv = model_config_rec%obs_nudgezfullr4_uv
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullr4_uv
SUBROUTINE nl_get_obs_nudgezrampr4_uv ( id_id , obs_nudgezrampr4_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampr4_uv
  INTEGER id_id
  obs_nudgezrampr4_uv = model_config_rec%obs_nudgezrampr4_uv
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampr4_uv
SUBROUTINE nl_get_obs_nudgezfullr1_t ( id_id , obs_nudgezfullr1_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullr1_t
  INTEGER id_id
  obs_nudgezfullr1_t = model_config_rec%obs_nudgezfullr1_t
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullr1_t
SUBROUTINE nl_get_obs_nudgezrampr1_t ( id_id , obs_nudgezrampr1_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampr1_t
  INTEGER id_id
  obs_nudgezrampr1_t = model_config_rec%obs_nudgezrampr1_t
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampr1_t
SUBROUTINE nl_get_obs_nudgezfullr2_t ( id_id , obs_nudgezfullr2_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullr2_t
  INTEGER id_id
  obs_nudgezfullr2_t = model_config_rec%obs_nudgezfullr2_t
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullr2_t
SUBROUTINE nl_get_obs_nudgezrampr2_t ( id_id , obs_nudgezrampr2_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampr2_t
  INTEGER id_id
  obs_nudgezrampr2_t = model_config_rec%obs_nudgezrampr2_t
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampr2_t
SUBROUTINE nl_get_obs_nudgezfullr4_t ( id_id , obs_nudgezfullr4_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullr4_t
  INTEGER id_id
  obs_nudgezfullr4_t = model_config_rec%obs_nudgezfullr4_t
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullr4_t
SUBROUTINE nl_get_obs_nudgezrampr4_t ( id_id , obs_nudgezrampr4_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampr4_t
  INTEGER id_id
  obs_nudgezrampr4_t = model_config_rec%obs_nudgezrampr4_t
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampr4_t
SUBROUTINE nl_get_obs_nudgezfullr1_q ( id_id , obs_nudgezfullr1_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullr1_q
  INTEGER id_id
  obs_nudgezfullr1_q = model_config_rec%obs_nudgezfullr1_q
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullr1_q
SUBROUTINE nl_get_obs_nudgezrampr1_q ( id_id , obs_nudgezrampr1_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampr1_q
  INTEGER id_id
  obs_nudgezrampr1_q = model_config_rec%obs_nudgezrampr1_q
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampr1_q
SUBROUTINE nl_get_obs_nudgezfullr2_q ( id_id , obs_nudgezfullr2_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullr2_q
  INTEGER id_id
  obs_nudgezfullr2_q = model_config_rec%obs_nudgezfullr2_q
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullr2_q
SUBROUTINE nl_get_obs_nudgezrampr2_q ( id_id , obs_nudgezrampr2_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampr2_q
  INTEGER id_id
  obs_nudgezrampr2_q = model_config_rec%obs_nudgezrampr2_q
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampr2_q
SUBROUTINE nl_get_obs_nudgezfullr4_q ( id_id , obs_nudgezfullr4_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullr4_q
  INTEGER id_id
  obs_nudgezfullr4_q = model_config_rec%obs_nudgezfullr4_q
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullr4_q
SUBROUTINE nl_get_obs_nudgezrampr4_q ( id_id , obs_nudgezrampr4_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampr4_q
  INTEGER id_id
  obs_nudgezrampr4_q = model_config_rec%obs_nudgezrampr4_q
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampr4_q
SUBROUTINE nl_get_obs_nudgezfullmin ( id_id , obs_nudgezfullmin )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezfullmin
  INTEGER id_id
  obs_nudgezfullmin = model_config_rec%obs_nudgezfullmin
  RETURN
END SUBROUTINE nl_get_obs_nudgezfullmin
SUBROUTINE nl_get_obs_nudgezrampmin ( id_id , obs_nudgezrampmin )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezrampmin
  INTEGER id_id
  obs_nudgezrampmin = model_config_rec%obs_nudgezrampmin
  RETURN
END SUBROUTINE nl_get_obs_nudgezrampmin
SUBROUTINE nl_get_obs_nudgezmax ( id_id , obs_nudgezmax )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_nudgezmax
  INTEGER id_id
  obs_nudgezmax = model_config_rec%obs_nudgezmax
  RETURN
END SUBROUTINE nl_get_obs_nudgezmax
SUBROUTINE nl_get_obs_sfcfact ( id_id , obs_sfcfact )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_sfcfact
  INTEGER id_id
  obs_sfcfact = model_config_rec%obs_sfcfact
  RETURN
END SUBROUTINE nl_get_obs_sfcfact
SUBROUTINE nl_get_obs_sfcfacr ( id_id , obs_sfcfacr )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_sfcfacr
  INTEGER id_id
  obs_sfcfacr = model_config_rec%obs_sfcfacr
  RETURN
END SUBROUTINE nl_get_obs_sfcfacr
SUBROUTINE nl_get_obs_dpsmx ( id_id , obs_dpsmx )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_dpsmx
  INTEGER id_id
  obs_dpsmx = model_config_rec%obs_dpsmx
  RETURN
END SUBROUTINE nl_get_obs_dpsmx
SUBROUTINE nl_get_obs_rinxy ( id_id , obs_rinxy )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_rinxy
  INTEGER id_id
  obs_rinxy = model_config_rec%obs_rinxy(id_id)
  RETURN
END SUBROUTINE nl_get_obs_rinxy
SUBROUTINE nl_get_obs_rinsig ( id_id , obs_rinsig )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_rinsig
  INTEGER id_id
  obs_rinsig = model_config_rec%obs_rinsig
  RETURN
END SUBROUTINE nl_get_obs_rinsig
SUBROUTINE nl_get_obs_twindo ( id_id , obs_twindo )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_twindo
  INTEGER id_id
  obs_twindo = model_config_rec%obs_twindo(id_id)
  RETURN
END SUBROUTINE nl_get_obs_twindo
SUBROUTINE nl_get_obs_npfi ( id_id , obs_npfi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_npfi
  INTEGER id_id
  obs_npfi = model_config_rec%obs_npfi
  RETURN
END SUBROUTINE nl_get_obs_npfi
SUBROUTINE nl_get_obs_ionf ( id_id , obs_ionf )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_ionf
  INTEGER id_id
  obs_ionf = model_config_rec%obs_ionf(id_id)
  RETURN
END SUBROUTINE nl_get_obs_ionf
SUBROUTINE nl_get_obs_idynin ( id_id , obs_idynin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_idynin
  INTEGER id_id
  obs_idynin = model_config_rec%obs_idynin
  RETURN
END SUBROUTINE nl_get_obs_idynin
SUBROUTINE nl_get_obs_dtramp ( id_id , obs_dtramp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: obs_dtramp
  INTEGER id_id
  obs_dtramp = model_config_rec%obs_dtramp
  RETURN
END SUBROUTINE nl_get_obs_dtramp
SUBROUTINE nl_get_obs_prt_max ( id_id , obs_prt_max )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_prt_max
  INTEGER id_id
  obs_prt_max = model_config_rec%obs_prt_max
  RETURN
END SUBROUTINE nl_get_obs_prt_max
SUBROUTINE nl_get_obs_prt_freq ( id_id , obs_prt_freq )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_prt_freq
  INTEGER id_id
  obs_prt_freq = model_config_rec%obs_prt_freq(id_id)
  RETURN
END SUBROUTINE nl_get_obs_prt_freq
SUBROUTINE nl_get_obs_ipf_in4dob ( id_id , obs_ipf_in4dob )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: obs_ipf_in4dob
  INTEGER id_id
  obs_ipf_in4dob = model_config_rec%obs_ipf_in4dob
  RETURN
END SUBROUTINE nl_get_obs_ipf_in4dob
SUBROUTINE nl_get_obs_ipf_errob ( id_id , obs_ipf_errob )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: obs_ipf_errob
  INTEGER id_id
  obs_ipf_errob = model_config_rec%obs_ipf_errob
  RETURN
END SUBROUTINE nl_get_obs_ipf_errob
SUBROUTINE nl_get_obs_ipf_nudob ( id_id , obs_ipf_nudob )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: obs_ipf_nudob
  INTEGER id_id
  obs_ipf_nudob = model_config_rec%obs_ipf_nudob
  RETURN
END SUBROUTINE nl_get_obs_ipf_nudob
SUBROUTINE nl_get_obs_ipf_init ( id_id , obs_ipf_init )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: obs_ipf_init
  INTEGER id_id
  obs_ipf_init = model_config_rec%obs_ipf_init
  RETURN
END SUBROUTINE nl_get_obs_ipf_init
SUBROUTINE nl_get_obs_scl_neg_qv_innov ( id_id , obs_scl_neg_qv_innov )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: obs_scl_neg_qv_innov
  INTEGER id_id
  obs_scl_neg_qv_innov = model_config_rec%obs_scl_neg_qv_innov
  RETURN
END SUBROUTINE nl_get_obs_scl_neg_qv_innov
SUBROUTINE nl_get_scm_force ( id_id , scm_force )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: scm_force
  INTEGER id_id
  scm_force = model_config_rec%scm_force
  RETURN
END SUBROUTINE nl_get_scm_force
SUBROUTINE nl_get_scm_force_dx ( id_id , scm_force_dx )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: scm_force_dx
  INTEGER id_id
  scm_force_dx = model_config_rec%scm_force_dx
  RETURN
END SUBROUTINE nl_get_scm_force_dx
SUBROUTINE nl_get_num_force_layers ( id_id , num_force_layers )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: num_force_layers
  INTEGER id_id
  num_force_layers = model_config_rec%num_force_layers
  RETURN
END SUBROUTINE nl_get_num_force_layers
SUBROUTINE nl_get_scm_lu_index ( id_id , scm_lu_index )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: scm_lu_index
  INTEGER id_id
  scm_lu_index = model_config_rec%scm_lu_index
  RETURN
END SUBROUTINE nl_get_scm_lu_index
SUBROUTINE nl_get_scm_isltyp ( id_id , scm_isltyp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: scm_isltyp
  INTEGER id_id
  scm_isltyp = model_config_rec%scm_isltyp
  RETURN
END SUBROUTINE nl_get_scm_isltyp
SUBROUTINE nl_get_scm_vegfra ( id_id , scm_vegfra )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: scm_vegfra
  INTEGER id_id
  scm_vegfra = model_config_rec%scm_vegfra
  RETURN
END SUBROUTINE nl_get_scm_vegfra
SUBROUTINE nl_get_scm_canwat ( id_id , scm_canwat )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: scm_canwat
  INTEGER id_id
  scm_canwat = model_config_rec%scm_canwat
  RETURN
END SUBROUTINE nl_get_scm_canwat
SUBROUTINE nl_get_scm_lat ( id_id , scm_lat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: scm_lat
  INTEGER id_id
  scm_lat = model_config_rec%scm_lat
  RETURN
END SUBROUTINE nl_get_scm_lat
SUBROUTINE nl_get_scm_lon ( id_id , scm_lon )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: scm_lon
  INTEGER id_id
  scm_lon = model_config_rec%scm_lon
  RETURN
END SUBROUTINE nl_get_scm_lon
SUBROUTINE nl_get_scm_th_t_tend ( id_id , scm_th_t_tend )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_th_t_tend
  INTEGER id_id
  scm_th_t_tend = model_config_rec%scm_th_t_tend
  RETURN
END SUBROUTINE nl_get_scm_th_t_tend
SUBROUTINE nl_get_scm_qv_t_tend ( id_id , scm_qv_t_tend )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_qv_t_tend
  INTEGER id_id
  scm_qv_t_tend = model_config_rec%scm_qv_t_tend
  RETURN
END SUBROUTINE nl_get_scm_qv_t_tend
SUBROUTINE nl_get_scm_th_adv ( id_id , scm_th_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_th_adv
  INTEGER id_id
  scm_th_adv = model_config_rec%scm_th_adv
  RETURN
END SUBROUTINE nl_get_scm_th_adv
SUBROUTINE nl_get_scm_wind_adv ( id_id , scm_wind_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_wind_adv
  INTEGER id_id
  scm_wind_adv = model_config_rec%scm_wind_adv
  RETURN
END SUBROUTINE nl_get_scm_wind_adv
SUBROUTINE nl_get_scm_qv_adv ( id_id , scm_qv_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_qv_adv
  INTEGER id_id
  scm_qv_adv = model_config_rec%scm_qv_adv
  RETURN
END SUBROUTINE nl_get_scm_qv_adv
SUBROUTINE nl_get_scm_ql_adv ( id_id , scm_ql_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_ql_adv
  INTEGER id_id
  scm_ql_adv = model_config_rec%scm_ql_adv
  RETURN
END SUBROUTINE nl_get_scm_ql_adv
SUBROUTINE nl_get_scm_vert_adv ( id_id , scm_vert_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_vert_adv
  INTEGER id_id
  scm_vert_adv = model_config_rec%scm_vert_adv
  RETURN
END SUBROUTINE nl_get_scm_vert_adv
SUBROUTINE nl_get_num_force_soil_layers ( id_id , num_force_soil_layers )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: num_force_soil_layers
  INTEGER id_id
  num_force_soil_layers = model_config_rec%num_force_soil_layers
  RETURN
END SUBROUTINE nl_get_num_force_soil_layers
SUBROUTINE nl_get_scm_soilt_force ( id_id , scm_soilt_force )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_soilt_force
  INTEGER id_id
  scm_soilt_force = model_config_rec%scm_soilt_force
  RETURN
END SUBROUTINE nl_get_scm_soilt_force
SUBROUTINE nl_get_scm_soilq_force ( id_id , scm_soilq_force )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_soilq_force
  INTEGER id_id
  scm_soilq_force = model_config_rec%scm_soilq_force
  RETURN
END SUBROUTINE nl_get_scm_soilq_force
SUBROUTINE nl_get_scm_force_th_largescale ( id_id , scm_force_th_largescale )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_force_th_largescale
  INTEGER id_id
  scm_force_th_largescale = model_config_rec%scm_force_th_largescale
  RETURN
END SUBROUTINE nl_get_scm_force_th_largescale
SUBROUTINE nl_get_scm_force_qv_largescale ( id_id , scm_force_qv_largescale )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_force_qv_largescale
  INTEGER id_id
  scm_force_qv_largescale = model_config_rec%scm_force_qv_largescale
  RETURN
END SUBROUTINE nl_get_scm_force_qv_largescale
SUBROUTINE nl_get_scm_force_ql_largescale ( id_id , scm_force_ql_largescale )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_force_ql_largescale
  INTEGER id_id
  scm_force_ql_largescale = model_config_rec%scm_force_ql_largescale
  RETURN
END SUBROUTINE nl_get_scm_force_ql_largescale
SUBROUTINE nl_get_scm_force_wind_largescale ( id_id , scm_force_wind_largescale )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: scm_force_wind_largescale
  INTEGER id_id
  scm_force_wind_largescale = model_config_rec%scm_force_wind_largescale
  RETURN
END SUBROUTINE nl_get_scm_force_wind_largescale
SUBROUTINE nl_get_scm_force_skintemp ( id_id , scm_force_skintemp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: scm_force_skintemp
  INTEGER id_id
  scm_force_skintemp = model_config_rec%scm_force_skintemp
  RETURN
END SUBROUTINE nl_get_scm_force_skintemp
SUBROUTINE nl_get_scm_force_flux ( id_id , scm_force_flux )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: scm_force_flux
  INTEGER id_id
  scm_force_flux = model_config_rec%scm_force_flux
  RETURN
END SUBROUTINE nl_get_scm_force_flux
SUBROUTINE nl_get_dyn_opt ( id_id , dyn_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: dyn_opt
  INTEGER id_id
  dyn_opt = model_config_rec%dyn_opt
  RETURN
END SUBROUTINE nl_get_dyn_opt
SUBROUTINE nl_get_rk_ord ( id_id , rk_ord )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: rk_ord
  INTEGER id_id
  rk_ord = model_config_rec%rk_ord
  RETURN
END SUBROUTINE nl_get_rk_ord
SUBROUTINE nl_get_w_damping ( id_id , w_damping )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: w_damping
  INTEGER id_id
  w_damping = model_config_rec%w_damping
  RETURN
END SUBROUTINE nl_get_w_damping
SUBROUTINE nl_get_diff_opt ( id_id , diff_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: diff_opt
  INTEGER id_id
  diff_opt = model_config_rec%diff_opt(id_id)
  RETURN
END SUBROUTINE nl_get_diff_opt
SUBROUTINE nl_get_diff_opt_dfi ( id_id , diff_opt_dfi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: diff_opt_dfi
  INTEGER id_id
  diff_opt_dfi = model_config_rec%diff_opt_dfi(id_id)
  RETURN
END SUBROUTINE nl_get_diff_opt_dfi
SUBROUTINE nl_get_km_opt ( id_id , km_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: km_opt
  INTEGER id_id
  km_opt = model_config_rec%km_opt(id_id)
  RETURN
END SUBROUTINE nl_get_km_opt
SUBROUTINE nl_get_km_opt_dfi ( id_id , km_opt_dfi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: km_opt_dfi
  INTEGER id_id
  km_opt_dfi = model_config_rec%km_opt_dfi(id_id)
  RETURN
END SUBROUTINE nl_get_km_opt_dfi
SUBROUTINE nl_get_damp_opt ( id_id , damp_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: damp_opt
  INTEGER id_id
  damp_opt = model_config_rec%damp_opt
  RETURN
END SUBROUTINE nl_get_damp_opt
SUBROUTINE nl_get_rad_nudge ( id_id , rad_nudge )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: rad_nudge
  INTEGER id_id
  rad_nudge = model_config_rec%rad_nudge
  RETURN
END SUBROUTINE nl_get_rad_nudge
SUBROUTINE nl_get_gwd_opt ( id_id , gwd_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: gwd_opt
  INTEGER id_id
  gwd_opt = model_config_rec%gwd_opt
  RETURN
END SUBROUTINE nl_get_gwd_opt
SUBROUTINE nl_get_zdamp ( id_id , zdamp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: zdamp
  INTEGER id_id
  zdamp = model_config_rec%zdamp(id_id)
  RETURN
END SUBROUTINE nl_get_zdamp
SUBROUTINE nl_get_dampcoef ( id_id , dampcoef )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: dampcoef
  INTEGER id_id
  dampcoef = model_config_rec%dampcoef(id_id)
  RETURN
END SUBROUTINE nl_get_dampcoef
SUBROUTINE nl_get_khdif ( id_id , khdif )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: khdif
  INTEGER id_id
  khdif = model_config_rec%khdif(id_id)
  RETURN
END SUBROUTINE nl_get_khdif
SUBROUTINE nl_get_kvdif ( id_id , kvdif )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: kvdif
  INTEGER id_id
  kvdif = model_config_rec%kvdif(id_id)
  RETURN
END SUBROUTINE nl_get_kvdif
SUBROUTINE nl_get_diff_6th_factor ( id_id , diff_6th_factor )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: diff_6th_factor
  INTEGER id_id
  diff_6th_factor = model_config_rec%diff_6th_factor(id_id)
  RETURN
END SUBROUTINE nl_get_diff_6th_factor
SUBROUTINE nl_get_diff_6th_opt ( id_id , diff_6th_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: diff_6th_opt
  INTEGER id_id
  diff_6th_opt = model_config_rec%diff_6th_opt(id_id)
  RETURN
END SUBROUTINE nl_get_diff_6th_opt
SUBROUTINE nl_get_c_s ( id_id , c_s )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: c_s
  INTEGER id_id
  c_s = model_config_rec%c_s(id_id)
  RETURN
END SUBROUTINE nl_get_c_s
SUBROUTINE nl_get_c_k ( id_id , c_k )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: c_k
  INTEGER id_id
  c_k = model_config_rec%c_k(id_id)
  RETURN
END SUBROUTINE nl_get_c_k
SUBROUTINE nl_get_smdiv ( id_id , smdiv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: smdiv
  INTEGER id_id
  smdiv = model_config_rec%smdiv(id_id)
  RETURN
END SUBROUTINE nl_get_smdiv
SUBROUTINE nl_get_emdiv ( id_id , emdiv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: emdiv
  INTEGER id_id
  emdiv = model_config_rec%emdiv(id_id)
  RETURN
END SUBROUTINE nl_get_emdiv
SUBROUTINE nl_get_epssm ( id_id , epssm )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(OUT) :: epssm
  INTEGER id_id
  epssm = model_config_rec%epssm(id_id)
  RETURN
END SUBROUTINE nl_get_epssm
SUBROUTINE nl_get_non_hydrostatic ( id_id , non_hydrostatic )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: non_hydrostatic
  INTEGER id_id
  non_hydrostatic = model_config_rec%non_hydrostatic(id_id)
  RETURN
END SUBROUTINE nl_get_non_hydrostatic
SUBROUTINE nl_get_use_input_w ( id_id , use_input_w )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(OUT) :: use_input_w
  INTEGER id_id
  use_input_w = model_config_rec%use_input_w
  RETURN
END SUBROUTINE nl_get_use_input_w
SUBROUTINE nl_get_time_step_sound ( id_id , time_step_sound )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: time_step_sound
  INTEGER id_id
  time_step_sound = model_config_rec%time_step_sound(id_id)
  RETURN
END SUBROUTINE nl_get_time_step_sound
SUBROUTINE nl_get_h_mom_adv_order ( id_id , h_mom_adv_order )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: h_mom_adv_order
  INTEGER id_id
  h_mom_adv_order = model_config_rec%h_mom_adv_order(id_id)
  RETURN
END SUBROUTINE nl_get_h_mom_adv_order
SUBROUTINE nl_get_v_mom_adv_order ( id_id , v_mom_adv_order )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: v_mom_adv_order
  INTEGER id_id
  v_mom_adv_order = model_config_rec%v_mom_adv_order(id_id)
  RETURN
END SUBROUTINE nl_get_v_mom_adv_order
SUBROUTINE nl_get_h_sca_adv_order ( id_id , h_sca_adv_order )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: h_sca_adv_order
  INTEGER id_id
  h_sca_adv_order = model_config_rec%h_sca_adv_order(id_id)
  RETURN
END SUBROUTINE nl_get_h_sca_adv_order
SUBROUTINE nl_get_v_sca_adv_order ( id_id , v_sca_adv_order )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: v_sca_adv_order
  INTEGER id_id
  v_sca_adv_order = model_config_rec%v_sca_adv_order(id_id)
  RETURN
END SUBROUTINE nl_get_v_sca_adv_order
SUBROUTINE nl_get_momentum_adv_opt ( id_id , momentum_adv_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: momentum_adv_opt
  INTEGER id_id
  momentum_adv_opt = model_config_rec%momentum_adv_opt(id_id)
  RETURN
END SUBROUTINE nl_get_momentum_adv_opt
SUBROUTINE nl_get_moist_adv_opt ( id_id , moist_adv_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: moist_adv_opt
  INTEGER id_id
  moist_adv_opt = model_config_rec%moist_adv_opt(id_id)
  RETURN
END SUBROUTINE nl_get_moist_adv_opt
SUBROUTINE nl_get_moist_adv_dfi_opt ( id_id , moist_adv_dfi_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: moist_adv_dfi_opt
  INTEGER id_id
  moist_adv_dfi_opt = model_config_rec%moist_adv_dfi_opt(id_id)
  RETURN
END SUBROUTINE nl_get_moist_adv_dfi_opt
SUBROUTINE nl_get_chem_adv_opt ( id_id , chem_adv_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(OUT) :: chem_adv_opt
  INTEGER id_id
  chem_adv_opt = model_config_rec%chem_adv_opt(id_id)
  RETURN
END SUBROUTINE nl_get_chem_adv_opt
!ENDOFREGISTRYGENERATEDINCLUDE
