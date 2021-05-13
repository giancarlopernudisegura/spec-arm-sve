!STARTOFREGISTRYGENERATEDINCLUDE 'inc/nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit. Your changes to this file will be lost.
!
SUBROUTINE nl_set_maxens2 ( id_id , maxens2 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: maxens2
  INTEGER id_id
  model_config_rec%maxens2 = maxens2
  RETURN
END SUBROUTINE nl_set_maxens2
SUBROUTINE nl_set_maxens3 ( id_id , maxens3 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: maxens3
  INTEGER id_id
  model_config_rec%maxens3 = maxens3
  RETURN
END SUBROUTINE nl_set_maxens3
SUBROUTINE nl_set_ensdim ( id_id , ensdim )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ensdim
  INTEGER id_id
  model_config_rec%ensdim = ensdim
  RETURN
END SUBROUTINE nl_set_ensdim
SUBROUTINE nl_set_cugd_avedx ( id_id , cugd_avedx )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: cugd_avedx
  INTEGER id_id
  model_config_rec%cugd_avedx = cugd_avedx
  RETURN
END SUBROUTINE nl_set_cugd_avedx
SUBROUTINE nl_set_clos_choice ( id_id , clos_choice )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: clos_choice
  INTEGER id_id
  model_config_rec%clos_choice = clos_choice
  RETURN
END SUBROUTINE nl_set_clos_choice
SUBROUTINE nl_set_imomentum ( id_id , imomentum )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: imomentum
  INTEGER id_id
  model_config_rec%imomentum = imomentum
  RETURN
END SUBROUTINE nl_set_imomentum
SUBROUTINE nl_set_ishallow ( id_id , ishallow )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ishallow
  INTEGER id_id
  model_config_rec%ishallow = ishallow
  RETURN
END SUBROUTINE nl_set_ishallow
SUBROUTINE nl_set_convtrans_avglen_m ( id_id , convtrans_avglen_m )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: convtrans_avglen_m
  INTEGER id_id
  model_config_rec%convtrans_avglen_m = convtrans_avglen_m
  RETURN
END SUBROUTINE nl_set_convtrans_avglen_m
SUBROUTINE nl_set_num_land_cat ( id_id , num_land_cat )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_land_cat
  INTEGER id_id
  model_config_rec%num_land_cat = num_land_cat
  RETURN
END SUBROUTINE nl_set_num_land_cat
SUBROUTINE nl_set_num_soil_cat ( id_id , num_soil_cat )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_soil_cat
  INTEGER id_id
  model_config_rec%num_soil_cat = num_soil_cat
  RETURN
END SUBROUTINE nl_set_num_soil_cat
SUBROUTINE nl_set_mp_zero_out ( id_id , mp_zero_out )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: mp_zero_out
  INTEGER id_id
  model_config_rec%mp_zero_out = mp_zero_out
  RETURN
END SUBROUTINE nl_set_mp_zero_out
SUBROUTINE nl_set_mp_zero_out_thresh ( id_id , mp_zero_out_thresh )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: mp_zero_out_thresh
  INTEGER id_id
  model_config_rec%mp_zero_out_thresh = mp_zero_out_thresh
  RETURN
END SUBROUTINE nl_set_mp_zero_out_thresh
SUBROUTINE nl_set_seaice_threshold ( id_id , seaice_threshold )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: seaice_threshold
  INTEGER id_id
  model_config_rec%seaice_threshold = seaice_threshold
  RETURN
END SUBROUTINE nl_set_seaice_threshold
SUBROUTINE nl_set_sst_update ( id_id , sst_update )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sst_update
  INTEGER id_id
  model_config_rec%sst_update = sst_update
  RETURN
END SUBROUTINE nl_set_sst_update
SUBROUTINE nl_set_sst_skin ( id_id , sst_skin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sst_skin
  INTEGER id_id
  model_config_rec%sst_skin = sst_skin
  RETURN
END SUBROUTINE nl_set_sst_skin
SUBROUTINE nl_set_tmn_update ( id_id , tmn_update )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tmn_update
  INTEGER id_id
  model_config_rec%tmn_update = tmn_update
  RETURN
END SUBROUTINE nl_set_tmn_update
SUBROUTINE nl_set_usemonalb ( id_id , usemonalb )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: usemonalb
  INTEGER id_id
  model_config_rec%usemonalb = usemonalb
  RETURN
END SUBROUTINE nl_set_usemonalb
SUBROUTINE nl_set_rdmaxalb ( id_id , rdmaxalb )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: rdmaxalb
  INTEGER id_id
  model_config_rec%rdmaxalb = rdmaxalb
  RETURN
END SUBROUTINE nl_set_rdmaxalb
SUBROUTINE nl_set_rdlai2d ( id_id , rdlai2d )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: rdlai2d
  INTEGER id_id
  model_config_rec%rdlai2d = rdlai2d
  RETURN
END SUBROUTINE nl_set_rdlai2d
SUBROUTINE nl_set_ua_phys ( id_id , ua_phys )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: ua_phys
  INTEGER id_id
  model_config_rec%ua_phys = ua_phys
  RETURN
END SUBROUTINE nl_set_ua_phys
SUBROUTINE nl_set_co2tf ( id_id , co2tf )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: co2tf
  INTEGER id_id
  model_config_rec%co2tf = co2tf
  RETURN
END SUBROUTINE nl_set_co2tf
SUBROUTINE nl_set_ra_call_offset ( id_id , ra_call_offset )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ra_call_offset
  INTEGER id_id
  model_config_rec%ra_call_offset = ra_call_offset
  RETURN
END SUBROUTINE nl_set_ra_call_offset
SUBROUTINE nl_set_cam_abs_freq_s ( id_id , cam_abs_freq_s )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: cam_abs_freq_s
  INTEGER id_id
  model_config_rec%cam_abs_freq_s = cam_abs_freq_s
  RETURN
END SUBROUTINE nl_set_cam_abs_freq_s
SUBROUTINE nl_set_levsiz ( id_id , levsiz )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: levsiz
  INTEGER id_id
  model_config_rec%levsiz = levsiz
  RETURN
END SUBROUTINE nl_set_levsiz
SUBROUTINE nl_set_paerlev ( id_id , paerlev )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: paerlev
  INTEGER id_id
  model_config_rec%paerlev = paerlev
  RETURN
END SUBROUTINE nl_set_paerlev
SUBROUTINE nl_set_cam_abs_dim1 ( id_id , cam_abs_dim1 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: cam_abs_dim1
  INTEGER id_id
  model_config_rec%cam_abs_dim1 = cam_abs_dim1
  RETURN
END SUBROUTINE nl_set_cam_abs_dim1
SUBROUTINE nl_set_cam_abs_dim2 ( id_id , cam_abs_dim2 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: cam_abs_dim2
  INTEGER id_id
  model_config_rec%cam_abs_dim2 = cam_abs_dim2
  RETURN
END SUBROUTINE nl_set_cam_abs_dim2
SUBROUTINE nl_set_lagday ( id_id , lagday )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lagday
  INTEGER id_id
  model_config_rec%lagday = lagday
  RETURN
END SUBROUTINE nl_set_lagday
SUBROUTINE nl_set_no_src_types ( id_id , no_src_types )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: no_src_types
  INTEGER id_id
  model_config_rec%no_src_types = no_src_types
  RETURN
END SUBROUTINE nl_set_no_src_types
SUBROUTINE nl_set_alevsiz ( id_id , alevsiz )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: alevsiz
  INTEGER id_id
  model_config_rec%alevsiz = alevsiz
  RETURN
END SUBROUTINE nl_set_alevsiz
SUBROUTINE nl_set_o3input ( id_id , o3input )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: o3input
  INTEGER id_id
  model_config_rec%o3input = o3input
  RETURN
END SUBROUTINE nl_set_o3input
SUBROUTINE nl_set_aer_opt ( id_id , aer_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: aer_opt
  INTEGER id_id
  model_config_rec%aer_opt = aer_opt
  RETURN
END SUBROUTINE nl_set_aer_opt
SUBROUTINE nl_set_swint_opt ( id_id , swint_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: swint_opt
  INTEGER id_id
  model_config_rec%swint_opt = swint_opt
  RETURN
END SUBROUTINE nl_set_swint_opt
SUBROUTINE nl_set_aer_type ( id_id , aer_type )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: aer_type
  INTEGER id_id
  model_config_rec%aer_type(id_id) = aer_type
  RETURN
END SUBROUTINE nl_set_aer_type
SUBROUTINE nl_set_aer_aod550_opt ( id_id , aer_aod550_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: aer_aod550_opt
  INTEGER id_id
  model_config_rec%aer_aod550_opt(id_id) = aer_aod550_opt
  RETURN
END SUBROUTINE nl_set_aer_aod550_opt
SUBROUTINE nl_set_aer_angexp_opt ( id_id , aer_angexp_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: aer_angexp_opt
  INTEGER id_id
  model_config_rec%aer_angexp_opt(id_id) = aer_angexp_opt
  RETURN
END SUBROUTINE nl_set_aer_angexp_opt
SUBROUTINE nl_set_aer_ssa_opt ( id_id , aer_ssa_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: aer_ssa_opt
  INTEGER id_id
  model_config_rec%aer_ssa_opt(id_id) = aer_ssa_opt
  RETURN
END SUBROUTINE nl_set_aer_ssa_opt
SUBROUTINE nl_set_aer_asy_opt ( id_id , aer_asy_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: aer_asy_opt
  INTEGER id_id
  model_config_rec%aer_asy_opt(id_id) = aer_asy_opt
  RETURN
END SUBROUTINE nl_set_aer_asy_opt
SUBROUTINE nl_set_aer_aod550_val ( id_id , aer_aod550_val )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: aer_aod550_val
  INTEGER id_id
  model_config_rec%aer_aod550_val(id_id) = aer_aod550_val
  RETURN
END SUBROUTINE nl_set_aer_aod550_val
SUBROUTINE nl_set_aer_angexp_val ( id_id , aer_angexp_val )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: aer_angexp_val
  INTEGER id_id
  model_config_rec%aer_angexp_val(id_id) = aer_angexp_val
  RETURN
END SUBROUTINE nl_set_aer_angexp_val
SUBROUTINE nl_set_aer_ssa_val ( id_id , aer_ssa_val )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: aer_ssa_val
  INTEGER id_id
  model_config_rec%aer_ssa_val(id_id) = aer_ssa_val
  RETURN
END SUBROUTINE nl_set_aer_ssa_val
SUBROUTINE nl_set_aer_asy_val ( id_id , aer_asy_val )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: aer_asy_val
  INTEGER id_id
  model_config_rec%aer_asy_val(id_id) = aer_asy_val
  RETURN
END SUBROUTINE nl_set_aer_asy_val
SUBROUTINE nl_set_cu_rad_feedback ( id_id , cu_rad_feedback )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: cu_rad_feedback
  INTEGER id_id
  model_config_rec%cu_rad_feedback(id_id) = cu_rad_feedback
  RETURN
END SUBROUTINE nl_set_cu_rad_feedback
SUBROUTINE nl_set_icloud_cu ( id_id , icloud_cu )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: icloud_cu
  INTEGER id_id
  model_config_rec%icloud_cu = icloud_cu
  RETURN
END SUBROUTINE nl_set_icloud_cu
SUBROUTINE nl_set_pxlsm_smois_init ( id_id , pxlsm_smois_init )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: pxlsm_smois_init
  INTEGER id_id
  model_config_rec%pxlsm_smois_init(id_id) = pxlsm_smois_init
  RETURN
END SUBROUTINE nl_set_pxlsm_smois_init
SUBROUTINE nl_set_omlcall ( id_id , omlcall )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: omlcall
  INTEGER id_id
  model_config_rec%omlcall = omlcall
  RETURN
END SUBROUTINE nl_set_omlcall
SUBROUTINE nl_set_sf_ocean_physics ( id_id , sf_ocean_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sf_ocean_physics
  INTEGER id_id
  model_config_rec%sf_ocean_physics = sf_ocean_physics
  RETURN
END SUBROUTINE nl_set_sf_ocean_physics
SUBROUTINE nl_set_traj_opt ( id_id , traj_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: traj_opt
  INTEGER id_id
  model_config_rec%traj_opt = traj_opt
  RETURN
END SUBROUTINE nl_set_traj_opt
SUBROUTINE nl_set_tracercall ( id_id , tracercall )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tracercall
  INTEGER id_id
  model_config_rec%tracercall = tracercall
  RETURN
END SUBROUTINE nl_set_tracercall
SUBROUTINE nl_set_omdt ( id_id , omdt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: omdt
  INTEGER id_id
  model_config_rec%omdt = omdt
  RETURN
END SUBROUTINE nl_set_omdt
SUBROUTINE nl_set_oml_hml0 ( id_id , oml_hml0 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: oml_hml0
  INTEGER id_id
  model_config_rec%oml_hml0 = oml_hml0
  RETURN
END SUBROUTINE nl_set_oml_hml0
SUBROUTINE nl_set_oml_gamma ( id_id , oml_gamma )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: oml_gamma
  INTEGER id_id
  model_config_rec%oml_gamma = oml_gamma
  RETURN
END SUBROUTINE nl_set_oml_gamma
SUBROUTINE nl_set_isftcflx ( id_id , isftcflx )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: isftcflx
  INTEGER id_id
  model_config_rec%isftcflx = isftcflx
  RETURN
END SUBROUTINE nl_set_isftcflx
SUBROUTINE nl_set_iz0tlnd ( id_id , iz0tlnd )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: iz0tlnd
  INTEGER id_id
  model_config_rec%iz0tlnd = iz0tlnd
  RETURN
END SUBROUTINE nl_set_iz0tlnd
SUBROUTINE nl_set_shadlen ( id_id , shadlen )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: shadlen
  INTEGER id_id
  model_config_rec%shadlen = shadlen
  RETURN
END SUBROUTINE nl_set_shadlen
SUBROUTINE nl_set_slope_rad ( id_id , slope_rad )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: slope_rad
  INTEGER id_id
  model_config_rec%slope_rad(id_id) = slope_rad
  RETURN
END SUBROUTINE nl_set_slope_rad
SUBROUTINE nl_set_topo_shading ( id_id , topo_shading )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: topo_shading
  INTEGER id_id
  model_config_rec%topo_shading(id_id) = topo_shading
  RETURN
END SUBROUTINE nl_set_topo_shading
SUBROUTINE nl_set_topo_wind ( id_id , topo_wind )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: topo_wind
  INTEGER id_id
  model_config_rec%topo_wind(id_id) = topo_wind
  RETURN
END SUBROUTINE nl_set_topo_wind
SUBROUTINE nl_set_no_mp_heating ( id_id , no_mp_heating )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: no_mp_heating
  INTEGER id_id
  model_config_rec%no_mp_heating = no_mp_heating
  RETURN
END SUBROUTINE nl_set_no_mp_heating
SUBROUTINE nl_set_fractional_seaice ( id_id , fractional_seaice )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fractional_seaice
  INTEGER id_id
  model_config_rec%fractional_seaice = fractional_seaice
  RETURN
END SUBROUTINE nl_set_fractional_seaice
SUBROUTINE nl_set_seaice_snowdepth_opt ( id_id , seaice_snowdepth_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: seaice_snowdepth_opt
  INTEGER id_id
  model_config_rec%seaice_snowdepth_opt = seaice_snowdepth_opt
  RETURN
END SUBROUTINE nl_set_seaice_snowdepth_opt
SUBROUTINE nl_set_seaice_snowdepth_max ( id_id , seaice_snowdepth_max )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: seaice_snowdepth_max
  INTEGER id_id
  model_config_rec%seaice_snowdepth_max = seaice_snowdepth_max
  RETURN
END SUBROUTINE nl_set_seaice_snowdepth_max
SUBROUTINE nl_set_seaice_snowdepth_min ( id_id , seaice_snowdepth_min )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: seaice_snowdepth_min
  INTEGER id_id
  model_config_rec%seaice_snowdepth_min = seaice_snowdepth_min
  RETURN
END SUBROUTINE nl_set_seaice_snowdepth_min
SUBROUTINE nl_set_seaice_albedo_opt ( id_id , seaice_albedo_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: seaice_albedo_opt
  INTEGER id_id
  model_config_rec%seaice_albedo_opt = seaice_albedo_opt
  RETURN
END SUBROUTINE nl_set_seaice_albedo_opt
SUBROUTINE nl_set_seaice_albedo_default ( id_id , seaice_albedo_default )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: seaice_albedo_default
  INTEGER id_id
  model_config_rec%seaice_albedo_default = seaice_albedo_default
  RETURN
END SUBROUTINE nl_set_seaice_albedo_default
SUBROUTINE nl_set_seaice_thickness_opt ( id_id , seaice_thickness_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: seaice_thickness_opt
  INTEGER id_id
  model_config_rec%seaice_thickness_opt = seaice_thickness_opt
  RETURN
END SUBROUTINE nl_set_seaice_thickness_opt
SUBROUTINE nl_set_seaice_thickness_default ( id_id , seaice_thickness_default )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: seaice_thickness_default
  INTEGER id_id
  model_config_rec%seaice_thickness_default = seaice_thickness_default
  RETURN
END SUBROUTINE nl_set_seaice_thickness_default
SUBROUTINE nl_set_tice2tsk_if2cold ( id_id , tice2tsk_if2cold )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: tice2tsk_if2cold
  INTEGER id_id
  model_config_rec%tice2tsk_if2cold = tice2tsk_if2cold
  RETURN
END SUBROUTINE nl_set_tice2tsk_if2cold
SUBROUTINE nl_set_bucket_mm ( id_id , bucket_mm )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: bucket_mm
  INTEGER id_id
  model_config_rec%bucket_mm = bucket_mm
  RETURN
END SUBROUTINE nl_set_bucket_mm
SUBROUTINE nl_set_bucket_j ( id_id , bucket_j )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: bucket_j
  INTEGER id_id
  model_config_rec%bucket_j = bucket_j
  RETURN
END SUBROUTINE nl_set_bucket_j
SUBROUTINE nl_set_mp_tend_lim ( id_id , mp_tend_lim )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: mp_tend_lim
  INTEGER id_id
  model_config_rec%mp_tend_lim = mp_tend_lim
  RETURN
END SUBROUTINE nl_set_mp_tend_lim
SUBROUTINE nl_set_prec_acc_dt ( id_id , prec_acc_dt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: prec_acc_dt
  INTEGER id_id
  model_config_rec%prec_acc_dt(id_id) = prec_acc_dt
  RETURN
END SUBROUTINE nl_set_prec_acc_dt
SUBROUTINE nl_set_prec_acc_opt ( id_id , prec_acc_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: prec_acc_opt
  INTEGER id_id
  model_config_rec%prec_acc_opt = prec_acc_opt
  RETURN
END SUBROUTINE nl_set_prec_acc_opt
SUBROUTINE nl_set_bucketr_opt ( id_id , bucketr_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: bucketr_opt
  INTEGER id_id
  model_config_rec%bucketr_opt = bucketr_opt
  RETURN
END SUBROUTINE nl_set_bucketr_opt
SUBROUTINE nl_set_process_time_series ( id_id , process_time_series )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: process_time_series
  INTEGER id_id
  model_config_rec%process_time_series = process_time_series
  RETURN
END SUBROUTINE nl_set_process_time_series
SUBROUTINE nl_set_grav_settling ( id_id , grav_settling )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: grav_settling
  INTEGER id_id
  model_config_rec%grav_settling(id_id) = grav_settling
  RETURN
END SUBROUTINE nl_set_grav_settling
SUBROUTINE nl_set_sas_pgcon ( id_id , sas_pgcon )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: sas_pgcon
  INTEGER id_id
  model_config_rec%sas_pgcon(id_id) = sas_pgcon
  RETURN
END SUBROUTINE nl_set_sas_pgcon
SUBROUTINE nl_set_scalar_pblmix ( id_id , scalar_pblmix )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: scalar_pblmix
  INTEGER id_id
  model_config_rec%scalar_pblmix(id_id) = scalar_pblmix
  RETURN
END SUBROUTINE nl_set_scalar_pblmix
SUBROUTINE nl_set_tracer_pblmix ( id_id , tracer_pblmix )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tracer_pblmix
  INTEGER id_id
  model_config_rec%tracer_pblmix(id_id) = tracer_pblmix
  RETURN
END SUBROUTINE nl_set_tracer_pblmix
SUBROUTINE nl_set_use_aero_icbc ( id_id , use_aero_icbc )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: use_aero_icbc
  INTEGER id_id
  model_config_rec%use_aero_icbc = use_aero_icbc
  RETURN
END SUBROUTINE nl_set_use_aero_icbc
SUBROUTINE nl_set_ccn_conc ( id_id , ccn_conc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: ccn_conc
  INTEGER id_id
  model_config_rec%ccn_conc = ccn_conc
  RETURN
END SUBROUTINE nl_set_ccn_conc
SUBROUTINE nl_set_hail_opt ( id_id , hail_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: hail_opt
  INTEGER id_id
  model_config_rec%hail_opt = hail_opt
  RETURN
END SUBROUTINE nl_set_hail_opt
SUBROUTINE nl_set_dveg ( id_id , dveg )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dveg
  INTEGER id_id
  model_config_rec%dveg = dveg
  RETURN
END SUBROUTINE nl_set_dveg
SUBROUTINE nl_set_opt_crs ( id_id , opt_crs )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_crs
  INTEGER id_id
  model_config_rec%opt_crs = opt_crs
  RETURN
END SUBROUTINE nl_set_opt_crs
SUBROUTINE nl_set_opt_btr ( id_id , opt_btr )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_btr
  INTEGER id_id
  model_config_rec%opt_btr = opt_btr
  RETURN
END SUBROUTINE nl_set_opt_btr
SUBROUTINE nl_set_opt_run ( id_id , opt_run )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_run
  INTEGER id_id
  model_config_rec%opt_run = opt_run
  RETURN
END SUBROUTINE nl_set_opt_run
SUBROUTINE nl_set_opt_sfc ( id_id , opt_sfc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_sfc
  INTEGER id_id
  model_config_rec%opt_sfc = opt_sfc
  RETURN
END SUBROUTINE nl_set_opt_sfc
SUBROUTINE nl_set_opt_frz ( id_id , opt_frz )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_frz
  INTEGER id_id
  model_config_rec%opt_frz = opt_frz
  RETURN
END SUBROUTINE nl_set_opt_frz
SUBROUTINE nl_set_opt_inf ( id_id , opt_inf )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_inf
  INTEGER id_id
  model_config_rec%opt_inf = opt_inf
  RETURN
END SUBROUTINE nl_set_opt_inf
SUBROUTINE nl_set_opt_rad ( id_id , opt_rad )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_rad
  INTEGER id_id
  model_config_rec%opt_rad = opt_rad
  RETURN
END SUBROUTINE nl_set_opt_rad
SUBROUTINE nl_set_opt_alb ( id_id , opt_alb )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_alb
  INTEGER id_id
  model_config_rec%opt_alb = opt_alb
  RETURN
END SUBROUTINE nl_set_opt_alb
SUBROUTINE nl_set_opt_snf ( id_id , opt_snf )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_snf
  INTEGER id_id
  model_config_rec%opt_snf = opt_snf
  RETURN
END SUBROUTINE nl_set_opt_snf
SUBROUTINE nl_set_opt_tbot ( id_id , opt_tbot )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_tbot
  INTEGER id_id
  model_config_rec%opt_tbot = opt_tbot
  RETURN
END SUBROUTINE nl_set_opt_tbot
SUBROUTINE nl_set_opt_stc ( id_id , opt_stc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: opt_stc
  INTEGER id_id
  model_config_rec%opt_stc = opt_stc
  RETURN
END SUBROUTINE nl_set_opt_stc
SUBROUTINE nl_set_wtddt ( id_id , wtddt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: wtddt
  INTEGER id_id
  model_config_rec%wtddt(id_id) = wtddt
  RETURN
END SUBROUTINE nl_set_wtddt
SUBROUTINE nl_set_wrf_hydro ( id_id , wrf_hydro )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: wrf_hydro
  INTEGER id_id
  model_config_rec%wrf_hydro = wrf_hydro
  RETURN
END SUBROUTINE nl_set_wrf_hydro
SUBROUTINE nl_set_fgdt ( id_id , fgdt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fgdt
  INTEGER id_id
  model_config_rec%fgdt(id_id) = fgdt
  RETURN
END SUBROUTINE nl_set_fgdt
SUBROUTINE nl_set_fgdtzero ( id_id , fgdtzero )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: fgdtzero
  INTEGER id_id
  model_config_rec%fgdtzero(id_id) = fgdtzero
  RETURN
END SUBROUTINE nl_set_fgdtzero
SUBROUTINE nl_set_grid_fdda ( id_id , grid_fdda )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: grid_fdda
  INTEGER id_id
  model_config_rec%grid_fdda(id_id) = grid_fdda
  RETURN
END SUBROUTINE nl_set_grid_fdda
SUBROUTINE nl_set_grid_sfdda ( id_id , grid_sfdda )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: grid_sfdda
  INTEGER id_id
  model_config_rec%grid_sfdda(id_id) = grid_sfdda
  RETURN
END SUBROUTINE nl_set_grid_sfdda
SUBROUTINE nl_set_if_no_pbl_nudging_uv ( id_id , if_no_pbl_nudging_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: if_no_pbl_nudging_uv
  INTEGER id_id
  model_config_rec%if_no_pbl_nudging_uv(id_id) = if_no_pbl_nudging_uv
  RETURN
END SUBROUTINE nl_set_if_no_pbl_nudging_uv
SUBROUTINE nl_set_if_no_pbl_nudging_t ( id_id , if_no_pbl_nudging_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: if_no_pbl_nudging_t
  INTEGER id_id
  model_config_rec%if_no_pbl_nudging_t(id_id) = if_no_pbl_nudging_t
  RETURN
END SUBROUTINE nl_set_if_no_pbl_nudging_t
SUBROUTINE nl_set_if_no_pbl_nudging_ph ( id_id , if_no_pbl_nudging_ph )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: if_no_pbl_nudging_ph
  INTEGER id_id
  model_config_rec%if_no_pbl_nudging_ph(id_id) = if_no_pbl_nudging_ph
  RETURN
END SUBROUTINE nl_set_if_no_pbl_nudging_ph
SUBROUTINE nl_set_if_no_pbl_nudging_q ( id_id , if_no_pbl_nudging_q )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: if_no_pbl_nudging_q
  INTEGER id_id
  model_config_rec%if_no_pbl_nudging_q(id_id) = if_no_pbl_nudging_q
  RETURN
END SUBROUTINE nl_set_if_no_pbl_nudging_q
SUBROUTINE nl_set_if_zfac_uv ( id_id , if_zfac_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: if_zfac_uv
  INTEGER id_id
  model_config_rec%if_zfac_uv(id_id) = if_zfac_uv
  RETURN
END SUBROUTINE nl_set_if_zfac_uv
SUBROUTINE nl_set_k_zfac_uv ( id_id , k_zfac_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: k_zfac_uv
  INTEGER id_id
  model_config_rec%k_zfac_uv(id_id) = k_zfac_uv
  RETURN
END SUBROUTINE nl_set_k_zfac_uv
SUBROUTINE nl_set_if_zfac_t ( id_id , if_zfac_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: if_zfac_t
  INTEGER id_id
  model_config_rec%if_zfac_t(id_id) = if_zfac_t
  RETURN
END SUBROUTINE nl_set_if_zfac_t
SUBROUTINE nl_set_k_zfac_t ( id_id , k_zfac_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: k_zfac_t
  INTEGER id_id
  model_config_rec%k_zfac_t(id_id) = k_zfac_t
  RETURN
END SUBROUTINE nl_set_k_zfac_t
SUBROUTINE nl_set_if_zfac_ph ( id_id , if_zfac_ph )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: if_zfac_ph
  INTEGER id_id
  model_config_rec%if_zfac_ph(id_id) = if_zfac_ph
  RETURN
END SUBROUTINE nl_set_if_zfac_ph
SUBROUTINE nl_set_k_zfac_ph ( id_id , k_zfac_ph )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: k_zfac_ph
  INTEGER id_id
  model_config_rec%k_zfac_ph(id_id) = k_zfac_ph
  RETURN
END SUBROUTINE nl_set_k_zfac_ph
SUBROUTINE nl_set_if_zfac_q ( id_id , if_zfac_q )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: if_zfac_q
  INTEGER id_id
  model_config_rec%if_zfac_q(id_id) = if_zfac_q
  RETURN
END SUBROUTINE nl_set_if_zfac_q
SUBROUTINE nl_set_k_zfac_q ( id_id , k_zfac_q )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: k_zfac_q
  INTEGER id_id
  model_config_rec%k_zfac_q(id_id) = k_zfac_q
  RETURN
END SUBROUTINE nl_set_k_zfac_q
SUBROUTINE nl_set_dk_zfac_uv ( id_id , dk_zfac_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dk_zfac_uv
  INTEGER id_id
  model_config_rec%dk_zfac_uv(id_id) = dk_zfac_uv
  RETURN
END SUBROUTINE nl_set_dk_zfac_uv
SUBROUTINE nl_set_dk_zfac_t ( id_id , dk_zfac_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dk_zfac_t
  INTEGER id_id
  model_config_rec%dk_zfac_t(id_id) = dk_zfac_t
  RETURN
END SUBROUTINE nl_set_dk_zfac_t
SUBROUTINE nl_set_dk_zfac_ph ( id_id , dk_zfac_ph )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dk_zfac_ph
  INTEGER id_id
  model_config_rec%dk_zfac_ph(id_id) = dk_zfac_ph
  RETURN
END SUBROUTINE nl_set_dk_zfac_ph
SUBROUTINE nl_set_guv ( id_id , guv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: guv
  INTEGER id_id
  model_config_rec%guv(id_id) = guv
  RETURN
END SUBROUTINE nl_set_guv
SUBROUTINE nl_set_guv_sfc ( id_id , guv_sfc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: guv_sfc
  INTEGER id_id
  model_config_rec%guv_sfc(id_id) = guv_sfc
  RETURN
END SUBROUTINE nl_set_guv_sfc
SUBROUTINE nl_set_gt ( id_id , gt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: gt
  INTEGER id_id
  model_config_rec%gt(id_id) = gt
  RETURN
END SUBROUTINE nl_set_gt
SUBROUTINE nl_set_gt_sfc ( id_id , gt_sfc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: gt_sfc
  INTEGER id_id
  model_config_rec%gt_sfc(id_id) = gt_sfc
  RETURN
END SUBROUTINE nl_set_gt_sfc
SUBROUTINE nl_set_gq ( id_id , gq )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: gq
  INTEGER id_id
  model_config_rec%gq(id_id) = gq
  RETURN
END SUBROUTINE nl_set_gq
SUBROUTINE nl_set_gq_sfc ( id_id , gq_sfc )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: gq_sfc
  INTEGER id_id
  model_config_rec%gq_sfc(id_id) = gq_sfc
  RETURN
END SUBROUTINE nl_set_gq_sfc
SUBROUTINE nl_set_gph ( id_id , gph )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: gph
  INTEGER id_id
  model_config_rec%gph(id_id) = gph
  RETURN
END SUBROUTINE nl_set_gph
SUBROUTINE nl_set_dtramp_min ( id_id , dtramp_min )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: dtramp_min
  INTEGER id_id
  model_config_rec%dtramp_min = dtramp_min
  RETURN
END SUBROUTINE nl_set_dtramp_min
SUBROUTINE nl_set_if_ramping ( id_id , if_ramping )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: if_ramping
  INTEGER id_id
  model_config_rec%if_ramping = if_ramping
  RETURN
END SUBROUTINE nl_set_if_ramping
SUBROUTINE nl_set_rinblw ( id_id , rinblw )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: rinblw
  INTEGER id_id
  model_config_rec%rinblw = rinblw
  RETURN
END SUBROUTINE nl_set_rinblw
SUBROUTINE nl_set_xwavenum ( id_id , xwavenum )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: xwavenum
  INTEGER id_id
  model_config_rec%xwavenum(id_id) = xwavenum
  RETURN
END SUBROUTINE nl_set_xwavenum
SUBROUTINE nl_set_ywavenum ( id_id , ywavenum )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: ywavenum
  INTEGER id_id
  model_config_rec%ywavenum(id_id) = ywavenum
  RETURN
END SUBROUTINE nl_set_ywavenum
SUBROUTINE nl_set_pxlsm_soil_nudge ( id_id , pxlsm_soil_nudge )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: pxlsm_soil_nudge
  INTEGER id_id
  model_config_rec%pxlsm_soil_nudge(id_id) = pxlsm_soil_nudge
  RETURN
END SUBROUTINE nl_set_pxlsm_soil_nudge
SUBROUTINE nl_set_obs_nudge_opt ( id_id , obs_nudge_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_nudge_opt
  INTEGER id_id
  model_config_rec%obs_nudge_opt(id_id) = obs_nudge_opt
  RETURN
END SUBROUTINE nl_set_obs_nudge_opt
SUBROUTINE nl_set_max_obs ( id_id , max_obs )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: max_obs
  INTEGER id_id
  model_config_rec%max_obs = max_obs
  RETURN
END SUBROUTINE nl_set_max_obs
SUBROUTINE nl_set_fdda_start ( id_id , fdda_start )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fdda_start
  INTEGER id_id
  model_config_rec%fdda_start(id_id) = fdda_start
  RETURN
END SUBROUTINE nl_set_fdda_start
SUBROUTINE nl_set_fdda_end ( id_id , fdda_end )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fdda_end
  INTEGER id_id
  model_config_rec%fdda_end(id_id) = fdda_end
  RETURN
END SUBROUTINE nl_set_fdda_end
SUBROUTINE nl_set_obs_nudge_wind ( id_id , obs_nudge_wind )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_nudge_wind
  INTEGER id_id
  model_config_rec%obs_nudge_wind(id_id) = obs_nudge_wind
  RETURN
END SUBROUTINE nl_set_obs_nudge_wind
SUBROUTINE nl_set_obs_coef_wind ( id_id , obs_coef_wind )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_coef_wind
  INTEGER id_id
  model_config_rec%obs_coef_wind(id_id) = obs_coef_wind
  RETURN
END SUBROUTINE nl_set_obs_coef_wind
SUBROUTINE nl_set_obs_nudge_temp ( id_id , obs_nudge_temp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_nudge_temp
  INTEGER id_id
  model_config_rec%obs_nudge_temp(id_id) = obs_nudge_temp
  RETURN
END SUBROUTINE nl_set_obs_nudge_temp
SUBROUTINE nl_set_obs_coef_temp ( id_id , obs_coef_temp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_coef_temp
  INTEGER id_id
  model_config_rec%obs_coef_temp(id_id) = obs_coef_temp
  RETURN
END SUBROUTINE nl_set_obs_coef_temp
SUBROUTINE nl_set_obs_nudge_mois ( id_id , obs_nudge_mois )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_nudge_mois
  INTEGER id_id
  model_config_rec%obs_nudge_mois(id_id) = obs_nudge_mois
  RETURN
END SUBROUTINE nl_set_obs_nudge_mois
SUBROUTINE nl_set_obs_coef_mois ( id_id , obs_coef_mois )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_coef_mois
  INTEGER id_id
  model_config_rec%obs_coef_mois(id_id) = obs_coef_mois
  RETURN
END SUBROUTINE nl_set_obs_coef_mois
SUBROUTINE nl_set_obs_nudge_pstr ( id_id , obs_nudge_pstr )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_nudge_pstr
  INTEGER id_id
  model_config_rec%obs_nudge_pstr(id_id) = obs_nudge_pstr
  RETURN
END SUBROUTINE nl_set_obs_nudge_pstr
SUBROUTINE nl_set_obs_coef_pstr ( id_id , obs_coef_pstr )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_coef_pstr
  INTEGER id_id
  model_config_rec%obs_coef_pstr(id_id) = obs_coef_pstr
  RETURN
END SUBROUTINE nl_set_obs_coef_pstr
SUBROUTINE nl_set_obs_no_pbl_nudge_uv ( id_id , obs_no_pbl_nudge_uv )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_no_pbl_nudge_uv
  INTEGER id_id
  model_config_rec%obs_no_pbl_nudge_uv(id_id) = obs_no_pbl_nudge_uv
  RETURN
END SUBROUTINE nl_set_obs_no_pbl_nudge_uv
SUBROUTINE nl_set_obs_no_pbl_nudge_t ( id_id , obs_no_pbl_nudge_t )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_no_pbl_nudge_t
  INTEGER id_id
  model_config_rec%obs_no_pbl_nudge_t(id_id) = obs_no_pbl_nudge_t
  RETURN
END SUBROUTINE nl_set_obs_no_pbl_nudge_t
SUBROUTINE nl_set_obs_no_pbl_nudge_q ( id_id , obs_no_pbl_nudge_q )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_no_pbl_nudge_q
  INTEGER id_id
  model_config_rec%obs_no_pbl_nudge_q(id_id) = obs_no_pbl_nudge_q
  RETURN
END SUBROUTINE nl_set_obs_no_pbl_nudge_q
SUBROUTINE nl_set_obs_sfc_scheme_horiz ( id_id , obs_sfc_scheme_horiz )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_sfc_scheme_horiz
  INTEGER id_id
  model_config_rec%obs_sfc_scheme_horiz = obs_sfc_scheme_horiz
  RETURN
END SUBROUTINE nl_set_obs_sfc_scheme_horiz
SUBROUTINE nl_set_obs_sfc_scheme_vert ( id_id , obs_sfc_scheme_vert )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_sfc_scheme_vert
  INTEGER id_id
  model_config_rec%obs_sfc_scheme_vert = obs_sfc_scheme_vert
  RETURN
END SUBROUTINE nl_set_obs_sfc_scheme_vert
SUBROUTINE nl_set_obs_max_sndng_gap ( id_id , obs_max_sndng_gap )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_max_sndng_gap
  INTEGER id_id
  model_config_rec%obs_max_sndng_gap = obs_max_sndng_gap
  RETURN
END SUBROUTINE nl_set_obs_max_sndng_gap
SUBROUTINE nl_set_obs_nudgezfullr1_uv ( id_id , obs_nudgezfullr1_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullr1_uv
  INTEGER id_id
  model_config_rec%obs_nudgezfullr1_uv = obs_nudgezfullr1_uv
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullr1_uv
SUBROUTINE nl_set_obs_nudgezrampr1_uv ( id_id , obs_nudgezrampr1_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampr1_uv
  INTEGER id_id
  model_config_rec%obs_nudgezrampr1_uv = obs_nudgezrampr1_uv
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampr1_uv
SUBROUTINE nl_set_obs_nudgezfullr2_uv ( id_id , obs_nudgezfullr2_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullr2_uv
  INTEGER id_id
  model_config_rec%obs_nudgezfullr2_uv = obs_nudgezfullr2_uv
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullr2_uv
SUBROUTINE nl_set_obs_nudgezrampr2_uv ( id_id , obs_nudgezrampr2_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampr2_uv
  INTEGER id_id
  model_config_rec%obs_nudgezrampr2_uv = obs_nudgezrampr2_uv
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampr2_uv
SUBROUTINE nl_set_obs_nudgezfullr4_uv ( id_id , obs_nudgezfullr4_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullr4_uv
  INTEGER id_id
  model_config_rec%obs_nudgezfullr4_uv = obs_nudgezfullr4_uv
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullr4_uv
SUBROUTINE nl_set_obs_nudgezrampr4_uv ( id_id , obs_nudgezrampr4_uv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampr4_uv
  INTEGER id_id
  model_config_rec%obs_nudgezrampr4_uv = obs_nudgezrampr4_uv
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampr4_uv
SUBROUTINE nl_set_obs_nudgezfullr1_t ( id_id , obs_nudgezfullr1_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullr1_t
  INTEGER id_id
  model_config_rec%obs_nudgezfullr1_t = obs_nudgezfullr1_t
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullr1_t
SUBROUTINE nl_set_obs_nudgezrampr1_t ( id_id , obs_nudgezrampr1_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampr1_t
  INTEGER id_id
  model_config_rec%obs_nudgezrampr1_t = obs_nudgezrampr1_t
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampr1_t
SUBROUTINE nl_set_obs_nudgezfullr2_t ( id_id , obs_nudgezfullr2_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullr2_t
  INTEGER id_id
  model_config_rec%obs_nudgezfullr2_t = obs_nudgezfullr2_t
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullr2_t
SUBROUTINE nl_set_obs_nudgezrampr2_t ( id_id , obs_nudgezrampr2_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampr2_t
  INTEGER id_id
  model_config_rec%obs_nudgezrampr2_t = obs_nudgezrampr2_t
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampr2_t
SUBROUTINE nl_set_obs_nudgezfullr4_t ( id_id , obs_nudgezfullr4_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullr4_t
  INTEGER id_id
  model_config_rec%obs_nudgezfullr4_t = obs_nudgezfullr4_t
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullr4_t
SUBROUTINE nl_set_obs_nudgezrampr4_t ( id_id , obs_nudgezrampr4_t )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampr4_t
  INTEGER id_id
  model_config_rec%obs_nudgezrampr4_t = obs_nudgezrampr4_t
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampr4_t
SUBROUTINE nl_set_obs_nudgezfullr1_q ( id_id , obs_nudgezfullr1_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullr1_q
  INTEGER id_id
  model_config_rec%obs_nudgezfullr1_q = obs_nudgezfullr1_q
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullr1_q
SUBROUTINE nl_set_obs_nudgezrampr1_q ( id_id , obs_nudgezrampr1_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampr1_q
  INTEGER id_id
  model_config_rec%obs_nudgezrampr1_q = obs_nudgezrampr1_q
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampr1_q
SUBROUTINE nl_set_obs_nudgezfullr2_q ( id_id , obs_nudgezfullr2_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullr2_q
  INTEGER id_id
  model_config_rec%obs_nudgezfullr2_q = obs_nudgezfullr2_q
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullr2_q
SUBROUTINE nl_set_obs_nudgezrampr2_q ( id_id , obs_nudgezrampr2_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampr2_q
  INTEGER id_id
  model_config_rec%obs_nudgezrampr2_q = obs_nudgezrampr2_q
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampr2_q
SUBROUTINE nl_set_obs_nudgezfullr4_q ( id_id , obs_nudgezfullr4_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullr4_q
  INTEGER id_id
  model_config_rec%obs_nudgezfullr4_q = obs_nudgezfullr4_q
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullr4_q
SUBROUTINE nl_set_obs_nudgezrampr4_q ( id_id , obs_nudgezrampr4_q )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampr4_q
  INTEGER id_id
  model_config_rec%obs_nudgezrampr4_q = obs_nudgezrampr4_q
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampr4_q
SUBROUTINE nl_set_obs_nudgezfullmin ( id_id , obs_nudgezfullmin )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezfullmin
  INTEGER id_id
  model_config_rec%obs_nudgezfullmin = obs_nudgezfullmin
  RETURN
END SUBROUTINE nl_set_obs_nudgezfullmin
SUBROUTINE nl_set_obs_nudgezrampmin ( id_id , obs_nudgezrampmin )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezrampmin
  INTEGER id_id
  model_config_rec%obs_nudgezrampmin = obs_nudgezrampmin
  RETURN
END SUBROUTINE nl_set_obs_nudgezrampmin
SUBROUTINE nl_set_obs_nudgezmax ( id_id , obs_nudgezmax )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_nudgezmax
  INTEGER id_id
  model_config_rec%obs_nudgezmax = obs_nudgezmax
  RETURN
END SUBROUTINE nl_set_obs_nudgezmax
SUBROUTINE nl_set_obs_sfcfact ( id_id , obs_sfcfact )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_sfcfact
  INTEGER id_id
  model_config_rec%obs_sfcfact = obs_sfcfact
  RETURN
END SUBROUTINE nl_set_obs_sfcfact
SUBROUTINE nl_set_obs_sfcfacr ( id_id , obs_sfcfacr )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_sfcfacr
  INTEGER id_id
  model_config_rec%obs_sfcfacr = obs_sfcfacr
  RETURN
END SUBROUTINE nl_set_obs_sfcfacr
SUBROUTINE nl_set_obs_dpsmx ( id_id , obs_dpsmx )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_dpsmx
  INTEGER id_id
  model_config_rec%obs_dpsmx = obs_dpsmx
  RETURN
END SUBROUTINE nl_set_obs_dpsmx
SUBROUTINE nl_set_obs_rinxy ( id_id , obs_rinxy )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_rinxy
  INTEGER id_id
  model_config_rec%obs_rinxy(id_id) = obs_rinxy
  RETURN
END SUBROUTINE nl_set_obs_rinxy
SUBROUTINE nl_set_obs_rinsig ( id_id , obs_rinsig )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_rinsig
  INTEGER id_id
  model_config_rec%obs_rinsig = obs_rinsig
  RETURN
END SUBROUTINE nl_set_obs_rinsig
SUBROUTINE nl_set_obs_twindo ( id_id , obs_twindo )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_twindo
  INTEGER id_id
  model_config_rec%obs_twindo(id_id) = obs_twindo
  RETURN
END SUBROUTINE nl_set_obs_twindo
SUBROUTINE nl_set_obs_npfi ( id_id , obs_npfi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_npfi
  INTEGER id_id
  model_config_rec%obs_npfi = obs_npfi
  RETURN
END SUBROUTINE nl_set_obs_npfi
SUBROUTINE nl_set_obs_ionf ( id_id , obs_ionf )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_ionf
  INTEGER id_id
  model_config_rec%obs_ionf(id_id) = obs_ionf
  RETURN
END SUBROUTINE nl_set_obs_ionf
SUBROUTINE nl_set_obs_idynin ( id_id , obs_idynin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_idynin
  INTEGER id_id
  model_config_rec%obs_idynin = obs_idynin
  RETURN
END SUBROUTINE nl_set_obs_idynin
SUBROUTINE nl_set_obs_dtramp ( id_id , obs_dtramp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: obs_dtramp
  INTEGER id_id
  model_config_rec%obs_dtramp = obs_dtramp
  RETURN
END SUBROUTINE nl_set_obs_dtramp
SUBROUTINE nl_set_obs_prt_max ( id_id , obs_prt_max )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_prt_max
  INTEGER id_id
  model_config_rec%obs_prt_max = obs_prt_max
  RETURN
END SUBROUTINE nl_set_obs_prt_max
SUBROUTINE nl_set_obs_prt_freq ( id_id , obs_prt_freq )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_prt_freq
  INTEGER id_id
  model_config_rec%obs_prt_freq(id_id) = obs_prt_freq
  RETURN
END SUBROUTINE nl_set_obs_prt_freq
SUBROUTINE nl_set_obs_ipf_in4dob ( id_id , obs_ipf_in4dob )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: obs_ipf_in4dob
  INTEGER id_id
  model_config_rec%obs_ipf_in4dob = obs_ipf_in4dob
  RETURN
END SUBROUTINE nl_set_obs_ipf_in4dob
SUBROUTINE nl_set_obs_ipf_errob ( id_id , obs_ipf_errob )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: obs_ipf_errob
  INTEGER id_id
  model_config_rec%obs_ipf_errob = obs_ipf_errob
  RETURN
END SUBROUTINE nl_set_obs_ipf_errob
SUBROUTINE nl_set_obs_ipf_nudob ( id_id , obs_ipf_nudob )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: obs_ipf_nudob
  INTEGER id_id
  model_config_rec%obs_ipf_nudob = obs_ipf_nudob
  RETURN
END SUBROUTINE nl_set_obs_ipf_nudob
SUBROUTINE nl_set_obs_ipf_init ( id_id , obs_ipf_init )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: obs_ipf_init
  INTEGER id_id
  model_config_rec%obs_ipf_init = obs_ipf_init
  RETURN
END SUBROUTINE nl_set_obs_ipf_init
SUBROUTINE nl_set_obs_scl_neg_qv_innov ( id_id , obs_scl_neg_qv_innov )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: obs_scl_neg_qv_innov
  INTEGER id_id
  model_config_rec%obs_scl_neg_qv_innov = obs_scl_neg_qv_innov
  RETURN
END SUBROUTINE nl_set_obs_scl_neg_qv_innov
SUBROUTINE nl_set_scm_force ( id_id , scm_force )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: scm_force
  INTEGER id_id
  model_config_rec%scm_force = scm_force
  RETURN
END SUBROUTINE nl_set_scm_force
SUBROUTINE nl_set_scm_force_dx ( id_id , scm_force_dx )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: scm_force_dx
  INTEGER id_id
  model_config_rec%scm_force_dx = scm_force_dx
  RETURN
END SUBROUTINE nl_set_scm_force_dx
SUBROUTINE nl_set_num_force_layers ( id_id , num_force_layers )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_force_layers
  INTEGER id_id
  model_config_rec%num_force_layers = num_force_layers
  RETURN
END SUBROUTINE nl_set_num_force_layers
SUBROUTINE nl_set_scm_lu_index ( id_id , scm_lu_index )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: scm_lu_index
  INTEGER id_id
  model_config_rec%scm_lu_index = scm_lu_index
  RETURN
END SUBROUTINE nl_set_scm_lu_index
SUBROUTINE nl_set_scm_isltyp ( id_id , scm_isltyp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: scm_isltyp
  INTEGER id_id
  model_config_rec%scm_isltyp = scm_isltyp
  RETURN
END SUBROUTINE nl_set_scm_isltyp
SUBROUTINE nl_set_scm_vegfra ( id_id , scm_vegfra )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: scm_vegfra
  INTEGER id_id
  model_config_rec%scm_vegfra = scm_vegfra
  RETURN
END SUBROUTINE nl_set_scm_vegfra
SUBROUTINE nl_set_scm_canwat ( id_id , scm_canwat )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: scm_canwat
  INTEGER id_id
  model_config_rec%scm_canwat = scm_canwat
  RETURN
END SUBROUTINE nl_set_scm_canwat
SUBROUTINE nl_set_scm_lat ( id_id , scm_lat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: scm_lat
  INTEGER id_id
  model_config_rec%scm_lat = scm_lat
  RETURN
END SUBROUTINE nl_set_scm_lat
SUBROUTINE nl_set_scm_lon ( id_id , scm_lon )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: scm_lon
  INTEGER id_id
  model_config_rec%scm_lon = scm_lon
  RETURN
END SUBROUTINE nl_set_scm_lon
SUBROUTINE nl_set_scm_th_t_tend ( id_id , scm_th_t_tend )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_th_t_tend
  INTEGER id_id
  model_config_rec%scm_th_t_tend = scm_th_t_tend
  RETURN
END SUBROUTINE nl_set_scm_th_t_tend
SUBROUTINE nl_set_scm_qv_t_tend ( id_id , scm_qv_t_tend )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_qv_t_tend
  INTEGER id_id
  model_config_rec%scm_qv_t_tend = scm_qv_t_tend
  RETURN
END SUBROUTINE nl_set_scm_qv_t_tend
SUBROUTINE nl_set_scm_th_adv ( id_id , scm_th_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_th_adv
  INTEGER id_id
  model_config_rec%scm_th_adv = scm_th_adv
  RETURN
END SUBROUTINE nl_set_scm_th_adv
SUBROUTINE nl_set_scm_wind_adv ( id_id , scm_wind_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_wind_adv
  INTEGER id_id
  model_config_rec%scm_wind_adv = scm_wind_adv
  RETURN
END SUBROUTINE nl_set_scm_wind_adv
SUBROUTINE nl_set_scm_qv_adv ( id_id , scm_qv_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_qv_adv
  INTEGER id_id
  model_config_rec%scm_qv_adv = scm_qv_adv
  RETURN
END SUBROUTINE nl_set_scm_qv_adv
SUBROUTINE nl_set_scm_ql_adv ( id_id , scm_ql_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_ql_adv
  INTEGER id_id
  model_config_rec%scm_ql_adv = scm_ql_adv
  RETURN
END SUBROUTINE nl_set_scm_ql_adv
SUBROUTINE nl_set_scm_vert_adv ( id_id , scm_vert_adv )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_vert_adv
  INTEGER id_id
  model_config_rec%scm_vert_adv = scm_vert_adv
  RETURN
END SUBROUTINE nl_set_scm_vert_adv
SUBROUTINE nl_set_num_force_soil_layers ( id_id , num_force_soil_layers )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: num_force_soil_layers
  INTEGER id_id
  model_config_rec%num_force_soil_layers = num_force_soil_layers
  RETURN
END SUBROUTINE nl_set_num_force_soil_layers
SUBROUTINE nl_set_scm_soilt_force ( id_id , scm_soilt_force )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_soilt_force
  INTEGER id_id
  model_config_rec%scm_soilt_force = scm_soilt_force
  RETURN
END SUBROUTINE nl_set_scm_soilt_force
SUBROUTINE nl_set_scm_soilq_force ( id_id , scm_soilq_force )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_soilq_force
  INTEGER id_id
  model_config_rec%scm_soilq_force = scm_soilq_force
  RETURN
END SUBROUTINE nl_set_scm_soilq_force
SUBROUTINE nl_set_scm_force_th_largescale ( id_id , scm_force_th_largescale )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_force_th_largescale
  INTEGER id_id
  model_config_rec%scm_force_th_largescale = scm_force_th_largescale
  RETURN
END SUBROUTINE nl_set_scm_force_th_largescale
SUBROUTINE nl_set_scm_force_qv_largescale ( id_id , scm_force_qv_largescale )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_force_qv_largescale
  INTEGER id_id
  model_config_rec%scm_force_qv_largescale = scm_force_qv_largescale
  RETURN
END SUBROUTINE nl_set_scm_force_qv_largescale
SUBROUTINE nl_set_scm_force_ql_largescale ( id_id , scm_force_ql_largescale )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_force_ql_largescale
  INTEGER id_id
  model_config_rec%scm_force_ql_largescale = scm_force_ql_largescale
  RETURN
END SUBROUTINE nl_set_scm_force_ql_largescale
SUBROUTINE nl_set_scm_force_wind_largescale ( id_id , scm_force_wind_largescale )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: scm_force_wind_largescale
  INTEGER id_id
  model_config_rec%scm_force_wind_largescale = scm_force_wind_largescale
  RETURN
END SUBROUTINE nl_set_scm_force_wind_largescale
SUBROUTINE nl_set_scm_force_skintemp ( id_id , scm_force_skintemp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: scm_force_skintemp
  INTEGER id_id
  model_config_rec%scm_force_skintemp = scm_force_skintemp
  RETURN
END SUBROUTINE nl_set_scm_force_skintemp
SUBROUTINE nl_set_scm_force_flux ( id_id , scm_force_flux )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: scm_force_flux
  INTEGER id_id
  model_config_rec%scm_force_flux = scm_force_flux
  RETURN
END SUBROUTINE nl_set_scm_force_flux
SUBROUTINE nl_set_dyn_opt ( id_id , dyn_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dyn_opt
  INTEGER id_id
  model_config_rec%dyn_opt = dyn_opt
  RETURN
END SUBROUTINE nl_set_dyn_opt
SUBROUTINE nl_set_rk_ord ( id_id , rk_ord )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: rk_ord
  INTEGER id_id
  model_config_rec%rk_ord = rk_ord
  RETURN
END SUBROUTINE nl_set_rk_ord
SUBROUTINE nl_set_w_damping ( id_id , w_damping )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: w_damping
  INTEGER id_id
  model_config_rec%w_damping = w_damping
  RETURN
END SUBROUTINE nl_set_w_damping
SUBROUTINE nl_set_diff_opt ( id_id , diff_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: diff_opt
  INTEGER id_id
  model_config_rec%diff_opt(id_id) = diff_opt
  RETURN
END SUBROUTINE nl_set_diff_opt
SUBROUTINE nl_set_diff_opt_dfi ( id_id , diff_opt_dfi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: diff_opt_dfi
  INTEGER id_id
  model_config_rec%diff_opt_dfi(id_id) = diff_opt_dfi
  RETURN
END SUBROUTINE nl_set_diff_opt_dfi
SUBROUTINE nl_set_km_opt ( id_id , km_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: km_opt
  INTEGER id_id
  model_config_rec%km_opt(id_id) = km_opt
  RETURN
END SUBROUTINE nl_set_km_opt
SUBROUTINE nl_set_km_opt_dfi ( id_id , km_opt_dfi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: km_opt_dfi
  INTEGER id_id
  model_config_rec%km_opt_dfi(id_id) = km_opt_dfi
  RETURN
END SUBROUTINE nl_set_km_opt_dfi
SUBROUTINE nl_set_damp_opt ( id_id , damp_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: damp_opt
  INTEGER id_id
  model_config_rec%damp_opt = damp_opt
  RETURN
END SUBROUTINE nl_set_damp_opt
SUBROUTINE nl_set_rad_nudge ( id_id , rad_nudge )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: rad_nudge
  INTEGER id_id
  model_config_rec%rad_nudge = rad_nudge
  RETURN
END SUBROUTINE nl_set_rad_nudge
SUBROUTINE nl_set_gwd_opt ( id_id , gwd_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: gwd_opt
  INTEGER id_id
  model_config_rec%gwd_opt = gwd_opt
  RETURN
END SUBROUTINE nl_set_gwd_opt
SUBROUTINE nl_set_zdamp ( id_id , zdamp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: zdamp
  INTEGER id_id
  model_config_rec%zdamp(id_id) = zdamp
  RETURN
END SUBROUTINE nl_set_zdamp
SUBROUTINE nl_set_dampcoef ( id_id , dampcoef )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: dampcoef
  INTEGER id_id
  model_config_rec%dampcoef(id_id) = dampcoef
  RETURN
END SUBROUTINE nl_set_dampcoef
SUBROUTINE nl_set_khdif ( id_id , khdif )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: khdif
  INTEGER id_id
  model_config_rec%khdif(id_id) = khdif
  RETURN
END SUBROUTINE nl_set_khdif
SUBROUTINE nl_set_kvdif ( id_id , kvdif )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: kvdif
  INTEGER id_id
  model_config_rec%kvdif(id_id) = kvdif
  RETURN
END SUBROUTINE nl_set_kvdif
SUBROUTINE nl_set_diff_6th_factor ( id_id , diff_6th_factor )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: diff_6th_factor
  INTEGER id_id
  model_config_rec%diff_6th_factor(id_id) = diff_6th_factor
  RETURN
END SUBROUTINE nl_set_diff_6th_factor
SUBROUTINE nl_set_diff_6th_opt ( id_id , diff_6th_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: diff_6th_opt
  INTEGER id_id
  model_config_rec%diff_6th_opt(id_id) = diff_6th_opt
  RETURN
END SUBROUTINE nl_set_diff_6th_opt
SUBROUTINE nl_set_c_s ( id_id , c_s )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: c_s
  INTEGER id_id
  model_config_rec%c_s(id_id) = c_s
  RETURN
END SUBROUTINE nl_set_c_s
SUBROUTINE nl_set_c_k ( id_id , c_k )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: c_k
  INTEGER id_id
  model_config_rec%c_k(id_id) = c_k
  RETURN
END SUBROUTINE nl_set_c_k
SUBROUTINE nl_set_smdiv ( id_id , smdiv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: smdiv
  INTEGER id_id
  model_config_rec%smdiv(id_id) = smdiv
  RETURN
END SUBROUTINE nl_set_smdiv
SUBROUTINE nl_set_emdiv ( id_id , emdiv )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: emdiv
  INTEGER id_id
  model_config_rec%emdiv(id_id) = emdiv
  RETURN
END SUBROUTINE nl_set_emdiv
SUBROUTINE nl_set_epssm ( id_id , epssm )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: epssm
  INTEGER id_id
  model_config_rec%epssm(id_id) = epssm
  RETURN
END SUBROUTINE nl_set_epssm
SUBROUTINE nl_set_non_hydrostatic ( id_id , non_hydrostatic )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: non_hydrostatic
  INTEGER id_id
  model_config_rec%non_hydrostatic(id_id) = non_hydrostatic
  RETURN
END SUBROUTINE nl_set_non_hydrostatic
SUBROUTINE nl_set_use_input_w ( id_id , use_input_w )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: use_input_w
  INTEGER id_id
  model_config_rec%use_input_w = use_input_w
  RETURN
END SUBROUTINE nl_set_use_input_w
SUBROUTINE nl_set_time_step_sound ( id_id , time_step_sound )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: time_step_sound
  INTEGER id_id
  model_config_rec%time_step_sound(id_id) = time_step_sound
  RETURN
END SUBROUTINE nl_set_time_step_sound
SUBROUTINE nl_set_h_mom_adv_order ( id_id , h_mom_adv_order )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: h_mom_adv_order
  INTEGER id_id
  model_config_rec%h_mom_adv_order(id_id) = h_mom_adv_order
  RETURN
END SUBROUTINE nl_set_h_mom_adv_order
SUBROUTINE nl_set_v_mom_adv_order ( id_id , v_mom_adv_order )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: v_mom_adv_order
  INTEGER id_id
  model_config_rec%v_mom_adv_order(id_id) = v_mom_adv_order
  RETURN
END SUBROUTINE nl_set_v_mom_adv_order
SUBROUTINE nl_set_h_sca_adv_order ( id_id , h_sca_adv_order )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: h_sca_adv_order
  INTEGER id_id
  model_config_rec%h_sca_adv_order(id_id) = h_sca_adv_order
  RETURN
END SUBROUTINE nl_set_h_sca_adv_order
SUBROUTINE nl_set_v_sca_adv_order ( id_id , v_sca_adv_order )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: v_sca_adv_order
  INTEGER id_id
  model_config_rec%v_sca_adv_order(id_id) = v_sca_adv_order
  RETURN
END SUBROUTINE nl_set_v_sca_adv_order
SUBROUTINE nl_set_momentum_adv_opt ( id_id , momentum_adv_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: momentum_adv_opt
  INTEGER id_id
  model_config_rec%momentum_adv_opt(id_id) = momentum_adv_opt
  RETURN
END SUBROUTINE nl_set_momentum_adv_opt
SUBROUTINE nl_set_moist_adv_opt ( id_id , moist_adv_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: moist_adv_opt
  INTEGER id_id
  model_config_rec%moist_adv_opt(id_id) = moist_adv_opt
  RETURN
END SUBROUTINE nl_set_moist_adv_opt
SUBROUTINE nl_set_moist_adv_dfi_opt ( id_id , moist_adv_dfi_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: moist_adv_dfi_opt
  INTEGER id_id
  model_config_rec%moist_adv_dfi_opt(id_id) = moist_adv_dfi_opt
  RETURN
END SUBROUTINE nl_set_moist_adv_dfi_opt
SUBROUTINE nl_set_chem_adv_opt ( id_id , chem_adv_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: chem_adv_opt
  INTEGER id_id
  model_config_rec%chem_adv_opt(id_id) = chem_adv_opt
  RETURN
END SUBROUTINE nl_set_chem_adv_opt
!ENDOFREGISTRYGENERATEDINCLUDE
