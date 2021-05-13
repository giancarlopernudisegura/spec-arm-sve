  function gases(PRES_mb,T,RH,f)
  implicit none
  
  integer, parameter :: r8 = selected_real_kind(15)

! Purpose:
!   Compute 2-way gaseous attenuation through a volume in microwave
!
! Inputs:
!   [PRES_mb]   pressure (mb) (hPa)
!   [T]         temperature (K)
!   [RH]        relative humidity (%)
!   [f]         frequency (GHz), < 300 GHz
!
! Returns:
!   2-way gaseous attenuation (dB/km)
!
! Reference:
!   Uses method of Liebe (1985)
!
! Created:
!   12/09/05  John Haynes (haynes@atmos.colostate.edu)
! Modified:
!   01/31/06  Port from IDL to Fortran 90

  integer, parameter :: &
  nbands_o2 = 48 ,&
  nbands_h2o = 30
  real(8), intent(in) :: PRES_mb, T, RH, f
  real(8) :: gases, th, e, p, sumo, gm0, a0, ap, term1, term2, term3, &
            bf, be, term4, npp
  real(8), dimension(nbands_o2) :: v0, a1, a2, a3, a4, a5, a6
  real(8), dimension(nbands_h2o) :: v1, b1, b2, b3
  integer :: i
  
