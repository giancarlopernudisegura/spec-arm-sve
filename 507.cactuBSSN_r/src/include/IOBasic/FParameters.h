#define DECLARE_CCTK_PARAMETERS \
CCTK_DECLARE(CCTK_REAL,outInfo_dt,)&&\
CCTK_DECLARE(CCTK_REAL,outScalar_dt,)&&\
CCTK_DECLARE(CCTK_STRING,outInfo_criterion,)&&\
CCTK_DECLARE(CCTK_STRING,outInfo_reductions,)&&\
CCTK_DECLARE(CCTK_STRING,outInfo_vars,)&&\
CCTK_DECLARE(CCTK_STRING,outScalar_criterion,)&&\
CCTK_DECLARE(CCTK_STRING,outScalar_reductions,)&&\
CCTK_DECLARE(CCTK_STRING,outScalar_style,)&&\
CCTK_DECLARE(CCTK_STRING,outScalar_vars,)&&\
CCTK_DECLARE(CCTK_STRING,out_dir,)&&\
CCTK_DECLARE(CCTK_STRING,out_format,)&&\
CCTK_DECLARE(CCTK_INT,outInfo_every,)&&\
CCTK_DECLARE(CCTK_INT,outScalar_every,)&&\
COMMON /IOBasicpriv/outInfo_dt, outScalar_dt, outInfo_criterion, outInfo_reductions, outInfo_vars, outScalar_criterion, outScalar_reductions, outScalar_style, outScalar_vars, out_dir, out_format, outInfo_every, outScalar_every&&\
CCTK_DECLARE(CCTK_REAL,CCTKH5,)&&\
CCTK_DECLARE(CCTK_REAL,out_dt,)&&\
CCTK_DECLARE(CCTK_REAL,CCTKH22,)&&\
CCTK_DECLARE(CCTK_REAL,CCTKH24,)&&\
CCTK_DECLARE(CCTK_REAL,CCTKH26,)&&\
CCTK_DECLARE(CCTK_REAL,CCTKH28,)&&\
CCTK_DECLARE(CCTK_REAL,CCTKH30,)&&\
CCTK_DECLARE(CCTK_REAL,CCTKH32,)&&\
CCTK_DECLARE(CCTK_REAL,CCTKH34,)&&\
CCTK_DECLARE(CCTK_REAL,CCTKH36,)&&\
CCTK_DECLARE(CCTK_REAL,CCTKH38,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH2,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH3,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH6,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH9,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH10,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH11,)&&\
CCTK_DECLARE(CCTK_STRING,out_criterion,)&&\
CCTK_DECLARE(CCTK_STRING,io_out_dir,)&&\
CCTK_DECLARE(CCTK_STRING,out_fileinfo,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH16,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH18,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH40,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH42,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH44,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH46,)&&\
CCTK_DECLARE(CCTK_STRING,CCTKH47,)&&\
CCTK_DECLARE(CCTK_STRING,verbose,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH0,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH1,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH4,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH7,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH8,)&&\
CCTK_DECLARE(CCTK_INT,new_filename_scheme,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH12,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH13,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH14,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH15,)&&\
CCTK_DECLARE(CCTK_INT,out_every,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH17,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH19,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH20,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH21,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH23,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH25,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH27,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH29,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH31,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH33,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH35,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH37,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH39,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH41,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH43,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH45,)&&\
CCTK_DECLARE(CCTK_INT,CCTKH48,)&&\
CCTK_DECLARE(CCTK_INT,strict_io_parameter_check,)&&\
COMMON /IOrest/CCTKH5, out_dt, CCTKH22, CCTKH24, CCTKH26, CCTKH28, CCTKH30, CCTKH32, CCTKH34, CCTKH36, CCTKH38, CCTKH2, CCTKH3, CCTKH6, CCTKH9, CCTKH10, CCTKH11, out_criterion, io_out_dir, out_fileinfo, CCTKH16, CCTKH18, CCTKH40, CCTKH42, CCTKH44, CCTKH46, CCTKH47, verbose, CCTKH0, CCTKH1, CCTKH4, CCTKH7, CCTKH8, new_filename_scheme, CCTKH12, CCTKH13, CCTKH14, CCTKH15, out_every, CCTKH17, CCTKH19, CCTKH20, CCTKH21, CCTKH23, CCTKH25, CCTKH27, CCTKH29, CCTKH31, CCTKH33, CCTKH35, CCTKH37, CCTKH39, CCTKH41, CCTKH43, CCTKH45, CCTKH48, strict_io_parameter_check&&\

