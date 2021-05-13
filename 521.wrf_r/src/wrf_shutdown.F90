!WRF:DRIVER_LAYER:UTIL
!
SUBROUTINE wrf_shutdown
#if !defined(NO_IEEE_MODULE) && !defined(SPEC)
   USE , INTRINSIC :: IEEE_EXCEPTIONS
#endif

#ifdef DM_PARALLEL
    LOGICAL wrf_dm_on_monitor
    EXTERNAL wrf_dm_on_monitor
    EXTERNAL wrf_dm_shutdown
#endif
#ifdef DM_PARALLEL
    CALL wrf_dm_shutdown
#else
#if defined(NO_IEEE_MODULE) || defined(SPEC)
    STOP
# else
    CALL IEEE_SET_FLAG(IEEE_INEXACT,.false.)
    STOP
# endif
#endif
END SUBROUTINE wrf_shutdown