! // table1 parameters  v0, a1, a2, a3, a4, a5, a6  
  data v0/49.4523790_r8,49.9622570_r8,50.4742380_r8,50.9877480_r8,51.5033500_r8, &
  52.0214090_r8,52.5423930_r8,53.0669060_r8,53.5957480_r8,54.1299999_r8,54.6711570_r8, &
  55.2213650_r8,55.7838000_r8,56.2647770_r8,56.3378700_r8,56.9681000_r8,57.6124810_r8, &
  58.3238740_r8,58.4465890_r8,59.1642040_r8,59.5909820_r8,60.3060570_r8,60.4347750_r8, &
  61.1505580_r8,61.8001520_r8,62.4112120_r8,62.4862530_r8,62.9979740_r8,63.5685150_r8, &
  64.1277640_r8,64.6789000_r8,65.2240670_r8,65.7647690_r8,66.3020880_r8,66.8368270_r8, &
  67.3695950_r8,67.9008620_r8,68.4310010_r8,68.9603060_r8,69.4890210_r8,70.0173420_r8, &
  118.7503410_r8,368.4983500_r8,424.7631200_r8,487.2493700_r8,715.3931500_r8, &
  773.8387300_r8, 834.1453300_r8/
  data a1/0.0000001_r8,0.0000003_r8,0.0000009_r8,0.0000025_r8,0.0000061_r8,0.0000141_r8, &
  0.0000310_r8,0.0000641_r8,0.0001247_r8,0.0002280_r8,0.0003918_r8,0.0006316_r8,0.0009535_r8, &
  0.0005489_r8,0.0013440_r8,0.0017630_r8,0.0000213_r8,0.0000239_r8,0.0000146_r8,0.0000240_r8, &
  0.0000211_r8,0.0000212_r8,0.0000246_r8,0.0000250_r8,0.0000230_r8,0.0000193_r8,0.0000152_r8, &
  0.0000150_r8,0.0000109_r8,0.0007335_r8,0.0004635_r8,0.0002748_r8,0.0001530_r8,0.0000801_r8, &
  0.0000395_r8,0.0000183_r8,0.0000080_r8,0.0000033_r8,0.0000013_r8,0.0000005_r8,0.0000002_r8, &
  0.0000094_r8,0.0000679_r8,0.0006380_r8,0.0002350_r8,0.0000996_r8,0.0006710_r8,0.0001800_r8/
  data a2/11.8300000_r8,10.7200000_r8,9.6900000_r8,8.8900000_r8,7.7400000_r8,6.8400000_r8, &
  6.0000000_r8,5.2200000_r8,4.4800000_r8,3.8100000_r8,3.1900000_r8,2.6200000_r8,2.1150000_r8, &
  0.0100000_r8,1.6550000_r8,1.2550000_r8,0.9100000_r8,0.6210000_r8,0.0790000_r8,0.3860000_r8, &
  0.2070000_r8,0.2070000_r8,0.3860000_r8,0.6210000_r8,0.9100000_r8,1.2550000_r8,0.0780000_r8, &
  1.6600000_r8,2.1100000_r8,2.6200000_r8,3.1900000_r8,3.8100000_r8,4.4800000_r8,5.2200000_r8, &
  6.0000000_r8,6.8400000_r8,7.7400000_r8,8.6900000_r8,9.6900000_r8,10.7200000_r8,11.8300000_r8, &
  0.0000000_r8,0.0200000_r8,0.0110000_r8,0.0110000_r8,0.0890000_r8,0.0790000_r8,0.0790000_r8/
  data a3/0.0083000_r8,0.0085000_r8,0.0086000_r8,0.0087000_r8,0.0089000_r8,0.0092000_r8, &
  0.0094000_r8,0.0097000_r8,0.0100000_r8,0.0102000_r8,0.0105000_r8,0.0107900_r8,0.0111000_r8, &
  0.0164600_r8,0.0114400_r8,0.0118100_r8,0.0122100_r8,0.0126600_r8,0.0144900_r8,0.0131900_r8, &
  0.0136000_r8,0.0138200_r8,0.0129700_r8,0.0124800_r8,0.0120700_r8,0.0117100_r8,0.0146800_r8, &
  0.0113900_r8,0.0110800_r8,0.0107800_r8,0.0105000_r8,0.0102000_r8,0.0100000_r8,0.0097000_r8, &
  0.0094000_r8,0.0092000_r8,0.0089000_r8,0.0087000_r8,0.0086000_r8,0.0085000_r8,0.0084000_r8, &
  0.0159200_r8,0.0192000_r8,0.0191600_r8,0.0192000_r8,0.0181000_r8,0.0181000_r8,0.0181000_r8/
  data a4/0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8, &
  0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8, &
  0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8, &
  0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8, &
  0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8, &
  0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8, &
  0.0000000_r8,0.6000000_r8,0.6000000_r8,0.6000000_r8,0.6000000_r8,0.6000000_r8,0.6000000_r8/
  data a5/0.0056000_r8,0.0056000_r8,0.0056000_r8,0.0055000_r8,0.0056000_r8,0.0055000_r8, &
  0.0057000_r8,0.0053000_r8,0.0054000_r8,0.0048000_r8,0.0048000_r8,0.0041700_r8,0.0037500_r8, &
  0.0077400_r8,0.0029700_r8,0.0021200_r8,0.0009400_r8,-0.0005500_r8,0.0059700_r8,-0.0024400_r8, &
  0.0034400_r8,-0.0041300_r8,0.0013200_r8,-0.0003600_r8,-0.0015900_r8,-0.0026600_r8, &
  -0.0047700_r8,-0.0033400_r8,-0.0041700_r8,-0.0044800_r8,-0.0051000_r8,-0.0051000_r8, &
  -0.0057000_r8,-0.0055000_r8,-0.0059000_r8,-0.0056000_r8,-0.0058000_r8,-0.0057000_r8, &
  -0.0056000_r8,-0.0056000_r8,-0.0056000_r8,-0.0004400_r8,0.0000000_r8,0.0000000_r8, &
  0.0000000_r8,0.0000000_r8,0.0000000_r8,0.0000000_r8/
  data a6/1.7000000_r8,1.7000000_r8,1.7000000_r8,1.7000000_r8,1.8000000_r8,1.8000000_r8,&
  1.8000000_r8,1.9000000_r8,1.8000000_r8,2.0000000_r8,1.9000000_r8,2.1000000_r8,2.1000000_r8, &
  0.9000000_r8,2.3000000_r8,2.5000000_r8,3.7000000_r8,-3.1000000_r8,0.8000000_r8,0.1000000_r8, &
  0.5000000_r8,0.7000000_r8,-1.0000000_r8,5.8000000_r8,2.9000000_r8,2.3000000_r8,0.9000000_r8, &
  2.2000000_r8,2.0000000_r8,2.0000000_r8,1.8000000_r8,1.9000000_r8,1.8000000_r8,1.8000000_r8, &
  1.7000000_r8,1.8000000_r8,1.7000000_r8,1.7000000_r8,1.7000000_r8,1.7000000_r8,1.7000000_r8, &
  0.9000000_r8,1.0000000_r8,1.0000000_r8,1.0000000_r8,1.0000000_r8,1.0000000_r8,1.0000000_r8/

