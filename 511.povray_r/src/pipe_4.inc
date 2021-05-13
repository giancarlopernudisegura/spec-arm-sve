union{
#declare Elbow=union{intersection{torus{1.5,0.3} plane{x,0} plane{z,0}}
torus{0.3,0.09 rotate z*90 translate -z*1.5}
torus{0.3,0.09 rotate x*90 translate -x*1.5}
torus{0.3,0.09 rotate x*90 translate -x*1.5 rotate y*-30}
torus{0.3,0.09 rotate x*90 translate -x*1.5 rotate y*-60}
}
cylinder{<0,1.5,0>,<0,7.83667,0>,0.3}
cylinder{<0,10.8367,0>,<0,16.7661,0>,0.3}
cylinder{<0,7.83667,0>,<0,10.8367,0>,0.3}
cylinder{<-1.5,18.2661,0>,<-9.26746,18.2661,0>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate -z*90  translate <-1.5,18.2661,0>}
cylinder{<-12.2675,18.2661,0>,<-15.8845,18.2661,0>,0.3}
cylinder{<-9.26746,18.2661,0>,<-12.2675,18.2661,0>,0.3}
cylinder{<-18.8845,18.2661,0>,<-24.4523,18.2661,0>,0.3}
cylinder{<-15.8845,18.2661,0>,<-18.8845,18.2661,0>,0.3}
cylinder{<-25.9523,19.7661,0>,<-25.9523,25.2244,0>,0.3}
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-25.9523,19.7661,0>}
cylinder{<-25.9523,26.7244,1.5>,<-25.9523,26.7244,9.35693>,0.3}
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-25.9523,26.7244,1.5>}
cylinder{<-25.9523,26.7244,12.3569>,<-25.9523,26.7244,20.2517>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.581243 rotate y*90*1 translate<-25.9523,26.7244,12.7498> }
object{Deco[2] scale 0.3 rotate x*360*0.110439 rotate y*90*1 translate<-25.9523,26.7244,13.4488> }
object{Deco[6] scale 0.3 rotate x*360*0.956471 rotate y*90*1 translate<-25.9523,26.7244,13.8634> }
object{Deco[6] scale 0.3 rotate x*360*0.664673 rotate y*90*1 translate<-25.9523,26.7244,14.5351> }
object{Deco[1] scale 0.3 rotate x*360*0.326229 rotate y*90*1 translate<-25.9523,26.7244,15.1801> }
object{Deco[3] scale 0.3 rotate x*360*0.0858161 rotate y*90*1 translate<-25.9523,26.7244,15.1862> }
object{Deco[0] scale 0.3 rotate x*360*0.910799 rotate y*90*1 translate<-25.9523,26.7244,15.8866> }
object{Deco[1] scale 0.3 rotate x*360*0.262663 rotate y*90*1 translate<-25.9523,26.7244,15.9942> }
object{Deco[6] scale 0.3 rotate x*360*0.0228341 rotate y*90*1 translate<-25.9523,26.7244,16.4736> }
object{Deco[0] scale 0.3 rotate x*360*0.370841 rotate y*90*1 translate<-25.9523,26.7244,17.0713> }
cylinder{<-25.9523,26.7244,9.35693>,<-25.9523,26.7244,12.3569>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.120167 rotate y*90*1 translate<-25.9523,26.7244,9.44355> }
object{Deco[5] scale 0.3 rotate x*360*0.829917 rotate y*90*1 translate<-25.9523,26.7244,9.57929> }
object{Deco[4] scale 0.3 rotate x*360*0.683592 rotate y*90*1 translate<-25.9523,26.7244,9.6527> }
object{Deco[0] scale 0.3 rotate x*360*0.948189 rotate y*90*1 translate<-25.9523,26.7244,9.80217> }
object{Deco[3] scale 0.3 rotate x*360*0.43438 rotate y*90*1 translate<-25.9523,26.7244,10.0205> }
object{Deco[4] scale 0.3 rotate x*360*0.167913 rotate y*90*1 translate<-25.9523,26.7244,10.2697> }
object{Deco[6] scale 0.3 rotate x*360*0.907281 rotate y*90*1 translate<-25.9523,26.7244,10.4227> }
object{Deco[1] scale 0.3 rotate x*360*0.226973 rotate y*90*1 translate<-25.9523,26.7244,10.4374> }
object{Deco[0] scale 0.3 rotate x*360*0.466038 rotate y*90*1 translate<-25.9523,26.7244,10.598> }
object{Deco[6] scale 0.3 rotate x*360*0.495444 rotate y*90*1 translate<-25.9523,26.7244,10.7941> }
cylinder{<-25.9523,28.2244,21.7517>,<-25.9523,34.5212,21.7517>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.172991 rotate z*90*1 translate<-25.9523,28.5407,21.7517> }
object{Deco[5] scale 0.3 rotate x*360*0.86458 rotate z*90*1 translate<-25.9523,28.5633,21.7517> }
object{Deco[4] scale 0.3 rotate x*360*0.585455 rotate z*90*1 translate<-25.9523,29.0558,21.7517> }
object{Deco[6] scale 0.3 rotate x*360*0.917261 rotate z*90*1 translate<-25.9523,29.5837,21.7517> }
object{Deco[4] scale 0.3 rotate x*360*0.324702 rotate z*90*1 translate<-25.9523,29.7439,21.7517> }
object{Deco[4] scale 0.3 rotate x*360*0.968612 rotate z*90*1 translate<-25.9523,30.1384,21.7517> }
object{Deco[1] scale 0.3 rotate x*360*0.190461 rotate z*90*1 translate<-25.9523,30.3909,21.7517> }
object{Deco[1] scale 0.3 rotate x*360*0.652373 rotate z*90*1 translate<-25.9523,30.5061,21.7517> }
object{Deco[4] scale 0.3 rotate x*360*0.0951164 rotate z*90*1 translate<-25.9523,30.8148,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.433294 rotate z*90*1 translate<-25.9523,31.2826,21.7517> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-25.9523,28.2244,21.7517>}
cylinder{<-25.9523,37.5212,21.7517>,<-25.9523,41.4059,21.7517>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.920571 rotate z*90*1 translate<-25.9523,37.6985,21.7517> }
object{Deco[5] scale 0.3 rotate x*360*0.945498 rotate z*90*1 translate<-25.9523,37.7653,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.0204617 rotate z*90*1 translate<-25.9523,37.9548,21.7517> }
object{Deco[1] scale 0.3 rotate x*360*0.987008 rotate z*90*1 translate<-25.9523,38.2989,21.7517> }
object{Deco[2] scale 0.3 rotate x*360*0.946478 rotate z*90*1 translate<-25.9523,38.4667,21.7517> }
object{Deco[2] scale 0.3 rotate x*360*0.229399 rotate z*90*1 translate<-25.9523,38.7598,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.396631 rotate z*90*1 translate<-25.9523,38.822,21.7517> }
object{Deco[2] scale 0.3 rotate x*360*0.00548851 rotate z*90*1 translate<-25.9523,38.8602,21.7517> }
object{Deco[1] scale 0.3 rotate x*360*0.812903 rotate z*90*1 translate<-25.9523,39.1219,21.7517> }
object{Deco[1] scale 0.3 rotate x*360*0.259958 rotate z*90*1 translate<-25.9523,39.4667,21.7517> }
cylinder{<-25.9523,34.5212,21.7517>,<-25.9523,37.5212,21.7517>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.0401004 rotate z*90*1 translate<-25.9523,34.7636,21.7517> }
object{Deco[5] scale 0.3 rotate x*360*0.55603 rotate z*90*1 translate<-25.9523,35.003,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.654999 rotate z*90*1 translate<-25.9523,35.0588,21.7517> }
object{Deco[6] scale 0.3 rotate x*360*0.456489 rotate z*90*1 translate<-25.9523,35.2151,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.532324 rotate z*90*1 translate<-25.9523,35.2641,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.0677444 rotate z*90*1 translate<-25.9523,35.3357,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.941633 rotate z*90*1 translate<-25.9523,35.5734,21.7517> }
object{Deco[4] scale 0.3 rotate x*360*0.50926 rotate z*90*1 translate<-25.9523,35.5788,21.7517> }
object{Deco[5] scale 0.3 rotate x*360*0.079513 rotate z*90*1 translate<-25.9523,35.7346,21.7517> }
object{Deco[3] scale 0.3 rotate x*360*0.645879 rotate z*90*1 translate<-25.9523,35.9157,21.7517> }
cylinder{<-27.4523,42.9059,21.7517>,<-28.5,42.9059,21.7517>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.806098 scale <-1,1,1> translate<-27.5473,42.9059,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.951612 scale <-1,1,1> translate<-27.634,42.9059,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.463691 scale <-1,1,1> translate<-27.6765,42.9059,21.7517> }
object{Deco[5] scale 0.3 rotate x*360*0.949153 scale <-1,1,1> translate<-27.7008,42.9059,21.7517> }
object{Deco[3] scale 0.3 rotate x*360*0.612007 scale <-1,1,1> translate<-27.7775,42.9059,21.7517> }
object{Deco[5] scale 0.3 rotate x*360*0.587756 scale <-1,1,1> translate<-27.8291,42.9059,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.0539888 scale <-1,1,1> translate<-27.924,42.9059,21.7517> }
object{Deco[3] scale 0.3 rotate x*360*0.21718 scale <-1,1,1> translate<-27.9955,42.9059,21.7517> }
object{Deco[4] scale 0.3 rotate x*360*0.70634 scale <-1,1,1> translate<-28.0716,42.9059,21.7517> }
object{Deco[5] scale 0.3 rotate x*360*0.976849 scale <-1,1,1> translate<-28.1398,42.9059,21.7517> }
object{Elbow translate x*1.5 rotate x*90 rotate -z*90  translate <-27.4523,42.9059,21.7517>}
cylinder{<-30,44.4059,21.7517>,<-30,49.0611,21.7517>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.588443 rotate z*90*1 translate<-30,44.4927,21.7517> }
object{Deco[4] scale 0.3 rotate x*360*0.313187 rotate z*90*1 translate<-30,44.6582,21.7517> }
object{Deco[2] scale 0.3 rotate x*360*0.88054 rotate z*90*1 translate<-30,44.701,21.7517> }
object{Deco[5] scale 0.3 rotate x*360*0.78638 rotate z*90*1 translate<-30,45.0654,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.828215 rotate z*90*1 translate<-30,45.4424,21.7517> }
object{Deco[1] scale 0.3 rotate x*360*0.881417 rotate z*90*1 translate<-30,45.4543,21.7517> }
object{Deco[0] scale 0.3 rotate x*360*0.999124 rotate z*90*1 translate<-30,45.8648,21.7517> }
object{Deco[6] scale 0.3 rotate x*360*0.722686 rotate z*90*1 translate<-30,45.9168,21.7517> }
object{Deco[6] scale 0.3 rotate x*360*0.684789 rotate z*90*1 translate<-30,45.933,21.7517> }
object{Deco[6] scale 0.3 rotate x*360*0.881183 rotate z*90*1 translate<-30,46.2819,21.7517> }
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-30,44.4059,21.7517>}
cylinder{<-30,50.5611,20.2517>,<-30,50.5611,13.4407>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.0747664 rotate y*90*-1 translate<-30,50.5611,19.9988> }
object{Deco[3] scale 0.3 rotate x*360*0.817158 rotate y*90*-1 translate<-30,50.5611,19.9416> }
object{Deco[0] scale 0.3 rotate x*360*0.132445 rotate y*90*-1 translate<-30,50.5611,19.5723> }
object{Deco[1] scale 0.3 rotate x*360*0.760534 rotate y*90*-1 translate<-30,50.5611,19.307> }
object{Deco[0] scale 0.3 rotate x*360*0.956617 rotate y*90*-1 translate<-30,50.5611,18.9593> }
object{Deco[6] scale 0.3 rotate x*360*0.732311 rotate y*90*-1 translate<-30,50.5611,18.6624> }
object{Deco[1] scale 0.3 rotate x*360*0.921423 rotate y*90*-1 translate<-30,50.5611,18.4845> }
object{Deco[3] scale 0.3 rotate x*360*0.643845 rotate y*90*-1 translate<-30,50.5611,18.3632> }
object{Deco[5] scale 0.3 rotate x*360*0.146811 rotate y*90*-1 translate<-30,50.5611,17.894> }
object{Deco[2] scale 0.3 rotate x*360*0.962078 rotate y*90*-1 translate<-30,50.5611,17.432> }
object{Elbow rotate y*180 rotate z*90 translate -y*1.5  translate <-30,50.5611,20.2517>}
cylinder{<-30,52.0611,11.9407>,<-30,57.2036,11.9407>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.0846125 rotate z*90*1 translate<-30,52.2663,11.9407> }
object{Deco[6] scale 0.3 rotate x*360*0.44291 rotate z*90*1 translate<-30,52.6763,11.9407> }
object{Deco[5] scale 0.3 rotate x*360*0.0376978 rotate z*90*1 translate<-30,52.9511,11.9407> }
object{Deco[5] scale 0.3 rotate x*360*0.715522 rotate z*90*1 translate<-30,52.9987,11.9407> }
object{Deco[3] scale 0.3 rotate x*360*0.0873908 rotate z*90*1 translate<-30,53.2605,11.9407> }
object{Deco[5] scale 0.3 rotate x*360*0.190778 rotate z*90*1 translate<-30,53.288,11.9407> }
object{Deco[3] scale 0.3 rotate x*360*0.414881 rotate z*90*1 translate<-30,53.4548,11.9407> }
object{Deco[5] scale 0.3 rotate x*360*0.408932 rotate z*90*1 translate<-30,53.776,11.9407> }
object{Deco[0] scale 0.3 rotate x*360*0.494654 rotate z*90*1 translate<-30,54.0543,11.9407> }
object{Deco[6] scale 0.3 rotate x*360*0.555225 rotate z*90*1 translate<-30,54.3684,11.9407> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1.5  translate <-30,52.0611,11.9407>}
cylinder{<-30,58.7036,13.4407>,<-30,58.7036,21.0864>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.0719536 rotate y*90*1 translate<-30,58.7036,13.9545> }
object{Deco[5] scale 0.3 rotate x*360*0.61485 rotate y*90*1 translate<-30,58.7036,14.5307> }
object{Deco[4] scale 0.3 rotate x*360*0.868149 rotate y*90*1 translate<-30,58.7036,14.9321> }
object{Deco[6] scale 0.3 rotate x*360*0.437697 rotate y*90*1 translate<-30,58.7036,15.0524> }
object{Deco[0] scale 0.3 rotate x*360*0.587463 rotate y*90*1 translate<-30,58.7036,15.3018> }
object{Deco[1] scale 0.3 rotate x*360*0.662534 rotate y*90*1 translate<-30,58.7036,15.7525> }
object{Deco[0] scale 0.3 rotate x*360*0.980661 rotate y*90*1 translate<-30,58.7036,16.4271> }
object{Deco[2] scale 0.3 rotate x*360*0.914221 rotate y*90*1 translate<-30,58.7036,16.5314> }
object{Deco[3] scale 0.3 rotate x*360*0.35325 rotate y*90*1 translate<-30,58.7036,16.6231> }
object{Deco[0] scale 0.3 rotate x*360*0.61089 rotate y*90*1 translate<-30,58.7036,16.6878> }
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-30,58.7036,13.4407>}
cylinder{<-28.5,58.7036,22.5864>,<-24.172,58.7036,22.5864>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.638229 scale <1,1,1> translate<-28.4313,58.7036,22.5864> }
object{Deco[6] scale 0.3 rotate x*360*0.588469 scale <1,1,1> translate<-28.3967,58.7036,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.82753 scale <1,1,1> translate<-28.1221,58.7036,22.5864> }
object{Deco[0] scale 0.3 rotate x*360*0.379192 scale <1,1,1> translate<-28.1064,58.7036,22.5864> }
object{Deco[4] scale 0.3 rotate x*360*0.0184746 scale <1,1,1> translate<-27.9236,58.7036,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.259348 scale <1,1,1> translate<-27.681,58.7036,22.5864> }
object{Deco[1] scale 0.3 rotate x*360*0.645174 scale <1,1,1> translate<-27.3101,58.7036,22.5864> }
object{Deco[0] scale 0.3 rotate x*360*0.175222 scale <1,1,1> translate<-27.198,58.7036,22.5864> }
object{Deco[0] scale 0.3 rotate x*360*0.899332 scale <1,1,1> translate<-27.0018,58.7036,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.815434 scale <1,1,1> translate<-26.6532,58.7036,22.5864> }
object{Elbow scale <1,1,-1> translate -z*1.5  translate <-28.5,58.7036,22.5864>}
cylinder{<-22.672,60.2036,22.5864>,<-22.672,67.571,22.5864>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.471794 rotate z*90*1 translate<-22.672,60.2607,22.5864> }
object{Deco[6] scale 0.3 rotate x*360*0.341672 rotate z*90*1 translate<-22.672,60.3583,22.5864> }
object{Deco[6] scale 0.3 rotate x*360*0.728219 rotate z*90*1 translate<-22.672,60.902,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.23959 rotate z*90*1 translate<-22.672,61.2175,22.5864> }
object{Deco[0] scale 0.3 rotate x*360*0.746515 rotate z*90*1 translate<-22.672,61.4713,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.863423 rotate z*90*1 translate<-22.672,61.7441,22.5864> }
object{Deco[1] scale 0.3 rotate x*360*0.695407 rotate z*90*1 translate<-22.672,62.3937,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.905191 rotate z*90*1 translate<-22.672,62.5916,22.5864> }
object{Deco[6] scale 0.3 rotate x*360*0.145472 rotate z*90*1 translate<-22.672,62.6437,22.5864> }
object{Deco[6] scale 0.3 rotate x*360*0.0491028 rotate z*90*1 translate<-22.672,62.8376,22.5864> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1.5  translate <-22.672,60.2036,22.5864>}
cylinder{<-21.172,69.071,22.5864>,<-14.2614,69.071,22.5864>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.776628 scale <1,1,1> translate<-20.5744,69.071,22.5864> }
object{Deco[2] scale 0.3 rotate x*360*0.805489 scale <1,1,1> translate<-20.2141,69.071,22.5864> }
object{Deco[2] scale 0.3 rotate x*360*0.0232196 scale <1,1,1> translate<-20.1849,69.071,22.5864> }
object{Deco[4] scale 0.3 rotate x*360*0.296603 scale <1,1,1> translate<-19.5951,69.071,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.903298 scale <1,1,1> translate<-18.9704,69.071,22.5864> }
object{Deco[4] scale 0.3 rotate x*360*0.560085 scale <1,1,1> translate<-18.4728,69.071,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.308973 scale <1,1,1> translate<-18.3072,69.071,22.5864> }
object{Deco[4] scale 0.3 rotate x*360*0.645511 scale <1,1,1> translate<-18.0937,69.071,22.5864> }
object{Deco[1] scale 0.3 rotate x*360*0.11987 scale <1,1,1> translate<-17.5326,69.071,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.645272 scale <1,1,1> translate<-17.457,69.071,22.5864> }
object{Elbow translate z*1.5 rotate y*90 rotate x*-90 translate -x*1.5 translate -y*1.5  translate <-21.172,69.071,22.5864>}
cylinder{<-12.7614,67.571,22.5864>,<-12.7614,60.4979,22.5864>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.272335 rotate z*90*-1 translate<-12.7614,67.3179,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.864075 rotate z*90*-1 translate<-12.7614,67.3051,22.5864> }
object{Deco[1] scale 0.3 rotate x*360*0.806159 rotate z*90*-1 translate<-12.7614,66.7936,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.406065 rotate z*90*-1 translate<-12.7614,66.3959,22.5864> }
object{Deco[4] scale 0.3 rotate x*360*0.386161 rotate z*90*-1 translate<-12.7614,66.014,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.637787 rotate z*90*-1 translate<-12.7614,65.4539,22.5864> }
object{Deco[1] scale 0.3 rotate x*360*0.554109 rotate z*90*-1 translate<-12.7614,65.0993,22.5864> }
object{Deco[6] scale 0.3 rotate x*360*0.765687 rotate z*90*-1 translate<-12.7614,64.7596,22.5864> }
object{Deco[4] scale 0.3 rotate x*360*0.866348 rotate z*90*-1 translate<-12.7614,64.3684,22.5864> }
object{Deco[6] scale 0.3 rotate x*360*0.390441 rotate z*90*-1 translate<-12.7614,63.8712,22.5864> }
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <-12.7614,67.571,22.5864>}
cylinder{<-12.7614,57.4979,22.5864>,<-12.7614,49.5588,22.5864>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.194144 rotate z*90*-1 translate<-12.7614,57.3724,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.354711 rotate z*90*-1 translate<-12.7614,57.2195,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.81129 rotate z*90*-1 translate<-12.7614,56.7014,22.5864> }
object{Deco[4] scale 0.3 rotate x*360*0.00193664 rotate z*90*-1 translate<-12.7614,56.4212,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.858071 rotate z*90*-1 translate<-12.7614,55.8068,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.588105 rotate z*90*-1 translate<-12.7614,55.7545,22.5864> }
object{Deco[1] scale 0.3 rotate x*360*0.389677 rotate z*90*-1 translate<-12.7614,55.6994,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.463353 rotate z*90*-1 translate<-12.7614,55.0319,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.444354 rotate z*90*-1 translate<-12.7614,54.6505,22.5864> }
object{Deco[1] scale 0.3 rotate x*360*0.524233 rotate z*90*-1 translate<-12.7614,54.4908,22.5864> }
cylinder{<-12.7614,60.4979,22.5864>,<-12.7614,57.4979,22.5864>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.19436 rotate z*90*-1 translate<-12.7614,60.4642,22.5864> }
object{Deco[2] scale 0.3 rotate x*360*0.954508 rotate z*90*-1 translate<-12.7614,60.3709,22.5864> }
object{Deco[0] scale 0.3 rotate x*360*0.738294 rotate z*90*-1 translate<-12.7614,60.1382,22.5864> }
object{Deco[2] scale 0.3 rotate x*360*0.829423 rotate z*90*-1 translate<-12.7614,60.0667,22.5864> }
object{Deco[0] scale 0.3 rotate x*360*0.830821 rotate z*90*-1 translate<-12.7614,59.9991,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.152428 rotate z*90*-1 translate<-12.7614,59.7333,22.5864> }
object{Deco[0] scale 0.3 rotate x*360*0.596786 rotate z*90*-1 translate<-12.7614,59.6295,22.5864> }
object{Deco[4] scale 0.3 rotate x*360*0.54664 rotate z*90*-1 translate<-12.7614,59.3928,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.597999 rotate z*90*-1 translate<-12.7614,59.3868,22.5864> }
object{Deco[6] scale 0.3 rotate x*360*0.0157153 rotate z*90*-1 translate<-12.7614,59.1706,22.5864> }
cylinder{<-14.2614,48.0588,22.5864>,<-21.6978,48.0588,22.5864>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.497823 scale <-1,1,1> translate<-14.6502,48.0588,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.130992 scale <-1,1,1> translate<-15.1456,48.0588,22.5864> }
object{Deco[5] scale 0.3 rotate x*360*0.0471531 scale <-1,1,1> translate<-15.3729,48.0588,22.5864> }
object{Deco[4] scale 0.3 rotate x*360*0.226616 scale <-1,1,1> translate<-15.389,48.0588,22.5864> }
object{Deco[1] scale 0.3 rotate x*360*0.987499 scale <-1,1,1> translate<-15.8432,48.0588,22.5864> }
object{Deco[1] scale 0.3 rotate x*360*0.195259 scale <-1,1,1> translate<-16.112,48.0588,22.5864> }
object{Deco[0] scale 0.3 rotate x*360*0.387395 scale <-1,1,1> translate<-16.3832,48.0588,22.5864> }
object{Deco[0] scale 0.3 rotate x*360*0.36351 scale <-1,1,1> translate<-17.022,48.0588,22.5864> }
object{Deco[3] scale 0.3 rotate x*360*0.403193 scale <-1,1,1> translate<-17.5425,48.0588,22.5864> }
object{Deco[2] scale 0.3 rotate x*360*0.285755 scale <-1,1,1> translate<-17.8875,48.0588,22.5864> }
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <-14.2614,48.0588,22.5864>}
cylinder{<-23.1978,48.0588,21.0864>,<-23.1978,48.0588,16.9956>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.267771 rotate y*90*-1 translate<-23.1978,48.0588,20.8456> }
object{Deco[4] scale 0.3 rotate x*360*0.702607 rotate y*90*-1 translate<-23.1978,48.0588,20.5708> }
object{Deco[0] scale 0.3 rotate x*360*0.100337 rotate y*90*-1 translate<-23.1978,48.0588,20.2163> }
object{Deco[0] scale 0.3 rotate x*360*0.567502 rotate y*90*-1 translate<-23.1978,48.0588,20.0842> }
object{Deco[5] scale 0.3 rotate x*360*0.16689 rotate y*90*-1 translate<-23.1978,48.0588,19.984> }
object{Deco[2] scale 0.3 rotate x*360*0.613462 rotate y*90*-1 translate<-23.1978,48.0588,19.7365> }
object{Deco[4] scale 0.3 rotate x*360*0.237957 rotate y*90*-1 translate<-23.1978,48.0588,19.5384> }
object{Deco[2] scale 0.3 rotate x*360*0.298769 rotate y*90*-1 translate<-23.1978,48.0588,19.4725> }
object{Deco[2] scale 0.3 rotate x*360*0.170385 rotate y*90*-1 translate<-23.1978,48.0588,19.3461> }
object{Deco[6] scale 0.3 rotate x*360*0.738798 rotate y*90*-1 translate<-23.1978,48.0588,19.1402> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-23.1978,48.0588,21.0864>}
cylinder{<-23.1978,48.0588,13.9956>,<-23.1978,48.0588,8.29279>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.8283 rotate y*90*-1 translate<-23.1978,48.0588,13.5114> }
object{Deco[6] scale 0.3 rotate x*360*0.708782 rotate y*90*-1 translate<-23.1978,48.0588,13.09> }
object{Deco[5] scale 0.3 rotate x*360*0.619403 rotate y*90*-1 translate<-23.1978,48.0588,12.8151> }
object{Deco[1] scale 0.3 rotate x*360*0.542876 rotate y*90*-1 translate<-23.1978,48.0588,12.503> }
object{Deco[1] scale 0.3 rotate x*360*0.605201 rotate y*90*-1 translate<-23.1978,48.0588,12.2932> }
object{Deco[4] scale 0.3 rotate x*360*0.147636 rotate y*90*-1 translate<-23.1978,48.0588,11.8504> }
object{Deco[0] scale 0.3 rotate x*360*0.454013 rotate y*90*-1 translate<-23.1978,48.0588,11.3735> }
object{Deco[6] scale 0.3 rotate x*360*0.228761 rotate y*90*-1 translate<-23.1978,48.0588,11.1699> }
object{Deco[6] scale 0.3 rotate x*360*0.766642 rotate y*90*-1 translate<-23.1978,48.0588,10.9956> }
object{Deco[5] scale 0.3 rotate x*360*0.660366 rotate y*90*-1 translate<-23.1978,48.0588,10.8838> }
cylinder{<-23.1978,48.0588,16.9956>,<-23.1978,48.0588,13.9956>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.792102 rotate y*90*-1 translate<-23.1978,48.0588,16.9869> }
object{Deco[4] scale 0.3 rotate x*360*0.610062 rotate y*90*-1 translate<-23.1978,48.0588,16.7786> }
object{Deco[1] scale 0.3 rotate x*360*0.784357 rotate y*90*-1 translate<-23.1978,48.0588,16.6364> }
object{Deco[4] scale 0.3 rotate x*360*0.938779 rotate y*90*-1 translate<-23.1978,48.0588,16.5512> }
object{Deco[3] scale 0.3 rotate x*360*0.457218 rotate y*90*-1 translate<-23.1978,48.0588,16.3569> }
object{Deco[6] scale 0.3 rotate x*360*0.492142 rotate y*90*-1 translate<-23.1978,48.0588,16.102> }
object{Deco[6] scale 0.3 rotate x*360*0.847091 rotate y*90*-1 translate<-23.1978,48.0588,15.87> }
object{Deco[5] scale 0.3 rotate x*360*0.498856 rotate y*90*-1 translate<-23.1978,48.0588,15.6374> }
object{Deco[6] scale 0.3 rotate x*360*0.628625 rotate y*90*-1 translate<-23.1978,48.0588,15.5479> }
object{Deco[4] scale 0.3 rotate x*360*0.491753 rotate y*90*-1 translate<-23.1978,48.0588,15.4116> }
cylinder{<-23.1978,48.0588,5.29279>,<-23.1978,48.0588,-3.19186>,0.3}
cylinder{<-23.1978,48.0588,8.29279>,<-23.1978,48.0588,5.29279>,0.3}
cylinder{<-21.6978,48.0588,-4.69186>,<-17.929,48.0588,-4.69186>,0.3}
object{Elbow translate z*1.5  translate <-21.6978,48.0588,-4.69186>}
cylinder{<-16.429,49.5588,-4.69186>,<-16.429,54.2472,-4.69186>,0.3}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1.5  translate <-16.429,49.5588,-4.69186>}
cylinder{<-17.929,55.7472,-4.69186>,<-26.866,55.7472,-4.69186>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate -z*90  translate <-17.929,55.7472,-4.69186>}
cylinder{<-28.366,55.7472,-3.19186>,<-28.366,55.7472,3.24705>,0.3}
object{Elbow translate x*1.5  translate <-28.366,55.7472,-3.19186>}
cylinder{<-29.866,55.7472,4.74705>,<-28.5,55.7472,4.74705>,0.3}
object{Elbow scale <-1,1,-1> translate -z*1.5  translate <-29.866,55.7472,4.74705>}
cylinder{<-30,57.2472,4.74705>,<-30,64.3026,4.74705>,0.3}
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-30,57.2472,4.74705>}
cylinder{<-30,65.8026,6.24705>,<-30,65.8026,14.8706>,0.3}
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-30,65.8026,6.24705>}
cylinder{<-28.5,65.8026,16.3706>,<-22.1323,65.8026,16.3706>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.740475 scale <1,1,1> translate<-28.4686,65.8026,16.3706> }
object{Deco[5] scale 0.3 rotate x*360*0.479752 scale <1,1,1> translate<-28.042,65.8026,16.3706> }
object{Deco[2] scale 0.3 rotate x*360*0.353001 scale <1,1,1> translate<-27.6268,65.8026,16.3706> }
object{Deco[0] scale 0.3 rotate x*360*0.0804622 scale <1,1,1> translate<-27.5181,65.8026,16.3706> }
object{Deco[6] scale 0.3 rotate x*360*0.369572 scale <1,1,1> translate<-27.1289,65.8026,16.3706> }
object{Deco[3] scale 0.3 rotate x*360*0.202078 scale <1,1,1> translate<-27.1284,65.8026,16.3706> }
object{Deco[0] scale 0.3 rotate x*360*0.618211 scale <1,1,1> translate<-26.779,65.8026,16.3706> }
object{Deco[4] scale 0.3 rotate x*360*0.37435 scale <1,1,1> translate<-26.2575,65.8026,16.3706> }
object{Deco[5] scale 0.3 rotate x*360*0.277072 scale <1,1,1> translate<-26.158,65.8026,16.3706> }
object{Deco[6] scale 0.3 rotate x*360*0.65138 scale <1,1,1> translate<-25.735,65.8026,16.3706> }
object{Elbow scale <1,1,-1> translate -z*1.5  translate <-28.5,65.8026,16.3706>}
cylinder{<-20.6323,65.8026,17.8706>,<-20.6323,65.8026,23.8499>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.1662 rotate y*90*1 translate<-20.6323,65.8026,18.0473> }
object{Deco[0] scale 0.3 rotate x*360*0.398442 rotate y*90*1 translate<-20.6323,65.8026,18.3855> }
object{Deco[0] scale 0.3 rotate x*360*0.910507 rotate y*90*1 translate<-20.6323,65.8026,18.5738> }
object{Deco[5] scale 0.3 rotate x*360*0.383555 rotate y*90*1 translate<-20.6323,65.8026,18.5869> }
object{Deco[5] scale 0.3 rotate x*360*0.666998 rotate y*90*1 translate<-20.6323,65.8026,18.6131> }
object{Deco[6] scale 0.3 rotate x*360*0.164812 rotate y*90*1 translate<-20.6323,65.8026,18.9538> }
object{Deco[6] scale 0.3 rotate x*360*0.292103 rotate y*90*1 translate<-20.6323,65.8026,19.1604> }
object{Deco[0] scale 0.3 rotate x*360*0.838473 rotate y*90*1 translate<-20.6323,65.8026,19.4876> }
object{Deco[4] scale 0.3 rotate x*360*0.367843 rotate y*90*1 translate<-20.6323,65.8026,19.5325> }
object{Deco[1] scale 0.3 rotate x*360*0.136084 rotate y*90*1 translate<-20.6323,65.8026,19.6491> }
object{Elbow rotate y*-90 translate -x*1.5  translate <-20.6323,65.8026,17.8706>}
cylinder{<-20.6323,67.3026,25.3499>,<-20.6323,71.4183,25.3499>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.831176 rotate z*90*1 translate<-20.6323,67.4713,25.3499> }
object{Deco[0] scale 0.3 rotate x*360*0.395918 rotate z*90*1 translate<-20.6323,67.7053,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.968015 rotate z*90*1 translate<-20.6323,67.8173,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.505888 rotate z*90*1 translate<-20.6323,68.1284,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.245255 rotate z*90*1 translate<-20.6323,68.2382,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.136767 rotate z*90*1 translate<-20.6323,68.5641,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.712288 rotate z*90*1 translate<-20.6323,68.8174,25.3499> }
object{Deco[0] scale 0.3 rotate x*360*0.160795 rotate z*90*1 translate<-20.6323,68.8573,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.117207 rotate z*90*1 translate<-20.6323,68.8765,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.0284608 rotate z*90*1 translate<-20.6323,69.0013,25.3499> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-20.6323,67.3026,25.3499>}
cylinder{<-22.1323,72.9183,25.3499>,<-28.5,72.9183,25.3499>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.582938 scale <-1,1,1> translate<-22.7029,72.9183,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.691297 scale <-1,1,1> translate<-22.741,72.9183,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.458018 scale <-1,1,1> translate<-23.0599,72.9183,25.3499> }
object{Deco[2] scale 0.3 rotate x*360*0.255447 scale <-1,1,1> translate<-23.2107,72.9183,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.738987 scale <-1,1,1> translate<-23.5629,72.9183,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.413231 scale <-1,1,1> translate<-23.5926,72.9183,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.270246 scale <-1,1,1> translate<-23.9757,72.9183,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.709843 scale <-1,1,1> translate<-24.5103,72.9183,25.3499> }
object{Deco[0] scale 0.3 rotate x*360*0.665667 scale <-1,1,1> translate<-24.7379,72.9183,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.543722 scale <-1,1,1> translate<-25.3155,72.9183,25.3499> }
object{Elbow translate x*1.5 rotate x*90 rotate -z*90  translate <-22.1323,72.9183,25.3499>}
cylinder{<-30,74.4183,25.3499>,<-30,78.5,25.3499>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.965708 rotate z*90*1 translate<-30,74.6056,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.790276 rotate z*90*1 translate<-30,74.9273,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.208986 rotate z*90*1 translate<-30,74.9381,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.93809 rotate z*90*1 translate<-30,75.2579,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.643666 rotate z*90*1 translate<-30,75.4381,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.637945 rotate z*90*1 translate<-30,75.7699,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.68966 rotate z*90*1 translate<-30,76.094,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.819267 rotate z*90*1 translate<-30,76.4449,25.3499> }
object{Deco[3] scale 0.3 rotate x*360*0.795687 rotate z*90*1 translate<-30,76.5465,25.3499> }
object{Deco[2] scale 0.3 rotate x*360*0.250757 rotate z*90*1 translate<-30,76.7159,25.3499> }
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-30,74.4183,25.3499>}
cylinder{<-28.5,80,25.3499>,<-22.8429,80,25.3499>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.793619 scale <1,1,1> translate<-28.3459,80,25.3499> }
object{Deco[3] scale 0.3 rotate x*360*0.383798 scale <1,1,1> translate<-27.9716,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.964576 scale <1,1,1> translate<-27.8039,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.701464 scale <1,1,1> translate<-27.4152,80,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.943522 scale <1,1,1> translate<-27.3786,80,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.727869 scale <1,1,1> translate<-26.908,80,25.3499> }
object{Deco[2] scale 0.3 rotate x*360*0.925013 scale <1,1,1> translate<-26.5033,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.19436 scale <1,1,1> translate<-26.4446,80,25.3499> }
object{Deco[0] scale 0.3 rotate x*360*0.0634736 scale <1,1,1> translate<-26.0929,80,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.255741 scale <1,1,1> translate<-25.7076,80,25.3499> }
object{Elbow translate z*1.5 rotate y*90 rotate x*-90 translate -x*1.5 translate -y*1.5  translate <-28.5,80,25.3499>}
cylinder{<-19.8429,80,25.3499>,<-12.4756,80,25.3499>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.832331 scale <1,1,1> translate<-19.7095,80,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.894182 scale <1,1,1> translate<-19.5701,80,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.918844 scale <1,1,1> translate<-19.4315,80,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.944434 scale <1,1,1> translate<-19.3102,80,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.419925 scale <1,1,1> translate<-18.9522,80,25.3499> }
object{Deco[0] scale 0.3 rotate x*360*0.699532 scale <1,1,1> translate<-18.6192,80,25.3499> }
object{Deco[0] scale 0.3 rotate x*360*0.120029 scale <1,1,1> translate<-18.0853,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.650782 scale <1,1,1> translate<-17.4816,80,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.0820565 scale <1,1,1> translate<-17.1235,80,25.3499> }
object{Deco[2] scale 0.3 rotate x*360*0.705473 scale <1,1,1> translate<-16.5911,80,25.3499> }
cylinder{<-22.8429,80,25.3499>,<-19.8429,80,25.3499>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.201236 scale <1,1,1> translate<-22.708,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.194479 scale <1,1,1> translate<-22.5021,80,25.3499> }
object{Deco[2] scale 0.3 rotate x*360*0.114 scale <1,1,1> translate<-22.3341,80,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.344673 scale <1,1,1> translate<-22.2465,80,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.763734 scale <1,1,1> translate<-22.1494,80,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.205016 scale <1,1,1> translate<-22.1316,80,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.0981419 scale <1,1,1> translate<-21.958,80,25.3499> }
object{Deco[0] scale 0.3 rotate x*360*0.902936 scale <1,1,1> translate<-21.773,80,25.3499> }
object{Deco[2] scale 0.3 rotate x*360*0.491101 scale <1,1,1> translate<-21.6069,80,25.3499> }
object{Deco[5] scale 0.3 rotate x*360*0.409316 scale <1,1,1> translate<-21.3383,80,25.3499> }
cylinder{<-9.47562,80,25.3499>,<-5.04746,80,25.3499>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.733396 scale <1,1,1> translate<-9.2309,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.478332 scale <1,1,1> translate<-9.02206,80,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.325473 scale <1,1,1> translate<-8.97012,80,25.3499> }
object{Deco[3] scale 0.3 rotate x*360*0.829712 scale <1,1,1> translate<-8.64031,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.629793 scale <1,1,1> translate<-8.60943,80,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.937394 scale <1,1,1> translate<-8.26962,80,25.3499> }
object{Deco[3] scale 0.3 rotate x*360*0.333466 scale <1,1,1> translate<-8.26441,80,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.543958 scale <1,1,1> translate<-7.98982,80,25.3499> }
object{Deco[3] scale 0.3 rotate x*360*0.0858781 scale <1,1,1> translate<-7.92541,80,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.942566 scale <1,1,1> translate<-7.57043,80,25.3499> }
cylinder{<-12.4756,80,25.3499>,<-9.47562,80,25.3499>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.478922 scale <1,1,1> translate<-12.4493,80,25.3499> }
object{Deco[0] scale 0.3 rotate x*360*0.823205 scale <1,1,1> translate<-12.2219,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.290054 scale <1,1,1> translate<-12.1758,80,25.3499> }
object{Deco[0] scale 0.3 rotate x*360*0.0828803 scale <1,1,1> translate<-11.9671,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.841824 scale <1,1,1> translate<-11.7802,80,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.964617 scale <1,1,1> translate<-11.6857,80,25.3499> }
object{Deco[4] scale 0.3 rotate x*360*0.730929 scale <1,1,1> translate<-11.5758,80,25.3499> }
object{Deco[2] scale 0.3 rotate x*360*0.348147 scale <1,1,1> translate<-11.4403,80,25.3499> }
object{Deco[6] scale 0.3 rotate x*360*0.837061 scale <1,1,1> translate<-11.3518,80,25.3499> }
object{Deco[1] scale 0.3 rotate x*360*0.949736 scale <1,1,1> translate<-11.1851,80,25.3499> }
cylinder{<-3.54746,80,23.8499>,<-3.54746,80,15.3987>,0.3}
object{Elbow translate x*1.5 rotate y*180 translate <-3.54746,80,23.8499>}
cylinder{<-3.54746,78.5,13.8987>,<-3.54746,70.0267,13.8987>,0.3}
object{Elbow translate z*1.5 rotate -z*90 translate <-3.54746,78.5,13.8987>}
cylinder{<-3.54746,67.0267,13.8987>,<-3.54746,58.1333,13.8987>,0.3}
cylinder{<-3.54746,70.0267,13.8987>,<-3.54746,67.0267,13.8987>,0.3}
cylinder{<-2.04746,56.6333,13.8987>,<2.41996,56.6333,13.8987>,0.3}
object{Elbow rotate -x*90 translate y*1.5  translate <-2.04746,56.6333,13.8987>}
cylinder{<3.91996,55.1333,13.8987>,<3.91996,48.5843,13.8987>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <3.91996,55.1333,13.8987>}
cylinder{<3.91996,47.0843,12.3987>,<3.91996,47.0843,7.3886>,0.3}
object{Elbow translate z*1.5 rotate z*90 rotate -x*90 translate <3.91996,47.0843,12.3987>}
cylinder{<2.41996,47.0843,5.8886>,<-2.76024,47.0843,5.8886>,0.3}
object{Elbow scale <-1,1,1> translate z*1.5  translate <2.41996,47.0843,5.8886>}
cylinder{<-5.76024,47.0843,5.8886>,<-12.2713,47.0843,5.8886>,0.3}
cylinder{<-2.76024,47.0843,5.8886>,<-5.76024,47.0843,5.8886>,0.3}
cylinder{<-13.7713,48.5843,5.8886>,<-13.7713,54.7038,5.8886>,0.3}
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-13.7713,48.5843,5.8886>}
cylinder{<-15.2713,56.2038,5.8886>,<-21.0408,56.2038,5.8886>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate -z*90  translate <-15.2713,56.2038,5.8886>}
cylinder{<-24.0408,56.2038,5.8886>,<-27.1268,56.2038,5.8886>,0.3}
cylinder{<-21.0408,56.2038,5.8886>,<-24.0408,56.2038,5.8886>,0.3}
cylinder{<-28.6268,54.7038,5.8886>,<-28.6268,46.9749,5.8886>,0.3}
object{Elbow translate x*1.5 rotate x*90 translate <-28.6268,54.7038,5.8886>}
cylinder{<-30.1268,45.4749,5.8886>,<-28.5,45.4749,5.8886>,0.3}
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <-30.1268,45.4749,5.8886>}
cylinder{<-30,45.4749,7.3886>,<-30,45.4749,14.7852>,0.3}
object{Elbow translate x*1.5  translate <-30,45.4749,7.3886>}
cylinder{<-30,45.4749,17.7852>,<-30,45.4749,25.9092>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.503568 rotate y*90*1 translate<-30,45.4749,17.8931> }
object{Deco[2] scale 0.3 rotate x*360*0.821272 rotate y*90*1 translate<-30,45.4749,18.2257> }
object{Deco[2] scale 0.3 rotate x*360*0.709418 rotate y*90*1 translate<-30,45.4749,18.8187> }
object{Deco[3] scale 0.3 rotate x*360*0.303093 rotate y*90*1 translate<-30,45.4749,19.4422> }
object{Deco[5] scale 0.3 rotate x*360*0.82751 rotate y*90*1 translate<-30,45.4749,20.0836> }
object{Deco[4] scale 0.3 rotate x*360*0.0193045 rotate y*90*1 translate<-30,45.4749,20.4098> }
object{Deco[6] scale 0.3 rotate x*360*0.0874098 rotate y*90*1 translate<-30,45.4749,20.4568> }
object{Deco[5] scale 0.3 rotate x*360*0.696072 rotate y*90*1 translate<-30,45.4749,20.5326> }
object{Deco[6] scale 0.3 rotate x*360*0.523587 rotate y*90*1 translate<-30,45.4749,21.1906> }
object{Deco[4] scale 0.3 rotate x*360*0.0123782 rotate y*90*1 translate<-30,45.4749,21.5429> }
cylinder{<-30,45.4749,14.7852>,<-30,45.4749,17.7852>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.887453 rotate y*90*1 translate<-30,45.4749,14.8252> }
object{Deco[4] scale 0.3 rotate x*360*0.400351 rotate y*90*1 translate<-30,45.4749,15.0666> }
object{Deco[4] scale 0.3 rotate x*360*0.326497 rotate y*90*1 translate<-30,45.4749,15.1785> }
object{Deco[3] scale 0.3 rotate x*360*0.511572 rotate y*90*1 translate<-30,45.4749,15.3387> }
object{Deco[5] scale 0.3 rotate x*360*0.804291 rotate y*90*1 translate<-30,45.4749,15.5266> }
object{Deco[2] scale 0.3 rotate x*360*0.822612 rotate y*90*1 translate<-30,45.4749,15.6147> }
object{Deco[3] scale 0.3 rotate x*360*0.782951 rotate y*90*1 translate<-30,45.4749,15.7316> }
object{Deco[5] scale 0.3 rotate x*360*0.615771 rotate y*90*1 translate<-30,45.4749,15.8891> }
object{Deco[6] scale 0.3 rotate x*360*0.182847 rotate y*90*1 translate<-30,45.4749,15.9914> }
object{Deco[0] scale 0.3 rotate x*360*0.747732 rotate y*90*1 translate<-30,45.4749,16.0208> }
cylinder{<-30,45.4749,28.9092>,<-30,45.4749,32.4991>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.65632 rotate y*90*1 translate<-30,45.4749,28.9533> }
object{Deco[1] scale 0.3 rotate x*360*0.0266045 rotate y*90*1 translate<-30,45.4749,28.9606> }
object{Deco[5] scale 0.3 rotate x*360*0.779964 rotate y*90*1 translate<-30,45.4749,28.9982> }
object{Deco[6] scale 0.3 rotate x*360*0.21402 rotate y*90*1 translate<-30,45.4749,29.3> }
object{Deco[3] scale 0.3 rotate x*360*0.841276 rotate y*90*1 translate<-30,45.4749,29.5431> }
object{Deco[1] scale 0.3 rotate x*360*0.894049 rotate y*90*1 translate<-30,45.4749,29.7954> }
object{Deco[1] scale 0.3 rotate x*360*0.63797 rotate y*90*1 translate<-30,45.4749,29.9457> }
object{Deco[0] scale 0.3 rotate x*360*0.441197 rotate y*90*1 translate<-30,45.4749,30.0405> }
object{Deco[4] scale 0.3 rotate x*360*0.637896 rotate y*90*1 translate<-30,45.4749,30.1662> }
object{Deco[3] scale 0.3 rotate x*360*0.609131 rotate y*90*1 translate<-30,45.4749,30.1837> }
cylinder{<-30,45.4749,25.9092>,<-30,45.4749,28.9092>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.502966 rotate y*90*1 translate<-30,45.4749,26.1111> }
object{Deco[1] scale 0.3 rotate x*360*0.800512 rotate y*90*1 translate<-30,45.4749,26.24> }
object{Deco[0] scale 0.3 rotate x*360*0.647397 rotate y*90*1 translate<-30,45.4749,26.5064> }
object{Deco[3] scale 0.3 rotate x*360*0.923815 rotate y*90*1 translate<-30,45.4749,26.727> }
object{Deco[1] scale 0.3 rotate x*360*0.230785 rotate y*90*1 translate<-30,45.4749,26.7584> }
object{Deco[4] scale 0.3 rotate x*360*0.061388 rotate y*90*1 translate<-30,45.4749,26.8831> }
object{Deco[0] scale 0.3 rotate x*360*0.760942 rotate y*90*1 translate<-30,45.4749,27.048> }
object{Deco[6] scale 0.3 rotate x*360*0.505983 rotate y*90*1 translate<-30,45.4749,27.1002> }
object{Deco[1] scale 0.3 rotate x*360*0.513628 rotate y*90*1 translate<-30,45.4749,27.3425> }
object{Deco[0] scale 0.3 rotate x*360*0.532608 rotate y*90*1 translate<-30,45.4749,27.4993> }
cylinder{<-30,45.4749,35.4991>,<-30,45.4749,40.7781>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.320983 rotate y*90*1 translate<-30,45.4749,35.8969> }
object{Deco[1] scale 0.3 rotate x*360*0.299532 rotate y*90*1 translate<-30,45.4749,36.315> }
object{Deco[1] scale 0.3 rotate x*360*0.764383 rotate y*90*1 translate<-30,45.4749,36.3529> }
object{Deco[6] scale 0.3 rotate x*360*0.698386 rotate y*90*1 translate<-30,45.4749,36.3747> }
object{Deco[2] scale 0.3 rotate x*360*0.519793 rotate y*90*1 translate<-30,45.4749,36.511> }
object{Deco[1] scale 0.3 rotate x*360*0.297213 rotate y*90*1 translate<-30,45.4749,36.9228> }
object{Deco[4] scale 0.3 rotate x*360*0.187301 rotate y*90*1 translate<-30,45.4749,36.9414> }
object{Deco[6] scale 0.3 rotate x*360*0.475571 rotate y*90*1 translate<-30,45.4749,37.0104> }
object{Deco[2] scale 0.3 rotate x*360*0.406162 rotate y*90*1 translate<-30,45.4749,37.0933> }
object{Deco[6] scale 0.3 rotate x*360*0.776758 rotate y*90*1 translate<-30,45.4749,37.4719> }
cylinder{<-30,45.4749,32.4991>,<-30,45.4749,35.4991>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.818857 rotate y*90*1 translate<-30,45.4749,32.6255> }
object{Deco[1] scale 0.3 rotate x*360*0.525683 rotate y*90*1 translate<-30,45.4749,32.8302> }
object{Deco[3] scale 0.3 rotate x*360*0.907983 rotate y*90*1 translate<-30,45.4749,32.9107> }
object{Deco[6] scale 0.3 rotate x*360*0.397125 rotate y*90*1 translate<-30,45.4749,33.1029> }
object{Deco[6] scale 0.3 rotate x*360*0.166038 rotate y*90*1 translate<-30,45.4749,33.2439> }
object{Deco[5] scale 0.3 rotate x*360*0.261176 rotate y*90*1 translate<-30,45.4749,33.4674> }
object{Deco[5] scale 0.3 rotate x*360*0.62167 rotate y*90*1 translate<-30,45.4749,33.579> }
object{Deco[3] scale 0.3 rotate x*360*0.848451 rotate y*90*1 translate<-30,45.4749,33.6655> }
object{Deco[1] scale 0.3 rotate x*360*0.379728 rotate y*90*1 translate<-30,45.4749,33.8612> }
object{Deco[5] scale 0.3 rotate x*360*0.0325736 rotate y*90*1 translate<-30,45.4749,34.0646> }
cylinder{<-30,45.4749,43.7781>,<-30,45.4749,43.5>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.526702 rotate y*90*1 translate<-30,45.4749,43.7933> }
object{Deco[1] scale 0.3 rotate x*360*0.748893 rotate y*90*1 translate<-30,45.4749,43.8093> }
object{Deco[3] scale 0.3 rotate x*360*0.114919 rotate y*90*1 translate<-30,45.4749,43.8294> }
object{Deco[6] scale 0.3 rotate x*360*0.51609 rotate y*90*1 translate<-30,45.4749,43.8526> }
object{Deco[6] scale 0.3 rotate x*360*0.863992 rotate y*90*1 translate<-30,45.4749,43.8669> }
object{Deco[5] scale 0.3 rotate x*360*0.556017 rotate y*90*1 translate<-30,45.4749,43.8723> }
object{Deco[0] scale 0.3 rotate x*360*0.96379 rotate y*90*1 translate<-30,45.4749,43.8826> }
object{Deco[2] scale 0.3 rotate x*360*0.0173631 rotate y*90*1 translate<-30,45.4749,43.8979> }
object{Deco[5] scale 0.3 rotate x*360*0.618341 rotate y*90*1 translate<-30,45.4749,43.9015> }
object{Deco[0] scale 0.3 rotate x*360*0.615254 rotate y*90*1 translate<-30,45.4749,43.9089> }
cylinder{<-30,45.4749,40.7781>,<-30,45.4749,43.7781>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.322237 rotate y*90*1 translate<-30,45.4749,40.9107> }
object{Deco[6] scale 0.3 rotate x*360*0.125113 rotate y*90*1 translate<-30,45.4749,40.9808> }
object{Deco[6] scale 0.3 rotate x*360*0.0837001 rotate y*90*1 translate<-30,45.4749,41.2326> }
object{Deco[4] scale 0.3 rotate x*360*0.890517 rotate y*90*1 translate<-30,45.4749,41.2904> }
object{Deco[5] scale 0.3 rotate x*360*0.559293 rotate y*90*1 translate<-30,45.4749,41.5115> }
object{Deco[6] scale 0.3 rotate x*360*0.68842 rotate y*90*1 translate<-30,45.4749,41.6434> }
object{Deco[6] scale 0.3 rotate x*360*0.480265 rotate y*90*1 translate<-30,45.4749,41.7607> }
object{Deco[1] scale 0.3 rotate x*360*0.206277 rotate y*90*1 translate<-30,45.4749,41.9853> }
object{Deco[2] scale 0.3 rotate x*360*0.548394 rotate y*90*1 translate<-30,45.4749,42.0273> }
object{Deco[4] scale 0.3 rotate x*360*0.39827 rotate y*90*1 translate<-30,45.4749,42.2605> }
cylinder{<-30,46.9749,45>,<-30,52.5187,45>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.436656 rotate z*90*1 translate<-30,47.339,45> }
object{Deco[0] scale 0.3 rotate x*360*0.794049 rotate z*90*1 translate<-30,47.5479,45> }
object{Deco[3] scale 0.3 rotate x*360*0.388446 rotate z*90*1 translate<-30,47.8335,45> }
object{Deco[4] scale 0.3 rotate x*360*0.521377 rotate z*90*1 translate<-30,48.0609,45> }
object{Deco[1] scale 0.3 rotate x*360*0.94932 rotate z*90*1 translate<-30,48.3915,45> }
object{Deco[0] scale 0.3 rotate x*360*0.806226 rotate z*90*1 translate<-30,48.4214,45> }
object{Deco[0] scale 0.3 rotate x*360*0.0550517 rotate z*90*1 translate<-30,48.9173,45> }
object{Deco[6] scale 0.3 rotate x*360*0.873232 rotate z*90*1 translate<-30,49.4207,45> }
object{Deco[2] scale 0.3 rotate x*360*0.495948 rotate z*90*1 translate<-30,49.6574,45> }
object{Deco[5] scale 0.3 rotate x*360*0.228745 rotate z*90*1 translate<-30,50.125,45> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-30,46.9749,45>}
cylinder{<-28.5,54.0187,45>,<-19.9565,54.0187,45>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.511556 scale <1,1,1> translate<-28.312,54.0187,45> }
object{Deco[1] scale 0.3 rotate x*360*0.413483 scale <1,1,1> translate<-27.5376,54.0187,45> }
object{Deco[0] scale 0.3 rotate x*360*0.823419 scale <1,1,1> translate<-26.9545,54.0187,45> }
object{Deco[3] scale 0.3 rotate x*360*0.540028 scale <1,1,1> translate<-26.873,54.0187,45> }
object{Deco[3] scale 0.3 rotate x*360*0.200905 scale <1,1,1> translate<-26.4969,54.0187,45> }
object{Deco[5] scale 0.3 rotate x*360*0.589754 scale <1,1,1> translate<-25.9915,54.0187,45> }
object{Deco[4] scale 0.3 rotate x*360*0.687144 scale <1,1,1> translate<-25.4518,54.0187,45> }
object{Deco[2] scale 0.3 rotate x*360*0.444108 scale <1,1,1> translate<-24.8983,54.0187,45> }
object{Deco[5] scale 0.3 rotate x*360*0.817709 scale <1,1,1> translate<-24.4659,54.0187,45> }
object{Deco[1] scale 0.3 rotate x*360*0.644514 scale <1,1,1> translate<-24.1257,54.0187,45> }
object{Elbow translate z*1.5 rotate y*90 rotate x*-90 translate -x*1.5 translate -y*1.5  translate <-28.5,54.0187,45>}
cylinder{<-16.9565,54.0187,45>,<-13.0057,54.0187,45>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.881776 scale <1,1,1> translate<-16.861,54.0187,45> }
object{Deco[5] scale 0.3 rotate x*360*0.959366 scale <1,1,1> translate<-16.7561,54.0187,45> }
object{Deco[2] scale 0.3 rotate x*360*0.394357 scale <1,1,1> translate<-16.5262,54.0187,45> }
object{Deco[0] scale 0.3 rotate x*360*0.503478 scale <1,1,1> translate<-16.1771,54.0187,45> }
object{Deco[2] scale 0.3 rotate x*360*0.795371 scale <1,1,1> translate<-15.8551,54.0187,45> }
object{Deco[3] scale 0.3 rotate x*360*0.513004 scale <1,1,1> translate<-15.5534,54.0187,45> }
object{Deco[6] scale 0.3 rotate x*360*0.0756384 scale <1,1,1> translate<-15.3628,54.0187,45> }
object{Deco[1] scale 0.3 rotate x*360*0.833332 scale <1,1,1> translate<-15.258,54.0187,45> }
object{Deco[6] scale 0.3 rotate x*360*0.610236 scale <1,1,1> translate<-15.0365,54.0187,45> }
object{Deco[3] scale 0.3 rotate x*360*0.211372 scale <1,1,1> translate<-14.8184,54.0187,45> }
cylinder{<-19.9565,54.0187,45>,<-16.9565,54.0187,45>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.405068 scale <1,1,1> translate<-19.7069,54.0187,45> }
object{Deco[4] scale 0.3 rotate x*360*0.914555 scale <1,1,1> translate<-19.6019,54.0187,45> }
object{Deco[4] scale 0.3 rotate x*360*0.915718 scale <1,1,1> translate<-19.5343,54.0187,45> }
object{Deco[6] scale 0.3 rotate x*360*0.803397 scale <1,1,1> translate<-19.3124,54.0187,45> }
object{Deco[5] scale 0.3 rotate x*360*0.134984 scale <1,1,1> translate<-19.2557,54.0187,45> }
object{Deco[1] scale 0.3 rotate x*360*0.787931 scale <1,1,1> translate<-19.0792,54.0187,45> }
object{Deco[3] scale 0.3 rotate x*360*0.224633 scale <1,1,1> translate<-18.9271,54.0187,45> }
object{Deco[0] scale 0.3 rotate x*360*0.267245 scale <1,1,1> translate<-18.7933,54.0187,45> }
object{Deco[0] scale 0.3 rotate x*360*0.74127 scale <1,1,1> translate<-18.6535,54.0187,45> }
object{Deco[1] scale 0.3 rotate x*360*0.484379 scale <1,1,1> translate<-18.524,54.0187,45> }
cylinder{<-11.5057,54.0187,43.5>,<-11.5057,54.0187,39.3106>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.661465 rotate y*90*-1 translate<-11.5057,54.0187,43.2949> }
object{Deco[4] scale 0.3 rotate x*360*0.808833 rotate y*90*-1 translate<-11.5057,54.0187,43.0898> }
object{Deco[5] scale 0.3 rotate x*360*0.773415 rotate y*90*-1 translate<-11.5057,54.0187,42.9832> }
object{Deco[2] scale 0.3 rotate x*360*0.303737 rotate y*90*-1 translate<-11.5057,54.0187,42.8331> }
object{Deco[4] scale 0.3 rotate x*360*0.0822401 rotate y*90*-1 translate<-11.5057,54.0187,42.7439> }
object{Deco[0] scale 0.3 rotate x*360*0.233072 rotate y*90*-1 translate<-11.5057,54.0187,42.5801> }
object{Deco[6] scale 0.3 rotate x*360*0.27561 rotate y*90*-1 translate<-11.5057,54.0187,42.5043> }
object{Deco[4] scale 0.3 rotate x*360*0.372676 rotate y*90*-1 translate<-11.5057,54.0187,42.4358> }
object{Deco[0] scale 0.3 rotate x*360*0.91257 rotate y*90*-1 translate<-11.5057,54.0187,42.3979> }
object{Deco[2] scale 0.3 rotate x*360*0.946925 rotate y*90*-1 translate<-11.5057,54.0187,42.1077> }
object{Elbow translate x*1.5 rotate y*180 translate <-11.5057,54.0187,43.5>}
cylinder{<-11.5057,52.5187,37.8106>,<-11.5057,46.0557,37.8106>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.427513 rotate z*90*-1 translate<-11.5057,52.1359,37.8106> }
object{Deco[4] scale 0.3 rotate x*360*0.246574 rotate z*90*-1 translate<-11.5057,51.7693,37.8106> }
object{Deco[6] scale 0.3 rotate x*360*0.925074 rotate z*90*-1 translate<-11.5057,51.3688,37.8106> }
object{Deco[2] scale 0.3 rotate x*360*0.130597 rotate z*90*-1 translate<-11.5057,50.8278,37.8106> }
object{Deco[0] scale 0.3 rotate x*360*0.261636 rotate z*90*-1 translate<-11.5057,50.4549,37.8106> }
object{Deco[4] scale 0.3 rotate x*360*0.492198 rotate z*90*-1 translate<-11.5057,50.3197,37.8106> }
object{Deco[4] scale 0.3 rotate x*360*0.948141 rotate z*90*-1 translate<-11.5057,50.1334,37.8106> }
object{Deco[6] scale 0.3 rotate x*360*0.544999 rotate z*90*-1 translate<-11.5057,50.0324,37.8106> }
object{Deco[1] scale 0.3 rotate x*360*0.00358816 rotate z*90*-1 translate<-11.5057,49.9417,37.8106> }
object{Deco[5] scale 0.3 rotate x*360*0.700278 rotate z*90*-1 translate<-11.5057,49.8317,37.8106> }
object{Elbow translate z*1.5 rotate -z*90 translate <-11.5057,52.5187,37.8106>}
cylinder{<-11.5057,44.5557,36.3106>,<-11.5057,44.5557,33.1706>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.486295 rotate y*90*-1 translate<-11.5057,44.5557,36.2991> }
object{Deco[5] scale 0.3 rotate x*360*0.827751 rotate y*90*-1 translate<-11.5057,44.5557,36.0274> }
object{Deco[0] scale 0.3 rotate x*360*0.598111 rotate y*90*-1 translate<-11.5057,44.5557,35.915> }
object{Deco[2] scale 0.3 rotate x*360*0.894695 rotate y*90*-1 translate<-11.5057,44.5557,35.8204> }
object{Deco[6] scale 0.3 rotate x*360*0.837114 rotate y*90*-1 translate<-11.5057,44.5557,35.7674> }
object{Deco[5] scale 0.3 rotate x*360*0.460206 rotate y*90*-1 translate<-11.5057,44.5557,35.6751> }
object{Deco[6] scale 0.3 rotate x*360*0.272375 rotate y*90*-1 translate<-11.5057,44.5557,35.6348> }
object{Deco[0] scale 0.3 rotate x*360*0.924228 rotate y*90*-1 translate<-11.5057,44.5557,35.3549> }
object{Deco[4] scale 0.3 rotate x*360*0.777873 rotate y*90*-1 translate<-11.5057,44.5557,35.2371> }
object{Deco[5] scale 0.3 rotate x*360*0.278007 rotate y*90*-1 translate<-11.5057,44.5557,35.2122> }
object{Elbow translate z*1.5 rotate z*90 rotate -x*90 translate <-11.5057,44.5557,36.3106>}
cylinder{<-13.0057,44.5557,31.6706>,<-21.4957,44.5557,31.6706>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.0115164 scale <-1,1,1> translate<-13.3964,44.5557,31.6706> }
object{Deco[3] scale 0.3 rotate x*360*0.480467 scale <-1,1,1> translate<-13.6159,44.5557,31.6706> }
object{Deco[6] scale 0.3 rotate x*360*0.535569 scale <-1,1,1> translate<-14.0007,44.5557,31.6706> }
object{Deco[5] scale 0.3 rotate x*360*0.159874 scale <-1,1,1> translate<-14.4962,44.5557,31.6706> }
object{Deco[6] scale 0.3 rotate x*360*0.613237 scale <-1,1,1> translate<-15.2136,44.5557,31.6706> }
object{Deco[5] scale 0.3 rotate x*360*0.610118 scale <-1,1,1> translate<-15.7461,44.5557,31.6706> }
object{Deco[3] scale 0.3 rotate x*360*0.044089 scale <-1,1,1> translate<-15.9698,44.5557,31.6706> }
object{Deco[4] scale 0.3 rotate x*360*0.853503 scale <-1,1,1> translate<-16.3154,44.5557,31.6706> }
object{Deco[3] scale 0.3 rotate x*360*0.889598 scale <-1,1,1> translate<-16.412,44.5557,31.6706> }
object{Deco[4] scale 0.3 rotate x*360*0.0418061 scale <-1,1,1> translate<-16.9932,44.5557,31.6706> }
object{Elbow scale <-1,1,1> translate z*1.5  translate <-13.0057,44.5557,31.6706>}
cylinder{<-24.4957,44.5557,31.6706>,<-28.5,44.5557,31.6706>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.567508 scale <-1,1,1> translate<-24.8111,44.5557,31.6706> }
object{Deco[3] scale 0.3 rotate x*360*0.460946 scale <-1,1,1> translate<-25.1163,44.5557,31.6706> }
object{Deco[6] scale 0.3 rotate x*360*0.996114 scale <-1,1,1> translate<-25.1959,44.5557,31.6706> }
object{Deco[1] scale 0.3 rotate x*360*0.4431 scale <-1,1,1> translate<-25.5406,44.5557,31.6706> }
object{Deco[4] scale 0.3 rotate x*360*0.0351977 scale <-1,1,1> translate<-25.6035,44.5557,31.6706> }
object{Deco[3] scale 0.3 rotate x*360*0.993083 scale <-1,1,1> translate<-25.6082,44.5557,31.6706> }
object{Deco[4] scale 0.3 rotate x*360*0.824685 scale <-1,1,1> translate<-25.8896,44.5557,31.6706> }
object{Deco[1] scale 0.3 rotate x*360*0.879089 scale <-1,1,1> translate<-26.1604,44.5557,31.6706> }
object{Deco[2] scale 0.3 rotate x*360*0.883565 scale <-1,1,1> translate<-26.1817,44.5557,31.6706> }
object{Deco[0] scale 0.3 rotate x*360*0.181495 scale <-1,1,1> translate<-26.3374,44.5557,31.6706> }
cylinder{<-21.4957,44.5557,31.6706>,<-24.4957,44.5557,31.6706>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.954196 scale <-1,1,1> translate<-21.7231,44.5557,31.6706> }
object{Deco[0] scale 0.3 rotate x*360*0.283216 scale <-1,1,1> translate<-21.8362,44.5557,31.6706> }
object{Deco[2] scale 0.3 rotate x*360*0.916561 scale <-1,1,1> translate<-22.0135,44.5557,31.6706> }
object{Deco[5] scale 0.3 rotate x*360*0.418232 scale <-1,1,1> translate<-22.111,44.5557,31.6706> }
object{Deco[1] scale 0.3 rotate x*360*0.489419 scale <-1,1,1> translate<-22.3049,44.5557,31.6706> }
object{Deco[1] scale 0.3 rotate x*360*0.678331 scale <-1,1,1> translate<-22.4131,44.5557,31.6706> }
object{Deco[1] scale 0.3 rotate x*360*0.990905 scale <-1,1,1> translate<-22.4867,44.5557,31.6706> }
object{Deco[6] scale 0.3 rotate x*360*0.367335 scale <-1,1,1> translate<-22.7213,44.5557,31.6706> }
object{Deco[5] scale 0.3 rotate x*360*0.494663 scale <-1,1,1> translate<-22.7839,44.5557,31.6706> }
object{Deco[1] scale 0.3 rotate x*360*0.307916 scale <-1,1,1> translate<-22.9721,44.5557,31.6706> }
cylinder{<-30,44.5557,30.1706>,<-30,44.5557,23.6127>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.982251 rotate y*90*-1 translate<-30,44.5557,29.8024> }
object{Deco[2] scale 0.3 rotate x*360*0.0707228 rotate y*90*-1 translate<-30,44.5557,29.3606> }
object{Deco[5] scale 0.3 rotate x*360*0.0992599 rotate y*90*-1 translate<-30,44.5557,29.3029> }
object{Deco[3] scale 0.3 rotate x*360*0.897195 rotate y*90*-1 translate<-30,44.5557,29.1203> }
object{Deco[2] scale 0.3 rotate x*360*0.800516 rotate y*90*-1 translate<-30,44.5557,28.6925> }
object{Deco[5] scale 0.3 rotate x*360*0.553385 rotate y*90*-1 translate<-30,44.5557,28.2302> }
object{Deco[2] scale 0.3 rotate x*360*0.486252 rotate y*90*-1 translate<-30,44.5557,27.7924> }
object{Deco[4] scale 0.3 rotate x*360*0.419876 rotate y*90*-1 translate<-30,44.5557,27.7061> }
object{Deco[6] scale 0.3 rotate x*360*0.150547 rotate y*90*-1 translate<-30,44.5557,27.5681> }
object{Deco[0] scale 0.3 rotate x*360*0.488446 rotate y*90*-1 translate<-30,44.5557,27.2441> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-30,44.5557,30.1706>}
cylinder{<-30,44.5557,20.6127>,<-30,44.5557,13.7281>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.735922 rotate y*90*-1 translate<-30,44.5557,20.0351> }
object{Deco[2] scale 0.3 rotate x*360*0.141535 rotate y*90*-1 translate<-30,44.5557,19.5012> }
object{Deco[6] scale 0.3 rotate x*360*0.457224 rotate y*90*-1 translate<-30,44.5557,18.9772> }
object{Deco[6] scale 0.3 rotate x*360*0.51846 rotate y*90*-1 translate<-30,44.5557,18.4341> }
object{Deco[0] scale 0.3 rotate x*360*0.727931 rotate y*90*-1 translate<-30,44.5557,18.2856> }
object{Deco[1] scale 0.3 rotate x*360*0.616454 rotate y*90*-1 translate<-30,44.5557,17.8327> }
object{Deco[1] scale 0.3 rotate x*360*0.570506 rotate y*90*-1 translate<-30,44.5557,17.6335> }
object{Deco[4] scale 0.3 rotate x*360*0.714662 rotate y*90*-1 translate<-30,44.5557,17.6065> }
object{Deco[1] scale 0.3 rotate x*360*0.343786 rotate y*90*-1 translate<-30,44.5557,17.0017> }
object{Deco[1] scale 0.3 rotate x*360*0.515328 rotate y*90*-1 translate<-30,44.5557,16.8916> }
cylinder{<-30,44.5557,23.6127>,<-30,44.5557,20.6127>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.0576726 rotate y*90*-1 translate<-30,44.5557,23.5733> }
object{Deco[6] scale 0.3 rotate x*360*0.269386 rotate y*90*-1 translate<-30,44.5557,23.4502> }
object{Deco[2] scale 0.3 rotate x*360*0.289385 rotate y*90*-1 translate<-30,44.5557,23.2807> }
object{Deco[4] scale 0.3 rotate x*360*0.45522 rotate y*90*-1 translate<-30,44.5557,23.083> }
object{Deco[5] scale 0.3 rotate x*360*0.507091 rotate y*90*-1 translate<-30,44.5557,22.9214> }
object{Deco[4] scale 0.3 rotate x*360*0.11279 rotate y*90*-1 translate<-30,44.5557,22.884> }
object{Deco[4] scale 0.3 rotate x*360*0.0607861 rotate y*90*-1 translate<-30,44.5557,22.6345> }
object{Deco[6] scale 0.3 rotate x*360*0.979206 rotate y*90*-1 translate<-30,44.5557,22.6052> }
object{Deco[5] scale 0.3 rotate x*360*0.749717 rotate y*90*-1 translate<-30,44.5557,22.5026> }
object{Deco[4] scale 0.3 rotate x*360*0.279912 rotate y*90*-1 translate<-30,44.5557,22.3811> }
cylinder{<-28.5,44.5557,12.2281>,<-23.1039,44.5557,12.2281>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.904356 scale <1,1,1> translate<-28.1159,44.5557,12.2281> }
object{Deco[4] scale 0.3 rotate x*360*0.216441 scale <1,1,1> translate<-28.0109,44.5557,12.2281> }
object{Deco[3] scale 0.3 rotate x*360*0.292247 scale <1,1,1> translate<-27.6789,44.5557,12.2281> }
object{Deco[5] scale 0.3 rotate x*360*0.94258 scale <1,1,1> translate<-27.6067,44.5557,12.2281> }
object{Deco[5] scale 0.3 rotate x*360*0.257968 scale <1,1,1> translate<-27.4868,44.5557,12.2281> }
object{Deco[1] scale 0.3 rotate x*360*0.662603 scale <1,1,1> translate<-27.4398,44.5557,12.2281> }
object{Deco[0] scale 0.3 rotate x*360*0.103685 scale <1,1,1> translate<-27.0049,44.5557,12.2281> }
object{Deco[6] scale 0.3 rotate x*360*0.78969 scale <1,1,1> translate<-26.7169,44.5557,12.2281> }
object{Deco[5] scale 0.3 rotate x*360*0.498763 scale <1,1,1> translate<-26.2472,44.5557,12.2281> }
object{Deco[6] scale 0.3 rotate x*360*0.130715 scale <1,1,1> translate<-26.1602,44.5557,12.2281> }
object{Elbow translate z*1.5  translate <-28.5,44.5557,12.2281>}
cylinder{<-21.6039,43.0557,12.2281>,<-21.6039,39.6688,12.2281>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.370922 rotate z*90*-1 translate<-21.6039,42.8872,12.2281> }
object{Deco[2] scale 0.3 rotate x*360*0.919239 rotate z*90*-1 translate<-21.6039,42.8837,12.2281> }
object{Deco[1] scale 0.3 rotate x*360*0.198324 rotate z*90*-1 translate<-21.6039,42.6881,12.2281> }
object{Deco[4] scale 0.3 rotate x*360*0.56542 rotate z*90*-1 translate<-21.6039,42.4514,12.2281> }
object{Deco[6] scale 0.3 rotate x*360*0.778948 rotate z*90*-1 translate<-21.6039,42.1991,12.2281> }
object{Deco[1] scale 0.3 rotate x*360*0.892979 rotate z*90*-1 translate<-21.6039,41.9299,12.2281> }
object{Deco[3] scale 0.3 rotate x*360*0.601999 rotate z*90*-1 translate<-21.6039,41.7901,12.2281> }
object{Deco[1] scale 0.3 rotate x*360*0.239697 rotate z*90*-1 translate<-21.6039,41.5414,12.2281> }
object{Deco[5] scale 0.3 rotate x*360*0.101973 rotate z*90*-1 translate<-21.6039,41.484,12.2281> }
object{Deco[3] scale 0.3 rotate x*360*0.886949 rotate z*90*-1 translate<-21.6039,41.3624,12.2281> }
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <-21.6039,43.0557,12.2281>}
cylinder{<-21.6039,38.1688,10.7281>,<-21.6039,38.1688,4.64413>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.756075 rotate y*90*-1 translate<-21.6039,38.1688,10.5264> }
object{Deco[2] scale 0.3 rotate x*360*0.93088 rotate y*90*-1 translate<-21.6039,38.1688,10.399> }
object{Deco[0] scale 0.3 rotate x*360*0.875658 rotate y*90*-1 translate<-21.6039,38.1688,10.0093> }
object{Deco[5] scale 0.3 rotate x*360*0.512582 rotate y*90*-1 translate<-21.6039,38.1688,9.88184> }
object{Deco[4] scale 0.3 rotate x*360*0.999598 rotate y*90*-1 translate<-21.6039,38.1688,9.61385> }
object{Deco[1] scale 0.3 rotate x*360*0.901938 rotate y*90*-1 translate<-21.6039,38.1688,9.57084> }
object{Deco[4] scale 0.3 rotate x*360*0.476504 rotate y*90*-1 translate<-21.6039,38.1688,9.37147> }
object{Deco[6] scale 0.3 rotate x*360*0.297367 rotate y*90*-1 translate<-21.6039,38.1688,9.24042> }
object{Deco[4] scale 0.3 rotate x*360*0.338523 rotate y*90*-1 translate<-21.6039,38.1688,8.99748> }
object{Deco[0] scale 0.3 rotate x*360*0.535308 rotate y*90*-1 translate<-21.6039,38.1688,8.99009> }
object{Elbow translate z*1.5 rotate z*90 rotate -x*90 translate <-21.6039,38.1688,10.7281>}
cylinder{<-23.1039,38.1688,3.14413>,<-28.5,38.1688,3.14413>,0.3}
object{Elbow scale <-1,1,1> translate z*1.5  translate <-23.1039,38.1688,3.14413>}
cylinder{<-30,38.1688,4.64413>,<-30,38.1688,11.92>,0.3}
object{Elbow translate x*1.5  translate <-30,38.1688,4.64413>}
cylinder{<-30,38.1688,14.92>,<-30,38.1688,18.7156>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.707915 rotate y*90*1 translate<-30,38.1688,14.9999> }
object{Deco[3] scale 0.3 rotate x*360*0.926035 rotate y*90*1 translate<-30,38.1688,15.0869> }
object{Deco[0] scale 0.3 rotate x*360*0.490109 rotate y*90*1 translate<-30,38.1688,15.3187> }
object{Deco[5] scale 0.3 rotate x*360*0.36563 rotate y*90*1 translate<-30,38.1688,15.3235> }
object{Deco[6] scale 0.3 rotate x*360*0.413602 rotate y*90*1 translate<-30,38.1688,15.5792> }
object{Deco[0] scale 0.3 rotate x*360*0.133965 rotate y*90*1 translate<-30,38.1688,15.8103> }
object{Deco[1] scale 0.3 rotate x*360*0.878213 rotate y*90*1 translate<-30,38.1688,16.0198> }
object{Deco[2] scale 0.3 rotate x*360*0.890612 rotate y*90*1 translate<-30,38.1688,16.3309> }
object{Deco[2] scale 0.3 rotate x*360*0.942431 rotate y*90*1 translate<-30,38.1688,16.3426> }
object{Deco[3] scale 0.3 rotate x*360*0.752706 rotate y*90*1 translate<-30,38.1688,16.4654> }
cylinder{<-30,38.1688,11.92>,<-30,38.1688,14.92>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.704471 rotate y*90*1 translate<-30,38.1688,12.0227> }
object{Deco[4] scale 0.3 rotate x*360*0.63059 rotate y*90*1 translate<-30,38.1688,12.1677> }
object{Deco[6] scale 0.3 rotate x*360*0.079593 rotate y*90*1 translate<-30,38.1688,12.3008> }
object{Deco[3] scale 0.3 rotate x*360*0.693536 rotate y*90*1 translate<-30,38.1688,12.3439> }
object{Deco[3] scale 0.3 rotate x*360*0.121255 rotate y*90*1 translate<-30,38.1688,12.6086> }
object{Deco[6] scale 0.3 rotate x*360*0.229831 rotate y*90*1 translate<-30,38.1688,12.6113> }
object{Deco[0] scale 0.3 rotate x*360*0.0971618 rotate y*90*1 translate<-30,38.1688,12.7121> }
object{Deco[1] scale 0.3 rotate x*360*0.881332 rotate y*90*1 translate<-30,38.1688,12.916> }
object{Deco[4] scale 0.3 rotate x*360*0.665067 rotate y*90*1 translate<-30,38.1688,13.0419> }
object{Deco[4] scale 0.3 rotate x*360*0.987467 rotate y*90*1 translate<-30,38.1688,13.0825> }
cylinder{<-30,38.1688,21.7156>,<-30,38.1688,26.346>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.949992 rotate y*90*1 translate<-30,38.1688,22.0322> }
object{Deco[5] scale 0.3 rotate x*360*0.485308 rotate y*90*1 translate<-30,38.1688,22.1338> }
object{Deco[5] scale 0.3 rotate x*360*0.764598 rotate y*90*1 translate<-30,38.1688,22.4165> }
object{Deco[1] scale 0.3 rotate x*360*0.252424 rotate y*90*1 translate<-30,38.1688,22.7665> }
object{Deco[2] scale 0.3 rotate x*360*0.0493052 rotate y*90*1 translate<-30,38.1688,22.9418> }
object{Deco[4] scale 0.3 rotate x*360*0.844628 rotate y*90*1 translate<-30,38.1688,23.0969> }
object{Deco[2] scale 0.3 rotate x*360*0.999337 rotate y*90*1 translate<-30,38.1688,23.4472> }
object{Deco[4] scale 0.3 rotate x*360*0.121954 rotate y*90*1 translate<-30,38.1688,23.7533> }
object{Deco[5] scale 0.3 rotate x*360*0.24147 rotate y*90*1 translate<-30,38.1688,23.7721> }
object{Deco[0] scale 0.3 rotate x*360*0.948571 rotate y*90*1 translate<-30,38.1688,24.0007> }
cylinder{<-30,38.1688,18.7156>,<-30,38.1688,21.7156>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.144301 rotate y*90*1 translate<-30,38.1688,18.7896> }
object{Deco[4] scale 0.3 rotate x*360*0.0377003 rotate y*90*1 translate<-30,38.1688,19.0144> }
object{Deco[4] scale 0.3 rotate x*360*0.677097 rotate y*90*1 translate<-30,38.1688,19.1618> }
object{Deco[6] scale 0.3 rotate x*360*0.844586 rotate y*90*1 translate<-30,38.1688,19.2823> }
object{Deco[6] scale 0.3 rotate x*360*0.933591 rotate y*90*1 translate<-30,38.1688,19.4097> }
object{Deco[6] scale 0.3 rotate x*360*0.865546 rotate y*90*1 translate<-30,38.1688,19.4865> }
object{Deco[0] scale 0.3 rotate x*360*0.250512 rotate y*90*1 translate<-30,38.1688,19.5308> }
object{Deco[2] scale 0.3 rotate x*360*0.166961 rotate y*90*1 translate<-30,38.1688,19.6002> }
object{Deco[5] scale 0.3 rotate x*360*0.734458 rotate y*90*1 translate<-30,38.1688,19.7714> }
object{Deco[5] scale 0.3 rotate x*360*0.472923 rotate y*90*1 translate<-30,38.1688,20.0063> }
cylinder{<-28.5,38.1688,27.846>,<-19.806,38.1688,27.846>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.306392 scale <1,1,1> translate<-27.8751,38.1688,27.846> }
object{Deco[5] scale 0.3 rotate x*360*0.441482 scale <1,1,1> translate<-27.8345,38.1688,27.846> }
object{Deco[5] scale 0.3 rotate x*360*0.976437 scale <1,1,1> translate<-27.3672,38.1688,27.846> }
object{Deco[2] scale 0.3 rotate x*360*0.52504 scale <1,1,1> translate<-26.6925,38.1688,27.846> }
object{Deco[2] scale 0.3 rotate x*360*0.31282 scale <1,1,1> translate<-26.4004,38.1688,27.846> }
object{Deco[0] scale 0.3 rotate x*360*0.804303 scale <1,1,1> translate<-25.7455,38.1688,27.846> }
object{Deco[5] scale 0.3 rotate x*360*0.636241 scale <1,1,1> translate<-25.5035,38.1688,27.846> }
object{Deco[1] scale 0.3 rotate x*360*0.662032 scale <1,1,1> translate<-24.8065,38.1688,27.846> }
object{Deco[3] scale 0.3 rotate x*360*0.237474 scale <1,1,1> translate<-24.0653,38.1688,27.846> }
object{Deco[2] scale 0.3 rotate x*360*0.234818 scale <1,1,1> translate<-23.4296,38.1688,27.846> }
object{Elbow scale <1,1,-1> translate -z*1.5  translate <-28.5,38.1688,27.846>}
cylinder{<-18.306,38.1688,26.346>,<-18.306,38.1688,18.5232>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.715146 rotate y*90*-1 translate<-18.306,38.1688,25.8185> }
object{Deco[4] scale 0.3 rotate x*360*0.675278 rotate y*90*-1 translate<-18.306,38.1688,25.5395> }
object{Deco[6] scale 0.3 rotate x*360*0.790981 rotate y*90*-1 translate<-18.306,38.1688,25.4154> }
object{Deco[4] scale 0.3 rotate x*360*0.638978 rotate y*90*-1 translate<-18.306,38.1688,24.9302> }
object{Deco[4] scale 0.3 rotate x*360*0.655775 rotate y*90*-1 translate<-18.306,38.1688,24.3526> }
object{Deco[4] scale 0.3 rotate x*360*0.213885 rotate y*90*-1 translate<-18.306,38.1688,23.8591> }
object{Deco[2] scale 0.3 rotate x*360*0.910502 rotate y*90*-1 translate<-18.306,38.1688,23.5259> }
object{Deco[4] scale 0.3 rotate x*360*0.758723 rotate y*90*-1 translate<-18.306,38.1688,23.166> }
object{Deco[3] scale 0.3 rotate x*360*0.682568 rotate y*90*-1 translate<-18.306,38.1688,22.8117> }
object{Deco[2] scale 0.3 rotate x*360*0.337067 rotate y*90*-1 translate<-18.306,38.1688,22.7098> }
object{Elbow translate x*1.5 rotate y*180 translate <-18.306,38.1688,26.346>}
cylinder{<-18.306,36.6688,17.0232>,<-18.306,33.5089,17.0232>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.40895 rotate z*90*-1 translate<-18.306,36.6145,17.0232> }
object{Deco[4] scale 0.3 rotate x*360*0.242797 rotate z*90*-1 translate<-18.306,36.5432,17.0232> }
object{Deco[0] scale 0.3 rotate x*360*0.749652 rotate z*90*-1 translate<-18.306,36.413,17.0232> }
object{Deco[2] scale 0.3 rotate x*360*0.405158 rotate z*90*-1 translate<-18.306,36.1668,17.0232> }
object{Deco[4] scale 0.3 rotate x*360*0.257857 rotate z*90*-1 translate<-18.306,35.9543,17.0232> }
object{Deco[3] scale 0.3 rotate x*360*0.695607 rotate z*90*-1 translate<-18.306,35.8896,17.0232> }
object{Deco[3] scale 0.3 rotate x*360*0.209826 rotate z*90*-1 translate<-18.306,35.6818,17.0232> }
object{Deco[0] scale 0.3 rotate x*360*0.841899 rotate z*90*-1 translate<-18.306,35.5018,17.0232> }
object{Deco[5] scale 0.3 rotate x*360*0.156029 rotate z*90*-1 translate<-18.306,35.2433,17.0232> }
object{Deco[4] scale 0.3 rotate x*360*0.278439 rotate z*90*-1 translate<-18.306,35.0497,17.0232> }
object{Elbow translate z*1.5 rotate -z*90 translate <-18.306,36.6688,17.0232>}
cylinder{<-18.306,30.5089,17.0232>,<-18.306,22.7349,17.0232>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.380847 rotate z*90*-1 translate<-18.306,30.1804,17.0232> }
object{Deco[5] scale 0.3 rotate x*360*0.957881 rotate z*90*-1 translate<-18.306,29.5551,17.0232> }
object{Deco[0] scale 0.3 rotate x*360*0.907017 rotate z*90*-1 translate<-18.306,29.0468,17.0232> }
object{Deco[6] scale 0.3 rotate x*360*0.546602 rotate z*90*-1 translate<-18.306,28.6171,17.0232> }
object{Deco[3] scale 0.3 rotate x*360*0.16484 rotate z*90*-1 translate<-18.306,28.6019,17.0232> }
object{Deco[2] scale 0.3 rotate x*360*0.84261 rotate z*90*-1 translate<-18.306,28.2382,17.0232> }
object{Deco[4] scale 0.3 rotate x*360*0.438388 rotate z*90*-1 translate<-18.306,27.8348,17.0232> }
object{Deco[3] scale 0.3 rotate x*360*0.523256 rotate z*90*-1 translate<-18.306,27.2806,17.0232> }
object{Deco[3] scale 0.3 rotate x*360*0.725117 rotate z*90*-1 translate<-18.306,27.0911,17.0232> }
object{Deco[1] scale 0.3 rotate x*360*0.525122 rotate z*90*-1 translate<-18.306,26.9797,17.0232> }
cylinder{<-18.306,33.5089,17.0232>,<-18.306,30.5089,17.0232>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.0410019 rotate z*90*-1 translate<-18.306,33.3418,17.0232> }
object{Deco[0] scale 0.3 rotate x*360*0.64651 rotate z*90*-1 translate<-18.306,33.2821,17.0232> }
object{Deco[4] scale 0.3 rotate x*360*0.530127 rotate z*90*-1 translate<-18.306,33.1805,17.0232> }
object{Deco[6] scale 0.3 rotate x*360*0.867898 rotate z*90*-1 translate<-18.306,32.936,17.0232> }
object{Deco[2] scale 0.3 rotate x*360*0.916944 rotate z*90*-1 translate<-18.306,32.8059,17.0232> }
object{Deco[1] scale 0.3 rotate x*360*0.982781 rotate z*90*-1 translate<-18.306,32.6479,17.0232> }
object{Deco[3] scale 0.3 rotate x*360*0.0278785 rotate z*90*-1 translate<-18.306,32.4106,17.0232> }
object{Deco[2] scale 0.3 rotate x*360*0.472116 rotate z*90*-1 translate<-18.306,32.2678,17.0232> }
object{Deco[1] scale 0.3 rotate x*360*0.367763 rotate z*90*-1 translate<-18.306,32.0665,17.0232> }
object{Deco[3] scale 0.3 rotate x*360*0.93548 rotate z*90*-1 translate<-18.306,31.9001,17.0232> }
cylinder{<-16.806,21.2349,17.0232>,<-7.82748,21.2349,17.0232>,0.3}
object{Elbow rotate -x*90 translate y*1.5  translate <-16.806,21.2349,17.0232>}
cylinder{<-4.82748,21.2349,17.0232>,<0.123332,21.2349,17.0232>,0.3}
cylinder{<-7.82748,21.2349,17.0232>,<-4.82748,21.2349,17.0232>,0.3}
cylinder{<1.62333,19.7349,17.0232>,<1.62333,12.9939,17.0232>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <1.62333,19.7349,17.0232>}
cylinder{<1.62333,11.4939,18.5232>,<1.62333,11.4939,27.2565>,0.3}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1.5  translate <1.62333,11.4939,18.5232>}
cylinder{<3.12333,11.4939,28.7565>,<11.2338,11.4939,28.7565>,0.3}
object{Elbow scale <1,1,-1> translate -z*1.5  translate <3.12333,11.4939,28.7565>}
cylinder{<12.7338,11.4939,30.2565>,<12.7338,11.4939,33.3266>,0.3}
object{Elbow rotate y*-90 translate -x*1.5  translate <12.7338,11.4939,30.2565>}
cylinder{<11.2338,11.4939,34.8266>,<6.59571,11.4939,34.8266>,0.3}
object{Elbow scale <-1,1,-1> translate -z*1.5  translate <11.2338,11.4939,34.8266>}
cylinder{<5.09571,11.4939,36.3266>,<5.09571,11.4939,43.5>,0.3}
object{Elbow translate x*1.5  translate <5.09571,11.4939,36.3266>}
cylinder{<6.59571,11.4939,45>,<13.9607,11.4939,45>,0.3}
object{Elbow scale <1,1,-1> translate -z*1.5  translate <6.59571,11.4939,45>}
cylinder{<15.4607,11.4939,43.5>,<15.4607,11.4939,38.2333>,0.3}
object{Elbow translate x*1.5 rotate y*180 translate <15.4607,11.4939,43.5>}
cylinder{<16.9607,11.4939,36.7333>,<23.0845,11.4939,36.7333>,0.3}
object{Elbow translate z*1.5  translate <16.9607,11.4939,36.7333>}
cylinder{<24.5845,9.99387,36.7333>,<24.5845,2.16647,36.7333>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <24.5845,9.99387,36.7333>}
cylinder{<24.5845,0.666472,38.2333>,<24.5845,0.666472,42.0564>,0.3}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1.5  translate <24.5845,0.666472,38.2333>}
cylinder{<24.5845,0.666472,45.0564>,<24.5845,0.666472,43.5>,0.3}
cylinder{<24.5845,0.666472,42.0564>,<24.5845,0.666472,45.0564>,0.3}
cylinder{<24.5845,-0.833528,45>,<24.5845,-9.82857,45>,0.3}
object{Elbow rotate y*90 rotate -z*90 translate -z*1.5  translate <24.5845,-0.833528,45>}
cylinder{<24.5845,-12.8286,45>,<24.5845,-21.3808,45>,0.3}
cylinder{<24.5845,-9.82857,45>,<24.5845,-12.8286,45>,0.3}
cylinder{<26.0845,-22.8808,45>,<28.5,-22.8808,45>,0.3}
object{Elbow rotate -x*90 translate y*1.5  translate <26.0845,-22.8808,45>}
cylinder{<30,-24.3808,45>,<30,-27.8754,45>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <30,-24.3808,45>}
cylinder{<30,-30.8754,45>,<30,-35.749,45>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.34432 rotate z*90*-1 translate<30,-30.9959,45> }
object{Deco[5] scale 0.3 rotate x*360*0.162524 rotate z*90*-1 translate<30,-31.3846,45> }
object{Deco[0] scale 0.3 rotate x*360*0.54068 rotate z*90*-1 translate<30,-31.6443,45> }
object{Deco[4] scale 0.3 rotate x*360*0.776278 rotate z*90*-1 translate<30,-31.79,45> }
object{Deco[1] scale 0.3 rotate x*360*0.414366 rotate z*90*-1 translate<30,-32.2065,45> }
object{Deco[0] scale 0.3 rotate x*360*0.179121 rotate z*90*-1 translate<30,-32.334,45> }
object{Deco[4] scale 0.3 rotate x*360*0.0274532 rotate z*90*-1 translate<30,-32.6127,45> }
object{Deco[6] scale 0.3 rotate x*360*0.623853 rotate z*90*-1 translate<30,-32.6375,45> }
object{Deco[3] scale 0.3 rotate x*360*0.691688 rotate z*90*-1 translate<30,-33.0628,45> }
object{Deco[2] scale 0.3 rotate x*360*0.347034 rotate z*90*-1 translate<30,-33.2309,45> }
cylinder{<30,-27.8754,45>,<30,-30.8754,45>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.184717 rotate z*90*-1 translate<30,-28.1365,45> }
object{Deco[5] scale 0.3 rotate x*360*0.753594 rotate z*90*-1 translate<30,-28.3901,45> }
object{Deco[4] scale 0.3 rotate x*360*0.885774 rotate z*90*-1 translate<30,-28.4001,45> }
object{Deco[5] scale 0.3 rotate x*360*0.185385 rotate z*90*-1 translate<30,-28.5528,45> }
object{Deco[4] scale 0.3 rotate x*360*0.773316 rotate z*90*-1 translate<30,-28.7039,45> }
object{Deco[6] scale 0.3 rotate x*360*0.840679 rotate z*90*-1 translate<30,-28.7191,45> }
object{Deco[6] scale 0.3 rotate x*360*0.524966 rotate z*90*-1 translate<30,-28.9647,45> }
object{Deco[2] scale 0.3 rotate x*360*0.924345 rotate z*90*-1 translate<30,-29.087,45> }
object{Deco[0] scale 0.3 rotate x*360*0.203299 rotate z*90*-1 translate<30,-29.3188,45> }
object{Deco[3] scale 0.3 rotate x*360*0.0351559 rotate z*90*-1 translate<30,-29.5228,45> }
cylinder{<28.5,-37.249,45>,<22.1356,-37.249,45>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.668282 scale <-1,1,1> translate<27.926,-37.249,45> }
object{Deco[2] scale 0.3 rotate x*360*0.267319 scale <-1,1,1> translate<27.5044,-37.249,45> }
object{Deco[4] scale 0.3 rotate x*360*0.500632 scale <-1,1,1> translate<27.1994,-37.249,45> }
object{Deco[3] scale 0.3 rotate x*360*0.530488 scale <-1,1,1> translate<26.8797,-37.249,45> }
object{Deco[3] scale 0.3 rotate x*360*0.327041 scale <-1,1,1> translate<26.3598,-37.249,45> }
object{Deco[3] scale 0.3 rotate x*360*0.758369 scale <-1,1,1> translate<26.1232,-37.249,45> }
object{Deco[1] scale 0.3 rotate x*360*0.815657 scale <-1,1,1> translate<25.7548,-37.249,45> }
object{Deco[3] scale 0.3 rotate x*360*0.023 scale <-1,1,1> translate<25.4936,-37.249,45> }
object{Deco[2] scale 0.3 rotate x*360*0.962848 scale <-1,1,1> translate<25.168,-37.249,45> }
object{Deco[5] scale 0.3 rotate x*360*0.666005 scale <-1,1,1> translate<25.0545,-37.249,45> }
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <28.5,-37.249,45>}
cylinder{<20.6356,-38.749,45>,<20.6356,-46.8122,45>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.86243 rotate z*90*-1 translate<20.6356,-39.2962,45> }
object{Deco[5] scale 0.3 rotate x*360*0.676692 rotate z*90*-1 translate<20.6356,-39.8233,45> }
object{Deco[4] scale 0.3 rotate x*360*0.0311887 rotate z*90*-1 translate<20.6356,-40.1262,45> }
object{Deco[0] scale 0.3 rotate x*360*0.679908 rotate z*90*-1 translate<20.6356,-40.2279,45> }
object{Deco[3] scale 0.3 rotate x*360*0.125414 rotate z*90*-1 translate<20.6356,-40.8233,45> }
object{Deco[1] scale 0.3 rotate x*360*0.860863 rotate z*90*-1 translate<20.6356,-40.8353,45> }
object{Deco[5] scale 0.3 rotate x*360*0.478349 rotate z*90*-1 translate<20.6356,-41.0056,45> }
object{Deco[6] scale 0.3 rotate x*360*0.607216 rotate z*90*-1 translate<20.6356,-41.1429,45> }
object{Deco[4] scale 0.3 rotate x*360*0.984095 rotate z*90*-1 translate<20.6356,-41.287,45> }
object{Deco[6] scale 0.3 rotate x*360*0.0765539 rotate z*90*-1 translate<20.6356,-41.5344,45> }
object{Elbow translate x*1.5 rotate x*90 translate <20.6356,-38.749,45>}
cylinder{<20.6356,-49.8122,45>,<20.6356,-56.4982,45>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.686726 rotate z*90*-1 translate<20.6356,-50.131,45> }
object{Deco[3] scale 0.3 rotate x*360*0.184244 rotate z*90*-1 translate<20.6356,-50.7137,45> }
object{Deco[0] scale 0.3 rotate x*360*0.677447 rotate z*90*-1 translate<20.6356,-51.2829,45> }
object{Deco[1] scale 0.3 rotate x*360*0.979459 rotate z*90*-1 translate<20.6356,-51.5383,45> }
object{Deco[5] scale 0.3 rotate x*360*0.0389311 rotate z*90*-1 translate<20.6356,-51.818,45> }
object{Deco[5] scale 0.3 rotate x*360*0.330358 rotate z*90*-1 translate<20.6356,-52.104,45> }
object{Deco[2] scale 0.3 rotate x*360*0.317466 rotate z*90*-1 translate<20.6356,-52.6626,45> }
object{Deco[4] scale 0.3 rotate x*360*0.116505 rotate z*90*-1 translate<20.6356,-53.068,45> }
object{Deco[1] scale 0.3 rotate x*360*0.716806 rotate z*90*-1 translate<20.6356,-53.1032,45> }
object{Deco[3] scale 0.3 rotate x*360*0.792226 rotate z*90*-1 translate<20.6356,-53.1491,45> }
cylinder{<20.6356,-46.8122,45>,<20.6356,-49.8122,45>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.0712848 rotate z*90*-1 translate<20.6356,-47.0195,45> }
object{Deco[1] scale 0.3 rotate x*360*0.968054 rotate z*90*-1 translate<20.6356,-47.17,45> }
object{Deco[5] scale 0.3 rotate x*360*0.21043 rotate z*90*-1 translate<20.6356,-47.3367,45> }
object{Deco[3] scale 0.3 rotate x*360*0.46857 rotate z*90*-1 translate<20.6356,-47.3549,45> }
object{Deco[1] scale 0.3 rotate x*360*0.957376 rotate z*90*-1 translate<20.6356,-47.5435,45> }
object{Deco[0] scale 0.3 rotate x*360*0.75299 rotate z*90*-1 translate<20.6356,-47.7711,45> }
object{Deco[1] scale 0.3 rotate x*360*0.387179 rotate z*90*-1 translate<20.6356,-47.8469,45> }
object{Deco[6] scale 0.3 rotate x*360*0.589735 rotate z*90*-1 translate<20.6356,-47.8474,45> }
object{Deco[6] scale 0.3 rotate x*360*0.487744 rotate z*90*-1 translate<20.6356,-48.0852,45> }
object{Deco[4] scale 0.3 rotate x*360*0.732666 rotate z*90*-1 translate<20.6356,-48.1129,45> }
cylinder{<20.6356,-59.4982,45>,<20.6356,-63.1881,45>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.377165 rotate z*90*-1 translate<20.6356,-59.5603,45> }
object{Deco[5] scale 0.3 rotate x*360*0.177068 rotate z*90*-1 translate<20.6356,-59.6485,45> }
object{Deco[0] scale 0.3 rotate x*360*0.58576 rotate z*90*-1 translate<20.6356,-59.7283,45> }
object{Deco[2] scale 0.3 rotate x*360*0.518167 rotate z*90*-1 translate<20.6356,-60.0202,45> }
object{Deco[3] scale 0.3 rotate x*360*0.359391 rotate z*90*-1 translate<20.6356,-60.2746,45> }
object{Deco[4] scale 0.3 rotate x*360*0.424994 rotate z*90*-1 translate<20.6356,-60.5519,45> }
object{Deco[4] scale 0.3 rotate x*360*0.98256 rotate z*90*-1 translate<20.6356,-60.8114,45> }
object{Deco[1] scale 0.3 rotate x*360*0.701878 rotate z*90*-1 translate<20.6356,-60.9256,45> }
object{Deco[2] scale 0.3 rotate x*360*0.333695 rotate z*90*-1 translate<20.6356,-61.0406,45> }
object{Deco[3] scale 0.3 rotate x*360*0.580635 rotate z*90*-1 translate<20.6356,-61.1482,45> }
cylinder{<20.6356,-56.4982,45>,<20.6356,-59.4982,45>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.814812 rotate z*90*-1 translate<20.6356,-56.6235,45> }
object{Deco[3] scale 0.3 rotate x*360*0.104254 rotate z*90*-1 translate<20.6356,-56.663,45> }
object{Deco[0] scale 0.3 rotate x*360*0.793759 rotate z*90*-1 translate<20.6356,-56.6677,45> }
object{Deco[3] scale 0.3 rotate x*360*0.998706 rotate z*90*-1 translate<20.6356,-56.8585,45> }
object{Deco[4] scale 0.3 rotate x*360*0.520115 rotate z*90*-1 translate<20.6356,-56.9106,45> }
object{Deco[3] scale 0.3 rotate x*360*0.762965 rotate z*90*-1 translate<20.6356,-56.9237,45> }
object{Deco[6] scale 0.3 rotate x*360*0.609581 rotate z*90*-1 translate<20.6356,-56.9569,45> }
object{Deco[4] scale 0.3 rotate x*360*0.462227 rotate z*90*-1 translate<20.6356,-57.1837,45> }
object{Deco[2] scale 0.3 rotate x*360*0.458316 rotate z*90*-1 translate<20.6356,-57.2673,45> }
object{Deco[5] scale 0.3 rotate x*360*0.315768 rotate z*90*-1 translate<20.6356,-57.4556,45> }
cylinder{<20.6356,-66.1881,45>,<20.6356,-73.4288,45>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.173393 rotate z*90*-1 translate<20.6356,-66.7875,45> }
object{Deco[4] scale 0.3 rotate x*360*0.456392 rotate z*90*-1 translate<20.6356,-67.4071,45> }
object{Deco[2] scale 0.3 rotate x*360*0.044268 rotate z*90*-1 translate<20.6356,-67.5538,45> }
object{Deco[5] scale 0.3 rotate x*360*0.555438 rotate z*90*-1 translate<20.6356,-68.1234,45> }
object{Deco[2] scale 0.3 rotate x*360*0.415554 rotate z*90*-1 translate<20.6356,-68.3915,45> }
object{Deco[2] scale 0.3 rotate x*360*0.586987 rotate z*90*-1 translate<20.6356,-69.0123,45> }
object{Deco[2] scale 0.3 rotate x*360*0.0665815 rotate z*90*-1 translate<20.6356,-69.3157,45> }
object{Deco[1] scale 0.3 rotate x*360*0.0768782 rotate z*90*-1 translate<20.6356,-69.6276,45> }
object{Deco[2] scale 0.3 rotate x*360*0.43431 rotate z*90*-1 translate<20.6356,-69.8607,45> }
object{Deco[0] scale 0.3 rotate x*360*0.396774 rotate z*90*-1 translate<20.6356,-70.0861,45> }
cylinder{<20.6356,-63.1881,45>,<20.6356,-66.1881,45>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.327608 rotate z*90*-1 translate<20.6356,-63.1963,45> }
object{Deco[5] scale 0.3 rotate x*360*0.642127 rotate z*90*-1 translate<20.6356,-63.2791,45> }
object{Deco[6] scale 0.3 rotate x*360*0.420354 rotate z*90*-1 translate<20.6356,-63.445,45> }
object{Deco[3] scale 0.3 rotate x*360*0.0159622 rotate z*90*-1 translate<20.6356,-63.6728,45> }
object{Deco[3] scale 0.3 rotate x*360*0.340877 rotate z*90*-1 translate<20.6356,-63.8287,45> }
object{Deco[0] scale 0.3 rotate x*360*0.660493 rotate z*90*-1 translate<20.6356,-64.0106,45> }
object{Deco[1] scale 0.3 rotate x*360*0.47307 rotate z*90*-1 translate<20.6356,-64.1428,45> }
object{Deco[6] scale 0.3 rotate x*360*0.391274 rotate z*90*-1 translate<20.6356,-64.2532,45> }
object{Deco[6] scale 0.3 rotate x*360*0.827717 rotate z*90*-1 translate<20.6356,-64.478,45> }
object{Deco[4] scale 0.3 rotate x*360*0.715374 rotate z*90*-1 translate<20.6356,-64.6163,45> }
cylinder{<20.6356,-76.4288,45>,<20.6356,-78.5,45>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.997531 rotate z*90*-1 translate<20.6356,-76.5406,45> }
object{Deco[1] scale 0.3 rotate x*360*0.960292 rotate z*90*-1 translate<20.6356,-76.6664,45> }
object{Deco[0] scale 0.3 rotate x*360*0.62261 rotate z*90*-1 translate<20.6356,-76.8168,45> }
object{Deco[1] scale 0.3 rotate x*360*0.0316749 rotate z*90*-1 translate<20.6356,-76.948,45> }
object{Deco[2] scale 0.3 rotate x*360*0.472064 rotate z*90*-1 translate<20.6356,-77.1302,45> }
object{Deco[6] scale 0.3 rotate x*360*0.771162 rotate z*90*-1 translate<20.6356,-77.2922,45> }
object{Deco[5] scale 0.3 rotate x*360*0.285892 rotate z*90*-1 translate<20.6356,-77.3501,45> }
object{Deco[5] scale 0.3 rotate x*360*0.0562408 rotate z*90*-1 translate<20.6356,-77.411,45> }
object{Deco[1] scale 0.3 rotate x*360*0.619431 rotate z*90*-1 translate<20.6356,-77.5742,45> }
object{Deco[1] scale 0.3 rotate x*360*0.581001 rotate z*90*-1 translate<20.6356,-77.634,45> }
cylinder{<20.6356,-73.4288,45>,<20.6356,-76.4288,45>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.478119 rotate z*90*-1 translate<20.6356,-73.6556,45> }
object{Deco[0] scale 0.3 rotate x*360*0.652821 rotate z*90*-1 translate<20.6356,-73.8436,45> }
object{Deco[3] scale 0.3 rotate x*360*0.217054 rotate z*90*-1 translate<20.6356,-74.047,45> }
object{Deco[6] scale 0.3 rotate x*360*0.759635 rotate z*90*-1 translate<20.6356,-74.2561,45> }
object{Deco[1] scale 0.3 rotate x*360*0.699592 rotate z*90*-1 translate<20.6356,-74.3873,45> }
object{Deco[2] scale 0.3 rotate x*360*0.350788 rotate z*90*-1 translate<20.6356,-74.5871,45> }
object{Deco[6] scale 0.3 rotate x*360*0.233675 rotate z*90*-1 translate<20.6356,-74.6867,45> }
object{Deco[2] scale 0.3 rotate x*360*0.357452 rotate z*90*-1 translate<20.6356,-74.9402,45> }
object{Deco[4] scale 0.3 rotate x*360*0.586787 rotate z*90*-1 translate<20.6356,-75.0742,45> }
object{Deco[0] scale 0.3 rotate x*360*0.538208 rotate z*90*-1 translate<20.6356,-75.2825,45> }
cylinder{<22.1356,-80,45>,<25.3713,-80,45>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.41144 scale <1,1,1> translate<22.4247,-80,45> }
object{Deco[4] scale 0.3 rotate x*360*0.367511 scale <1,1,1> translate<22.4494,-80,45> }
object{Deco[3] scale 0.3 rotate x*360*0.527669 scale <1,1,1> translate<22.5879,-80,45> }
object{Deco[1] scale 0.3 rotate x*360*0.417737 scale <1,1,1> translate<22.8428,-80,45> }
object{Deco[3] scale 0.3 rotate x*360*0.298271 scale <1,1,1> translate<23.1315,-80,45> }
object{Deco[6] scale 0.3 rotate x*360*0.778753 scale <1,1,1> translate<23.3022,-80,45> }
object{Deco[5] scale 0.3 rotate x*360*0.526789 scale <1,1,1> translate<23.5478,-80,45> }
object{Deco[1] scale 0.3 rotate x*360*0.539825 scale <1,1,1> translate<23.7285,-80,45> }
object{Deco[0] scale 0.3 rotate x*360*0.286582 scale <1,1,1> translate<24.0117,-80,45> }
object{Deco[4] scale 0.3 rotate x*360*0.431927 scale <1,1,1> translate<24.049,-80,45> }
object{Elbow rotate -x*90 translate y*1.5  translate <22.1356,-80,45>}
cylinder{<26.8713,-78.5,45>,<26.8713,-73.87,45>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.753995 rotate z*90*1 translate<26.8713,-78.2321,45> }
object{Deco[6] scale 0.3 rotate x*360*0.173666 rotate z*90*1 translate<26.8713,-77.8633,45> }
object{Deco[5] scale 0.3 rotate x*360*0.617965 rotate z*90*1 translate<26.8713,-77.8485,45> }
object{Deco[6] scale 0.3 rotate x*360*0.86856 rotate z*90*1 translate<26.8713,-77.5772,45> }
object{Deco[2] scale 0.3 rotate x*360*0.963853 rotate z*90*1 translate<26.8713,-77.5523,45> }
object{Deco[0] scale 0.3 rotate x*360*0.341632 rotate z*90*1 translate<26.8713,-77.1368,45> }
object{Deco[4] scale 0.3 rotate x*360*0.790406 rotate z*90*1 translate<26.8713,-76.9933,45> }
object{Deco[3] scale 0.3 rotate x*360*0.803625 rotate z*90*1 translate<26.8713,-76.6849,45> }
object{Deco[1] scale 0.3 rotate x*360*0.687983 rotate z*90*1 translate<26.8713,-76.5657,45> }
object{Deco[5] scale 0.3 rotate x*360*0.774347 rotate z*90*1 translate<26.8713,-76.2648,45> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1.5  translate <26.8713,-78.5,45>}
cylinder{<26.8713,-72.37,43.5>,<26.8713,-72.37,37.7832>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.0750235 rotate y*90*-1 translate<26.8713,-72.37,43.4387> }
object{Deco[4] scale 0.3 rotate x*360*0.886206 rotate y*90*-1 translate<26.8713,-72.37,43.0975> }
object{Deco[6] scale 0.3 rotate x*360*0.641191 rotate y*90*-1 translate<26.8713,-72.37,42.9533> }
object{Deco[0] scale 0.3 rotate x*360*0.519769 rotate y*90*-1 translate<26.8713,-72.37,42.8444> }
object{Deco[0] scale 0.3 rotate x*360*0.235851 rotate y*90*-1 translate<26.8713,-72.37,42.5839> }
object{Deco[5] scale 0.3 rotate x*360*0.652501 rotate y*90*-1 translate<26.8713,-72.37,42.4307> }
object{Deco[4] scale 0.3 rotate x*360*0.18897 rotate y*90*-1 translate<26.8713,-72.37,42.2248> }
object{Deco[6] scale 0.3 rotate x*360*0.758186 rotate y*90*-1 translate<26.8713,-72.37,42.0992> }
object{Deco[3] scale 0.3 rotate x*360*0.458175 rotate y*90*-1 translate<26.8713,-72.37,41.8447> }
object{Deco[0] scale 0.3 rotate x*360*0.310791 rotate y*90*-1 translate<26.8713,-72.37,41.3813> }
object{Elbow rotate y*180 rotate z*90 translate -y*1.5  translate <26.8713,-72.37,43.5>}
cylinder{<26.8713,-73.87,36.2832>,<26.8713,-78.5,36.2832>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.834857 rotate z*90*-1 translate<26.8713,-74.0927,36.2832> }
object{Deco[0] scale 0.3 rotate x*360*0.874768 rotate z*90*-1 translate<26.8713,-74.4062,36.2832> }
object{Deco[4] scale 0.3 rotate x*360*0.210913 rotate z*90*-1 translate<26.8713,-74.5068,36.2832> }
object{Deco[0] scale 0.3 rotate x*360*0.280086 rotate z*90*-1 translate<26.8713,-74.7651,36.2832> }
object{Deco[0] scale 0.3 rotate x*360*0.21557 rotate z*90*-1 translate<26.8713,-75.0796,36.2832> }
object{Deco[4] scale 0.3 rotate x*360*0.446183 rotate z*90*-1 translate<26.8713,-75.3602,36.2832> }
object{Deco[5] scale 0.3 rotate x*360*0.615376 rotate z*90*-1 translate<26.8713,-75.5395,36.2832> }
object{Deco[3] scale 0.3 rotate x*360*0.785514 rotate z*90*-1 translate<26.8713,-75.6802,36.2832> }
object{Deco[4] scale 0.3 rotate x*360*0.584049 rotate z*90*-1 translate<26.8713,-76.0722,36.2832> }
object{Deco[1] scale 0.3 rotate x*360*0.0704266 rotate z*90*-1 translate<26.8713,-76.1913,36.2832> }
object{Elbow translate z*1.5 rotate -z*90 translate <26.8713,-73.87,36.2832>}
cylinder{<25.3713,-80,36.2832>,<18.6971,-80,36.2832>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.596278 scale <-1,1,1> translate<24.9962,-80,36.2832> }
object{Deco[2] scale 0.3 rotate x*360*0.400467 scale <-1,1,1> translate<24.9228,-80,36.2832> }
object{Deco[0] scale 0.3 rotate x*360*0.864811 scale <-1,1,1> translate<24.5535,-80,36.2832> }
object{Deco[5] scale 0.3 rotate x*360*0.893497 scale <-1,1,1> translate<24.141,-80,36.2832> }
object{Deco[5] scale 0.3 rotate x*360*0.273248 scale <-1,1,1> translate<24.1251,-80,36.2832> }
object{Deco[5] scale 0.3 rotate x*360*0.638223 scale <-1,1,1> translate<23.824,-80,36.2832> }
object{Deco[2] scale 0.3 rotate x*360*0.0994231 scale <-1,1,1> translate<23.4591,-80,36.2832> }
object{Deco[3] scale 0.3 rotate x*360*0.0897787 scale <-1,1,1> translate<22.9904,-80,36.2832> }
object{Deco[6] scale 0.3 rotate x*360*0.93676 scale <-1,1,1> translate<22.8393,-80,36.2832> }
object{Deco[1] scale 0.3 rotate x*360*0.661175 scale <-1,1,1> translate<22.4216,-80,36.2832> }
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <25.3713,-80,36.2832>}
cylinder{<17.1971,-78.5,36.2832>,<17.1971,-75.2696,36.2832>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.963657 rotate z*90*1 translate<17.1971,-78.2338,36.2832> }
object{Deco[3] scale 0.3 rotate x*360*0.755662 rotate z*90*1 translate<17.1971,-78.1472,36.2832> }
object{Deco[6] scale 0.3 rotate x*360*0.284404 rotate z*90*1 translate<17.1971,-77.9978,36.2832> }
object{Deco[3] scale 0.3 rotate x*360*0.0146635 rotate z*90*1 translate<17.1971,-77.8626,36.2832> }
object{Deco[4] scale 0.3 rotate x*360*0.222238 rotate z*90*1 translate<17.1971,-77.6269,36.2832> }
object{Deco[0] scale 0.3 rotate x*360*0.831528 rotate z*90*1 translate<17.1971,-77.3621,36.2832> }
object{Deco[5] scale 0.3 rotate x*360*0.578489 rotate z*90*1 translate<17.1971,-77.095,36.2832> }
object{Deco[0] scale 0.3 rotate x*360*0.995565 rotate z*90*1 translate<17.1971,-76.8161,36.2832> }
object{Deco[6] scale 0.3 rotate x*360*0.00739812 rotate z*90*1 translate<17.1971,-76.7956,36.2832> }
object{Deco[4] scale 0.3 rotate x*360*0.590239 rotate z*90*1 translate<17.1971,-76.7435,36.2832> }
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <17.1971,-78.5,36.2832>}
cylinder{<17.1971,-73.7696,37.7832>,<17.1971,-73.7696,43.5>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.806989 rotate y*90*1 translate<17.1971,-73.7696,38.2022> }
object{Deco[0] scale 0.3 rotate x*360*0.935835 rotate y*90*1 translate<17.1971,-73.7696,38.5163> }
object{Deco[5] scale 0.3 rotate x*360*0.541835 rotate y*90*1 translate<17.1971,-73.7696,38.5561> }
object{Deco[1] scale 0.3 rotate x*360*0.626375 rotate y*90*1 translate<17.1971,-73.7696,38.7956> }
object{Deco[3] scale 0.3 rotate x*360*0.39152 rotate y*90*1 translate<17.1971,-73.7696,39.1499> }
object{Deco[6] scale 0.3 rotate x*360*0.582126 rotate y*90*1 translate<17.1971,-73.7696,39.1904> }
object{Deco[6] scale 0.3 rotate x*360*0.630577 rotate y*90*1 translate<17.1971,-73.7696,39.5039> }
object{Deco[6] scale 0.3 rotate x*360*0.405582 rotate y*90*1 translate<17.1971,-73.7696,40.0047> }
object{Deco[5] scale 0.3 rotate x*360*0.0526772 rotate y*90*1 translate<17.1971,-73.7696,40.2183> }
object{Deco[5] scale 0.3 rotate x*360*0.567945 rotate y*90*1 translate<17.1971,-73.7696,40.2941> }
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <17.1971,-73.7696,37.7832>}
cylinder{<17.1971,-75.2696,45>,<17.1971,-78.5,45>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.985113 rotate z*90*-1 translate<17.1971,-75.3465,45> }
object{Deco[3] scale 0.3 rotate x*360*0.278918 rotate z*90*-1 translate<17.1971,-75.5343,45> }
object{Deco[4] scale 0.3 rotate x*360*0.0663182 rotate z*90*-1 translate<17.1971,-75.5636,45> }
object{Deco[2] scale 0.3 rotate x*360*0.438496 rotate z*90*-1 translate<17.1971,-75.5753,45> }
object{Deco[2] scale 0.3 rotate x*360*0.0201093 rotate z*90*-1 translate<17.1971,-75.759,45> }
object{Deco[1] scale 0.3 rotate x*360*0.703172 rotate z*90*-1 translate<17.1971,-75.8762,45> }
object{Deco[4] scale 0.3 rotate x*360*0.230883 rotate z*90*-1 translate<17.1971,-76.0155,45> }
object{Deco[4] scale 0.3 rotate x*360*0.788406 rotate z*90*-1 translate<17.1971,-76.2507,45> }
object{Deco[2] scale 0.3 rotate x*360*0.0979545 rotate z*90*-1 translate<17.1971,-76.2785,45> }
object{Deco[0] scale 0.3 rotate x*360*0.815382 rotate z*90*-1 translate<17.1971,-76.4277,45> }
object{Elbow rotate y*90 rotate -z*90 translate -z*1.5  translate <17.1971,-75.2696,45>}
cylinder{<15.6971,-80,45>,<11.0851,-80,45>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.81191 scale <-1,1,1> translate<15.3432,-80,45> }
object{Deco[3] scale 0.3 rotate x*360*0.893207 scale <-1,1,1> translate<15.1727,-80,45> }
object{Deco[5] scale 0.3 rotate x*360*0.285003 scale <-1,1,1> translate<14.8067,-80,45> }
object{Deco[4] scale 0.3 rotate x*360*0.74495 scale <-1,1,1> translate<14.4218,-80,45> }
object{Deco[4] scale 0.3 rotate x*360*0.968955 scale <-1,1,1> translate<14.2177,-80,45> }
object{Deco[3] scale 0.3 rotate x*360*0.239776 scale <-1,1,1> translate<14.0482,-80,45> }
object{Deco[6] scale 0.3 rotate x*360*0.922138 scale <-1,1,1> translate<13.7642,-80,45> }
object{Deco[3] scale 0.3 rotate x*360*0.526218 scale <-1,1,1> translate<13.4493,-80,45> }
object{Deco[0] scale 0.3 rotate x*360*0.652593 scale <-1,1,1> translate<13.3394,-80,45> }
object{Deco[6] scale 0.3 rotate x*360*0.153477 scale <-1,1,1> translate<13.0357,-80,45> }
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <15.6971,-80,45>}
cylinder{<8.08507,-80,45>,<-0.482549,-80,45>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.921967 scale <-1,1,1> translate<7.77565,-80,45> }
object{Deco[0] scale 0.3 rotate x*360*0.15453 scale <-1,1,1> translate<7.28647,-80,45> }
object{Deco[6] scale 0.3 rotate x*360*0.245289 scale <-1,1,1> translate<7.20926,-80,45> }
object{Deco[0] scale 0.3 rotate x*360*0.0348614 scale <-1,1,1> translate<6.92609,-80,45> }
object{Deco[2] scale 0.3 rotate x*360*0.614376 scale <-1,1,1> translate<6.52879,-80,45> }
object{Deco[1] scale 0.3 rotate x*360*0.359998 scale <-1,1,1> translate<6.10759,-80,45> }
object{Deco[3] scale 0.3 rotate x*360*0.0878732 scale <-1,1,1> translate<5.64761,-80,45> }
object{Deco[4] scale 0.3 rotate x*360*0.943063 scale <-1,1,1> translate<5.00721,-80,45> }
object{Deco[1] scale 0.3 rotate x*360*0.929919 scale <-1,1,1> translate<4.90752,-80,45> }
object{Deco[4] scale 0.3 rotate x*360*0.952046 scale <-1,1,1> translate<4.50402,-80,45> }
cylinder{<11.0851,-80,45>,<8.08507,-80,45>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.324691 scale <-1,1,1> translate<10.8622,-80,45> }
object{Deco[0] scale 0.3 rotate x*360*0.621463 scale <-1,1,1> translate<10.5912,-80,45> }
object{Deco[0] scale 0.3 rotate x*360*0.25563 scale <-1,1,1> translate<10.5911,-80,45> }
object{Deco[6] scale 0.3 rotate x*360*0.144273 scale <-1,1,1> translate<10.4134,-80,45> }
object{Deco[4] scale 0.3 rotate x*360*0.586591 scale <-1,1,1> translate<10.3007,-80,45> }
object{Deco[3] scale 0.3 rotate x*360*0.933137 scale <-1,1,1> translate<10.2923,-80,45> }
object{Deco[2] scale 0.3 rotate x*360*0.000306153 scale <-1,1,1> translate<10.1039,-80,45> }
object{Deco[6] scale 0.3 rotate x*360*0.24185 scale <-1,1,1> translate<10.0362,-80,45> }
object{Deco[1] scale 0.3 rotate x*360*0.0755329 scale <-1,1,1> translate<9.86785,-80,45> }
object{Deco[1] scale 0.3 rotate x*360*0.166136 scale <-1,1,1> translate<9.73663,-80,45> }
cylinder{<-3.48255,-80,45>,<-12.481,-80,45>,0.3}
cylinder{<-0.482549,-80,45>,<-3.48255,-80,45>,0.3}
cylinder{<-13.981,-80,43.5>,<-13.981,-80,38.8677>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.265336 rotate y*90*-1 translate<-13.981,-80,43.1453> }
object{Deco[0] scale 0.3 rotate x*360*0.409428 rotate y*90*-1 translate<-13.981,-80,43.079> }
object{Deco[5] scale 0.3 rotate x*360*0.150344 rotate y*90*-1 translate<-13.981,-80,42.8048> }
object{Deco[5] scale 0.3 rotate x*360*0.874335 rotate y*90*-1 translate<-13.981,-80,42.4483> }
object{Deco[6] scale 0.3 rotate x*360*0.560197 rotate y*90*-1 translate<-13.981,-80,42.3232> }
object{Deco[3] scale 0.3 rotate x*360*0.0827394 rotate y*90*-1 translate<-13.981,-80,42.2416> }
object{Deco[3] scale 0.3 rotate x*360*0.477421 rotate y*90*-1 translate<-13.981,-80,41.8722> }
object{Deco[3] scale 0.3 rotate x*360*0.266308 rotate y*90*-1 translate<-13.981,-80,41.8521> }
object{Deco[1] scale 0.3 rotate x*360*0.332162 rotate y*90*-1 translate<-13.981,-80,41.8439> }
object{Deco[0] scale 0.3 rotate x*360*0.60355 rotate y*90*-1 translate<-13.981,-80,41.7526> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-13.981,-80,43.5>}
cylinder{<-13.981,-80,35.8677>,<-13.981,-80,28.7742>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.93981 rotate y*90*-1 translate<-13.981,-80,35.7509> }
object{Deco[0] scale 0.3 rotate x*360*0.977954 rotate y*90*-1 translate<-13.981,-80,35.4541> }
object{Deco[1] scale 0.3 rotate x*360*0.424948 rotate y*90*-1 translate<-13.981,-80,34.9804> }
object{Deco[2] scale 0.3 rotate x*360*0.0203319 rotate y*90*-1 translate<-13.981,-80,34.8936> }
object{Deco[6] scale 0.3 rotate x*360*0.0634781 rotate y*90*-1 translate<-13.981,-80,34.5788> }
object{Deco[1] scale 0.3 rotate x*360*0.850055 rotate y*90*-1 translate<-13.981,-80,34.1667> }
object{Deco[6] scale 0.3 rotate x*360*0.636536 rotate y*90*-1 translate<-13.981,-80,33.7913> }
object{Deco[4] scale 0.3 rotate x*360*0.827737 rotate y*90*-1 translate<-13.981,-80,33.4011> }
object{Deco[6] scale 0.3 rotate x*360*0.859178 rotate y*90*-1 translate<-13.981,-80,33.1492> }
object{Deco[6] scale 0.3 rotate x*360*0.898624 rotate y*90*-1 translate<-13.981,-80,33.0387> }
cylinder{<-13.981,-80,38.8677>,<-13.981,-80,35.8677>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.588329 rotate y*90*-1 translate<-13.981,-80,38.6539> }
object{Deco[6] scale 0.3 rotate x*360*0.206841 rotate y*90*-1 translate<-13.981,-80,38.6433> }
object{Deco[0] scale 0.3 rotate x*360*0.095811 rotate y*90*-1 translate<-13.981,-80,38.4815> }
object{Deco[4] scale 0.3 rotate x*360*0.751231 rotate y*90*-1 translate<-13.981,-80,38.3349> }
object{Deco[2] scale 0.3 rotate x*360*0.271803 rotate y*90*-1 translate<-13.981,-80,38.1783> }
object{Deco[0] scale 0.3 rotate x*360*0.287474 rotate y*90*-1 translate<-13.981,-80,37.9344> }
object{Deco[4] scale 0.3 rotate x*360*0.867264 rotate y*90*-1 translate<-13.981,-80,37.8788> }
object{Deco[0] scale 0.3 rotate x*360*0.607975 rotate y*90*-1 translate<-13.981,-80,37.6924> }
object{Deco[0] scale 0.3 rotate x*360*0.134797 rotate y*90*-1 translate<-13.981,-80,37.5577> }
object{Deco[2] scale 0.3 rotate x*360*0.484304 rotate y*90*-1 translate<-13.981,-80,37.541> }
cylinder{<-13.981,-80,25.7742>,<-13.981,-80,17.6849>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.326489 rotate y*90*-1 translate<-13.981,-80,25.7383> }
object{Deco[2] scale 0.3 rotate x*360*0.52744 rotate y*90*-1 translate<-13.981,-80,25.5549> }
object{Deco[2] scale 0.3 rotate x*360*0.465173 rotate y*90*-1 translate<-13.981,-80,25.0111> }
object{Deco[2] scale 0.3 rotate x*360*0.517006 rotate y*90*-1 translate<-13.981,-80,24.9814> }
object{Deco[6] scale 0.3 rotate x*360*0.0260475 rotate y*90*-1 translate<-13.981,-80,24.6681> }
object{Deco[3] scale 0.3 rotate x*360*0.861086 rotate y*90*-1 translate<-13.981,-80,24.3505> }
object{Deco[6] scale 0.3 rotate x*360*0.874935 rotate y*90*-1 translate<-13.981,-80,24.322> }
object{Deco[6] scale 0.3 rotate x*360*0.078171 rotate y*90*-1 translate<-13.981,-80,24.0482> }
object{Deco[2] scale 0.3 rotate x*360*0.713992 rotate y*90*-1 translate<-13.981,-80,23.7166> }
object{Deco[1] scale 0.3 rotate x*360*0.563224 rotate y*90*-1 translate<-13.981,-80,23.4874> }
cylinder{<-13.981,-80,28.7742>,<-13.981,-80,25.7742>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.0398553 rotate y*90*-1 translate<-13.981,-80,28.5428> }
object{Deco[4] scale 0.3 rotate x*360*0.35417 rotate y*90*-1 translate<-13.981,-80,28.2747> }
object{Deco[0] scale 0.3 rotate x*360*0.57959 rotate y*90*-1 translate<-13.981,-80,28.0498> }
object{Deco[4] scale 0.3 rotate x*360*0.455709 rotate y*90*-1 translate<-13.981,-80,27.8349> }
object{Deco[2] scale 0.3 rotate x*360*0.473108 rotate y*90*-1 translate<-13.981,-80,27.741> }
object{Deco[2] scale 0.3 rotate x*360*0.996463 rotate y*90*-1 translate<-13.981,-80,27.4798> }
object{Deco[5] scale 0.3 rotate x*360*0.25297 rotate y*90*-1 translate<-13.981,-80,27.3802> }
object{Deco[0] scale 0.3 rotate x*360*0.0550224 rotate y*90*-1 translate<-13.981,-80,27.1334> }
object{Deco[2] scale 0.3 rotate x*360*0.275001 rotate y*90*-1 translate<-13.981,-80,26.953> }
object{Deco[0] scale 0.3 rotate x*360*0.339088 rotate y*90*-1 translate<-13.981,-80,26.8693> }
cylinder{<-13.981,-80,14.6849>,<-13.981,-80,7.0719>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.671164 rotate y*90*-1 translate<-13.981,-80,14.1738> }
object{Deco[6] scale 0.3 rotate x*360*0.997944 rotate y*90*-1 translate<-13.981,-80,13.584> }
object{Deco[4] scale 0.3 rotate x*360*0.893616 rotate y*90*-1 translate<-13.981,-80,13.3309> }
object{Deco[5] scale 0.3 rotate x*360*0.673668 rotate y*90*-1 translate<-13.981,-80,12.9529> }
object{Deco[1] scale 0.3 rotate x*360*0.228762 rotate y*90*-1 translate<-13.981,-80,12.7814> }
object{Deco[1] scale 0.3 rotate x*360*0.871784 rotate y*90*-1 translate<-13.981,-80,12.4006> }
object{Deco[1] scale 0.3 rotate x*360*0.397848 rotate y*90*-1 translate<-13.981,-80,11.7949> }
object{Deco[4] scale 0.3 rotate x*360*0.244838 rotate y*90*-1 translate<-13.981,-80,11.6606> }
object{Deco[1] scale 0.3 rotate x*360*0.798384 rotate y*90*-1 translate<-13.981,-80,11.6539> }
object{Deco[5] scale 0.3 rotate x*360*0.909051 rotate y*90*-1 translate<-13.981,-80,11.2894> }
cylinder{<-13.981,-80,17.6849>,<-13.981,-80,14.6849>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.205775 rotate y*90*-1 translate<-13.981,-80,17.5776> }
object{Deco[3] scale 0.3 rotate x*360*0.90272 rotate y*90*-1 translate<-13.981,-80,17.3925> }
object{Deco[2] scale 0.3 rotate x*360*0.319574 rotate y*90*-1 translate<-13.981,-80,17.2871> }
object{Deco[1] scale 0.3 rotate x*360*0.261639 rotate y*90*-1 translate<-13.981,-80,17.2781> }
object{Deco[5] scale 0.3 rotate x*360*0.0216611 rotate y*90*-1 translate<-13.981,-80,17.2686> }
object{Deco[0] scale 0.3 rotate x*360*0.722886 rotate y*90*-1 translate<-13.981,-80,17.2447> }
object{Deco[1] scale 0.3 rotate x*360*0.597451 rotate y*90*-1 translate<-13.981,-80,17.0062> }
object{Deco[0] scale 0.3 rotate x*360*0.0732231 rotate y*90*-1 translate<-13.981,-80,16.7605> }
object{Deco[6] scale 0.3 rotate x*360*0.687834 rotate y*90*-1 translate<-13.981,-80,16.6195> }
object{Deco[6] scale 0.3 rotate x*360*0.0147837 rotate y*90*-1 translate<-13.981,-80,16.5014> }
cylinder{<-13.981,-80,4.0719>,<-13.981,-80,-4.1228>,0.3}
cylinder{<-13.981,-80,7.0719>,<-13.981,-80,4.0719>,0.3}
cylinder{<-13.981,-80,-7.1228>,<-13.981,-80,-14.7346>,0.3}
cylinder{<-13.981,-80,-4.1228>,<-13.981,-80,-7.1228>,0.3}
cylinder{<-15.481,-80,-16.2346>,<-21.1284,-80,-16.2346>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.386653 scale <-1,1,1> translate<-15.8472,-80,-16.2346> }
object{Deco[3] scale 0.3 rotate x*360*0.0146701 scale <-1,1,1> translate<-16.0385,-80,-16.2346> }
object{Deco[5] scale 0.3 rotate x*360*0.552538 scale <-1,1,1> translate<-16.4966,-80,-16.2346> }
object{Deco[1] scale 0.3 rotate x*360*0.219649 scale <-1,1,1> translate<-16.5444,-80,-16.2346> }
object{Deco[3] scale 0.3 rotate x*360*0.601261 scale <-1,1,1> translate<-16.7361,-80,-16.2346> }
object{Deco[5] scale 0.3 rotate x*360*0.458423 scale <-1,1,1> translate<-17.1619,-80,-16.2346> }
object{Deco[2] scale 0.3 rotate x*360*0.652045 scale <-1,1,1> translate<-17.5543,-80,-16.2346> }
object{Deco[0] scale 0.3 rotate x*360*0.55324 scale <-1,1,1> translate<-17.7924,-80,-16.2346> }
object{Deco[6] scale 0.3 rotate x*360*0.663257 scale <-1,1,1> translate<-18.2922,-80,-16.2346> }
object{Deco[3] scale 0.3 rotate x*360*0.0498659 scale <-1,1,1> translate<-18.3597,-80,-16.2346> }
object{Elbow scale <-1,1,1> translate z*1.5  translate <-15.481,-80,-16.2346>}
cylinder{<-22.6284,-78.5,-16.2346>,<-22.6284,-74.9202,-16.2346>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.264878 rotate z*90*1 translate<-22.6284,-78.4495,-16.2346> }
object{Deco[6] scale 0.3 rotate x*360*0.0186192 rotate z*90*1 translate<-22.6284,-78.3571,-16.2346> }
object{Deco[4] scale 0.3 rotate x*360*0.83953 rotate z*90*1 translate<-22.6284,-78.0429,-16.2346> }
object{Deco[5] scale 0.3 rotate x*360*0.775777 rotate z*90*1 translate<-22.6284,-78.0136,-16.2346> }
object{Deco[5] scale 0.3 rotate x*360*0.172099 rotate z*90*1 translate<-22.6284,-77.9346,-16.2346> }
object{Deco[2] scale 0.3 rotate x*360*0.0983966 rotate z*90*1 translate<-22.6284,-77.733,-16.2346> }
object{Deco[3] scale 0.3 rotate x*360*0.0811464 rotate z*90*1 translate<-22.6284,-77.6785,-16.2346> }
object{Deco[4] scale 0.3 rotate x*360*0.172019 rotate z*90*1 translate<-22.6284,-77.4233,-16.2346> }
object{Deco[4] scale 0.3 rotate x*360*0.391092 rotate z*90*1 translate<-22.6284,-77.1004,-16.2346> }
object{Deco[6] scale 0.3 rotate x*360*0.431918 rotate z*90*1 translate<-22.6284,-76.8704,-16.2346> }
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-22.6284,-78.5,-16.2346>}
cylinder{<-22.6284,-73.4202,-17.7346>,<-22.6284,-73.4202,-24.1948>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.377586 rotate y*90*-1 translate<-22.6284,-73.4202,-17.9103> }
object{Deco[1] scale 0.3 rotate x*360*0.893736 rotate y*90*-1 translate<-22.6284,-73.4202,-17.9661> }
object{Deco[6] scale 0.3 rotate x*360*0.469838 rotate y*90*-1 translate<-22.6284,-73.4202,-18.136> }
object{Deco[2] scale 0.3 rotate x*360*0.0457612 rotate y*90*-1 translate<-22.6284,-73.4202,-18.4187> }
object{Deco[2] scale 0.3 rotate x*360*0.558429 rotate y*90*-1 translate<-22.6284,-73.4202,-18.8772> }
object{Deco[6] scale 0.3 rotate x*360*0.76153 rotate y*90*-1 translate<-22.6284,-73.4202,-18.957> }
object{Deco[3] scale 0.3 rotate x*360*0.290652 rotate y*90*-1 translate<-22.6284,-73.4202,-19.4645> }
object{Deco[6] scale 0.3 rotate x*360*0.279817 rotate y*90*-1 translate<-22.6284,-73.4202,-19.5794> }
object{Deco[4] scale 0.3 rotate x*360*0.552782 rotate y*90*-1 translate<-22.6284,-73.4202,-19.8402> }
object{Deco[0] scale 0.3 rotate x*360*0.041125 rotate y*90*-1 translate<-22.6284,-73.4202,-20.2335> }
object{Elbow rotate y*180 rotate z*90 translate -y*1.5  translate <-22.6284,-73.4202,-17.7346>}
cylinder{<-22.6284,-73.4202,-27.1948>,<-22.6284,-73.4202,-34.0443>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.0967249 rotate y*90*-1 translate<-22.6284,-73.4202,-27.3583> }
object{Deco[2] scale 0.3 rotate x*360*0.942143 rotate y*90*-1 translate<-22.6284,-73.4202,-27.5709> }
object{Deco[0] scale 0.3 rotate x*360*0.158184 rotate y*90*-1 translate<-22.6284,-73.4202,-27.865> }
object{Deco[6] scale 0.3 rotate x*360*0.397156 rotate y*90*-1 translate<-22.6284,-73.4202,-27.972> }
object{Deco[2] scale 0.3 rotate x*360*0.997434 rotate y*90*-1 translate<-22.6284,-73.4202,-28.5666> }
object{Deco[3] scale 0.3 rotate x*360*0.0917444 rotate y*90*-1 translate<-22.6284,-73.4202,-29.0664> }
object{Deco[6] scale 0.3 rotate x*360*0.157392 rotate y*90*-1 translate<-22.6284,-73.4202,-29.3677> }
object{Deco[0] scale 0.3 rotate x*360*0.195359 rotate y*90*-1 translate<-22.6284,-73.4202,-29.6643> }
object{Deco[4] scale 0.3 rotate x*360*0.219492 rotate y*90*-1 translate<-22.6284,-73.4202,-30.2023> }
object{Deco[4] scale 0.3 rotate x*360*0.956954 rotate y*90*-1 translate<-22.6284,-73.4202,-30.3126> }
cylinder{<-22.6284,-73.4202,-24.1948>,<-22.6284,-73.4202,-27.1948>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.803087 rotate y*90*-1 translate<-22.6284,-73.4202,-24.3334> }
object{Deco[5] scale 0.3 rotate x*360*0.136765 rotate y*90*-1 translate<-22.6284,-73.4202,-24.5087> }
object{Deco[6] scale 0.3 rotate x*360*0.888357 rotate y*90*-1 translate<-22.6284,-73.4202,-24.6555> }
object{Deco[5] scale 0.3 rotate x*360*0.27079 rotate y*90*-1 translate<-22.6284,-73.4202,-24.8997> }
object{Deco[1] scale 0.3 rotate x*360*0.622024 rotate y*90*-1 translate<-22.6284,-73.4202,-24.9187> }
object{Deco[6] scale 0.3 rotate x*360*0.872133 rotate y*90*-1 translate<-22.6284,-73.4202,-25.0324> }
object{Deco[3] scale 0.3 rotate x*360*0.672393 rotate y*90*-1 translate<-22.6284,-73.4202,-25.0618> }
object{Deco[6] scale 0.3 rotate x*360*0.857871 rotate y*90*-1 translate<-22.6284,-73.4202,-25.325> }
object{Deco[3] scale 0.3 rotate x*360*0.927797 rotate y*90*-1 translate<-22.6284,-73.4202,-25.4257> }
object{Deco[6] scale 0.3 rotate x*360*0.463802 rotate y*90*-1 translate<-22.6284,-73.4202,-25.6346> }
cylinder{<-22.6284,-73.4202,-37.0443>,<-22.6284,-73.4202,-41.3163>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.318779 rotate y*90*-1 translate<-22.6284,-73.4202,-37.4105> }
object{Deco[6] scale 0.3 rotate x*360*0.172891 rotate y*90*-1 translate<-22.6284,-73.4202,-37.5986> }
object{Deco[0] scale 0.3 rotate x*360*0.676907 rotate y*90*-1 translate<-22.6284,-73.4202,-37.8288> }
object{Deco[1] scale 0.3 rotate x*360*0.0899255 rotate y*90*-1 translate<-22.6284,-73.4202,-37.8933> }
object{Deco[1] scale 0.3 rotate x*360*0.530172 rotate y*90*-1 translate<-22.6284,-73.4202,-38.2654> }
object{Deco[2] scale 0.3 rotate x*360*0.424825 rotate y*90*-1 translate<-22.6284,-73.4202,-38.3789> }
object{Deco[5] scale 0.3 rotate x*360*0.0905472 rotate y*90*-1 translate<-22.6284,-73.4202,-38.4183> }
object{Deco[2] scale 0.3 rotate x*360*0.0255574 rotate y*90*-1 translate<-22.6284,-73.4202,-38.5212> }
object{Deco[2] scale 0.3 rotate x*360*0.451621 rotate y*90*-1 translate<-22.6284,-73.4202,-38.5799> }
object{Deco[6] scale 0.3 rotate x*360*0.842591 rotate y*90*-1 translate<-22.6284,-73.4202,-38.6105> }
cylinder{<-22.6284,-73.4202,-34.0443>,<-22.6284,-73.4202,-37.0443>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.935006 rotate y*90*-1 translate<-22.6284,-73.4202,-34.2055> }
object{Deco[5] scale 0.3 rotate x*360*0.304532 rotate y*90*-1 translate<-22.6284,-73.4202,-34.3059> }
object{Deco[5] scale 0.3 rotate x*360*0.580194 rotate y*90*-1 translate<-22.6284,-73.4202,-34.5368> }
object{Deco[5] scale 0.3 rotate x*360*0.726795 rotate y*90*-1 translate<-22.6284,-73.4202,-34.7946> }
object{Deco[1] scale 0.3 rotate x*360*0.160792 rotate y*90*-1 translate<-22.6284,-73.4202,-35.0204> }
object{Deco[2] scale 0.3 rotate x*360*0.717785 rotate y*90*-1 translate<-22.6284,-73.4202,-35.2351> }
object{Deco[2] scale 0.3 rotate x*360*0.618867 rotate y*90*-1 translate<-22.6284,-73.4202,-35.5042> }
object{Deco[2] scale 0.3 rotate x*360*0.176954 rotate y*90*-1 translate<-22.6284,-73.4202,-35.5236> }
object{Deco[0] scale 0.3 rotate x*360*0.450719 rotate y*90*-1 translate<-22.6284,-73.4202,-35.6132> }
object{Deco[2] scale 0.3 rotate x*360*0.960537 rotate y*90*-1 translate<-22.6284,-73.4202,-35.858> }
cylinder{<-22.6284,-73.4202,-44.3163>,<-22.6284,-73.4202,-43.5>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.401769 rotate y*90*-1 translate<-22.6284,-73.4202,-44.3841> }
object{Deco[0] scale 0.3 rotate x*360*0.457399 rotate y*90*-1 translate<-22.6284,-73.4202,-44.4536> }
object{Deco[4] scale 0.3 rotate x*360*0.995075 rotate y*90*-1 translate<-22.6284,-73.4202,-44.4553> }
object{Deco[5] scale 0.3 rotate x*360*0.794834 rotate y*90*-1 translate<-22.6284,-73.4202,-44.5125> }
object{Deco[1] scale 0.3 rotate x*360*0.802977 rotate y*90*-1 translate<-22.6284,-73.4202,-44.5651> }
object{Deco[3] scale 0.3 rotate x*360*0.358969 rotate y*90*-1 translate<-22.6284,-73.4202,-44.6172> }
object{Deco[3] scale 0.3 rotate x*360*0.410177 rotate y*90*-1 translate<-22.6284,-73.4202,-44.641> }
object{Deco[2] scale 0.3 rotate x*360*0.588512 rotate y*90*-1 translate<-22.6284,-73.4202,-44.6834> }
object{Deco[5] scale 0.3 rotate x*360*0.0710588 rotate y*90*-1 translate<-22.6284,-73.4202,-44.7135> }
object{Deco[5] scale 0.3 rotate x*360*0.980853 rotate y*90*-1 translate<-22.6284,-73.4202,-44.7724> }
cylinder{<-22.6284,-73.4202,-41.3163>,<-22.6284,-73.4202,-44.3163>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.120013 rotate y*90*-1 translate<-22.6284,-73.4202,-41.4272> }
object{Deco[3] scale 0.3 rotate x*360*0.311585 rotate y*90*-1 translate<-22.6284,-73.4202,-41.6005> }
object{Deco[0] scale 0.3 rotate x*360*0.900824 rotate y*90*-1 translate<-22.6284,-73.4202,-41.6851> }
object{Deco[5] scale 0.3 rotate x*360*0.0766396 rotate y*90*-1 translate<-22.6284,-73.4202,-41.7711> }
object{Deco[6] scale 0.3 rotate x*360*0.329488 rotate y*90*-1 translate<-22.6284,-73.4202,-41.814> }
object{Deco[3] scale 0.3 rotate x*360*0.708416 rotate y*90*-1 translate<-22.6284,-73.4202,-41.8234> }
object{Deco[5] scale 0.3 rotate x*360*0.877711 rotate y*90*-1 translate<-22.6284,-73.4202,-41.9704> }
object{Deco[6] scale 0.3 rotate x*360*0.505011 rotate y*90*-1 translate<-22.6284,-73.4202,-42.0273> }
object{Deco[6] scale 0.3 rotate x*360*0.382459 rotate y*90*-1 translate<-22.6284,-73.4202,-42.182> }
object{Deco[4] scale 0.3 rotate x*360*0.0133729 rotate y*90*-1 translate<-22.6284,-73.4202,-42.425> }
cylinder{<-21.1284,-73.4202,-45>,<-12.6527,-73.4202,-45>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.323114 scale <1,1,1> translate<-20.579,-73.4202,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.22312 scale <1,1,1> translate<-20.0893,-73.4202,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.944462 scale <1,1,1> translate<-19.6865,-73.4202,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.884399 scale <1,1,1> translate<-19.0742,-73.4202,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.250216 scale <1,1,1> translate<-18.9634,-73.4202,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.641901 scale <1,1,1> translate<-18.2578,-73.4202,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.488596 scale <1,1,1> translate<-17.716,-73.4202,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.735049 scale <1,1,1> translate<-17.6692,-73.4202,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.481062 scale <1,1,1> translate<-17.0321,-73.4202,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.843616 scale <1,1,1> translate<-16.9438,-73.4202,-45> }
object{Elbow translate z*1.5  translate <-21.1284,-73.4202,-45>}
cylinder{<-11.1527,-71.9202,-45>,<-11.1527,-64.5298,-45>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.529366 rotate z*90*1 translate<-11.1527,-71.3967,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.227891 rotate z*90*1 translate<-11.1527,-71.1044,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.635669 rotate z*90*1 translate<-11.1527,-70.8951,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.667817 rotate z*90*1 translate<-11.1527,-70.4614,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.169533 rotate z*90*1 translate<-11.1527,-70.0014,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.417173 rotate z*90*1 translate<-11.1527,-69.9183,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.249933 rotate z*90*1 translate<-11.1527,-69.7791,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.827115 rotate z*90*1 translate<-11.1527,-69.631,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.312218 rotate z*90*1 translate<-11.1527,-69.0563,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.900182 rotate z*90*1 translate<-11.1527,-68.824,-45> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1.5  translate <-11.1527,-71.9202,-45>}
cylinder{<-11.1527,-61.5298,-45>,<-11.1527,-54.8257,-45>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.635133 rotate z*90*1 translate<-11.1527,-61.3553,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.711029 rotate z*90*1 translate<-11.1527,-60.877,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.471392 rotate z*90*1 translate<-11.1527,-60.3171,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.354019 rotate z*90*1 translate<-11.1527,-60.2999,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.927161 rotate z*90*1 translate<-11.1527,-59.9869,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.0267844 rotate z*90*1 translate<-11.1527,-59.8718,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.523906 rotate z*90*1 translate<-11.1527,-59.7849,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.0501286 rotate z*90*1 translate<-11.1527,-59.3359,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.877758 rotate z*90*1 translate<-11.1527,-59.0875,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.126797 rotate z*90*1 translate<-11.1527,-58.4851,-45> }
cylinder{<-11.1527,-64.5298,-45>,<-11.1527,-61.5298,-45>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.430225 rotate z*90*1 translate<-11.1527,-64.3425,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.389382 rotate z*90*1 translate<-11.1527,-64.2297,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.226901 rotate z*90*1 translate<-11.1527,-64.0827,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.681705 rotate z*90*1 translate<-11.1527,-63.8498,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.129038 rotate z*90*1 translate<-11.1527,-63.8188,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.844788 rotate z*90*1 translate<-11.1527,-63.7333,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.492312 rotate z*90*1 translate<-11.1527,-63.704,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.486553 rotate z*90*1 translate<-11.1527,-63.4839,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.254286 rotate z*90*1 translate<-11.1527,-63.3301,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.898925 rotate z*90*1 translate<-11.1527,-63.1515,-45> }
cylinder{<-11.1527,-53.3257,-43.5>,<-11.1527,-53.3257,-35.7281>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.922765 rotate y*90*1 translate<-11.1527,-53.3257,-43.4296> }
object{Deco[4] scale 0.3 rotate x*360*0.906489 rotate y*90*1 translate<-11.1527,-53.3257,-42.8929> }
object{Deco[5] scale 0.3 rotate x*360*0.759385 rotate y*90*1 translate<-11.1527,-53.3257,-42.1986> }
object{Deco[4] scale 0.3 rotate x*360*0.922581 rotate y*90*1 translate<-11.1527,-53.3257,-41.611> }
object{Deco[2] scale 0.3 rotate x*360*0.79577 rotate y*90*1 translate<-11.1527,-53.3257,-41.3695> }
object{Deco[0] scale 0.3 rotate x*360*0.0286468 rotate y*90*1 translate<-11.1527,-53.3257,-41.1148> }
object{Deco[0] scale 0.3 rotate x*360*0.128801 rotate y*90*1 translate<-11.1527,-53.3257,-40.4751> }
object{Deco[2] scale 0.3 rotate x*360*0.175758 rotate y*90*1 translate<-11.1527,-53.3257,-40.4111> }
object{Deco[3] scale 0.3 rotate x*360*0.181115 rotate y*90*1 translate<-11.1527,-53.3257,-39.9729> }
object{Deco[1] scale 0.3 rotate x*360*0.387511 rotate y*90*1 translate<-11.1527,-53.3257,-39.9253> }
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-11.1527,-53.3257,-43.5>}
cylinder{<-9.65274,-53.3257,-34.2281>,<-3.61854,-53.3257,-34.2281>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.991371 scale <1,1,1> translate<-9.34263,-53.3257,-34.2281> }
object{Deco[4] scale 0.3 rotate x*360*0.946771 scale <1,1,1> translate<-9.061,-53.3257,-34.2281> }
object{Deco[2] scale 0.3 rotate x*360*0.680138 scale <1,1,1> translate<-8.64599,-53.3257,-34.2281> }
object{Deco[0] scale 0.3 rotate x*360*0.645777 scale <1,1,1> translate<-8.47407,-53.3257,-34.2281> }
object{Deco[6] scale 0.3 rotate x*360*0.543893 scale <1,1,1> translate<-8.25855,-53.3257,-34.2281> }
object{Deco[5] scale 0.3 rotate x*360*0.880349 scale <1,1,1> translate<-7.91703,-53.3257,-34.2281> }
object{Deco[6] scale 0.3 rotate x*360*0.815744 scale <1,1,1> translate<-7.66383,-53.3257,-34.2281> }
object{Deco[0] scale 0.3 rotate x*360*0.337777 scale <1,1,1> translate<-7.15099,-53.3257,-34.2281> }
object{Deco[5] scale 0.3 rotate x*360*0.989827 scale <1,1,1> translate<-7.07555,-53.3257,-34.2281> }
object{Deco[6] scale 0.3 rotate x*360*0.217174 scale <1,1,1> translate<-6.8693,-53.3257,-34.2281> }
object{Elbow scale <1,1,-1> translate -z*1.5  translate <-9.65274,-53.3257,-34.2281>}
cylinder{<-2.11854,-53.3257,-32.7281>,<-2.11854,-53.3257,-28.6117>,0.3}
object{Elbow rotate y*-90 translate -x*1.5  translate <-2.11854,-53.3257,-32.7281>}
cylinder{<-0.618536,-53.3257,-27.1117>,<5.47334,-53.3257,-27.1117>,0.3}
object{Elbow scale <1,1,-1> translate -z*1.5  translate <-0.618536,-53.3257,-27.1117>}
cylinder{<6.97334,-51.8257,-27.1117>,<6.97334,-44.6821,-27.1117>,0.3}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1.5  translate <6.97334,-51.8257,-27.1117>}
cylinder{<8.47334,-43.1821,-27.1117>,<11.9178,-43.1821,-27.1117>,0.3}
object{Elbow translate z*1.5 rotate y*90 rotate x*-90 translate -x*1.5 translate -y*1.5  translate <8.47334,-43.1821,-27.1117>}
cylinder{<13.4178,-43.1821,-28.6117>,<13.4178,-43.1821,-32.2974>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.745297 rotate y*90*-1 translate<13.4178,-43.1821,-28.8777> }
object{Deco[6] scale 0.3 rotate x*360*0.528517 rotate y*90*-1 translate<13.4178,-43.1821,-28.9863> }
object{Deco[6] scale 0.3 rotate x*360*0.057095 rotate y*90*-1 translate<13.4178,-43.1821,-29.043> }
object{Deco[0] scale 0.3 rotate x*360*0.394081 rotate y*90*-1 translate<13.4178,-43.1821,-29.292> }
object{Deco[4] scale 0.3 rotate x*360*0.286677 rotate y*90*-1 translate<13.4178,-43.1821,-29.3615> }
object{Deco[6] scale 0.3 rotate x*360*0.239457 rotate y*90*-1 translate<13.4178,-43.1821,-29.4735> }
object{Deco[0] scale 0.3 rotate x*360*0.192248 rotate y*90*-1 translate<13.4178,-43.1821,-29.6402> }
object{Deco[4] scale 0.3 rotate x*360*0.092631 rotate y*90*-1 translate<13.4178,-43.1821,-29.8426> }
object{Deco[3] scale 0.3 rotate x*360*0.344575 rotate y*90*-1 translate<13.4178,-43.1821,-29.884> }
object{Deco[2] scale 0.3 rotate x*360*0.805357 rotate y*90*-1 translate<13.4178,-43.1821,-30.0131> }
object{Elbow translate x*1.5 rotate y*180 translate <13.4178,-43.1821,-28.6117>}
cylinder{<13.4178,-43.1821,-35.2974>,<13.4178,-43.1821,-42.801>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.304704 rotate y*90*-1 translate<13.4178,-43.1821,-35.6694> }
object{Deco[5] scale 0.3 rotate x*360*0.494871 rotate y*90*-1 translate<13.4178,-43.1821,-35.6757> }
object{Deco[3] scale 0.3 rotate x*360*0.523979 rotate y*90*-1 translate<13.4178,-43.1821,-35.8347> }
object{Deco[2] scale 0.3 rotate x*360*0.798074 rotate y*90*-1 translate<13.4178,-43.1821,-35.9459> }
object{Deco[2] scale 0.3 rotate x*360*0.85344 rotate y*90*-1 translate<13.4178,-43.1821,-36.5246> }
object{Deco[4] scale 0.3 rotate x*360*0.7604 rotate y*90*-1 translate<13.4178,-43.1821,-36.7668> }
object{Deco[2] scale 0.3 rotate x*360*0.129046 rotate y*90*-1 translate<13.4178,-43.1821,-37.1335> }
object{Deco[4] scale 0.3 rotate x*360*0.809748 rotate y*90*-1 translate<13.4178,-43.1821,-37.282> }
object{Deco[6] scale 0.3 rotate x*360*0.662131 rotate y*90*-1 translate<13.4178,-43.1821,-37.8288> }
object{Deco[4] scale 0.3 rotate x*360*0.610721 rotate y*90*-1 translate<13.4178,-43.1821,-38.3542> }
cylinder{<13.4178,-43.1821,-32.2974>,<13.4178,-43.1821,-35.2974>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.0207878 rotate y*90*-1 translate<13.4178,-43.1821,-32.5173> }
object{Deco[2] scale 0.3 rotate x*360*0.330133 rotate y*90*-1 translate<13.4178,-43.1821,-32.5444> }
object{Deco[3] scale 0.3 rotate x*360*0.0624993 rotate y*90*-1 translate<13.4178,-43.1821,-32.7155> }
object{Deco[5] scale 0.3 rotate x*360*0.88954 rotate y*90*-1 translate<13.4178,-43.1821,-32.9228> }
object{Deco[4] scale 0.3 rotate x*360*0.174171 rotate y*90*-1 translate<13.4178,-43.1821,-33.1316> }
object{Deco[4] scale 0.3 rotate x*360*0.418282 rotate y*90*-1 translate<13.4178,-43.1821,-33.2689> }
object{Deco[5] scale 0.3 rotate x*360*0.957989 rotate y*90*-1 translate<13.4178,-43.1821,-33.379> }
object{Deco[0] scale 0.3 rotate x*360*0.180113 rotate y*90*-1 translate<13.4178,-43.1821,-33.568> }
object{Deco[1] scale 0.3 rotate x*360*0.70403 rotate y*90*-1 translate<13.4178,-43.1821,-33.6058> }
object{Deco[4] scale 0.3 rotate x*360*0.0951217 rotate y*90*-1 translate<13.4178,-43.1821,-33.7084> }
cylinder{<13.4178,-43.1821,-45.801>,<13.4178,-43.1821,-43.5>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.946519 rotate y*90*-1 translate<13.4178,-43.1821,-46.0051> }
object{Deco[2] scale 0.3 rotate x*360*0.494083 rotate y*90*-1 translate<13.4178,-43.1821,-46.0948> }
object{Deco[3] scale 0.3 rotate x*360*0.750201 rotate y*90*-1 translate<13.4178,-43.1821,-46.1088> }
object{Deco[5] scale 0.3 rotate x*360*0.875264 rotate y*90*-1 translate<13.4178,-43.1821,-46.2311> }
object{Deco[3] scale 0.3 rotate x*360*0.510929 rotate y*90*-1 translate<13.4178,-43.1821,-46.2351> }
object{Deco[0] scale 0.3 rotate x*360*0.369749 rotate y*90*-1 translate<13.4178,-43.1821,-46.2407> }
object{Deco[3] scale 0.3 rotate x*360*0.623089 rotate y*90*-1 translate<13.4178,-43.1821,-46.4327> }
object{Deco[4] scale 0.3 rotate x*360*0.0671986 rotate y*90*-1 translate<13.4178,-43.1821,-46.5352> }
object{Deco[4] scale 0.3 rotate x*360*0.475082 rotate y*90*-1 translate<13.4178,-43.1821,-46.5969> }
object{Deco[0] scale 0.3 rotate x*360*0.688801 rotate y*90*-1 translate<13.4178,-43.1821,-46.7256> }
cylinder{<13.4178,-43.1821,-42.801>,<13.4178,-43.1821,-45.801>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.341382 rotate y*90*-1 translate<13.4178,-43.1821,-42.8919> }
object{Deco[4] scale 0.3 rotate x*360*0.193126 rotate y*90*-1 translate<13.4178,-43.1821,-42.9722> }
object{Deco[2] scale 0.3 rotate x*360*0.330157 rotate y*90*-1 translate<13.4178,-43.1821,-43.0131> }
object{Deco[1] scale 0.3 rotate x*360*0.116196 rotate y*90*-1 translate<13.4178,-43.1821,-43.0486> }
object{Deco[1] scale 0.3 rotate x*360*0.441253 rotate y*90*-1 translate<13.4178,-43.1821,-43.1413> }
object{Deco[0] scale 0.3 rotate x*360*0.0946109 rotate y*90*-1 translate<13.4178,-43.1821,-43.3671> }
object{Deco[6] scale 0.3 rotate x*360*0.673143 rotate y*90*-1 translate<13.4178,-43.1821,-43.4458> }
object{Deco[2] scale 0.3 rotate x*360*0.525469 rotate y*90*-1 translate<13.4178,-43.1821,-43.6777> }
object{Deco[6] scale 0.3 rotate x*360*0.134048 rotate y*90*-1 translate<13.4178,-43.1821,-43.9411> }
object{Deco[6] scale 0.3 rotate x*360*0.673265 rotate y*90*-1 translate<13.4178,-43.1821,-44.1019> }
cylinder{<11.9178,-43.1821,-45>,<3.17083,-43.1821,-45>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.272635 scale <-1,1,1> translate<11.2623,-43.1821,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.887856 scale <-1,1,1> translate<11.219,-43.1821,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.990206 scale <-1,1,1> translate<11.0385,-43.1821,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.837435 scale <-1,1,1> translate<10.6986,-43.1821,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.861054 scale <-1,1,1> translate<10.195,-43.1821,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.762598 scale <-1,1,1> translate<9.79599,-43.1821,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.747478 scale <-1,1,1> translate<9.55524,-43.1821,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.201752 scale <-1,1,1> translate<9.26203,-43.1821,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.412756 scale <-1,1,1> translate<8.7242,-43.1821,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.760255 scale <-1,1,1> translate<7.96471,-43.1821,-45> }
object{Elbow scale <-1,1,1> translate z*1.5  translate <11.9178,-43.1821,-45>}
cylinder{<0.17083,-43.1821,-45>,<-4.83434,-43.1821,-45>,0.3}
cylinder{<3.17083,-43.1821,-45>,<0.17083,-43.1821,-45>,0.3}
cylinder{<-6.33434,-41.6821,-45>,<-6.33434,-34.536,-45>,0.3}
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-6.33434,-41.6821,-45>}
cylinder{<-7.83434,-33.036,-45>,<-15.1042,-33.036,-45>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate -z*90  translate <-7.83434,-33.036,-45>}
cylinder{<-18.1042,-33.036,-45>,<-25.8486,-33.036,-45>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.373678 scale <-1,1,1> translate<-18.1108,-33.036,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.959373 scale <-1,1,1> translate<-18.5047,-33.036,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.206495 scale <-1,1,1> translate<-18.9433,-33.036,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.436762 scale <-1,1,1> translate<-18.9715,-33.036,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.962174 scale <-1,1,1> translate<-19.5767,-33.036,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.828383 scale <-1,1,1> translate<-19.9286,-33.036,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.553578 scale <-1,1,1> translate<-20.3885,-33.036,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.538989 scale <-1,1,1> translate<-20.5925,-33.036,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.640638 scale <-1,1,1> translate<-20.6219,-33.036,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.566218 scale <-1,1,1> translate<-21.1138,-33.036,-45> }
cylinder{<-15.1042,-33.036,-45>,<-18.1042,-33.036,-45>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.7413 scale <-1,1,1> translate<-15.3688,-33.036,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.420979 scale <-1,1,1> translate<-15.4292,-33.036,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.587606 scale <-1,1,1> translate<-15.5699,-33.036,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.889106 scale <-1,1,1> translate<-15.8078,-33.036,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.368632 scale <-1,1,1> translate<-16.0386,-33.036,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.978634 scale <-1,1,1> translate<-16.2801,-33.036,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.143606 scale <-1,1,1> translate<-16.3094,-33.036,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.8785 scale <-1,1,1> translate<-16.3643,-33.036,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.0454457 scale <-1,1,1> translate<-16.4434,-33.036,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.399991 scale <-1,1,1> translate<-16.5572,-33.036,-45> }
cylinder{<-27.3486,-34.536,-45>,<-27.3486,-37.8746,-45>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.929756 rotate z*90*-1 translate<-27.3486,-34.8364,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.889485 rotate z*90*-1 translate<-27.3486,-35.1381,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.130441 rotate z*90*-1 translate<-27.3486,-35.1438,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.225313 rotate z*90*-1 translate<-27.3486,-35.2503,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.274582 rotate z*90*-1 translate<-27.3486,-35.314,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.775278 rotate z*90*-1 translate<-27.3486,-35.494,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.937301 rotate z*90*-1 translate<-27.3486,-35.7416,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.346035 rotate z*90*-1 translate<-27.3486,-35.8984,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.648242 rotate z*90*-1 translate<-27.3486,-35.918,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.945783 rotate z*90*-1 translate<-27.3486,-36.2114,-45> }
object{Elbow translate x*1.5 rotate x*90 translate <-27.3486,-34.536,-45>}
cylinder{<-27.3486,-40.8746,-45>,<-27.3486,-46.8164,-45>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.709468 rotate z*90*-1 translate<-27.3486,-40.8939,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.760157 rotate z*90*-1 translate<-27.3486,-41.4108,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.143081 rotate z*90*-1 translate<-27.3486,-41.4505,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.917153 rotate z*90*-1 translate<-27.3486,-41.8157,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.217909 rotate z*90*-1 translate<-27.3486,-42.3375,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.604961 rotate z*90*-1 translate<-27.3486,-42.8302,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.853586 rotate z*90*-1 translate<-27.3486,-43.2781,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.71524 rotate z*90*-1 translate<-27.3486,-43.3483,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.215249 rotate z*90*-1 translate<-27.3486,-43.8605,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.314913 rotate z*90*-1 translate<-27.3486,-44.2186,-45> }
cylinder{<-27.3486,-37.8746,-45>,<-27.3486,-40.8746,-45>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.824321 rotate z*90*-1 translate<-27.3486,-38.0346,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.380057 rotate z*90*-1 translate<-27.3486,-38.0559,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.488274 rotate z*90*-1 translate<-27.3486,-38.0992,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.934636 rotate z*90*-1 translate<-27.3486,-38.2899,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.19599 rotate z*90*-1 translate<-27.3486,-38.4516,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.955071 rotate z*90*-1 translate<-27.3486,-38.6915,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.618479 rotate z*90*-1 translate<-27.3486,-38.9638,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.57835 rotate z*90*-1 translate<-27.3486,-39.146,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.355704 rotate z*90*-1 translate<-27.3486,-39.3795,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.554718 rotate z*90*-1 translate<-27.3486,-39.48,-45> }
cylinder{<-25.8486,-48.3164,-45>,<-17.2299,-48.3164,-45>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.534361 scale <1,1,1> translate<-25.7808,-48.3164,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.529774 scale <1,1,1> translate<-25.0068,-48.3164,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.721813 scale <1,1,1> translate<-24.8405,-48.3164,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.607481 scale <1,1,1> translate<-24.6127,-48.3164,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.981832 scale <1,1,1> translate<-24.4196,-48.3164,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.114914 scale <1,1,1> translate<-23.9982,-48.3164,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.158907 scale <1,1,1> translate<-23.9634,-48.3164,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.265591 scale <1,1,1> translate<-23.3931,-48.3164,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.155473 scale <1,1,1> translate<-23.2227,-48.3164,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.579342 scale <1,1,1> translate<-22.7186,-48.3164,-45> }
object{Elbow rotate -x*90 translate y*1.5  translate <-25.8486,-48.3164,-45>}
cylinder{<-15.7299,-49.8164,-45>,<-15.7299,-53.2985,-45>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.801953 rotate z*90*-1 translate<-15.7299,-49.9967,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.65992 rotate z*90*-1 translate<-15.7299,-50.2998,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.648991 rotate z*90*-1 translate<-15.7299,-50.4058,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.108654 rotate z*90*-1 translate<-15.7299,-50.7183,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.286559 rotate z*90*-1 translate<-15.7299,-50.9492,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.116227 rotate z*90*-1 translate<-15.7299,-51.0059,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.0144955 rotate z*90*-1 translate<-15.7299,-51.1196,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.508017 rotate z*90*-1 translate<-15.7299,-51.364,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.712039 rotate z*90*-1 translate<-15.7299,-51.6741,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.573029 rotate z*90*-1 translate<-15.7299,-51.9538,-45> }
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <-15.7299,-49.8164,-45>}
cylinder{<-15.7299,-54.7985,-43.5>,<-15.7299,-54.7985,-37.9136>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.105626 rotate y*90*1 translate<-15.7299,-54.7985,-43.4818> }
object{Deco[4] scale 0.3 rotate x*360*0.654635 rotate y*90*1 translate<-15.7299,-54.7985,-43.0151> }
object{Deco[5] scale 0.3 rotate x*360*0.76814 rotate y*90*1 translate<-15.7299,-54.7985,-42.9709> }
object{Deco[0] scale 0.3 rotate x*360*0.970833 rotate y*90*1 translate<-15.7299,-54.7985,-42.796> }
object{Deco[6] scale 0.3 rotate x*360*0.596924 rotate y*90*1 translate<-15.7299,-54.7985,-42.5306> }
object{Deco[0] scale 0.3 rotate x*360*0.792671 rotate y*90*1 translate<-15.7299,-54.7985,-42.4791> }
object{Deco[2] scale 0.3 rotate x*360*0.92578 rotate y*90*1 translate<-15.7299,-54.7985,-42.375> }
object{Deco[1] scale 0.3 rotate x*360*0.774671 rotate y*90*1 translate<-15.7299,-54.7985,-42.2569> }
object{Deco[3] scale 0.3 rotate x*360*0.599515 rotate y*90*1 translate<-15.7299,-54.7985,-41.9499> }
object{Deco[4] scale 0.3 rotate x*360*0.586832 rotate y*90*1 translate<-15.7299,-54.7985,-41.8572> }
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1.5  translate <-15.7299,-54.7985,-43.5>}
cylinder{<-15.7299,-54.7985,-34.9136>,<-15.7299,-54.7985,-27.0404>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.533147 rotate y*90*1 translate<-15.7299,-54.7985,-34.725> }
object{Deco[5] scale 0.3 rotate x*360*0.94983 rotate y*90*1 translate<-15.7299,-54.7985,-34.0407> }
object{Deco[3] scale 0.3 rotate x*360*0.548866 rotate y*90*1 translate<-15.7299,-54.7985,-33.4402> }
object{Deco[4] scale 0.3 rotate x*360*0.828171 rotate y*90*1 translate<-15.7299,-54.7985,-32.8953> }
object{Deco[2] scale 0.3 rotate x*360*0.756557 rotate y*90*1 translate<-15.7299,-54.7985,-32.3442> }
object{Deco[6] scale 0.3 rotate x*360*0.750079 rotate y*90*1 translate<-15.7299,-54.7985,-32.18> }
object{Deco[0] scale 0.3 rotate x*360*0.540098 rotate y*90*1 translate<-15.7299,-54.7985,-31.7398> }
object{Deco[2] scale 0.3 rotate x*360*0.104005 rotate y*90*1 translate<-15.7299,-54.7985,-31.053> }
object{Deco[0] scale 0.3 rotate x*360*0.63614 rotate y*90*1 translate<-15.7299,-54.7985,-30.6459> }
object{Deco[0] scale 0.3 rotate x*360*0.740257 rotate y*90*1 translate<-15.7299,-54.7985,-30.3586> }
cylinder{<-15.7299,-54.7985,-37.9136>,<-15.7299,-54.7985,-34.9136>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.0464015 rotate y*90*1 translate<-15.7299,-54.7985,-37.8987> }
object{Deco[3] scale 0.3 rotate x*360*0.605029 rotate y*90*1 translate<-15.7299,-54.7985,-37.6638> }
object{Deco[2] scale 0.3 rotate x*360*0.102935 rotate y*90*1 translate<-15.7299,-54.7985,-37.4595> }
object{Deco[6] scale 0.3 rotate x*360*0.714834 rotate y*90*1 translate<-15.7299,-54.7985,-37.2144> }
object{Deco[1] scale 0.3 rotate x*360*0.879839 rotate y*90*1 translate<-15.7299,-54.7985,-36.9996> }
object{Deco[1] scale 0.3 rotate x*360*0.191692 rotate y*90*1 translate<-15.7299,-54.7985,-36.8802> }
object{Deco[1] scale 0.3 rotate x*360*0.0130684 rotate y*90*1 translate<-15.7299,-54.7985,-36.7267> }
object{Deco[1] scale 0.3 rotate x*360*0.131142 rotate y*90*1 translate<-15.7299,-54.7985,-36.4952> }
object{Deco[5] scale 0.3 rotate x*360*0.865966 rotate y*90*1 translate<-15.7299,-54.7985,-36.4952> }
object{Deco[3] scale 0.3 rotate x*360*0.353524 rotate y*90*1 translate<-15.7299,-54.7985,-36.2265> }
cylinder{<-15.7299,-56.2985,-25.5404>,<-15.7299,-65.1841,-25.5404>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.194095 rotate z*90*-1 translate<-15.7299,-56.6414,-25.5404> }
object{Deco[0] scale 0.3 rotate x*360*0.855444 rotate z*90*-1 translate<-15.7299,-57.3735,-25.5404> }
object{Deco[5] scale 0.3 rotate x*360*0.53084 rotate z*90*-1 translate<-15.7299,-57.6842,-25.5404> }
object{Deco[3] scale 0.3 rotate x*360*0.760027 rotate z*90*-1 translate<-15.7299,-57.9703,-25.5404> }
object{Deco[5] scale 0.3 rotate x*360*0.527366 rotate z*90*-1 translate<-15.7299,-58.1086,-25.5404> }
object{Deco[1] scale 0.3 rotate x*360*0.319556 rotate z*90*-1 translate<-15.7299,-58.6957,-25.5404> }
object{Deco[5] scale 0.3 rotate x*360*0.213301 rotate z*90*-1 translate<-15.7299,-58.8202,-25.5404> }
object{Deco[2] scale 0.3 rotate x*360*0.253604 rotate z*90*-1 translate<-15.7299,-59.0653,-25.5404> }
object{Deco[0] scale 0.3 rotate x*360*0.00456575 rotate z*90*-1 translate<-15.7299,-59.622,-25.5404> }
object{Deco[6] scale 0.3 rotate x*360*0.806199 rotate z*90*-1 translate<-15.7299,-60.0355,-25.5404> }
object{Elbow rotate y*90 rotate -z*90 translate -z*1.5  translate <-15.7299,-56.2985,-25.5404>}
cylinder{<-15.7299,-66.6841,-27.0404>,<-15.7299,-66.6841,-30.5481>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.531594 rotate y*90*-1 translate<-15.7299,-66.6841,-27.2573> }
object{Deco[2] scale 0.3 rotate x*360*0.150121 rotate y*90*-1 translate<-15.7299,-66.6841,-27.3853> }
object{Deco[6] scale 0.3 rotate x*360*0.915587 rotate y*90*-1 translate<-15.7299,-66.6841,-27.5658> }
object{Deco[2] scale 0.3 rotate x*360*0.530063 rotate y*90*-1 translate<-15.7299,-66.6841,-27.7993> }
object{Deco[0] scale 0.3 rotate x*360*0.652738 rotate y*90*-1 translate<-15.7299,-66.6841,-28.0052> }
object{Deco[2] scale 0.3 rotate x*360*0.647581 rotate y*90*-1 translate<-15.7299,-66.6841,-28.2292> }
object{Deco[0] scale 0.3 rotate x*360*0.420745 rotate y*90*-1 translate<-15.7299,-66.6841,-28.4617> }
object{Deco[3] scale 0.3 rotate x*360*0.161227 rotate y*90*-1 translate<-15.7299,-66.6841,-28.5632> }
object{Deco[6] scale 0.3 rotate x*360*0.00890466 rotate y*90*-1 translate<-15.7299,-66.6841,-28.5741> }
object{Deco[1] scale 0.3 rotate x*360*0.479438 rotate y*90*-1 translate<-15.7299,-66.6841,-28.609> }
object{Elbow translate z*1.5 rotate z*90 rotate -x*90 translate <-15.7299,-66.6841,-27.0404>}
cylinder{<-15.7299,-68.1841,-32.0481>,<-15.7299,-75.1154,-32.0481>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.899596 rotate z*90*-1 translate<-15.7299,-68.2838,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.384936 rotate z*90*-1 translate<-15.7299,-68.4257,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.190646 rotate z*90*-1 translate<-15.7299,-68.9744,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.736246 rotate z*90*-1 translate<-15.7299,-68.9945,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.461888 rotate z*90*-1 translate<-15.7299,-69.5597,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.91344 rotate z*90*-1 translate<-15.7299,-69.9582,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.23098 rotate z*90*-1 translate<-15.7299,-70.2011,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.0164872 rotate z*90*-1 translate<-15.7299,-70.369,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.418899 rotate z*90*-1 translate<-15.7299,-70.8662,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.046457 rotate z*90*-1 translate<-15.7299,-71.0413,-32.0481> }
object{Elbow translate z*1.5 rotate -z*90 translate <-15.7299,-68.1841,-32.0481>}
cylinder{<-14.2299,-76.6154,-32.0481>,<-10.4817,-76.6154,-32.0481>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.154424 scale <1,1,1> translate<-13.9456,-76.6154,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.908886 scale <1,1,1> translate<-13.6608,-76.6154,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.430116 scale <1,1,1> translate<-13.4424,-76.6154,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.168004 scale <1,1,1> translate<-13.287,-76.6154,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.426374 scale <1,1,1> translate<-13.1163,-76.6154,-32.0481> }
object{Deco[4] scale 0.3 rotate x*360*0.557927 scale <1,1,1> translate<-12.9075,-76.6154,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.630213 scale <1,1,1> translate<-12.8265,-76.6154,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.309984 scale <1,1,1> translate<-12.4949,-76.6154,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.290092 scale <1,1,1> translate<-12.2059,-76.6154,-32.0481> }
object{Deco[0] scale 0.3 rotate x*360*0.1336 scale <1,1,1> translate<-12.0028,-76.6154,-32.0481> }
object{Elbow rotate -x*90 translate y*1.5  translate <-14.2299,-76.6154,-32.0481>}
cylinder{<-8.98171,-78.1154,-32.0481>,<-8.98171,-78.5,-32.0481>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <-8.98171,-78.1154,-32.0481>}
cylinder{<-10.4817,-80,-32.0481>,<-16.2041,-80,-32.0481>,0.3}
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <-10.4817,-80,-32.0481>}
cylinder{<-19.2041,-80,-32.0481>,<-23.8146,-80,-32.0481>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.9852 scale <-1,1,1> translate<-19.5532,-80,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.410212 scale <-1,1,1> translate<-19.8826,-80,-32.0481> }
object{Deco[4] scale 0.3 rotate x*360*0.924409 scale <-1,1,1> translate<-20.0473,-80,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.567654 scale <-1,1,1> translate<-20.2472,-80,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.415813 scale <-1,1,1> translate<-20.4614,-80,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.717052 scale <-1,1,1> translate<-20.5307,-80,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.246369 scale <-1,1,1> translate<-20.828,-80,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.720231 scale <-1,1,1> translate<-20.8881,-80,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.599575 scale <-1,1,1> translate<-20.8999,-80,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.171362 scale <-1,1,1> translate<-21.1635,-80,-32.0481> }
cylinder{<-16.2041,-80,-32.0481>,<-19.2041,-80,-32.0481>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.397376 scale <-1,1,1> translate<-16.4299,-80,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.952609 scale <-1,1,1> translate<-16.5624,-80,-32.0481> }
object{Deco[3] scale 0.3 rotate x*360*0.266108 scale <-1,1,1> translate<-16.7811,-80,-32.0481> }
object{Deco[3] scale 0.3 rotate x*360*0.119314 scale <-1,1,1> translate<-16.851,-80,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.049459 scale <-1,1,1> translate<-16.8608,-80,-32.0481> }
object{Deco[0] scale 0.3 rotate x*360*0.61534 scale <-1,1,1> translate<-16.9321,-80,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.683005 scale <-1,1,1> translate<-16.9577,-80,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.050623 scale <-1,1,1> translate<-17.1798,-80,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.831838 scale <-1,1,1> translate<-17.2389,-80,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.668495 scale <-1,1,1> translate<-17.2768,-80,-32.0481> }
cylinder{<-25.3146,-78.5,-32.0481>,<-25.3146,-70.5753,-32.0481>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.850356 rotate z*90*1 translate<-25.3146,-78.473,-32.0481> }
object{Deco[4] scale 0.3 rotate x*360*0.719522 rotate z*90*1 translate<-25.3146,-78.111,-32.0481> }
object{Deco[3] scale 0.3 rotate x*360*0.120206 rotate z*90*1 translate<-25.3146,-77.5453,-32.0481> }
object{Deco[3] scale 0.3 rotate x*360*0.142522 rotate z*90*1 translate<-25.3146,-76.9092,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.248833 rotate z*90*1 translate<-25.3146,-76.2235,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.00552571 rotate z*90*1 translate<-25.3146,-75.7062,-32.0481> }
object{Deco[4] scale 0.3 rotate x*360*0.100798 rotate z*90*1 translate<-25.3146,-75.6462,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.640677 rotate z*90*1 translate<-25.3146,-75.1795,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.393189 rotate z*90*1 translate<-25.3146,-74.4875,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.616148 rotate z*90*1 translate<-25.3146,-74.4326,-32.0481> }
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-25.3146,-78.5,-32.0481>}
cylinder{<-25.3146,-67.5753,-32.0481>,<-25.3146,-61.2529,-32.0481>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.795228 rotate z*90*1 translate<-25.3146,-67.1641,-32.0481> }
object{Deco[0] scale 0.3 rotate x*360*0.475758 rotate z*90*1 translate<-25.3146,-66.7414,-32.0481> }
object{Deco[3] scale 0.3 rotate x*360*0.0654453 rotate z*90*1 translate<-25.3146,-66.4909,-32.0481> }
object{Deco[0] scale 0.3 rotate x*360*0.758914 rotate z*90*1 translate<-25.3146,-66.1037,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.718251 rotate z*90*1 translate<-25.3146,-65.7785,-32.0481> }
object{Deco[3] scale 0.3 rotate x*360*0.144816 rotate z*90*1 translate<-25.3146,-65.5788,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.5008 rotate z*90*1 translate<-25.3146,-65.2839,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.780105 rotate z*90*1 translate<-25.3146,-65.1904,-32.0481> }
object{Deco[4] scale 0.3 rotate x*360*0.545949 rotate z*90*1 translate<-25.3146,-64.8774,-32.0481> }
object{Deco[4] scale 0.3 rotate x*360*0.0446105 rotate z*90*1 translate<-25.3146,-64.55,-32.0481> }
cylinder{<-25.3146,-70.5753,-32.0481>,<-25.3146,-67.5753,-32.0481>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.796027 rotate z*90*1 translate<-25.3146,-70.5183,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.799394 rotate z*90*1 translate<-25.3146,-70.4736,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.530744 rotate z*90*1 translate<-25.3146,-70.4562,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.809181 rotate z*90*1 translate<-25.3146,-70.2518,-32.0481> }
object{Deco[0] scale 0.3 rotate x*360*0.677099 rotate z*90*1 translate<-25.3146,-70.1654,-32.0481> }
object{Deco[4] scale 0.3 rotate x*360*0.106401 rotate z*90*1 translate<-25.3146,-70.0011,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.322308 rotate z*90*1 translate<-25.3146,-69.8577,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.490798 rotate z*90*1 translate<-25.3146,-69.7218,-32.0481> }
object{Deco[3] scale 0.3 rotate x*360*0.601743 rotate z*90*1 translate<-25.3146,-69.4889,-32.0481> }
object{Deco[0] scale 0.3 rotate x*360*0.0119123 rotate z*90*1 translate<-25.3146,-69.449,-32.0481> }
cylinder{<-25.3146,-58.2529,-32.0481>,<-25.3146,-53.1251,-32.0481>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.229603 rotate z*90*1 translate<-25.3146,-58.0407,-32.0481> }
object{Deco[3] scale 0.3 rotate x*360*0.762139 rotate z*90*1 translate<-25.3146,-57.8197,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.987702 rotate z*90*1 translate<-25.3146,-57.494,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.547395 rotate z*90*1 translate<-25.3146,-57.2387,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.351307 rotate z*90*1 translate<-25.3146,-57.2344,-32.0481> }
object{Deco[0] scale 0.3 rotate x*360*0.654374 rotate z*90*1 translate<-25.3146,-57.1049,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.840855 rotate z*90*1 translate<-25.3146,-56.7202,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.0913307 rotate z*90*1 translate<-25.3146,-56.5021,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.281504 rotate z*90*1 translate<-25.3146,-56.3175,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.747994 rotate z*90*1 translate<-25.3146,-55.9048,-32.0481> }
cylinder{<-25.3146,-61.2529,-32.0481>,<-25.3146,-58.2529,-32.0481>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.672409 rotate z*90*1 translate<-25.3146,-61.1654,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.959911 rotate z*90*1 translate<-25.3146,-61.0787,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.635365 rotate z*90*1 translate<-25.3146,-60.9493,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.575425 rotate z*90*1 translate<-25.3146,-60.815,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.0239828 rotate z*90*1 translate<-25.3146,-60.7373,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.8638 rotate z*90*1 translate<-25.3146,-60.5773,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.556811 rotate z*90*1 translate<-25.3146,-60.4549,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.662549 rotate z*90*1 translate<-25.3146,-60.2316,-32.0481> }
object{Deco[5] scale 0.3 rotate x*360*0.44034 rotate z*90*1 translate<-25.3146,-60.1067,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.0106905 rotate z*90*1 translate<-25.3146,-60.0501,-32.0481> }
cylinder{<-26.8146,-51.6251,-32.0481>,<-28.5,-51.6251,-32.0481>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.961994 scale <-1,1,1> translate<-26.9576,-51.6251,-32.0481> }
object{Deco[0] scale 0.3 rotate x*360*0.703931 scale <-1,1,1> translate<-27.1054,-51.6251,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.341401 scale <-1,1,1> translate<-27.1412,-51.6251,-32.0481> }
object{Deco[2] scale 0.3 rotate x*360*0.660201 scale <-1,1,1> translate<-27.2422,-51.6251,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.0623624 scale <-1,1,1> translate<-27.2436,-51.6251,-32.0481> }
object{Deco[6] scale 0.3 rotate x*360*0.0812495 scale <-1,1,1> translate<-27.3602,-51.6251,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.959849 scale <-1,1,1> translate<-27.4986,-51.6251,-32.0481> }
object{Deco[1] scale 0.3 rotate x*360*0.532843 scale <-1,1,1> translate<-27.5916,-51.6251,-32.0481> }
object{Deco[4] scale 0.3 rotate x*360*0.00664155 scale <-1,1,1> translate<-27.665,-51.6251,-32.0481> }
object{Deco[4] scale 0.3 rotate x*360*0.726188 scale <-1,1,1> translate<-27.7067,-51.6251,-32.0481> }
object{Elbow translate x*1.5 rotate x*90 rotate -z*90  translate <-26.8146,-51.6251,-32.0481>}
cylinder{<-30,-51.6251,-33.5481>,<-30,-51.6251,-38.0336>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.0659949 rotate y*90*-1 translate<-30,-51.6251,-33.929> }
object{Deco[2] scale 0.3 rotate x*360*0.366673 rotate y*90*-1 translate<-30,-51.6251,-33.9293> }
object{Deco[3] scale 0.3 rotate x*360*0.0500924 rotate y*90*-1 translate<-30,-51.6251,-34.0763> }
object{Deco[5] scale 0.3 rotate x*360*0.832622 rotate y*90*-1 translate<-30,-51.6251,-34.3543> }
object{Deco[0] scale 0.3 rotate x*360*0.716016 rotate y*90*-1 translate<-30,-51.6251,-34.3994> }
object{Deco[2] scale 0.3 rotate x*360*0.479399 rotate y*90*-1 translate<-30,-51.6251,-34.7611> }
object{Deco[1] scale 0.3 rotate x*360*0.289081 rotate y*90*-1 translate<-30,-51.6251,-34.8768> }
object{Deco[5] scale 0.3 rotate x*360*0.982372 rotate y*90*-1 translate<-30,-51.6251,-35.2275> }
object{Deco[0] scale 0.3 rotate x*360*0.254943 rotate y*90*-1 translate<-30,-51.6251,-35.4952> }
object{Deco[1] scale 0.3 rotate x*360*0.313318 rotate y*90*-1 translate<-30,-51.6251,-35.604> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-30,-51.6251,-33.5481>}
cylinder{<-30,-51.6251,-41.0336>,<-30,-51.6251,-43.5>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.367102 rotate y*90*-1 translate<-30,-51.6251,-41.0488> }
object{Deco[0] scale 0.3 rotate x*360*0.186783 rotate y*90*-1 translate<-30,-51.6251,-41.2273> }
object{Deco[5] scale 0.3 rotate x*360*0.760341 rotate y*90*-1 translate<-30,-51.6251,-41.4073> }
object{Deco[5] scale 0.3 rotate x*360*0.32645 rotate y*90*-1 translate<-30,-51.6251,-41.6134> }
object{Deco[2] scale 0.3 rotate x*360*0.467242 rotate y*90*-1 translate<-30,-51.6251,-41.7911> }
object{Deco[1] scale 0.3 rotate x*360*0.435567 rotate y*90*-1 translate<-30,-51.6251,-41.9919> }
object{Deco[3] scale 0.3 rotate x*360*0.814892 rotate y*90*-1 translate<-30,-51.6251,-42.0014> }
object{Deco[1] scale 0.3 rotate x*360*0.367948 rotate y*90*-1 translate<-30,-51.6251,-42.1936> }
object{Deco[6] scale 0.3 rotate x*360*0.485905 rotate y*90*-1 translate<-30,-51.6251,-42.221> }
object{Deco[1] scale 0.3 rotate x*360*0.131822 rotate y*90*-1 translate<-30,-51.6251,-42.2828> }
cylinder{<-30,-51.6251,-38.0336>,<-30,-51.6251,-41.0336>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.345536 rotate y*90*-1 translate<-30,-51.6251,-38.251> }
object{Deco[6] scale 0.3 rotate x*360*0.424888 rotate y*90*-1 translate<-30,-51.6251,-38.2846> }
object{Deco[6] scale 0.3 rotate x*360*0.898584 rotate y*90*-1 translate<-30,-51.6251,-38.2948> }
object{Deco[1] scale 0.3 rotate x*360*0.0559246 rotate y*90*-1 translate<-30,-51.6251,-38.3349> }
object{Deco[4] scale 0.3 rotate x*360*0.774615 rotate y*90*-1 translate<-30,-51.6251,-38.5183> }
object{Deco[4] scale 0.3 rotate x*360*0.670558 rotate y*90*-1 translate<-30,-51.6251,-38.7325> }
object{Deco[1] scale 0.3 rotate x*360*0.273885 rotate y*90*-1 translate<-30,-51.6251,-38.7444> }
object{Deco[5] scale 0.3 rotate x*360*0.45366 rotate y*90*-1 translate<-30,-51.6251,-38.8897> }
object{Deco[3] scale 0.3 rotate x*360*0.772887 rotate y*90*-1 translate<-30,-51.6251,-39.1532> }
object{Deco[0] scale 0.3 rotate x*360*0.587321 rotate y*90*-1 translate<-30,-51.6251,-39.2151> }
cylinder{<-30,-50.1251,-45>,<-30,-43.4077,-45>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.0432937 rotate z*90*1 translate<-30,-49.9721,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.663428 rotate z*90*1 translate<-30,-49.6584,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.37575 rotate z*90*1 translate<-30,-49.4052,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.107121 rotate z*90*1 translate<-30,-49.2219,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.292249 rotate z*90*1 translate<-30,-48.9458,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.0495 rotate z*90*1 translate<-30,-48.3738,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.711755 rotate z*90*1 translate<-30,-48.1653,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.0833451 rotate z*90*1 translate<-30,-48.1408,-45> }
object{Deco[4] scale 0.3 rotate x*360*0.272262 rotate z*90*1 translate<-30,-47.808,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.693523 rotate z*90*1 translate<-30,-47.5126,-45> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1.5  translate <-30,-50.1251,-45>}
cylinder{<-30,-41.9077,-43.5>,<-30,-41.9077,-38.7448>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.702966 rotate y*90*1 translate<-30,-41.9077,-43.4877> }
object{Deco[6] scale 0.3 rotate x*360*0.991717 rotate y*90*1 translate<-30,-41.9077,-43.1511> }
object{Deco[4] scale 0.3 rotate x*360*0.353475 rotate y*90*1 translate<-30,-41.9077,-43.0504> }
object{Deco[2] scale 0.3 rotate x*360*0.414609 rotate y*90*1 translate<-30,-41.9077,-42.8284> }
object{Deco[0] scale 0.3 rotate x*360*0.0962161 rotate y*90*1 translate<-30,-41.9077,-42.4151> }
object{Deco[3] scale 0.3 rotate x*360*0.822772 rotate y*90*1 translate<-30,-41.9077,-42.1186> }
object{Deco[5] scale 0.3 rotate x*360*0.73107 rotate y*90*1 translate<-30,-41.9077,-42.077> }
object{Deco[3] scale 0.3 rotate x*360*0.758399 rotate y*90*1 translate<-30,-41.9077,-41.7998> }
object{Deco[3] scale 0.3 rotate x*360*0.0486458 rotate y*90*1 translate<-30,-41.9077,-41.7651> }
object{Deco[1] scale 0.3 rotate x*360*0.288919 rotate y*90*1 translate<-30,-41.9077,-41.5853> }
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-30,-41.9077,-43.5>}
cylinder{<-30,-41.9077,-35.7448>,<-30,-41.9077,-31.1178>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.618277 rotate y*90*1 translate<-30,-41.9077,-35.6892> }
object{Deco[3] scale 0.3 rotate x*360*0.0482346 rotate y*90*1 translate<-30,-41.9077,-35.4399> }
object{Deco[3] scale 0.3 rotate x*360*0.391813 rotate y*90*1 translate<-30,-41.9077,-35.2963> }
object{Deco[1] scale 0.3 rotate x*360*0.300514 rotate y*90*1 translate<-30,-41.9077,-35.0234> }
object{Deco[6] scale 0.3 rotate x*360*0.265752 rotate y*90*1 translate<-30,-41.9077,-34.8329> }
object{Deco[3] scale 0.3 rotate x*360*0.371187 rotate y*90*1 translate<-30,-41.9077,-34.5242> }
object{Deco[4] scale 0.3 rotate x*360*0.838528 rotate y*90*1 translate<-30,-41.9077,-34.3781> }
object{Deco[0] scale 0.3 rotate x*360*0.266336 rotate y*90*1 translate<-30,-41.9077,-34.349> }
object{Deco[0] scale 0.3 rotate x*360*0.171401 rotate y*90*1 translate<-30,-41.9077,-34.2244> }
object{Deco[1] scale 0.3 rotate x*360*0.648775 rotate y*90*1 translate<-30,-41.9077,-34.1103> }
cylinder{<-30,-41.9077,-38.7448>,<-30,-41.9077,-35.7448>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.403662 rotate y*90*1 translate<-30,-41.9077,-38.5136> }
object{Deco[0] scale 0.3 rotate x*360*0.352602 rotate y*90*1 translate<-30,-41.9077,-38.2785> }
object{Deco[3] scale 0.3 rotate x*360*0.239798 rotate y*90*1 translate<-30,-41.9077,-38.1398> }
object{Deco[6] scale 0.3 rotate x*360*0.807737 rotate y*90*1 translate<-30,-41.9077,-38.0454> }
object{Deco[0] scale 0.3 rotate x*360*0.144689 rotate y*90*1 translate<-30,-41.9077,-37.9228> }
object{Deco[6] scale 0.3 rotate x*360*0.479551 rotate y*90*1 translate<-30,-41.9077,-37.7626> }
object{Deco[5] scale 0.3 rotate x*360*0.216671 rotate y*90*1 translate<-30,-41.9077,-37.761> }
object{Deco[6] scale 0.3 rotate x*360*0.183579 rotate y*90*1 translate<-30,-41.9077,-37.498> }
object{Deco[3] scale 0.3 rotate x*360*0.974921 rotate y*90*1 translate<-30,-41.9077,-37.435> }
object{Deco[5] scale 0.3 rotate x*360*0.741727 rotate y*90*1 translate<-30,-41.9077,-37.17> }
cylinder{<-30,-41.9077,-28.1178>,<-30,-41.9077,-23.8162>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.16235 rotate y*90*1 translate<-30,-41.9077,-27.937> }
object{Deco[2] scale 0.3 rotate x*360*0.710285 rotate y*90*1 translate<-30,-41.9077,-27.6945> }
object{Deco[1] scale 0.3 rotate x*360*0.946753 rotate y*90*1 translate<-30,-41.9077,-27.5139> }
object{Deco[3] scale 0.3 rotate x*360*0.740722 rotate y*90*1 translate<-30,-41.9077,-27.231> }
object{Deco[4] scale 0.3 rotate x*360*0.337275 rotate y*90*1 translate<-30,-41.9077,-27.1327> }
object{Deco[4] scale 0.3 rotate x*360*0.365183 rotate y*90*1 translate<-30,-41.9077,-26.9901> }
object{Deco[5] scale 0.3 rotate x*360*0.928289 rotate y*90*1 translate<-30,-41.9077,-26.9087> }
object{Deco[5] scale 0.3 rotate x*360*0.748774 rotate y*90*1 translate<-30,-41.9077,-26.747> }
object{Deco[0] scale 0.3 rotate x*360*0.836848 rotate y*90*1 translate<-30,-41.9077,-26.7222> }
object{Deco[5] scale 0.3 rotate x*360*0.672879 rotate y*90*1 translate<-30,-41.9077,-26.3738> }
cylinder{<-30,-41.9077,-31.1178>,<-30,-41.9077,-28.1178>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.671075 rotate y*90*1 translate<-30,-41.9077,-31.0919> }
object{Deco[4] scale 0.3 rotate x*360*0.786514 rotate y*90*1 translate<-30,-41.9077,-30.9804> }
object{Deco[4] scale 0.3 rotate x*360*0.464655 rotate y*90*1 translate<-30,-41.9077,-30.8925> }
object{Deco[1] scale 0.3 rotate x*360*0.0751606 rotate y*90*1 translate<-30,-41.9077,-30.7466> }
object{Deco[3] scale 0.3 rotate x*360*0.00231234 rotate y*90*1 translate<-30,-41.9077,-30.6813> }
object{Deco[3] scale 0.3 rotate x*360*0.35434 rotate y*90*1 translate<-30,-41.9077,-30.674> }
object{Deco[1] scale 0.3 rotate x*360*0.993464 rotate y*90*1 translate<-30,-41.9077,-30.5261> }
object{Deco[5] scale 0.3 rotate x*360*0.404735 rotate y*90*1 translate<-30,-41.9077,-30.4202> }
object{Deco[3] scale 0.3 rotate x*360*0.403716 rotate y*90*1 translate<-30,-41.9077,-30.3403> }
object{Deco[4] scale 0.3 rotate x*360*0.964328 rotate y*90*1 translate<-30,-41.9077,-30.186> }
cylinder{<-30,-41.9077,-20.8162>,<-30,-41.9077,-17.7521>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.200889 rotate y*90*1 translate<-30,-41.9077,-20.5407> }
object{Deco[0] scale 0.3 rotate x*360*0.831882 rotate y*90*1 translate<-30,-41.9077,-20.264> }
object{Deco[4] scale 0.3 rotate x*360*0.022812 rotate y*90*1 translate<-30,-41.9077,-20.1916> }
object{Deco[5] scale 0.3 rotate x*360*0.930783 rotate y*90*1 translate<-30,-41.9077,-19.9852> }
object{Deco[0] scale 0.3 rotate x*360*0.771918 rotate y*90*1 translate<-30,-41.9077,-19.7667> }
object{Deco[4] scale 0.3 rotate x*360*0.733153 rotate y*90*1 translate<-30,-41.9077,-19.4917> }
object{Deco[4] scale 0.3 rotate x*360*0.700802 rotate y*90*1 translate<-30,-41.9077,-19.3486> }
object{Deco[4] scale 0.3 rotate x*360*0.498907 rotate y*90*1 translate<-30,-41.9077,-19.1519> }
object{Deco[4] scale 0.3 rotate x*360*0.194682 rotate y*90*1 translate<-30,-41.9077,-18.9625> }
object{Deco[1] scale 0.3 rotate x*360*0.959506 rotate y*90*1 translate<-30,-41.9077,-18.9243> }
cylinder{<-30,-41.9077,-23.8162>,<-30,-41.9077,-20.8162>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.674693 rotate y*90*1 translate<-30,-41.9077,-23.6982> }
object{Deco[1] scale 0.3 rotate x*360*0.31201 rotate y*90*1 translate<-30,-41.9077,-23.6602> }
object{Deco[1] scale 0.3 rotate x*360*0.615329 rotate y*90*1 translate<-30,-41.9077,-23.4692> }
object{Deco[0] scale 0.3 rotate x*360*0.146539 rotate y*90*1 translate<-30,-41.9077,-23.3117> }
object{Deco[2] scale 0.3 rotate x*360*0.949593 rotate y*90*1 translate<-30,-41.9077,-23.1921> }
object{Deco[0] scale 0.3 rotate x*360*0.0997781 rotate y*90*1 translate<-30,-41.9077,-23.0134> }
object{Deco[2] scale 0.3 rotate x*360*0.769213 rotate y*90*1 translate<-30,-41.9077,-22.8814> }
object{Deco[5] scale 0.3 rotate x*360*0.281983 rotate y*90*1 translate<-30,-41.9077,-22.7831> }
object{Deco[0] scale 0.3 rotate x*360*0.993865 rotate y*90*1 translate<-30,-41.9077,-22.7282> }
object{Deco[0] scale 0.3 rotate x*360*0.631439 rotate y*90*1 translate<-30,-41.9077,-22.487> }
cylinder{<-28.5,-41.9077,-16.2521>,<-19.8639,-41.9077,-16.2521>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.552634 scale <1,1,1> translate<-28.386,-41.9077,-16.2521> }
object{Deco[3] scale 0.3 rotate x*360*0.767079 scale <1,1,1> translate<-27.8986,-41.9077,-16.2521> }
object{Deco[6] scale 0.3 rotate x*360*0.241978 scale <1,1,1> translate<-27.4418,-41.9077,-16.2521> }
object{Deco[0] scale 0.3 rotate x*360*0.391133 scale <1,1,1> translate<-26.6671,-41.9077,-16.2521> }
object{Deco[4] scale 0.3 rotate x*360*0.09431 scale <1,1,1> translate<-26.5974,-41.9077,-16.2521> }
object{Deco[1] scale 0.3 rotate x*360*0.827208 scale <1,1,1> translate<-26.0548,-41.9077,-16.2521> }
object{Deco[5] scale 0.3 rotate x*360*0.167723 scale <1,1,1> translate<-25.5487,-41.9077,-16.2521> }
object{Deco[3] scale 0.3 rotate x*360*0.1755 scale <1,1,1> translate<-24.7971,-41.9077,-16.2521> }
object{Deco[1] scale 0.3 rotate x*360*0.0223004 scale <1,1,1> translate<-24.7609,-41.9077,-16.2521> }
object{Deco[3] scale 0.3 rotate x*360*0.165352 scale <1,1,1> translate<-24.5399,-41.9077,-16.2521> }
object{Elbow scale <1,1,-1> translate -z*1.5  translate <-28.5,-41.9077,-16.2521>}
cylinder{<-18.3639,-41.9077,-17.7521>,<-18.3639,-41.9077,-21.0213>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.289951 rotate y*90*-1 translate<-18.3639,-41.9077,-18.0243> }
object{Deco[2] scale 0.3 rotate x*360*0.463266 rotate y*90*-1 translate<-18.3639,-41.9077,-18.1343> }
object{Deco[3] scale 0.3 rotate x*360*0.383834 rotate y*90*-1 translate<-18.3639,-41.9077,-18.4144> }
object{Deco[5] scale 0.3 rotate x*360*0.441823 rotate y*90*-1 translate<-18.3639,-41.9077,-18.6182> }
object{Deco[1] scale 0.3 rotate x*360*0.0946955 rotate y*90*-1 translate<-18.3639,-41.9077,-18.8393> }
object{Deco[4] scale 0.3 rotate x*360*0.58471 rotate y*90*-1 translate<-18.3639,-41.9077,-19.0109> }
object{Deco[4] scale 0.3 rotate x*360*0.209202 rotate y*90*-1 translate<-18.3639,-41.9077,-19.0771> }
object{Deco[3] scale 0.3 rotate x*360*0.0235656 rotate y*90*-1 translate<-18.3639,-41.9077,-19.2588> }
object{Deco[0] scale 0.3 rotate x*360*0.318956 rotate y*90*-1 translate<-18.3639,-41.9077,-19.385> }
object{Deco[4] scale 0.3 rotate x*360*0.0585772 rotate y*90*-1 translate<-18.3639,-41.9077,-19.4493> }
object{Elbow translate x*1.5 rotate y*180 translate <-18.3639,-41.9077,-17.7521>}
cylinder{<-18.3639,-43.4077,-22.5213>,<-18.3639,-49.3785,-22.5213>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.819139 rotate z*90*-1 translate<-18.3639,-43.798,-22.5213> }
object{Deco[0] scale 0.3 rotate x*360*0.208552 rotate z*90*-1 translate<-18.3639,-43.8187,-22.5213> }
object{Deco[2] scale 0.3 rotate x*360*0.67554 rotate z*90*-1 translate<-18.3639,-44.3519,-22.5213> }
object{Deco[0] scale 0.3 rotate x*360*0.593898 rotate z*90*-1 translate<-18.3639,-44.8906,-22.5213> }
object{Deco[4] scale 0.3 rotate x*360*0.342228 rotate z*90*-1 translate<-18.3639,-45.2011,-22.5213> }
object{Deco[2] scale 0.3 rotate x*360*0.740814 rotate z*90*-1 translate<-18.3639,-45.6474,-22.5213> }
object{Deco[1] scale 0.3 rotate x*360*0.034151 rotate z*90*-1 translate<-18.3639,-45.9372,-22.5213> }
object{Deco[1] scale 0.3 rotate x*360*0.0413901 rotate z*90*-1 translate<-18.3639,-46.063,-22.5213> }
object{Deco[2] scale 0.3 rotate x*360*0.203045 rotate z*90*-1 translate<-18.3639,-46.5608,-22.5213> }
object{Deco[2] scale 0.3 rotate x*360*0.83394 rotate z*90*-1 translate<-18.3639,-46.7767,-22.5213> }
object{Elbow translate z*1.5 rotate -z*90 translate <-18.3639,-43.4077,-22.5213>}
cylinder{<-19.8639,-50.8785,-22.5213>,<-26.3886,-50.8785,-22.5213>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.338318 scale <-1,1,1> translate<-20.1131,-50.8785,-22.5213> }
object{Deco[1] scale 0.3 rotate x*360*0.514047 scale <-1,1,1> translate<-20.1746,-50.8785,-22.5213> }
object{Deco[6] scale 0.3 rotate x*360*0.142365 scale <-1,1,1> translate<-20.7184,-50.8785,-22.5213> }
object{Deco[0] scale 0.3 rotate x*360*0.470769 scale <-1,1,1> translate<-21.1205,-50.8785,-22.5213> }
object{Deco[0] scale 0.3 rotate x*360*0.744014 scale <-1,1,1> translate<-21.6431,-50.8785,-22.5213> }
object{Deco[3] scale 0.3 rotate x*360*0.617176 scale <-1,1,1> translate<-21.6503,-50.8785,-22.5213> }
object{Deco[3] scale 0.3 rotate x*360*0.423699 scale <-1,1,1> translate<-21.7442,-50.8785,-22.5213> }
object{Deco[0] scale 0.3 rotate x*360*0.0223084 scale <-1,1,1> translate<-22.0004,-50.8785,-22.5213> }
object{Deco[4] scale 0.3 rotate x*360*0.759406 scale <-1,1,1> translate<-22.2933,-50.8785,-22.5213> }
object{Deco[4] scale 0.3 rotate x*360*0.217394 scale <-1,1,1> translate<-22.8057,-50.8785,-22.5213> }
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <-19.8639,-50.8785,-22.5213>}
cylinder{<-27.8886,-50.8785,-24.0213>,<-27.8886,-50.8785,-31.2041>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.311234 rotate y*90*-1 translate<-27.8886,-50.8785,-24.5272> }
object{Deco[1] scale 0.3 rotate x*360*0.593983 rotate y*90*-1 translate<-27.8886,-50.8785,-25.0978> }
object{Deco[5] scale 0.3 rotate x*360*0.200201 rotate y*90*-1 translate<-27.8886,-50.8785,-25.7361> }
object{Deco[3] scale 0.3 rotate x*360*0.0239763 rotate y*90*-1 translate<-27.8886,-50.8785,-26.3666> }
object{Deco[2] scale 0.3 rotate x*360*0.72278 rotate y*90*-1 translate<-27.8886,-50.8785,-26.4453> }
object{Deco[0] scale 0.3 rotate x*360*0.488576 rotate y*90*-1 translate<-27.8886,-50.8785,-26.975> }
object{Deco[4] scale 0.3 rotate x*360*0.7996 rotate y*90*-1 translate<-27.8886,-50.8785,-27.5909> }
object{Deco[2] scale 0.3 rotate x*360*0.33778 rotate y*90*-1 translate<-27.8886,-50.8785,-27.9352> }
object{Deco[2] scale 0.3 rotate x*360*0.838505 rotate y*90*-1 translate<-27.8886,-50.8785,-28.272> }
object{Deco[6] scale 0.3 rotate x*360*0.138015 rotate y*90*-1 translate<-27.8886,-50.8785,-28.9121> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-27.8886,-50.8785,-24.0213>}
cylinder{<-29.3886,-50.8785,-32.7041>,<-28.5,-50.8785,-32.7041>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.467256 scale <-1,1,1> translate<-29.4233,-50.8785,-32.7041> }
object{Deco[0] scale 0.3 rotate x*360*0.36572 scale <-1,1,1> translate<-29.4623,-50.8785,-32.7041> }
object{Deco[5] scale 0.3 rotate x*360*0.655568 scale <-1,1,1> translate<-29.4956,-50.8785,-32.7041> }
object{Deco[4] scale 0.3 rotate x*360*0.533182 scale <-1,1,1> translate<-29.5386,-50.8785,-32.7041> }
object{Deco[5] scale 0.3 rotate x*360*0.216883 scale <-1,1,1> translate<-29.6097,-50.8785,-32.7041> }
object{Deco[5] scale 0.3 rotate x*360*0.582919 scale <-1,1,1> translate<-29.6874,-50.8785,-32.7041> }
object{Deco[2] scale 0.3 rotate x*360*0.22423 scale <-1,1,1> translate<-29.6875,-50.8785,-32.7041> }
object{Deco[6] scale 0.3 rotate x*360*0.937391 scale <-1,1,1> translate<-29.7308,-50.8785,-32.7041> }
object{Deco[4] scale 0.3 rotate x*360*0.0564284 scale <-1,1,1> translate<-29.7902,-50.8785,-32.7041> }
object{Deco[4] scale 0.3 rotate x*360*0.728005 scale <-1,1,1> translate<-29.8258,-50.8785,-32.7041> }
object{Elbow scale <-1,1,1> translate z*1.5  translate <-29.3886,-50.8785,-32.7041>}
cylinder{<-30,-50.8785,-34.2041>,<-30,-50.8785,-42.3687>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.801379 rotate y*90*-1 translate<-30,-50.8785,-34.8875> }
object{Deco[2] scale 0.3 rotate x*360*0.44974 rotate y*90*-1 translate<-30,-50.8785,-35.5529> }
object{Deco[1] scale 0.3 rotate x*360*0.705609 rotate y*90*-1 translate<-30,-50.8785,-35.9094> }
object{Deco[0] scale 0.3 rotate x*360*0.606174 rotate y*90*-1 translate<-30,-50.8785,-36.2887> }
object{Deco[0] scale 0.3 rotate x*360*0.680301 rotate y*90*-1 translate<-30,-50.8785,-36.9488> }
object{Deco[2] scale 0.3 rotate x*360*0.0812363 rotate y*90*-1 translate<-30,-50.8785,-37.1611> }
object{Deco[2] scale 0.3 rotate x*360*0.400593 rotate y*90*-1 translate<-30,-50.8785,-37.6865> }
object{Deco[1] scale 0.3 rotate x*360*0.348851 rotate y*90*-1 translate<-30,-50.8785,-37.8219> }
object{Deco[2] scale 0.3 rotate x*360*0.794891 rotate y*90*-1 translate<-30,-50.8785,-38.0401> }
object{Deco[1] scale 0.3 rotate x*360*0.322693 rotate y*90*-1 translate<-30,-50.8785,-38.2379> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-30,-50.8785,-34.2041>}
cylinder{<-30,-49.3785,-43.8687>,<-30,-46.0422,-43.8687>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.574224 rotate z*90*1 translate<-30,-49.1733,-43.8687> }
object{Deco[2] scale 0.3 rotate x*360*0.169651 rotate z*90*1 translate<-30,-48.8993,-43.8687> }
object{Deco[3] scale 0.3 rotate x*360*0.938092 rotate z*90*1 translate<-30,-48.7587,-43.8687> }
object{Deco[3] scale 0.3 rotate x*360*0.178865 rotate z*90*1 translate<-30,-48.6125,-43.8687> }
object{Deco[3] scale 0.3 rotate x*360*0.0826392 rotate z*90*1 translate<-30,-48.6064,-43.8687> }
object{Deco[4] scale 0.3 rotate x*360*0.117682 rotate z*90*1 translate<-30,-48.3998,-43.8687> }
object{Deco[6] scale 0.3 rotate x*360*0.672317 rotate z*90*1 translate<-30,-48.1848,-43.8687> }
object{Deco[3] scale 0.3 rotate x*360*0.677993 rotate z*90*1 translate<-30,-47.915,-43.8687> }
object{Deco[1] scale 0.3 rotate x*360*0.201232 rotate z*90*1 translate<-30,-47.6949,-43.8687> }
object{Deco[2] scale 0.3 rotate x*360*0.460529 rotate z*90*1 translate<-30,-47.4497,-43.8687> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1.5  translate <-30,-49.3785,-43.8687>}
cylinder{<-30,-44.5422,-42.3687>,<-30,-44.5422,-36.06>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.312036 rotate y*90*1 translate<-30,-44.5422,-42.3599> }
object{Deco[6] scale 0.3 rotate x*360*0.552189 rotate y*90*1 translate<-30,-44.5422,-42.2885> }
object{Deco[6] scale 0.3 rotate x*360*0.331412 rotate y*90*1 translate<-30,-44.5422,-41.9133> }
object{Deco[5] scale 0.3 rotate x*360*0.515294 rotate y*90*1 translate<-30,-44.5422,-41.6364> }
object{Deco[2] scale 0.3 rotate x*360*0.909127 rotate y*90*1 translate<-30,-44.5422,-41.4736> }
object{Deco[6] scale 0.3 rotate x*360*0.779537 rotate y*90*1 translate<-30,-44.5422,-41.4022> }
object{Deco[3] scale 0.3 rotate x*360*0.0236545 rotate y*90*1 translate<-30,-44.5422,-40.8787> }
object{Deco[4] scale 0.3 rotate x*360*0.60878 rotate y*90*1 translate<-30,-44.5422,-40.4278> }
object{Deco[0] scale 0.3 rotate x*360*0.188416 rotate y*90*1 translate<-30,-44.5422,-39.8806> }
object{Deco[0] scale 0.3 rotate x*360*0.883092 rotate y*90*1 translate<-30,-44.5422,-39.4541> }
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-30,-44.5422,-42.3687>}
cylinder{<-30,-46.0422,-34.56>,<-30,-49.7197,-34.56>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.806685 rotate z*90*-1 translate<-30,-46.0909,-34.56> }
object{Deco[4] scale 0.3 rotate x*360*0.32721 rotate z*90*-1 translate<-30,-46.0932,-34.56> }
object{Deco[0] scale 0.3 rotate x*360*0.254587 rotate z*90*-1 translate<-30,-46.2142,-34.56> }
object{Deco[4] scale 0.3 rotate x*360*0.207624 rotate z*90*-1 translate<-30,-46.2153,-34.56> }
object{Deco[3] scale 0.3 rotate x*360*0.160619 rotate z*90*-1 translate<-30,-46.4937,-34.56> }
object{Deco[4] scale 0.3 rotate x*360*0.107206 rotate z*90*-1 translate<-30,-46.7181,-34.56> }
object{Deco[1] scale 0.3 rotate x*360*0.0794837 rotate z*90*-1 translate<-30,-46.8832,-34.56> }
object{Deco[0] scale 0.3 rotate x*360*0.403295 rotate z*90*-1 translate<-30,-47.1186,-34.56> }
object{Deco[4] scale 0.3 rotate x*360*0.43503 rotate z*90*-1 translate<-30,-47.2167,-34.56> }
object{Deco[0] scale 0.3 rotate x*360*0.535083 rotate z*90*-1 translate<-30,-47.2431,-34.56> }
object{Elbow rotate y*90 rotate -z*90 translate -z*1.5  translate <-30,-46.0422,-34.56>}
cylinder{<-30,-51.2197,-33.06>,<-30,-51.2197,-26.5524>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.115666 rotate y*90*1 translate<-30,-51.2197,-32.9613> }
object{Deco[6] scale 0.3 rotate x*360*0.927698 rotate y*90*1 translate<-30,-51.2197,-32.4722> }
object{Deco[3] scale 0.3 rotate x*360*0.46726 rotate y*90*1 translate<-30,-51.2197,-31.9328> }
object{Deco[1] scale 0.3 rotate x*360*0.176143 rotate y*90*1 translate<-30,-51.2197,-31.3496> }
object{Deco[2] scale 0.3 rotate x*360*0.353594 rotate y*90*1 translate<-30,-51.2197,-30.7821> }
object{Deco[1] scale 0.3 rotate x*360*0.0942204 rotate y*90*1 translate<-30,-51.2197,-30.513> }
object{Deco[6] scale 0.3 rotate x*360*0.105307 rotate y*90*1 translate<-30,-51.2197,-29.9849> }
object{Deco[2] scale 0.3 rotate x*360*0.901749 rotate y*90*1 translate<-30,-51.2197,-29.8799> }
object{Deco[3] scale 0.3 rotate x*360*0.385288 rotate y*90*1 translate<-30,-51.2197,-29.6147> }
object{Deco[4] scale 0.3 rotate x*360*0.56433 rotate y*90*1 translate<-30,-51.2197,-29.5265> }
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1.5  translate <-30,-51.2197,-33.06>}
cylinder{<-30,-51.2197,-23.5524>,<-30,-51.2197,-15.22>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.562098 rotate y*90*1 translate<-30,-51.2197,-23.4998> }
object{Deco[1] scale 0.3 rotate x*360*0.489761 rotate y*90*1 translate<-30,-51.2197,-22.9791> }
object{Deco[3] scale 0.3 rotate x*360*0.119699 rotate y*90*1 translate<-30,-51.2197,-22.4907> }
object{Deco[4] scale 0.3 rotate x*360*0.669264 rotate y*90*1 translate<-30,-51.2197,-21.8647> }
object{Deco[2] scale 0.3 rotate x*360*0.520157 rotate y*90*1 translate<-30,-51.2197,-21.7909> }
object{Deco[5] scale 0.3 rotate x*360*0.687234 rotate y*90*1 translate<-30,-51.2197,-21.2713> }
object{Deco[2] scale 0.3 rotate x*360*0.00725358 rotate y*90*1 translate<-30,-51.2197,-20.6538> }
object{Deco[1] scale 0.3 rotate x*360*0.522476 rotate y*90*1 translate<-30,-51.2197,-20.3173> }
object{Deco[3] scale 0.3 rotate x*360*0.249031 rotate y*90*1 translate<-30,-51.2197,-19.9275> }
object{Deco[0] scale 0.3 rotate x*360*0.321784 rotate y*90*1 translate<-30,-51.2197,-19.461> }
cylinder{<-30,-51.2197,-26.5524>,<-30,-51.2197,-23.5524>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.733956 rotate y*90*1 translate<-30,-51.2197,-26.3579> }
object{Deco[5] scale 0.3 rotate x*360*0.521328 rotate y*90*1 translate<-30,-51.2197,-26.2849> }
object{Deco[5] scale 0.3 rotate x*360*0.916614 rotate y*90*1 translate<-30,-51.2197,-26.1946> }
object{Deco[5] scale 0.3 rotate x*360*0.374232 rotate y*90*1 translate<-30,-51.2197,-26.1> }
object{Deco[1] scale 0.3 rotate x*360*0.821057 rotate y*90*1 translate<-30,-51.2197,-25.9057> }
object{Deco[1] scale 0.3 rotate x*360*0.654504 rotate y*90*1 translate<-30,-51.2197,-25.8571> }
object{Deco[5] scale 0.3 rotate x*360*0.232795 rotate y*90*1 translate<-30,-51.2197,-25.7859> }
object{Deco[2] scale 0.3 rotate x*360*0.445144 rotate y*90*1 translate<-30,-51.2197,-25.7516> }
object{Deco[1] scale 0.3 rotate x*360*0.978563 rotate y*90*1 translate<-30,-51.2197,-25.7422> }
object{Deco[0] scale 0.3 rotate x*360*0.470034 rotate y*90*1 translate<-30,-51.2197,-25.4999> }
cylinder{<-30,-52.7197,-13.72>,<-30,-57.8889,-13.72>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.931756 rotate z*90*-1 translate<-30,-52.7992,-13.72> }
object{Deco[3] scale 0.3 rotate x*360*0.0884734 rotate z*90*-1 translate<-30,-52.8967,-13.72> }
object{Deco[3] scale 0.3 rotate x*360*0.0996808 rotate z*90*-1 translate<-30,-53.0027,-13.72> }
object{Deco[2] scale 0.3 rotate x*360*0.931246 rotate z*90*-1 translate<-30,-53.163,-13.72> }
object{Deco[6] scale 0.3 rotate x*360*0.844913 rotate z*90*-1 translate<-30,-53.2066,-13.72> }
object{Deco[3] scale 0.3 rotate x*360*0.727884 rotate z*90*-1 translate<-30,-53.5687,-13.72> }
object{Deco[1] scale 0.3 rotate x*360*0.382798 rotate z*90*-1 translate<-30,-53.9489,-13.72> }
object{Deco[1] scale 0.3 rotate x*360*0.824004 rotate z*90*-1 translate<-30,-54.2984,-13.72> }
object{Deco[4] scale 0.3 rotate x*360*0.716947 rotate z*90*-1 translate<-30,-54.6018,-13.72> }
object{Deco[2] scale 0.3 rotate x*360*0.0304125 rotate z*90*-1 translate<-30,-54.8229,-13.72> }
object{Elbow rotate y*90 rotate -z*90 translate -z*1.5  translate <-30,-52.7197,-13.72>}
cylinder{<-30,-59.3889,-15.22>,<-30,-59.3889,-20.8645>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.324847 rotate y*90*-1 translate<-30,-59.3889,-15.3146> }
object{Deco[6] scale 0.3 rotate x*360*0.977126 rotate y*90*-1 translate<-30,-59.3889,-15.3352> }
object{Deco[5] scale 0.3 rotate x*360*0.58144 rotate y*90*-1 translate<-30,-59.3889,-15.689> }
object{Deco[0] scale 0.3 rotate x*360*0.252737 rotate y*90*-1 translate<-30,-59.3889,-16.0262> }
object{Deco[4] scale 0.3 rotate x*360*0.024341 rotate y*90*-1 translate<-30,-59.3889,-16.0959> }
object{Deco[6] scale 0.3 rotate x*360*0.35179 rotate y*90*-1 translate<-30,-59.3889,-16.2153> }
object{Deco[6] scale 0.3 rotate x*360*0.76797 rotate y*90*-1 translate<-30,-59.3889,-16.3266> }
object{Deco[4] scale 0.3 rotate x*360*0.927927 rotate y*90*-1 translate<-30,-59.3889,-16.5386> }
object{Deco[6] scale 0.3 rotate x*360*0.997209 rotate y*90*-1 translate<-30,-59.3889,-16.8619> }
object{Deco[6] scale 0.3 rotate x*360*0.943823 rotate y*90*-1 translate<-30,-59.3889,-17.1132> }
object{Elbow translate z*1.5 rotate z*90 rotate -x*90 translate <-30,-59.3889,-15.22>}
cylinder{<-30,-60.8889,-22.3645>,<-30,-67.0076,-22.3645>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.46584 rotate z*90*-1 translate<-30,-61.0815,-22.3645> }
object{Deco[3] scale 0.3 rotate x*360*0.603669 rotate z*90*-1 translate<-30,-61.5254,-22.3645> }
object{Deco[4] scale 0.3 rotate x*360*0.765089 rotate z*90*-1 translate<-30,-61.5925,-22.3645> }
object{Deco[5] scale 0.3 rotate x*360*0.54708 rotate z*90*-1 translate<-30,-62.1419,-22.3645> }
object{Deco[2] scale 0.3 rotate x*360*0.355313 rotate z*90*-1 translate<-30,-62.6876,-22.3645> }
object{Deco[4] scale 0.3 rotate x*360*0.0500269 rotate z*90*-1 translate<-30,-63.1747,-22.3645> }
object{Deco[2] scale 0.3 rotate x*360*0.156744 rotate z*90*-1 translate<-30,-63.3044,-22.3645> }
object{Deco[6] scale 0.3 rotate x*360*0.807086 rotate z*90*-1 translate<-30,-63.4236,-22.3645> }
object{Deco[5] scale 0.3 rotate x*360*0.477431 rotate z*90*-1 translate<-30,-63.7845,-22.3645> }
object{Deco[5] scale 0.3 rotate x*360*0.185241 rotate z*90*-1 translate<-30,-64.1354,-22.3645> }
object{Elbow translate z*1.5 rotate -z*90 translate <-30,-60.8889,-22.3645>}
cylinder{<-30,-70.0076,-22.3645>,<-30,-77.5802,-22.3645>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.797974 rotate z*90*-1 translate<-30,-70.5288,-22.3645> }
object{Deco[5] scale 0.3 rotate x*360*0.212607 rotate z*90*-1 translate<-30,-70.8501,-22.3645> }
object{Deco[4] scale 0.3 rotate x*360*0.069451 rotate z*90*-1 translate<-30,-71.2345,-22.3645> }
object{Deco[4] scale 0.3 rotate x*360*0.475774 rotate z*90*-1 translate<-30,-71.6489,-22.3645> }
object{Deco[4] scale 0.3 rotate x*360*0.974425 rotate z*90*-1 translate<-30,-72.0163,-22.3645> }
object{Deco[1] scale 0.3 rotate x*360*0.424523 rotate z*90*-1 translate<-30,-72.1644,-22.3645> }
object{Deco[4] scale 0.3 rotate x*360*0.583178 rotate z*90*-1 translate<-30,-72.5058,-22.3645> }
object{Deco[1] scale 0.3 rotate x*360*0.214776 rotate z*90*-1 translate<-30,-72.544,-22.3645> }
object{Deco[3] scale 0.3 rotate x*360*0.206319 rotate z*90*-1 translate<-30,-72.8047,-22.3645> }
object{Deco[1] scale 0.3 rotate x*360*0.0577668 rotate z*90*-1 translate<-30,-72.8267,-22.3645> }
cylinder{<-30,-67.0076,-22.3645>,<-30,-70.0076,-22.3645>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.0349179 rotate z*90*-1 translate<-30,-67.1026,-22.3645> }
object{Deco[4] scale 0.3 rotate x*360*0.984986 rotate z*90*-1 translate<-30,-67.2892,-22.3645> }
object{Deco[6] scale 0.3 rotate x*360*0.682152 rotate z*90*-1 translate<-30,-67.4775,-22.3645> }
object{Deco[6] scale 0.3 rotate x*360*0.34856 rotate z*90*-1 translate<-30,-67.5514,-22.3645> }
object{Deco[1] scale 0.3 rotate x*360*0.464463 rotate z*90*-1 translate<-30,-67.7978,-22.3645> }
object{Deco[1] scale 0.3 rotate x*360*0.968793 rotate z*90*-1 translate<-30,-68.0431,-22.3645> }
object{Deco[1] scale 0.3 rotate x*360*0.534667 rotate z*90*-1 translate<-30,-68.2426,-22.3645> }
object{Deco[2] scale 0.3 rotate x*360*0.673643 rotate z*90*-1 translate<-30,-68.2638,-22.3645> }
object{Deco[4] scale 0.3 rotate x*360*0.511647 rotate z*90*-1 translate<-30,-68.34,-22.3645> }
object{Deco[4] scale 0.3 rotate x*360*0.284426 rotate z*90*-1 translate<-30,-68.3632,-22.3645> }
cylinder{<-30,-79.0802,-23.8645>,<-30,-79.0802,-28.0202>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.313327 rotate y*90*-1 translate<-30,-79.0802,-24.0926> }
object{Deco[1] scale 0.3 rotate x*360*0.245043 rotate y*90*-1 translate<-30,-79.0802,-24.1684> }
object{Deco[3] scale 0.3 rotate x*360*0.812051 rotate y*90*-1 translate<-30,-79.0802,-24.3419> }
object{Deco[5] scale 0.3 rotate x*360*0.653362 rotate y*90*-1 translate<-30,-79.0802,-24.5073> }
object{Deco[1] scale 0.3 rotate x*360*0.209773 rotate y*90*-1 translate<-30,-79.0802,-24.7544> }
object{Deco[2] scale 0.3 rotate x*360*0.0580005 rotate y*90*-1 translate<-30,-79.0802,-24.9746> }
object{Deco[0] scale 0.3 rotate x*360*0.769166 rotate y*90*-1 translate<-30,-79.0802,-25.3239> }
object{Deco[0] scale 0.3 rotate x*360*0.633484 rotate y*90*-1 translate<-30,-79.0802,-25.5058> }
object{Deco[1] scale 0.3 rotate x*360*0.755808 rotate y*90*-1 translate<-30,-79.0802,-25.6941> }
object{Deco[3] scale 0.3 rotate x*360*0.432313 rotate y*90*-1 translate<-30,-79.0802,-26.0105> }
object{Elbow translate z*1.5 rotate z*90 rotate -x*90 translate <-30,-79.0802,-23.8645>}
cylinder{<-30,-77.5802,-29.5202>,<-30,-73.6801,-29.5202>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.732964 rotate z*90*1 translate<-30,-77.4945,-29.5202> }
object{Deco[3] scale 0.3 rotate x*360*0.800743 rotate z*90*1 translate<-30,-77.4619,-29.5202> }
object{Deco[6] scale 0.3 rotate x*360*0.129425 rotate z*90*1 translate<-30,-77.1396,-29.5202> }
object{Deco[0] scale 0.3 rotate x*360*0.479825 rotate z*90*1 translate<-30,-76.955,-29.5202> }
object{Deco[4] scale 0.3 rotate x*360*0.0359437 rotate z*90*1 translate<-30,-76.6105,-29.5202> }
object{Deco[6] scale 0.3 rotate x*360*0.796726 rotate z*90*1 translate<-30,-76.3953,-29.5202> }
object{Deco[2] scale 0.3 rotate x*360*0.413388 rotate z*90*1 translate<-30,-76.2145,-29.5202> }
object{Deco[6] scale 0.3 rotate x*360*0.688866 rotate z*90*1 translate<-30,-76.0982,-29.5202> }
object{Deco[6] scale 0.3 rotate x*360*0.231413 rotate z*90*1 translate<-30,-75.8023,-29.5202> }
object{Deco[6] scale 0.3 rotate x*360*0.414876 rotate z*90*1 translate<-30,-75.4573,-29.5202> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1.5  translate <-30,-77.5802,-29.5202>}
cylinder{<-30,-72.1801,-31.0202>,<-30,-72.1801,-38.4746>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.0745319 rotate y*90*-1 translate<-30,-72.1801,-31.6876> }
object{Deco[3] scale 0.3 rotate x*360*0.346834 rotate y*90*-1 translate<-30,-72.1801,-31.907> }
object{Deco[2] scale 0.3 rotate x*360*0.417372 rotate y*90*-1 translate<-30,-72.1801,-32.2962> }
object{Deco[6] scale 0.3 rotate x*360*0.623412 rotate y*90*-1 translate<-30,-72.1801,-32.6573> }
object{Deco[0] scale 0.3 rotate x*360*0.986084 rotate y*90*-1 translate<-30,-72.1801,-33.1437> }
object{Deco[2] scale 0.3 rotate x*360*0.458045 rotate y*90*-1 translate<-30,-72.1801,-33.7833> }
object{Deco[2] scale 0.3 rotate x*360*0.643537 rotate y*90*-1 translate<-30,-72.1801,-34.4323> }
object{Deco[1] scale 0.3 rotate x*360*0.806139 rotate y*90*-1 translate<-30,-72.1801,-35.0952> }
object{Deco[5] scale 0.3 rotate x*360*0.254524 rotate y*90*-1 translate<-30,-72.1801,-35.4253> }
object{Deco[5] scale 0.3 rotate x*360*0.405341 rotate y*90*-1 translate<-30,-72.1801,-36.0064> }
object{Elbow rotate y*180 rotate z*90 translate -y*1.5  translate <-30,-72.1801,-31.0202>}
cylinder{<-30,-72.1801,-41.4746>,<-30,-72.1801,-43.5>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.182801 rotate y*90*-1 translate<-30,-72.1801,-41.5157> }
object{Deco[4] scale 0.3 rotate x*360*0.519731 rotate y*90*-1 translate<-30,-72.1801,-41.6431> }
object{Deco[4] scale 0.3 rotate x*360*0.154524 rotate y*90*-1 translate<-30,-72.1801,-41.6524> }
object{Deco[1] scale 0.3 rotate x*360*0.50572 rotate y*90*-1 translate<-30,-72.1801,-41.809> }
object{Deco[4] scale 0.3 rotate x*360*0.0167222 rotate y*90*-1 translate<-30,-72.1801,-41.8424> }
object{Deco[3] scale 0.3 rotate x*360*0.977141 rotate y*90*-1 translate<-30,-72.1801,-41.9526> }
object{Deco[4] scale 0.3 rotate x*360*0.0660084 rotate y*90*-1 translate<-30,-72.1801,-41.9902> }
object{Deco[4] scale 0.3 rotate x*360*0.765298 rotate y*90*-1 translate<-30,-72.1801,-42.1068> }
object{Deco[5] scale 0.3 rotate x*360*0.629207 rotate y*90*-1 translate<-30,-72.1801,-42.1931> }
object{Deco[5] scale 0.3 rotate x*360*0.464293 rotate y*90*-1 translate<-30,-72.1801,-42.2831> }
cylinder{<-30,-72.1801,-38.4746>,<-30,-72.1801,-41.4746>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.153442 rotate y*90*-1 translate<-30,-72.1801,-38.4927> }
object{Deco[5] scale 0.3 rotate x*360*0.900809 rotate y*90*-1 translate<-30,-72.1801,-38.5308> }
object{Deco[3] scale 0.3 rotate x*360*0.219217 rotate y*90*-1 translate<-30,-72.1801,-38.762> }
object{Deco[5] scale 0.3 rotate x*360*0.212369 rotate y*90*-1 translate<-30,-72.1801,-39.0052> }
object{Deco[3] scale 0.3 rotate x*360*0.861371 rotate y*90*-1 translate<-30,-72.1801,-39.0907> }
object{Deco[0] scale 0.3 rotate x*360*0.305182 rotate y*90*-1 translate<-30,-72.1801,-39.1498> }
object{Deco[2] scale 0.3 rotate x*360*0.232211 rotate y*90*-1 translate<-30,-72.1801,-39.4039> }
object{Deco[2] scale 0.3 rotate x*360*0.170713 rotate y*90*-1 translate<-30,-72.1801,-39.4115> }
object{Deco[3] scale 0.3 rotate x*360*0.548349 rotate y*90*-1 translate<-30,-72.1801,-39.4581> }
object{Deco[5] scale 0.3 rotate x*360*0.724667 rotate y*90*-1 translate<-30,-72.1801,-39.6674> }
cylinder{<-30,-70.6801,-45>,<-30,-62.4987,-45>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.486863 rotate z*90*1 translate<-30,-69.9436,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.608162 rotate z*90*1 translate<-30,-69.3443,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.60479 rotate z*90*1 translate<-30,-68.7237,-45> }
object{Deco[0] scale 0.3 rotate x*360*0.934995 rotate z*90*1 translate<-30,-68.3172,-45> }
object{Deco[3] scale 0.3 rotate x*360*0.022305 rotate z*90*1 translate<-30,-68.2044,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.000575912 rotate z*90*1 translate<-30,-67.5955,-45> }
object{Deco[6] scale 0.3 rotate x*360*0.914171 rotate z*90*1 translate<-30,-66.8719,-45> }
object{Deco[1] scale 0.3 rotate x*360*0.29577 rotate z*90*1 translate<-30,-66.3739,-45> }
object{Deco[5] scale 0.3 rotate x*360*0.513325 rotate z*90*1 translate<-30,-66.0378,-45> }
object{Deco[2] scale 0.3 rotate x*360*0.874203 rotate z*90*1 translate<-30,-65.3513,-45> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1.5  translate <-30,-70.6801,-45>}
cylinder{<-30,-60.9987,-43.5>,<-30,-60.9987,-39.1582>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.430817 rotate y*90*1 translate<-30,-60.9987,-43.322> }
object{Deco[2] scale 0.3 rotate x*360*0.072446 rotate y*90*1 translate<-30,-60.9987,-43.1544> }
object{Deco[6] scale 0.3 rotate x*360*0.265064 rotate y*90*1 translate<-30,-60.9987,-43.008> }
object{Deco[6] scale 0.3 rotate x*360*0.653084 rotate y*90*1 translate<-30,-60.9987,-42.6475> }
object{Deco[0] scale 0.3 rotate x*360*0.0982219 rotate y*90*1 translate<-30,-60.9987,-42.3734> }
object{Deco[2] scale 0.3 rotate x*360*0.778509 rotate y*90*1 translate<-30,-60.9987,-42.0479> }
object{Deco[6] scale 0.3 rotate x*360*0.09356 rotate y*90*1 translate<-30,-60.9987,-42.0425> }
object{Deco[4] scale 0.3 rotate x*360*0.930172 rotate y*90*1 translate<-30,-60.9987,-41.8285> }
object{Deco[1] scale 0.3 rotate x*360*0.740367 rotate y*90*1 translate<-30,-60.9987,-41.7634> }
object{Deco[3] scale 0.3 rotate x*360*0.411195 rotate y*90*1 translate<-30,-60.9987,-41.4868> }
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-30,-60.9987,-43.5>}
cylinder{<-30,-60.9987,-36.1582>,<-30,-60.9987,-27.4808>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.379398 rotate y*90*1 translate<-30,-60.9987,-35.8569> }
object{Deco[2] scale 0.3 rotate x*360*0.982282 rotate y*90*1 translate<-30,-60.9987,-35.7256> }
object{Deco[4] scale 0.3 rotate x*360*0.26727 rotate y*90*1 translate<-30,-60.9987,-35.6617> }
object{Deco[4] scale 0.3 rotate x*360*0.704985 rotate y*90*1 translate<-30,-60.9987,-35.0117> }
object{Deco[0] scale 0.3 rotate x*360*0.244796 rotate y*90*1 translate<-30,-60.9987,-34.4906> }
object{Deco[1] scale 0.3 rotate x*360*0.183877 rotate y*90*1 translate<-30,-60.9987,-34.3196> }
object{Deco[1] scale 0.3 rotate x*360*0.746501 rotate y*90*1 translate<-30,-60.9987,-34.1463> }
object{Deco[2] scale 0.3 rotate x*360*0.256443 rotate y*90*1 translate<-30,-60.9987,-34.1396> }
object{Deco[2] scale 0.3 rotate x*360*0.95447 rotate y*90*1 translate<-30,-60.9987,-33.8618> }
object{Deco[0] scale 0.3 rotate x*360*0.358639 rotate y*90*1 translate<-30,-60.9987,-33.275> }
cylinder{<-30,-60.9987,-39.1582>,<-30,-60.9987,-36.1582>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.941103 rotate y*90*1 translate<-30,-60.9987,-38.9511> }
object{Deco[2] scale 0.3 rotate x*360*0.234658 rotate y*90*1 translate<-30,-60.9987,-38.7893> }
object{Deco[2] scale 0.3 rotate x*360*0.0652895 rotate y*90*1 translate<-30,-60.9987,-38.543> }
object{Deco[1] scale 0.3 rotate x*360*0.166164 rotate y*90*1 translate<-30,-60.9987,-38.5136> }
object{Deco[0] scale 0.3 rotate x*360*0.611404 rotate y*90*1 translate<-30,-60.9987,-38.3717> }
object{Deco[3] scale 0.3 rotate x*360*0.647418 rotate y*90*1 translate<-30,-60.9987,-38.253> }
object{Deco[4] scale 0.3 rotate x*360*0.333348 rotate y*90*1 translate<-30,-60.9987,-37.9876> }
object{Deco[1] scale 0.3 rotate x*360*0.820357 rotate y*90*1 translate<-30,-60.9987,-37.804> }
object{Deco[0] scale 0.3 rotate x*360*0.184023 rotate y*90*1 translate<-30,-60.9987,-37.5824> }
object{Deco[2] scale 0.3 rotate x*360*0.785488 rotate y*90*1 translate<-30,-60.9987,-37.3907> }
cylinder{<-28.5,-60.9987,-25.9808>,<-23.8292,-60.9987,-25.9808>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.348191 scale <1,1,1> translate<-28.442,-60.9987,-25.9808> }
object{Deco[4] scale 0.3 rotate x*360*0.631155 scale <1,1,1> translate<-28.0459,-60.9987,-25.9808> }
object{Deco[4] scale 0.3 rotate x*360*0.808581 scale <1,1,1> translate<-27.9608,-60.9987,-25.9808> }
object{Deco[0] scale 0.3 rotate x*360*0.325402 scale <1,1,1> translate<-27.9592,-60.9987,-25.9808> }
object{Deco[2] scale 0.3 rotate x*360*0.63419 scale <1,1,1> translate<-27.7202,-60.9987,-25.9808> }
object{Deco[2] scale 0.3 rotate x*360*0.531808 scale <1,1,1> translate<-27.5007,-60.9987,-25.9808> }
object{Deco[2] scale 0.3 rotate x*360*0.39059 scale <1,1,1> translate<-27.1553,-60.9987,-25.9808> }
object{Deco[0] scale 0.3 rotate x*360*0.853168 scale <1,1,1> translate<-26.8301,-60.9987,-25.9808> }
object{Deco[1] scale 0.3 rotate x*360*0.581585 scale <1,1,1> translate<-26.6221,-60.9987,-25.9808> }
object{Deco[0] scale 0.3 rotate x*360*0.448594 scale <1,1,1> translate<-26.3377,-60.9987,-25.9808> }
object{Elbow scale <1,1,-1> translate -z*1.5  translate <-28.5,-60.9987,-25.9808>}
cylinder{<-20.8292,-60.9987,-25.9808>,<-16.8288,-60.9987,-25.9808>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.734017 scale <1,1,1> translate<-20.7527,-60.9987,-25.9808> }
object{Deco[1] scale 0.3 rotate x*360*0.53788 scale <1,1,1> translate<-20.6234,-60.9987,-25.9808> }
object{Deco[4] scale 0.3 rotate x*360*0.917215 scale <1,1,1> translate<-20.2815,-60.9987,-25.9808> }
object{Deco[4] scale 0.3 rotate x*360*0.400729 scale <1,1,1> translate<-20.0936,-60.9987,-25.9808> }
object{Deco[5] scale 0.3 rotate x*360*0.553027 scale <1,1,1> translate<-19.7688,-60.9987,-25.9808> }
object{Deco[4] scale 0.3 rotate x*360*0.409351 scale <1,1,1> translate<-19.6528,-60.9987,-25.9808> }
object{Deco[4] scale 0.3 rotate x*360*0.612934 scale <1,1,1> translate<-19.6414,-60.9987,-25.9808> }
object{Deco[1] scale 0.3 rotate x*360*0.297811 scale <1,1,1> translate<-19.4975,-60.9987,-25.9808> }
object{Deco[1] scale 0.3 rotate x*360*0.281034 scale <1,1,1> translate<-19.4188,-60.9987,-25.9808> }
object{Deco[3] scale 0.3 rotate x*360*0.973766 scale <1,1,1> translate<-19.0923,-60.9987,-25.9808> }
cylinder{<-23.8292,-60.9987,-25.9808>,<-20.8292,-60.9987,-25.9808>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.78656 scale <1,1,1> translate<-23.8239,-60.9987,-25.9808> }
object{Deco[0] scale 0.3 rotate x*360*0.237522 scale <1,1,1> translate<-23.648,-60.9987,-25.9808> }
object{Deco[6] scale 0.3 rotate x*360*0.489469 scale <1,1,1> translate<-23.5867,-60.9987,-25.9808> }
object{Deco[0] scale 0.3 rotate x*360*0.43182 scale <1,1,1> translate<-23.4768,-60.9987,-25.9808> }
object{Deco[6] scale 0.3 rotate x*360*0.36961 scale <1,1,1> translate<-23.4058,-60.9987,-25.9808> }
object{Deco[2] scale 0.3 rotate x*360*0.996611 scale <1,1,1> translate<-23.3317,-60.9987,-25.9808> }
object{Deco[6] scale 0.3 rotate x*360*0.844399 scale <1,1,1> translate<-23.1636,-60.9987,-25.9808> }
object{Deco[3] scale 0.3 rotate x*360*0.236062 scale <1,1,1> translate<-22.9924,-60.9987,-25.9808> }
object{Deco[0] scale 0.3 rotate x*360*0.872154 scale <1,1,1> translate<-22.9418,-60.9987,-25.9808> }
object{Deco[2] scale 0.3 rotate x*360*0.414621 scale <1,1,1> translate<-22.7824,-60.9987,-25.9808> }
cylinder{<-15.3288,-59.4987,-25.9808>,<-15.3288,-50.9203,-25.9808>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.186013 rotate z*90*1 translate<-15.3288,-59.3811,-25.9808> }
object{Deco[2] scale 0.3 rotate x*360*0.908737 rotate z*90*1 translate<-15.3288,-58.6811,-25.9808> }
object{Deco[5] scale 0.3 rotate x*360*0.855983 rotate z*90*1 translate<-15.3288,-57.9349,-25.9808> }
object{Deco[5] scale 0.3 rotate x*360*0.112595 rotate z*90*1 translate<-15.3288,-57.7385,-25.9808> }
object{Deco[6] scale 0.3 rotate x*360*0.616274 rotate z*90*1 translate<-15.3288,-57.4649,-25.9808> }
object{Deco[0] scale 0.3 rotate x*360*0.908782 rotate z*90*1 translate<-15.3288,-57.2023,-25.9808> }
object{Deco[4] scale 0.3 rotate x*360*0.359396 rotate z*90*1 translate<-15.3288,-57.0756,-25.9808> }
object{Deco[5] scale 0.3 rotate x*360*0.789833 rotate z*90*1 translate<-15.3288,-56.8765,-25.9808> }
object{Deco[4] scale 0.3 rotate x*360*0.352472 rotate z*90*1 translate<-15.3288,-56.1516,-25.9808> }
object{Deco[3] scale 0.3 rotate x*360*0.702549 rotate z*90*1 translate<-15.3288,-55.4356,-25.9808> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1.5  translate <-15.3288,-59.4987,-25.9808>}
cylinder{<-15.3288,-49.4203,-27.4808>,<-15.3288,-49.4203,-31.7608>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.245638 rotate y*90*-1 translate<-15.3288,-49.4203,-27.7157> }
object{Deco[3] scale 0.3 rotate x*360*0.65159 rotate y*90*-1 translate<-15.3288,-49.4203,-28.0401> }
object{Deco[3] scale 0.3 rotate x*360*0.688036 rotate y*90*-1 translate<-15.3288,-49.4203,-28.0674> }
object{Deco[5] scale 0.3 rotate x*360*0.500909 rotate y*90*-1 translate<-15.3288,-49.4203,-28.2389> }
object{Deco[6] scale 0.3 rotate x*360*0.0225763 rotate y*90*-1 translate<-15.3288,-49.4203,-28.5958> }
object{Deco[0] scale 0.3 rotate x*360*0.617337 rotate y*90*-1 translate<-15.3288,-49.4203,-28.9076> }
object{Deco[3] scale 0.3 rotate x*360*0.574384 rotate y*90*-1 translate<-15.3288,-49.4203,-29.143> }
object{Deco[3] scale 0.3 rotate x*360*0.38734 rotate y*90*-1 translate<-15.3288,-49.4203,-29.3681> }
object{Deco[3] scale 0.3 rotate x*360*0.56831 rotate y*90*-1 translate<-15.3288,-49.4203,-29.4472> }
object{Deco[2] scale 0.3 rotate x*360*0.696422 rotate y*90*-1 translate<-15.3288,-49.4203,-29.5045> }
object{Elbow rotate y*180 rotate z*90 translate -y*1.5  translate <-15.3288,-49.4203,-27.4808>}
cylinder{<-13.8288,-49.4203,-33.2608>,<-10.5315,-49.4203,-33.2608>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.317853 scale <1,1,1> translate<-13.6956,-49.4203,-33.2608> }
object{Deco[5] scale 0.3 rotate x*360*0.701798 scale <1,1,1> translate<-13.6907,-49.4203,-33.2608> }
object{Deco[6] scale 0.3 rotate x*360*0.274568 scale <1,1,1> translate<-13.5511,-49.4203,-33.2608> }
object{Deco[4] scale 0.3 rotate x*360*0.11666 scale <1,1,1> translate<-13.29,-49.4203,-33.2608> }
object{Deco[4] scale 0.3 rotate x*360*0.743669 scale <1,1,1> translate<-13.1958,-49.4203,-33.2608> }
object{Deco[4] scale 0.3 rotate x*360*0.88729 scale <1,1,1> translate<-12.9549,-49.4203,-33.2608> }
object{Deco[2] scale 0.3 rotate x*360*0.377912 scale <1,1,1> translate<-12.7136,-49.4203,-33.2608> }
object{Deco[6] scale 0.3 rotate x*360*0.187153 scale <1,1,1> translate<-12.546,-49.4203,-33.2608> }
object{Deco[4] scale 0.3 rotate x*360*0.446304 scale <1,1,1> translate<-12.4362,-49.4203,-33.2608> }
object{Deco[3] scale 0.3 rotate x*360*0.784302 scale <1,1,1> translate<-12.1873,-49.4203,-33.2608> }
object{Elbow translate z*1.5  translate <-13.8288,-49.4203,-33.2608>}
cylinder{<-9.0315,-50.9203,-33.2608>,<-9.0315,-59.8692,-33.2608>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.270699 rotate z*90*-1 translate<-9.0315,-51.636,-33.2608> }
object{Deco[1] scale 0.3 rotate x*360*0.248204 rotate z*90*-1 translate<-9.0315,-51.7063,-33.2608> }
object{Deco[0] scale 0.3 rotate x*360*0.545145 rotate z*90*-1 translate<-9.0315,-51.9588,-33.2608> }
object{Deco[1] scale 0.3 rotate x*360*0.0578706 rotate z*90*-1 translate<-9.0315,-52.0796,-33.2608> }
object{Deco[4] scale 0.3 rotate x*360*0.700327 rotate z*90*-1 translate<-9.0315,-52.3108,-33.2608> }
object{Deco[1] scale 0.3 rotate x*360*0.686782 rotate z*90*-1 translate<-9.0315,-52.971,-33.2608> }
object{Deco[0] scale 0.3 rotate x*360*0.549155 rotate z*90*-1 translate<-9.0315,-53.0833,-33.2608> }
object{Deco[3] scale 0.3 rotate x*360*0.175966 rotate z*90*-1 translate<-9.0315,-53.1753,-33.2608> }
object{Deco[4] scale 0.3 rotate x*360*0.928715 rotate z*90*-1 translate<-9.0315,-53.5155,-33.2608> }
object{Deco[2] scale 0.3 rotate x*360*0.807375 rotate z*90*-1 translate<-9.0315,-53.6009,-33.2608> }
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <-9.0315,-50.9203,-33.2608>}
cylinder{<-10.5315,-61.3692,-33.2608>,<-19.0537,-61.3692,-33.2608>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.487844 scale <-1,1,1> translate<-10.7309,-61.3692,-33.2608> }
object{Deco[0] scale 0.3 rotate x*360*0.432775 scale <-1,1,1> translate<-11.322,-61.3692,-33.2608> }
object{Deco[1] scale 0.3 rotate x*360*0.0699572 scale <-1,1,1> translate<-11.3506,-61.3692,-33.2608> }
object{Deco[1] scale 0.3 rotate x*360*0.000688194 scale <-1,1,1> translate<-11.8,-61.3692,-33.2608> }
object{Deco[5] scale 0.3 rotate x*360*0.578953 scale <-1,1,1> translate<-12.546,-61.3692,-33.2608> }
object{Deco[5] scale 0.3 rotate x*360*0.187076 scale <-1,1,1> translate<-13.0264,-61.3692,-33.2608> }
object{Deco[4] scale 0.3 rotate x*360*0.757912 scale <-1,1,1> translate<-13.4103,-61.3692,-33.2608> }
object{Deco[2] scale 0.3 rotate x*360*0.168599 scale <-1,1,1> translate<-13.4943,-61.3692,-33.2608> }
object{Deco[6] scale 0.3 rotate x*360*0.973428 scale <-1,1,1> translate<-14.2689,-61.3692,-33.2608> }
object{Deco[1] scale 0.3 rotate x*360*0.0599519 scale <-1,1,1> translate<-14.8002,-61.3692,-33.2608> }
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <-10.5315,-61.3692,-33.2608>}
cylinder{<-20.5537,-61.3692,-34.7608>,<-20.5537,-61.3692,-38.0341>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.868579 rotate y*90*-1 translate<-20.5537,-61.3692,-34.7803> }
object{Deco[5] scale 0.3 rotate x*360*0.350604 rotate y*90*-1 translate<-20.5537,-61.3692,-35.0312> }
object{Deco[2] scale 0.3 rotate x*360*0.0598202 rotate y*90*-1 translate<-20.5537,-61.3692,-35.1333> }
object{Deco[0] scale 0.3 rotate x*360*0.199385 rotate y*90*-1 translate<-20.5537,-61.3692,-35.1862> }
object{Deco[0] scale 0.3 rotate x*360*0.831573 rotate y*90*-1 translate<-20.5537,-61.3692,-35.4466> }
object{Deco[5] scale 0.3 rotate x*360*0.762563 rotate y*90*-1 translate<-20.5537,-61.3692,-35.5515> }
object{Deco[0] scale 0.3 rotate x*360*0.564609 rotate y*90*-1 translate<-20.5537,-61.3692,-35.6362> }
object{Deco[1] scale 0.3 rotate x*360*0.807995 rotate y*90*-1 translate<-20.5537,-61.3692,-35.7454> }
object{Deco[4] scale 0.3 rotate x*360*0.553955 rotate y*90*-1 translate<-20.5537,-61.3692,-35.8621> }
object{Deco[3] scale 0.3 rotate x*360*0.28947 rotate y*90*-1 translate<-20.5537,-61.3692,-36.1199> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-20.5537,-61.3692,-34.7608>}
cylinder{<-22.0537,-61.3692,-39.5341>,<-28.5,-61.3692,-39.5341>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.827822 scale <-1,1,1> translate<-22.6003,-61.3692,-39.5341> }
object{Deco[4] scale 0.3 rotate x*360*0.0499091 scale <-1,1,1> translate<-22.719,-61.3692,-39.5341> }
object{Deco[1] scale 0.3 rotate x*360*0.366174 scale <-1,1,1> translate<-22.8322,-61.3692,-39.5341> }
object{Deco[5] scale 0.3 rotate x*360*0.486359 scale <-1,1,1> translate<-23.2159,-61.3692,-39.5341> }
object{Deco[2] scale 0.3 rotate x*360*0.675838 scale <-1,1,1> translate<-23.7652,-61.3692,-39.5341> }
object{Deco[3] scale 0.3 rotate x*360*0.990757 scale <-1,1,1> translate<-24.0351,-61.3692,-39.5341> }
object{Deco[4] scale 0.3 rotate x*360*0.420295 scale <-1,1,1> translate<-24.2859,-61.3692,-39.5341> }
object{Deco[4] scale 0.3 rotate x*360*0.565225 scale <-1,1,1> translate<-24.6748,-61.3692,-39.5341> }
object{Deco[4] scale 0.3 rotate x*360*0.659431 scale <-1,1,1> translate<-24.9776,-61.3692,-39.5341> }
object{Deco[6] scale 0.3 rotate x*360*0.696491 scale <-1,1,1> translate<-25.2815,-61.3692,-39.5341> }
object{Elbow scale <-1,1,1> translate z*1.5  translate <-22.0537,-61.3692,-39.5341>}
cylinder{<-30,-61.3692,-38.0341>,<-30,-61.3692,-32.8573>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.296114 rotate y*90*1 translate<-30,-61.3692,-37.7383> }
object{Deco[4] scale 0.3 rotate x*360*0.532033 rotate y*90*1 translate<-30,-61.3692,-37.3644> }
object{Deco[4] scale 0.3 rotate x*360*0.481085 rotate y*90*1 translate<-30,-61.3692,-36.9804> }
object{Deco[0] scale 0.3 rotate x*360*0.272132 rotate y*90*1 translate<-30,-61.3692,-36.7783> }
object{Deco[6] scale 0.3 rotate x*360*0.0950244 rotate y*90*1 translate<-30,-61.3692,-36.5639> }
object{Deco[5] scale 0.3 rotate x*360*0.652297 rotate y*90*1 translate<-30,-61.3692,-36.2233> }
object{Deco[4] scale 0.3 rotate x*360*0.666645 rotate y*90*1 translate<-30,-61.3692,-36.052> }
object{Deco[0] scale 0.3 rotate x*360*0.739482 rotate y*90*1 translate<-30,-61.3692,-35.7103> }
object{Deco[2] scale 0.3 rotate x*360*0.294616 rotate y*90*1 translate<-30,-61.3692,-35.2696> }
object{Deco[6] scale 0.3 rotate x*360*0.934701 rotate y*90*1 translate<-30,-61.3692,-35.2265> }
object{Elbow translate x*1.5  translate <-30,-61.3692,-38.0341>}
cylinder{<-28.5,-61.3692,-31.3573>,<-21.8147,-61.3692,-31.3573>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.719622 scale <1,1,1> translate<-28.4617,-61.3692,-31.3573> }
object{Deco[6] scale 0.3 rotate x*360*0.751444 scale <1,1,1> translate<-28.0662,-61.3692,-31.3573> }
object{Deco[5] scale 0.3 rotate x*360*0.537243 scale <1,1,1> translate<-27.6367,-61.3692,-31.3573> }
object{Deco[4] scale 0.3 rotate x*360*0.545352 scale <1,1,1> translate<-27.2588,-61.3692,-31.3573> }
object{Deco[2] scale 0.3 rotate x*360*0.838034 scale <1,1,1> translate<-27.1817,-61.3692,-31.3573> }
object{Deco[6] scale 0.3 rotate x*360*0.730949 scale <1,1,1> translate<-27.0297,-61.3692,-31.3573> }
object{Deco[2] scale 0.3 rotate x*360*0.53596 scale <1,1,1> translate<-27.0014,-61.3692,-31.3573> }
object{Deco[4] scale 0.3 rotate x*360*0.458086 scale <1,1,1> translate<-26.8582,-61.3692,-31.3573> }
object{Deco[0] scale 0.3 rotate x*360*0.479897 scale <1,1,1> translate<-26.3394,-61.3692,-31.3573> }
object{Deco[0] scale 0.3 rotate x*360*0.110912 scale <1,1,1> translate<-25.9668,-61.3692,-31.3573> }
object{Elbow scale <1,1,-1> translate -z*1.5  translate <-28.5,-61.3692,-31.3573>}
cylinder{<-20.3147,-62.8692,-31.3573>,<-20.3147,-66.9527,-31.3573>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.0601387 rotate z*90*-1 translate<-20.3147,-62.9757,-31.3573> }
object{Deco[3] scale 0.3 rotate x*360*0.615734 rotate z*90*-1 translate<-20.3147,-63.3027,-31.3573> }
object{Deco[1] scale 0.3 rotate x*360*0.307963 rotate z*90*-1 translate<-20.3147,-63.5351,-31.3573> }
object{Deco[1] scale 0.3 rotate x*360*0.872791 rotate z*90*-1 translate<-20.3147,-63.5557,-31.3573> }
object{Deco[4] scale 0.3 rotate x*360*0.419393 rotate z*90*-1 translate<-20.3147,-63.5703,-31.3573> }
object{Deco[1] scale 0.3 rotate x*360*0.413602 rotate z*90*-1 translate<-20.3147,-63.7467,-31.3573> }
object{Deco[0] scale 0.3 rotate x*360*0.151162 rotate z*90*-1 translate<-20.3147,-64.0977,-31.3573> }
object{Deco[1] scale 0.3 rotate x*360*0.676481 rotate z*90*-1 translate<-20.3147,-64.4044,-31.3573> }
object{Deco[5] scale 0.3 rotate x*360*0.251285 rotate z*90*-1 translate<-20.3147,-64.4462,-31.3573> }
object{Deco[3] scale 0.3 rotate x*360*0.78506 rotate z*90*-1 translate<-20.3147,-64.7019,-31.3573> }
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <-20.3147,-62.8692,-31.3573>}
cylinder{<-20.3147,-69.9527,-31.3573>,<-20.3147,-78.4238,-31.3573>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.795081 rotate z*90*-1 translate<-20.3147,-70.331,-31.3573> }
object{Deco[6] scale 0.3 rotate x*360*0.985621 rotate z*90*-1 translate<-20.3147,-70.8491,-31.3573> }
object{Deco[6] scale 0.3 rotate x*360*0.207186 rotate z*90*-1 translate<-20.3147,-71.3113,-31.3573> }
object{Deco[5] scale 0.3 rotate x*360*0.399347 rotate z*90*-1 translate<-20.3147,-71.5094,-31.3573> }
object{Deco[2] scale 0.3 rotate x*360*0.119253 rotate z*90*-1 translate<-20.3147,-72.0263,-31.3573> }
object{Deco[2] scale 0.3 rotate x*360*0.0902709 rotate z*90*-1 translate<-20.3147,-72.1521,-31.3573> }
object{Deco[2] scale 0.3 rotate x*360*0.525804 rotate z*90*-1 translate<-20.3147,-72.1875,-31.3573> }
object{Deco[2] scale 0.3 rotate x*360*0.178236 rotate z*90*-1 translate<-20.3147,-72.2531,-31.3573> }
object{Deco[6] scale 0.3 rotate x*360*0.660415 rotate z*90*-1 translate<-20.3147,-72.4048,-31.3573> }
object{Deco[2] scale 0.3 rotate x*360*0.970207 rotate z*90*-1 translate<-20.3147,-72.7923,-31.3573> }
cylinder{<-20.3147,-66.9527,-31.3573>,<-20.3147,-69.9527,-31.3573>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.00811888 rotate z*90*-1 translate<-20.3147,-67.1609,-31.3573> }
object{Deco[6] scale 0.3 rotate x*360*0.292487 rotate z*90*-1 translate<-20.3147,-67.4236,-31.3573> }
object{Deco[4] scale 0.3 rotate x*360*0.921105 rotate z*90*-1 translate<-20.3147,-67.4885,-31.3573> }
object{Deco[2] scale 0.3 rotate x*360*0.456935 rotate z*90*-1 translate<-20.3147,-67.6949,-31.3573> }
object{Deco[5] scale 0.3 rotate x*360*0.891526 rotate z*90*-1 translate<-20.3147,-67.9376,-31.3573> }
object{Deco[6] scale 0.3 rotate x*360*0.406691 rotate z*90*-1 translate<-20.3147,-68.0675,-31.3573> }
object{Deco[2] scale 0.3 rotate x*360*0.84875 rotate z*90*-1 translate<-20.3147,-68.3239,-31.3573> }
object{Deco[3] scale 0.3 rotate x*360*0.552785 rotate z*90*-1 translate<-20.3147,-68.548,-31.3573> }
object{Deco[4] scale 0.3 rotate x*360*0.232121 rotate z*90*-1 translate<-20.3147,-68.7591,-31.3573> }
object{Deco[5] scale 0.3 rotate x*360*0.817843 rotate z*90*-1 translate<-20.3147,-68.7739,-31.3573> }
cylinder{<-20.3147,-79.9238,-29.8573>,<-20.3147,-79.9238,-26.062>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.310029 rotate y*90*1 translate<-20.3147,-79.9238,-29.8203> }
object{Deco[6] scale 0.3 rotate x*360*0.0841502 rotate y*90*1 translate<-20.3147,-79.9238,-29.7308> }
object{Deco[3] scale 0.3 rotate x*360*0.146131 rotate y*90*1 translate<-20.3147,-79.9238,-29.4536> }
object{Deco[1] scale 0.3 rotate x*360*0.587605 rotate y*90*1 translate<-20.3147,-79.9238,-29.2233> }
object{Deco[3] scale 0.3 rotate x*360*0.959943 rotate y*90*1 translate<-20.3147,-79.9238,-29.0413> }
object{Deco[5] scale 0.3 rotate x*360*0.625362 rotate y*90*1 translate<-20.3147,-79.9238,-28.8614> }
object{Deco[0] scale 0.3 rotate x*360*0.370369 rotate y*90*1 translate<-20.3147,-79.9238,-28.6255> }
object{Deco[0] scale 0.3 rotate x*360*0.722813 rotate y*90*1 translate<-20.3147,-79.9238,-28.2826> }
object{Deco[2] scale 0.3 rotate x*360*0.983317 rotate y*90*1 translate<-20.3147,-79.9238,-28.1719> }
object{Deco[4] scale 0.3 rotate x*360*0.973187 rotate y*90*1 translate<-20.3147,-79.9238,-28.1552> }
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1.5  translate <-20.3147,-79.9238,-29.8573>}
cylinder{<-20.3147,-79.9238,-23.062>,<-20.3147,-79.9238,-18.9138>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.0101252 rotate y*90*1 translate<-20.3147,-79.9238,-22.8287> }
object{Deco[6] scale 0.3 rotate x*360*0.46998 rotate y*90*1 translate<-20.3147,-79.9238,-22.4841> }
object{Deco[0] scale 0.3 rotate x*360*0.0984542 rotate y*90*1 translate<-20.3147,-79.9238,-22.4148> }
object{Deco[2] scale 0.3 rotate x*360*0.285319 rotate y*90*1 translate<-20.3147,-79.9238,-22.3419> }
object{Deco[2] scale 0.3 rotate x*360*0.52672 rotate y*90*1 translate<-20.3147,-79.9238,-22.1533> }
object{Deco[1] scale 0.3 rotate x*360*0.567854 rotate y*90*1 translate<-20.3147,-79.9238,-22.0239> }
object{Deco[0] scale 0.3 rotate x*360*0.142919 rotate y*90*1 translate<-20.3147,-79.9238,-21.8128> }
object{Deco[4] scale 0.3 rotate x*360*0.0418093 rotate y*90*1 translate<-20.3147,-79.9238,-21.5771> }
object{Deco[4] scale 0.3 rotate x*360*0.856729 rotate y*90*1 translate<-20.3147,-79.9238,-21.4896> }
object{Deco[3] scale 0.3 rotate x*360*0.887524 rotate y*90*1 translate<-20.3147,-79.9238,-21.229> }
cylinder{<-20.3147,-79.9238,-26.062>,<-20.3147,-79.9238,-23.062>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.0089202 rotate y*90*1 translate<-20.3147,-79.9238,-25.8078> }
object{Deco[6] scale 0.3 rotate x*360*0.776574 rotate y*90*1 translate<-20.3147,-79.9238,-25.5433> }
object{Deco[6] scale 0.3 rotate x*360*0.759712 rotate y*90*1 translate<-20.3147,-79.9238,-25.4685> }
object{Deco[6] scale 0.3 rotate x*360*0.766591 rotate y*90*1 translate<-20.3147,-79.9238,-25.4426> }
object{Deco[6] scale 0.3 rotate x*360*0.664155 rotate y*90*1 translate<-20.3147,-79.9238,-25.2272> }
object{Deco[4] scale 0.3 rotate x*360*0.289774 rotate y*90*1 translate<-20.3147,-79.9238,-25.0556> }
object{Deco[2] scale 0.3 rotate x*360*0.642662 rotate y*90*1 translate<-20.3147,-79.9238,-24.9183> }
object{Deco[1] scale 0.3 rotate x*360*0.505263 rotate y*90*1 translate<-20.3147,-79.9238,-24.7419> }
object{Deco[6] scale 0.3 rotate x*360*0.977692 rotate y*90*1 translate<-20.3147,-79.9238,-24.7251> }
object{Deco[6] scale 0.3 rotate x*360*0.423182 rotate y*90*1 translate<-20.3147,-79.9238,-24.5411> }
cylinder{<-21.8147,-79.9238,-17.4138>,<-25.1586,-79.9238,-17.4138>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.752852 scale <-1,1,1> translate<-21.9167,-79.9238,-17.4138> }
object{Deco[5] scale 0.3 rotate x*360*0.902159 scale <-1,1,1> translate<-22.1478,-79.9238,-17.4138> }
object{Deco[0] scale 0.3 rotate x*360*0.802514 scale <-1,1,1> translate<-22.2054,-79.9238,-17.4138> }
object{Deco[5] scale 0.3 rotate x*360*0.647365 scale <-1,1,1> translate<-22.2853,-79.9238,-17.4138> }
object{Deco[3] scale 0.3 rotate x*360*0.891686 scale <-1,1,1> translate<-22.5779,-79.9238,-17.4138> }
object{Deco[4] scale 0.3 rotate x*360*0.16359 scale <-1,1,1> translate<-22.7478,-79.9238,-17.4138> }
object{Deco[1] scale 0.3 rotate x*360*0.146774 scale <-1,1,1> translate<-22.9895,-79.9238,-17.4138> }
object{Deco[1] scale 0.3 rotate x*360*0.502135 scale <-1,1,1> translate<-23.0665,-79.9238,-17.4138> }
object{Deco[4] scale 0.3 rotate x*360*0.295694 scale <-1,1,1> translate<-23.2515,-79.9238,-17.4138> }
object{Deco[5] scale 0.3 rotate x*360*0.388864 scale <-1,1,1> translate<-23.3521,-79.9238,-17.4138> }
object{Elbow scale <-1,1,-1> translate -z*1.5  translate <-21.8147,-79.9238,-17.4138>}
cylinder{<-28.1586,-79.9238,-17.4138>,<-28.5,-79.9238,-17.4138>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.091663 scale <-1,1,1> translate<-28.1686,-79.9238,-17.4138> }
object{Deco[5] scale 0.3 rotate x*360*0.547699 scale <-1,1,1> translate<-28.1905,-79.9238,-17.4138> }
object{Deco[4] scale 0.3 rotate x*360*0.474199 scale <-1,1,1> translate<-28.1964,-79.9238,-17.4138> }
object{Deco[3] scale 0.3 rotate x*360*0.923866 scale <-1,1,1> translate<-28.2,-79.9238,-17.4138> }
object{Deco[4] scale 0.3 rotate x*360*0.070253 scale <-1,1,1> translate<-28.2063,-79.9238,-17.4138> }
object{Deco[4] scale 0.3 rotate x*360*0.219853 scale <-1,1,1> translate<-28.2279,-79.9238,-17.4138> }
object{Deco[1] scale 0.3 rotate x*360*0.42755 scale <-1,1,1> translate<-28.2579,-79.9238,-17.4138> }
object{Deco[0] scale 0.3 rotate x*360*0.561252 scale <-1,1,1> translate<-28.2721,-79.9238,-17.4138> }
object{Deco[4] scale 0.3 rotate x*360*0.18871 scale <-1,1,1> translate<-28.2938,-79.9238,-17.4138> }
object{Deco[6] scale 0.3 rotate x*360*0.435079 scale <-1,1,1> translate<-28.3051,-79.9238,-17.4138> }
cylinder{<-25.1586,-79.9238,-17.4138>,<-28.1586,-79.9238,-17.4138>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.659585 scale <-1,1,1> translate<-25.259,-79.9238,-17.4138> }
object{Deco[0] scale 0.3 rotate x*360*0.952811 scale <-1,1,1> translate<-25.4328,-79.9238,-17.4138> }
object{Deco[1] scale 0.3 rotate x*360*0.367864 scale <-1,1,1> translate<-25.6993,-79.9238,-17.4138> }
object{Deco[5] scale 0.3 rotate x*360*0.188093 scale <-1,1,1> translate<-25.7359,-79.9238,-17.4138> }
object{Deco[3] scale 0.3 rotate x*360*0.402072 scale <-1,1,1> translate<-25.9923,-79.9238,-17.4138> }
object{Deco[0] scale 0.3 rotate x*360*0.238143 scale <-1,1,1> translate<-26.0136,-79.9238,-17.4138> }
object{Deco[1] scale 0.3 rotate x*360*0.650255 scale <-1,1,1> translate<-26.1376,-79.9238,-17.4138> }
object{Deco[6] scale 0.3 rotate x*360*0.0768718 scale <-1,1,1> translate<-26.1454,-79.9238,-17.4138> }
object{Deco[4] scale 0.3 rotate x*360*0.582006 scale <-1,1,1> translate<-26.2631,-79.9238,-17.4138> }
object{Deco[6] scale 0.3 rotate x*360*0.350693 scale <-1,1,1> translate<-26.2903,-79.9238,-17.4138> }
cylinder{<-30,-79.9238,-18.9138>,<-30,-79.9238,-26.329>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.346407 rotate y*90*-1 translate<-30,-79.9238,-19.2544> }
object{Deco[5] scale 0.3 rotate x*360*0.443081 rotate y*90*-1 translate<-30,-79.9238,-19.9134> }
object{Deco[3] scale 0.3 rotate x*360*0.805298 rotate y*90*-1 translate<-30,-79.9238,-20.1293> }
object{Deco[1] scale 0.3 rotate x*360*0.157699 rotate y*90*-1 translate<-30,-79.9238,-20.7789> }
object{Deco[5] scale 0.3 rotate x*360*0.908911 rotate y*90*-1 translate<-30,-79.9238,-20.8505> }
object{Deco[6] scale 0.3 rotate x*360*0.16634 rotate y*90*-1 translate<-30,-79.9238,-21.4901> }
object{Deco[2] scale 0.3 rotate x*360*0.443613 rotate y*90*-1 translate<-30,-79.9238,-21.6644> }
object{Deco[3] scale 0.3 rotate x*360*0.0395631 rotate y*90*-1 translate<-30,-79.9238,-21.7461> }
object{Deco[1] scale 0.3 rotate x*360*0.039135 rotate y*90*-1 translate<-30,-79.9238,-22.0124> }
object{Deco[0] scale 0.3 rotate x*360*0.672916 rotate y*90*-1 translate<-30,-79.9238,-22.4862> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-30,-79.9238,-18.9138>}
cylinder{<-30,-78.4238,-27.829>,<-30,-69.748,-27.829>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.628288 rotate z*90*1 translate<-30,-77.9722,-27.829> }
object{Deco[1] scale 0.3 rotate x*360*0.751717 rotate z*90*1 translate<-30,-77.7963,-27.829> }
object{Deco[6] scale 0.3 rotate x*360*0.649081 rotate z*90*1 translate<-30,-77.6056,-27.829> }
object{Deco[3] scale 0.3 rotate x*360*0.595354 rotate z*90*1 translate<-30,-77.2647,-27.829> }
object{Deco[1] scale 0.3 rotate x*360*0.026744 rotate z*90*1 translate<-30,-76.9317,-27.829> }
object{Deco[6] scale 0.3 rotate x*360*0.677924 rotate z*90*1 translate<-30,-76.2749,-27.829> }
object{Deco[5] scale 0.3 rotate x*360*0.814392 rotate z*90*1 translate<-30,-75.8075,-27.829> }
object{Deco[1] scale 0.3 rotate x*360*0.190577 rotate z*90*1 translate<-30,-75.2232,-27.829> }
object{Deco[4] scale 0.3 rotate x*360*0.125657 rotate z*90*1 translate<-30,-74.9627,-27.829> }
object{Deco[2] scale 0.3 rotate x*360*0.582887 rotate z*90*1 translate<-30,-74.9042,-27.829> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1.5  translate <-30,-78.4238,-27.829>}
cylinder{<-28.5,-68.248,-27.829>,<-20.104,-68.248,-27.829>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.541512 scale <1,1,1> translate<-28.4262,-68.248,-27.829> }
object{Deco[6] scale 0.3 rotate x*360*0.334618 scale <1,1,1> translate<-27.9057,-68.248,-27.829> }
object{Deco[5] scale 0.3 rotate x*360*0.380842 scale <1,1,1> translate<-27.8658,-68.248,-27.829> }
object{Deco[4] scale 0.3 rotate x*360*0.853142 scale <1,1,1> translate<-27.762,-68.248,-27.829> }
object{Deco[1] scale 0.3 rotate x*360*0.690564 scale <1,1,1> translate<-27.6841,-68.248,-27.829> }
object{Deco[2] scale 0.3 rotate x*360*0.565419 scale <1,1,1> translate<-27.5275,-68.248,-27.829> }
object{Deco[0] scale 0.3 rotate x*360*0.819168 scale <1,1,1> translate<-27.1039,-68.248,-27.829> }
object{Deco[6] scale 0.3 rotate x*360*0.275247 scale <1,1,1> translate<-27.0114,-68.248,-27.829> }
object{Deco[6] scale 0.3 rotate x*360*0.359261 scale <1,1,1> translate<-26.9819,-68.248,-27.829> }
object{Deco[3] scale 0.3 rotate x*360*0.784515 scale <1,1,1> translate<-26.9162,-68.248,-27.829> }
object{Elbow translate z*1.5 rotate y*90 rotate x*-90 translate -x*1.5 translate -y*1.5  translate <-28.5,-68.248,-27.829>}
cylinder{<-18.604,-68.248,-26.329>,<-18.604,-68.248,-21.0076>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.593405 rotate y*90*1 translate<-18.604,-68.248,-25.8786> }
object{Deco[1] scale 0.3 rotate x*360*0.667196 rotate y*90*1 translate<-18.604,-68.248,-25.6867> }
object{Deco[2] scale 0.3 rotate x*360*0.232414 rotate y*90*1 translate<-18.604,-68.248,-25.5269> }
object{Deco[2] scale 0.3 rotate x*360*0.476964 rotate y*90*1 translate<-18.604,-68.248,-25.2149> }
object{Deco[6] scale 0.3 rotate x*360*0.152672 rotate y*90*1 translate<-18.604,-68.248,-24.76> }
object{Deco[5] scale 0.3 rotate x*360*0.0109771 rotate y*90*1 translate<-18.604,-68.248,-24.6361> }
object{Deco[2] scale 0.3 rotate x*360*0.160671 rotate y*90*1 translate<-18.604,-68.248,-24.4592> }
object{Deco[6] scale 0.3 rotate x*360*0.453294 rotate y*90*1 translate<-18.604,-68.248,-24.4173> }
object{Deco[5] scale 0.3 rotate x*360*0.660262 rotate y*90*1 translate<-18.604,-68.248,-24.2308> }
object{Deco[5] scale 0.3 rotate x*360*0.0464582 rotate y*90*1 translate<-18.604,-68.248,-23.9854> }
object{Elbow rotate y*-90 translate -x*1.5  translate <-18.604,-68.248,-26.329>}
cylinder{<-18.604,-69.748,-19.5076>,<-18.604,-77.745,-19.5076>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.987477 rotate z*90*-1 translate<-18.604,-69.7553,-19.5076> }
object{Deco[0] scale 0.3 rotate x*360*0.177735 rotate z*90*-1 translate<-18.604,-69.771,-19.5076> }
object{Deco[1] scale 0.3 rotate x*360*0.148525 rotate z*90*-1 translate<-18.604,-70.2776,-19.5076> }
object{Deco[5] scale 0.3 rotate x*360*0.132422 rotate z*90*-1 translate<-18.604,-70.3405,-19.5076> }
object{Deco[5] scale 0.3 rotate x*360*0.813847 rotate z*90*-1 translate<-18.604,-70.855,-19.5076> }
object{Deco[0] scale 0.3 rotate x*360*0.974477 rotate z*90*-1 translate<-18.604,-71.2419,-19.5076> }
object{Deco[0] scale 0.3 rotate x*360*0.892959 rotate z*90*-1 translate<-18.604,-71.5468,-19.5076> }
object{Deco[1] scale 0.3 rotate x*360*0.911283 rotate z*90*-1 translate<-18.604,-71.6278,-19.5076> }
object{Deco[3] scale 0.3 rotate x*360*0.437384 rotate z*90*-1 translate<-18.604,-71.8733,-19.5076> }
object{Deco[1] scale 0.3 rotate x*360*0.319889 rotate z*90*-1 translate<-18.604,-72.5772,-19.5076> }
object{Elbow rotate y*90 rotate -z*90 translate -z*1.5  translate <-18.604,-69.748,-19.5076>}
cylinder{<-17.104,-79.245,-19.5076>,<-11.9875,-79.245,-19.5076>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.904271 scale <1,1,1> translate<-16.9397,-79.245,-19.5076> }
object{Deco[2] scale 0.3 rotate x*360*0.117577 scale <1,1,1> translate<-16.5862,-79.245,-19.5076> }
object{Deco[1] scale 0.3 rotate x*360*0.871239 scale <1,1,1> translate<-16.2926,-79.245,-19.5076> }
object{Deco[5] scale 0.3 rotate x*360*0.480039 scale <1,1,1> translate<-16.233,-79.245,-19.5076> }
object{Deco[2] scale 0.3 rotate x*360*0.907365 scale <1,1,1> translate<-15.7863,-79.245,-19.5076> }
object{Deco[3] scale 0.3 rotate x*360*0.486557 scale <1,1,1> translate<-15.757,-79.245,-19.5076> }
object{Deco[3] scale 0.3 rotate x*360*0.607708 scale <1,1,1> translate<-15.5688,-79.245,-19.5076> }
object{Deco[3] scale 0.3 rotate x*360*0.19841 scale <1,1,1> translate<-15.4881,-79.245,-19.5076> }
object{Deco[5] scale 0.3 rotate x*360*0.945387 scale <1,1,1> translate<-15.1589,-79.245,-19.5076> }
object{Deco[2] scale 0.3 rotate x*360*0.508492 scale <1,1,1> translate<-15.0805,-79.245,-19.5076> }
object{Elbow rotate -x*90 translate y*1.5  translate <-17.104,-79.245,-19.5076>}
cylinder{<-10.4875,-79.245,-18.0076>,<-10.4875,-79.245,-12.6654>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.0399525 rotate y*90*1 translate<-10.4875,-79.245,-17.949> }
object{Deco[5] scale 0.3 rotate x*360*0.69119 rotate y*90*1 translate<-10.4875,-79.245,-17.5152> }
object{Deco[1] scale 0.3 rotate x*360*0.783247 rotate y*90*1 translate<-10.4875,-79.245,-17.0886> }
object{Deco[2] scale 0.3 rotate x*360*0.758463 rotate y*90*1 translate<-10.4875,-79.245,-17.0205> }
object{Deco[2] scale 0.3 rotate x*360*0.432128 rotate y*90*1 translate<-10.4875,-79.245,-16.707> }
object{Deco[4] scale 0.3 rotate x*360*0.780984 rotate y*90*1 translate<-10.4875,-79.245,-16.6066> }
object{Deco[3] scale 0.3 rotate x*360*0.787218 rotate y*90*1 translate<-10.4875,-79.245,-16.3517> }
object{Deco[0] scale 0.3 rotate x*360*0.691992 rotate y*90*1 translate<-10.4875,-79.245,-16.2525> }
object{Deco[2] scale 0.3 rotate x*360*0.454658 rotate y*90*1 translate<-10.4875,-79.245,-15.7917> }
object{Deco[6] scale 0.3 rotate x*360*0.969081 rotate y*90*1 translate<-10.4875,-79.245,-15.6044> }
object{Elbow rotate y*-90 translate -x*1.5  translate <-10.4875,-79.245,-18.0076>}
cylinder{<-10.4875,-79.245,-9.66545>,<-10.4875,-79.245,-2.36021>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.606315 rotate y*90*1 translate<-10.4875,-79.245,-9.25841> }
object{Deco[2] scale 0.3 rotate x*360*0.0561667 rotate y*90*1 translate<-10.4875,-79.245,-8.73949> }
object{Deco[4] scale 0.3 rotate x*360*0.907864 rotate y*90*1 translate<-10.4875,-79.245,-8.44114> }
object{Deco[4] scale 0.3 rotate x*360*0.784464 rotate y*90*1 translate<-10.4875,-79.245,-8.31069> }
object{Deco[2] scale 0.3 rotate x*360*0.152663 rotate y*90*1 translate<-10.4875,-79.245,-8.24358> }
object{Deco[1] scale 0.3 rotate x*360*0.294646 rotate y*90*1 translate<-10.4875,-79.245,-7.81273> }
object{Deco[4] scale 0.3 rotate x*360*0.804414 rotate y*90*1 translate<-10.4875,-79.245,-7.48043> }
object{Deco[0] scale 0.3 rotate x*360*0.597475 rotate y*90*1 translate<-10.4875,-79.245,-7.42234> }
object{Deco[1] scale 0.3 rotate x*360*0.251208 rotate y*90*1 translate<-10.4875,-79.245,-7.31991> }
object{Deco[3] scale 0.3 rotate x*360*0.511592 rotate y*90*1 translate<-10.4875,-79.245,-7.00412> }
cylinder{<-10.4875,-79.245,-12.6654>,<-10.4875,-79.245,-9.66545>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.271294 rotate y*90*1 translate<-10.4875,-79.245,-12.4856> }
object{Deco[2] scale 0.3 rotate x*360*0.86219 rotate y*90*1 translate<-10.4875,-79.245,-12.3711> }
object{Deco[2] scale 0.3 rotate x*360*0.619728 rotate y*90*1 translate<-10.4875,-79.245,-12.3128> }
object{Deco[6] scale 0.3 rotate x*360*0.0734519 rotate y*90*1 translate<-10.4875,-79.245,-12.0457> }
object{Deco[6] scale 0.3 rotate x*360*0.0553306 rotate y*90*1 translate<-10.4875,-79.245,-11.8818> }
object{Deco[4] scale 0.3 rotate x*360*0.403387 rotate y*90*1 translate<-10.4875,-79.245,-11.621> }
object{Deco[4] scale 0.3 rotate x*360*0.565912 rotate y*90*1 translate<-10.4875,-79.245,-11.4369> }
object{Deco[6] scale 0.3 rotate x*360*0.660566 rotate y*90*1 translate<-10.4875,-79.245,-11.3047> }
object{Deco[6] scale 0.3 rotate x*360*0.0584728 rotate y*90*1 translate<-10.4875,-79.245,-11.2272> }
object{Deco[4] scale 0.3 rotate x*360*0.872096 rotate y*90*1 translate<-10.4875,-79.245,-11.1151> }
cylinder{<-10.4875,-77.745,-0.860212>,<-10.4875,-72.3505,-0.860212>,0.3}
object{Elbow rotate z*90 scale <1,1,-1> translate <-10.4875,-77.745,-0.860212>}
cylinder{<-10.4875,-69.3505,-0.860212>,<-10.4875,-60.539,-0.860212>,0.3}
cylinder{<-10.4875,-72.3505,-0.860212>,<-10.4875,-69.3505,-0.860212>,0.3}
cylinder{<-10.4875,-59.039,0.639788>,<-10.4875,-59.039,8.76171>,0.3}
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-10.4875,-59.039,0.639788>}
cylinder{<-10.4875,-57.539,10.2617>,<-10.4875,-50.6289,10.2617>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.931806 rotate z*90*1 translate<-10.4875,-57.4051,10.2617> }
object{Deco[0] scale 0.3 rotate x*360*0.251167 rotate z*90*1 translate<-10.4875,-57.2305,10.2617> }
object{Deco[1] scale 0.3 rotate x*360*0.627355 rotate z*90*1 translate<-10.4875,-57.0487,10.2617> }
object{Deco[0] scale 0.3 rotate x*360*0.812743 rotate z*90*1 translate<-10.4875,-56.76,10.2617> }
object{Deco[5] scale 0.3 rotate x*360*0.472478 rotate z*90*1 translate<-10.4875,-56.6527,10.2617> }
object{Deco[2] scale 0.3 rotate x*360*0.713928 rotate z*90*1 translate<-10.4875,-56.0327,10.2617> }
object{Deco[4] scale 0.3 rotate x*360*0.0363448 rotate z*90*1 translate<-10.4875,-55.6204,10.2617> }
object{Deco[6] scale 0.3 rotate x*360*0.587494 rotate z*90*1 translate<-10.4875,-55.4057,10.2617> }
object{Deco[2] scale 0.3 rotate x*360*0.392521 rotate z*90*1 translate<-10.4875,-55.4008,10.2617> }
object{Deco[3] scale 0.3 rotate x*360*0.73793 rotate z*90*1 translate<-10.4875,-55.3525,10.2617> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-10.4875,-57.539,10.2617>}
cylinder{<-10.4875,-49.1289,11.7617>,<-10.4875,-49.1289,19.2255>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.192981 rotate y*90*1 translate<-10.4875,-49.1289,11.934> }
object{Deco[2] scale 0.3 rotate x*360*0.912553 rotate y*90*1 translate<-10.4875,-49.1289,12.3578> }
object{Deco[1] scale 0.3 rotate x*360*0.326768 rotate y*90*1 translate<-10.4875,-49.1289,12.8997> }
object{Deco[4] scale 0.3 rotate x*360*0.547116 rotate y*90*1 translate<-10.4875,-49.1289,13.2743> }
object{Deco[3] scale 0.3 rotate x*360*0.486544 rotate y*90*1 translate<-10.4875,-49.1289,13.7331> }
object{Deco[6] scale 0.3 rotate x*360*0.991088 rotate y*90*1 translate<-10.4875,-49.1289,14.4072> }
object{Deco[1] scale 0.3 rotate x*360*0.103352 rotate y*90*1 translate<-10.4875,-49.1289,14.6487> }
object{Deco[3] scale 0.3 rotate x*360*0.211909 rotate y*90*1 translate<-10.4875,-49.1289,14.8941> }
object{Deco[3] scale 0.3 rotate x*360*0.763236 rotate y*90*1 translate<-10.4875,-49.1289,15.301> }
object{Deco[5] scale 0.3 rotate x*360*0.970164 rotate y*90*1 translate<-10.4875,-49.1289,15.8731> }
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-10.4875,-49.1289,11.7617>}
cylinder{<-10.4875,-47.6289,20.7255>,<-10.4875,-39.7613,20.7255>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.476373 rotate z*90*1 translate<-10.4875,-47.5743,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.943718 rotate z*90*1 translate<-10.4875,-46.9493,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.0538383 rotate z*90*1 translate<-10.4875,-46.7925,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.604918 rotate z*90*1 translate<-10.4875,-46.521,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.390214 rotate z*90*1 translate<-10.4875,-46.2531,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.188701 rotate z*90*1 translate<-10.4875,-45.9202,20.7255> }
object{Deco[3] scale 0.3 rotate x*360*0.915622 rotate z*90*1 translate<-10.4875,-45.3201,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.913676 rotate z*90*1 translate<-10.4875,-44.9927,20.7255> }
object{Deco[3] scale 0.3 rotate x*360*0.4947 rotate z*90*1 translate<-10.4875,-44.9456,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.651309 rotate z*90*1 translate<-10.4875,-44.459,20.7255> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-10.4875,-47.6289,20.7255>}
cylinder{<-10.4875,-36.7613,20.7255>,<-10.4875,-30.1376,20.7255>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.120729 rotate z*90*1 translate<-10.4875,-36.574,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.933894 rotate z*90*1 translate<-10.4875,-36.148,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.09946 rotate z*90*1 translate<-10.4875,-35.7521,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.312689 rotate z*90*1 translate<-10.4875,-35.4261,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.481216 rotate z*90*1 translate<-10.4875,-35.0709,20.7255> }
object{Deco[5] scale 0.3 rotate x*360*0.956548 rotate z*90*1 translate<-10.4875,-34.8046,20.7255> }
object{Deco[3] scale 0.3 rotate x*360*0.769909 rotate z*90*1 translate<-10.4875,-34.3066,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.439254 rotate z*90*1 translate<-10.4875,-34.1131,20.7255> }
object{Deco[3] scale 0.3 rotate x*360*0.312377 rotate z*90*1 translate<-10.4875,-33.7262,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.0854413 rotate z*90*1 translate<-10.4875,-33.5283,20.7255> }
cylinder{<-10.4875,-39.7613,20.7255>,<-10.4875,-36.7613,20.7255>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.47947 rotate z*90*1 translate<-10.4875,-39.5219,20.7255> }
object{Deco[5] scale 0.3 rotate x*360*0.635674 rotate z*90*1 translate<-10.4875,-39.3082,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.235321 rotate z*90*1 translate<-10.4875,-39.2687,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.0892107 rotate z*90*1 translate<-10.4875,-39.208,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.787328 rotate z*90*1 translate<-10.4875,-38.9709,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.0414819 rotate z*90*1 translate<-10.4875,-38.9599,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.307197 rotate z*90*1 translate<-10.4875,-38.7959,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.345976 rotate z*90*1 translate<-10.4875,-38.6516,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.956559 rotate z*90*1 translate<-10.4875,-38.6384,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.85702 rotate z*90*1 translate<-10.4875,-38.3828,20.7255> }
cylinder{<-8.9875,-28.6376,20.7255>,<-1.30892,-28.6376,20.7255>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.993578 scale <1,1,1> translate<-8.49769,-28.6376,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.996724 scale <1,1,1> translate<-8.38375,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.0904164 scale <1,1,1> translate<-8.22809,-28.6376,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.528485 scale <1,1,1> translate<-7.5902,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.571904 scale <1,1,1> translate<-7.1159,-28.6376,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.45883 scale <1,1,1> translate<-6.84795,-28.6376,20.7255> }
object{Deco[3] scale 0.3 rotate x*360*0.532258 scale <1,1,1> translate<-6.33355,-28.6376,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.628962 scale <1,1,1> translate<-5.89193,-28.6376,20.7255> }
object{Deco[5] scale 0.3 rotate x*360*0.0253192 scale <1,1,1> translate<-5.76838,-28.6376,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.662261 scale <1,1,1> translate<-5.2142,-28.6376,20.7255> }
object{Elbow translate z*1.5 rotate y*90 rotate x*-90 translate -x*1.5 translate -y*1.5  translate <-8.9875,-28.6376,20.7255>}
cylinder{<1.69108,-28.6376,20.7255>,<7.35871,-28.6376,20.7255>,0.3}
cylinder{<-1.30892,-28.6376,20.7255>,<1.69108,-28.6376,20.7255>,0.3}
cylinder{<10.3587,-28.6376,20.7255>,<13.4183,-28.6376,20.7255>,0.3}
cylinder{<7.35871,-28.6376,20.7255>,<10.3587,-28.6376,20.7255>,0.3}
cylinder{<16.4183,-28.6376,20.7255>,<24.863,-28.6376,20.7255>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.762838 scale <1,1,1> translate<16.8723,-28.6376,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.699255 scale <1,1,1> translate<16.9473,-28.6376,20.7255> }
object{Deco[5] scale 0.3 rotate x*360*0.364115 scale <1,1,1> translate<17.6505,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.754424 scale <1,1,1> translate<18.052,-28.6376,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.755887 scale <1,1,1> translate<18.5049,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.604328 scale <1,1,1> translate<18.8705,-28.6376,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.443155 scale <1,1,1> translate<18.9947,-28.6376,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.524485 scale <1,1,1> translate<19.0678,-28.6376,20.7255> }
object{Deco[3] scale 0.3 rotate x*360*0.879432 scale <1,1,1> translate<19.0845,-28.6376,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.770356 scale <1,1,1> translate<19.8471,-28.6376,20.7255> }
cylinder{<13.4183,-28.6376,20.7255>,<16.4183,-28.6376,20.7255>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.379557 scale <1,1,1> translate<13.4619,-28.6376,20.7255> }
object{Deco[3] scale 0.3 rotate x*360*0.878764 scale <1,1,1> translate<13.6013,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.957203 scale <1,1,1> translate<13.6723,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.658591 scale <1,1,1> translate<13.7727,-28.6376,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.720023 scale <1,1,1> translate<13.7801,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.0852467 scale <1,1,1> translate<14.0313,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.964148 scale <1,1,1> translate<14.1831,-28.6376,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.943255 scale <1,1,1> translate<14.4214,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.751369 scale <1,1,1> translate<14.5441,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.542769 scale <1,1,1> translate<14.6345,-28.6376,20.7255> }
cylinder{<27.863,-28.6376,20.7255>,<28.5,-28.6376,20.7255>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.206779 scale <1,1,1> translate<27.8682,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.111876 scale <1,1,1> translate<27.8961,-28.6376,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.630858 scale <1,1,1> translate<27.9499,-28.6376,20.7255> }
object{Deco[5] scale 0.3 rotate x*360*0.998649 scale <1,1,1> translate<27.9524,-28.6376,20.7255> }
object{Deco[5] scale 0.3 rotate x*360*0.260508 scale <1,1,1> translate<27.9878,-28.6376,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.810339 scale <1,1,1> translate<28.0312,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.901683 scale <1,1,1> translate<28.0421,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.0191648 scale <1,1,1> translate<28.0737,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.678944 scale <1,1,1> translate<28.1197,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.412373 scale <1,1,1> translate<28.1561,-28.6376,20.7255> }
cylinder{<24.863,-28.6376,20.7255>,<27.863,-28.6376,20.7255>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.918444 scale <1,1,1> translate<25.1288,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.518791 scale <1,1,1> translate<25.2516,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.581213 scale <1,1,1> translate<25.3184,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.164244 scale <1,1,1> translate<25.5122,-28.6376,20.7255> }
object{Deco[5] scale 0.3 rotate x*360*0.611144 scale <1,1,1> translate<25.5244,-28.6376,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.957219 scale <1,1,1> translate<25.7134,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.234883 scale <1,1,1> translate<25.8369,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.893871 scale <1,1,1> translate<25.9606,-28.6376,20.7255> }
object{Deco[3] scale 0.3 rotate x*360*0.869049 scale <1,1,1> translate<26.0733,-28.6376,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.0732127 scale <1,1,1> translate<26.1022,-28.6376,20.7255> }
cylinder{<30,-27.1376,20.7255>,<30,-23.3873,20.7255>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.512642 rotate z*90*1 translate<30,-26.8252,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.102246 rotate z*90*1 translate<30,-26.6406,20.7255> }
object{Deco[6] scale 0.3 rotate x*360*0.432819 rotate z*90*1 translate<30,-26.3246,20.7255> }
object{Deco[5] scale 0.3 rotate x*360*0.498782 rotate z*90*1 translate<30,-26.0336,20.7255> }
object{Deco[5] scale 0.3 rotate x*360*0.333858 rotate z*90*1 translate<30,-25.8854,20.7255> }
object{Deco[4] scale 0.3 rotate x*360*0.134646 rotate z*90*1 translate<30,-25.5947,20.7255> }
object{Deco[0] scale 0.3 rotate x*360*0.273609 rotate z*90*1 translate<30,-25.3227,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.533257 rotate z*90*1 translate<30,-25.0622,20.7255> }
object{Deco[2] scale 0.3 rotate x*360*0.645372 rotate z*90*1 translate<30,-24.8394,20.7255> }
object{Deco[1] scale 0.3 rotate x*360*0.699888 rotate z*90*1 translate<30,-24.5857,20.7255> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*1.5  translate <30,-27.1376,20.7255>}
cylinder{<30,-21.8873,22.2255>,<30,-21.8873,27.666>,0.3}
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <30,-21.8873,22.2255>}
cylinder{<30,-21.8873,30.666>,<30,-21.8873,38.975>,0.3}
cylinder{<30,-21.8873,27.666>,<30,-21.8873,30.666>,0.3}
cylinder{<30,-23.3873,40.475>,<30,-27.6303,40.475>,0.3}
object{Elbow rotate y*90 rotate -z*90 translate -z*1.5  translate <30,-23.3873,40.475>}
cylinder{<30,-30.6303,40.475>,<30,-36.8625,40.475>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.715198 rotate z*90*-1 translate<30,-30.869,40.475> }
object{Deco[5] scale 0.3 rotate x*360*0.271871 rotate z*90*-1 translate<30,-31.4192,40.475> }
object{Deco[5] scale 0.3 rotate x*360*0.22899 rotate z*90*-1 translate<30,-31.7772,40.475> }
object{Deco[5] scale 0.3 rotate x*360*0.944876 rotate z*90*-1 translate<30,-32.0009,40.475> }
object{Deco[0] scale 0.3 rotate x*360*0.152241 rotate z*90*-1 translate<30,-32.497,40.475> }
object{Deco[0] scale 0.3 rotate x*360*0.778811 rotate z*90*-1 translate<30,-32.7896,40.475> }
object{Deco[4] scale 0.3 rotate x*360*0.484325 rotate z*90*-1 translate<30,-32.9715,40.475> }
object{Deco[4] scale 0.3 rotate x*360*0.875153 rotate z*90*-1 translate<30,-33.1005,40.475> }
object{Deco[1] scale 0.3 rotate x*360*0.547828 rotate z*90*-1 translate<30,-33.4801,40.475> }
object{Deco[6] scale 0.3 rotate x*360*0.948482 rotate z*90*-1 translate<30,-33.9692,40.475> }
cylinder{<30,-27.6303,40.475>,<30,-30.6303,40.475>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.720621 rotate z*90*-1 translate<30,-27.7777,40.475> }
object{Deco[4] scale 0.3 rotate x*360*0.974323 rotate z*90*-1 translate<30,-27.8517,40.475> }
object{Deco[1] scale 0.3 rotate x*360*0.118387 rotate z*90*-1 translate<30,-27.9067,40.475> }
object{Deco[6] scale 0.3 rotate x*360*0.601335 rotate z*90*-1 translate<30,-27.97,40.475> }
object{Deco[0] scale 0.3 rotate x*360*0.527531 rotate z*90*-1 translate<30,-27.9945,40.475> }
object{Deco[6] scale 0.3 rotate x*360*0.51012 rotate z*90*-1 translate<30,-28.1413,40.475> }
object{Deco[4] scale 0.3 rotate x*360*0.920621 rotate z*90*-1 translate<30,-28.2566,40.475> }
object{Deco[0] scale 0.3 rotate x*360*0.710457 rotate z*90*-1 translate<30,-28.4145,40.475> }
object{Deco[2] scale 0.3 rotate x*360*0.739064 rotate z*90*-1 translate<30,-28.4791,40.475> }
object{Deco[4] scale 0.3 rotate x*360*0.367422 rotate z*90*-1 translate<30,-28.6418,40.475> }
cylinder{<30,-38.3625,38.975>,<30,-38.3625,34.6547>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.457229 rotate y*90*-1 translate<30,-38.3625,38.6361> }
object{Deco[4] scale 0.3 rotate x*360*0.3517 rotate y*90*-1 translate<30,-38.3625,38.2641> }
object{Deco[2] scale 0.3 rotate x*360*0.143654 rotate y*90*-1 translate<30,-38.3625,38.119> }
object{Deco[0] scale 0.3 rotate x*360*0.955286 rotate y*90*-1 translate<30,-38.3625,37.8887> }
object{Deco[3] scale 0.3 rotate x*360*0.485987 rotate y*90*-1 translate<30,-38.3625,37.5482> }
object{Deco[1] scale 0.3 rotate x*360*0.372431 rotate y*90*-1 translate<30,-38.3625,37.3778> }
object{Deco[6] scale 0.3 rotate x*360*0.972632 rotate y*90*-1 translate<30,-38.3625,37.0023> }
object{Deco[5] scale 0.3 rotate x*360*0.799174 rotate y*90*-1 translate<30,-38.3625,36.7724> }
object{Deco[6] scale 0.3 rotate x*360*0.468515 rotate y*90*-1 translate<30,-38.3625,36.6723> }
object{Deco[4] scale 0.3 rotate x*360*0.00735252 rotate y*90*-1 translate<30,-38.3625,36.2904> }
object{Elbow translate z*1.5 rotate z*90 rotate -x*90 translate <30,-38.3625,38.975>}
cylinder{<30,-38.3625,31.6547>,<30,-38.3625,25.9066>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.69457 rotate y*90*-1 translate<30,-38.3625,31.1821> }
object{Deco[5] scale 0.3 rotate x*360*0.259301 rotate y*90*-1 translate<30,-38.3625,31.0932> }
object{Deco[5] scale 0.3 rotate x*360*0.549233 rotate y*90*-1 translate<30,-38.3625,30.7159> }
object{Deco[0] scale 0.3 rotate x*360*0.988538 rotate y*90*-1 translate<30,-38.3625,30.6408> }
object{Deco[6] scale 0.3 rotate x*360*0.277522 rotate y*90*-1 translate<30,-38.3625,30.4454> }
object{Deco[0] scale 0.3 rotate x*360*0.857313 rotate y*90*-1 translate<30,-38.3625,30.1534> }
object{Deco[5] scale 0.3 rotate x*360*0.848404 rotate y*90*-1 translate<30,-38.3625,30.1466> }
object{Deco[6] scale 0.3 rotate x*360*0.270359 rotate y*90*-1 translate<30,-38.3625,29.8572> }
object{Deco[5] scale 0.3 rotate x*360*0.558117 rotate y*90*-1 translate<30,-38.3625,29.57> }
object{Deco[4] scale 0.3 rotate x*360*0.93744 rotate y*90*-1 translate<30,-38.3625,29.3239> }
cylinder{<30,-38.3625,34.6547>,<30,-38.3625,31.6547>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.976355 rotate y*90*-1 translate<30,-38.3625,34.4122> }
object{Deco[2] scale 0.3 rotate x*360*0.0741642 rotate y*90*-1 translate<30,-38.3625,34.1761> }
object{Deco[0] scale 0.3 rotate x*360*0.633918 rotate y*90*-1 translate<30,-38.3625,34.0173> }
object{Deco[3] scale 0.3 rotate x*360*0.0566126 rotate y*90*-1 translate<30,-38.3625,33.948> }
object{Deco[3] scale 0.3 rotate x*360*0.704896 rotate y*90*-1 translate<30,-38.3625,33.8425> }
object{Deco[2] scale 0.3 rotate x*360*0.352653 rotate y*90*-1 translate<30,-38.3625,33.7922> }
object{Deco[5] scale 0.3 rotate x*360*0.59364 rotate y*90*-1 translate<30,-38.3625,33.5822> }
object{Deco[2] scale 0.3 rotate x*360*0.487387 rotate y*90*-1 translate<30,-38.3625,33.3489> }
object{Deco[6] scale 0.3 rotate x*360*0.814359 rotate y*90*-1 translate<30,-38.3625,33.0773> }
object{Deco[6] scale 0.3 rotate x*360*0.523815 rotate y*90*-1 translate<30,-38.3625,32.8106> }
cylinder{<30,-38.3625,22.9066>,<30,-38.3625,19.5596>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.227377 rotate y*90*-1 translate<30,-38.3625,22.6292> }
object{Deco[5] scale 0.3 rotate x*360*0.287172 rotate y*90*-1 translate<30,-38.3625,22.366> }
object{Deco[1] scale 0.3 rotate x*360*0.424843 rotate y*90*-1 translate<30,-38.3625,22.0695> }
object{Deco[5] scale 0.3 rotate x*360*0.787142 rotate y*90*-1 translate<30,-38.3625,21.9407> }
object{Deco[1] scale 0.3 rotate x*360*0.883074 rotate y*90*-1 translate<30,-38.3625,21.7533> }
object{Deco[2] scale 0.3 rotate x*360*0.865827 rotate y*90*-1 translate<30,-38.3625,21.7024> }
object{Deco[2] scale 0.3 rotate x*360*0.281533 rotate y*90*-1 translate<30,-38.3625,21.5018> }
object{Deco[4] scale 0.3 rotate x*360*0.566132 rotate y*90*-1 translate<30,-38.3625,21.4819> }
object{Deco[5] scale 0.3 rotate x*360*0.235196 rotate y*90*-1 translate<30,-38.3625,21.3872> }
object{Deco[4] scale 0.3 rotate x*360*0.0104548 rotate y*90*-1 translate<30,-38.3625,21.2979> }
cylinder{<30,-38.3625,25.9066>,<30,-38.3625,22.9066>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.927574 rotate y*90*-1 translate<30,-38.3625,25.6904> }
object{Deco[5] scale 0.3 rotate x*360*0.900832 rotate y*90*-1 translate<30,-38.3625,25.525> }
object{Deco[4] scale 0.3 rotate x*360*0.773915 rotate y*90*-1 translate<30,-38.3625,25.4218> }
object{Deco[2] scale 0.3 rotate x*360*0.266965 rotate y*90*-1 translate<30,-38.3625,25.2151> }
object{Deco[4] scale 0.3 rotate x*360*0.341245 rotate y*90*-1 translate<30,-38.3625,25.1909> }
object{Deco[1] scale 0.3 rotate x*360*0.89535 rotate y*90*-1 translate<30,-38.3625,25.1509> }
object{Deco[0] scale 0.3 rotate x*360*0.0107406 rotate y*90*-1 translate<30,-38.3625,24.8951> }
object{Deco[4] scale 0.3 rotate x*360*0.252633 rotate y*90*-1 translate<30,-38.3625,24.8241> }
object{Deco[1] scale 0.3 rotate x*360*0.259498 rotate y*90*-1 translate<30,-38.3625,24.7479> }
object{Deco[6] scale 0.3 rotate x*360*0.947727 rotate y*90*-1 translate<30,-38.3625,24.6758> }
cylinder{<30,-36.8625,18.0596>,<30,-28.7446,18.0596>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.260787 rotate z*90*1 translate<30,-36.4746,18.0596> }
object{Deco[4] scale 0.3 rotate x*360*0.109197 rotate z*90*1 translate<30,-36.3471,18.0596> }
object{Deco[2] scale 0.3 rotate x*360*0.130029 rotate z*90*1 translate<30,-36.0033,18.0596> }
object{Deco[4] scale 0.3 rotate x*360*0.0338279 rotate z*90*1 translate<30,-35.3132,18.0596> }
object{Deco[0] scale 0.3 rotate x*360*0.594783 rotate z*90*1 translate<30,-34.8867,18.0596> }
object{Deco[5] scale 0.3 rotate x*360*0.31533 rotate z*90*1 translate<30,-34.4784,18.0596> }
object{Deco[4] scale 0.3 rotate x*360*0.730619 rotate z*90*1 translate<30,-33.9529,18.0596> }
object{Deco[2] scale 0.3 rotate x*360*0.83558 rotate z*90*1 translate<30,-33.4706,18.0596> }
object{Deco[2] scale 0.3 rotate x*360*0.0510361 rotate z*90*1 translate<30,-33.114,18.0596> }
object{Deco[0] scale 0.3 rotate x*360*0.290936 rotate z*90*1 translate<30,-33.0555,18.0596> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1.5  translate <30,-36.8625,18.0596>}
cylinder{<30,-27.2446,16.5596>,<30,-27.2446,10.3871>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.210448 rotate y*90*-1 translate<30,-27.2446,16.2791> }
object{Deco[2] scale 0.3 rotate x*360*0.681443 rotate y*90*-1 translate<30,-27.2446,16.0943> }
object{Deco[4] scale 0.3 rotate x*360*0.0144819 rotate y*90*-1 translate<30,-27.2446,15.7666> }
object{Deco[6] scale 0.3 rotate x*360*0.862746 rotate y*90*-1 translate<30,-27.2446,15.5981> }
object{Deco[5] scale 0.3 rotate x*360*0.901973 rotate y*90*-1 translate<30,-27.2446,15.0795> }
object{Deco[4] scale 0.3 rotate x*360*0.259808 rotate y*90*-1 translate<30,-27.2446,14.8959> }
object{Deco[3] scale 0.3 rotate x*360*0.896275 rotate y*90*-1 translate<30,-27.2446,14.6908> }
object{Deco[4] scale 0.3 rotate x*360*0.132029 rotate y*90*-1 translate<30,-27.2446,14.2359> }
object{Deco[1] scale 0.3 rotate x*360*0.26915 rotate y*90*-1 translate<30,-27.2446,13.8649> }
object{Deco[2] scale 0.3 rotate x*360*0.685277 rotate y*90*-1 translate<30,-27.2446,13.3726> }
object{Elbow rotate y*180 rotate z*90 translate -y*1.5  translate <30,-27.2446,16.5596>}
cylinder{<30,-28.7446,8.88713>,<30,-33.5428,8.88713>,0.3}
object{Elbow translate z*1.5 rotate -z*90 translate <30,-28.7446,8.88713>}
cylinder{<30,-36.5428,8.88713>,<30,-42.1222,8.88713>,0.3}
cylinder{<30,-33.5428,8.88713>,<30,-36.5428,8.88713>,0.3}
cylinder{<30,-45.1222,8.88713>,<30,-48.7433,8.88713>,0.3}
cylinder{<30,-42.1222,8.88713>,<30,-45.1222,8.88713>,0.3}
cylinder{<30,-51.7433,8.88713>,<30,-60.2789,8.88713>,0.3}
cylinder{<30,-48.7433,8.88713>,<30,-51.7433,8.88713>,0.3}
cylinder{<30,-61.7789,10.3871>,<30,-61.7789,18.5331>,0.3}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1.5  translate <30,-61.7789,10.3871>}
cylinder{<30,-60.2789,20.0331>,<30,-57.1851,20.0331>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.0220679 rotate z*90*1 translate<30,-60.188,20.0331> }
object{Deco[0] scale 0.3 rotate x*360*0.419544 rotate z*90*1 translate<30,-60.0953,20.0331> }
object{Deco[5] scale 0.3 rotate x*360*0.811658 rotate z*90*1 translate<30,-59.8145,20.0331> }
object{Deco[5] scale 0.3 rotate x*360*0.884998 rotate z*90*1 translate<30,-59.6694,20.0331> }
object{Deco[3] scale 0.3 rotate x*360*0.21573 rotate z*90*1 translate<30,-59.4297,20.0331> }
object{Deco[3] scale 0.3 rotate x*360*0.549143 rotate z*90*1 translate<30,-59.1737,20.0331> }
object{Deco[3] scale 0.3 rotate x*360*0.423462 rotate z*90*1 translate<30,-59.0671,20.0331> }
object{Deco[2] scale 0.3 rotate x*360*0.259616 rotate z*90*1 translate<30,-58.8766,20.0331> }
object{Deco[2] scale 0.3 rotate x*360*0.262204 rotate z*90*1 translate<30,-58.6229,20.0331> }
object{Deco[0] scale 0.3 rotate x*360*0.182788 rotate z*90*1 translate<30,-58.5445,20.0331> }
object{Elbow rotate z*90 scale <1,1,-1> translate <30,-60.2789,20.0331>}
cylinder{<30,-54.1851,20.0331>,<30,-45.8752,20.0331>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.297926 rotate z*90*1 translate<30,-53.4508,20.0331> }
object{Deco[5] scale 0.3 rotate x*360*0.78305 rotate z*90*1 translate<30,-53.3762,20.0331> }
object{Deco[5] scale 0.3 rotate x*360*0.0807504 rotate z*90*1 translate<30,-53.1653,20.0331> }
object{Deco[0] scale 0.3 rotate x*360*0.841682 rotate z*90*1 translate<30,-52.6573,20.0331> }
object{Deco[0] scale 0.3 rotate x*360*0.281017 rotate z*90*1 translate<30,-52.2315,20.0331> }
object{Deco[6] scale 0.3 rotate x*360*0.309681 rotate z*90*1 translate<30,-51.5055,20.0331> }
object{Deco[2] scale 0.3 rotate x*360*0.270332 rotate z*90*1 translate<30,-51.1094,20.0331> }
object{Deco[0] scale 0.3 rotate x*360*0.384243 rotate z*90*1 translate<30,-50.3545,20.0331> }
object{Deco[2] scale 0.3 rotate x*360*0.664157 rotate z*90*1 translate<30,-49.7491,20.0331> }
object{Deco[4] scale 0.3 rotate x*360*0.149995 rotate z*90*1 translate<30,-49.1566,20.0331> }
cylinder{<30,-57.1851,20.0331>,<30,-54.1851,20.0331>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.596028 rotate z*90*1 translate<30,-57.0267,20.0331> }
object{Deco[1] scale 0.3 rotate x*360*0.648247 rotate z*90*1 translate<30,-56.9702,20.0331> }
object{Deco[4] scale 0.3 rotate x*360*0.398522 rotate z*90*1 translate<30,-56.7418,20.0331> }
object{Deco[1] scale 0.3 rotate x*360*0.287027 rotate z*90*1 translate<30,-56.5439,20.0331> }
object{Deco[0] scale 0.3 rotate x*360*0.219427 rotate z*90*1 translate<30,-56.3687,20.0331> }
object{Deco[4] scale 0.3 rotate x*360*0.151081 rotate z*90*1 translate<30,-56.1822,20.0331> }
object{Deco[3] scale 0.3 rotate x*360*0.586898 rotate z*90*1 translate<30,-56.069,20.0331> }
object{Deco[0] scale 0.3 rotate x*360*0.72126 rotate z*90*1 translate<30,-55.9459,20.0331> }
object{Deco[3] scale 0.3 rotate x*360*0.868065 rotate z*90*1 translate<30,-55.8821,20.0331> }
object{Deco[1] scale 0.3 rotate x*360*0.376944 rotate z*90*1 translate<30,-55.662,20.0331> }
cylinder{<30,-44.3752,18.5331>,<30,-44.3752,13.8873>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.83405 rotate y*90*-1 translate<30,-44.3752,18.5314> }
object{Deco[6] scale 0.3 rotate x*360*0.886278 rotate y*90*-1 translate<30,-44.3752,18.2586> }
object{Deco[5] scale 0.3 rotate x*360*0.0336418 rotate y*90*-1 translate<30,-44.3752,18.0842> }
object{Deco[0] scale 0.3 rotate x*360*0.497572 rotate y*90*-1 translate<30,-44.3752,17.7479> }
object{Deco[5] scale 0.3 rotate x*360*0.776569 rotate y*90*-1 translate<30,-44.3752,17.4968> }
object{Deco[6] scale 0.3 rotate x*360*0.870984 rotate y*90*-1 translate<30,-44.3752,17.1394> }
object{Deco[1] scale 0.3 rotate x*360*0.483471 rotate y*90*-1 translate<30,-44.3752,17.0102> }
object{Deco[4] scale 0.3 rotate x*360*0.197979 rotate y*90*-1 translate<30,-44.3752,16.7097> }
object{Deco[4] scale 0.3 rotate x*360*0.596545 rotate y*90*-1 translate<30,-44.3752,16.5932> }
object{Deco[3] scale 0.3 rotate x*360*0.273719 rotate y*90*-1 translate<30,-44.3752,16.2396> }
object{Elbow rotate y*180 rotate z*90 translate -y*1.5  translate <30,-44.3752,18.5331>}
cylinder{<30,-44.3752,10.8873>,<30,-44.3752,6.24421>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.215178 rotate y*90*-1 translate<30,-44.3752,10.4752> }
object{Deco[4] scale 0.3 rotate x*360*0.549636 rotate y*90*-1 translate<30,-44.3752,10.2758> }
object{Deco[3] scale 0.3 rotate x*360*0.876694 rotate y*90*-1 translate<30,-44.3752,10.1718> }
object{Deco[2] scale 0.3 rotate x*360*0.895263 rotate y*90*-1 translate<30,-44.3752,9.78617> }
object{Deco[4] scale 0.3 rotate x*360*0.332607 rotate y*90*-1 translate<30,-44.3752,9.47948> }
object{Deco[2] scale 0.3 rotate x*360*0.589962 rotate y*90*-1 translate<30,-44.3752,9.45022> }
object{Deco[1] scale 0.3 rotate x*360*0.396525 rotate y*90*-1 translate<30,-44.3752,9.1068> }
object{Deco[1] scale 0.3 rotate x*360*0.48747 rotate y*90*-1 translate<30,-44.3752,9.07489> }
object{Deco[0] scale 0.3 rotate x*360*0.871359 rotate y*90*-1 translate<30,-44.3752,8.80979> }
object{Deco[0] scale 0.3 rotate x*360*0.019925 rotate y*90*-1 translate<30,-44.3752,8.80142> }
cylinder{<30,-44.3752,13.8873>,<30,-44.3752,10.8873>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.139293 rotate y*90*-1 translate<30,-44.3752,13.8747> }
object{Deco[1] scale 0.3 rotate x*360*0.304726 rotate y*90*-1 translate<30,-44.3752,13.6702> }
object{Deco[1] scale 0.3 rotate x*360*0.728442 rotate y*90*-1 translate<30,-44.3752,13.4239> }
object{Deco[4] scale 0.3 rotate x*360*0.542496 rotate y*90*-1 translate<30,-44.3752,13.3837> }
object{Deco[3] scale 0.3 rotate x*360*0.608307 rotate y*90*-1 translate<30,-44.3752,13.1741> }
object{Deco[0] scale 0.3 rotate x*360*0.125687 rotate y*90*-1 translate<30,-44.3752,13.0092> }
object{Deco[5] scale 0.3 rotate x*360*0.0529712 rotate y*90*-1 translate<30,-44.3752,12.9173> }
object{Deco[5] scale 0.3 rotate x*360*0.272897 rotate y*90*-1 translate<30,-44.3752,12.7881> }
object{Deco[2] scale 0.3 rotate x*360*0.755794 rotate y*90*-1 translate<30,-44.3752,12.6128> }
object{Deco[6] scale 0.3 rotate x*360*0.376032 rotate y*90*-1 translate<30,-44.3752,12.3868> }
cylinder{<28.5,-44.3752,4.74421>,<22.5662,-44.3752,4.74421>,0.3}
object{Elbow scale <-1,1,1> translate z*1.5  translate <28.5,-44.3752,4.74421>}
cylinder{<19.5662,-44.3752,4.74421>,<11.845,-44.3752,4.74421>,0.3}
cylinder{<22.5662,-44.3752,4.74421>,<19.5662,-44.3752,4.74421>,0.3}
cylinder{<10.345,-45.8752,4.74421>,<10.345,-54.3267,4.74421>,0.3}
object{Elbow translate x*1.5 rotate x*90 translate <10.345,-45.8752,4.74421>}
cylinder{<10.345,-55.8267,3.24421>,<10.345,-55.8267,-4.04456>,0.3}
object{Elbow translate z*1.5 rotate z*90 rotate -x*90 translate <10.345,-55.8267,3.24421>}
cylinder{<10.345,-57.3267,-5.54456>,<10.345,-61.7652,-5.54456>,0.3}
object{Elbow translate z*1.5 rotate -z*90 translate <10.345,-57.3267,-5.54456>}
cylinder{<10.345,-63.2652,-7.04456>,<10.345,-63.2652,-13.0803>,0.3}
object{Elbow translate z*1.5 rotate z*90 rotate -x*90 translate <10.345,-63.2652,-7.04456>}
cylinder{<11.845,-63.2652,-14.5803>,<19.2021,-63.2652,-14.5803>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.574413 scale <1,1,1> translate<12.1907,-63.2652,-14.5803> }
object{Deco[3] scale 0.3 rotate x*360*0.991334 scale <1,1,1> translate<12.1945,-63.2652,-14.5803> }
object{Deco[2] scale 0.3 rotate x*360*0.0298537 scale <1,1,1> translate<12.3662,-63.2652,-14.5803> }
object{Deco[2] scale 0.3 rotate x*360*0.860309 scale <1,1,1> translate<12.7931,-63.2652,-14.5803> }
object{Deco[1] scale 0.3 rotate x*360*0.140482 scale <1,1,1> translate<13.251,-63.2652,-14.5803> }
object{Deco[3] scale 0.3 rotate x*360*0.379788 scale <1,1,1> translate<13.5871,-63.2652,-14.5803> }
object{Deco[6] scale 0.3 rotate x*360*0.525291 scale <1,1,1> translate<14.0082,-63.2652,-14.5803> }
object{Deco[1] scale 0.3 rotate x*360*0.955948 scale <1,1,1> translate<14.5113,-63.2652,-14.5803> }
object{Deco[1] scale 0.3 rotate x*360*0.791047 scale <1,1,1> translate<15.0921,-63.2652,-14.5803> }
object{Deco[2] scale 0.3 rotate x*360*0.148445 scale <1,1,1> translate<15.681,-63.2652,-14.5803> }
object{Elbow translate z*1.5  translate <11.845,-63.2652,-14.5803>}
cylinder{<20.7021,-63.2652,-13.0803>,<20.7021,-63.2652,-9.56295>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.725365 rotate y*90*1 translate<20.7021,-63.2652,-13.0062> }
object{Deco[0] scale 0.3 rotate x*360*0.84532 rotate y*90*1 translate<20.7021,-63.2652,-12.8687> }
object{Deco[4] scale 0.3 rotate x*360*0.640625 rotate y*90*1 translate<20.7021,-63.2652,-12.6363> }
object{Deco[0] scale 0.3 rotate x*360*0.222964 rotate y*90*1 translate<20.7021,-63.2652,-12.4685> }
object{Deco[2] scale 0.3 rotate x*360*0.279062 rotate y*90*1 translate<20.7021,-63.2652,-12.2992> }
object{Deco[4] scale 0.3 rotate x*360*0.958202 rotate y*90*1 translate<20.7021,-63.2652,-12.2177> }
object{Deco[5] scale 0.3 rotate x*360*0.328939 rotate y*90*1 translate<20.7021,-63.2652,-12.1448> }
object{Deco[6] scale 0.3 rotate x*360*0.88453 rotate y*90*1 translate<20.7021,-63.2652,-11.986> }
object{Deco[2] scale 0.3 rotate x*360*0.862017 rotate y*90*1 translate<20.7021,-63.2652,-11.6898> }
object{Deco[4] scale 0.3 rotate x*360*0.343749 rotate y*90*1 translate<20.7021,-63.2652,-11.634> }
object{Elbow rotate y*-90 translate -x*1.5  translate <20.7021,-63.2652,-13.0803>}
cylinder{<20.7021,-63.2652,-6.56295>,<20.7021,-63.2652,1.37031>,0.3}
cylinder{<20.7021,-63.2652,-9.56295>,<20.7021,-63.2652,-6.56295>,0.3}
cylinder{<20.7021,-63.2652,4.37031>,<20.7021,-63.2652,7.61388>,0.3}
cylinder{<20.7021,-63.2652,1.37031>,<20.7021,-63.2652,4.37031>,0.3}
cylinder{<20.7021,-63.2652,10.6139>,<20.7021,-63.2652,18.5418>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.943065 rotate y*90*1 translate<20.7021,-63.2652,10.9153> }
object{Deco[4] scale 0.3 rotate x*360*0.838017 rotate y*90*1 translate<20.7021,-63.2652,11.3285> }
object{Deco[4] scale 0.3 rotate x*360*0.0591903 rotate y*90*1 translate<20.7021,-63.2652,11.4441> }
object{Deco[4] scale 0.3 rotate x*360*0.825064 rotate y*90*1 translate<20.7021,-63.2652,11.8348> }
object{Deco[3] scale 0.3 rotate x*360*0.472611 rotate y*90*1 translate<20.7021,-63.2652,12.4105> }
object{Deco[3] scale 0.3 rotate x*360*0.753856 rotate y*90*1 translate<20.7021,-63.2652,13.0513> }
object{Deco[5] scale 0.3 rotate x*360*0.132265 rotate y*90*1 translate<20.7021,-63.2652,13.4639> }
object{Deco[3] scale 0.3 rotate x*360*0.999404 rotate y*90*1 translate<20.7021,-63.2652,13.7698> }
object{Deco[0] scale 0.3 rotate x*360*0.533819 rotate y*90*1 translate<20.7021,-63.2652,14.0408> }
object{Deco[6] scale 0.3 rotate x*360*0.101191 rotate y*90*1 translate<20.7021,-63.2652,14.5538> }
cylinder{<20.7021,-63.2652,7.61388>,<20.7021,-63.2652,10.6139>,0.3}
object{Deco[3] scale 0.3 rotate x*360*0.35366 rotate y*90*1 translate<20.7021,-63.2652,7.83528> }
object{Deco[4] scale 0.3 rotate x*360*0.0587769 rotate y*90*1 translate<20.7021,-63.2652,7.90352> }
object{Deco[1] scale 0.3 rotate x*360*0.190077 rotate y*90*1 translate<20.7021,-63.2652,8.12236> }
object{Deco[5] scale 0.3 rotate x*360*0.374671 rotate y*90*1 translate<20.7021,-63.2652,8.38286> }
object{Deco[3] scale 0.3 rotate x*360*0.74672 rotate y*90*1 translate<20.7021,-63.2652,8.6239> }
object{Deco[4] scale 0.3 rotate x*360*0.546253 rotate y*90*1 translate<20.7021,-63.2652,8.84566> }
object{Deco[3] scale 0.3 rotate x*360*0.356891 rotate y*90*1 translate<20.7021,-63.2652,9.1092> }
object{Deco[2] scale 0.3 rotate x*360*0.924346 rotate y*90*1 translate<20.7021,-63.2652,9.3127> }
object{Deco[0] scale 0.3 rotate x*360*0.381028 rotate y*90*1 translate<20.7021,-63.2652,9.42093> }
object{Deco[0] scale 0.3 rotate x*360*0.110939 rotate y*90*1 translate<20.7021,-63.2652,9.68933> }
cylinder{<22.2021,-63.2652,20.0418>,<27.6722,-63.2652,20.0418>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.826283 scale <1,1,1> translate<22.5882,-63.2652,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.998639 scale <1,1,1> translate<22.6752,-63.2652,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.90941 scale <1,1,1> translate<22.9732,-63.2652,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.133444 scale <1,1,1> translate<23.0903,-63.2652,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.752054 scale <1,1,1> translate<23.3002,-63.2652,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.215095 scale <1,1,1> translate<23.4044,-63.2652,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.00889493 scale <1,1,1> translate<23.4952,-63.2652,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.157017 scale <1,1,1> translate<23.5225,-63.2652,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.830953 scale <1,1,1> translate<23.9766,-63.2652,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.953484 scale <1,1,1> translate<24.2166,-63.2652,20.0418> }
object{Elbow scale <1,1,-1> translate -z*1.5  translate <22.2021,-63.2652,20.0418>}
cylinder{<29.1722,-64.7652,20.0418>,<29.1722,-72.1759,20.0418>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.91804 rotate z*90*-1 translate<29.1722,-65.428,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.408888 rotate z*90*-1 translate<29.1722,-65.9909,20.0418> }
object{Deco[4] scale 0.3 rotate x*360*0.36019 rotate z*90*-1 translate<29.1722,-66.3424,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.798373 rotate z*90*-1 translate<29.1722,-66.4185,20.0418> }
object{Deco[3] scale 0.3 rotate x*360*0.433728 rotate z*90*-1 translate<29.1722,-66.9966,20.0418> }
object{Deco[3] scale 0.3 rotate x*360*0.737884 rotate z*90*-1 translate<29.1722,-67.2798,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.779262 rotate z*90*-1 translate<29.1722,-67.6077,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.412925 rotate z*90*-1 translate<29.1722,-68.279,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.600603 rotate z*90*-1 translate<29.1722,-68.5529,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.751554 rotate z*90*-1 translate<29.1722,-68.9847,20.0418> }
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <29.1722,-64.7652,20.0418>}
cylinder{<30.6722,-73.6759,20.0418>,<28.5,-73.6759,20.0418>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.851465 scale <1,1,1> translate<30.7438,-73.6759,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.383641 scale <1,1,1> translate<30.8281,-73.6759,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.849911 scale <1,1,1> translate<31.0096,-73.6759,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.0524409 scale <1,1,1> translate<31.032,-73.6759,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.801385 scale <1,1,1> translate<31.1835,-73.6759,20.0418> }
object{Deco[4] scale 0.3 rotate x*360*0.284909 scale <1,1,1> translate<31.3095,-73.6759,20.0418> }
object{Deco[4] scale 0.3 rotate x*360*0.434471 scale <1,1,1> translate<31.3928,-73.6759,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.935599 scale <1,1,1> translate<31.5811,-73.6759,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.205483 scale <1,1,1> translate<31.6931,-73.6759,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.59536 scale <1,1,1> translate<31.7412,-73.6759,20.0418> }
object{Elbow rotate -x*90 translate y*1.5  translate <30.6722,-73.6759,20.0418>}
cylinder{<30,-75.1759,20.0418>,<30,-78.5,20.0418>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.177533 rotate z*90*-1 translate<30,-75.4749,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.180571 rotate z*90*-1 translate<30,-75.5037,20.0418> }
object{Deco[4] scale 0.3 rotate x*360*0.727711 rotate z*90*-1 translate<30,-75.7913,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.259747 rotate z*90*-1 translate<30,-75.8764,20.0418> }
object{Deco[3] scale 0.3 rotate x*360*0.441839 rotate z*90*-1 translate<30,-75.9536,20.0418> }
object{Deco[4] scale 0.3 rotate x*360*0.632715 rotate z*90*-1 translate<30,-76.0607,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.112586 rotate z*90*-1 translate<30,-76.1383,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.758404 rotate z*90*-1 translate<30,-76.4168,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.212742 rotate z*90*-1 translate<30,-76.6591,20.0418> }
object{Deco[4] scale 0.3 rotate x*360*0.210626 rotate z*90*-1 translate<30,-76.7054,20.0418> }
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <30,-75.1759,20.0418>}
cylinder{<28.5,-80,20.0418>,<21.499,-80,20.0418>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.865711 scale <-1,1,1> translate<27.9676,-80,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.2231 scale <-1,1,1> translate<27.4624,-80,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.781494 scale <-1,1,1> translate<27.1414,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.621573 scale <-1,1,1> translate<26.7751,-80,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.91482 scale <-1,1,1> translate<26.4019,-80,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.750885 scale <-1,1,1> translate<25.9097,-80,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.712161 scale <-1,1,1> translate<25.882,-80,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.565949 scale <-1,1,1> translate<25.5504,-80,20.0418> }
object{Deco[3] scale 0.3 rotate x*360*0.50101 scale <-1,1,1> translate<25.432,-80,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.278986 scale <-1,1,1> translate<25.0045,-80,20.0418> }
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <28.5,-80,20.0418>}
cylinder{<18.499,-80,20.0418>,<10.6187,-80,20.0418>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.11079 scale <-1,1,1> translate<18.4729,-80,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.311143 scale <-1,1,1> translate<17.8941,-80,20.0418> }
object{Deco[3] scale 0.3 rotate x*360*0.636998 scale <-1,1,1> translate<17.4556,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.158956 scale <-1,1,1> translate<16.9354,-80,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.963699 scale <-1,1,1> translate<16.2361,-80,20.0418> }
object{Deco[3] scale 0.3 rotate x*360*0.205723 scale <-1,1,1> translate<15.7374,-80,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.273689 scale <-1,1,1> translate<15.6598,-80,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.232905 scale <-1,1,1> translate<15.0606,-80,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.52309 scale <-1,1,1> translate<14.4904,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.97248 scale <-1,1,1> translate<13.7918,-80,20.0418> }
cylinder{<21.499,-80,20.0418>,<18.499,-80,20.0418>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.374407 scale <-1,1,1> translate<21.2364,-80,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.544389 scale <-1,1,1> translate<21.2089,-80,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.644987 scale <-1,1,1> translate<21.0938,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.229145 scale <-1,1,1> translate<20.8644,-80,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.996584 scale <-1,1,1> translate<20.8147,-80,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.605504 scale <-1,1,1> translate<20.734,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.280204 scale <-1,1,1> translate<20.6668,-80,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.92394 scale <-1,1,1> translate<20.5742,-80,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.709223 scale <-1,1,1> translate<20.3054,-80,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.46651 scale <-1,1,1> translate<20.197,-80,20.0418> }
cylinder{<7.61866,-80,20.0418>,<-0.0188668,-80,20.0418>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.77606 scale <-1,1,1> translate<6.97618,-80,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.487779 scale <-1,1,1> translate<6.71567,-80,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.238717 scale <-1,1,1> translate<6.29295,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.283033 scale <-1,1,1> translate<6.06643,-80,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.610682 scale <-1,1,1> translate<5.62942,-80,20.0418> }
object{Deco[0] scale 0.3 rotate x*360*0.312404 scale <-1,1,1> translate<5.42097,-80,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.903695 scale <-1,1,1> translate<5.14407,-80,20.0418> }
object{Deco[4] scale 0.3 rotate x*360*0.792775 scale <-1,1,1> translate<4.54809,-80,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.644666 scale <-1,1,1> translate<4.45482,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.126517 scale <-1,1,1> translate<4.0389,-80,20.0418> }
cylinder{<10.6187,-80,20.0418>,<7.61866,-80,20.0418>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.708958 scale <-1,1,1> translate<10.4181,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.0137556 scale <-1,1,1> translate<10.3788,-80,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.0710447 scale <-1,1,1> translate<10.1123,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.479024 scale <-1,1,1> translate<9.86446,-80,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.328136 scale <-1,1,1> translate<9.78431,-80,20.0418> }
object{Deco[1] scale 0.3 rotate x*360*0.983805 scale <-1,1,1> translate<9.68844,-80,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.392391 scale <-1,1,1> translate<9.51584,-80,20.0418> }
object{Deco[5] scale 0.3 rotate x*360*0.332607 scale <-1,1,1> translate<9.46306,-80,20.0418> }
object{Deco[2] scale 0.3 rotate x*360*0.670214 scale <-1,1,1> translate<9.39321,-80,20.0418> }
object{Deco[6] scale 0.3 rotate x*360*0.717914 scale <-1,1,1> translate<9.24211,-80,20.0418> }
cylinder{<-3.01887,-80,20.0418>,<-9.10373,-80,20.0418>,0.3}
cylinder{<-0.0188668,-80,20.0418>,<-3.01887,-80,20.0418>,0.3}
cylinder{<-10.6037,-80,18.5418>,<-10.6037,-80,10.2167>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.176271 rotate y*90*-1 translate<-10.6037,-80,18.0864> }
object{Deco[5] scale 0.3 rotate x*360*0.325027 rotate y*90*-1 translate<-10.6037,-80,17.6071> }
object{Deco[0] scale 0.3 rotate x*360*0.979158 rotate y*90*-1 translate<-10.6037,-80,17.3102> }
object{Deco[5] scale 0.3 rotate x*360*0.353662 rotate y*90*-1 translate<-10.6037,-80,16.8392> }
object{Deco[0] scale 0.3 rotate x*360*0.423804 rotate y*90*-1 translate<-10.6037,-80,16.1104> }
object{Deco[6] scale 0.3 rotate x*360*0.00313538 rotate y*90*-1 translate<-10.6037,-80,15.5721> }
object{Deco[4] scale 0.3 rotate x*360*0.462067 rotate y*90*-1 translate<-10.6037,-80,15.0014> }
object{Deco[4] scale 0.3 rotate x*360*0.676571 rotate y*90*-1 translate<-10.6037,-80,14.4774> }
object{Deco[6] scale 0.3 rotate x*360*0.659545 rotate y*90*-1 translate<-10.6037,-80,14.3691> }
object{Deco[0] scale 0.3 rotate x*360*0.766476 rotate y*90*-1 translate<-10.6037,-80,14.0206> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-10.6037,-80,18.5418>}
cylinder{<-10.6037,-80,7.21673>,<-10.6037,-80,3.89498>,0.3}
cylinder{<-10.6037,-80,10.2167>,<-10.6037,-80,7.21673>,0.3}
cylinder{<-10.6037,-80,0.894979>,<-10.6037,-80,-5.57898>,0.3}
cylinder{<-10.6037,-80,3.89498>,<-10.6037,-80,0.894979>,0.3}
cylinder{<-9.10373,-80,-7.07898>,<-4.15483,-80,-7.07898>,0.3}
object{Elbow translate z*1.5  translate <-9.10373,-80,-7.07898>}
cylinder{<-2.65483,-80,-5.57898>,<-2.65483,-80,2.86337>,0.3}
object{Elbow rotate y*-90 translate -x*1.5  translate <-2.65483,-80,-5.57898>}
cylinder{<-4.15483,-80,4.36337>,<-9.80242,-80,4.36337>,0.3}
object{Elbow scale <-1,1,-1> translate -z*1.5  translate <-4.15483,-80,4.36337>}
cylinder{<-11.3024,-78.5,4.36337>,<-11.3024,-74.0035,4.36337>,0.3}
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-11.3024,-78.5,4.36337>}
cylinder{<-9.80242,-72.5035,4.36337>,<-5.6261,-72.5035,4.36337>,0.3}
object{Elbow translate z*1.5 rotate y*90 rotate x*-90 translate -x*1.5 translate -y*1.5  translate <-9.80242,-72.5035,4.36337>}
cylinder{<-4.1261,-74.0035,4.36337>,<-4.1261,-78.5,4.36337>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate y*180 translate <-4.1261,-74.0035,4.36337>}
cylinder{<-4.1261,-80,5.86337>,<-4.1261,-80,12.1019>,0.3}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*1.5  translate <-4.1261,-80,5.86337>}
cylinder{<-4.1261,-80,15.1019>,<-4.1261,-80,20.9864>,0.3}
cylinder{<-4.1261,-80,12.1019>,<-4.1261,-80,15.1019>,0.3}
cylinder{<-4.1261,-78.5,22.4864>,<-4.1261,-73.7152,22.4864>,0.3}
object{Elbow rotate z*90 scale <1,1,-1> translate <-4.1261,-78.5,22.4864>}
cylinder{<-4.1261,-70.7152,22.4864>,<-4.1261,-63.1544,22.4864>,0.3}
cylinder{<-4.1261,-73.7152,22.4864>,<-4.1261,-70.7152,22.4864>,0.3}
cylinder{<-4.1261,-60.1544,22.4864>,<-4.1261,-51.3696,22.4864>,0.3}
cylinder{<-4.1261,-63.1544,22.4864>,<-4.1261,-60.1544,22.4864>,0.3}
cylinder{<-5.6261,-49.8696,22.4864>,<-10.4978,-49.8696,22.4864>,0.3}
object{Elbow translate x*1.5 rotate x*90 rotate -z*90  translate <-5.6261,-49.8696,22.4864>}
cylinder{<-11.9978,-49.8696,20.9864>,<-11.9978,-49.8696,14.4498>,0.3}
object{Deco[6] scale 0.3 rotate x*360*0.930076 rotate y*90*-1 translate<-11.9978,-49.8696,20.4775> }
object{Deco[6] scale 0.3 rotate x*360*0.818153 rotate y*90*-1 translate<-11.9978,-49.8696,20.4644> }
object{Deco[2] scale 0.3 rotate x*360*0.852779 rotate y*90*-1 translate<-11.9978,-49.8696,20.2305> }
object{Deco[1] scale 0.3 rotate x*360*0.623528 rotate y*90*-1 translate<-11.9978,-49.8696,20.1236> }
object{Deco[2] scale 0.3 rotate x*360*0.402058 rotate y*90*-1 translate<-11.9978,-49.8696,19.8702> }
object{Deco[2] scale 0.3 rotate x*360*0.304221 rotate y*90*-1 translate<-11.9978,-49.8696,19.7765> }
object{Deco[6] scale 0.3 rotate x*360*0.299084 rotate y*90*-1 translate<-11.9978,-49.8696,19.2287> }
object{Deco[6] scale 0.3 rotate x*360*0.590799 rotate y*90*-1 translate<-11.9978,-49.8696,19.08> }
object{Deco[5] scale 0.3 rotate x*360*0.707771 rotate y*90*-1 translate<-11.9978,-49.8696,18.8623> }
object{Deco[3] scale 0.3 rotate x*360*0.644073 rotate y*90*-1 translate<-11.9978,-49.8696,18.2854> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-11.9978,-49.8696,20.9864>}
cylinder{<-11.9978,-48.3696,12.9498>,<-11.9978,-39.4506,12.9498>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.625455 rotate z*90*1 translate<-11.9978,-47.9138,12.9498> }
object{Deco[2] scale 0.3 rotate x*360*0.16088 rotate z*90*1 translate<-11.9978,-47.4271,12.9498> }
object{Deco[3] scale 0.3 rotate x*360*0.95029 rotate z*90*1 translate<-11.9978,-47.0791,12.9498> }
object{Deco[2] scale 0.3 rotate x*360*0.895532 rotate z*90*1 translate<-11.9978,-46.6266,12.9498> }
object{Deco[3] scale 0.3 rotate x*360*0.649388 rotate z*90*1 translate<-11.9978,-46.0878,12.9498> }
object{Deco[2] scale 0.3 rotate x*360*0.754428 rotate z*90*1 translate<-11.9978,-46.0547,12.9498> }
object{Deco[6] scale 0.3 rotate x*360*0.820657 rotate z*90*1 translate<-11.9978,-45.2586,12.9498> }
object{Deco[0] scale 0.3 rotate x*360*0.362708 rotate z*90*1 translate<-11.9978,-44.8391,12.9498> }
object{Deco[3] scale 0.3 rotate x*360*0.116043 rotate z*90*1 translate<-11.9978,-44.0761,12.9498> }
object{Deco[4] scale 0.3 rotate x*360*0.538543 rotate z*90*1 translate<-11.9978,-43.7952,12.9498> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*1.5  translate <-11.9978,-48.3696,12.9498>}
cylinder{<-11.9978,-37.9506,14.4498>,<-11.9978,-37.9506,22.8002>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.894146 rotate y*90*1 translate<-11.9978,-37.9506,14.5241> }
object{Deco[5] scale 0.3 rotate x*360*0.0572622 rotate y*90*1 translate<-11.9978,-37.9506,14.6851> }
object{Deco[4] scale 0.3 rotate x*360*0.395168 rotate y*90*1 translate<-11.9978,-37.9506,14.9493> }
object{Deco[2] scale 0.3 rotate x*360*0.0193858 rotate y*90*1 translate<-11.9978,-37.9506,15.1948> }
object{Deco[4] scale 0.3 rotate x*360*0.683729 rotate y*90*1 translate<-11.9978,-37.9506,15.722> }
object{Deco[5] scale 0.3 rotate x*360*0.39893 rotate y*90*1 translate<-11.9978,-37.9506,16.029> }
object{Deco[6] scale 0.3 rotate x*360*0.375586 rotate y*90*1 translate<-11.9978,-37.9506,16.1542> }
object{Deco[4] scale 0.3 rotate x*360*0.245393 rotate y*90*1 translate<-11.9978,-37.9506,16.5156> }
object{Deco[0] scale 0.3 rotate x*360*0.661989 rotate y*90*1 translate<-11.9978,-37.9506,16.9148> }
object{Deco[1] scale 0.3 rotate x*360*0.458621 rotate y*90*1 translate<-11.9978,-37.9506,16.949> }
object{Elbow translate z*1.5 rotate -z*90 translate -z*1.5 translate -y*1.5  translate <-11.9978,-37.9506,14.4498>}
cylinder{<-10.4978,-37.9506,24.3002>,<-4.94378,-37.9506,24.3002>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.433292 scale <1,1,1> translate<-10.3835,-37.9506,24.3002> }
object{Deco[6] scale 0.3 rotate x*360*0.615087 scale <1,1,1> translate<-10.1373,-37.9506,24.3002> }
object{Deco[4] scale 0.3 rotate x*360*0.141392 scale <1,1,1> translate<-9.94519,-37.9506,24.3002> }
object{Deco[1] scale 0.3 rotate x*360*0.676119 scale <1,1,1> translate<-9.54303,-37.9506,24.3002> }
object{Deco[0] scale 0.3 rotate x*360*0.708084 scale <1,1,1> translate<-9.34402,-37.9506,24.3002> }
object{Deco[4] scale 0.3 rotate x*360*0.265437 scale <1,1,1> translate<-9.10629,-37.9506,24.3002> }
object{Deco[2] scale 0.3 rotate x*360*0.845586 scale <1,1,1> translate<-9.04907,-37.9506,24.3002> }
object{Deco[5] scale 0.3 rotate x*360*0.0741809 scale <1,1,1> translate<-8.72176,-37.9506,24.3002> }
object{Deco[3] scale 0.3 rotate x*360*0.27322 scale <1,1,1> translate<-8.68023,-37.9506,24.3002> }
object{Deco[0] scale 0.3 rotate x*360*0.695691 scale <1,1,1> translate<-8.18812,-37.9506,24.3002> }
object{Elbow scale <1,1,-1> translate -z*1.5  translate <-10.4978,-37.9506,24.3002>}
cylinder{<-1.94378,-37.9506,24.3002>,<3.52772,-37.9506,24.3002>,0.3}
cylinder{<-4.94378,-37.9506,24.3002>,<-1.94378,-37.9506,24.3002>,0.3}
cylinder{<5.02772,-37.9506,25.8002>,<5.02772,-37.9506,30.9767>,0.3}
object{Elbow rotate y*-90 translate -x*1.5  translate <5.02772,-37.9506,25.8002>}
cylinder{<3.52772,-37.9506,32.4767>,<-2.53678,-37.9506,32.4767>,0.3}
object{Elbow scale <-1,1,-1> translate -z*1.5  translate <3.52772,-37.9506,32.4767>}
cylinder{<-4.03678,-36.4506,32.4767>,<-4.03678,-31.829,32.4767>,0.3}
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-4.03678,-36.4506,32.4767>}
cylinder{<-4.03678,-30.329,30.9767>,<-4.03678,-30.329,23.5014>,0.3}
object{Elbow rotate y*180 rotate z*90 translate -y*1.5  translate <-4.03678,-30.329,30.9767>}
cylinder{<-4.03678,-31.829,22.0014>,<-4.03678,-37.0858,22.0014>,0.3}
object{Elbow translate z*1.5 rotate -z*90 translate <-4.03678,-31.829,22.0014>}
cylinder{<-5.53678,-38.5858,22.0014>,<-11.5361,-38.5858,22.0014>,0.3}
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <-5.53678,-38.5858,22.0014>}
cylinder{<-13.0361,-38.5858,20.5014>,<-13.0361,-38.5858,13.8884>,0.3}
object{Deco[1] scale 0.3 rotate x*360*0.822753 rotate y*90*-1 translate<-13.0361,-38.5858,20.161> }
object{Deco[6] scale 0.3 rotate x*360*0.585229 rotate y*90*-1 translate<-13.0361,-38.5858,19.5841> }
object{Deco[6] scale 0.3 rotate x*360*0.601214 rotate y*90*-1 translate<-13.0361,-38.5858,19.0562> }
object{Deco[0] scale 0.3 rotate x*360*0.945647 rotate y*90*-1 translate<-13.0361,-38.5858,18.5227> }
object{Deco[6] scale 0.3 rotate x*360*0.179618 rotate y*90*-1 translate<-13.0361,-38.5858,18.061> }
object{Deco[1] scale 0.3 rotate x*360*0.377186 rotate y*90*-1 translate<-13.0361,-38.5858,17.839> }
object{Deco[0] scale 0.3 rotate x*360*0.0646496 rotate y*90*-1 translate<-13.0361,-38.5858,17.6048> }
object{Deco[2] scale 0.3 rotate x*360*0.786842 rotate y*90*-1 translate<-13.0361,-38.5858,17.1133> }
object{Deco[1] scale 0.3 rotate x*360*0.931925 rotate y*90*-1 translate<-13.0361,-38.5858,16.8666> }
object{Deco[2] scale 0.3 rotate x*360*0.0779725 rotate y*90*-1 translate<-13.0361,-38.5858,16.5424> }
object{Elbow scale <1,1,-1> translate x*1.5  translate <-13.0361,-38.5858,20.5014>}
cylinder{<-13.0361,-40.0858,12.3884>,<-13.0361,-43.465,12.3884>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.449717 rotate z*90*-1 translate<-13.0361,-40.3138,12.3884> }
object{Deco[5] scale 0.3 rotate x*360*0.642263 rotate z*90*-1 translate<-13.0361,-40.5183,12.3884> }
object{Deco[2] scale 0.3 rotate x*360*0.488763 rotate z*90*-1 translate<-13.0361,-40.7905,12.3884> }
object{Deco[3] scale 0.3 rotate x*360*0.806901 rotate z*90*-1 translate<-13.0361,-41.0752,12.3884> }
object{Deco[6] scale 0.3 rotate x*360*0.777874 rotate z*90*-1 translate<-13.0361,-41.3379,12.3884> }
object{Deco[3] scale 0.3 rotate x*360*0.551346 rotate z*90*-1 translate<-13.0361,-41.4691,12.3884> }
object{Deco[2] scale 0.3 rotate x*360*0.504273 rotate z*90*-1 translate<-13.0361,-41.4776,12.3884> }
object{Deco[6] scale 0.3 rotate x*360*0.256973 rotate z*90*-1 translate<-13.0361,-41.5997,12.3884> }
object{Deco[5] scale 0.3 rotate x*360*0.462317 rotate z*90*-1 translate<-13.0361,-41.7754,12.3884> }
object{Deco[4] scale 0.3 rotate x*360*0.950777 rotate z*90*-1 translate<-13.0361,-42.0337,12.3884> }
object{Elbow translate z*1.5 rotate -z*90 translate <-13.0361,-40.0858,12.3884>}
cylinder{<-14.5361,-44.965,12.3884>,<-17.9425,-44.965,12.3884>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.586371 scale <-1,1,1> translate<-14.6478,-44.965,12.3884> }
object{Deco[5] scale 0.3 rotate x*360*0.0124196 scale <-1,1,1> translate<-14.693,-44.965,12.3884> }
object{Deco[4] scale 0.3 rotate x*360*0.903526 scale <-1,1,1> translate<-14.7077,-44.965,12.3884> }
object{Deco[6] scale 0.3 rotate x*360*0.363517 scale <-1,1,1> translate<-14.9051,-44.965,12.3884> }
object{Deco[3] scale 0.3 rotate x*360*0.459993 scale <-1,1,1> translate<-14.9466,-44.965,12.3884> }
object{Deco[4] scale 0.3 rotate x*360*0.86738 scale <-1,1,1> translate<-15.1462,-44.965,12.3884> }
object{Deco[5] scale 0.3 rotate x*360*0.909176 scale <-1,1,1> translate<-15.2902,-44.965,12.3884> }
object{Deco[6] scale 0.3 rotate x*360*0.10095 scale <-1,1,1> translate<-15.505,-44.965,12.3884> }
object{Deco[1] scale 0.3 rotate x*360*0.266223 scale <-1,1,1> translate<-15.5591,-44.965,12.3884> }
object{Deco[4] scale 0.3 rotate x*360*0.611833 scale <-1,1,1> translate<-15.8422,-44.965,12.3884> }
object{Elbow translate z*1.5 rotate y*180 rotate x*90  translate <-14.5361,-44.965,12.3884>}
cylinder{<-19.4425,-44.965,13.8884>,<-19.4425,-44.965,17.222>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.315602 rotate y*90*1 translate<-19.4425,-44.965,13.9453> }
object{Deco[0] scale 0.3 rotate x*360*0.615011 rotate y*90*1 translate<-19.4425,-44.965,14.1696> }
object{Deco[2] scale 0.3 rotate x*360*0.458664 rotate y*90*1 translate<-19.4425,-44.965,14.2627> }
object{Deco[2] scale 0.3 rotate x*360*0.0377379 rotate y*90*1 translate<-19.4425,-44.965,14.4646> }
object{Deco[3] scale 0.3 rotate x*360*0.0490954 rotate y*90*1 translate<-19.4425,-44.965,14.4935> }
object{Deco[0] scale 0.3 rotate x*360*0.961395 rotate y*90*1 translate<-19.4425,-44.965,14.6831> }
object{Deco[6] scale 0.3 rotate x*360*0.929628 rotate y*90*1 translate<-19.4425,-44.965,14.8474> }
object{Deco[6] scale 0.3 rotate x*360*0.0671844 rotate y*90*1 translate<-19.4425,-44.965,15.0299> }
object{Deco[3] scale 0.3 rotate x*360*0.875749 rotate y*90*1 translate<-19.4425,-44.965,15.0759> }
object{Deco[1] scale 0.3 rotate x*360*0.507795 rotate y*90*1 translate<-19.4425,-44.965,15.2185> }
object{Elbow translate x*1.5  translate <-19.4425,-44.965,13.8884>}
cylinder{<-20.9425,-44.965,18.722>,<-25.7107,-44.965,18.722>,0.3}
object{Deco[2] scale 0.3 rotate x*360*0.735919 scale <-1,1,1> translate<-21.2152,-44.965,18.722> }
object{Deco[1] scale 0.3 rotate x*360*0.822472 scale <-1,1,1> translate<-21.3741,-44.965,18.722> }
object{Deco[6] scale 0.3 rotate x*360*0.907961 scale <-1,1,1> translate<-21.5368,-44.965,18.722> }
object{Deco[1] scale 0.3 rotate x*360*0.329929 scale <-1,1,1> translate<-21.9117,-44.965,18.722> }
object{Deco[3] scale 0.3 rotate x*360*0.633926 scale <-1,1,1> translate<-21.9632,-44.965,18.722> }
object{Deco[4] scale 0.3 rotate x*360*0.172626 scale <-1,1,1> translate<-22.3113,-44.965,18.722> }
object{Deco[3] scale 0.3 rotate x*360*0.606521 scale <-1,1,1> translate<-22.3613,-44.965,18.722> }
object{Deco[1] scale 0.3 rotate x*360*0.232215 scale <-1,1,1> translate<-22.5656,-44.965,18.722> }
object{Deco[5] scale 0.3 rotate x*360*0.338624 scale <-1,1,1> translate<-22.8161,-44.965,18.722> }
object{Deco[5] scale 0.3 rotate x*360*0.0384435 scale <-1,1,1> translate<-22.946,-44.965,18.722> }
object{Elbow scale <-1,1,-1> translate -z*1.5  translate <-20.9425,-44.965,18.722>}
cylinder{<-28.7107,-44.965,18.722>,<-28.5,-44.965,18.722>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.961458 scale <-1,1,1> translate<-28.7247,-44.965,18.722> }
object{Deco[0] scale 0.3 rotate x*360*0.460367 scale <-1,1,1> translate<-28.7347,-44.965,18.722> }
object{Deco[5] scale 0.3 rotate x*360*0.145825 scale <-1,1,1> translate<-28.7486,-44.965,18.722> }
object{Deco[4] scale 0.3 rotate x*360*0.818582 scale <-1,1,1> translate<-28.7541,-44.965,18.722> }
object{Deco[2] scale 0.3 rotate x*360*0.568856 scale <-1,1,1> translate<-28.7633,-44.965,18.722> }
object{Deco[6] scale 0.3 rotate x*360*0.54343 scale <-1,1,1> translate<-28.7716,-44.965,18.722> }
object{Deco[3] scale 0.3 rotate x*360*0.371374 scale <-1,1,1> translate<-28.7727,-44.965,18.722> }
object{Deco[6] scale 0.3 rotate x*360*0.00070569 scale <-1,1,1> translate<-28.7747,-44.965,18.722> }
object{Deco[4] scale 0.3 rotate x*360*0.218201 scale <-1,1,1> translate<-28.7875,-44.965,18.722> }
object{Deco[6] scale 0.3 rotate x*360*0.556684 scale <-1,1,1> translate<-28.7926,-44.965,18.722> }
cylinder{<-25.7107,-44.965,18.722>,<-28.7107,-44.965,18.722>,0.3}
object{Deco[5] scale 0.3 rotate x*360*0.182459 scale <-1,1,1> translate<-25.864,-44.965,18.722> }
object{Deco[0] scale 0.3 rotate x*360*0.281009 scale <-1,1,1> translate<-26.1138,-44.965,18.722> }
object{Deco[5] scale 0.3 rotate x*360*0.602775 scale <-1,1,1> translate<-26.1642,-44.965,18.722> }
object{Deco[1] scale 0.3 rotate x*360*0.190313 scale <-1,1,1> translate<-26.3195,-44.965,18.722> }
object{Deco[1] scale 0.3 rotate x*360*0.330522 scale <-1,1,1> translate<-26.3894,-44.965,18.722> }
object{Deco[3] scale 0.3 rotate x*360*0.613245 scale <-1,1,1> translate<-26.4817,-44.965,18.722> }
object{Deco[5] scale 0.3 rotate x*360*0.253934 scale <-1,1,1> translate<-26.5794,-44.965,18.722> }
object{Deco[0] scale 0.3 rotate x*360*0.754671 scale <-1,1,1> translate<-26.6726,-44.965,18.722> }
object{Deco[0] scale 0.3 rotate x*360*0.775962 scale <-1,1,1> translate<-26.6807,-44.965,18.722> }
object{Deco[4] scale 0.3 rotate x*360*0.32295 scale <-1,1,1> translate<-26.7908,-44.965,18.722> }
cylinder{<-30,-43.465,18.722>,<-30,-38.6884,18.722>,0.3}
object{Deco[4] scale 0.3 rotate x*360*0.0100381 rotate z*90*1 translate<-30,-43.3518,18.722> }
object{Deco[1] scale 0.3 rotate x*360*0.0347033 rotate z*90*1 translate<-30,-43.0868,18.722> }
object{Deco[0] scale 0.3 rotate x*360*0.733082 rotate z*90*1 translate<-30,-43.0495,18.722> }
object{Deco[1] scale 0.3 rotate x*360*0.250987 rotate z*90*1 translate<-30,-42.9789,18.722> }
object{Deco[3] scale 0.3 rotate x*360*0.610038 rotate z*90*1 translate<-30,-42.6638,18.722> }
object{Deco[5] scale 0.3 rotate x*360*0.132236 rotate z*90*1 translate<-30,-42.4789,18.722> }
object{Deco[4] scale 0.3 rotate x*360*0.399261 rotate z*90*1 translate<-30,-42.469,18.722> }
object{Deco[0] scale 0.3 rotate x*360*0.486976 rotate z*90*1 translate<-30,-42.4277,18.722> }
object{Deco[5] scale 0.3 rotate x*360*0.152454 rotate z*90*1 translate<-30,-42.3082,18.722> }
object{Deco[0] scale 0.3 rotate x*360*0.369281 rotate z*90*1 translate<-30,-42.2618,18.722> }
object{Elbow translate z*1.5 rotate -x*90 translate x*1.5 translate -y*1.5  translate <-30,-43.465,18.722>}
cylinder{<-30,-37.1884,17.222>,<-30,-37.1884,9.43253>,0.3}
object{Deco[0] scale 0.3 rotate x*360*0.720922 rotate y*90*-1 translate<-30,-37.1884,16.8945> }
object{Deco[4] scale 0.3 rotate x*360*0.483766 rotate y*90*-1 translate<-30,-37.1884,16.663> }
object{Deco[2] scale 0.3 rotate x*360*0.627563 rotate y*90*-1 translate<-30,-37.1884,16.1346> }
object{Deco[0] scale 0.3 rotate x*360*0.0937817 rotate y*90*-1 translate<-30,-37.1884,15.9385> }
object{Deco[4] scale 0.3 rotate x*360*0.0438861 rotate y*90*-1 translate<-30,-37.1884,15.5225> }
object{Deco[2] scale 0.3 rotate x*360*0.398057 rotate y*90*-1 translate<-30,-37.1884,15.2008> }
object{Deco[6] scale 0.3 rotate x*360*0.173982 rotate y*90*-1 translate<-30,-37.1884,14.9406> }
object{Deco[5] scale 0.3 rotate x*360*0.862418 rotate y*90*-1 translate<-30,-37.1884,14.463> }
object{Deco[6] scale 0.3 rotate x*360*0.266479 rotate y*90*-1 translate<-30,-37.1884,13.8871> }
object{Deco[0] scale 0.3 rotate x*360*0.361657 rotate y*90*-1 translate<-30,-37.1884,13.4581> }
object{Elbow rotate y*180 rotate z*90 translate -y*1.5  translate <-30,-37.1884,17.222>}
}
