union{
#declare Elbow=union{intersection{torus{1,0.2} plane{x,0} plane{z,0}}
torus{0.2,0.06 rotate z*90 translate -z*1}
torus{0.2,0.06 rotate x*90 translate -x*1}
torus{0.2,0.06 rotate x*90 translate -x*1 rotate y*-30}
torus{0.2,0.06 rotate x*90 translate -x*1 rotate y*-60}
}
cylinder{<0,0,1>,<0,0,5.30668>,0.2}
cylinder{<0,0,7.30668>,<0,0,11.299>,0.2}
cylinder{<0,0,5.30668>,<0,0,7.30668>,0.2}
cylinder{<1,0,12.299>,<6.47497,0,12.299>,0.2}
object{Elbow scale <1,1,-1> translate -z*1  translate <1,0,12.299>}
cylinder{<8.47497,0,12.299>,<13.6082,0,12.299>,0.2}
cylinder{<6.47497,0,12.299>,<8.47497,0,12.299>,0.2}
cylinder{<14.6082,0,11.299>,<14.6082,0,8.14087>,0.2}
object{Elbow translate x*1 rotate y*180 translate <14.6082,0,11.299>}
cylinder{<14.6082,0,6.14087>,<14.6082,0,1.9705>,0.2}
cylinder{<14.6082,0,8.14087>,<14.6082,0,6.14087>,0.2}
cylinder{<15.6082,0,0.970495>,<20.6146,0,0.970495>,0.2}
object{Elbow translate z*1  translate <15.6082,0,0.970495>}
cylinder{<21.6146,0,1.9705>,<21.6146,0,4.64728>,0.2}
object{Elbow rotate y*-90 translate -x*1  translate <21.6146,0,1.9705>}
cylinder{<21.6146,0,6.64728>,<21.6146,0,10.8341>,0.2}
cylinder{<21.6146,0,4.64728>,<21.6146,0,6.64728>,0.2}
cylinder{<21.6146,0,12.8341>,<21.6146,0,15.7847>,0.2}
cylinder{<21.6146,0,10.8341>,<21.6146,0,12.8341>,0.2}
cylinder{<20.6146,0,16.7847>,<18.4621,0,16.7847>,0.2}
object{Elbow scale <-1,1,-1> translate -z*1  translate <20.6146,0,16.7847>}
cylinder{<17.4621,1,16.7847>,<17.4621,6.88801,16.7847>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <17.4621,1,16.7847>}
cylinder{<17.4621,8.88801,16.7847>,<17.4621,11.3664,16.7847>,0.2}
cylinder{<17.4621,6.88801,16.7847>,<17.4621,8.88801,16.7847>,0.2}
cylinder{<16.4621,12.3664,16.7847>,<13.1959,12.3664,16.7847>,0.2}
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <16.4621,12.3664,16.7847>}
cylinder{<11.1959,12.3664,16.7847>,<6.49482,12.3664,16.7847>,0.2}
cylinder{<13.1959,12.3664,16.7847>,<11.1959,12.3664,16.7847>,0.2}
cylinder{<4.49482,12.3664,16.7847>,<0.620736,12.3664,16.7847>,0.2}
cylinder{<6.49482,12.3664,16.7847>,<4.49482,12.3664,16.7847>,0.2}
cylinder{<-0.379264,12.3664,15.7847>,<-0.379264,12.3664,11.6853>,0.2}
object{Elbow scale <1,1,-1> translate x*1  translate <-0.379264,12.3664,15.7847>}
cylinder{<-1.37926,12.3664,10.6853>,<-7.30699,12.3664,10.6853>,0.2}
object{Elbow scale <-1,1,1> translate z*1  translate <-1.37926,12.3664,10.6853>}
cylinder{<-9.30699,12.3664,10.6853>,<-13.6616,12.3664,10.6853>,0.2}
cylinder{<-7.30699,12.3664,10.6853>,<-9.30699,12.3664,10.6853>,0.2}
cylinder{<-15.6616,12.3664,10.6853>,<-20.8708,12.3664,10.6853>,0.2}
cylinder{<-13.6616,12.3664,10.6853>,<-15.6616,12.3664,10.6853>,0.2}
cylinder{<-22.8708,12.3664,10.6853>,<-25.8974,12.3664,10.6853>,0.2}
cylinder{<-20.8708,12.3664,10.6853>,<-22.8708,12.3664,10.6853>,0.2}
cylinder{<-26.8974,12.3664,9.68532>,<-26.8974,12.3664,4.32045>,0.2}
object{Elbow scale <1,1,-1> translate x*1  translate <-26.8974,12.3664,9.68532>}
cylinder{<-25.8974,12.3664,3.32045>,<-23.1131,12.3664,3.32045>,0.2}
object{Elbow translate z*1  translate <-25.8974,12.3664,3.32045>}
cylinder{<-22.1131,11.3664,3.32045>,<-22.1131,5.56465,3.32045>,0.2}
object{Elbow translate x*1 rotate x*90 rotate y*180 translate <-22.1131,11.3664,3.32045>}
cylinder{<-22.1131,4.56465,4.32045>,<-22.1131,4.56465,6.64742>,0.2}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1  translate <-22.1131,4.56465,4.32045>}
cylinder{<-22.1131,4.56465,8.64742>,<-22.1131,4.56465,12.2665>,0.2}
cylinder{<-22.1131,4.56465,6.64742>,<-22.1131,4.56465,8.64742>,0.2}
cylinder{<-22.1131,3.56465,13.2665>,<-22.1131,-2.37051,13.2665>,0.2}
object{Elbow rotate y*90 rotate -z*90 translate -z*1  translate <-22.1131,3.56465,13.2665>}
cylinder{<-21.1131,-3.37051,13.2665>,<-18.1014,-3.37051,13.2665>,0.2}
object{Elbow rotate -x*90 translate y*1  translate <-21.1131,-3.37051,13.2665>}
cylinder{<-17.1014,-3.37051,14.2665>,<-17.1014,-3.37051,17.8537>,0.2}
object{Elbow rotate y*-90 translate -x*1  translate <-17.1014,-3.37051,14.2665>}
cylinder{<-17.1014,-3.37051,19.8537>,<-17.1014,-3.37051,22.4391>,0.2}
cylinder{<-17.1014,-3.37051,17.8537>,<-17.1014,-3.37051,19.8537>,0.2}
cylinder{<-17.1014,-3.37051,24.4391>,<-17.1014,-3.37051,27.0197>,0.2}
cylinder{<-17.1014,-3.37051,22.4391>,<-17.1014,-3.37051,24.4391>,0.2}
cylinder{<-16.1014,-3.37051,28.0197>,<-12.0839,-3.37051,28.0197>,0.2}
object{Elbow scale <1,1,-1> translate -z*1  translate <-16.1014,-3.37051,28.0197>}
cylinder{<-11.0839,-3.37051,27.0197>,<-11.0839,-3.37051,22.426>,0.2}
object{Elbow translate x*1 rotate y*180 translate <-11.0839,-3.37051,27.0197>}
cylinder{<-10.0839,-3.37051,21.426>,<-7.57896,-3.37051,21.426>,0.2}
object{Elbow translate z*1  translate <-10.0839,-3.37051,21.426>}
cylinder{<-5.57896,-3.37051,21.426>,<-2.45189,-3.37051,21.426>,0.2}
cylinder{<-7.57896,-3.37051,21.426>,<-5.57896,-3.37051,21.426>,0.2}
cylinder{<-0.451891,-3.37051,21.426>,<3.98139,-3.37051,21.426>,0.2}
cylinder{<-2.45189,-3.37051,21.426>,<-0.451891,-3.37051,21.426>,0.2}
cylinder{<4.98139,-2.37051,21.426>,<4.98139,2.89096,21.426>,0.2}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1  translate <4.98139,-2.37051,21.426>}
cylinder{<3.98139,3.89096,21.426>,<1.27447,3.89096,21.426>,0.2}
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <3.98139,3.89096,21.426>}
cylinder{<0.274467,4.89096,21.426>,<0.274467,7.55966,21.426>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <0.274467,4.89096,21.426>}
cylinder{<1.27447,8.55966,21.426>,<6.45082,8.55966,21.426>,0.2}
object{Elbow translate z*1 rotate y*90 rotate x*-90 translate -x*1 translate -y*1  translate <1.27447,8.55966,21.426>}
cylinder{<8.45082,8.55966,21.426>,<14.2657,8.55966,21.426>,0.2}
cylinder{<6.45082,8.55966,21.426>,<8.45082,8.55966,21.426>,0.2}
cylinder{<15.2657,8.55966,20.426>,<15.2657,8.55966,15.8251>,0.2}
object{Elbow translate x*1 rotate y*180 translate <15.2657,8.55966,20.426>}
cylinder{<15.2657,8.55966,13.8251>,<15.2657,8.55966,9.53302>,0.2}
cylinder{<15.2657,8.55966,15.8251>,<15.2657,8.55966,13.8251>,0.2}
cylinder{<15.2657,9.55966,8.53302>,<15.2657,13.1438,8.53302>,0.2}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1  translate <15.2657,9.55966,8.53302>}
cylinder{<15.2657,14.1438,9.53302>,<15.2657,14.1438,14.7496>,0.2}
object{Elbow translate z*1 rotate -z*90 translate -z*1 translate -y*1  translate <15.2657,14.1438,9.53302>}
cylinder{<15.2657,14.1438,16.7496>,<15.2657,14.1438,21.6686>,0.2}
cylinder{<15.2657,14.1438,14.7496>,<15.2657,14.1438,16.7496>,0.2}
cylinder{<15.2657,14.1438,23.6686>,<15.2657,14.1438,26.2996>,0.2}
cylinder{<15.2657,14.1438,21.6686>,<15.2657,14.1438,23.6686>,0.2}
cylinder{<14.2657,14.1438,27.2996>,<11.4844,14.1438,27.2996>,0.2}
object{Elbow scale <-1,1,-1> translate -z*1  translate <14.2657,14.1438,27.2996>}
cylinder{<10.4844,15.1438,27.2996>,<10.4844,18.9913,27.2996>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <10.4844,15.1438,27.2996>}
cylinder{<10.4844,20.9913,27.2996>,<10.4844,24.1991,27.2996>,0.2}
cylinder{<10.4844,18.9913,27.2996>,<10.4844,20.9913,27.2996>,0.2}
cylinder{<10.4844,25.1991,26.2996>,<10.4844,25.1991,22.6287>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.372309 rotate y*90*-1 translate<10.4844,25.1991,26.0362> }
object{Deco[5] scale 0.2 rotate x*360*0.392759 rotate y*90*-1 translate<10.4844,25.1991,25.9997> }
object{Deco[4] scale 0.2 rotate x*360*0.686017 rotate y*90*-1 translate<10.4844,25.1991,25.9222> }
object{Deco[0] scale 0.2 rotate x*360*0.809982 rotate y*90*-1 translate<10.4844,25.1991,25.6775> }
object{Deco[1] scale 0.2 rotate x*360*0.539775 rotate y*90*-1 translate<10.4844,25.1991,25.5212> }
object{Deco[5] scale 0.2 rotate x*360*0.219516 rotate y*90*-1 translate<10.4844,25.1991,25.4267> }
object{Deco[2] scale 0.2 rotate x*360*0.249712 rotate y*90*-1 translate<10.4844,25.1991,25.3073> }
object{Deco[3] scale 0.2 rotate x*360*0.506868 rotate y*90*-1 translate<10.4844,25.1991,25.1468> }
object{Deco[0] scale 0.2 rotate x*360*0.266903 rotate y*90*-1 translate<10.4844,25.1991,24.9064> }
object{Deco[2] scale 0.2 rotate x*360*0.0206923 rotate y*90*-1 translate<10.4844,25.1991,24.8245> }
object{Elbow rotate y*180 rotate z*90 translate -y*1  translate <10.4844,25.1991,26.2996>}
cylinder{<11.4844,25.1991,21.6287>,<17.4113,25.1991,21.6287>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.551101 scale <1,1,1> translate<12.004,25.1991,21.6287> }
object{Deco[2] scale 0.2 rotate x*360*0.973558 scale <1,1,1> translate<12.2987,25.1991,21.6287> }
object{Deco[5] scale 0.2 rotate x*360*0.681348 scale <1,1,1> translate<12.8292,25.1991,21.6287> }
object{Deco[5] scale 0.2 rotate x*360*0.0634921 scale <1,1,1> translate<12.9323,25.1991,21.6287> }
object{Deco[1] scale 0.2 rotate x*360*0.627224 scale <1,1,1> translate<13.428,25.1991,21.6287> }
object{Deco[2] scale 0.2 rotate x*360*0.432265 scale <1,1,1> translate<13.4859,25.1991,21.6287> }
object{Deco[2] scale 0.2 rotate x*360*0.246984 scale <1,1,1> translate<13.6892,25.1991,21.6287> }
object{Deco[0] scale 0.2 rotate x*360*0.00197356 scale <1,1,1> translate<13.9337,25.1991,21.6287> }
object{Deco[5] scale 0.2 rotate x*360*0.373519 scale <1,1,1> translate<14.0908,25.1991,21.6287> }
object{Deco[6] scale 0.2 rotate x*360*0.934681 scale <1,1,1> translate<14.115,25.1991,21.6287> }
object{Elbow translate z*1  translate <11.4844,25.1991,21.6287>}
cylinder{<18.4113,24.1991,21.6287>,<18.4113,20.3005,21.6287>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.508989 rotate z*90*-1 translate<18.4113,24.1505,21.6287> }
object{Deco[4] scale 0.2 rotate x*360*0.0440053 rotate z*90*-1 translate<18.4113,23.8657,21.6287> }
object{Deco[4] scale 0.2 rotate x*360*0.809939 rotate z*90*-1 translate<18.4113,23.845,21.6287> }
object{Deco[6] scale 0.2 rotate x*360*0.892839 rotate z*90*-1 translate<18.4113,23.4965,21.6287> }
object{Deco[3] scale 0.2 rotate x*360*0.619883 rotate z*90*-1 translate<18.4113,23.2382,21.6287> }
object{Deco[2] scale 0.2 rotate x*360*0.633763 rotate z*90*-1 translate<18.4113,23.0417,21.6287> }
object{Deco[2] scale 0.2 rotate x*360*0.513517 rotate z*90*-1 translate<18.4113,22.8456,21.6287> }
object{Deco[3] scale 0.2 rotate x*360*0.468134 rotate z*90*-1 translate<18.4113,22.7236,21.6287> }
object{Deco[6] scale 0.2 rotate x*360*0.180648 rotate z*90*-1 translate<18.4113,22.646,21.6287> }
object{Deco[2] scale 0.2 rotate x*360*0.836762 rotate z*90*-1 translate<18.4113,22.4081,21.6287> }
object{Elbow translate x*1 rotate x*90 rotate y*180 translate <18.4113,24.1991,21.6287>}
cylinder{<19.4113,19.3005,21.6287>,<25.0631,19.3005,21.6287>,0.2}
object{Elbow rotate -x*90 translate y*1  translate <19.4113,19.3005,21.6287>}
cylinder{<26.0631,19.3005,20.6287>,<26.0631,19.3005,16.5465>,0.2}
object{Elbow translate x*1 rotate y*180 translate <26.0631,19.3005,20.6287>}
cylinder{<26.0631,19.3005,14.5465>,<26.0631,19.3005,9.2689>,0.2}
cylinder{<26.0631,19.3005,16.5465>,<26.0631,19.3005,14.5465>,0.2}
cylinder{<26.0631,19.3005,7.2689>,<26.0631,19.3005,3.79049>,0.2}
cylinder{<26.0631,19.3005,9.2689>,<26.0631,19.3005,7.2689>,0.2}
cylinder{<26.0631,20.3005,2.79049>,<26.0631,23.3917,2.79049>,0.2}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1  translate <26.0631,20.3005,2.79049>}
cylinder{<26.0631,25.3917,2.79049>,<26.0631,28.6457,2.79049>,0.2}
cylinder{<26.0631,23.3917,2.79049>,<26.0631,25.3917,2.79049>,0.2}
cylinder{<26.0631,30.6457,2.79049>,<26.0631,33.6146,2.79049>,0.2}
cylinder{<26.0631,28.6457,2.79049>,<26.0631,30.6457,2.79049>,0.2}
cylinder{<26.0631,34.6146,3.79049>,<26.0631,34.6146,7.1937>,0.2}
object{Elbow translate z*1 rotate -z*90 translate -z*1 translate -y*1  translate <26.0631,34.6146,3.79049>}
cylinder{<27.0631,34.6146,8.1937>,<28,34.6146,8.1937>,0.2}
object{Elbow scale <1,1,-1> translate -z*1  translate <27.0631,34.6146,8.1937>}
cylinder{<29,33.6146,8.1937>,<29,30.3582,8.1937>,0.2}
object{Elbow translate x*1 rotate x*90 rotate y*180 translate <29,33.6146,8.1937>}
cylinder{<29,28.3582,8.1937>,<29,25.3819,8.1937>,0.2}
cylinder{<29,30.3582,8.1937>,<29,28.3582,8.1937>,0.2}
cylinder{<29,23.3819,8.1937>,<29,19.4308,8.1937>,0.2}
cylinder{<29,25.3819,8.1937>,<29,23.3819,8.1937>,0.2}
cylinder{<29,17.4308,8.1937>,<29,12.4466,8.1937>,0.2}
cylinder{<29,19.4308,8.1937>,<29,17.4308,8.1937>,0.2}
cylinder{<29,10.4466,8.1937>,<29,4.6972,8.1937>,0.2}
cylinder{<29,12.4466,8.1937>,<29,10.4466,8.1937>,0.2}
cylinder{<29,2.6972,8.1937>,<29,-2.11204,8.1937>,0.2}
cylinder{<29,4.6972,8.1937>,<29,2.6972,8.1937>,0.2}
cylinder{<29,-4.11204,8.1937>,<29,-8.75366,8.1937>,0.2}
cylinder{<29,-2.11204,8.1937>,<29,-4.11204,8.1937>,0.2}
cylinder{<29,-9.75366,9.1937>,<29,-9.75366,14.5087>,0.2}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1  translate <29,-9.75366,9.1937>}
cylinder{<29,-9.75366,16.5087>,<29,-9.75366,21.7095>,0.2}
cylinder{<29,-9.75366,14.5087>,<29,-9.75366,16.5087>,0.2}
cylinder{<29,-9.75366,23.7095>,<29,-9.75366,27.1354>,0.2}
cylinder{<29,-9.75366,21.7095>,<29,-9.75366,23.7095>,0.2}
cylinder{<29,-8.75366,28.1354>,<29,-3.64248,28.1354>,0.2}
object{Elbow rotate z*90 scale <1,1,-1> translate <29,-8.75366,28.1354>}
cylinder{<28,-2.64248,28.1354>,<22.7139,-2.64248,28.1354>,0.2}
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <28,-2.64248,28.1354>}
cylinder{<20.7139,-2.64248,28.1354>,<16.0345,-2.64248,28.1354>,0.2}
cylinder{<22.7139,-2.64248,28.1354>,<20.7139,-2.64248,28.1354>,0.2}
cylinder{<14.0345,-2.64248,28.1354>,<8.31757,-2.64248,28.1354>,0.2}
cylinder{<16.0345,-2.64248,28.1354>,<14.0345,-2.64248,28.1354>,0.2}
cylinder{<6.31757,-2.64248,28.1354>,<0.90127,-2.64248,28.1354>,0.2}
cylinder{<8.31757,-2.64248,28.1354>,<6.31757,-2.64248,28.1354>,0.2}
cylinder{<-1.09873,-2.64248,28.1354>,<-3.13155,-2.64248,28.1354>,0.2}
cylinder{<0.90127,-2.64248,28.1354>,<-1.09873,-2.64248,28.1354>,0.2}
cylinder{<-5.13155,-2.64248,28.1354>,<-10.5752,-2.64248,28.1354>,0.2}
cylinder{<-3.13155,-2.64248,28.1354>,<-5.13155,-2.64248,28.1354>,0.2}
cylinder{<-11.5752,-1.64248,28.1354>,<-11.5752,3.12568,28.1354>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-11.5752,-1.64248,28.1354>}
cylinder{<-12.5752,4.12568,28.1354>,<-18.144,4.12568,28.1354>,0.2}
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <-12.5752,4.12568,28.1354>}
cylinder{<-19.144,4.12568,27.1354>,<-19.144,4.12568,23.2149>,0.2}
object{Elbow scale <1,1,-1> translate x*1  translate <-19.144,4.12568,27.1354>}
cylinder{<-19.144,3.12568,22.2149>,<-19.144,-0.793156,22.2149>,0.2}
object{Elbow translate z*1 rotate -z*90 translate <-19.144,3.12568,22.2149>}
cylinder{<-19.144,-2.79316,22.2149>,<-19.144,-5.87224,22.2149>,0.2}
cylinder{<-19.144,-0.793156,22.2149>,<-19.144,-2.79316,22.2149>,0.2}
cylinder{<-19.144,-7.87224,22.2149>,<-19.144,-10.6704,22.2149>,0.2}
cylinder{<-19.144,-5.87224,22.2149>,<-19.144,-7.87224,22.2149>,0.2}
cylinder{<-19.144,-11.6704,23.2149>,<-19.144,-11.6704,26.0852>,0.2}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1  translate <-19.144,-11.6704,23.2149>}
cylinder{<-19.144,-11.6704,28.0852>,<-19.144,-11.6704,30.2907>,0.2}
cylinder{<-19.144,-11.6704,26.0852>,<-19.144,-11.6704,28.0852>,0.2}
cylinder{<-18.144,-11.6704,31.2907>,<-15.488,-11.6704,31.2907>,0.2}
object{Elbow scale <1,1,-1> translate -z*1  translate <-18.144,-11.6704,31.2907>}
cylinder{<-13.488,-11.6704,31.2907>,<-10.0387,-11.6704,31.2907>,0.2}
cylinder{<-15.488,-11.6704,31.2907>,<-13.488,-11.6704,31.2907>,0.2}
cylinder{<-9.03871,-12.6704,31.2907>,<-9.03871,-15.0951,31.2907>,0.2}
object{Elbow translate x*1 rotate x*90 rotate y*180 translate <-9.03871,-12.6704,31.2907>}
cylinder{<-10.0387,-16.0951,31.2907>,<-13.3361,-16.0951,31.2907>,0.2}
object{Elbow translate z*1 rotate y*180 rotate x*90  translate <-10.0387,-16.0951,31.2907>}
cylinder{<-14.3361,-17.0951,31.2907>,<-14.3361,-20.9052,31.2907>,0.2}
object{Elbow translate x*1 rotate x*90 translate <-14.3361,-17.0951,31.2907>}
cylinder{<-14.3361,-21.9052,32.2907>,<-14.3361,-21.9052,36.3907>,0.2}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1  translate <-14.3361,-21.9052,32.2907>}
cylinder{<-14.3361,-21.9052,38.3907>,<-14.3361,-21.9052,40.568>,0.2}
cylinder{<-14.3361,-21.9052,36.3907>,<-14.3361,-21.9052,38.3907>,0.2}
cylinder{<-13.3361,-21.9052,41.568>,<-11.0133,-21.9052,41.568>,0.2}
object{Elbow scale <1,1,-1> translate -z*1  translate <-13.3361,-21.9052,41.568>}
cylinder{<-9.01327,-21.9052,41.568>,<-6.30106,-21.9052,41.568>,0.2}
cylinder{<-11.0133,-21.9052,41.568>,<-9.01327,-21.9052,41.568>,0.2}
cylinder{<-5.30106,-21.9052,42.568>,<-5.30106,-21.9052,42.5>,0.2}
object{Elbow rotate y*-90 translate -x*1  translate <-5.30106,-21.9052,42.568>}
cylinder{<-4.30106,-21.9052,43.5>,<-1.84859,-21.9052,43.5>,0.2}
object{Elbow scale <1,1,-1> translate -z*1  translate <-4.30106,-21.9052,43.5>}
cylinder{<-0.848593,-21.9052,42.5>,<-0.848593,-21.9052,38.4624>,0.2}
object{Elbow translate x*1 rotate y*180 translate <-0.848593,-21.9052,42.5>}
cylinder{<-1.84859,-21.9052,37.4624>,<-7.04609,-21.9052,37.4624>,0.2}
object{Elbow scale <-1,1,1> translate z*1  translate <-1.84859,-21.9052,37.4624>}
cylinder{<-8.04609,-22.9052,37.4624>,<-8.04609,-28.2317,37.4624>,0.2}
object{Elbow translate x*1 rotate x*90 translate <-8.04609,-22.9052,37.4624>}
cylinder{<-9.04609,-29.2317,37.4624>,<-14.2809,-29.2317,37.4624>,0.2}
object{Elbow translate z*1 rotate y*180 rotate x*90  translate <-9.04609,-29.2317,37.4624>}
cylinder{<-15.2809,-28.2317,37.4624>,<-15.2809,-25.6649,37.4624>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.132975 rotate z*90*1 translate<-15.2809,-28.0426,37.4624> }
object{Deco[4] scale 0.2 rotate x*360*0.337252 rotate z*90*1 translate<-15.2809,-27.939,37.4624> }
object{Deco[2] scale 0.2 rotate x*360*0.646031 rotate z*90*1 translate<-15.2809,-27.9056,37.4624> }
object{Deco[0] scale 0.2 rotate x*360*0.48885 rotate z*90*1 translate<-15.2809,-27.7214,37.4624> }
object{Deco[6] scale 0.2 rotate x*360*0.771775 rotate z*90*1 translate<-15.2809,-27.5992,37.4624> }
object{Deco[3] scale 0.2 rotate x*360*0.0916672 rotate z*90*1 translate<-15.2809,-27.5047,37.4624> }
object{Deco[5] scale 0.2 rotate x*360*0.128648 rotate z*90*1 translate<-15.2809,-27.3306,37.4624> }
object{Deco[0] scale 0.2 rotate x*360*0.104807 rotate z*90*1 translate<-15.2809,-27.2197,37.4624> }
object{Deco[3] scale 0.2 rotate x*360*0.865925 rotate z*90*1 translate<-15.2809,-27.1772,37.4624> }
object{Deco[4] scale 0.2 rotate x*360*0.576404 rotate z*90*1 translate<-15.2809,-27.1372,37.4624> }
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-15.2809,-28.2317,37.4624>}
cylinder{<-14.2809,-24.6649,37.4624>,<-8.45912,-24.6649,37.4624>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.593514 scale <1,1,1> translate<-14.2415,-24.6649,37.4624> }
object{Deco[1] scale 0.2 rotate x*360*0.521493 scale <1,1,1> translate<-13.8233,-24.6649,37.4624> }
object{Deco[6] scale 0.2 rotate x*360*0.944645 scale <1,1,1> translate<-13.392,-24.6649,37.4624> }
object{Deco[5] scale 0.2 rotate x*360*0.79827 scale <1,1,1> translate<-13.3779,-24.6649,37.4624> }
object{Deco[4] scale 0.2 rotate x*360*0.0053424 scale <1,1,1> translate<-13.1942,-24.6649,37.4624> }
object{Deco[6] scale 0.2 rotate x*360*0.336077 scale <1,1,1> translate<-12.807,-24.6649,37.4624> }
object{Deco[5] scale 0.2 rotate x*360*0.938952 scale <1,1,1> translate<-12.6981,-24.6649,37.4624> }
object{Deco[1] scale 0.2 rotate x*360*0.76192 scale <1,1,1> translate<-12.5891,-24.6649,37.4624> }
object{Deco[6] scale 0.2 rotate x*360*0.0574172 scale <1,1,1> translate<-12.4858,-24.6649,37.4624> }
object{Deco[6] scale 0.2 rotate x*360*0.789122 scale <1,1,1> translate<-12.2384,-24.6649,37.4624> }
object{Elbow translate z*1 rotate y*90 rotate x*-90 translate -x*1 translate -y*1  translate <-14.2809,-24.6649,37.4624>}
cylinder{<-7.45912,-23.6649,37.4624>,<-7.45912,-19.8201,37.4624>,0.2}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1  translate <-7.45912,-23.6649,37.4624>}
cylinder{<-7.45912,-17.8201,37.4624>,<-7.45912,-13.0009,37.4624>,0.2}
cylinder{<-7.45912,-19.8201,37.4624>,<-7.45912,-17.8201,37.4624>,0.2}
cylinder{<-7.45912,-12.0009,36.4624>,<-7.45912,-12.0009,32.227>,0.2}
object{Elbow rotate y*180 rotate z*90 translate -y*1  translate <-7.45912,-12.0009,36.4624>}
cylinder{<-8.45912,-12.0009,31.227>,<-12.184,-12.0009,31.227>,0.2}
object{Elbow scale <-1,1,1> translate z*1  translate <-8.45912,-12.0009,31.227>}
cylinder{<-13.184,-12.0009,32.227>,<-13.184,-12.0009,35.6427>,0.2}
object{Elbow translate x*1  translate <-13.184,-12.0009,32.227>}
cylinder{<-12.184,-12.0009,36.6427>,<-7.1165,-12.0009,36.6427>,0.2}
object{Elbow scale <1,1,-1> translate -z*1  translate <-12.184,-12.0009,36.6427>}
cylinder{<-6.1165,-12.0009,37.6427>,<-6.1165,-12.0009,41.2287>,0.2}
object{Elbow rotate y*-90 translate -x*1  translate <-6.1165,-12.0009,37.6427>}
cylinder{<-6.1165,-12.0009,43.2287>,<-6.1165,-12.0009,42.5>,0.2}
cylinder{<-6.1165,-12.0009,41.2287>,<-6.1165,-12.0009,43.2287>,0.2}
cylinder{<-6.1165,-13.0009,43.5>,<-6.1165,-17.4005,43.5>,0.2}
object{Elbow rotate y*90 rotate -z*90 translate -z*1  translate <-6.1165,-13.0009,43.5>}
cylinder{<-6.1165,-19.4005,43.5>,<-6.1165,-24.721,43.5>,0.2}
cylinder{<-6.1165,-17.4005,43.5>,<-6.1165,-19.4005,43.5>,0.2}
cylinder{<-6.1165,-25.721,42.5>,<-6.1165,-25.721,37.562>,0.2}
object{Elbow translate z*1 rotate z*90 rotate -x*90 translate <-6.1165,-25.721,42.5>}
cylinder{<-6.1165,-26.721,36.562>,<-6.1165,-31.5627,36.562>,0.2}
object{Elbow translate z*1 rotate -z*90 translate <-6.1165,-26.721,36.562>}
cylinder{<-6.1165,-32.5627,37.562>,<-6.1165,-32.5627,40.0313>,0.2}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1  translate <-6.1165,-32.5627,37.562>}
cylinder{<-7.1165,-32.5627,41.0313>,<-10.2668,-32.5627,41.0313>,0.2}
object{Elbow scale <-1,1,-1> translate -z*1  translate <-7.1165,-32.5627,41.0313>}
cylinder{<-12.2668,-32.5627,41.0313>,<-17.698,-32.5627,41.0313>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.959031 scale <-1,1,1> translate<-12.5527,-32.5627,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.501195 scale <-1,1,1> translate<-12.6852,-32.5627,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.6134 scale <-1,1,1> translate<-13.1112,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.106784 scale <-1,1,1> translate<-13.4096,-32.5627,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.0149774 scale <-1,1,1> translate<-13.8666,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.292848 scale <-1,1,1> translate<-13.9246,-32.5627,41.0313> }
object{Deco[1] scale 0.2 rotate x*360*0.414679 scale <-1,1,1> translate<-14.4126,-32.5627,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.741209 scale <-1,1,1> translate<-14.6635,-32.5627,41.0313> }
object{Deco[1] scale 0.2 rotate x*360*0.509887 scale <-1,1,1> translate<-15.0546,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.117529 scale <-1,1,1> translate<-15.5228,-32.5627,41.0313> }
cylinder{<-10.2668,-32.5627,41.0313>,<-12.2668,-32.5627,41.0313>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.599418 scale <-1,1,1> translate<-10.4182,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.626507 scale <-1,1,1> translate<-10.5912,-32.5627,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.867464 scale <-1,1,1> translate<-10.5982,-32.5627,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.344668 scale <-1,1,1> translate<-10.7709,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.544204 scale <-1,1,1> translate<-10.7856,-32.5627,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.685383 scale <-1,1,1> translate<-10.9208,-32.5627,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.711261 scale <-1,1,1> translate<-10.9519,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.32044 scale <-1,1,1> translate<-11.0101,-32.5627,41.0313> }
object{Deco[1] scale 0.2 rotate x*360*0.517276 scale <-1,1,1> translate<-11.0785,-32.5627,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.172549 scale <-1,1,1> translate<-11.1674,-32.5627,41.0313> }
cylinder{<-19.698,-32.5627,41.0313>,<-24.0469,-32.5627,41.0313>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.153029 scale <-1,1,1> translate<-20.036,-32.5627,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.426416 scale <-1,1,1> translate<-20.3389,-32.5627,41.0313> }
object{Deco[4] scale 0.2 rotate x*360*0.879841 scale <-1,1,1> translate<-20.7101,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.721173 scale <-1,1,1> translate<-21.0426,-32.5627,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.21097 scale <-1,1,1> translate<-21.0521,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.715663 scale <-1,1,1> translate<-21.3537,-32.5627,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.95083 scale <-1,1,1> translate<-21.5659,-32.5627,41.0313> }
object{Deco[1] scale 0.2 rotate x*360*0.232517 scale <-1,1,1> translate<-21.7451,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.318352 scale <-1,1,1> translate<-21.9231,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.848679 scale <-1,1,1> translate<-22.0822,-32.5627,41.0313> }
cylinder{<-17.698,-32.5627,41.0313>,<-19.698,-32.5627,41.0313>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.722451 scale <-1,1,1> translate<-17.8188,-32.5627,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.755605 scale <-1,1,1> translate<-17.8806,-32.5627,41.0313> }
object{Deco[1] scale 0.2 rotate x*360*0.147056 scale <-1,1,1> translate<-18.0126,-32.5627,41.0313> }
object{Deco[3] scale 0.2 rotate x*360*0.693581 scale <-1,1,1> translate<-18.0909,-32.5627,41.0313> }
object{Deco[3] scale 0.2 rotate x*360*0.433439 scale <-1,1,1> translate<-18.144,-32.5627,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.850887 scale <-1,1,1> translate<-18.3185,-32.5627,41.0313> }
object{Deco[4] scale 0.2 rotate x*360*0.150876 scale <-1,1,1> translate<-18.4218,-32.5627,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.689871 scale <-1,1,1> translate<-18.5056,-32.5627,41.0313> }
object{Deco[1] scale 0.2 rotate x*360*0.689063 scale <-1,1,1> translate<-18.5866,-32.5627,41.0313> }
object{Deco[1] scale 0.2 rotate x*360*0.366046 scale <-1,1,1> translate<-18.7073,-32.5627,41.0313> }
cylinder{<-25.0469,-31.5627,41.0313>,<-25.0469,-28.8597,41.0313>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.849682 rotate z*90*1 translate<-25.0469,-31.4399,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.516729 rotate z*90*1 translate<-25.0469,-31.3648,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.729021 rotate z*90*1 translate<-25.0469,-31.2733,41.0313> }
object{Deco[4] scale 0.2 rotate x*360*0.618517 rotate z*90*1 translate<-25.0469,-31.1098,41.0313> }
object{Deco[3] scale 0.2 rotate x*360*0.424485 rotate z*90*1 translate<-25.0469,-31.0938,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.188273 rotate z*90*1 translate<-25.0469,-31.0025,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.264485 rotate z*90*1 translate<-25.0469,-30.7977,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.772143 rotate z*90*1 translate<-25.0469,-30.7227,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.752928 rotate z*90*1 translate<-25.0469,-30.6675,41.0313> }
object{Deco[3] scale 0.2 rotate x*360*0.613556 rotate z*90*1 translate<-25.0469,-30.5467,41.0313> }
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-25.0469,-31.5627,41.0313>}
cylinder{<-26.0469,-27.8597,41.0313>,<-28,-27.8597,41.0313>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.729222 scale <-1,1,1> translate<-26.1497,-27.8597,41.0313> }
object{Deco[3] scale 0.2 rotate x*360*0.911582 scale <-1,1,1> translate<-26.2239,-27.8597,41.0313> }
object{Deco[6] scale 0.2 rotate x*360*0.453652 scale <-1,1,1> translate<-26.3314,-27.8597,41.0313> }
object{Deco[2] scale 0.2 rotate x*360*0.117681 scale <-1,1,1> translate<-26.4393,-27.8597,41.0313> }
object{Deco[5] scale 0.2 rotate x*360*0.441047 scale <-1,1,1> translate<-26.4524,-27.8597,41.0313> }
object{Deco[1] scale 0.2 rotate x*360*0.471111 scale <-1,1,1> translate<-26.5406,-27.8597,41.0313> }
object{Deco[0] scale 0.2 rotate x*360*0.0821779 scale <-1,1,1> translate<-26.6962,-27.8597,41.0313> }
object{Deco[3] scale 0.2 rotate x*360*0.0827716 scale <-1,1,1> translate<-26.7963,-27.8597,41.0313> }
object{Deco[3] scale 0.2 rotate x*360*0.880411 scale <-1,1,1> translate<-26.9595,-27.8597,41.0313> }
object{Deco[1] scale 0.2 rotate x*360*0.143873 scale <-1,1,1> translate<-26.9891,-27.8597,41.0313> }
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <-26.0469,-27.8597,41.0313>}
cylinder{<-29,-27.8597,42.0313>,<-29,-27.8597,42.5>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.931749 rotate y*90*1 translate<-29,-27.8597,42.0371> }
object{Deco[3] scale 0.2 rotate x*360*0.0679716 rotate y*90*1 translate<-29,-27.8597,42.0439> }
object{Deco[1] scale 0.2 rotate x*360*0.792996 rotate y*90*1 translate<-29,-27.8597,42.0781> }
object{Deco[3] scale 0.2 rotate x*360*0.0835282 rotate y*90*1 translate<-29,-27.8597,42.1006> }
object{Deco[5] scale 0.2 rotate x*360*0.254978 rotate y*90*1 translate<-29,-27.8597,42.1293> }
object{Deco[6] scale 0.2 rotate x*360*0.911191 rotate y*90*1 translate<-29,-27.8597,42.1564> }
object{Deco[6] scale 0.2 rotate x*360*0.761547 rotate y*90*1 translate<-29,-27.8597,42.1588> }
object{Deco[4] scale 0.2 rotate x*360*0.645072 rotate y*90*1 translate<-29,-27.8597,42.1694> }
object{Deco[5] scale 0.2 rotate x*360*0.888286 rotate y*90*1 translate<-29,-27.8597,42.1951> }
object{Deco[3] scale 0.2 rotate x*360*0.721524 rotate y*90*1 translate<-29,-27.8597,42.1962> }
object{Elbow translate x*1  translate <-29,-27.8597,42.0313>}
cylinder{<-29,-28.8597,43.5>,<-29,-31.5112,43.5>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.106067 rotate z*90*-1 translate<-29,-29.0062,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.37933 rotate z*90*-1 translate<-29,-29.2237,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.922223 rotate z*90*-1 translate<-29,-29.2645,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.79914 rotate z*90*-1 translate<-29,-29.436,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.966252 rotate z*90*-1 translate<-29,-29.5996,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.235931 rotate z*90*-1 translate<-29,-29.6549,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.413309 rotate z*90*-1 translate<-29,-29.8509,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.122984 rotate z*90*-1 translate<-29,-30.0033,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.171449 rotate z*90*-1 translate<-29,-30.0162,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.87666 rotate z*90*-1 translate<-29,-30.2085,43.5> }
object{Elbow rotate y*90 rotate -z*90 translate -z*1  translate <-29,-28.8597,43.5>}
cylinder{<-29,-33.5112,43.5>,<-29,-38.4359,43.5>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.40687 rotate z*90*-1 translate<-29,-33.9495,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.0879476 rotate z*90*-1 translate<-29,-34.1755,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.0102498 rotate z*90*-1 translate<-29,-34.4977,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.686433 rotate z*90*-1 translate<-29,-34.9177,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.0948695 rotate z*90*-1 translate<-29,-34.919,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.269805 rotate z*90*-1 translate<-29,-35.2272,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.400026 rotate z*90*-1 translate<-29,-35.2726,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.849453 rotate z*90*-1 translate<-29,-35.6402,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.980964 rotate z*90*-1 translate<-29,-35.9549,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.387186 rotate z*90*-1 translate<-29,-36.3601,43.5> }
cylinder{<-29,-31.5112,43.5>,<-29,-33.5112,43.5>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.355918 rotate z*90*-1 translate<-29,-31.5217,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.368811 rotate z*90*-1 translate<-29,-31.5832,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.766638 rotate z*90*-1 translate<-29,-31.6513,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.565106 rotate z*90*-1 translate<-29,-31.6682,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.121358 rotate z*90*-1 translate<-29,-31.7405,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.0271839 rotate z*90*-1 translate<-29,-31.7862,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.842513 rotate z*90*-1 translate<-29,-31.8215,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.684533 rotate z*90*-1 translate<-29,-31.9923,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.0338551 rotate z*90*-1 translate<-29,-32.1513,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.868118 rotate z*90*-1 translate<-29,-32.3234,43.5> }
cylinder{<-29,-40.4359,43.5>,<-29,-45.1394,43.5>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.119682 rotate z*90*-1 translate<-29,-40.8317,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.161923 rotate z*90*-1 translate<-29,-40.9302,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.347791 rotate z*90*-1 translate<-29,-41.257,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.134747 rotate z*90*-1 translate<-29,-41.6593,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.405767 rotate z*90*-1 translate<-29,-42.0862,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.526655 rotate z*90*-1 translate<-29,-42.1997,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.607014 rotate z*90*-1 translate<-29,-42.2359,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.299175 rotate z*90*-1 translate<-29,-42.5532,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.293519 rotate z*90*-1 translate<-29,-42.6879,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.592868 rotate z*90*-1 translate<-29,-43.0014,43.5> }
cylinder{<-29,-38.4359,43.5>,<-29,-40.4359,43.5>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.486812 rotate z*90*-1 translate<-29,-38.4458,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.522058 rotate z*90*-1 translate<-29,-38.4786,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.426952 rotate z*90*-1 translate<-29,-38.5679,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.352871 rotate z*90*-1 translate<-29,-38.6667,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.77259 rotate z*90*-1 translate<-29,-38.8062,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.905535 rotate z*90*-1 translate<-29,-38.8328,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.083829 rotate z*90*-1 translate<-29,-39.0041,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.00723259 rotate z*90*-1 translate<-29,-39.03,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.659774 rotate z*90*-1 translate<-29,-39.0383,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.252462 rotate z*90*-1 translate<-29,-39.0399,43.5> }
cylinder{<-29,-47.1394,43.5>,<-29,-51.6376,43.5>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.766346 rotate z*90*-1 translate<-29,-47.4291,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.875252 rotate z*90*-1 translate<-29,-47.7125,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.450673 rotate z*90*-1 translate<-29,-48.0378,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.682873 rotate z*90*-1 translate<-29,-48.1673,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.851905 rotate z*90*-1 translate<-29,-48.1754,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.328395 rotate z*90*-1 translate<-29,-48.3141,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.00675333 rotate z*90*-1 translate<-29,-48.3964,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.463665 rotate z*90*-1 translate<-29,-48.4724,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.702459 rotate z*90*-1 translate<-29,-48.7145,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.499385 rotate z*90*-1 translate<-29,-48.9514,43.5> }
cylinder{<-29,-45.1394,43.5>,<-29,-47.1394,43.5>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.782862 rotate z*90*-1 translate<-29,-45.2163,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.341259 rotate z*90*-1 translate<-29,-45.2754,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.596028 rotate z*90*-1 translate<-29,-45.3252,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.783997 rotate z*90*-1 translate<-29,-45.3328,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.798887 rotate z*90*-1 translate<-29,-45.3474,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.608202 rotate z*90*-1 translate<-29,-45.5284,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.934522 rotate z*90*-1 translate<-29,-45.5469,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.605877 rotate z*90*-1 translate<-29,-45.6714,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.312039 rotate z*90*-1 translate<-29,-45.7962,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.448707 rotate z*90*-1 translate<-29,-45.9046,43.5> }
cylinder{<-29,-53.6376,43.5>,<-29,-57.6735,43.5>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.652642 rotate z*90*-1 translate<-29,-53.843,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.692884 rotate z*90*-1 translate<-29,-53.8694,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.155777 rotate z*90*-1 translate<-29,-53.9069,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.732922 rotate z*90*-1 translate<-29,-53.9581,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.406125 rotate z*90*-1 translate<-29,-54.1573,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.949643 rotate z*90*-1 translate<-29,-54.4285,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.558754 rotate z*90*-1 translate<-29,-54.7336,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.974767 rotate z*90*-1 translate<-29,-55.0298,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.638355 rotate z*90*-1 translate<-29,-55.3833,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.718836 rotate z*90*-1 translate<-29,-55.5456,43.5> }
cylinder{<-29,-51.6376,43.5>,<-29,-53.6376,43.5>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.505244 rotate z*90*-1 translate<-29,-51.6599,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.133931 rotate z*90*-1 translate<-29,-51.7176,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.0948739 rotate z*90*-1 translate<-29,-51.7983,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.44539 rotate z*90*-1 translate<-29,-51.8695,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.0847869 rotate z*90*-1 translate<-29,-51.9129,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.988406 rotate z*90*-1 translate<-29,-51.9362,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.413457 rotate z*90*-1 translate<-29,-52.0182,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.00508481 rotate z*90*-1 translate<-29,-52.1977,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.322517 rotate z*90*-1 translate<-29,-52.2915,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.297602 rotate z*90*-1 translate<-29,-52.3246,43.5> }
cylinder{<-29,-59.6735,43.5>,<-29,-64.6736,43.5>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.721687 rotate z*90*-1 translate<-29,-59.7326,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.370087 rotate z*90*-1 translate<-29,-59.9853,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.311389 rotate z*90*-1 translate<-29,-60.249,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.747018 rotate z*90*-1 translate<-29,-60.2703,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.822558 rotate z*90*-1 translate<-29,-60.573,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.827094 rotate z*90*-1 translate<-29,-60.676,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.669388 rotate z*90*-1 translate<-29,-60.7224,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.463226 rotate z*90*-1 translate<-29,-60.8526,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.627673 rotate z*90*-1 translate<-29,-61.0516,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.18897 rotate z*90*-1 translate<-29,-61.3785,43.5> }
cylinder{<-29,-57.6735,43.5>,<-29,-59.6735,43.5>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.893963 rotate z*90*-1 translate<-29,-57.8506,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.493275 rotate z*90*-1 translate<-29,-57.8994,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.930069 rotate z*90*-1 translate<-29,-57.9865,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.767008 rotate z*90*-1 translate<-29,-58.015,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.0368973 rotate z*90*-1 translate<-29,-58.016,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.843233 rotate z*90*-1 translate<-29,-58.168,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.254891 rotate z*90*-1 translate<-29,-58.2071,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.374551 rotate z*90*-1 translate<-29,-58.3434,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.380767 rotate z*90*-1 translate<-29,-58.3996,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.244877 rotate z*90*-1 translate<-29,-58.4474,43.5> }
cylinder{<-29,-66.6736,43.5>,<-29,-69.1322,43.5>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.582071 rotate z*90*-1 translate<-29,-66.8799,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.0055579 rotate z*90*-1 translate<-29,-66.9793,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.542025 rotate z*90*-1 translate<-29,-67.0693,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.317899 rotate z*90*-1 translate<-29,-67.0989,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.367611 rotate z*90*-1 translate<-29,-67.1125,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.0614118 rotate z*90*-1 translate<-29,-67.1969,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.634908 rotate z*90*-1 translate<-29,-67.3096,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.976145 rotate z*90*-1 translate<-29,-67.5248,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.800827 rotate z*90*-1 translate<-29,-67.547,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.891912 rotate z*90*-1 translate<-29,-67.7059,43.5> }
cylinder{<-29,-64.6736,43.5>,<-29,-66.6736,43.5>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.802783 rotate z*90*-1 translate<-29,-64.8364,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.990832 rotate z*90*-1 translate<-29,-64.9095,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.611707 rotate z*90*-1 translate<-29,-65.0879,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.112736 rotate z*90*-1 translate<-29,-65.2578,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.776084 rotate z*90*-1 translate<-29,-65.3353,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.744185 rotate z*90*-1 translate<-29,-65.4161,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.398087 rotate z*90*-1 translate<-29,-65.5612,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.40313 rotate z*90*-1 translate<-29,-65.5766,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.925214 rotate z*90*-1 translate<-29,-65.706,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.835353 rotate z*90*-1 translate<-29,-65.8143,43.5> }
cylinder{<-29,-71.1322,43.5>,<-29,-76.0798,43.5>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.90161 rotate z*90*-1 translate<-29,-71.2215,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.66505 rotate z*90*-1 translate<-29,-71.6616,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.828162 rotate z*90*-1 translate<-29,-72.0537,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.468496 rotate z*90*-1 translate<-29,-72.0852,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.17315 rotate z*90*-1 translate<-29,-72.3315,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.925525 rotate z*90*-1 translate<-29,-72.4996,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.87181 rotate z*90*-1 translate<-29,-72.6967,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.134027 rotate z*90*-1 translate<-29,-73.0057,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.462555 rotate z*90*-1 translate<-29,-73.3518,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.5814 rotate z*90*-1 translate<-29,-73.3972,43.5> }
cylinder{<-29,-69.1322,43.5>,<-29,-71.1322,43.5>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.852187 rotate z*90*-1 translate<-29,-69.1928,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.519886 rotate z*90*-1 translate<-29,-69.1952,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.20239 rotate z*90*-1 translate<-29,-69.2154,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.755861 rotate z*90*-1 translate<-29,-69.2779,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.0689999 rotate z*90*-1 translate<-29,-69.4529,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.212584 rotate z*90*-1 translate<-29,-69.48,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.078809 rotate z*90*-1 translate<-29,-69.6558,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.447184 rotate z*90*-1 translate<-29,-69.7546,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.121109 rotate z*90*-1 translate<-29,-69.7926,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.756766 rotate z*90*-1 translate<-29,-69.7988,43.5> }
cylinder{<-29,-77.0798,42.5>,<-29,-77.0798,36.5668>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.58482 rotate y*90*-1 translate<-29,-77.0798,42.4595> }
object{Deco[4] scale 0.2 rotate x*360*0.992697 rotate y*90*-1 translate<-29,-77.0798,42.3743> }
object{Deco[1] scale 0.2 rotate x*360*0.32538 rotate y*90*-1 translate<-29,-77.0798,41.9417> }
object{Deco[3] scale 0.2 rotate x*360*0.312665 rotate y*90*-1 translate<-29,-77.0798,41.709> }
object{Deco[0] scale 0.2 rotate x*360*0.362499 rotate y*90*-1 translate<-29,-77.0798,41.5381> }
object{Deco[3] scale 0.2 rotate x*360*0.72226 rotate y*90*-1 translate<-29,-77.0798,41.4571> }
object{Deco[1] scale 0.2 rotate x*360*0.727614 rotate y*90*-1 translate<-29,-77.0798,41.444> }
object{Deco[5] scale 0.2 rotate x*360*0.957131 rotate y*90*-1 translate<-29,-77.0798,41.3242> }
object{Deco[6] scale 0.2 rotate x*360*0.0462965 rotate y*90*-1 translate<-29,-77.0798,41.0627> }
object{Deco[5] scale 0.2 rotate x*360*0.817342 rotate y*90*-1 translate<-29,-77.0798,40.7769> }
object{Elbow translate z*1 rotate z*90 rotate -x*90 translate <-29,-77.0798,42.5>}
cylinder{<-29,-78.0798,35.5668>,<-29,-79,35.5668>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.295103 rotate z*90*-1 translate<-29,-78.1088,35.5668> }
object{Deco[5] scale 0.2 rotate x*360*0.0403991 rotate z*90*-1 translate<-29,-78.142,35.5668> }
object{Deco[4] scale 0.2 rotate x*360*0.665987 rotate z*90*-1 translate<-29,-78.19,35.5668> }
object{Deco[3] scale 0.2 rotate x*360*0.273532 rotate z*90*-1 translate<-29,-78.2306,35.5668> }
object{Deco[4] scale 0.2 rotate x*360*0.777951 rotate z*90*-1 translate<-29,-78.2855,35.5668> }
object{Deco[6] scale 0.2 rotate x*360*0.880267 rotate z*90*-1 translate<-29,-78.3518,35.5668> }
object{Deco[1] scale 0.2 rotate x*360*0.745298 rotate z*90*-1 translate<-29,-78.3759,35.5668> }
object{Deco[2] scale 0.2 rotate x*360*0.130738 rotate z*90*-1 translate<-29,-78.3882,35.5668> }
object{Deco[5] scale 0.2 rotate x*360*0.190131 rotate z*90*-1 translate<-29,-78.4366,35.5668> }
object{Deco[0] scale 0.2 rotate x*360*0.0628259 rotate z*90*-1 translate<-29,-78.4967,35.5668> }
object{Elbow translate z*1 rotate -z*90 translate <-29,-78.0798,35.5668>}
cylinder{<-28,-80,35.5668>,<-22.8734,-80,35.5668>,0.2}
object{Deco[1] scale 0.2 rotate x*360*0.211126 scale <1,1,1> translate<-27.5526,-80,35.5668> }
object{Deco[4] scale 0.2 rotate x*360*0.0521904 scale <1,1,1> translate<-27.286,-80,35.5668> }
object{Deco[0] scale 0.2 rotate x*360*0.953653 scale <1,1,1> translate<-27.1217,-80,35.5668> }
object{Deco[3] scale 0.2 rotate x*360*0.223681 scale <1,1,1> translate<-26.8597,-80,35.5668> }
object{Deco[6] scale 0.2 rotate x*360*0.796157 scale <1,1,1> translate<-26.3967,-80,35.5668> }
object{Deco[3] scale 0.2 rotate x*360*0.726729 scale <1,1,1> translate<-26.313,-80,35.5668> }
object{Deco[0] scale 0.2 rotate x*360*0.983976 scale <1,1,1> translate<-26.1053,-80,35.5668> }
object{Deco[1] scale 0.2 rotate x*360*0.787021 scale <1,1,1> translate<-25.8617,-80,35.5668> }
object{Deco[6] scale 0.2 rotate x*360*0.419707 scale <1,1,1> translate<-25.5002,-80,35.5668> }
object{Deco[1] scale 0.2 rotate x*360*0.291107 scale <1,1,1> translate<-25.4821,-80,35.5668> }
object{Elbow rotate -x*90 translate y*1  translate <-28,-80,35.5668>}
cylinder{<-20.8734,-80,35.5668>,<-15.07,-80,35.5668>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.934059 scale <1,1,1> translate<-20.5387,-80,35.5668> }
object{Deco[2] scale 0.2 rotate x*360*0.226916 scale <1,1,1> translate<-20.1365,-80,35.5668> }
object{Deco[4] scale 0.2 rotate x*360*0.227417 scale <1,1,1> translate<-20.0224,-80,35.5668> }
object{Deco[5] scale 0.2 rotate x*360*0.274738 scale <1,1,1> translate<-19.7623,-80,35.5668> }
object{Deco[3] scale 0.2 rotate x*360*0.0582555 scale <1,1,1> translate<-19.7543,-80,35.5668> }
object{Deco[4] scale 0.2 rotate x*360*0.597447 scale <1,1,1> translate<-19.4224,-80,35.5668> }
object{Deco[1] scale 0.2 rotate x*360*0.966482 scale <1,1,1> translate<-19.3718,-80,35.5668> }
object{Deco[5] scale 0.2 rotate x*360*0.465614 scale <1,1,1> translate<-19.1989,-80,35.5668> }
object{Deco[0] scale 0.2 rotate x*360*0.914732 scale <1,1,1> translate<-18.8803,-80,35.5668> }
object{Deco[4] scale 0.2 rotate x*360*0.935162 scale <1,1,1> translate<-18.85,-80,35.5668> }
cylinder{<-22.8734,-80,35.5668>,<-20.8734,-80,35.5668>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.451769 scale <1,1,1> translate<-22.8271,-80,35.5668> }
object{Deco[6] scale 0.2 rotate x*360*0.0515532 scale <1,1,1> translate<-22.7793,-80,35.5668> }
object{Deco[2] scale 0.2 rotate x*360*0.792102 scale <1,1,1> translate<-22.7138,-80,35.5668> }
object{Deco[0] scale 0.2 rotate x*360*0.770684 scale <1,1,1> translate<-22.7089,-80,35.5668> }
object{Deco[2] scale 0.2 rotate x*360*0.177656 scale <1,1,1> translate<-22.5284,-80,35.5668> }
object{Deco[5] scale 0.2 rotate x*360*0.752824 scale <1,1,1> translate<-22.4222,-80,35.5668> }
object{Deco[6] scale 0.2 rotate x*360*0.915672 scale <1,1,1> translate<-22.3554,-80,35.5668> }
object{Deco[2] scale 0.2 rotate x*360*0.382291 scale <1,1,1> translate<-22.2378,-80,35.5668> }
object{Deco[0] scale 0.2 rotate x*360*0.0543737 scale <1,1,1> translate<-22.1307,-80,35.5668> }
object{Deco[6] scale 0.2 rotate x*360*0.194607 scale <1,1,1> translate<-22.1165,-80,35.5668> }
cylinder{<-14.07,-80,34.5668>,<-14.07,-80,30.0793>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.623192 rotate y*90*-1 translate<-14.07,-80,34.3315> }
object{Deco[1] scale 0.2 rotate x*360*0.145646 rotate y*90*-1 translate<-14.07,-80,33.9573> }
object{Deco[3] scale 0.2 rotate x*360*0.31739 rotate y*90*-1 translate<-14.07,-80,33.7219> }
object{Deco[0] scale 0.2 rotate x*360*0.491106 rotate y*90*-1 translate<-14.07,-80,33.4718> }
object{Deco[3] scale 0.2 rotate x*360*0.143176 rotate y*90*-1 translate<-14.07,-80,33.0885> }
object{Deco[3] scale 0.2 rotate x*360*0.590828 rotate y*90*-1 translate<-14.07,-80,32.8786> }
object{Deco[3] scale 0.2 rotate x*360*0.078547 rotate y*90*-1 translate<-14.07,-80,32.5123> }
object{Deco[1] scale 0.2 rotate x*360*0.162438 rotate y*90*-1 translate<-14.07,-80,32.4587> }
object{Deco[0] scale 0.2 rotate x*360*0.0842751 rotate y*90*-1 translate<-14.07,-80,32.341> }
object{Deco[2] scale 0.2 rotate x*360*0.293732 rotate y*90*-1 translate<-14.07,-80,32.0837> }
object{Elbow translate x*1 rotate y*180 translate <-14.07,-80,34.5668>}
cylinder{<-14.07,-80,28.0793>,<-14.07,-80,22.378>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.43816 rotate y*90*-1 translate<-14.07,-80,27.6077> }
object{Deco[5] scale 0.2 rotate x*360*0.0161677 rotate y*90*-1 translate<-14.07,-80,27.5354> }
object{Deco[0] scale 0.2 rotate x*360*0.733026 rotate y*90*-1 translate<-14.07,-80,27.2375> }
object{Deco[6] scale 0.2 rotate x*360*0.140369 rotate y*90*-1 translate<-14.07,-80,27.1971> }
object{Deco[6] scale 0.2 rotate x*360*0.902402 rotate y*90*-1 translate<-14.07,-80,26.6946> }
object{Deco[4] scale 0.2 rotate x*360*0.698623 rotate y*90*-1 translate<-14.07,-80,26.3571> }
object{Deco[0] scale 0.2 rotate x*360*0.710764 rotate y*90*-1 translate<-14.07,-80,26.2297> }
object{Deco[1] scale 0.2 rotate x*360*0.785322 rotate y*90*-1 translate<-14.07,-80,25.9819> }
object{Deco[5] scale 0.2 rotate x*360*0.229187 rotate y*90*-1 translate<-14.07,-80,25.7292> }
object{Deco[2] scale 0.2 rotate x*360*0.962895 rotate y*90*-1 translate<-14.07,-80,25.4043> }
cylinder{<-14.07,-80,30.0793>,<-14.07,-80,28.0793>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.159644 rotate y*90*-1 translate<-14.07,-80,29.9155> }
object{Deco[1] scale 0.2 rotate x*360*0.895892 rotate y*90*-1 translate<-14.07,-80,29.7784> }
object{Deco[6] scale 0.2 rotate x*360*0.7778 rotate y*90*-1 translate<-14.07,-80,29.7395> }
object{Deco[4] scale 0.2 rotate x*360*0.0519669 rotate y*90*-1 translate<-14.07,-80,29.7027> }
object{Deco[4] scale 0.2 rotate x*360*0.861104 rotate y*90*-1 translate<-14.07,-80,29.6121> }
object{Deco[5] scale 0.2 rotate x*360*0.529478 rotate y*90*-1 translate<-14.07,-80,29.5658> }
object{Deco[1] scale 0.2 rotate x*360*0.567642 rotate y*90*-1 translate<-14.07,-80,29.39> }
object{Deco[6] scale 0.2 rotate x*360*0.806724 rotate y*90*-1 translate<-14.07,-80,29.3054> }
object{Deco[0] scale 0.2 rotate x*360*0.431407 rotate y*90*-1 translate<-14.07,-80,29.1544> }
object{Deco[4] scale 0.2 rotate x*360*0.388535 rotate y*90*-1 translate<-14.07,-80,29.0703> }
cylinder{<-14.07,-80,20.378>,<-14.07,-80,16.074>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.434898 rotate y*90*-1 translate<-14.07,-80,20.083> }
object{Deco[3] scale 0.2 rotate x*360*0.0438085 rotate y*90*-1 translate<-14.07,-80,20.0774> }
object{Deco[2] scale 0.2 rotate x*360*0.438184 rotate y*90*-1 translate<-14.07,-80,19.8768> }
object{Deco[3] scale 0.2 rotate x*360*0.180707 rotate y*90*-1 translate<-14.07,-80,19.5438> }
object{Deco[0] scale 0.2 rotate x*360*0.845855 rotate y*90*-1 translate<-14.07,-80,19.2356> }
object{Deco[2] scale 0.2 rotate x*360*0.824977 rotate y*90*-1 translate<-14.07,-80,18.8503> }
object{Deco[3] scale 0.2 rotate x*360*0.0985406 rotate y*90*-1 translate<-14.07,-80,18.6793> }
object{Deco[4] scale 0.2 rotate x*360*0.502672 rotate y*90*-1 translate<-14.07,-80,18.6355> }
object{Deco[1] scale 0.2 rotate x*360*0.0687762 rotate y*90*-1 translate<-14.07,-80,18.3806> }
object{Deco[6] scale 0.2 rotate x*360*0.628655 rotate y*90*-1 translate<-14.07,-80,18.1142> }
cylinder{<-14.07,-80,22.378>,<-14.07,-80,20.378>,0.2}
object{Deco[1] scale 0.2 rotate x*360*0.812687 rotate y*90*-1 translate<-14.07,-80,22.2176> }
object{Deco[0] scale 0.2 rotate x*360*0.314092 rotate y*90*-1 translate<-14.07,-80,22.1473> }
object{Deco[2] scale 0.2 rotate x*360*0.391455 rotate y*90*-1 translate<-14.07,-80,22> }
object{Deco[4] scale 0.2 rotate x*360*0.437758 rotate y*90*-1 translate<-14.07,-80,21.8206> }
object{Deco[0] scale 0.2 rotate x*360*0.560052 rotate y*90*-1 translate<-14.07,-80,21.7703> }
object{Deco[4] scale 0.2 rotate x*360*0.405107 rotate y*90*-1 translate<-14.07,-80,21.7007> }
object{Deco[2] scale 0.2 rotate x*360*0.22716 rotate y*90*-1 translate<-14.07,-80,21.5607> }
object{Deco[1] scale 0.2 rotate x*360*0.480959 rotate y*90*-1 translate<-14.07,-80,21.3915> }
object{Deco[1] scale 0.2 rotate x*360*0.860734 rotate y*90*-1 translate<-14.07,-80,21.2126> }
object{Deco[0] scale 0.2 rotate x*360*0.801402 rotate y*90*-1 translate<-14.07,-80,21.1235> }
cylinder{<-14.07,-79,15.074>,<-14.07,-75.198,15.074>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.966293 rotate z*90*1 translate<-14.07,-78.9099,15.074> }
object{Deco[3] scale 0.2 rotate x*360*0.263512 rotate z*90*1 translate<-14.07,-78.6643,15.074> }
object{Deco[2] scale 0.2 rotate x*360*0.562686 rotate z*90*1 translate<-14.07,-78.4374,15.074> }
object{Deco[1] scale 0.2 rotate x*360*0.0717569 rotate z*90*1 translate<-14.07,-78.095,15.074> }
object{Deco[3] scale 0.2 rotate x*360*0.124543 rotate z*90*1 translate<-14.07,-77.8447,15.074> }
object{Deco[2] scale 0.2 rotate x*360*0.553919 rotate z*90*1 translate<-14.07,-77.6989,15.074> }
object{Deco[0] scale 0.2 rotate x*360*0.703167 rotate z*90*1 translate<-14.07,-77.6392,15.074> }
object{Deco[0] scale 0.2 rotate x*360*0.906211 rotate z*90*1 translate<-14.07,-77.2986,15.074> }
object{Deco[6] scale 0.2 rotate x*360*0.531292 rotate z*90*1 translate<-14.07,-77.0154,15.074> }
object{Deco[5] scale 0.2 rotate x*360*0.258338 rotate z*90*1 translate<-14.07,-76.8538,15.074> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1  translate <-14.07,-79,15.074>}
cylinder{<-14.07,-74.198,14.074>,<-14.07,-74.198,10.6815>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.431854 rotate y*90*-1 translate<-14.07,-74.198,14.0602> }
object{Deco[3] scale 0.2 rotate x*360*0.988522 rotate y*90*-1 translate<-14.07,-74.198,13.8656> }
object{Deco[5] scale 0.2 rotate x*360*0.691725 rotate y*90*-1 translate<-14.07,-74.198,13.6297> }
object{Deco[0] scale 0.2 rotate x*360*0.503021 rotate y*90*-1 translate<-14.07,-74.198,13.4405> }
object{Deco[1] scale 0.2 rotate x*360*0.368193 rotate y*90*-1 translate<-14.07,-74.198,13.344> }
object{Deco[3] scale 0.2 rotate x*360*0.234623 rotate y*90*-1 translate<-14.07,-74.198,13.1342> }
object{Deco[0] scale 0.2 rotate x*360*0.434969 rotate y*90*-1 translate<-14.07,-74.198,13.0589> }
object{Deco[3] scale 0.2 rotate x*360*0.612202 rotate y*90*-1 translate<-14.07,-74.198,12.8054> }
object{Deco[4] scale 0.2 rotate x*360*0.563885 rotate y*90*-1 translate<-14.07,-74.198,12.7891> }
object{Deco[1] scale 0.2 rotate x*360*0.501758 rotate y*90*-1 translate<-14.07,-74.198,12.6405> }
object{Elbow rotate y*180 rotate z*90 translate -y*1  translate <-14.07,-74.198,14.074>}
cylinder{<-14.07,-74.198,8.68151>,<-14.07,-74.198,5.85701>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.754659 rotate y*90*-1 translate<-14.07,-74.198,8.47573> }
object{Deco[0] scale 0.2 rotate x*360*0.130601 rotate y*90*-1 translate<-14.07,-74.198,8.33037> }
object{Deco[6] scale 0.2 rotate x*360*0.397099 rotate y*90*-1 translate<-14.07,-74.198,8.10077> }
object{Deco[4] scale 0.2 rotate x*360*0.122053 rotate y*90*-1 translate<-14.07,-74.198,7.99286> }
object{Deco[4] scale 0.2 rotate x*360*0.756211 rotate y*90*-1 translate<-14.07,-74.198,7.94087> }
object{Deco[1] scale 0.2 rotate x*360*0.0164324 rotate y*90*-1 translate<-14.07,-74.198,7.6872> }
object{Deco[4] scale 0.2 rotate x*360*0.195394 rotate y*90*-1 translate<-14.07,-74.198,7.44507> }
object{Deco[5] scale 0.2 rotate x*360*0.714045 rotate y*90*-1 translate<-14.07,-74.198,7.42193> }
object{Deco[6] scale 0.2 rotate x*360*0.687395 rotate y*90*-1 translate<-14.07,-74.198,7.28605> }
object{Deco[0] scale 0.2 rotate x*360*0.997362 rotate y*90*-1 translate<-14.07,-74.198,7.15908> }
cylinder{<-14.07,-74.198,10.6815>,<-14.07,-74.198,8.68151>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.5521 rotate y*90*-1 translate<-14.07,-74.198,10.6184> }
object{Deco[5] scale 0.2 rotate x*360*0.0740621 rotate y*90*-1 translate<-14.07,-74.198,10.531> }
object{Deco[5] scale 0.2 rotate x*360*0.88043 rotate y*90*-1 translate<-14.07,-74.198,10.4911> }
object{Deco[1] scale 0.2 rotate x*360*0.241927 rotate y*90*-1 translate<-14.07,-74.198,10.4901> }
object{Deco[6] scale 0.2 rotate x*360*0.255312 rotate y*90*-1 translate<-14.07,-74.198,10.4171> }
object{Deco[2] scale 0.2 rotate x*360*0.565338 rotate y*90*-1 translate<-14.07,-74.198,10.267> }
object{Deco[1] scale 0.2 rotate x*360*0.557448 rotate y*90*-1 translate<-14.07,-74.198,10.2669> }
object{Deco[6] scale 0.2 rotate x*360*0.954133 rotate y*90*-1 translate<-14.07,-74.198,10.2573> }
object{Deco[1] scale 0.2 rotate x*360*0.0469095 rotate y*90*-1 translate<-14.07,-74.198,10.1534> }
object{Deco[3] scale 0.2 rotate x*360*0.106867 rotate y*90*-1 translate<-14.07,-74.198,10.0472> }
cylinder{<-13.07,-74.198,4.85701>,<-10.1641,-74.198,4.85701>,0.2}
object{Elbow translate z*1  translate <-13.07,-74.198,4.85701>}
cylinder{<-9.16412,-74.198,3.85701>,<-9.16412,-74.198,0.676914>,0.2}
object{Elbow translate x*1 rotate y*180 translate <-9.16412,-74.198,3.85701>}
cylinder{<-9.16412,-74.198,-1.32309>,<-9.16412,-74.198,-5.26146>,0.2}
cylinder{<-9.16412,-74.198,0.676914>,<-9.16412,-74.198,-1.32309>,0.2}
cylinder{<-9.16412,-74.198,-7.26146>,<-9.16412,-74.198,-12.6776>,0.2}
cylinder{<-9.16412,-74.198,-5.26146>,<-9.16412,-74.198,-7.26146>,0.2}
cylinder{<-10.1641,-74.198,-13.6776>,<-15.4042,-74.198,-13.6776>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.776606 scale <-1,1,1> translate<-10.4681,-74.198,-13.6776> }
object{Deco[3] scale 0.2 rotate x*360*0.688558 scale <-1,1,1> translate<-10.5515,-74.198,-13.6776> }
object{Deco[2] scale 0.2 rotate x*360*0.716817 scale <-1,1,1> translate<-10.5693,-74.198,-13.6776> }
object{Deco[5] scale 0.2 rotate x*360*0.988349 scale <-1,1,1> translate<-10.5806,-74.198,-13.6776> }
object{Deco[6] scale 0.2 rotate x*360*0.909045 scale <-1,1,1> translate<-10.9155,-74.198,-13.6776> }
object{Deco[4] scale 0.2 rotate x*360*0.0188626 scale <-1,1,1> translate<-10.9606,-74.198,-13.6776> }
object{Deco[3] scale 0.2 rotate x*360*0.263316 scale <-1,1,1> translate<-11.1308,-74.198,-13.6776> }
object{Deco[1] scale 0.2 rotate x*360*0.686035 scale <-1,1,1> translate<-11.398,-74.198,-13.6776> }
object{Deco[1] scale 0.2 rotate x*360*0.384147 scale <-1,1,1> translate<-11.6709,-74.198,-13.6776> }
object{Deco[1] scale 0.2 rotate x*360*0.745759 scale <-1,1,1> translate<-11.9029,-74.198,-13.6776> }
object{Elbow scale <-1,1,1> translate z*1  translate <-10.1641,-74.198,-13.6776>}
cylinder{<-16.4042,-74.198,-14.6776>,<-16.4042,-74.198,-17.5113>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.453423 rotate y*90*-1 translate<-16.4042,-74.198,-14.7188> }
object{Deco[6] scale 0.2 rotate x*360*0.620161 rotate y*90*-1 translate<-16.4042,-74.198,-14.8686> }
object{Deco[6] scale 0.2 rotate x*360*0.110449 rotate y*90*-1 translate<-16.4042,-74.198,-15.0792> }
object{Deco[6] scale 0.2 rotate x*360*0.145008 rotate y*90*-1 translate<-16.4042,-74.198,-15.1733> }
object{Deco[6] scale 0.2 rotate x*360*0.42355 rotate y*90*-1 translate<-16.4042,-74.198,-15.2565> }
object{Deco[5] scale 0.2 rotate x*360*0.905186 rotate y*90*-1 translate<-16.4042,-74.198,-15.439> }
object{Deco[5] scale 0.2 rotate x*360*0.314117 rotate y*90*-1 translate<-16.4042,-74.198,-15.4814> }
object{Deco[2] scale 0.2 rotate x*360*0.888627 rotate y*90*-1 translate<-16.4042,-74.198,-15.6719> }
object{Deco[4] scale 0.2 rotate x*360*0.772877 rotate y*90*-1 translate<-16.4042,-74.198,-15.7342> }
object{Deco[0] scale 0.2 rotate x*360*0.729576 rotate y*90*-1 translate<-16.4042,-74.198,-15.9885> }
object{Elbow scale <1,1,-1> translate x*1  translate <-16.4042,-74.198,-14.6776>}
cylinder{<-16.4042,-75.198,-18.5113>,<-16.4042,-79,-18.5113>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.711948 rotate z*90*-1 translate<-16.4042,-75.3765,-18.5113> }
object{Deco[5] scale 0.2 rotate x*360*0.707794 rotate z*90*-1 translate<-16.4042,-75.4074,-18.5113> }
object{Deco[2] scale 0.2 rotate x*360*0.290539 rotate z*90*-1 translate<-16.4042,-75.6037,-18.5113> }
object{Deco[3] scale 0.2 rotate x*360*0.335879 rotate z*90*-1 translate<-16.4042,-75.943,-18.5113> }
object{Deco[4] scale 0.2 rotate x*360*0.0892367 rotate z*90*-1 translate<-16.4042,-76.1815,-18.5113> }
object{Deco[5] scale 0.2 rotate x*360*0.554061 rotate z*90*-1 translate<-16.4042,-76.3564,-18.5113> }
object{Deco[1] scale 0.2 rotate x*360*0.652612 rotate z*90*-1 translate<-16.4042,-76.4002,-18.5113> }
object{Deco[6] scale 0.2 rotate x*360*0.362445 rotate z*90*-1 translate<-16.4042,-76.4575,-18.5113> }
object{Deco[1] scale 0.2 rotate x*360*0.7702 rotate z*90*-1 translate<-16.4042,-76.5191,-18.5113> }
object{Deco[1] scale 0.2 rotate x*360*0.926461 rotate z*90*-1 translate<-16.4042,-76.6053,-18.5113> }
object{Elbow translate z*1 rotate -z*90 translate <-16.4042,-75.198,-18.5113>}
cylinder{<-16.4042,-80,-19.5113>,<-16.4042,-80,-22.7403>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.520679 rotate y*90*-1 translate<-16.4042,-80,-19.7862> }
object{Deco[6] scale 0.2 rotate x*360*0.518836 rotate y*90*-1 translate<-16.4042,-80,-19.9462> }
object{Deco[4] scale 0.2 rotate x*360*0.451727 rotate y*90*-1 translate<-16.4042,-80,-20.1261> }
object{Deco[2] scale 0.2 rotate x*360*0.352935 rotate y*90*-1 translate<-16.4042,-80,-20.4074> }
object{Deco[5] scale 0.2 rotate x*360*0.681882 rotate y*90*-1 translate<-16.4042,-80,-20.6113> }
object{Deco[5] scale 0.2 rotate x*360*0.412369 rotate y*90*-1 translate<-16.4042,-80,-20.7679> }
object{Deco[0] scale 0.2 rotate x*360*0.580272 rotate y*90*-1 translate<-16.4042,-80,-20.8115> }
object{Deco[1] scale 0.2 rotate x*360*0.281277 rotate y*90*-1 translate<-16.4042,-80,-21.0027> }
object{Deco[2] scale 0.2 rotate x*360*0.573486 rotate y*90*-1 translate<-16.4042,-80,-21.1972> }
object{Deco[5] scale 0.2 rotate x*360*0.633138 rotate y*90*-1 translate<-16.4042,-80,-21.3727> }
object{Elbow translate z*1 rotate z*90 rotate -x*90 translate <-16.4042,-80,-19.5113>}
cylinder{<-16.4042,-79,-23.7403>,<-16.4042,-75.1627,-23.7403>,0.2}
object{Deco[1] scale 0.2 rotate x*360*0.820454 rotate z*90*1 translate<-16.4042,-78.8382,-23.7403> }
object{Deco[2] scale 0.2 rotate x*360*0.127169 rotate z*90*1 translate<-16.4042,-78.7104,-23.7403> }
object{Deco[3] scale 0.2 rotate x*360*0.806353 rotate z*90*1 translate<-16.4042,-78.7064,-23.7403> }
object{Deco[2] scale 0.2 rotate x*360*0.919485 rotate z*90*1 translate<-16.4042,-78.6452,-23.7403> }
object{Deco[0] scale 0.2 rotate x*360*0.400176 rotate z*90*1 translate<-16.4042,-78.5646,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.42925 rotate z*90*1 translate<-16.4042,-78.4589,-23.7403> }
object{Deco[0] scale 0.2 rotate x*360*0.0136942 rotate z*90*1 translate<-16.4042,-78.2849,-23.7403> }
object{Deco[0] scale 0.2 rotate x*360*0.444579 rotate z*90*1 translate<-16.4042,-78.1751,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.727562 rotate z*90*1 translate<-16.4042,-78.1089,-23.7403> }
object{Deco[4] scale 0.2 rotate x*360*0.96863 rotate z*90*1 translate<-16.4042,-78.0578,-23.7403> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1  translate <-16.4042,-79,-23.7403>}
cylinder{<-16.4042,-73.1627,-23.7403>,<-16.4042,-70.3047,-23.7403>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.00942413 rotate z*90*1 translate<-16.4042,-73.0107,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.0205826 rotate z*90*1 translate<-16.4042,-72.9987,-23.7403> }
object{Deco[1] scale 0.2 rotate x*360*0.71043 rotate z*90*1 translate<-16.4042,-72.7392,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.616765 rotate z*90*1 translate<-16.4042,-72.5014,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.0657859 rotate z*90*1 translate<-16.4042,-72.2693,-23.7403> }
object{Deco[5] scale 0.2 rotate x*360*0.586635 rotate z*90*1 translate<-16.4042,-72.2143,-23.7403> }
object{Deco[5] scale 0.2 rotate x*360*0.981568 rotate z*90*1 translate<-16.4042,-72.1546,-23.7403> }
object{Deco[3] scale 0.2 rotate x*360*0.707927 rotate z*90*1 translate<-16.4042,-71.9136,-23.7403> }
object{Deco[5] scale 0.2 rotate x*360*0.913686 rotate z*90*1 translate<-16.4042,-71.7722,-23.7403> }
object{Deco[4] scale 0.2 rotate x*360*0.415526 rotate z*90*1 translate<-16.4042,-71.7424,-23.7403> }
cylinder{<-16.4042,-75.1627,-23.7403>,<-16.4042,-73.1627,-23.7403>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.543109 rotate z*90*1 translate<-16.4042,-75.0831,-23.7403> }
object{Deco[1] scale 0.2 rotate x*360*0.100558 rotate z*90*1 translate<-16.4042,-74.9035,-23.7403> }
object{Deco[0] scale 0.2 rotate x*360*0.664055 rotate z*90*1 translate<-16.4042,-74.845,-23.7403> }
object{Deco[5] scale 0.2 rotate x*360*0.872626 rotate z*90*1 translate<-16.4042,-74.7138,-23.7403> }
object{Deco[5] scale 0.2 rotate x*360*0.0797136 rotate z*90*1 translate<-16.4042,-74.6148,-23.7403> }
object{Deco[5] scale 0.2 rotate x*360*0.499194 rotate z*90*1 translate<-16.4042,-74.4645,-23.7403> }
object{Deco[3] scale 0.2 rotate x*360*0.695541 rotate z*90*1 translate<-16.4042,-74.4586,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.0808152 rotate z*90*1 translate<-16.4042,-74.4155,-23.7403> }
object{Deco[3] scale 0.2 rotate x*360*0.372286 rotate z*90*1 translate<-16.4042,-74.3857,-23.7403> }
object{Deco[4] scale 0.2 rotate x*360*0.18598 rotate z*90*1 translate<-16.4042,-74.3843,-23.7403> }
cylinder{<-16.4042,-68.3047,-23.7403>,<-16.4042,-65.281,-23.7403>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.535003 rotate z*90*1 translate<-16.4042,-68.0953,-23.7403> }
object{Deco[4] scale 0.2 rotate x*360*0.685259 rotate z*90*1 translate<-16.4042,-67.8981,-23.7403> }
object{Deco[0] scale 0.2 rotate x*360*0.67646 rotate z*90*1 translate<-16.4042,-67.8671,-23.7403> }
object{Deco[2] scale 0.2 rotate x*360*0.507136 rotate z*90*1 translate<-16.4042,-67.792,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.390589 rotate z*90*1 translate<-16.4042,-67.7353,-23.7403> }
object{Deco[0] scale 0.2 rotate x*360*0.296885 rotate z*90*1 translate<-16.4042,-67.6606,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.0776083 rotate z*90*1 translate<-16.4042,-67.3883,-23.7403> }
object{Deco[5] scale 0.2 rotate x*360*0.380611 rotate z*90*1 translate<-16.4042,-67.3405,-23.7403> }
object{Deco[3] scale 0.2 rotate x*360*0.772564 rotate z*90*1 translate<-16.4042,-67.2245,-23.7403> }
object{Deco[4] scale 0.2 rotate x*360*0.184651 rotate z*90*1 translate<-16.4042,-66.9922,-23.7403> }
cylinder{<-16.4042,-70.3047,-23.7403>,<-16.4042,-68.3047,-23.7403>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.985975 rotate z*90*1 translate<-16.4042,-70.2479,-23.7403> }
object{Deco[4] scale 0.2 rotate x*360*0.892401 rotate z*90*1 translate<-16.4042,-70.0661,-23.7403> }
object{Deco[4] scale 0.2 rotate x*360*0.472411 rotate z*90*1 translate<-16.4042,-69.8934,-23.7403> }
object{Deco[1] scale 0.2 rotate x*360*0.657684 rotate z*90*1 translate<-16.4042,-69.7446,-23.7403> }
object{Deco[0] scale 0.2 rotate x*360*0.136602 rotate z*90*1 translate<-16.4042,-69.6213,-23.7403> }
object{Deco[4] scale 0.2 rotate x*360*0.999773 rotate z*90*1 translate<-16.4042,-69.4708,-23.7403> }
object{Deco[4] scale 0.2 rotate x*360*0.0649848 rotate z*90*1 translate<-16.4042,-69.3145,-23.7403> }
object{Deco[2] scale 0.2 rotate x*360*0.951476 rotate z*90*1 translate<-16.4042,-69.1398,-23.7403> }
object{Deco[3] scale 0.2 rotate x*360*0.987997 rotate z*90*1 translate<-16.4042,-69.0546,-23.7403> }
object{Deco[2] scale 0.2 rotate x*360*0.110807 rotate z*90*1 translate<-16.4042,-69.0447,-23.7403> }
cylinder{<-17.4042,-64.281,-23.7403>,<-19.7055,-64.281,-23.7403>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.726912 scale <-1,1,1> translate<-17.435,-64.281,-23.7403> }
object{Deco[1] scale 0.2 rotate x*360*0.00115896 scale <-1,1,1> translate<-17.544,-64.281,-23.7403> }
object{Deco[1] scale 0.2 rotate x*360*0.293852 scale <-1,1,1> translate<-17.7272,-64.281,-23.7403> }
object{Deco[2] scale 0.2 rotate x*360*0.00240618 scale <-1,1,1> translate<-17.7977,-64.281,-23.7403> }
object{Deco[3] scale 0.2 rotate x*360*0.903843 scale <-1,1,1> translate<-17.7986,-64.281,-23.7403> }
object{Deco[5] scale 0.2 rotate x*360*0.332576 scale <-1,1,1> translate<-17.8166,-64.281,-23.7403> }
object{Deco[2] scale 0.2 rotate x*360*0.584589 scale <-1,1,1> translate<-17.9877,-64.281,-23.7403> }
object{Deco[3] scale 0.2 rotate x*360*0.577512 scale <-1,1,1> translate<-18.002,-64.281,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.226145 scale <-1,1,1> translate<-18.0996,-64.281,-23.7403> }
object{Deco[6] scale 0.2 rotate x*360*0.42754 scale <-1,1,1> translate<-18.2307,-64.281,-23.7403> }
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <-17.4042,-64.281,-23.7403>}
cylinder{<-20.7055,-64.281,-24.7403>,<-20.7055,-64.281,-30.5939>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.680484 rotate y*90*-1 translate<-20.7055,-64.281,-24.9386> }
object{Deco[6] scale 0.2 rotate x*360*0.796259 rotate y*90*-1 translate<-20.7055,-64.281,-25.0856> }
object{Deco[5] scale 0.2 rotate x*360*0.174341 rotate y*90*-1 translate<-20.7055,-64.281,-25.5753> }
object{Deco[1] scale 0.2 rotate x*360*0.824554 rotate y*90*-1 translate<-20.7055,-64.281,-25.821> }
object{Deco[3] scale 0.2 rotate x*360*0.404976 rotate y*90*-1 translate<-20.7055,-64.281,-26.2243> }
object{Deco[0] scale 0.2 rotate x*360*0.106801 rotate y*90*-1 translate<-20.7055,-64.281,-26.595> }
object{Deco[2] scale 0.2 rotate x*360*0.832081 rotate y*90*-1 translate<-20.7055,-64.281,-26.7899> }
object{Deco[6] scale 0.2 rotate x*360*0.700336 rotate y*90*-1 translate<-20.7055,-64.281,-27.2355> }
object{Deco[3] scale 0.2 rotate x*360*0.078082 rotate y*90*-1 translate<-20.7055,-64.281,-27.7468> }
object{Deco[1] scale 0.2 rotate x*360*0.185161 rotate y*90*-1 translate<-20.7055,-64.281,-27.8567> }
object{Elbow scale <1,1,-1> translate x*1  translate <-20.7055,-64.281,-24.7403>}
cylinder{<-21.7055,-64.281,-31.5939>,<-24.0848,-64.281,-31.5939>,0.2}
object{Deco[1] scale 0.2 rotate x*360*0.620496 scale <-1,1,1> translate<-21.8247,-64.281,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.296132 scale <-1,1,1> translate<-21.8814,-64.281,-31.5939> }
object{Deco[6] scale 0.2 rotate x*360*0.41405 scale <-1,1,1> translate<-21.9712,-64.281,-31.5939> }
object{Deco[5] scale 0.2 rotate x*360*0.032208 scale <-1,1,1> translate<-21.9935,-64.281,-31.5939> }
object{Deco[5] scale 0.2 rotate x*360*0.864976 scale <-1,1,1> translate<-22.1824,-64.281,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.674865 scale <-1,1,1> translate<-22.3396,-64.281,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.0431773 scale <-1,1,1> translate<-22.3541,-64.281,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.60889 scale <-1,1,1> translate<-22.3909,-64.281,-31.5939> }
object{Deco[5] scale 0.2 rotate x*360*0.0637062 scale <-1,1,1> translate<-22.5754,-64.281,-31.5939> }
object{Deco[6] scale 0.2 rotate x*360*0.538821 scale <-1,1,1> translate<-22.6074,-64.281,-31.5939> }
object{Elbow scale <-1,1,1> translate z*1  translate <-21.7055,-64.281,-31.5939>}
cylinder{<-25.0848,-65.281,-31.5939>,<-25.0848,-70.7056,-31.5939>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.398877 rotate z*90*-1 translate<-25.0848,-65.5012,-31.5939> }
object{Deco[4] scale 0.2 rotate x*360*0.784837 rotate z*90*-1 translate<-25.0848,-65.6828,-31.5939> }
object{Deco[6] scale 0.2 rotate x*360*0.0162738 rotate z*90*-1 translate<-25.0848,-65.9384,-31.5939> }
object{Deco[5] scale 0.2 rotate x*360*0.924075 rotate z*90*-1 translate<-25.0848,-66.0311,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.836944 rotate z*90*-1 translate<-25.0848,-66.3958,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.904811 rotate z*90*-1 translate<-25.0848,-66.5843,-31.5939> }
object{Deco[5] scale 0.2 rotate x*360*0.406721 rotate z*90*-1 translate<-25.0848,-66.8614,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.232738 rotate z*90*-1 translate<-25.0848,-66.9764,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.28104 rotate z*90*-1 translate<-25.0848,-67.3454,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.409298 rotate z*90*-1 translate<-25.0848,-67.441,-31.5939> }
object{Elbow translate x*1 rotate x*90 translate <-25.0848,-65.281,-31.5939>}
cylinder{<-26.0848,-71.7056,-31.5939>,<-28,-71.7056,-31.5939>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.945679 scale <-1,1,1> translate<-26.0896,-71.7056,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.812056 scale <-1,1,1> translate<-26.1546,-71.7056,-31.5939> }
object{Deco[5] scale 0.2 rotate x*360*0.687434 scale <-1,1,1> translate<-26.1924,-71.7056,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.189486 scale <-1,1,1> translate<-26.307,-71.7056,-31.5939> }
object{Deco[5] scale 0.2 rotate x*360*0.202105 scale <-1,1,1> translate<-26.3413,-71.7056,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.180305 scale <-1,1,1> translate<-26.3433,-71.7056,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.0646811 scale <-1,1,1> translate<-26.4424,-71.7056,-31.5939> }
object{Deco[1] scale 0.2 rotate x*360*0.142072 scale <-1,1,1> translate<-26.5224,-71.7056,-31.5939> }
object{Deco[1] scale 0.2 rotate x*360*0.406231 scale <-1,1,1> translate<-26.6886,-71.7056,-31.5939> }
object{Deco[5] scale 0.2 rotate x*360*0.482992 scale <-1,1,1> translate<-26.7721,-71.7056,-31.5939> }
object{Elbow translate z*1 rotate y*180 rotate x*90  translate <-26.0848,-71.7056,-31.5939>}
cylinder{<-29,-70.7056,-31.5939>,<-29,-68.1652,-31.5939>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.0981143 rotate z*90*1 translate<-29,-70.6434,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.275901 rotate z*90*1 translate<-29,-70.5988,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.0223994 rotate z*90*1 translate<-29,-70.4055,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.316772 rotate z*90*1 translate<-29,-70.1957,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.194319 rotate z*90*1 translate<-29,-70.1565,-31.5939> }
object{Deco[6] scale 0.2 rotate x*360*0.173564 rotate z*90*1 translate<-29,-70.064,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.60829 rotate z*90*1 translate<-29,-70.0381,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.796166 rotate z*90*1 translate<-29,-69.9116,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.0721724 rotate z*90*1 translate<-29,-69.7514,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.895128 rotate z*90*1 translate<-29,-69.7025,-31.5939> }
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-29,-70.7056,-31.5939>}
cylinder{<-28,-67.1652,-31.5939>,<-25.3827,-67.1652,-31.5939>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.814473 scale <1,1,1> translate<-27.8916,-67.1652,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.599562 scale <1,1,1> translate<-27.8895,-67.1652,-31.5939> }
object{Deco[4] scale 0.2 rotate x*360*0.244925 scale <1,1,1> translate<-27.752,-67.1652,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.797725 scale <1,1,1> translate<-27.6208,-67.1652,-31.5939> }
object{Deco[1] scale 0.2 rotate x*360*0.512007 scale <1,1,1> translate<-27.5548,-67.1652,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.6327 scale <1,1,1> translate<-27.3214,-67.1652,-31.5939> }
object{Deco[3] scale 0.2 rotate x*360*0.249428 scale <1,1,1> translate<-27.1793,-67.1652,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.971336 scale <1,1,1> translate<-27.1077,-67.1652,-31.5939> }
object{Deco[1] scale 0.2 rotate x*360*0.990128 scale <1,1,1> translate<-26.8756,-67.1652,-31.5939> }
object{Deco[4] scale 0.2 rotate x*360*0.854682 scale <1,1,1> translate<-26.682,-67.1652,-31.5939> }
object{Elbow translate z*1 rotate y*90 rotate x*-90 translate -x*1 translate -y*1  translate <-28,-67.1652,-31.5939>}
cylinder{<-24.3827,-68.1652,-31.5939>,<-24.3827,-71.4018,-31.5939>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.225088 rotate z*90*-1 translate<-24.3827,-68.3621,-31.5939> }
object{Deco[1] scale 0.2 rotate x*360*0.686919 rotate z*90*-1 translate<-24.3827,-68.5404,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.844974 rotate z*90*-1 translate<-24.3827,-68.7539,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.547508 rotate z*90*-1 translate<-24.3827,-69.0422,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.503582 rotate z*90*-1 translate<-24.3827,-69.1572,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.856585 rotate z*90*-1 translate<-24.3827,-69.4076,-31.5939> }
object{Deco[2] scale 0.2 rotate x*360*0.710731 rotate z*90*-1 translate<-24.3827,-69.5611,-31.5939> }
object{Deco[0] scale 0.2 rotate x*360*0.453132 rotate z*90*-1 translate<-24.3827,-69.8242,-31.5939> }
object{Deco[6] scale 0.2 rotate x*360*0.762038 rotate z*90*-1 translate<-24.3827,-70.0191,-31.5939> }
object{Deco[1] scale 0.2 rotate x*360*0.486533 rotate z*90*-1 translate<-24.3827,-70.099,-31.5939> }
object{Elbow translate x*1 rotate x*90 rotate y*180 translate <-24.3827,-68.1652,-31.5939>}
cylinder{<-24.3827,-72.4018,-30.5939>,<-24.3827,-72.4018,-28.4423>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.0578651 rotate y*90*1 translate<-24.3827,-72.4018,-30.564> }
object{Deco[4] scale 0.2 rotate x*360*0.100349 rotate y*90*1 translate<-24.3827,-72.4018,-30.4473> }
object{Deco[5] scale 0.2 rotate x*360*0.27213 rotate y*90*1 translate<-24.3827,-72.4018,-30.291> }
object{Deco[4] scale 0.2 rotate x*360*0.68221 rotate y*90*1 translate<-24.3827,-72.4018,-30.204> }
object{Deco[0] scale 0.2 rotate x*360*0.801245 rotate y*90*1 translate<-24.3827,-72.4018,-30.0663> }
object{Deco[5] scale 0.2 rotate x*360*0.882206 rotate y*90*1 translate<-24.3827,-72.4018,-29.9768> }
object{Deco[6] scale 0.2 rotate x*360*0.455456 rotate y*90*1 translate<-24.3827,-72.4018,-29.8126> }
object{Deco[4] scale 0.2 rotate x*360*0.00412764 rotate y*90*1 translate<-24.3827,-72.4018,-29.7226> }
object{Deco[2] scale 0.2 rotate x*360*0.0181533 rotate y*90*1 translate<-24.3827,-72.4018,-29.5773> }
object{Deco[3] scale 0.2 rotate x*360*0.0210249 rotate y*90*1 translate<-24.3827,-72.4018,-29.5118> }
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1  translate <-24.3827,-72.4018,-30.5939>}
cylinder{<-25.3827,-72.4018,-27.4423>,<-28,-72.4018,-27.4423>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.993835 scale <-1,1,1> translate<-25.4366,-72.4018,-27.4423> }
object{Deco[0] scale 0.2 rotate x*360*0.0428563 scale <-1,1,1> translate<-25.6409,-72.4018,-27.4423> }
object{Deco[6] scale 0.2 rotate x*360*0.554103 scale <-1,1,1> translate<-25.6458,-72.4018,-27.4423> }
object{Deco[3] scale 0.2 rotate x*360*0.0835454 scale <-1,1,1> translate<-25.7862,-72.4018,-27.4423> }
object{Deco[5] scale 0.2 rotate x*360*0.240323 scale <-1,1,1> translate<-25.9617,-72.4018,-27.4423> }
object{Deco[6] scale 0.2 rotate x*360*0.637175 scale <-1,1,1> translate<-26.1433,-72.4018,-27.4423> }
object{Deco[5] scale 0.2 rotate x*360*0.774984 scale <-1,1,1> translate<-26.2523,-72.4018,-27.4423> }
object{Deco[4] scale 0.2 rotate x*360*0.402521 scale <-1,1,1> translate<-26.4359,-72.4018,-27.4423> }
object{Deco[3] scale 0.2 rotate x*360*0.841847 scale <-1,1,1> translate<-26.6224,-72.4018,-27.4423> }
object{Deco[6] scale 0.2 rotate x*360*0.829131 scale <-1,1,1> translate<-26.7455,-72.4018,-27.4423> }
object{Elbow scale <-1,1,-1> translate -z*1  translate <-25.3827,-72.4018,-27.4423>}
cylinder{<-29,-72.4018,-26.4423>,<-29,-72.4018,-22.2473>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.667152 rotate y*90*1 translate<-29,-72.4018,-26.3316> }
object{Deco[3] scale 0.2 rotate x*360*0.358068 rotate y*90*1 translate<-29,-72.4018,-26.1275> }
object{Deco[2] scale 0.2 rotate x*360*0.296729 rotate y*90*1 translate<-29,-72.4018,-26.0073> }
object{Deco[3] scale 0.2 rotate x*360*0.398853 rotate y*90*1 translate<-29,-72.4018,-25.8365> }
object{Deco[2] scale 0.2 rotate x*360*0.859269 rotate y*90*1 translate<-29,-72.4018,-25.7059> }
object{Deco[3] scale 0.2 rotate x*360*0.93973 rotate y*90*1 translate<-29,-72.4018,-25.6129> }
object{Deco[6] scale 0.2 rotate x*360*0.788822 rotate y*90*1 translate<-29,-72.4018,-25.5217> }
object{Deco[3] scale 0.2 rotate x*360*0.442136 rotate y*90*1 translate<-29,-72.4018,-25.4292> }
object{Deco[6] scale 0.2 rotate x*360*0.769617 rotate y*90*1 translate<-29,-72.4018,-25.0744> }
object{Deco[1] scale 0.2 rotate x*360*0.422448 rotate y*90*1 translate<-29,-72.4018,-25.0363> }
object{Elbow translate x*1  translate <-29,-72.4018,-26.4423>}
cylinder{<-29,-72.4018,-20.2473>,<-29,-72.4018,-18.0025>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.562081 rotate y*90*1 translate<-29,-72.4018,-20.1116> }
object{Deco[2] scale 0.2 rotate x*360*0.181306 rotate y*90*1 translate<-29,-72.4018,-20.0034> }
object{Deco[3] scale 0.2 rotate x*360*0.775026 rotate y*90*1 translate<-29,-72.4018,-19.8638> }
object{Deco[4] scale 0.2 rotate x*360*0.399387 rotate y*90*1 translate<-29,-72.4018,-19.8554> }
object{Deco[6] scale 0.2 rotate x*360*0.789399 rotate y*90*1 translate<-29,-72.4018,-19.6718> }
object{Deco[6] scale 0.2 rotate x*360*0.717051 rotate y*90*1 translate<-29,-72.4018,-19.57> }
object{Deco[6] scale 0.2 rotate x*360*0.625066 rotate y*90*1 translate<-29,-72.4018,-19.4793> }
object{Deco[6] scale 0.2 rotate x*360*0.533679 rotate y*90*1 translate<-29,-72.4018,-19.289> }
object{Deco[0] scale 0.2 rotate x*360*0.409737 rotate y*90*1 translate<-29,-72.4018,-19.1276> }
object{Deco[4] scale 0.2 rotate x*360*0.506177 rotate y*90*1 translate<-29,-72.4018,-19.0351> }
cylinder{<-29,-72.4018,-22.2473>,<-29,-72.4018,-20.2473>,0.2}
object{Deco[1] scale 0.2 rotate x*360*0.528075 rotate y*90*1 translate<-29,-72.4018,-22.1798> }
object{Deco[6] scale 0.2 rotate x*360*0.684241 rotate y*90*1 translate<-29,-72.4018,-22.1736> }
object{Deco[3] scale 0.2 rotate x*360*0.477902 rotate y*90*1 translate<-29,-72.4018,-22.1117> }
object{Deco[4] scale 0.2 rotate x*360*0.188863 rotate y*90*1 translate<-29,-72.4018,-22.0415> }
object{Deco[1] scale 0.2 rotate x*360*0.806198 rotate y*90*1 translate<-29,-72.4018,-21.9857> }
object{Deco[1] scale 0.2 rotate x*360*0.91367 rotate y*90*1 translate<-29,-72.4018,-21.9457> }
object{Deco[4] scale 0.2 rotate x*360*0.518081 rotate y*90*1 translate<-29,-72.4018,-21.8557> }
object{Deco[5] scale 0.2 rotate x*360*0.698446 rotate y*90*1 translate<-29,-72.4018,-21.7606> }
object{Deco[3] scale 0.2 rotate x*360*0.349011 rotate y*90*1 translate<-29,-72.4018,-21.7588> }
object{Deco[0] scale 0.2 rotate x*360*0.714225 rotate y*90*1 translate<-29,-72.4018,-21.6838> }
cylinder{<-29,-71.4018,-17.0025>,<-29,-66.4948,-17.0025>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.749617 rotate z*90*1 translate<-29,-71.1446,-17.0025> }
object{Deco[0] scale 0.2 rotate x*360*0.585583 rotate z*90*1 translate<-29,-70.934,-17.0025> }
object{Deco[3] scale 0.2 rotate x*360*0.0187441 rotate z*90*1 translate<-29,-70.7393,-17.0025> }
object{Deco[0] scale 0.2 rotate x*360*0.786369 rotate z*90*1 translate<-29,-70.5222,-17.0025> }
object{Deco[3] scale 0.2 rotate x*360*0.22671 rotate z*90*1 translate<-29,-70.5194,-17.0025> }
object{Deco[0] scale 0.2 rotate x*360*0.674655 rotate z*90*1 translate<-29,-70.4084,-17.0025> }
object{Deco[4] scale 0.2 rotate x*360*0.61314 rotate z*90*1 translate<-29,-70.2047,-17.0025> }
object{Deco[4] scale 0.2 rotate x*360*0.580913 rotate z*90*1 translate<-29,-70.0425,-17.0025> }
object{Deco[2] scale 0.2 rotate x*360*0.339258 rotate z*90*1 translate<-29,-69.9877,-17.0025> }
object{Deco[5] scale 0.2 rotate x*360*0.139004 rotate z*90*1 translate<-29,-69.7506,-17.0025> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-29,-71.4018,-17.0025>}
cylinder{<-29,-65.4948,-16.0025>,<-29,-65.4948,-10.0843>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.776377 rotate y*90*1 translate<-29,-65.4948,-15.9228> }
object{Deco[0] scale 0.2 rotate x*360*0.640392 rotate y*90*1 translate<-29,-65.4948,-15.6244> }
object{Deco[0] scale 0.2 rotate x*360*0.224829 rotate y*90*1 translate<-29,-65.4948,-15.4428> }
object{Deco[2] scale 0.2 rotate x*360*0.543453 rotate y*90*1 translate<-29,-65.4948,-15.2609> }
object{Deco[5] scale 0.2 rotate x*360*0.0121491 rotate y*90*1 translate<-29,-65.4948,-14.7453> }
object{Deco[6] scale 0.2 rotate x*360*0.162424 rotate y*90*1 translate<-29,-65.4948,-14.466> }
object{Deco[5] scale 0.2 rotate x*360*0.161788 rotate y*90*1 translate<-29,-65.4948,-14.1677> }
object{Deco[4] scale 0.2 rotate x*360*0.436145 rotate y*90*1 translate<-29,-65.4948,-13.9386> }
object{Deco[3] scale 0.2 rotate x*360*0.110828 rotate y*90*1 translate<-29,-65.4948,-13.5609> }
object{Deco[4] scale 0.2 rotate x*360*0.80163 rotate y*90*1 translate<-29,-65.4948,-13.1159> }
object{Elbow translate z*1 rotate -z*90 translate -z*1 translate -y*1  translate <-29,-65.4948,-16.0025>}
cylinder{<-29,-65.4948,-8.08429>,<-29,-65.4948,-4.83536>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.00813621 rotate y*90*1 translate<-29,-65.4948,-7.8259> }
object{Deco[2] scale 0.2 rotate x*360*0.89542 rotate y*90*1 translate<-29,-65.4948,-7.60342> }
object{Deco[2] scale 0.2 rotate x*360*0.592616 rotate y*90*1 translate<-29,-65.4948,-7.46032> }
object{Deco[2] scale 0.2 rotate x*360*0.935577 rotate y*90*1 translate<-29,-65.4948,-7.18646> }
object{Deco[2] scale 0.2 rotate x*360*0.216591 rotate y*90*1 translate<-29,-65.4948,-6.99351> }
object{Deco[2] scale 0.2 rotate x*360*0.648341 rotate y*90*1 translate<-29,-65.4948,-6.96802> }
object{Deco[2] scale 0.2 rotate x*360*0.424154 rotate y*90*1 translate<-29,-65.4948,-6.84557> }
object{Deco[4] scale 0.2 rotate x*360*0.136088 rotate y*90*1 translate<-29,-65.4948,-6.74903> }
object{Deco[6] scale 0.2 rotate x*360*0.465846 rotate y*90*1 translate<-29,-65.4948,-6.51771> }
object{Deco[1] scale 0.2 rotate x*360*0.916826 rotate y*90*1 translate<-29,-65.4948,-6.39738> }
cylinder{<-29,-65.4948,-10.0843>,<-29,-65.4948,-8.08429>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.624413 rotate y*90*1 translate<-29,-65.4948,-10.0542> }
object{Deco[5] scale 0.2 rotate x*360*0.805386 rotate y*90*1 translate<-29,-65.4948,-9.89506> }
object{Deco[0] scale 0.2 rotate x*360*0.021228 rotate y*90*1 translate<-29,-65.4948,-9.79033> }
object{Deco[1] scale 0.2 rotate x*360*0.630454 rotate y*90*1 translate<-29,-65.4948,-9.66365> }
object{Deco[1] scale 0.2 rotate x*360*0.909848 rotate y*90*1 translate<-29,-65.4948,-9.56805> }
object{Deco[0] scale 0.2 rotate x*360*0.521925 rotate y*90*1 translate<-29,-65.4948,-9.39481> }
object{Deco[2] scale 0.2 rotate x*360*0.616499 rotate y*90*1 translate<-29,-65.4948,-9.38568> }
object{Deco[3] scale 0.2 rotate x*360*0.32437 rotate y*90*1 translate<-29,-65.4948,-9.2235> }
object{Deco[3] scale 0.2 rotate x*360*0.97966 rotate y*90*1 translate<-29,-65.4948,-9.12529> }
object{Deco[4] scale 0.2 rotate x*360*0.146512 rotate y*90*1 translate<-29,-65.4948,-8.97623> }
cylinder{<-28,-65.4948,-3.83536>,<-22.6403,-65.4948,-3.83536>,0.2}
object{Elbow scale <1,1,-1> translate -z*1  translate <-28,-65.4948,-3.83536>}
cylinder{<-20.6403,-65.4948,-3.83536>,<-14.6947,-65.4948,-3.83536>,0.2}
cylinder{<-22.6403,-65.4948,-3.83536>,<-20.6403,-65.4948,-3.83536>,0.2}
cylinder{<-13.6947,-64.4948,-3.83536>,<-13.6947,-59.6708,-3.83536>,0.2}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1  translate <-13.6947,-64.4948,-3.83536>}
cylinder{<-13.6947,-57.6708,-3.83536>,<-13.6947,-52.8157,-3.83536>,0.2}
cylinder{<-13.6947,-59.6708,-3.83536>,<-13.6947,-57.6708,-3.83536>,0.2}
cylinder{<-13.6947,-50.8157,-3.83536>,<-13.6947,-47.2306,-3.83536>,0.2}
cylinder{<-13.6947,-52.8157,-3.83536>,<-13.6947,-50.8157,-3.83536>,0.2}
cylinder{<-13.6947,-46.2306,-2.83536>,<-13.6947,-46.2306,-0.691402>,0.2}
object{Elbow translate z*1 rotate -z*90 translate -z*1 translate -y*1  translate <-13.6947,-46.2306,-2.83536>}
cylinder{<-13.6947,-46.2306,1.3086>,<-13.6947,-46.2306,4.17033>,0.2}
cylinder{<-13.6947,-46.2306,-0.691402>,<-13.6947,-46.2306,1.3086>,0.2}
cylinder{<-13.6947,-45.2306,5.17033>,<-13.6947,-41.8109,5.17033>,0.2}
object{Elbow rotate z*90 scale <1,1,-1> translate <-13.6947,-45.2306,5.17033>}
cylinder{<-13.6947,-40.8109,4.17033>,<-13.6947,-40.8109,-1.2205>,0.2}
object{Elbow rotate y*180 rotate z*90 translate -y*1  translate <-13.6947,-40.8109,4.17033>}
cylinder{<-12.6947,-40.8109,-2.2205>,<-7.04425,-40.8109,-2.2205>,0.2}
object{Elbow translate z*1  translate <-12.6947,-40.8109,-2.2205>}
cylinder{<-6.04425,-40.8109,-1.2205>,<-6.04425,-40.8109,1.39226>,0.2}
object{Elbow rotate y*-90 translate -x*1  translate <-6.04425,-40.8109,-1.2205>}
cylinder{<-6.04425,-40.8109,3.39226>,<-6.04425,-40.8109,7.20511>,0.2}
cylinder{<-6.04425,-40.8109,1.39226>,<-6.04425,-40.8109,3.39226>,0.2}
cylinder{<-7.04425,-40.8109,8.20511>,<-10.3111,-40.8109,8.20511>,0.2}
object{Elbow scale <-1,1,-1> translate -z*1  translate <-7.04425,-40.8109,8.20511>}
cylinder{<-11.3111,-40.8109,9.20511>,<-11.3111,-40.8109,13.7492>,0.2}
object{Elbow translate x*1  translate <-11.3111,-40.8109,9.20511>}
cylinder{<-11.3111,-39.8109,14.7492>,<-11.3111,-36.9763,14.7492>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.461888 rotate z*90*1 translate<-11.3111,-39.7077,14.7492> }
object{Deco[5] scale 0.2 rotate x*360*0.00142922 rotate z*90*1 translate<-11.3111,-39.6904,14.7492> }
object{Deco[6] scale 0.2 rotate x*360*0.228086 rotate z*90*1 translate<-11.3111,-39.6768,14.7492> }
object{Deco[6] scale 0.2 rotate x*360*0.938723 rotate z*90*1 translate<-11.3111,-39.4844,14.7492> }
object{Deco[4] scale 0.2 rotate x*360*0.302663 rotate z*90*1 translate<-11.3111,-39.3928,14.7492> }
object{Deco[1] scale 0.2 rotate x*360*0.161213 rotate z*90*1 translate<-11.3111,-39.1763,14.7492> }
object{Deco[2] scale 0.2 rotate x*360*0.931585 rotate z*90*1 translate<-11.3111,-39.1703,14.7492> }
object{Deco[1] scale 0.2 rotate x*360*0.167971 rotate z*90*1 translate<-11.3111,-38.9485,14.7492> }
object{Deco[0] scale 0.2 rotate x*360*0.516763 rotate z*90*1 translate<-11.3111,-38.9152,14.7492> }
object{Deco[2] scale 0.2 rotate x*360*0.258049 rotate z*90*1 translate<-11.3111,-38.698,14.7492> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-11.3111,-39.8109,14.7492>}
cylinder{<-10.3111,-35.9763,14.7492>,<-5.35987,-35.9763,14.7492>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.560959 scale <1,1,1> translate<-9.92865,-35.9763,14.7492> }
object{Deco[6] scale 0.2 rotate x*360*0.443556 scale <1,1,1> translate<-9.82314,-35.9763,14.7492> }
object{Deco[3] scale 0.2 rotate x*360*0.340143 scale <1,1,1> translate<-9.43721,-35.9763,14.7492> }
object{Deco[0] scale 0.2 rotate x*360*0.274657 scale <1,1,1> translate<-9.23974,-35.9763,14.7492> }
object{Deco[3] scale 0.2 rotate x*360*0.844358 scale <1,1,1> translate<-8.80947,-35.9763,14.7492> }
object{Deco[4] scale 0.2 rotate x*360*0.160641 scale <1,1,1> translate<-8.78538,-35.9763,14.7492> }
object{Deco[6] scale 0.2 rotate x*360*0.415312 scale <1,1,1> translate<-8.71399,-35.9763,14.7492> }
object{Deco[1] scale 0.2 rotate x*360*0.172598 scale <1,1,1> translate<-8.49587,-35.9763,14.7492> }
object{Deco[2] scale 0.2 rotate x*360*0.797826 scale <1,1,1> translate<-8.3318,-35.9763,14.7492> }
object{Deco[2] scale 0.2 rotate x*360*0.368824 scale <1,1,1> translate<-8.29475,-35.9763,14.7492> }
object{Elbow translate z*1 rotate y*90 rotate x*-90 translate -x*1 translate -y*1  translate <-10.3111,-35.9763,14.7492>}
cylinder{<-3.35987,-35.9763,14.7492>,<0.245404,-35.9763,14.7492>,0.2}
cylinder{<-5.35987,-35.9763,14.7492>,<-3.35987,-35.9763,14.7492>,0.2}
cylinder{<1.2454,-36.9763,14.7492>,<1.2454,-41.136,14.7492>,0.2}
object{Elbow translate x*1 rotate x*90 rotate y*180 translate <1.2454,-36.9763,14.7492>}
cylinder{<0.245404,-42.136,14.7492>,<-2.23302,-42.136,14.7492>,0.2}
object{Elbow translate z*1 rotate y*180 rotate x*90  translate <0.245404,-42.136,14.7492>}
cylinder{<-3.23302,-42.136,13.7492>,<-3.23302,-42.136,7.99477>,0.2}
object{Elbow scale <1,1,-1> translate x*1  translate <-3.23302,-42.136,13.7492>}
cylinder{<-3.23302,-42.136,5.99477>,<-3.23302,-42.136,1.6689>,0.2}
cylinder{<-3.23302,-42.136,7.99477>,<-3.23302,-42.136,5.99477>,0.2}
cylinder{<-3.23302,-42.136,-0.331102>,<-3.23302,-42.136,-4.6871>,0.2}
cylinder{<-3.23302,-42.136,1.6689>,<-3.23302,-42.136,-0.331102>,0.2}
cylinder{<-4.23302,-42.136,-5.6871>,<-8.84881,-42.136,-5.6871>,0.2}
object{Elbow scale <-1,1,1> translate z*1  translate <-4.23302,-42.136,-5.6871>}
cylinder{<-9.84881,-43.136,-5.6871>,<-9.84881,-45.4699,-5.6871>,0.2}
object{Elbow translate x*1 rotate x*90 translate <-9.84881,-43.136,-5.6871>}
cylinder{<-9.84881,-46.4699,-4.6871>,<-9.84881,-46.4699,0.491478>,0.2}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1  translate <-9.84881,-46.4699,-4.6871>}
cylinder{<-9.84881,-46.4699,2.49148>,<-9.84881,-46.4699,7.1187>,0.2}
cylinder{<-9.84881,-46.4699,0.491478>,<-9.84881,-46.4699,2.49148>,0.2}
cylinder{<-9.84881,-45.4699,8.1187>,<-9.84881,-42.9567,8.1187>,0.2}
object{Elbow rotate z*90 scale <1,1,-1> translate <-9.84881,-45.4699,8.1187>}
cylinder{<-9.84881,-40.9567,8.1187>,<-9.84881,-37.2864,8.1187>,0.2}
cylinder{<-9.84881,-42.9567,8.1187>,<-9.84881,-40.9567,8.1187>,0.2}
cylinder{<-8.84881,-36.2864,8.1187>,<-3.28257,-36.2864,8.1187>,0.2}
object{Elbow translate z*1 rotate y*90 rotate x*-90 translate -x*1 translate -y*1  translate <-8.84881,-36.2864,8.1187>}
cylinder{<-2.28257,-36.2864,9.1187>,<-2.28257,-36.2864,14.003>,0.2}
object{Elbow rotate y*-90 translate -x*1  translate <-2.28257,-36.2864,9.1187>}
cylinder{<-2.28257,-37.2864,15.003>,<-2.28257,-42.7076,15.003>,0.2}
object{Elbow rotate y*90 rotate -z*90 translate -z*1  translate <-2.28257,-37.2864,15.003>}
cylinder{<-1.28257,-43.7076,15.003>,<4.39114,-43.7076,15.003>,0.2}
object{Elbow rotate -x*90 translate y*1  translate <-1.28257,-43.7076,15.003>}
cylinder{<5.39114,-42.7076,15.003>,<5.39114,-38.3724,15.003>,0.2}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1  translate <5.39114,-42.7076,15.003>}
cylinder{<5.39114,-37.3724,16.003>,<5.39114,-37.3724,21.8658>,0.2}
object{Elbow translate z*1 rotate -z*90 translate -z*1 translate -y*1  translate <5.39114,-37.3724,16.003>}
cylinder{<5.39114,-36.3724,22.8658>,<5.39114,-31.811,22.8658>,0.2}
object{Elbow rotate z*90 scale <1,1,-1> translate <5.39114,-36.3724,22.8658>}
cylinder{<6.39114,-30.811,22.8658>,<10.9035,-30.811,22.8658>,0.2}
object{Elbow translate z*1 rotate y*90 rotate x*-90 translate -x*1 translate -y*1  translate <6.39114,-30.811,22.8658>}
cylinder{<11.9035,-31.811,22.8658>,<11.9035,-34.2039,22.8658>,0.2}
object{Deco[1] scale 0.2 rotate x*360*0.537509 rotate z*90*-1 translate<11.9035,-31.8513,22.8658> }
object{Deco[5] scale 0.2 rotate x*360*0.416773 rotate z*90*-1 translate<11.9035,-32.0616,22.8658> }
object{Deco[2] scale 0.2 rotate x*360*0.963846 rotate z*90*-1 translate<11.9035,-32.2445,22.8658> }
object{Deco[1] scale 0.2 rotate x*360*0.745577 rotate z*90*-1 translate<11.9035,-32.4009,22.8658> }
object{Deco[5] scale 0.2 rotate x*360*0.483082 rotate z*90*-1 translate<11.9035,-32.5889,22.8658> }
object{Deco[5] scale 0.2 rotate x*360*0.280107 rotate z*90*-1 translate<11.9035,-32.7934,22.8658> }
object{Deco[4] scale 0.2 rotate x*360*0.0859634 rotate z*90*-1 translate<11.9035,-32.9887,22.8658> }
object{Deco[4] scale 0.2 rotate x*360*0.0605751 rotate z*90*-1 translate<11.9035,-33.1785,22.8658> }
object{Deco[2] scale 0.2 rotate x*360*0.434495 rotate z*90*-1 translate<11.9035,-33.3658,22.8658> }
object{Deco[1] scale 0.2 rotate x*360*0.16908 rotate z*90*-1 translate<11.9035,-33.5518,22.8658> }
object{Elbow translate x*1 rotate x*90 rotate y*180 translate <11.9035,-31.811,22.8658>}
cylinder{<12.9035,-35.2039,22.8658>,<18.2474,-35.2039,22.8658>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.737773 scale <1,1,1> translate<12.9561,-35.2039,22.8658> }
object{Deco[0] scale 0.2 rotate x*360*0.768311 scale <1,1,1> translate<13.3181,-35.2039,22.8658> }
object{Deco[3] scale 0.2 rotate x*360*0.472615 scale <1,1,1> translate<13.7085,-35.2039,22.8658> }
object{Deco[3] scale 0.2 rotate x*360*0.638851 scale <1,1,1> translate<13.7969,-35.2039,22.8658> }
object{Deco[2] scale 0.2 rotate x*360*0.751203 scale <1,1,1> translate<14.0779,-35.2039,22.8658> }
object{Deco[3] scale 0.2 rotate x*360*0.208879 scale <1,1,1> translate<14.478,-35.2039,22.8658> }
object{Deco[3] scale 0.2 rotate x*360*0.114249 scale <1,1,1> translate<14.4791,-35.2039,22.8658> }
object{Deco[5] scale 0.2 rotate x*360*0.997486 scale <1,1,1> translate<14.5823,-35.2039,22.8658> }
object{Deco[2] scale 0.2 rotate x*360*0.162491 scale <1,1,1> translate<14.9817,-35.2039,22.8658> }
object{Deco[6] scale 0.2 rotate x*360*0.734318 scale <1,1,1> translate<15.4496,-35.2039,22.8658> }
object{Elbow rotate -x*90 translate y*1  translate <12.9035,-35.2039,22.8658>}
cylinder{<19.2474,-35.2039,23.8658>,<19.2474,-35.2039,27.8488>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.624229 rotate y*90*1 translate<19.2474,-35.2039,24.1363> }
object{Deco[3] scale 0.2 rotate x*360*0.37722 rotate y*90*1 translate<19.2474,-35.2039,24.1943> }
object{Deco[3] scale 0.2 rotate x*360*0.649122 rotate y*90*1 translate<19.2474,-35.2039,24.4524> }
object{Deco[0] scale 0.2 rotate x*360*0.827528 rotate y*90*1 translate<19.2474,-35.2039,24.6863> }
object{Deco[1] scale 0.2 rotate x*360*0.0390272 rotate y*90*1 translate<19.2474,-35.2039,24.8516> }
object{Deco[3] scale 0.2 rotate x*360*0.986772 rotate y*90*1 translate<19.2474,-35.2039,25.1915> }
object{Deco[1] scale 0.2 rotate x*360*0.898787 rotate y*90*1 translate<19.2474,-35.2039,25.4501> }
object{Deco[3] scale 0.2 rotate x*360*0.951067 rotate y*90*1 translate<19.2474,-35.2039,25.7888> }
object{Deco[6] scale 0.2 rotate x*360*0.551564 rotate y*90*1 translate<19.2474,-35.2039,25.8236> }
object{Deco[1] scale 0.2 rotate x*360*0.0121581 rotate y*90*1 translate<19.2474,-35.2039,25.9336> }
object{Elbow rotate y*-90 translate -x*1  translate <19.2474,-35.2039,23.8658>}
cylinder{<18.2474,-35.2039,28.8488>,<13.5704,-35.2039,28.8488>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.746072 scale <-1,1,1> translate<18.2135,-35.2039,28.8488> }
object{Deco[4] scale 0.2 rotate x*360*0.498261 scale <-1,1,1> translate<18.2033,-35.2039,28.8488> }
object{Deco[3] scale 0.2 rotate x*360*0.397052 scale <-1,1,1> translate<18.0897,-35.2039,28.8488> }
object{Deco[4] scale 0.2 rotate x*360*0.471643 scale <-1,1,1> translate<17.8867,-35.2039,28.8488> }
object{Deco[6] scale 0.2 rotate x*360*0.628172 scale <-1,1,1> translate<17.7246,-35.2039,28.8488> }
object{Deco[4] scale 0.2 rotate x*360*0.358783 scale <-1,1,1> translate<17.4812,-35.2039,28.8488> }
object{Deco[0] scale 0.2 rotate x*360*0.810063 scale <-1,1,1> translate<17.1639,-35.2039,28.8488> }
object{Deco[0] scale 0.2 rotate x*360*0.868463 scale <-1,1,1> translate<17.1411,-35.2039,28.8488> }
object{Deco[2] scale 0.2 rotate x*360*0.959501 scale <-1,1,1> translate<16.9015,-35.2039,28.8488> }
object{Deco[4] scale 0.2 rotate x*360*0.206579 scale <-1,1,1> translate<16.7495,-35.2039,28.8488> }
object{Elbow scale <-1,1,-1> translate -z*1  translate <18.2474,-35.2039,28.8488>}
cylinder{<11.5704,-35.2039,28.8488>,<6.21549,-35.2039,28.8488>,0.2}
object{Deco[5] scale 0.2 rotate x*360*0.480622 scale <-1,1,1> translate<11.5526,-35.2039,28.8488> }
object{Deco[1] scale 0.2 rotate x*360*0.401819 scale <-1,1,1> translate<11.1678,-35.2039,28.8488> }
object{Deco[4] scale 0.2 rotate x*360*0.0732168 scale <-1,1,1> translate<10.8053,-35.2039,28.8488> }
object{Deco[0] scale 0.2 rotate x*360*0.871854 scale <-1,1,1> translate<10.412,-35.2039,28.8488> }
object{Deco[6] scale 0.2 rotate x*360*0.878377 scale <-1,1,1> translate<10.199,-35.2039,28.8488> }
object{Deco[1] scale 0.2 rotate x*360*0.335532 scale <-1,1,1> translate<9.75978,-35.2039,28.8488> }
object{Deco[1] scale 0.2 rotate x*360*0.921683 scale <-1,1,1> translate<9.44784,-35.2039,28.8488> }
object{Deco[2] scale 0.2 rotate x*360*0.087443 scale <-1,1,1> translate<9.1581,-35.2039,28.8488> }
object{Deco[0] scale 0.2 rotate x*360*0.0722167 scale <-1,1,1> translate<8.8868,-35.2039,28.8488> }
object{Deco[2] scale 0.2 rotate x*360*0.0371857 scale <-1,1,1> translate<8.52378,-35.2039,28.8488> }
cylinder{<13.5704,-35.2039,28.8488>,<11.5704,-35.2039,28.8488>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.502703 scale <-1,1,1> translate<13.5529,-35.2039,28.8488> }
object{Deco[0] scale 0.2 rotate x*360*0.552154 scale <-1,1,1> translate<13.4859,-35.2039,28.8488> }
object{Deco[2] scale 0.2 rotate x*360*0.00128633 scale <-1,1,1> translate<13.4457,-35.2039,28.8488> }
object{Deco[3] scale 0.2 rotate x*360*0.534962 scale <-1,1,1> translate<13.4189,-35.2039,28.8488> }
object{Deco[3] scale 0.2 rotate x*360*0.913874 scale <-1,1,1> translate<13.4016,-35.2039,28.8488> }
object{Deco[1] scale 0.2 rotate x*360*0.99637 scale <-1,1,1> translate<13.2264,-35.2039,28.8488> }
object{Deco[1] scale 0.2 rotate x*360*0.766495 scale <-1,1,1> translate<13.1535,-35.2039,28.8488> }
object{Deco[0] scale 0.2 rotate x*360*0.604298 scale <-1,1,1> translate<13.0905,-35.2039,28.8488> }
object{Deco[2] scale 0.2 rotate x*360*0.864168 scale <-1,1,1> translate<12.9719,-35.2039,28.8488> }
object{Deco[6] scale 0.2 rotate x*360*0.229552 scale <-1,1,1> translate<12.7991,-35.2039,28.8488> }
cylinder{<4.21549,-35.2039,28.8488>,<-0.741344,-35.2039,28.8488>,0.2}
cylinder{<6.21549,-35.2039,28.8488>,<4.21549,-35.2039,28.8488>,0.2}
cylinder{<-1.74134,-35.2039,29.8488>,<-1.74134,-35.2039,34.0412>,0.2}
object{Elbow translate x*1  translate <-1.74134,-35.2039,29.8488>}
cylinder{<-2.74134,-35.2039,35.0412>,<-6.46841,-35.2039,35.0412>,0.2}
object{Elbow scale <-1,1,-1> translate -z*1  translate <-2.74134,-35.2039,35.0412>}
cylinder{<-7.46841,-34.2039,35.0412>,<-7.46841,-32.0277,35.0412>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-7.46841,-34.2039,35.0412>}
cylinder{<-7.46841,-30.0277,35.0412>,<-7.46841,-25.1631,35.0412>,0.2}
cylinder{<-7.46841,-32.0277,35.0412>,<-7.46841,-30.0277,35.0412>,0.2}
cylinder{<-7.46841,-23.1631,35.0412>,<-7.46841,-18.3744,35.0412>,0.2}
cylinder{<-7.46841,-25.1631,35.0412>,<-7.46841,-23.1631,35.0412>,0.2}
cylinder{<-7.46841,-17.3744,34.0412>,<-7.46841,-17.3744,30.7561>,0.2}
object{Elbow rotate y*180 rotate z*90 translate -y*1  translate <-7.46841,-17.3744,34.0412>}
cylinder{<-7.46841,-16.3744,29.7561>,<-7.46841,-10.9891,29.7561>,0.2}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1  translate <-7.46841,-16.3744,29.7561>}
cylinder{<-8.46841,-9.98906,29.7561>,<-10.9319,-9.98906,29.7561>,0.2}
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <-8.46841,-9.98906,29.7561>}
cylinder{<-12.9319,-9.98906,29.7561>,<-18.1872,-9.98906,29.7561>,0.2}
cylinder{<-10.9319,-9.98906,29.7561>,<-12.9319,-9.98906,29.7561>,0.2}
cylinder{<-20.1872,-9.98906,29.7561>,<-24.0825,-9.98906,29.7561>,0.2}
cylinder{<-18.1872,-9.98906,29.7561>,<-20.1872,-9.98906,29.7561>,0.2}
cylinder{<-26.0825,-9.98906,29.7561>,<-28,-9.98906,29.7561>,0.2}
cylinder{<-24.0825,-9.98906,29.7561>,<-26.0825,-9.98906,29.7561>,0.2}
cylinder{<-29,-10.9891,29.7561>,<-29,-13.5501,29.7561>,0.2}
object{Elbow translate x*1 rotate x*90 translate <-29,-10.9891,29.7561>}
cylinder{<-29,-14.5501,28.7561>,<-29,-14.5501,23.8187>,0.2}
object{Elbow translate z*1 rotate z*90 rotate -x*90 translate <-29,-14.5501,28.7561>}
cylinder{<-29,-14.5501,21.8187>,<-29,-14.5501,19.4872>,0.2}
cylinder{<-29,-14.5501,23.8187>,<-29,-14.5501,21.8187>,0.2}
cylinder{<-29,-14.5501,17.4872>,<-29,-14.5501,12.6417>,0.2}
cylinder{<-29,-14.5501,19.4872>,<-29,-14.5501,17.4872>,0.2}
cylinder{<-29,-14.5501,10.6417>,<-29,-14.5501,8.38771>,0.2}
cylinder{<-29,-14.5501,12.6417>,<-29,-14.5501,10.6417>,0.2}
cylinder{<-29,-14.5501,6.38771>,<-29,-14.5501,2.36502>,0.2}
cylinder{<-29,-14.5501,8.38771>,<-29,-14.5501,6.38771>,0.2}
cylinder{<-29,-15.5501,1.36502>,<-29,-20.1133,1.36502>,0.2}
object{Elbow translate z*1 rotate -z*90 translate <-29,-15.5501,1.36502>}
cylinder{<-28,-21.1133,1.36502>,<-23.0167,-21.1133,1.36502>,0.2}
object{Elbow rotate -x*90 translate y*1  translate <-28,-21.1133,1.36502>}
cylinder{<-21.0167,-21.1133,1.36502>,<-17.6089,-21.1133,1.36502>,0.2}
cylinder{<-23.0167,-21.1133,1.36502>,<-21.0167,-21.1133,1.36502>,0.2}
cylinder{<-15.6089,-21.1133,1.36502>,<-11.2268,-21.1133,1.36502>,0.2}
cylinder{<-17.6089,-21.1133,1.36502>,<-15.6089,-21.1133,1.36502>,0.2}
cylinder{<-10.2268,-21.1133,2.36502>,<-10.2268,-21.1133,7.26517>,0.2}
object{Elbow rotate y*-90 translate -x*1  translate <-10.2268,-21.1133,2.36502>}
cylinder{<-11.2268,-21.1133,8.26517>,<-14.0653,-21.1133,8.26517>,0.2}
object{Elbow scale <-1,1,-1> translate -z*1  translate <-11.2268,-21.1133,8.26517>}
cylinder{<-15.0653,-20.1133,8.26517>,<-15.0653,-17.2974,8.26517>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-15.0653,-20.1133,8.26517>}
cylinder{<-15.0653,-15.2974,8.26517>,<-15.0653,-9.35826,8.26517>,0.2}
cylinder{<-15.0653,-17.2974,8.26517>,<-15.0653,-15.2974,8.26517>,0.2}
cylinder{<-16.0653,-8.35826,8.26517>,<-18.3675,-8.35826,8.26517>,0.2}
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <-16.0653,-8.35826,8.26517>}
cylinder{<-19.3675,-8.35826,9.26517>,<-19.3675,-8.35826,12.3776>,0.2}
object{Elbow translate x*1  translate <-19.3675,-8.35826,9.26517>}
cylinder{<-19.3675,-8.35826,14.3776>,<-19.3675,-8.35826,19.5414>,0.2}
cylinder{<-19.3675,-8.35826,12.3776>,<-19.3675,-8.35826,14.3776>,0.2}
cylinder{<-19.3675,-8.35826,21.5414>,<-19.3675,-8.35826,25.8583>,0.2}
cylinder{<-19.3675,-8.35826,19.5414>,<-19.3675,-8.35826,21.5414>,0.2}
cylinder{<-19.3675,-7.35826,26.8583>,<-19.3675,-4.42224,26.8583>,0.2}
object{Elbow rotate z*90 scale <1,1,-1> translate <-19.3675,-7.35826,26.8583>}
cylinder{<-20.3675,-3.42224,26.8583>,<-23.4736,-3.42224,26.8583>,0.2}
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <-20.3675,-3.42224,26.8583>}
cylinder{<-24.4736,-2.42224,26.8583>,<-24.4736,0.75662,26.8583>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-24.4736,-2.42224,26.8583>}
cylinder{<-23.4736,1.75662,26.8583>,<-21.461,1.75662,26.8583>,0.2}
object{Elbow translate z*1 rotate y*90 rotate x*-90 translate -x*1 translate -y*1  translate <-23.4736,1.75662,26.8583>}
cylinder{<-19.461,1.75662,26.8583>,<-16.0291,1.75662,26.8583>,0.2}
cylinder{<-21.461,1.75662,26.8583>,<-19.461,1.75662,26.8583>,0.2}
cylinder{<-15.0291,0.75662,26.8583>,<-15.0291,-4.42664,26.8583>,0.2}
object{Elbow translate x*1 rotate x*90 rotate y*180 translate <-15.0291,0.75662,26.8583>}
cylinder{<-15.0291,-5.42664,27.8583>,<-15.0291,-5.42664,32.125>,0.2}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1  translate <-15.0291,-5.42664,27.8583>}
cylinder{<-14.0291,-5.42664,33.125>,<-9.82145,-5.42664,33.125>,0.2}
object{Elbow scale <1,1,-1> translate -z*1  translate <-14.0291,-5.42664,33.125>}
cylinder{<-7.82145,-5.42664,33.125>,<-1.94654,-5.42664,33.125>,0.2}
cylinder{<-9.82145,-5.42664,33.125>,<-7.82145,-5.42664,33.125>,0.2}
cylinder{<-0.946542,-5.42664,34.125>,<-0.946542,-5.42664,38.1999>,0.2}
object{Elbow rotate y*-90 translate -x*1  translate <-0.946542,-5.42664,34.125>}
cylinder{<-0.946542,-4.42664,39.1999>,<-0.946542,1.20136,39.1999>,0.2}
object{Elbow rotate z*90 scale <1,1,-1> translate <-0.946542,-4.42664,39.1999>}
cylinder{<-0.946542,2.20136,40.1999>,<-0.946542,2.20136,42.5>,0.2}
object{Elbow translate z*1 rotate -z*90 translate -z*1 translate -y*1  translate <-0.946542,2.20136,40.1999>}
cylinder{<-0.946542,1.20136,43.5>,<-0.946542,-1.84669,43.5>,0.2}
object{Elbow rotate y*90 rotate -z*90 translate -z*1  translate <-0.946542,1.20136,43.5>}
cylinder{<-0.946542,-3.84669,43.5>,<-0.946542,-6.28109,43.5>,0.2}
cylinder{<-0.946542,-1.84669,43.5>,<-0.946542,-3.84669,43.5>,0.2}
cylinder{<-0.946542,-8.28109,43.5>,<-0.946542,-11.9068,43.5>,0.2}
cylinder{<-0.946542,-6.28109,43.5>,<-0.946542,-8.28109,43.5>,0.2}
cylinder{<-1.94654,-12.9068,43.5>,<-5.01419,-12.9068,43.5>,0.2}
object{Elbow translate z*1 rotate y*180 rotate x*90  translate <-1.94654,-12.9068,43.5>}
cylinder{<-6.01419,-12.9068,42.5>,<-6.01419,-12.9068,39.8583>,0.2}
object{Elbow scale <1,1,-1> translate x*1  translate <-6.01419,-12.9068,42.5>}
cylinder{<-7.01419,-12.9068,38.8583>,<-12.4168,-12.9068,38.8583>,0.2}
object{Elbow scale <-1,1,1> translate z*1  translate <-7.01419,-12.9068,38.8583>}
cylinder{<-13.4168,-11.9068,38.8583>,<-13.4168,-9.27547,38.8583>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-13.4168,-11.9068,38.8583>}
cylinder{<-13.4168,-7.27547,38.8583>,<-13.4168,-1.86896,38.8583>,0.2}
cylinder{<-13.4168,-9.27547,38.8583>,<-13.4168,-7.27547,38.8583>,0.2}
cylinder{<-13.4168,0.131043,38.8583>,<-13.4168,2.98953,38.8583>,0.2}
cylinder{<-13.4168,-1.86896,38.8583>,<-13.4168,0.131043,38.8583>,0.2}
cylinder{<-14.4168,3.98953,38.8583>,<-17.1645,3.98953,38.8583>,0.2}
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <-14.4168,3.98953,38.8583>}
cylinder{<-18.1645,2.98953,38.8583>,<-18.1645,0.388229,38.8583>,0.2}
object{Elbow translate x*1 rotate x*90 translate <-18.1645,2.98953,38.8583>}
cylinder{<-18.1645,-0.611771,37.8583>,<-18.1645,-0.611771,33.5335>,0.2}
object{Elbow translate z*1 rotate z*90 rotate -x*90 translate <-18.1645,-0.611771,37.8583>}
cylinder{<-18.1645,-0.611771,31.5335>,<-18.1645,-0.611771,26.2011>,0.2}
cylinder{<-18.1645,-0.611771,33.5335>,<-18.1645,-0.611771,31.5335>,0.2}
cylinder{<-17.1645,-0.611771,25.2011>,<-12.9501,-0.611771,25.2011>,0.2}
object{Elbow translate z*1  translate <-17.1645,-0.611771,25.2011>}
cylinder{<-10.9501,-0.611771,25.2011>,<-7.92692,-0.611771,25.2011>,0.2}
cylinder{<-12.9501,-0.611771,25.2011>,<-10.9501,-0.611771,25.2011>,0.2}
cylinder{<-6.92692,-0.611771,24.2011>,<-6.92692,-0.611771,20.5279>,0.2}
object{Elbow translate x*1 rotate y*180 translate <-6.92692,-0.611771,24.2011>}
cylinder{<-7.92692,-0.611771,19.5279>,<-12.879,-0.611771,19.5279>,0.2}
object{Elbow scale <-1,1,1> translate z*1  translate <-7.92692,-0.611771,19.5279>}
cylinder{<-13.879,0.388229,19.5279>,<-13.879,5.87519,19.5279>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-13.879,0.388229,19.5279>}
cylinder{<-13.879,6.87519,20.5279>,<-13.879,6.87519,25.4825>,0.2}
object{Elbow translate z*1 rotate -z*90 translate -z*1 translate -y*1  translate <-13.879,6.87519,20.5279>}
cylinder{<-14.879,6.87519,26.4825>,<-17.9841,6.87519,26.4825>,0.2}
object{Elbow scale <-1,1,-1> translate -z*1  translate <-14.879,6.87519,26.4825>}
cylinder{<-19.9841,6.87519,26.4825>,<-22.0357,6.87519,26.4825>,0.2}
cylinder{<-17.9841,6.87519,26.4825>,<-19.9841,6.87519,26.4825>,0.2}
cylinder{<-23.0357,5.87519,26.4825>,<-23.0357,-0.122818,26.4825>,0.2}
object{Elbow translate x*1 rotate x*90 translate <-23.0357,5.87519,26.4825>}
cylinder{<-22.0357,-1.12282,26.4825>,<-19.6408,-1.12282,26.4825>,0.2}
object{Elbow rotate -x*90 translate y*1  translate <-22.0357,-1.12282,26.4825>}
cylinder{<-17.6408,-1.12282,26.4825>,<-13.9666,-1.12282,26.4825>,0.2}
cylinder{<-19.6408,-1.12282,26.4825>,<-17.6408,-1.12282,26.4825>,0.2}
cylinder{<-11.9666,-1.12282,26.4825>,<-8.50104,-1.12282,26.4825>,0.2}
cylinder{<-13.9666,-1.12282,26.4825>,<-11.9666,-1.12282,26.4825>,0.2}
cylinder{<-7.50104,-0.122818,26.4825>,<-7.50104,3.6728,26.4825>,0.2}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1  translate <-7.50104,-0.122818,26.4825>}
cylinder{<-7.50104,4.6728,27.4825>,<-7.50104,4.6728,29.9473>,0.2}
object{Elbow translate z*1 rotate -z*90 translate -z*1 translate -y*1  translate <-7.50104,4.6728,27.4825>}
cylinder{<-7.50104,4.6728,31.9473>,<-7.50104,4.6728,36.7746>,0.2}
cylinder{<-7.50104,4.6728,29.9473>,<-7.50104,4.6728,31.9473>,0.2}
cylinder{<-7.50104,4.6728,38.7746>,<-7.50104,4.6728,42.5>,0.2}
cylinder{<-7.50104,4.6728,36.7746>,<-7.50104,4.6728,38.7746>,0.2}
cylinder{<-8.50104,4.6728,43.5>,<-13.1616,4.6728,43.5>,0.2}
object{Elbow scale <-1,1,-1> translate -z*1  translate <-8.50104,4.6728,43.5>}
cylinder{<-15.1616,4.6728,43.5>,<-20.9975,4.6728,43.5>,0.2}
cylinder{<-13.1616,4.6728,43.5>,<-15.1616,4.6728,43.5>,0.2}
cylinder{<-21.9975,3.6728,43.5>,<-21.9975,0.519539,43.5>,0.2}
object{Elbow translate x*1 rotate x*90 translate <-21.9975,3.6728,43.5>}
cylinder{<-20.9975,-0.480461,43.5>,<-15.5241,-0.480461,43.5>,0.2}
object{Elbow rotate -x*90 translate y*1  translate <-20.9975,-0.480461,43.5>}
cylinder{<-14.5241,0.519539,43.5>,<-14.5241,3.93024,43.5>,0.2}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1  translate <-14.5241,0.519539,43.5>}
cylinder{<-15.5241,4.93024,43.5>,<-19.863,4.93024,43.5>,0.2}
object{Elbow translate x*1 rotate x*90 rotate -z*90  translate <-15.5241,4.93024,43.5>}
cylinder{<-20.863,5.93024,43.5>,<-20.863,9.76213,43.5>,0.2}
object{Elbow translate z*1 rotate -x*90 translate x*1 translate -y*1  translate <-20.863,5.93024,43.5>}
cylinder{<-20.863,11.7621,43.5>,<-20.863,17.0141,43.5>,0.2}
cylinder{<-20.863,9.76213,43.5>,<-20.863,11.7621,43.5>,0.2}
cylinder{<-20.863,19.0141,43.5>,<-20.863,24.9986,43.5>,0.2}
cylinder{<-20.863,17.0141,43.5>,<-20.863,19.0141,43.5>,0.2}
cylinder{<-20.863,26.9986,43.5>,<-20.863,31.5221,43.5>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.925372 rotate z*90*1 translate<-20.863,27.2744,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.630669 rotate z*90*1 translate<-20.863,27.6612,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.764045 rotate z*90*1 translate<-20.863,27.8015,43.5> }
object{Deco[3] scale 0.2 rotate x*360*0.778753 rotate z*90*1 translate<-20.863,28.0703,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.152041 rotate z*90*1 translate<-20.863,28.2417,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.468441 rotate z*90*1 translate<-20.863,28.6106,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.117949 rotate z*90*1 translate<-20.863,28.7822,43.5> }
object{Deco[2] scale 0.2 rotate x*360*0.392658 rotate z*90*1 translate<-20.863,28.9926,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.437264 rotate z*90*1 translate<-20.863,29.0062,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.162362 rotate z*90*1 translate<-20.863,29.2338,43.5> }
cylinder{<-20.863,24.9986,43.5>,<-20.863,26.9986,43.5>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.906327 rotate z*90*1 translate<-20.863,25.1578,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.880307 rotate z*90*1 translate<-20.863,25.3025,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.89722 rotate z*90*1 translate<-20.863,25.3597,43.5> }
object{Deco[4] scale 0.2 rotate x*360*0.821631 rotate z*90*1 translate<-20.863,25.44,43.5> }
object{Deco[5] scale 0.2 rotate x*360*0.0711821 rotate z*90*1 translate<-20.863,25.5739,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.717488 rotate z*90*1 translate<-20.863,25.6793,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.000189939 rotate z*90*1 translate<-20.863,25.7906,43.5> }
object{Deco[6] scale 0.2 rotate x*360*0.802978 rotate z*90*1 translate<-20.863,25.8395,43.5> }
object{Deco[0] scale 0.2 rotate x*360*0.607454 rotate z*90*1 translate<-20.863,25.8779,43.5> }
object{Deco[1] scale 0.2 rotate x*360*0.838484 rotate z*90*1 translate<-20.863,25.9913,43.5> }
cylinder{<-20.863,32.5221,42.5>,<-20.863,32.5221,39.9566>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.580097 rotate y*90*-1 translate<-20.863,32.5221,42.3612> }
object{Deco[0] scale 0.2 rotate x*360*0.9576 rotate y*90*-1 translate<-20.863,32.5221,42.2903> }
object{Deco[5] scale 0.2 rotate x*360*0.493636 rotate y*90*-1 translate<-20.863,32.5221,42.1179> }
object{Deco[6] scale 0.2 rotate x*360*0.362429 rotate y*90*-1 translate<-20.863,32.5221,41.8893> }
object{Deco[4] scale 0.2 rotate x*360*0.725515 rotate y*90*-1 translate<-20.863,32.5221,41.7178> }
object{Deco[0] scale 0.2 rotate x*360*0.91838 rotate y*90*-1 translate<-20.863,32.5221,41.5577> }
object{Deco[5] scale 0.2 rotate x*360*0.500524 rotate y*90*-1 translate<-20.863,32.5221,41.3538> }
object{Deco[2] scale 0.2 rotate x*360*0.345354 rotate y*90*-1 translate<-20.863,32.5221,41.3271> }
object{Deco[0] scale 0.2 rotate x*360*0.531984 rotate y*90*-1 translate<-20.863,32.5221,41.2116> }
object{Deco[1] scale 0.2 rotate x*360*0.45222 rotate y*90*-1 translate<-20.863,32.5221,41.1614> }
object{Elbow rotate y*180 rotate z*90 translate -y*1  translate <-20.863,32.5221,42.5>}
cylinder{<-20.863,31.5221,38.9566>,<-20.863,26.4185,38.9566>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.751019 rotate z*90*-1 translate<-20.863,31.502,38.9566> }
object{Deco[2] scale 0.2 rotate x*360*0.960462 rotate z*90*-1 translate<-20.863,31.3581,38.9566> }
object{Deco[1] scale 0.2 rotate x*360*0.246849 rotate z*90*-1 translate<-20.863,31.0622,38.9566> }
object{Deco[5] scale 0.2 rotate x*360*0.359869 rotate z*90*-1 translate<-20.863,30.9579,38.9566> }
object{Deco[4] scale 0.2 rotate x*360*0.202455 rotate z*90*-1 translate<-20.863,30.8686,38.9566> }
object{Deco[6] scale 0.2 rotate x*360*0.6842 rotate z*90*-1 translate<-20.863,30.6291,38.9566> }
object{Deco[3] scale 0.2 rotate x*360*0.783035 rotate z*90*-1 translate<-20.863,30.272,38.9566> }
object{Deco[3] scale 0.2 rotate x*360*0.165982 rotate z*90*-1 translate<-20.863,30.1819,38.9566> }
object{Deco[2] scale 0.2 rotate x*360*0.236654 rotate z*90*-1 translate<-20.863,29.8553,38.9566> }
object{Deco[1] scale 0.2 rotate x*360*0.444313 rotate z*90*-1 translate<-20.863,29.4408,38.9566> }
object{Elbow translate z*1 rotate -z*90 translate <-20.863,31.5221,38.9566>}
cylinder{<-20.863,25.4185,37.9566>,<-20.863,25.4185,33.6273>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.0561769 rotate y*90*-1 translate<-20.863,25.4185,37.795> }
object{Deco[2] scale 0.2 rotate x*360*0.442481 rotate y*90*-1 translate<-20.863,25.4185,37.4031> }
object{Deco[6] scale 0.2 rotate x*360*0.476561 rotate y*90*-1 translate<-20.863,25.4185,37.2566> }
object{Deco[2] scale 0.2 rotate x*360*0.788441 rotate y*90*-1 translate<-20.863,25.4185,37.2432> }
object{Deco[6] scale 0.2 rotate x*360*0.152757 rotate y*90*-1 translate<-20.863,25.4185,36.9555> }
object{Deco[1] scale 0.2 rotate x*360*0.215019 rotate y*90*-1 translate<-20.863,25.4185,36.9077> }
object{Deco[0] scale 0.2 rotate x*360*0.165474 rotate y*90*-1 translate<-20.863,25.4185,36.7297> }
object{Deco[3] scale 0.2 rotate x*360*0.432709 rotate y*90*-1 translate<-20.863,25.4185,36.4578> }
object{Deco[0] scale 0.2 rotate x*360*0.229643 rotate y*90*-1 translate<-20.863,25.4185,36.2627> }
object{Deco[1] scale 0.2 rotate x*360*0.130072 rotate y*90*-1 translate<-20.863,25.4185,35.9392> }
object{Elbow translate z*1 rotate z*90 rotate -x*90 translate <-20.863,25.4185,37.9566>}
cylinder{<-20.863,25.4185,31.6273>,<-20.863,25.4185,26.8446>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.710781 rotate y*90*-1 translate<-20.863,25.4185,31.3612> }
object{Deco[6] scale 0.2 rotate x*360*0.722871 rotate y*90*-1 translate<-20.863,25.4185,30.951> }
object{Deco[0] scale 0.2 rotate x*360*0.705598 rotate y*90*-1 translate<-20.863,25.4185,30.6648> }
object{Deco[0] scale 0.2 rotate x*360*0.513255 rotate y*90*-1 translate<-20.863,25.4185,30.3102> }
object{Deco[4] scale 0.2 rotate x*360*0.0553044 rotate y*90*-1 translate<-20.863,25.4185,29.8965> }
object{Deco[3] scale 0.2 rotate x*360*0.726538 rotate y*90*-1 translate<-20.863,25.4185,29.8011> }
object{Deco[2] scale 0.2 rotate x*360*0.418714 rotate y*90*-1 translate<-20.863,25.4185,29.504> }
object{Deco[6] scale 0.2 rotate x*360*0.454008 rotate y*90*-1 translate<-20.863,25.4185,29.2616> }
object{Deco[2] scale 0.2 rotate x*360*0.0972564 rotate y*90*-1 translate<-20.863,25.4185,28.9356> }
object{Deco[4] scale 0.2 rotate x*360*0.0904291 rotate y*90*-1 translate<-20.863,25.4185,28.9081> }
cylinder{<-20.863,25.4185,33.6273>,<-20.863,25.4185,31.6273>,0.2}
object{Deco[6] scale 0.2 rotate x*360*0.25986 rotate y*90*-1 translate<-20.863,25.4185,33.5084> }
object{Deco[3] scale 0.2 rotate x*360*0.123828 rotate y*90*-1 translate<-20.863,25.4185,33.3593> }
object{Deco[6] scale 0.2 rotate x*360*0.533867 rotate y*90*-1 translate<-20.863,25.4185,33.2921> }
object{Deco[4] scale 0.2 rotate x*360*0.483881 rotate y*90*-1 translate<-20.863,25.4185,33.1799> }
object{Deco[2] scale 0.2 rotate x*360*0.403044 rotate y*90*-1 translate<-20.863,25.4185,33.1513> }
object{Deco[1] scale 0.2 rotate x*360*0.160949 rotate y*90*-1 translate<-20.863,25.4185,33.0906> }
object{Deco[3] scale 0.2 rotate x*360*0.796088 rotate y*90*-1 translate<-20.863,25.4185,32.9482> }
object{Deco[5] scale 0.2 rotate x*360*0.511901 rotate y*90*-1 translate<-20.863,25.4185,32.9481> }
object{Deco[4] scale 0.2 rotate x*360*0.543015 rotate y*90*-1 translate<-20.863,25.4185,32.7753> }
object{Deco[3] scale 0.2 rotate x*360*0.568261 rotate y*90*-1 translate<-20.863,25.4185,32.6688> }
cylinder{<-20.863,25.4185,24.8446>,<-20.863,25.4185,22.1569>,0.2}
object{Deco[4] scale 0.2 rotate x*360*0.670208 rotate y*90*-1 translate<-20.863,25.4185,24.7628> }
object{Deco[5] scale 0.2 rotate x*360*0.898084 rotate y*90*-1 translate<-20.863,25.4185,24.5626> }
object{Deco[5] scale 0.2 rotate x*360*0.364161 rotate y*90*-1 translate<-20.863,25.4185,24.5> }
object{Deco[1] scale 0.2 rotate x*360*0.470025 rotate y*90*-1 translate<-20.863,25.4185,24.2748> }
object{Deco[5] scale 0.2 rotate x*360*0.586493 rotate y*90*-1 translate<-20.863,25.4185,24.2296> }
object{Deco[5] scale 0.2 rotate x*360*0.938488 rotate y*90*-1 translate<-20.863,25.4185,24.0726> }
object{Deco[4] scale 0.2 rotate x*360*0.700422 rotate y*90*-1 translate<-20.863,25.4185,24.029> }
object{Deco[6] scale 0.2 rotate x*360*0.0373192 rotate y*90*-1 translate<-20.863,25.4185,23.8684> }
object{Deco[4] scale 0.2 rotate x*360*0.156368 rotate y*90*-1 translate<-20.863,25.4185,23.6971> }
object{Deco[1] scale 0.2 rotate x*360*0.1789 rotate y*90*-1 translate<-20.863,25.4185,23.5429> }
cylinder{<-20.863,25.4185,26.8446>,<-20.863,25.4185,24.8446>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.663252 rotate y*90*-1 translate<-20.863,25.4185,26.8413> }
object{Deco[6] scale 0.2 rotate x*360*0.532089 rotate y*90*-1 translate<-20.863,25.4185,26.6792> }
object{Deco[0] scale 0.2 rotate x*360*0.798235 rotate y*90*-1 translate<-20.863,25.4185,26.571> }
object{Deco[5] scale 0.2 rotate x*360*0.367392 rotate y*90*-1 translate<-20.863,25.4185,26.5654> }
object{Deco[5] scale 0.2 rotate x*360*0.64534 rotate y*90*-1 translate<-20.863,25.4185,26.4447> }
object{Deco[6] scale 0.2 rotate x*360*0.589409 rotate y*90*-1 translate<-20.863,25.4185,26.3582> }
object{Deco[1] scale 0.2 rotate x*360*0.253603 rotate y*90*-1 translate<-20.863,25.4185,26.2333> }
object{Deco[6] scale 0.2 rotate x*360*0.557249 rotate y*90*-1 translate<-20.863,25.4185,26.1357> }
object{Deco[2] scale 0.2 rotate x*360*0.81967 rotate y*90*-1 translate<-20.863,25.4185,25.9704> }
object{Deco[0] scale 0.2 rotate x*360*0.982117 rotate y*90*-1 translate<-20.863,25.4185,25.9269> }
cylinder{<-20.863,25.4185,20.1569>,<-20.863,25.4185,15.6475>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.26653 rotate y*90*-1 translate<-20.863,25.4185,20.0173> }
object{Deco[3] scale 0.2 rotate x*360*0.478387 rotate y*90*-1 translate<-20.863,25.4185,19.8328> }
object{Deco[4] scale 0.2 rotate x*360*0.602528 rotate y*90*-1 translate<-20.863,25.4185,19.6843> }
object{Deco[6] scale 0.2 rotate x*360*0.504802 rotate y*90*-1 translate<-20.863,25.4185,19.6805> }
object{Deco[4] scale 0.2 rotate x*360*0.147331 rotate y*90*-1 translate<-20.863,25.4185,19.6063> }
object{Deco[6] scale 0.2 rotate x*360*0.43629 rotate y*90*-1 translate<-20.863,25.4185,19.2582> }
object{Deco[1] scale 0.2 rotate x*360*0.331486 rotate y*90*-1 translate<-20.863,25.4185,18.9508> }
object{Deco[2] scale 0.2 rotate x*360*0.288084 rotate y*90*-1 translate<-20.863,25.4185,18.7702> }
object{Deco[3] scale 0.2 rotate x*360*0.243009 rotate y*90*-1 translate<-20.863,25.4185,18.5995> }
object{Deco[6] scale 0.2 rotate x*360*0.607905 rotate y*90*-1 translate<-20.863,25.4185,18.5272> }
cylinder{<-20.863,25.4185,22.1569>,<-20.863,25.4185,20.1569>,0.2}
object{Deco[3] scale 0.2 rotate x*360*0.942991 rotate y*90*-1 translate<-20.863,25.4185,22.0161> }
object{Deco[4] scale 0.2 rotate x*360*0.627343 rotate y*90*-1 translate<-20.863,25.4185,21.9082> }
object{Deco[1] scale 0.2 rotate x*360*0.226596 rotate y*90*-1 translate<-20.863,25.4185,21.8754> }
object{Deco[5] scale 0.2 rotate x*360*0.866628 rotate y*90*-1 translate<-20.863,25.4185,21.8289> }
object{Deco[0] scale 0.2 rotate x*360*0.358371 rotate y*90*-1 translate<-20.863,25.4185,21.7994> }
object{Deco[2] scale 0.2 rotate x*360*0.203646 rotate y*90*-1 translate<-20.863,25.4185,21.7314> }
object{Deco[4] scale 0.2 rotate x*360*0.581326 rotate y*90*-1 translate<-20.863,25.4185,21.5788> }
object{Deco[3] scale 0.2 rotate x*360*0.637797 rotate y*90*-1 translate<-20.863,25.4185,21.4304> }
object{Deco[5] scale 0.2 rotate x*360*0.446267 rotate y*90*-1 translate<-20.863,25.4185,21.2592> }
object{Deco[1] scale 0.2 rotate x*360*0.519322 rotate y*90*-1 translate<-20.863,25.4185,21.1944> }
cylinder{<-20.863,25.4185,13.6475>,<-20.863,25.4185,7.67237>,0.2}
object{Deco[2] scale 0.2 rotate x*360*0.913013 rotate y*90*-1 translate<-20.863,25.4185,13.352> }
object{Deco[6] scale 0.2 rotate x*360*0.407697 rotate y*90*-1 translate<-20.863,25.4185,12.8427> }
object{Deco[1] scale 0.2 rotate x*360*0.872287 rotate y*90*-1 translate<-20.863,25.4185,12.375> }
object{Deco[4] scale 0.2 rotate x*360*0.515737 rotate y*90*-1 translate<-20.863,25.4185,11.9242> }
object{Deco[5] scale 0.2 rotate x*360*0.937733 rotate y*90*-1 translate<-20.863,25.4185,11.9078> }
object{Deco[0] scale 0.2 rotate x*360*0.748274 rotate y*90*-1 translate<-20.863,25.4185,11.7727> }
object{Deco[1] scale 0.2 rotate x*360*0.62886 rotate y*90*-1 translate<-20.863,25.4185,11.7581> }
object{Deco[2] scale 0.2 rotate x*360*0.43817 rotate y*90*-1 translate<-20.863,25.4185,11.3937> }
object{Deco[3] scale 0.2 rotate x*360*0.487667 rotate y*90*-1 translate<-20.863,25.4185,11.0242> }
object{Deco[2] scale 0.2 rotate x*360*0.420951 rotate y*90*-1 translate<-20.863,25.4185,10.8549> }
cylinder{<-20.863,25.4185,15.6475>,<-20.863,25.4185,13.6475>,0.2}
object{Deco[0] scale 0.2 rotate x*360*0.346781 rotate y*90*-1 translate<-20.863,25.4185,15.5507> }
object{Deco[2] scale 0.2 rotate x*360*0.620108 rotate y*90*-1 translate<-20.863,25.4185,15.4267> }
object{Deco[2] scale 0.2 rotate x*360*0.429825 rotate y*90*-1 translate<-20.863,25.4185,15.3503> }
object{Deco[3] scale 0.2 rotate x*360*0.663536 rotate y*90*-1 translate<-20.863,25.4185,15.3216> }
object{Deco[4] scale 0.2 rotate x*360*0.602981 rotate y*90*-1 translate<-20.863,25.4185,15.2391> }
object{Deco[6] scale 0.2 rotate x*360*0.328116 rotate y*90*-1 translate<-20.863,25.4185,15.1149> }
object{Deco[4] scale 0.2 rotate x*360*0.750045 rotate y*90*-1 translate<-20.863,25.4185,15.0833> }
object{Deco[1] scale 0.2 rotate x*360*0.930727 rotate y*90*-1 translate<-20.863,25.4185,14.9077> }
object{Deco[1] scale 0.2 rotate x*360*0.435649 rotate y*90*-1 translate<-20.863,25.4185,14.8411> }
object{Deco[3] scale 0.2 rotate x*360*0.738064 rotate y*90*-1 translate<-20.863,25.4185,14.8042> }
cylinder{<-20.863,24.4185,6.67237>,<-20.863,21.7227,6.67237>,0.2}
object{Elbow translate z*1 rotate -z*90 translate <-20.863,24.4185,6.67237>}
cylinder{<-20.863,19.7227,6.67237>,<-20.863,15.4634,6.67237>,0.2}
cylinder{<-20.863,21.7227,6.67237>,<-20.863,19.7227,6.67237>,0.2}
cylinder{<-21.863,14.4634,6.67237>,<-26.3313,14.4634,6.67237>,0.2}
object{Elbow translate z*1 rotate y*180 rotate x*90  translate <-21.863,14.4634,6.67237>}
}