! // table2 parameters  v1, b1, b2, b3
  data v1/22.2350800_r8,67.8139600_r8,119.9959400_r8,183.3101170_r8,321.2256440_r8, &
  325.1529190_r8,336.1870000_r8,380.1973720_r8,390.1345080_r8,437.3466670_r8,439.1508120_r8, &
  443.0182950_r8,448.0010750_r8,470.8889740_r8,474.6891270_r8,488.4911330_r8,503.5685320_r8, &
  504.4826920_r8,556.9360020_r8,620.7008070_r8,658.0065000_r8,752.0332270_r8,841.0735950_r8, &
  859.8650000_r8,899.4070000_r8,902.5550000_r8,906.2055240_r8,916.1715820_r8,970.3150220_r8, &
  987.9267640_r8/
  data b1/0.1090000_r8,0.0011000_r8,0.0007000_r8,2.3000000_r8,0.0464000_r8,1.5400000_r8, &
  0.0010000_r8,11.9000000_r8,0.0044000_r8,0.0637000_r8,0.9210000_r8,0.1940000_r8,10.6000000_r8, &
  0.3300000_r8,1.2800000_r8,0.2530000_r8,0.0374000_r8,0.0125000_r8,510.0000000_r8,5.0900000_r8, &
  0.2740000_r8,250.0000000_r8,0.0130000_r8,0.1330000_r8,0.0550000_r8,0.0380000_r8,0.1830000_r8, &
  8.5600000_r8,9.1600000_r8,138.0000000_r8/
  data b2/2.1430000_r8,8.7300000_r8,8.3470000_r8,0.6530000_r8,6.1560000_r8,1.5150000_r8, &
  9.8020000_r8,1.0180000_r8,7.3180000_r8,5.0150000_r8,3.5610000_r8,5.0150000_r8,1.3700000_r8, &
  3.5610000_r8,2.3420000_r8,2.8140000_r8,6.6930000_r8,6.6930000_r8,0.1140000_r8,2.1500000_r8, &
  7.7670000_r8,0.3360000_r8,8.1130000_r8,7.9890000_r8,7.8450000_r8,8.3600000_r8,5.0390000_r8, &
  1.3690000_r8,1.8420000_r8,0.1780000_r8/
  data b3/0.0278400_r8,0.0276000_r8,0.0270000_r8,0.0283500_r8,0.0214000_r8,0.0270000_r8, &
  0.0265000_r8,0.0276000_r8,0.0190000_r8,0.0137000_r8,0.0164000_r8,0.0144000_r8,0.0238000_r8, &
  0.0182000_r8,0.0198000_r8,0.0249000_r8,0.0115000_r8,0.0119000_r8,0.0300000_r8,0.0223000_r8, &
  0.0300000_r8,0.0286000_r8,0.0141000_r8,0.0286000_r8,0.0286000_r8,0.0264000_r8,0.0234000_r8, &
  0.0253000_r8,0.0240000_r8,0.0286000_r8/
  
! // conversions
  th = 300._r8/T       ! unitless
  e = (RH*th**5)/(41.45_r8*10**(9.834_r8*th-10))   ! kPa
  p = PRES_mb/10._r8-e ! kPa

! // term1
  sumo = 0._r8
  do i=1,nbands_o2
    sumo = sumo + fpp_o2(p,th,e,a3(i),a4(i),a5(i),a6(i),f,v0(i)) &
           * s_o2(p,th,a1(i),a2(i))
  enddo
  term1 = sumo

! // term2
  gm0 = 5.6E-3_r8*(p+1.1_r8*e)*th**(0.8_r8)
  a0 = 3.07E-4_r8
  ap = 1.4_r8*(1-1.2_r8*f**(1.5_r8)*1E-5_r8)*1E-10_r8
  term2 = (2*a0*(gm0*(1+(f/gm0)**2)*(1+(f/60._r8)**2))**(-1) + ap*p*th**(2.5_r8)) &
          * f*p*th**2

! // term3
  sumo = 0._r8
  do i=1,nbands_h2o
    sumo = sumo + fpp_h2o(p,th,e,b3(i),f,v1(i)) &
           * s_h2o(th,e,b1(i),b2(i))
  enddo
  term3 = sumo

! // term4
  bf = 1.4E-6_r8
  be = 5.41E-5_r8
  term4 = (bf*p+be*e*th**3)*f*e*th**(2.5_r8)

! // summation and result
  npp = term1 + term2 + term3 + term4
  gases = 0.182_r8*f*npp

! ----- SUB FUNCTIONS -----
    
  contains
  
  function fpp_o2(p,th,e,a3,a4,a5,a6,f,v0)
  real(8) :: fpp_o2,p,th,e,a3,a4,a5,a6,f,v0
  real(8) :: gm, delt, x, y
  gm = a3*(p*th**(0.8_r8-a4)+1.1_r8*e*th)
  delt = a5*p*th**(a6)
  x = (v0-f)**2+gm**2
  y = (v0+f)**2+gm**2
  fpp_o2 = ((1._r8/x)+(1._r8/y))*(gm*f/v0) - (delt*f/v0)*(((v0-f)/(x))-((v0+f)/(x)))  
  end function fpp_o2
  
  function fpp_h2o(p,th,e,b3,f,v0)
  real(8) :: fpp_h2o,p,th,e,b3,f,v0
  real(8) :: gm, delt, x, y
  gm = b3*(p*th**(0.8_r8)+4.8_r8*e*th)
  delt = 0._r8
  x = (v0-f)**2+gm**2
  y = (v0+f)**2+gm**2
  fpp_h2o = ((1._r8/x)+(1._r8/y))*(gm*f/v0) - (delt*f/v0)*(((v0-f)/(x))-((v0+f)/(x)))
  end function fpp_h2o
  
  function s_o2(p,th,a1,a2)
  real(8) :: s_o2,p,th,a1,a2
  s_o2 = a1*p*th**(3)*exp(a2*(1-th))
  end function s_o2

  function s_h2o(th,e,b1,b2)
  real(8) :: s_h2o,th,e,b1,b2
  s_h2o = b1*e*th**(3.5_r8)*exp(b2*(1-th))
  end function s_h2o
  
  end function gases
