!STARTOFREGISTRYGENERATEDINCLUDE 'inc/nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit. Your changes to this file will be lost.
!
SUBROUTINE nl_set_tracer_adv_opt ( id_id , tracer_adv_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tracer_adv_opt
  INTEGER id_id
  model_config_rec%tracer_adv_opt(id_id) = tracer_adv_opt
  RETURN
END SUBROUTINE nl_set_tracer_adv_opt
SUBROUTINE nl_set_scalar_adv_opt ( id_id , scalar_adv_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: scalar_adv_opt
  INTEGER id_id
  model_config_rec%scalar_adv_opt(id_id) = scalar_adv_opt
  RETURN
END SUBROUTINE nl_set_scalar_adv_opt
SUBROUTINE nl_set_tke_adv_opt ( id_id , tke_adv_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tke_adv_opt
  INTEGER id_id
  model_config_rec%tke_adv_opt(id_id) = tke_adv_opt
  RETURN
END SUBROUTINE nl_set_tke_adv_opt
SUBROUTINE nl_set_top_radiation ( id_id , top_radiation )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: top_radiation
  INTEGER id_id
  model_config_rec%top_radiation(id_id) = top_radiation
  RETURN
END SUBROUTINE nl_set_top_radiation
SUBROUTINE nl_set_mix_isotropic ( id_id , mix_isotropic )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: mix_isotropic
  INTEGER id_id
  model_config_rec%mix_isotropic(id_id) = mix_isotropic
  RETURN
END SUBROUTINE nl_set_mix_isotropic
SUBROUTINE nl_set_mix_upper_bound ( id_id , mix_upper_bound )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: mix_upper_bound
  INTEGER id_id
  model_config_rec%mix_upper_bound(id_id) = mix_upper_bound
  RETURN
END SUBROUTINE nl_set_mix_upper_bound
SUBROUTINE nl_set_top_lid ( id_id , top_lid )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: top_lid
  INTEGER id_id
  model_config_rec%top_lid(id_id) = top_lid
  RETURN
END SUBROUTINE nl_set_top_lid
SUBROUTINE nl_set_tke_upper_bound ( id_id , tke_upper_bound )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: tke_upper_bound
  INTEGER id_id
  model_config_rec%tke_upper_bound(id_id) = tke_upper_bound
  RETURN
END SUBROUTINE nl_set_tke_upper_bound
SUBROUTINE nl_set_tke_drag_coefficient ( id_id , tke_drag_coefficient )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: tke_drag_coefficient
  INTEGER id_id
  model_config_rec%tke_drag_coefficient(id_id) = tke_drag_coefficient
  RETURN
END SUBROUTINE nl_set_tke_drag_coefficient
SUBROUTINE nl_set_tke_heat_flux ( id_id , tke_heat_flux )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: tke_heat_flux
  INTEGER id_id
  model_config_rec%tke_heat_flux(id_id) = tke_heat_flux
  RETURN
END SUBROUTINE nl_set_tke_heat_flux
SUBROUTINE nl_set_pert_coriolis ( id_id , pert_coriolis )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: pert_coriolis
  INTEGER id_id
  model_config_rec%pert_coriolis(id_id) = pert_coriolis
  RETURN
END SUBROUTINE nl_set_pert_coriolis
SUBROUTINE nl_set_coriolis2d ( id_id , coriolis2d )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: coriolis2d
  INTEGER id_id
  model_config_rec%coriolis2d(id_id) = coriolis2d
  RETURN
END SUBROUTINE nl_set_coriolis2d
SUBROUTINE nl_set_mix_full_fields ( id_id , mix_full_fields )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: mix_full_fields
  INTEGER id_id
  model_config_rec%mix_full_fields(id_id) = mix_full_fields
  RETURN
END SUBROUTINE nl_set_mix_full_fields
SUBROUTINE nl_set_base_pres ( id_id , base_pres )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: base_pres
  INTEGER id_id
  model_config_rec%base_pres = base_pres
  RETURN
END SUBROUTINE nl_set_base_pres
SUBROUTINE nl_set_base_temp ( id_id , base_temp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: base_temp
  INTEGER id_id
  model_config_rec%base_temp = base_temp
  RETURN
END SUBROUTINE nl_set_base_temp
SUBROUTINE nl_set_base_lapse ( id_id , base_lapse )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: base_lapse
  INTEGER id_id
  model_config_rec%base_lapse = base_lapse
  RETURN
END SUBROUTINE nl_set_base_lapse
SUBROUTINE nl_set_iso_temp ( id_id , iso_temp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: iso_temp
  INTEGER id_id
  model_config_rec%iso_temp = iso_temp
  RETURN
END SUBROUTINE nl_set_iso_temp
SUBROUTINE nl_set_base_pres_strat ( id_id , base_pres_strat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: base_pres_strat
  INTEGER id_id
  model_config_rec%base_pres_strat = base_pres_strat
  RETURN
END SUBROUTINE nl_set_base_pres_strat
SUBROUTINE nl_set_base_lapse_strat ( id_id , base_lapse_strat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: base_lapse_strat
  INTEGER id_id
  model_config_rec%base_lapse_strat = base_lapse_strat
  RETURN
END SUBROUTINE nl_set_base_lapse_strat
SUBROUTINE nl_set_use_baseparam_fr_nml ( id_id , use_baseparam_fr_nml )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: use_baseparam_fr_nml
  INTEGER id_id
  model_config_rec%use_baseparam_fr_nml = use_baseparam_fr_nml
  RETURN
END SUBROUTINE nl_set_use_baseparam_fr_nml
SUBROUTINE nl_set_fft_filter_lat ( id_id , fft_filter_lat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: fft_filter_lat
  INTEGER id_id
  model_config_rec%fft_filter_lat = fft_filter_lat
  RETURN
END SUBROUTINE nl_set_fft_filter_lat
SUBROUTINE nl_set_rotated_pole ( id_id , rotated_pole )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: rotated_pole
  INTEGER id_id
  model_config_rec%rotated_pole = rotated_pole
  RETURN
END SUBROUTINE nl_set_rotated_pole
SUBROUTINE nl_set_do_coriolis ( id_id , do_coriolis )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: do_coriolis
  INTEGER id_id
  model_config_rec%do_coriolis(id_id) = do_coriolis
  RETURN
END SUBROUTINE nl_set_do_coriolis
SUBROUTINE nl_set_do_curvature ( id_id , do_curvature )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: do_curvature
  INTEGER id_id
  model_config_rec%do_curvature(id_id) = do_curvature
  RETURN
END SUBROUTINE nl_set_do_curvature
SUBROUTINE nl_set_do_gradp ( id_id , do_gradp )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: do_gradp
  INTEGER id_id
  model_config_rec%do_gradp(id_id) = do_gradp
  RETURN
END SUBROUTINE nl_set_do_gradp
SUBROUTINE nl_set_tracer_opt ( id_id , tracer_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tracer_opt
  INTEGER id_id
  model_config_rec%tracer_opt(id_id) = tracer_opt
  RETURN
END SUBROUTINE nl_set_tracer_opt
SUBROUTINE nl_set_tenddiag ( id_id , tenddiag )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: tenddiag
  INTEGER id_id
  model_config_rec%tenddiag(id_id) = tenddiag
  RETURN
END SUBROUTINE nl_set_tenddiag
SUBROUTINE nl_set_spec_bdy_width ( id_id , spec_bdy_width )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: spec_bdy_width
  INTEGER id_id
  model_config_rec%spec_bdy_width = spec_bdy_width
  RETURN
END SUBROUTINE nl_set_spec_bdy_width
SUBROUTINE nl_set_spec_zone ( id_id , spec_zone )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: spec_zone
  INTEGER id_id
  model_config_rec%spec_zone = spec_zone
  RETURN
END SUBROUTINE nl_set_spec_zone
SUBROUTINE nl_set_relax_zone ( id_id , relax_zone )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: relax_zone
  INTEGER id_id
  model_config_rec%relax_zone = relax_zone
  RETURN
END SUBROUTINE nl_set_relax_zone
SUBROUTINE nl_set_specified ( id_id , specified )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: specified
  INTEGER id_id
  model_config_rec%specified(id_id) = specified
  RETURN
END SUBROUTINE nl_set_specified
SUBROUTINE nl_set_constant_bc ( id_id , constant_bc )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: constant_bc
  INTEGER id_id
  model_config_rec%constant_bc = constant_bc
  RETURN
END SUBROUTINE nl_set_constant_bc
SUBROUTINE nl_set_periodic_x ( id_id , periodic_x )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: periodic_x
  INTEGER id_id
  model_config_rec%periodic_x(id_id) = periodic_x
  RETURN
END SUBROUTINE nl_set_periodic_x
SUBROUTINE nl_set_symmetric_xs ( id_id , symmetric_xs )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: symmetric_xs
  INTEGER id_id
  model_config_rec%symmetric_xs(id_id) = symmetric_xs
  RETURN
END SUBROUTINE nl_set_symmetric_xs
SUBROUTINE nl_set_symmetric_xe ( id_id , symmetric_xe )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: symmetric_xe
  INTEGER id_id
  model_config_rec%symmetric_xe(id_id) = symmetric_xe
  RETURN
END SUBROUTINE nl_set_symmetric_xe
SUBROUTINE nl_set_open_xs ( id_id , open_xs )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: open_xs
  INTEGER id_id
  model_config_rec%open_xs(id_id) = open_xs
  RETURN
END SUBROUTINE nl_set_open_xs
SUBROUTINE nl_set_open_xe ( id_id , open_xe )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: open_xe
  INTEGER id_id
  model_config_rec%open_xe(id_id) = open_xe
  RETURN
END SUBROUTINE nl_set_open_xe
SUBROUTINE nl_set_periodic_y ( id_id , periodic_y )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: periodic_y
  INTEGER id_id
  model_config_rec%periodic_y(id_id) = periodic_y
  RETURN
END SUBROUTINE nl_set_periodic_y
SUBROUTINE nl_set_symmetric_ys ( id_id , symmetric_ys )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: symmetric_ys
  INTEGER id_id
  model_config_rec%symmetric_ys(id_id) = symmetric_ys
  RETURN
END SUBROUTINE nl_set_symmetric_ys
SUBROUTINE nl_set_symmetric_ye ( id_id , symmetric_ye )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: symmetric_ye
  INTEGER id_id
  model_config_rec%symmetric_ye(id_id) = symmetric_ye
  RETURN
END SUBROUTINE nl_set_symmetric_ye
SUBROUTINE nl_set_open_ys ( id_id , open_ys )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: open_ys
  INTEGER id_id
  model_config_rec%open_ys(id_id) = open_ys
  RETURN
END SUBROUTINE nl_set_open_ys
SUBROUTINE nl_set_open_ye ( id_id , open_ye )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: open_ye
  INTEGER id_id
  model_config_rec%open_ye(id_id) = open_ye
  RETURN
END SUBROUTINE nl_set_open_ye
SUBROUTINE nl_set_polar ( id_id , polar )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: polar
  INTEGER id_id
  model_config_rec%polar(id_id) = polar
  RETURN
END SUBROUTINE nl_set_polar
SUBROUTINE nl_set_nested ( id_id , nested )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: nested
  INTEGER id_id
  model_config_rec%nested(id_id) = nested
  RETURN
END SUBROUTINE nl_set_nested
SUBROUTINE nl_set_spec_exp ( id_id , spec_exp )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: spec_exp
  INTEGER id_id
  model_config_rec%spec_exp = spec_exp
  RETURN
END SUBROUTINE nl_set_spec_exp
SUBROUTINE nl_set_real_data_init_type ( id_id , real_data_init_type )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: real_data_init_type
  INTEGER id_id
  model_config_rec%real_data_init_type = real_data_init_type
  RETURN
END SUBROUTINE nl_set_real_data_init_type
SUBROUTINE nl_set_have_bcs_moist ( id_id , have_bcs_moist )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: have_bcs_moist
  INTEGER id_id
  model_config_rec%have_bcs_moist(id_id) = have_bcs_moist
  RETURN
END SUBROUTINE nl_set_have_bcs_moist
SUBROUTINE nl_set_have_bcs_scalar ( id_id , have_bcs_scalar )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: have_bcs_scalar
  INTEGER id_id
  model_config_rec%have_bcs_scalar(id_id) = have_bcs_scalar
  RETURN
END SUBROUTINE nl_set_have_bcs_scalar
SUBROUTINE nl_set_background_proc_id ( id_id , background_proc_id )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: background_proc_id
  INTEGER id_id
  model_config_rec%background_proc_id = background_proc_id
  RETURN
END SUBROUTINE nl_set_background_proc_id
SUBROUTINE nl_set_forecast_proc_id ( id_id , forecast_proc_id )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: forecast_proc_id
  INTEGER id_id
  model_config_rec%forecast_proc_id = forecast_proc_id
  RETURN
END SUBROUTINE nl_set_forecast_proc_id
SUBROUTINE nl_set_production_status ( id_id , production_status )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: production_status
  INTEGER id_id
  model_config_rec%production_status = production_status
  RETURN
END SUBROUTINE nl_set_production_status
SUBROUTINE nl_set_compression ( id_id , compression )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: compression
  INTEGER id_id
  model_config_rec%compression = compression
  RETURN
END SUBROUTINE nl_set_compression
SUBROUTINE nl_set_nobs_ndg_vars ( id_id , nobs_ndg_vars )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: nobs_ndg_vars
  INTEGER id_id
  model_config_rec%nobs_ndg_vars = nobs_ndg_vars
  RETURN
END SUBROUTINE nl_set_nobs_ndg_vars
SUBROUTINE nl_set_nobs_err_flds ( id_id , nobs_err_flds )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: nobs_err_flds
  INTEGER id_id
  model_config_rec%nobs_err_flds = nobs_err_flds
  RETURN
END SUBROUTINE nl_set_nobs_err_flds
SUBROUTINE nl_set_cen_lat ( id_id , cen_lat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: cen_lat
  INTEGER id_id
  model_config_rec%cen_lat(id_id) = cen_lat
  RETURN
END SUBROUTINE nl_set_cen_lat
SUBROUTINE nl_set_cen_lon ( id_id , cen_lon )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: cen_lon
  INTEGER id_id
  model_config_rec%cen_lon(id_id) = cen_lon
  RETURN
END SUBROUTINE nl_set_cen_lon
SUBROUTINE nl_set_truelat1 ( id_id , truelat1 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: truelat1
  INTEGER id_id
  model_config_rec%truelat1(id_id) = truelat1
  RETURN
END SUBROUTINE nl_set_truelat1
SUBROUTINE nl_set_truelat2 ( id_id , truelat2 )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: truelat2
  INTEGER id_id
  model_config_rec%truelat2(id_id) = truelat2
  RETURN
END SUBROUTINE nl_set_truelat2
SUBROUTINE nl_set_moad_cen_lat ( id_id , moad_cen_lat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: moad_cen_lat
  INTEGER id_id
  model_config_rec%moad_cen_lat(id_id) = moad_cen_lat
  RETURN
END SUBROUTINE nl_set_moad_cen_lat
SUBROUTINE nl_set_stand_lon ( id_id , stand_lon )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: stand_lon
  INTEGER id_id
  model_config_rec%stand_lon(id_id) = stand_lon
  RETURN
END SUBROUTINE nl_set_stand_lon
SUBROUTINE nl_set_pole_lat ( id_id , pole_lat )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: pole_lat
  INTEGER id_id
  model_config_rec%pole_lat(id_id) = pole_lat
  RETURN
END SUBROUTINE nl_set_pole_lat
SUBROUTINE nl_set_pole_lon ( id_id , pole_lon )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: pole_lon
  INTEGER id_id
  model_config_rec%pole_lon(id_id) = pole_lon
  RETURN
END SUBROUTINE nl_set_pole_lon
SUBROUTINE nl_set_flag_metgrid ( id_id , flag_metgrid )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_metgrid
  INTEGER id_id
  model_config_rec%flag_metgrid = flag_metgrid
  RETURN
END SUBROUTINE nl_set_flag_metgrid
SUBROUTINE nl_set_flag_snow ( id_id , flag_snow )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_snow
  INTEGER id_id
  model_config_rec%flag_snow = flag_snow
  RETURN
END SUBROUTINE nl_set_flag_snow
SUBROUTINE nl_set_flag_psfc ( id_id , flag_psfc )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_psfc
  INTEGER id_id
  model_config_rec%flag_psfc = flag_psfc
  RETURN
END SUBROUTINE nl_set_flag_psfc
SUBROUTINE nl_set_flag_sm000010 ( id_id , flag_sm000010 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_sm000010
  INTEGER id_id
  model_config_rec%flag_sm000010 = flag_sm000010
  RETURN
END SUBROUTINE nl_set_flag_sm000010
SUBROUTINE nl_set_flag_sm010040 ( id_id , flag_sm010040 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_sm010040
  INTEGER id_id
  model_config_rec%flag_sm010040 = flag_sm010040
  RETURN
END SUBROUTINE nl_set_flag_sm010040
SUBROUTINE nl_set_flag_sm040100 ( id_id , flag_sm040100 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_sm040100
  INTEGER id_id
  model_config_rec%flag_sm040100 = flag_sm040100
  RETURN
END SUBROUTINE nl_set_flag_sm040100
SUBROUTINE nl_set_flag_sm100200 ( id_id , flag_sm100200 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_sm100200
  INTEGER id_id
  model_config_rec%flag_sm100200 = flag_sm100200
  RETURN
END SUBROUTINE nl_set_flag_sm100200
SUBROUTINE nl_set_flag_st000010 ( id_id , flag_st000010 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_st000010
  INTEGER id_id
  model_config_rec%flag_st000010 = flag_st000010
  RETURN
END SUBROUTINE nl_set_flag_st000010
SUBROUTINE nl_set_flag_st010040 ( id_id , flag_st010040 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_st010040
  INTEGER id_id
  model_config_rec%flag_st010040 = flag_st010040
  RETURN
END SUBROUTINE nl_set_flag_st010040
SUBROUTINE nl_set_flag_st040100 ( id_id , flag_st040100 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_st040100
  INTEGER id_id
  model_config_rec%flag_st040100 = flag_st040100
  RETURN
END SUBROUTINE nl_set_flag_st040100
SUBROUTINE nl_set_flag_st100200 ( id_id , flag_st100200 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_st100200
  INTEGER id_id
  model_config_rec%flag_st100200 = flag_st100200
  RETURN
END SUBROUTINE nl_set_flag_st100200
SUBROUTINE nl_set_flag_soil_layers ( id_id , flag_soil_layers )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_soil_layers
  INTEGER id_id
  model_config_rec%flag_soil_layers = flag_soil_layers
  RETURN
END SUBROUTINE nl_set_flag_soil_layers
SUBROUTINE nl_set_flag_slp ( id_id , flag_slp )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_slp
  INTEGER id_id
  model_config_rec%flag_slp = flag_slp
  RETURN
END SUBROUTINE nl_set_flag_slp
SUBROUTINE nl_set_flag_soilhgt ( id_id , flag_soilhgt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_soilhgt
  INTEGER id_id
  model_config_rec%flag_soilhgt = flag_soilhgt
  RETURN
END SUBROUTINE nl_set_flag_soilhgt
SUBROUTINE nl_set_flag_mf_xy ( id_id , flag_mf_xy )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_mf_xy
  INTEGER id_id
  model_config_rec%flag_mf_xy = flag_mf_xy
  RETURN
END SUBROUTINE nl_set_flag_mf_xy
SUBROUTINE nl_set_flag_um_soil ( id_id , flag_um_soil )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: flag_um_soil
  INTEGER id_id
  model_config_rec%flag_um_soil = flag_um_soil
  RETURN
END SUBROUTINE nl_set_flag_um_soil
SUBROUTINE nl_set_bdyfrq ( id_id , bdyfrq )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: bdyfrq
  INTEGER id_id
  model_config_rec%bdyfrq(id_id) = bdyfrq
  RETURN
END SUBROUTINE nl_set_bdyfrq
SUBROUTINE nl_set_mminlu ( id_id , mminlu )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: mminlu
  INTEGER id_id
  model_config_rec%mminlu(id_id) = mminlu
  RETURN
END SUBROUTINE nl_set_mminlu
SUBROUTINE nl_set_iswater ( id_id , iswater )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: iswater
  INTEGER id_id
  model_config_rec%iswater(id_id) = iswater
  RETURN
END SUBROUTINE nl_set_iswater
SUBROUTINE nl_set_islake ( id_id , islake )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: islake
  INTEGER id_id
  model_config_rec%islake(id_id) = islake
  RETURN
END SUBROUTINE nl_set_islake
SUBROUTINE nl_set_isice ( id_id , isice )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: isice
  INTEGER id_id
  model_config_rec%isice(id_id) = isice
  RETURN
END SUBROUTINE nl_set_isice
SUBROUTINE nl_set_isurban ( id_id , isurban )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: isurban
  INTEGER id_id
  model_config_rec%isurban(id_id) = isurban
  RETURN
END SUBROUTINE nl_set_isurban
SUBROUTINE nl_set_isoilwater ( id_id , isoilwater )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: isoilwater
  INTEGER id_id
  model_config_rec%isoilwater(id_id) = isoilwater
  RETURN
END SUBROUTINE nl_set_isoilwater
SUBROUTINE nl_set_map_proj ( id_id , map_proj )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: map_proj
  INTEGER id_id
  model_config_rec%map_proj(id_id) = map_proj
  RETURN
END SUBROUTINE nl_set_map_proj
SUBROUTINE nl_set_use_wps_input ( id_id , use_wps_input )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: use_wps_input
  INTEGER id_id
  model_config_rec%use_wps_input = use_wps_input
  RETURN
END SUBROUTINE nl_set_use_wps_input
SUBROUTINE nl_set_dfi_stage ( id_id , dfi_stage )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: dfi_stage
  INTEGER id_id
  model_config_rec%dfi_stage(id_id) = dfi_stage
  RETURN
END SUBROUTINE nl_set_dfi_stage
SUBROUTINE nl_set_mp_physics_dfi ( id_id , mp_physics_dfi )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: mp_physics_dfi
  INTEGER id_id
  model_config_rec%mp_physics_dfi(id_id) = mp_physics_dfi
  RETURN
END SUBROUTINE nl_set_mp_physics_dfi
SUBROUTINE nl_set_windfarm_opt ( id_id , windfarm_opt )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: windfarm_opt
  INTEGER id_id
  model_config_rec%windfarm_opt(id_id) = windfarm_opt
  RETURN
END SUBROUTINE nl_set_windfarm_opt
SUBROUTINE nl_set_windfarm_ij ( id_id , windfarm_ij )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: windfarm_ij
  INTEGER id_id
  model_config_rec%windfarm_ij = windfarm_ij
  RETURN
END SUBROUTINE nl_set_windfarm_ij
SUBROUTINE nl_set_lightning_option ( id_id , lightning_option )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: lightning_option
  INTEGER id_id
  model_config_rec%lightning_option(id_id) = lightning_option
  RETURN
END SUBROUTINE nl_set_lightning_option
SUBROUTINE nl_set_lightning_dt ( id_id , lightning_dt )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: lightning_dt
  INTEGER id_id
  model_config_rec%lightning_dt(id_id) = lightning_dt
  RETURN
END SUBROUTINE nl_set_lightning_dt
SUBROUTINE nl_set_lightning_start_seconds ( id_id , lightning_start_seconds )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: lightning_start_seconds
  INTEGER id_id
  model_config_rec%lightning_start_seconds(id_id) = lightning_start_seconds
  RETURN
END SUBROUTINE nl_set_lightning_start_seconds
SUBROUTINE nl_set_flashrate_factor ( id_id , flashrate_factor )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: flashrate_factor
  INTEGER id_id
  model_config_rec%flashrate_factor(id_id) = flashrate_factor
  RETURN
END SUBROUTINE nl_set_flashrate_factor
SUBROUTINE nl_set_iccg_method ( id_id , iccg_method )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: iccg_method
  INTEGER id_id
  model_config_rec%iccg_method(id_id) = iccg_method
  RETURN
END SUBROUTINE nl_set_iccg_method
SUBROUTINE nl_set_iccg_prescribed_num ( id_id , iccg_prescribed_num )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: iccg_prescribed_num
  INTEGER id_id
  model_config_rec%iccg_prescribed_num(id_id) = iccg_prescribed_num
  RETURN
END SUBROUTINE nl_set_iccg_prescribed_num
SUBROUTINE nl_set_iccg_prescribed_den ( id_id , iccg_prescribed_den )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: iccg_prescribed_den
  INTEGER id_id
  model_config_rec%iccg_prescribed_den(id_id) = iccg_prescribed_den
  RETURN
END SUBROUTINE nl_set_iccg_prescribed_den
SUBROUTINE nl_set_cellcount_method ( id_id , cellcount_method )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: cellcount_method
  INTEGER id_id
  model_config_rec%cellcount_method(id_id) = cellcount_method
  RETURN
END SUBROUTINE nl_set_cellcount_method
SUBROUTINE nl_set_cldtop_adjustment ( id_id , cldtop_adjustment )
  USE module_configure, ONLY : model_config_rec
  real , INTENT(IN) :: cldtop_adjustment
  INTEGER id_id
  model_config_rec%cldtop_adjustment(id_id) = cldtop_adjustment
  RETURN
END SUBROUTINE nl_set_cldtop_adjustment
SUBROUTINE nl_set_sf_lake_physics ( id_id , sf_lake_physics )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: sf_lake_physics
  INTEGER id_id
  model_config_rec%sf_lake_physics(id_id) = sf_lake_physics
  RETURN
END SUBROUTINE nl_set_sf_lake_physics
SUBROUTINE nl_set_auxinput1_inname ( id_id , auxinput1_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxinput1_inname
  INTEGER id_id
  model_config_rec%auxinput1_inname = trim(auxinput1_inname)
  RETURN
END SUBROUTINE nl_set_auxinput1_inname
SUBROUTINE nl_set_io_form_auxinput1 ( id_id , io_form_auxinput1 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: io_form_auxinput1
  INTEGER id_id
  model_config_rec%io_form_auxinput1 = io_form_auxinput1
  RETURN
END SUBROUTINE nl_set_io_form_auxinput1
SUBROUTINE nl_set_override_restart_timers ( id_id , override_restart_timers )
  USE module_configure, ONLY : model_config_rec
  logical , INTENT(IN) :: override_restart_timers
  INTEGER id_id
  model_config_rec%override_restart_timers = override_restart_timers
  RETURN
END SUBROUTINE nl_set_override_restart_timers
SUBROUTINE nl_set_auxhist1_inname ( id_id , auxhist1_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist1_inname
  INTEGER id_id
  model_config_rec%auxhist1_inname = trim(auxhist1_inname)
  RETURN
END SUBROUTINE nl_set_auxhist1_inname
SUBROUTINE nl_set_auxhist1_outname ( id_id , auxhist1_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist1_outname
  INTEGER id_id
  model_config_rec%auxhist1_outname = trim(auxhist1_outname)
  RETURN
END SUBROUTINE nl_set_auxhist1_outname
SUBROUTINE nl_set_auxhist1_interval_y ( id_id , auxhist1_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_interval_y
  INTEGER id_id
  model_config_rec%auxhist1_interval_y(id_id) = auxhist1_interval_y
  RETURN
END SUBROUTINE nl_set_auxhist1_interval_y
SUBROUTINE nl_set_auxhist1_interval_d ( id_id , auxhist1_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_interval_d
  INTEGER id_id
  model_config_rec%auxhist1_interval_d(id_id) = auxhist1_interval_d
  RETURN
END SUBROUTINE nl_set_auxhist1_interval_d
SUBROUTINE nl_set_auxhist1_interval_h ( id_id , auxhist1_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_interval_h
  INTEGER id_id
  model_config_rec%auxhist1_interval_h(id_id) = auxhist1_interval_h
  RETURN
END SUBROUTINE nl_set_auxhist1_interval_h
SUBROUTINE nl_set_auxhist1_interval_m ( id_id , auxhist1_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_interval_m
  INTEGER id_id
  model_config_rec%auxhist1_interval_m(id_id) = auxhist1_interval_m
  RETURN
END SUBROUTINE nl_set_auxhist1_interval_m
SUBROUTINE nl_set_auxhist1_interval_s ( id_id , auxhist1_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_interval_s
  INTEGER id_id
  model_config_rec%auxhist1_interval_s(id_id) = auxhist1_interval_s
  RETURN
END SUBROUTINE nl_set_auxhist1_interval_s
SUBROUTINE nl_set_auxhist1_interval ( id_id , auxhist1_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_interval
  INTEGER id_id
  model_config_rec%auxhist1_interval(id_id) = auxhist1_interval
  RETURN
END SUBROUTINE nl_set_auxhist1_interval
SUBROUTINE nl_set_auxhist1_begin_y ( id_id , auxhist1_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_begin_y
  INTEGER id_id
  model_config_rec%auxhist1_begin_y(id_id) = auxhist1_begin_y
  RETURN
END SUBROUTINE nl_set_auxhist1_begin_y
SUBROUTINE nl_set_auxhist1_begin_d ( id_id , auxhist1_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_begin_d
  INTEGER id_id
  model_config_rec%auxhist1_begin_d(id_id) = auxhist1_begin_d
  RETURN
END SUBROUTINE nl_set_auxhist1_begin_d
SUBROUTINE nl_set_auxhist1_begin_h ( id_id , auxhist1_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_begin_h
  INTEGER id_id
  model_config_rec%auxhist1_begin_h(id_id) = auxhist1_begin_h
  RETURN
END SUBROUTINE nl_set_auxhist1_begin_h
SUBROUTINE nl_set_auxhist1_begin_m ( id_id , auxhist1_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_begin_m
  INTEGER id_id
  model_config_rec%auxhist1_begin_m(id_id) = auxhist1_begin_m
  RETURN
END SUBROUTINE nl_set_auxhist1_begin_m
SUBROUTINE nl_set_auxhist1_begin_s ( id_id , auxhist1_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_begin_s
  INTEGER id_id
  model_config_rec%auxhist1_begin_s(id_id) = auxhist1_begin_s
  RETURN
END SUBROUTINE nl_set_auxhist1_begin_s
SUBROUTINE nl_set_auxhist1_begin ( id_id , auxhist1_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_begin
  INTEGER id_id
  model_config_rec%auxhist1_begin(id_id) = auxhist1_begin
  RETURN
END SUBROUTINE nl_set_auxhist1_begin
SUBROUTINE nl_set_auxhist1_end_y ( id_id , auxhist1_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_end_y
  INTEGER id_id
  model_config_rec%auxhist1_end_y(id_id) = auxhist1_end_y
  RETURN
END SUBROUTINE nl_set_auxhist1_end_y
SUBROUTINE nl_set_auxhist1_end_d ( id_id , auxhist1_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_end_d
  INTEGER id_id
  model_config_rec%auxhist1_end_d(id_id) = auxhist1_end_d
  RETURN
END SUBROUTINE nl_set_auxhist1_end_d
SUBROUTINE nl_set_auxhist1_end_h ( id_id , auxhist1_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_end_h
  INTEGER id_id
  model_config_rec%auxhist1_end_h(id_id) = auxhist1_end_h
  RETURN
END SUBROUTINE nl_set_auxhist1_end_h
SUBROUTINE nl_set_auxhist1_end_m ( id_id , auxhist1_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_end_m
  INTEGER id_id
  model_config_rec%auxhist1_end_m(id_id) = auxhist1_end_m
  RETURN
END SUBROUTINE nl_set_auxhist1_end_m
SUBROUTINE nl_set_auxhist1_end_s ( id_id , auxhist1_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_end_s
  INTEGER id_id
  model_config_rec%auxhist1_end_s(id_id) = auxhist1_end_s
  RETURN
END SUBROUTINE nl_set_auxhist1_end_s
SUBROUTINE nl_set_auxhist1_end ( id_id , auxhist1_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist1_end
  INTEGER id_id
  model_config_rec%auxhist1_end(id_id) = auxhist1_end
  RETURN
END SUBROUTINE nl_set_auxhist1_end
SUBROUTINE nl_set_io_form_auxhist1 ( id_id , io_form_auxhist1 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: io_form_auxhist1
  INTEGER id_id
  model_config_rec%io_form_auxhist1 = io_form_auxhist1
  RETURN
END SUBROUTINE nl_set_io_form_auxhist1
SUBROUTINE nl_set_frames_per_auxhist1 ( id_id , frames_per_auxhist1 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: frames_per_auxhist1
  INTEGER id_id
  model_config_rec%frames_per_auxhist1(id_id) = frames_per_auxhist1
  RETURN
END SUBROUTINE nl_set_frames_per_auxhist1
SUBROUTINE nl_set_auxhist2_inname ( id_id , auxhist2_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist2_inname
  INTEGER id_id
  model_config_rec%auxhist2_inname = trim(auxhist2_inname)
  RETURN
END SUBROUTINE nl_set_auxhist2_inname
SUBROUTINE nl_set_auxhist2_outname ( id_id , auxhist2_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist2_outname
  INTEGER id_id
  model_config_rec%auxhist2_outname = trim(auxhist2_outname)
  RETURN
END SUBROUTINE nl_set_auxhist2_outname
SUBROUTINE nl_set_auxhist2_interval_y ( id_id , auxhist2_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_interval_y
  INTEGER id_id
  model_config_rec%auxhist2_interval_y(id_id) = auxhist2_interval_y
  RETURN
END SUBROUTINE nl_set_auxhist2_interval_y
SUBROUTINE nl_set_auxhist2_interval_d ( id_id , auxhist2_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_interval_d
  INTEGER id_id
  model_config_rec%auxhist2_interval_d(id_id) = auxhist2_interval_d
  RETURN
END SUBROUTINE nl_set_auxhist2_interval_d
SUBROUTINE nl_set_auxhist2_interval_h ( id_id , auxhist2_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_interval_h
  INTEGER id_id
  model_config_rec%auxhist2_interval_h(id_id) = auxhist2_interval_h
  RETURN
END SUBROUTINE nl_set_auxhist2_interval_h
SUBROUTINE nl_set_auxhist2_interval_m ( id_id , auxhist2_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_interval_m
  INTEGER id_id
  model_config_rec%auxhist2_interval_m(id_id) = auxhist2_interval_m
  RETURN
END SUBROUTINE nl_set_auxhist2_interval_m
SUBROUTINE nl_set_auxhist2_interval_s ( id_id , auxhist2_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_interval_s
  INTEGER id_id
  model_config_rec%auxhist2_interval_s(id_id) = auxhist2_interval_s
  RETURN
END SUBROUTINE nl_set_auxhist2_interval_s
SUBROUTINE nl_set_auxhist2_interval ( id_id , auxhist2_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_interval
  INTEGER id_id
  model_config_rec%auxhist2_interval(id_id) = auxhist2_interval
  RETURN
END SUBROUTINE nl_set_auxhist2_interval
SUBROUTINE nl_set_auxhist2_begin_y ( id_id , auxhist2_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_begin_y
  INTEGER id_id
  model_config_rec%auxhist2_begin_y(id_id) = auxhist2_begin_y
  RETURN
END SUBROUTINE nl_set_auxhist2_begin_y
SUBROUTINE nl_set_auxhist2_begin_d ( id_id , auxhist2_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_begin_d
  INTEGER id_id
  model_config_rec%auxhist2_begin_d(id_id) = auxhist2_begin_d
  RETURN
END SUBROUTINE nl_set_auxhist2_begin_d
SUBROUTINE nl_set_auxhist2_begin_h ( id_id , auxhist2_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_begin_h
  INTEGER id_id
  model_config_rec%auxhist2_begin_h(id_id) = auxhist2_begin_h
  RETURN
END SUBROUTINE nl_set_auxhist2_begin_h
SUBROUTINE nl_set_auxhist2_begin_m ( id_id , auxhist2_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_begin_m
  INTEGER id_id
  model_config_rec%auxhist2_begin_m(id_id) = auxhist2_begin_m
  RETURN
END SUBROUTINE nl_set_auxhist2_begin_m
SUBROUTINE nl_set_auxhist2_begin_s ( id_id , auxhist2_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_begin_s
  INTEGER id_id
  model_config_rec%auxhist2_begin_s(id_id) = auxhist2_begin_s
  RETURN
END SUBROUTINE nl_set_auxhist2_begin_s
SUBROUTINE nl_set_auxhist2_begin ( id_id , auxhist2_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_begin
  INTEGER id_id
  model_config_rec%auxhist2_begin(id_id) = auxhist2_begin
  RETURN
END SUBROUTINE nl_set_auxhist2_begin
SUBROUTINE nl_set_auxhist2_end_y ( id_id , auxhist2_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_end_y
  INTEGER id_id
  model_config_rec%auxhist2_end_y(id_id) = auxhist2_end_y
  RETURN
END SUBROUTINE nl_set_auxhist2_end_y
SUBROUTINE nl_set_auxhist2_end_d ( id_id , auxhist2_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_end_d
  INTEGER id_id
  model_config_rec%auxhist2_end_d(id_id) = auxhist2_end_d
  RETURN
END SUBROUTINE nl_set_auxhist2_end_d
SUBROUTINE nl_set_auxhist2_end_h ( id_id , auxhist2_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_end_h
  INTEGER id_id
  model_config_rec%auxhist2_end_h(id_id) = auxhist2_end_h
  RETURN
END SUBROUTINE nl_set_auxhist2_end_h
SUBROUTINE nl_set_auxhist2_end_m ( id_id , auxhist2_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_end_m
  INTEGER id_id
  model_config_rec%auxhist2_end_m(id_id) = auxhist2_end_m
  RETURN
END SUBROUTINE nl_set_auxhist2_end_m
SUBROUTINE nl_set_auxhist2_end_s ( id_id , auxhist2_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_end_s
  INTEGER id_id
  model_config_rec%auxhist2_end_s(id_id) = auxhist2_end_s
  RETURN
END SUBROUTINE nl_set_auxhist2_end_s
SUBROUTINE nl_set_auxhist2_end ( id_id , auxhist2_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist2_end
  INTEGER id_id
  model_config_rec%auxhist2_end(id_id) = auxhist2_end
  RETURN
END SUBROUTINE nl_set_auxhist2_end
SUBROUTINE nl_set_io_form_auxhist2 ( id_id , io_form_auxhist2 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: io_form_auxhist2
  INTEGER id_id
  model_config_rec%io_form_auxhist2 = io_form_auxhist2
  RETURN
END SUBROUTINE nl_set_io_form_auxhist2
SUBROUTINE nl_set_frames_per_auxhist2 ( id_id , frames_per_auxhist2 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: frames_per_auxhist2
  INTEGER id_id
  model_config_rec%frames_per_auxhist2(id_id) = frames_per_auxhist2
  RETURN
END SUBROUTINE nl_set_frames_per_auxhist2
SUBROUTINE nl_set_auxhist3_inname ( id_id , auxhist3_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist3_inname
  INTEGER id_id
  model_config_rec%auxhist3_inname = trim(auxhist3_inname)
  RETURN
END SUBROUTINE nl_set_auxhist3_inname
SUBROUTINE nl_set_auxhist3_outname ( id_id , auxhist3_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist3_outname
  INTEGER id_id
  model_config_rec%auxhist3_outname = trim(auxhist3_outname)
  RETURN
END SUBROUTINE nl_set_auxhist3_outname
SUBROUTINE nl_set_auxhist3_interval_y ( id_id , auxhist3_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_interval_y
  INTEGER id_id
  model_config_rec%auxhist3_interval_y(id_id) = auxhist3_interval_y
  RETURN
END SUBROUTINE nl_set_auxhist3_interval_y
SUBROUTINE nl_set_auxhist3_interval_d ( id_id , auxhist3_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_interval_d
  INTEGER id_id
  model_config_rec%auxhist3_interval_d(id_id) = auxhist3_interval_d
  RETURN
END SUBROUTINE nl_set_auxhist3_interval_d
SUBROUTINE nl_set_auxhist3_interval_h ( id_id , auxhist3_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_interval_h
  INTEGER id_id
  model_config_rec%auxhist3_interval_h(id_id) = auxhist3_interval_h
  RETURN
END SUBROUTINE nl_set_auxhist3_interval_h
SUBROUTINE nl_set_auxhist3_interval_m ( id_id , auxhist3_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_interval_m
  INTEGER id_id
  model_config_rec%auxhist3_interval_m(id_id) = auxhist3_interval_m
  RETURN
END SUBROUTINE nl_set_auxhist3_interval_m
SUBROUTINE nl_set_auxhist3_interval_s ( id_id , auxhist3_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_interval_s
  INTEGER id_id
  model_config_rec%auxhist3_interval_s(id_id) = auxhist3_interval_s
  RETURN
END SUBROUTINE nl_set_auxhist3_interval_s
SUBROUTINE nl_set_auxhist3_interval ( id_id , auxhist3_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_interval
  INTEGER id_id
  model_config_rec%auxhist3_interval(id_id) = auxhist3_interval
  RETURN
END SUBROUTINE nl_set_auxhist3_interval
SUBROUTINE nl_set_auxhist3_begin_y ( id_id , auxhist3_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_begin_y
  INTEGER id_id
  model_config_rec%auxhist3_begin_y(id_id) = auxhist3_begin_y
  RETURN
END SUBROUTINE nl_set_auxhist3_begin_y
SUBROUTINE nl_set_auxhist3_begin_d ( id_id , auxhist3_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_begin_d
  INTEGER id_id
  model_config_rec%auxhist3_begin_d(id_id) = auxhist3_begin_d
  RETURN
END SUBROUTINE nl_set_auxhist3_begin_d
SUBROUTINE nl_set_auxhist3_begin_h ( id_id , auxhist3_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_begin_h
  INTEGER id_id
  model_config_rec%auxhist3_begin_h(id_id) = auxhist3_begin_h
  RETURN
END SUBROUTINE nl_set_auxhist3_begin_h
SUBROUTINE nl_set_auxhist3_begin_m ( id_id , auxhist3_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_begin_m
  INTEGER id_id
  model_config_rec%auxhist3_begin_m(id_id) = auxhist3_begin_m
  RETURN
END SUBROUTINE nl_set_auxhist3_begin_m
SUBROUTINE nl_set_auxhist3_begin_s ( id_id , auxhist3_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_begin_s
  INTEGER id_id
  model_config_rec%auxhist3_begin_s(id_id) = auxhist3_begin_s
  RETURN
END SUBROUTINE nl_set_auxhist3_begin_s
SUBROUTINE nl_set_auxhist3_begin ( id_id , auxhist3_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_begin
  INTEGER id_id
  model_config_rec%auxhist3_begin(id_id) = auxhist3_begin
  RETURN
END SUBROUTINE nl_set_auxhist3_begin
SUBROUTINE nl_set_auxhist3_end_y ( id_id , auxhist3_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_end_y
  INTEGER id_id
  model_config_rec%auxhist3_end_y(id_id) = auxhist3_end_y
  RETURN
END SUBROUTINE nl_set_auxhist3_end_y
SUBROUTINE nl_set_auxhist3_end_d ( id_id , auxhist3_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_end_d
  INTEGER id_id
  model_config_rec%auxhist3_end_d(id_id) = auxhist3_end_d
  RETURN
END SUBROUTINE nl_set_auxhist3_end_d
SUBROUTINE nl_set_auxhist3_end_h ( id_id , auxhist3_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_end_h
  INTEGER id_id
  model_config_rec%auxhist3_end_h(id_id) = auxhist3_end_h
  RETURN
END SUBROUTINE nl_set_auxhist3_end_h
SUBROUTINE nl_set_auxhist3_end_m ( id_id , auxhist3_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_end_m
  INTEGER id_id
  model_config_rec%auxhist3_end_m(id_id) = auxhist3_end_m
  RETURN
END SUBROUTINE nl_set_auxhist3_end_m
SUBROUTINE nl_set_auxhist3_end_s ( id_id , auxhist3_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_end_s
  INTEGER id_id
  model_config_rec%auxhist3_end_s(id_id) = auxhist3_end_s
  RETURN
END SUBROUTINE nl_set_auxhist3_end_s
SUBROUTINE nl_set_auxhist3_end ( id_id , auxhist3_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist3_end
  INTEGER id_id
  model_config_rec%auxhist3_end(id_id) = auxhist3_end
  RETURN
END SUBROUTINE nl_set_auxhist3_end
SUBROUTINE nl_set_io_form_auxhist3 ( id_id , io_form_auxhist3 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: io_form_auxhist3
  INTEGER id_id
  model_config_rec%io_form_auxhist3 = io_form_auxhist3
  RETURN
END SUBROUTINE nl_set_io_form_auxhist3
SUBROUTINE nl_set_frames_per_auxhist3 ( id_id , frames_per_auxhist3 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: frames_per_auxhist3
  INTEGER id_id
  model_config_rec%frames_per_auxhist3(id_id) = frames_per_auxhist3
  RETURN
END SUBROUTINE nl_set_frames_per_auxhist3
SUBROUTINE nl_set_auxhist4_inname ( id_id , auxhist4_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist4_inname
  INTEGER id_id
  model_config_rec%auxhist4_inname = trim(auxhist4_inname)
  RETURN
END SUBROUTINE nl_set_auxhist4_inname
SUBROUTINE nl_set_auxhist4_outname ( id_id , auxhist4_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist4_outname
  INTEGER id_id
  model_config_rec%auxhist4_outname = trim(auxhist4_outname)
  RETURN
END SUBROUTINE nl_set_auxhist4_outname
SUBROUTINE nl_set_auxhist4_interval_y ( id_id , auxhist4_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_interval_y
  INTEGER id_id
  model_config_rec%auxhist4_interval_y(id_id) = auxhist4_interval_y
  RETURN
END SUBROUTINE nl_set_auxhist4_interval_y
SUBROUTINE nl_set_auxhist4_interval_d ( id_id , auxhist4_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_interval_d
  INTEGER id_id
  model_config_rec%auxhist4_interval_d(id_id) = auxhist4_interval_d
  RETURN
END SUBROUTINE nl_set_auxhist4_interval_d
SUBROUTINE nl_set_auxhist4_interval_h ( id_id , auxhist4_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_interval_h
  INTEGER id_id
  model_config_rec%auxhist4_interval_h(id_id) = auxhist4_interval_h
  RETURN
END SUBROUTINE nl_set_auxhist4_interval_h
SUBROUTINE nl_set_auxhist4_interval_m ( id_id , auxhist4_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_interval_m
  INTEGER id_id
  model_config_rec%auxhist4_interval_m(id_id) = auxhist4_interval_m
  RETURN
END SUBROUTINE nl_set_auxhist4_interval_m
SUBROUTINE nl_set_auxhist4_interval_s ( id_id , auxhist4_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_interval_s
  INTEGER id_id
  model_config_rec%auxhist4_interval_s(id_id) = auxhist4_interval_s
  RETURN
END SUBROUTINE nl_set_auxhist4_interval_s
SUBROUTINE nl_set_auxhist4_interval ( id_id , auxhist4_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_interval
  INTEGER id_id
  model_config_rec%auxhist4_interval(id_id) = auxhist4_interval
  RETURN
END SUBROUTINE nl_set_auxhist4_interval
SUBROUTINE nl_set_auxhist4_begin_y ( id_id , auxhist4_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_begin_y
  INTEGER id_id
  model_config_rec%auxhist4_begin_y(id_id) = auxhist4_begin_y
  RETURN
END SUBROUTINE nl_set_auxhist4_begin_y
SUBROUTINE nl_set_auxhist4_begin_d ( id_id , auxhist4_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_begin_d
  INTEGER id_id
  model_config_rec%auxhist4_begin_d(id_id) = auxhist4_begin_d
  RETURN
END SUBROUTINE nl_set_auxhist4_begin_d
SUBROUTINE nl_set_auxhist4_begin_h ( id_id , auxhist4_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_begin_h
  INTEGER id_id
  model_config_rec%auxhist4_begin_h(id_id) = auxhist4_begin_h
  RETURN
END SUBROUTINE nl_set_auxhist4_begin_h
SUBROUTINE nl_set_auxhist4_begin_m ( id_id , auxhist4_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_begin_m
  INTEGER id_id
  model_config_rec%auxhist4_begin_m(id_id) = auxhist4_begin_m
  RETURN
END SUBROUTINE nl_set_auxhist4_begin_m
SUBROUTINE nl_set_auxhist4_begin_s ( id_id , auxhist4_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_begin_s
  INTEGER id_id
  model_config_rec%auxhist4_begin_s(id_id) = auxhist4_begin_s
  RETURN
END SUBROUTINE nl_set_auxhist4_begin_s
SUBROUTINE nl_set_auxhist4_begin ( id_id , auxhist4_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_begin
  INTEGER id_id
  model_config_rec%auxhist4_begin(id_id) = auxhist4_begin
  RETURN
END SUBROUTINE nl_set_auxhist4_begin
SUBROUTINE nl_set_auxhist4_end_y ( id_id , auxhist4_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_end_y
  INTEGER id_id
  model_config_rec%auxhist4_end_y(id_id) = auxhist4_end_y
  RETURN
END SUBROUTINE nl_set_auxhist4_end_y
SUBROUTINE nl_set_auxhist4_end_d ( id_id , auxhist4_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_end_d
  INTEGER id_id
  model_config_rec%auxhist4_end_d(id_id) = auxhist4_end_d
  RETURN
END SUBROUTINE nl_set_auxhist4_end_d
SUBROUTINE nl_set_auxhist4_end_h ( id_id , auxhist4_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_end_h
  INTEGER id_id
  model_config_rec%auxhist4_end_h(id_id) = auxhist4_end_h
  RETURN
END SUBROUTINE nl_set_auxhist4_end_h
SUBROUTINE nl_set_auxhist4_end_m ( id_id , auxhist4_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_end_m
  INTEGER id_id
  model_config_rec%auxhist4_end_m(id_id) = auxhist4_end_m
  RETURN
END SUBROUTINE nl_set_auxhist4_end_m
SUBROUTINE nl_set_auxhist4_end_s ( id_id , auxhist4_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_end_s
  INTEGER id_id
  model_config_rec%auxhist4_end_s(id_id) = auxhist4_end_s
  RETURN
END SUBROUTINE nl_set_auxhist4_end_s
SUBROUTINE nl_set_auxhist4_end ( id_id , auxhist4_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist4_end
  INTEGER id_id
  model_config_rec%auxhist4_end(id_id) = auxhist4_end
  RETURN
END SUBROUTINE nl_set_auxhist4_end
SUBROUTINE nl_set_io_form_auxhist4 ( id_id , io_form_auxhist4 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: io_form_auxhist4
  INTEGER id_id
  model_config_rec%io_form_auxhist4 = io_form_auxhist4
  RETURN
END SUBROUTINE nl_set_io_form_auxhist4
SUBROUTINE nl_set_frames_per_auxhist4 ( id_id , frames_per_auxhist4 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: frames_per_auxhist4
  INTEGER id_id
  model_config_rec%frames_per_auxhist4(id_id) = frames_per_auxhist4
  RETURN
END SUBROUTINE nl_set_frames_per_auxhist4
SUBROUTINE nl_set_auxhist5_inname ( id_id , auxhist5_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist5_inname
  INTEGER id_id
  model_config_rec%auxhist5_inname = trim(auxhist5_inname)
  RETURN
END SUBROUTINE nl_set_auxhist5_inname
SUBROUTINE nl_set_auxhist5_outname ( id_id , auxhist5_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist5_outname
  INTEGER id_id
  model_config_rec%auxhist5_outname = trim(auxhist5_outname)
  RETURN
END SUBROUTINE nl_set_auxhist5_outname
SUBROUTINE nl_set_auxhist5_interval_y ( id_id , auxhist5_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_interval_y
  INTEGER id_id
  model_config_rec%auxhist5_interval_y(id_id) = auxhist5_interval_y
  RETURN
END SUBROUTINE nl_set_auxhist5_interval_y
SUBROUTINE nl_set_auxhist5_interval_d ( id_id , auxhist5_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_interval_d
  INTEGER id_id
  model_config_rec%auxhist5_interval_d(id_id) = auxhist5_interval_d
  RETURN
END SUBROUTINE nl_set_auxhist5_interval_d
SUBROUTINE nl_set_auxhist5_interval_h ( id_id , auxhist5_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_interval_h
  INTEGER id_id
  model_config_rec%auxhist5_interval_h(id_id) = auxhist5_interval_h
  RETURN
END SUBROUTINE nl_set_auxhist5_interval_h
SUBROUTINE nl_set_auxhist5_interval_m ( id_id , auxhist5_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_interval_m
  INTEGER id_id
  model_config_rec%auxhist5_interval_m(id_id) = auxhist5_interval_m
  RETURN
END SUBROUTINE nl_set_auxhist5_interval_m
SUBROUTINE nl_set_auxhist5_interval_s ( id_id , auxhist5_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_interval_s
  INTEGER id_id
  model_config_rec%auxhist5_interval_s(id_id) = auxhist5_interval_s
  RETURN
END SUBROUTINE nl_set_auxhist5_interval_s
SUBROUTINE nl_set_auxhist5_interval ( id_id , auxhist5_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_interval
  INTEGER id_id
  model_config_rec%auxhist5_interval(id_id) = auxhist5_interval
  RETURN
END SUBROUTINE nl_set_auxhist5_interval
SUBROUTINE nl_set_auxhist5_begin_y ( id_id , auxhist5_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_begin_y
  INTEGER id_id
  model_config_rec%auxhist5_begin_y(id_id) = auxhist5_begin_y
  RETURN
END SUBROUTINE nl_set_auxhist5_begin_y
SUBROUTINE nl_set_auxhist5_begin_d ( id_id , auxhist5_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_begin_d
  INTEGER id_id
  model_config_rec%auxhist5_begin_d(id_id) = auxhist5_begin_d
  RETURN
END SUBROUTINE nl_set_auxhist5_begin_d
SUBROUTINE nl_set_auxhist5_begin_h ( id_id , auxhist5_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_begin_h
  INTEGER id_id
  model_config_rec%auxhist5_begin_h(id_id) = auxhist5_begin_h
  RETURN
END SUBROUTINE nl_set_auxhist5_begin_h
SUBROUTINE nl_set_auxhist5_begin_m ( id_id , auxhist5_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_begin_m
  INTEGER id_id
  model_config_rec%auxhist5_begin_m(id_id) = auxhist5_begin_m
  RETURN
END SUBROUTINE nl_set_auxhist5_begin_m
SUBROUTINE nl_set_auxhist5_begin_s ( id_id , auxhist5_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_begin_s
  INTEGER id_id
  model_config_rec%auxhist5_begin_s(id_id) = auxhist5_begin_s
  RETURN
END SUBROUTINE nl_set_auxhist5_begin_s
SUBROUTINE nl_set_auxhist5_begin ( id_id , auxhist5_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_begin
  INTEGER id_id
  model_config_rec%auxhist5_begin(id_id) = auxhist5_begin
  RETURN
END SUBROUTINE nl_set_auxhist5_begin
SUBROUTINE nl_set_auxhist5_end_y ( id_id , auxhist5_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_end_y
  INTEGER id_id
  model_config_rec%auxhist5_end_y(id_id) = auxhist5_end_y
  RETURN
END SUBROUTINE nl_set_auxhist5_end_y
SUBROUTINE nl_set_auxhist5_end_d ( id_id , auxhist5_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_end_d
  INTEGER id_id
  model_config_rec%auxhist5_end_d(id_id) = auxhist5_end_d
  RETURN
END SUBROUTINE nl_set_auxhist5_end_d
SUBROUTINE nl_set_auxhist5_end_h ( id_id , auxhist5_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_end_h
  INTEGER id_id
  model_config_rec%auxhist5_end_h(id_id) = auxhist5_end_h
  RETURN
END SUBROUTINE nl_set_auxhist5_end_h
SUBROUTINE nl_set_auxhist5_end_m ( id_id , auxhist5_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_end_m
  INTEGER id_id
  model_config_rec%auxhist5_end_m(id_id) = auxhist5_end_m
  RETURN
END SUBROUTINE nl_set_auxhist5_end_m
SUBROUTINE nl_set_auxhist5_end_s ( id_id , auxhist5_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_end_s
  INTEGER id_id
  model_config_rec%auxhist5_end_s(id_id) = auxhist5_end_s
  RETURN
END SUBROUTINE nl_set_auxhist5_end_s
SUBROUTINE nl_set_auxhist5_end ( id_id , auxhist5_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist5_end
  INTEGER id_id
  model_config_rec%auxhist5_end(id_id) = auxhist5_end
  RETURN
END SUBROUTINE nl_set_auxhist5_end
SUBROUTINE nl_set_io_form_auxhist5 ( id_id , io_form_auxhist5 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: io_form_auxhist5
  INTEGER id_id
  model_config_rec%io_form_auxhist5 = io_form_auxhist5
  RETURN
END SUBROUTINE nl_set_io_form_auxhist5
SUBROUTINE nl_set_frames_per_auxhist5 ( id_id , frames_per_auxhist5 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: frames_per_auxhist5
  INTEGER id_id
  model_config_rec%frames_per_auxhist5(id_id) = frames_per_auxhist5
  RETURN
END SUBROUTINE nl_set_frames_per_auxhist5
SUBROUTINE nl_set_auxhist6_inname ( id_id , auxhist6_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist6_inname
  INTEGER id_id
  model_config_rec%auxhist6_inname = trim(auxhist6_inname)
  RETURN
END SUBROUTINE nl_set_auxhist6_inname
SUBROUTINE nl_set_auxhist6_outname ( id_id , auxhist6_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist6_outname
  INTEGER id_id
  model_config_rec%auxhist6_outname = trim(auxhist6_outname)
  RETURN
END SUBROUTINE nl_set_auxhist6_outname
SUBROUTINE nl_set_auxhist6_interval_y ( id_id , auxhist6_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_interval_y
  INTEGER id_id
  model_config_rec%auxhist6_interval_y(id_id) = auxhist6_interval_y
  RETURN
END SUBROUTINE nl_set_auxhist6_interval_y
SUBROUTINE nl_set_auxhist6_interval_d ( id_id , auxhist6_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_interval_d
  INTEGER id_id
  model_config_rec%auxhist6_interval_d(id_id) = auxhist6_interval_d
  RETURN
END SUBROUTINE nl_set_auxhist6_interval_d
SUBROUTINE nl_set_auxhist6_interval_h ( id_id , auxhist6_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_interval_h
  INTEGER id_id
  model_config_rec%auxhist6_interval_h(id_id) = auxhist6_interval_h
  RETURN
END SUBROUTINE nl_set_auxhist6_interval_h
SUBROUTINE nl_set_auxhist6_interval_m ( id_id , auxhist6_interval_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_interval_m
  INTEGER id_id
  model_config_rec%auxhist6_interval_m(id_id) = auxhist6_interval_m
  RETURN
END SUBROUTINE nl_set_auxhist6_interval_m
SUBROUTINE nl_set_auxhist6_interval_s ( id_id , auxhist6_interval_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_interval_s
  INTEGER id_id
  model_config_rec%auxhist6_interval_s(id_id) = auxhist6_interval_s
  RETURN
END SUBROUTINE nl_set_auxhist6_interval_s
SUBROUTINE nl_set_auxhist6_interval ( id_id , auxhist6_interval )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_interval
  INTEGER id_id
  model_config_rec%auxhist6_interval(id_id) = auxhist6_interval
  RETURN
END SUBROUTINE nl_set_auxhist6_interval
SUBROUTINE nl_set_auxhist6_begin_y ( id_id , auxhist6_begin_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_begin_y
  INTEGER id_id
  model_config_rec%auxhist6_begin_y(id_id) = auxhist6_begin_y
  RETURN
END SUBROUTINE nl_set_auxhist6_begin_y
SUBROUTINE nl_set_auxhist6_begin_d ( id_id , auxhist6_begin_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_begin_d
  INTEGER id_id
  model_config_rec%auxhist6_begin_d(id_id) = auxhist6_begin_d
  RETURN
END SUBROUTINE nl_set_auxhist6_begin_d
SUBROUTINE nl_set_auxhist6_begin_h ( id_id , auxhist6_begin_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_begin_h
  INTEGER id_id
  model_config_rec%auxhist6_begin_h(id_id) = auxhist6_begin_h
  RETURN
END SUBROUTINE nl_set_auxhist6_begin_h
SUBROUTINE nl_set_auxhist6_begin_m ( id_id , auxhist6_begin_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_begin_m
  INTEGER id_id
  model_config_rec%auxhist6_begin_m(id_id) = auxhist6_begin_m
  RETURN
END SUBROUTINE nl_set_auxhist6_begin_m
SUBROUTINE nl_set_auxhist6_begin_s ( id_id , auxhist6_begin_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_begin_s
  INTEGER id_id
  model_config_rec%auxhist6_begin_s(id_id) = auxhist6_begin_s
  RETURN
END SUBROUTINE nl_set_auxhist6_begin_s
SUBROUTINE nl_set_auxhist6_begin ( id_id , auxhist6_begin )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_begin
  INTEGER id_id
  model_config_rec%auxhist6_begin(id_id) = auxhist6_begin
  RETURN
END SUBROUTINE nl_set_auxhist6_begin
SUBROUTINE nl_set_auxhist6_end_y ( id_id , auxhist6_end_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_end_y
  INTEGER id_id
  model_config_rec%auxhist6_end_y(id_id) = auxhist6_end_y
  RETURN
END SUBROUTINE nl_set_auxhist6_end_y
SUBROUTINE nl_set_auxhist6_end_d ( id_id , auxhist6_end_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_end_d
  INTEGER id_id
  model_config_rec%auxhist6_end_d(id_id) = auxhist6_end_d
  RETURN
END SUBROUTINE nl_set_auxhist6_end_d
SUBROUTINE nl_set_auxhist6_end_h ( id_id , auxhist6_end_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_end_h
  INTEGER id_id
  model_config_rec%auxhist6_end_h(id_id) = auxhist6_end_h
  RETURN
END SUBROUTINE nl_set_auxhist6_end_h
SUBROUTINE nl_set_auxhist6_end_m ( id_id , auxhist6_end_m )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_end_m
  INTEGER id_id
  model_config_rec%auxhist6_end_m(id_id) = auxhist6_end_m
  RETURN
END SUBROUTINE nl_set_auxhist6_end_m
SUBROUTINE nl_set_auxhist6_end_s ( id_id , auxhist6_end_s )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_end_s
  INTEGER id_id
  model_config_rec%auxhist6_end_s(id_id) = auxhist6_end_s
  RETURN
END SUBROUTINE nl_set_auxhist6_end_s
SUBROUTINE nl_set_auxhist6_end ( id_id , auxhist6_end )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist6_end
  INTEGER id_id
  model_config_rec%auxhist6_end(id_id) = auxhist6_end
  RETURN
END SUBROUTINE nl_set_auxhist6_end
SUBROUTINE nl_set_io_form_auxhist6 ( id_id , io_form_auxhist6 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: io_form_auxhist6
  INTEGER id_id
  model_config_rec%io_form_auxhist6 = io_form_auxhist6
  RETURN
END SUBROUTINE nl_set_io_form_auxhist6
SUBROUTINE nl_set_frames_per_auxhist6 ( id_id , frames_per_auxhist6 )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: frames_per_auxhist6
  INTEGER id_id
  model_config_rec%frames_per_auxhist6(id_id) = frames_per_auxhist6
  RETURN
END SUBROUTINE nl_set_frames_per_auxhist6
SUBROUTINE nl_set_auxhist7_inname ( id_id , auxhist7_inname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist7_inname
  INTEGER id_id
  model_config_rec%auxhist7_inname = trim(auxhist7_inname)
  RETURN
END SUBROUTINE nl_set_auxhist7_inname
SUBROUTINE nl_set_auxhist7_outname ( id_id , auxhist7_outname )
  USE module_configure, ONLY : model_config_rec
  character(LEN=256) , INTENT(IN) :: auxhist7_outname
  INTEGER id_id
  model_config_rec%auxhist7_outname = trim(auxhist7_outname)
  RETURN
END SUBROUTINE nl_set_auxhist7_outname
SUBROUTINE nl_set_auxhist7_interval_y ( id_id , auxhist7_interval_y )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist7_interval_y
  INTEGER id_id
  model_config_rec%auxhist7_interval_y(id_id) = auxhist7_interval_y
  RETURN
END SUBROUTINE nl_set_auxhist7_interval_y
SUBROUTINE nl_set_auxhist7_interval_d ( id_id , auxhist7_interval_d )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist7_interval_d
  INTEGER id_id
  model_config_rec%auxhist7_interval_d(id_id) = auxhist7_interval_d
  RETURN
END SUBROUTINE nl_set_auxhist7_interval_d
SUBROUTINE nl_set_auxhist7_interval_h ( id_id , auxhist7_interval_h )
  USE module_configure, ONLY : model_config_rec
  integer , INTENT(IN) :: auxhist7_interval_h
  INTEGER id_id
  model_config_rec%auxhist7_interval_h(id_id) = auxhist7_interval_h
  RETURN
END SUBROUTINE nl_set_auxhist7_interval_h
!ENDOFREGISTRYGENERATEDINCLUDE
