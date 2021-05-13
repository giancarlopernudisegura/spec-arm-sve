union{
#declare Elbow=union{intersection{torus{3,0.6} plane{x,0} plane{z,0}}
torus{0.6,0.18 rotate z*90 translate -z*3}
torus{0.6,0.18 rotate x*90 translate -x*3}
torus{0.6,0.18 rotate x*90 translate -x*3 rotate y*-30}
torus{0.6,0.18 rotate x*90 translate -x*3 rotate y*-60}
}
cylinder{<0,-3,0>,<0,-9.99947,0>,0.6}
cylinder{<0,-12.9995,3>,<0,-12.9995,12.1386>,0.6}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*3  translate <0,-12.9995,3>}
cylinder{<0,-15.9995,15.1386>,<0,-23.0648,15.1386>,0.6}
object{Elbow rotate y*90 rotate -z*90 translate -z*3  translate <0,-15.9995,15.1386>}
cylinder{<0,-29.0648,15.1386>,<0,-40.4922,15.1386>,0.6}
cylinder{<0,-23.0648,15.1386>,<0,-29.0648,15.1386>,0.6}
cylinder{<0,-43.4922,12.1386>,<0,-43.4922,-1.20166>,0.6}
object{Elbow translate z*3 rotate z*90 rotate -x*90 translate <0,-43.4922,12.1386>}
cylinder{<0,-43.4922,-7.20166>,<0,-43.4922,-17.4455>,0.6}
cylinder{<0,-43.4922,-1.20166>,<0,-43.4922,-7.20166>,0.6}
cylinder{<-3,-43.4922,-20.4455>,<-10.687,-43.4922,-20.4455>,0.6}
object{Elbow scale <-1,1,1> translate z*3  translate <-3,-43.4922,-20.4455>}
cylinder{<-13.687,-43.4922,-23.4455>,<-13.687,-43.4922,-37.5>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.768715 rotate y*90*-1 translate<-13.687,-43.4922,-24.0415> }
object{Deco[5] scale 0.6 rotate x*360*0.773675 rotate y*90*-1 translate<-13.687,-43.4922,-24.6499> }
object{Deco[6] scale 0.6 rotate x*360*0.223429 rotate y*90*-1 translate<-13.687,-43.4922,-24.7808> }
object{Deco[6] scale 0.6 rotate x*360*0.671281 rotate y*90*-1 translate<-13.687,-43.4922,-25.256> }
object{Deco[6] scale 0.6 rotate x*360*0.310607 rotate y*90*-1 translate<-13.687,-43.4922,-25.7361> }
object{Deco[1] scale 0.6 rotate x*360*0.988087 rotate y*90*-1 translate<-13.687,-43.4922,-26.0238> }
object{Deco[4] scale 0.6 rotate x*360*0.440691 rotate y*90*-1 translate<-13.687,-43.4922,-26.5356> }
object{Deco[5] scale 0.6 rotate x*360*0.851042 rotate y*90*-1 translate<-13.687,-43.4922,-26.5737> }
object{Deco[4] scale 0.6 rotate x*360*0.653788 rotate y*90*-1 translate<-13.687,-43.4922,-27.0627> }
object{Deco[0] scale 0.6 rotate x*360*0.390678 rotate y*90*-1 translate<-13.687,-43.4922,-27.4899> }
object{Deco[4] scale 0.6 rotate x*360*0.167944 rotate y*90*-1 translate<-13.687,-43.4922,-27.6569> }
object{Deco[4] scale 0.6 rotate x*360*0.608563 rotate y*90*-1 translate<-13.687,-43.4922,-27.7> }
object{Deco[0] scale 0.6 rotate x*360*0.999763 rotate y*90*-1 translate<-13.687,-43.4922,-28.2687> }
object{Deco[3] scale 0.6 rotate x*360*0.629775 rotate y*90*-1 translate<-13.687,-43.4922,-28.4933> }
object{Deco[1] scale 0.6 rotate x*360*0.326913 rotate y*90*-1 translate<-13.687,-43.4922,-28.5536> }
object{Deco[6] scale 0.6 rotate x*360*0.429386 rotate y*90*-1 translate<-13.687,-43.4922,-28.9501> }
object{Deco[4] scale 0.6 rotate x*360*0.657603 rotate y*90*-1 translate<-13.687,-43.4922,-29.0846> }
object{Deco[0] scale 0.6 rotate x*360*0.966686 rotate y*90*-1 translate<-13.687,-43.4922,-29.3437> }
object{Deco[4] scale 0.6 rotate x*360*0.244153 rotate y*90*-1 translate<-13.687,-43.4922,-29.891> }
object{Deco[2] scale 0.6 rotate x*360*0.825881 rotate y*90*-1 translate<-13.687,-43.4922,-30.2283> }
object{Elbow scale <1,1,-1> translate x*3  translate <-13.687,-43.4922,-23.4455>}
cylinder{<-16.687,-43.4922,-40.5>,<-24,-43.4922,-40.5>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.0248974 scale <-1,1,1> translate<-16.9791,-43.4922,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.794621 scale <-1,1,1> translate<-16.9826,-43.4922,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.501311 scale <-1,1,1> translate<-17.2102,-43.4922,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.518778 scale <-1,1,1> translate<-17.2196,-43.4922,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.153848 scale <-1,1,1> translate<-17.4143,-43.4922,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.754337 scale <-1,1,1> translate<-17.7316,-43.4922,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.739384 scale <-1,1,1> translate<-18.0692,-43.4922,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.049418 scale <-1,1,1> translate<-18.3784,-43.4922,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.719695 scale <-1,1,1> translate<-18.6524,-43.4922,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.365605 scale <-1,1,1> translate<-18.6878,-43.4922,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.272014 scale <-1,1,1> translate<-18.721,-43.4922,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.91251 scale <-1,1,1> translate<-18.9723,-43.4922,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.461918 scale <-1,1,1> translate<-19.0517,-43.4922,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.335746 scale <-1,1,1> translate<-19.3639,-43.4922,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.663099 scale <-1,1,1> translate<-19.4633,-43.4922,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.258437 scale <-1,1,1> translate<-19.4664,-43.4922,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.0869651 scale <-1,1,1> translate<-19.6033,-43.4922,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.122663 scale <-1,1,1> translate<-19.7929,-43.4922,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.60235 scale <-1,1,1> translate<-20.0794,-43.4922,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.856363 scale <-1,1,1> translate<-20.1433,-43.4922,-40.5> }
object{Elbow scale <-1,1,1> translate z*3  translate <-16.687,-43.4922,-40.5>}
cylinder{<-27,-43.4922,-37.5>,<-27,-43.4922,-21.3341>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.291401 rotate y*90*1 translate<-27,-43.4922,-36.9653> }
object{Deco[3] scale 0.6 rotate x*360*0.884404 rotate y*90*1 translate<-27,-43.4922,-36.4529> }
object{Deco[6] scale 0.6 rotate x*360*0.293803 rotate y*90*1 translate<-27,-43.4922,-35.8785> }
object{Deco[4] scale 0.6 rotate x*360*0.0136359 rotate y*90*1 translate<-27,-43.4922,-35.6595> }
object{Deco[2] scale 0.6 rotate x*360*0.095143 rotate y*90*1 translate<-27,-43.4922,-35.1738> }
object{Deco[2] scale 0.6 rotate x*360*0.580474 rotate y*90*1 translate<-27,-43.4922,-34.5064> }
object{Deco[5] scale 0.6 rotate x*360*0.00824946 rotate y*90*1 translate<-27,-43.4922,-34.3433> }
object{Deco[5] scale 0.6 rotate x*360*0.724567 rotate y*90*1 translate<-27,-43.4922,-34.0035> }
object{Deco[5] scale 0.6 rotate x*360*0.752981 rotate y*90*1 translate<-27,-43.4922,-33.5924> }
object{Deco[5] scale 0.6 rotate x*360*0.0169445 rotate y*90*1 translate<-27,-43.4922,-33.5708> }
object{Deco[0] scale 0.6 rotate x*360*0.589855 rotate y*90*1 translate<-27,-43.4922,-33.0968> }
object{Deco[5] scale 0.6 rotate x*360*0.220815 rotate y*90*1 translate<-27,-43.4922,-32.9369> }
object{Deco[2] scale 0.6 rotate x*360*0.968651 rotate y*90*1 translate<-27,-43.4922,-32.485> }
object{Deco[6] scale 0.6 rotate x*360*0.367308 rotate y*90*1 translate<-27,-43.4922,-31.9521> }
object{Deco[1] scale 0.6 rotate x*360*0.605671 rotate y*90*1 translate<-27,-43.4922,-31.3393> }
object{Deco[6] scale 0.6 rotate x*360*0.0652435 rotate y*90*1 translate<-27,-43.4922,-31.0826> }
object{Deco[2] scale 0.6 rotate x*360*0.877002 rotate y*90*1 translate<-27,-43.4922,-30.8934> }
object{Deco[0] scale 0.6 rotate x*360*0.574349 rotate y*90*1 translate<-27,-43.4922,-30.4327> }
object{Deco[6] scale 0.6 rotate x*360*0.990291 rotate y*90*1 translate<-27,-43.4922,-29.9629> }
object{Deco[2] scale 0.6 rotate x*360*0.226997 rotate y*90*1 translate<-27,-43.4922,-29.2832> }
object{Elbow translate x*3  translate <-27,-43.4922,-37.5>}
cylinder{<-27,-43.4922,-15.3341>,<-27,-43.4922,-2.15925>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.468034 rotate y*90*1 translate<-27,-43.4922,-14.7778> }
object{Deco[3] scale 0.6 rotate x*360*0.010182 rotate y*90*1 translate<-27,-43.4922,-14.56> }
object{Deco[5] scale 0.6 rotate x*360*0.351078 rotate y*90*1 translate<-27,-43.4922,-14.534> }
object{Deco[4] scale 0.6 rotate x*360*0.680779 rotate y*90*1 translate<-27,-43.4922,-14.2529> }
object{Deco[3] scale 0.6 rotate x*360*0.269779 rotate y*90*1 translate<-27,-43.4922,-13.887> }
object{Deco[2] scale 0.6 rotate x*360*0.294871 rotate y*90*1 translate<-27,-43.4922,-13.7239> }
object{Deco[3] scale 0.6 rotate x*360*0.0766142 rotate y*90*1 translate<-27,-43.4922,-13.5579> }
object{Deco[5] scale 0.6 rotate x*360*0.469021 rotate y*90*1 translate<-27,-43.4922,-13.1846> }
object{Deco[5] scale 0.6 rotate x*360*0.218653 rotate y*90*1 translate<-27,-43.4922,-13.1342> }
object{Deco[6] scale 0.6 rotate x*360*0.758623 rotate y*90*1 translate<-27,-43.4922,-12.9565> }
object{Deco[2] scale 0.6 rotate x*360*0.905995 rotate y*90*1 translate<-27,-43.4922,-12.5919> }
object{Deco[1] scale 0.6 rotate x*360*0.457332 rotate y*90*1 translate<-27,-43.4922,-11.9963> }
object{Deco[3] scale 0.6 rotate x*360*0.980838 rotate y*90*1 translate<-27,-43.4922,-11.7047> }
object{Deco[1] scale 0.6 rotate x*360*0.205245 rotate y*90*1 translate<-27,-43.4922,-11.5027> }
object{Deco[5] scale 0.6 rotate x*360*0.706557 rotate y*90*1 translate<-27,-43.4922,-11.0845> }
object{Deco[0] scale 0.6 rotate x*360*0.0641204 rotate y*90*1 translate<-27,-43.4922,-10.683> }
object{Deco[2] scale 0.6 rotate x*360*0.177578 rotate y*90*1 translate<-27,-43.4922,-10.5451> }
object{Deco[4] scale 0.6 rotate x*360*0.0549087 rotate y*90*1 translate<-27,-43.4922,-10.1742> }
object{Deco[6] scale 0.6 rotate x*360*0.696368 rotate y*90*1 translate<-27,-43.4922,-9.90078> }
object{Deco[6] scale 0.6 rotate x*360*0.247532 rotate y*90*1 translate<-27,-43.4922,-9.48124> }
cylinder{<-27,-43.4922,-21.3341>,<-27,-43.4922,-15.3341>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.085933 rotate y*90*1 translate<-27,-43.4922,-21.113> }
object{Deco[1] scale 0.6 rotate x*360*0.907937 rotate y*90*1 translate<-27,-43.4922,-20.8538> }
object{Deco[3] scale 0.6 rotate x*360*0.817328 rotate y*90*1 translate<-27,-43.4922,-20.5863> }
object{Deco[3] scale 0.6 rotate x*360*0.00526825 rotate y*90*1 translate<-27,-43.4922,-20.5188> }
object{Deco[4] scale 0.6 rotate x*360*0.844399 rotate y*90*1 translate<-27,-43.4922,-20.3593> }
object{Deco[2] scale 0.6 rotate x*360*0.125184 rotate y*90*1 translate<-27,-43.4922,-20.296> }
object{Deco[2] scale 0.6 rotate x*360*0.464724 rotate y*90*1 translate<-27,-43.4922,-20.247> }
object{Deco[6] scale 0.6 rotate x*360*0.586315 rotate y*90*1 translate<-27,-43.4922,-20.1566> }
object{Deco[0] scale 0.6 rotate x*360*0.179046 rotate y*90*1 translate<-27,-43.4922,-20.0933> }
object{Deco[5] scale 0.6 rotate x*360*0.878147 rotate y*90*1 translate<-27,-43.4922,-19.8142> }
object{Deco[0] scale 0.6 rotate x*360*0.713859 rotate y*90*1 translate<-27,-43.4922,-19.6388> }
object{Deco[2] scale 0.6 rotate x*360*0.492716 rotate y*90*1 translate<-27,-43.4922,-19.4426> }
object{Deco[6] scale 0.6 rotate x*360*0.915787 rotate y*90*1 translate<-27,-43.4922,-19.1896> }
object{Deco[4] scale 0.6 rotate x*360*0.371925 rotate y*90*1 translate<-27,-43.4922,-19.1581> }
object{Deco[2] scale 0.6 rotate x*360*0.434362 rotate y*90*1 translate<-27,-43.4922,-19.0357> }
object{Deco[4] scale 0.6 rotate x*360*0.599501 rotate y*90*1 translate<-27,-43.4922,-18.7888> }
object{Deco[4] scale 0.6 rotate x*360*0.794403 rotate y*90*1 translate<-27,-43.4922,-18.6208> }
object{Deco[2] scale 0.6 rotate x*360*0.194161 rotate y*90*1 translate<-27,-43.4922,-18.3964> }
object{Deco[0] scale 0.6 rotate x*360*0.932834 rotate y*90*1 translate<-27,-43.4922,-18.2056> }
object{Deco[2] scale 0.6 rotate x*360*0.970915 rotate y*90*1 translate<-27,-43.4922,-18.0188> }
cylinder{<-27,-40.4922,0.840754>,<-27,-32.2865,0.840754>,0.6}
object{Elbow rotate z*90 scale <1,1,-1> translate <-27,-40.4922,0.840754>}
cylinder{<-24,-29.2865,0.840754>,<-6.08307,-29.2865,0.840754>,0.6}
object{Elbow translate z*3 rotate y*90 rotate x*-90 translate -x*3 translate -y*3  translate <-24,-29.2865,0.840754>}
cylinder{<-3.08307,-29.2865,-2.15925>,<-3.08307,-29.2865,-10.7148>,0.6}
object{Elbow translate x*3 rotate y*180 translate <-3.08307,-29.2865,-2.15925>}
cylinder{<-0.0830731,-29.2865,-13.7148>,<9.0128,-29.2865,-13.7148>,0.6}
object{Elbow translate z*3  translate <-0.0830731,-29.2865,-13.7148>}
cylinder{<12.0128,-32.2865,-13.7148>,<12.0128,-40.6991,-13.7148>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.877182 rotate z*90*-1 translate<12.0128,-32.3452,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.937745 rotate z*90*-1 translate<12.0128,-32.7144,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.604018 rotate z*90*-1 translate<12.0128,-32.8876,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.357035 rotate z*90*-1 translate<12.0128,-32.9495,-13.7148> }
object{Deco[1] scale 0.6 rotate x*360*0.743589 rotate z*90*-1 translate<12.0128,-33.2592,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.6637 rotate z*90*-1 translate<12.0128,-33.6344,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.317515 rotate z*90*-1 translate<12.0128,-34.0179,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.85285 rotate z*90*-1 translate<12.0128,-34.0952,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.566713 rotate z*90*-1 translate<12.0128,-34.4565,-13.7148> }
object{Deco[1] scale 0.6 rotate x*360*0.657036 rotate z*90*-1 translate<12.0128,-34.8213,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.624077 rotate z*90*-1 translate<12.0128,-35.1668,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.83198 rotate z*90*-1 translate<12.0128,-35.4135,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.0213381 rotate z*90*-1 translate<12.0128,-35.6425,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.280103 rotate z*90*-1 translate<12.0128,-35.8676,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.489702 rotate z*90*-1 translate<12.0128,-36.1668,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.886948 rotate z*90*-1 translate<12.0128,-36.5483,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.292182 rotate z*90*-1 translate<12.0128,-36.803,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.891928 rotate z*90*-1 translate<12.0128,-36.9562,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.642918 rotate z*90*-1 translate<12.0128,-36.9942,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.193899 rotate z*90*-1 translate<12.0128,-37.3927,-13.7148> }
object{Elbow translate x*3 rotate x*90 rotate y*180 translate <12.0128,-32.2865,-13.7148>}
cylinder{<12.0128,-46.6991,-13.7148>,<12.0128,-62.0373,-13.7148>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.440743 rotate z*90*-1 translate<12.0128,-47.0188,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.271655 rotate z*90*-1 translate<12.0128,-47.5787,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.0975852 rotate z*90*-1 translate<12.0128,-48.2018,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.852104 rotate z*90*-1 translate<12.0128,-48.4869,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.896882 rotate z*90*-1 translate<12.0128,-48.619,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.943978 rotate z*90*-1 translate<12.0128,-49.1755,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.378849 rotate z*90*-1 translate<12.0128,-49.8055,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.0819131 rotate z*90*-1 translate<12.0128,-50.371,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.440682 rotate z*90*-1 translate<12.0128,-51.0222,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.436764 rotate z*90*-1 translate<12.0128,-51.7118,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.491673 rotate z*90*-1 translate<12.0128,-52.3408,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.449441 rotate z*90*-1 translate<12.0128,-52.8172,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.670168 rotate z*90*-1 translate<12.0128,-53.386,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.639082 rotate z*90*-1 translate<12.0128,-53.8364,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.411068 rotate z*90*-1 translate<12.0128,-54.3099,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.379612 rotate z*90*-1 translate<12.0128,-54.979,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.626194 rotate z*90*-1 translate<12.0128,-55.3831,-13.7148> }
object{Deco[1] scale 0.6 rotate x*360*0.0491364 rotate z*90*-1 translate<12.0128,-55.7212,-13.7148> }
object{Deco[1] scale 0.6 rotate x*360*0.335054 rotate z*90*-1 translate<12.0128,-56.3537,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.0122241 rotate z*90*-1 translate<12.0128,-56.4807,-13.7148> }
cylinder{<12.0128,-40.6991,-13.7148>,<12.0128,-46.6991,-13.7148>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.0727775 rotate z*90*-1 translate<12.0128,-40.723,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.458654 rotate z*90*-1 translate<12.0128,-40.937,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.617832 rotate z*90*-1 translate<12.0128,-41.2091,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.755973 rotate z*90*-1 translate<12.0128,-41.2136,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.837004 rotate z*90*-1 translate<12.0128,-41.4432,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.73981 rotate z*90*-1 translate<12.0128,-41.6704,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.551575 rotate z*90*-1 translate<12.0128,-41.87,-13.7148> }
object{Deco[1] scale 0.6 rotate x*360*0.827815 rotate z*90*-1 translate<12.0128,-41.9387,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.599127 rotate z*90*-1 translate<12.0128,-42.1934,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.0628163 rotate z*90*-1 translate<12.0128,-42.2417,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.512493 rotate z*90*-1 translate<12.0128,-42.3993,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.730813 rotate z*90*-1 translate<12.0128,-42.435,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.77349 rotate z*90*-1 translate<12.0128,-42.5739,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.122304 rotate z*90*-1 translate<12.0128,-42.658,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.236771 rotate z*90*-1 translate<12.0128,-42.6753,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.873581 rotate z*90*-1 translate<12.0128,-42.6916,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.370892 rotate z*90*-1 translate<12.0128,-42.8212,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.200616 rotate z*90*-1 translate<12.0128,-42.9481,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.242012 rotate z*90*-1 translate<12.0128,-42.975,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.784457 rotate z*90*-1 translate<12.0128,-43.009,-13.7148> }
cylinder{<12.0128,-68.0373,-13.7148>,<12.0128,-77,-13.7148>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.0496587 rotate z*90*-1 translate<12.0128,-68.4568,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.700077 rotate z*90*-1 translate<12.0128,-68.5192,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.185085 rotate z*90*-1 translate<12.0128,-68.8008,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.363253 rotate z*90*-1 translate<12.0128,-69.0669,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.7643 rotate z*90*-1 translate<12.0128,-69.1863,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.811584 rotate z*90*-1 translate<12.0128,-69.4401,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.290053 rotate z*90*-1 translate<12.0128,-69.8648,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.708151 rotate z*90*-1 translate<12.0128,-70.2684,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.193597 rotate z*90*-1 translate<12.0128,-70.5496,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.328053 rotate z*90*-1 translate<12.0128,-70.5551,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.706888 rotate z*90*-1 translate<12.0128,-70.8018,-13.7148> }
object{Deco[1] scale 0.6 rotate x*360*0.278776 rotate z*90*-1 translate<12.0128,-71.1933,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.778451 rotate z*90*-1 translate<12.0128,-71.5952,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.820552 rotate z*90*-1 translate<12.0128,-71.7613,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.324508 rotate z*90*-1 translate<12.0128,-72.0699,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.290738 rotate z*90*-1 translate<12.0128,-72.2585,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.791603 rotate z*90*-1 translate<12.0128,-72.3657,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.363784 rotate z*90*-1 translate<12.0128,-72.645,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.480519 rotate z*90*-1 translate<12.0128,-73.0136,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.988701 rotate z*90*-1 translate<12.0128,-73.3946,-13.7148> }
cylinder{<12.0128,-62.0373,-13.7148>,<12.0128,-68.0373,-13.7148>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.156537 rotate z*90*-1 translate<12.0128,-62.1704,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.401626 rotate z*90*-1 translate<12.0128,-62.2155,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.460301 rotate z*90*-1 translate<12.0128,-62.265,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.674523 rotate z*90*-1 translate<12.0128,-62.3828,-13.7148> }
object{Deco[1] scale 0.6 rotate x*360*0.349402 rotate z*90*-1 translate<12.0128,-62.6374,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.394895 rotate z*90*-1 translate<12.0128,-62.8587,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.555662 rotate z*90*-1 translate<12.0128,-62.9855,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.337932 rotate z*90*-1 translate<12.0128,-63.2648,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.649554 rotate z*90*-1 translate<12.0128,-63.2746,-13.7148> }
object{Deco[1] scale 0.6 rotate x*360*0.954471 rotate z*90*-1 translate<12.0128,-63.4113,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.0736857 rotate z*90*-1 translate<12.0128,-63.478,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.217866 rotate z*90*-1 translate<12.0128,-63.6732,-13.7148> }
object{Deco[2] scale 0.6 rotate x*360*0.25437 rotate z*90*-1 translate<12.0128,-63.8525,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.412882 rotate z*90*-1 translate<12.0128,-63.9817,-13.7148> }
object{Deco[6] scale 0.6 rotate x*360*0.936407 rotate z*90*-1 translate<12.0128,-64.1392,-13.7148> }
object{Deco[5] scale 0.6 rotate x*360*0.872605 rotate z*90*-1 translate<12.0128,-64.4105,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.0239347 rotate z*90*-1 translate<12.0128,-64.4941,-13.7148> }
object{Deco[3] scale 0.6 rotate x*360*0.0375089 rotate z*90*-1 translate<12.0128,-64.5131,-13.7148> }
object{Deco[4] scale 0.6 rotate x*360*0.761923 rotate z*90*-1 translate<12.0128,-64.6822,-13.7148> }
object{Deco[0] scale 0.6 rotate x*360*0.586809 rotate z*90*-1 translate<12.0128,-64.8554,-13.7148> }
cylinder{<12.0128,-80,-16.7148>,<12.0128,-80,-26.3915>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.290589 rotate y*90*-1 translate<12.0128,-80,-17.08> }
object{Deco[3] scale 0.6 rotate x*360*0.0530428 rotate y*90*-1 translate<12.0128,-80,-17.4367> }
object{Deco[1] scale 0.6 rotate x*360*0.558267 rotate y*90*-1 translate<12.0128,-80,-17.6365> }
object{Deco[0] scale 0.6 rotate x*360*0.471397 rotate y*90*-1 translate<12.0128,-80,-18.0585> }
object{Deco[1] scale 0.6 rotate x*360*0.707388 rotate y*90*-1 translate<12.0128,-80,-18.0925> }
object{Deco[3] scale 0.6 rotate x*360*0.957175 rotate y*90*-1 translate<12.0128,-80,-18.5348> }
object{Deco[4] scale 0.6 rotate x*360*0.276317 rotate y*90*-1 translate<12.0128,-80,-18.7907> }
object{Deco[6] scale 0.6 rotate x*360*0.227025 rotate y*90*-1 translate<12.0128,-80,-19.0768> }
object{Deco[4] scale 0.6 rotate x*360*0.513833 rotate y*90*-1 translate<12.0128,-80,-19.3269> }
object{Deco[0] scale 0.6 rotate x*360*0.180997 rotate y*90*-1 translate<12.0128,-80,-19.757> }
object{Deco[6] scale 0.6 rotate x*360*0.835957 rotate y*90*-1 translate<12.0128,-80,-19.8534> }
object{Deco[6] scale 0.6 rotate x*360*0.338763 rotate y*90*-1 translate<12.0128,-80,-20.1339> }
object{Deco[5] scale 0.6 rotate x*360*0.0913246 rotate y*90*-1 translate<12.0128,-80,-20.2657> }
object{Deco[3] scale 0.6 rotate x*360*0.90146 rotate y*90*-1 translate<12.0128,-80,-20.4723> }
object{Deco[6] scale 0.6 rotate x*360*0.374004 rotate y*90*-1 translate<12.0128,-80,-20.5816> }
object{Deco[2] scale 0.6 rotate x*360*0.663899 rotate y*90*-1 translate<12.0128,-80,-20.9744> }
object{Deco[5] scale 0.6 rotate x*360*0.010334 rotate y*90*-1 translate<12.0128,-80,-20.9955> }
object{Deco[4] scale 0.6 rotate x*360*0.120013 rotate y*90*-1 translate<12.0128,-80,-21.161> }
object{Deco[6] scale 0.6 rotate x*360*0.648141 rotate y*90*-1 translate<12.0128,-80,-21.2863> }
object{Deco[3] scale 0.6 rotate x*360*0.230442 rotate y*90*-1 translate<12.0128,-80,-21.6959> }
object{Elbow translate z*3 rotate z*90 rotate -x*90 translate <12.0128,-80,-16.7148>}
cylinder{<15.0128,-80,-29.3915>,<24,-80,-29.3915>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.24513 scale <1,1,1> translate<15.4001,-80,-29.3915> }
object{Deco[0] scale 0.6 rotate x*360*0.440388 scale <1,1,1> translate<15.4075,-80,-29.3915> }
object{Deco[1] scale 0.6 rotate x*360*0.0606935 scale <1,1,1> translate<15.4501,-80,-29.3915> }
object{Deco[4] scale 0.6 rotate x*360*0.490801 scale <1,1,1> translate<15.656,-80,-29.3915> }
object{Deco[2] scale 0.6 rotate x*360*0.985852 scale <1,1,1> translate<15.6597,-80,-29.3915> }
object{Deco[1] scale 0.6 rotate x*360*0.878486 scale <1,1,1> translate<16.0262,-80,-29.3915> }
object{Deco[2] scale 0.6 rotate x*360*0.0636643 scale <1,1,1> translate<16.3163,-80,-29.3915> }
object{Deco[0] scale 0.6 rotate x*360*0.318199 scale <1,1,1> translate<16.3207,-80,-29.3915> }
object{Deco[0] scale 0.6 rotate x*360*0.678293 scale <1,1,1> translate<16.6917,-80,-29.3915> }
object{Deco[6] scale 0.6 rotate x*360*0.704993 scale <1,1,1> translate<16.8565,-80,-29.3915> }
object{Deco[6] scale 0.6 rotate x*360*0.569227 scale <1,1,1> translate<16.8865,-80,-29.3915> }
object{Deco[6] scale 0.6 rotate x*360*0.728374 scale <1,1,1> translate<17.0461,-80,-29.3915> }
object{Deco[4] scale 0.6 rotate x*360*0.903186 scale <1,1,1> translate<17.4704,-80,-29.3915> }
object{Deco[4] scale 0.6 rotate x*360*0.32167 scale <1,1,1> translate<17.8748,-80,-29.3915> }
object{Deco[6] scale 0.6 rotate x*360*0.51859 scale <1,1,1> translate<17.9705,-80,-29.3915> }
object{Deco[0] scale 0.6 rotate x*360*0.949681 scale <1,1,1> translate<18.3091,-80,-29.3915> }
object{Deco[5] scale 0.6 rotate x*360*0.915475 scale <1,1,1> translate<18.5119,-80,-29.3915> }
object{Deco[0] scale 0.6 rotate x*360*0.39487 scale <1,1,1> translate<18.8269,-80,-29.3915> }
object{Deco[2] scale 0.6 rotate x*360*0.498275 scale <1,1,1> translate<18.956,-80,-29.3915> }
object{Deco[3] scale 0.6 rotate x*360*0.17993 scale <1,1,1> translate<19.3163,-80,-29.3915> }
object{Elbow translate z*3  translate <15.0128,-80,-29.3915>}
cylinder{<27,-80,-26.3915>,<27,-80,-19.1889>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.765802 rotate y*90*1 translate<27,-80,-26.2877> }
object{Deco[3] scale 0.6 rotate x*360*0.546245 rotate y*90*1 translate<27,-80,-26.2449> }
object{Deco[3] scale 0.6 rotate x*360*0.170042 rotate y*90*1 translate<27,-80,-25.9835> }
object{Deco[3] scale 0.6 rotate x*360*0.765992 rotate y*90*1 translate<27,-80,-25.866> }
object{Deco[4] scale 0.6 rotate x*360*0.109731 rotate y*90*1 translate<27,-80,-25.7591> }
object{Deco[0] scale 0.6 rotate x*360*0.786748 rotate y*90*1 translate<27,-80,-25.6597> }
object{Deco[5] scale 0.6 rotate x*360*0.120437 rotate y*90*1 translate<27,-80,-25.4586> }
object{Deco[1] scale 0.6 rotate x*360*0.330154 rotate y*90*1 translate<27,-80,-25.1585> }
object{Deco[6] scale 0.6 rotate x*360*0.382211 rotate y*90*1 translate<27,-80,-24.8203> }
object{Deco[3] scale 0.6 rotate x*360*0.496229 rotate y*90*1 translate<27,-80,-24.7718> }
object{Deco[4] scale 0.6 rotate x*360*0.810359 rotate y*90*1 translate<27,-80,-24.6951> }
object{Deco[0] scale 0.6 rotate x*360*0.533123 rotate y*90*1 translate<27,-80,-24.6085> }
object{Deco[6] scale 0.6 rotate x*360*0.0204294 rotate y*90*1 translate<27,-80,-24.4359> }
object{Deco[6] scale 0.6 rotate x*360*0.480778 rotate y*90*1 translate<27,-80,-24.2703> }
object{Deco[2] scale 0.6 rotate x*360*0.0098367 rotate y*90*1 translate<27,-80,-23.9377> }
object{Deco[2] scale 0.6 rotate x*360*0.665192 rotate y*90*1 translate<27,-80,-23.8691> }
object{Deco[6] scale 0.6 rotate x*360*0.739334 rotate y*90*1 translate<27,-80,-23.7487> }
object{Deco[3] scale 0.6 rotate x*360*0.278759 rotate y*90*1 translate<27,-80,-23.576> }
object{Deco[4] scale 0.6 rotate x*360*0.177457 rotate y*90*1 translate<27,-80,-23.5372> }
object{Deco[1] scale 0.6 rotate x*360*0.67376 rotate y*90*1 translate<27,-80,-23.2639> }
object{Elbow rotate y*-90 translate -x*3  translate <27,-80,-26.3915>}
cylinder{<24,-80,-16.1889>,<9.63549,-80,-16.1889>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.765814 scale <-1,1,1> translate<23.5879,-80,-16.1889> }
object{Deco[5] scale 0.6 rotate x*360*0.170611 scale <-1,1,1> translate<23.5311,-80,-16.1889> }
object{Deco[6] scale 0.6 rotate x*360*0.152393 scale <-1,1,1> translate<23.2903,-80,-16.1889> }
object{Deco[6] scale 0.6 rotate x*360*0.759942 scale <-1,1,1> translate<23.0672,-80,-16.1889> }
object{Deco[3] scale 0.6 rotate x*360*0.816632 scale <-1,1,1> translate<22.6689,-80,-16.1889> }
object{Deco[6] scale 0.6 rotate x*360*0.199812 scale <-1,1,1> translate<22.5141,-80,-16.1889> }
object{Deco[5] scale 0.6 rotate x*360*0.129055 scale <-1,1,1> translate<22.3362,-80,-16.1889> }
object{Deco[0] scale 0.6 rotate x*360*0.103572 scale <-1,1,1> translate<22.3316,-80,-16.1889> }
object{Deco[1] scale 0.6 rotate x*360*0.543744 scale <-1,1,1> translate<22.0754,-80,-16.1889> }
object{Deco[0] scale 0.6 rotate x*360*0.898967 scale <-1,1,1> translate<21.7783,-80,-16.1889> }
object{Deco[2] scale 0.6 rotate x*360*0.559241 scale <-1,1,1> translate<21.416,-80,-16.1889> }
object{Deco[2] scale 0.6 rotate x*360*0.564151 scale <-1,1,1> translate<20.7493,-80,-16.1889> }
object{Deco[6] scale 0.6 rotate x*360*0.195396 scale <-1,1,1> translate<20.4177,-80,-16.1889> }
object{Deco[1] scale 0.6 rotate x*360*0.581967 scale <-1,1,1> translate<20.215,-80,-16.1889> }
object{Deco[6] scale 0.6 rotate x*360*0.470163 scale <-1,1,1> translate<20.1113,-80,-16.1889> }
object{Deco[3] scale 0.6 rotate x*360*0.570646 scale <-1,1,1> translate<19.9995,-80,-16.1889> }
object{Deco[4] scale 0.6 rotate x*360*0.396502 scale <-1,1,1> translate<19.4186,-80,-16.1889> }
object{Deco[6] scale 0.6 rotate x*360*0.471885 scale <-1,1,1> translate<18.9663,-80,-16.1889> }
object{Deco[1] scale 0.6 rotate x*360*0.157207 scale <-1,1,1> translate<18.5709,-80,-16.1889> }
object{Deco[2] scale 0.6 rotate x*360*0.545464 scale <-1,1,1> translate<17.9914,-80,-16.1889> }
object{Elbow scale <-1,1,-1> translate -z*3  translate <24,-80,-16.1889>}
cylinder{<6.63549,-80,-13.1889>,<6.63549,-80,3.70679>,0.6}
object{Elbow translate x*3  translate <6.63549,-80,-13.1889>}
cylinder{<6.63549,-80,9.70679>,<6.63549,-80,25.253>,0.6}
cylinder{<6.63549,-80,3.70679>,<6.63549,-80,9.70679>,0.6}
cylinder{<9.63549,-80,28.253>,<24,-80,28.253>,0.6}
object{Elbow scale <1,1,-1> translate -z*3  translate <9.63549,-80,28.253>}
cylinder{<27,-77,28.253>,<27,-68.6295,28.253>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.378039 rotate z*90*1 translate<27,-76.8966,28.253> }
object{Deco[1] scale 0.6 rotate x*360*0.386185 rotate z*90*1 translate<27,-76.5668,28.253> }
object{Deco[5] scale 0.6 rotate x*360*0.354991 rotate z*90*1 translate<27,-76.2353,28.253> }
object{Deco[2] scale 0.6 rotate x*360*0.257252 rotate z*90*1 translate<27,-76.0478,28.253> }
object{Deco[0] scale 0.6 rotate x*360*0.220025 rotate z*90*1 translate<27,-75.7979,28.253> }
object{Deco[4] scale 0.6 rotate x*360*0.986599 rotate z*90*1 translate<27,-75.6594,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.186881 rotate z*90*1 translate<27,-75.5747,28.253> }
object{Deco[5] scale 0.6 rotate x*360*0.24259 rotate z*90*1 translate<27,-75.5053,28.253> }
object{Deco[5] scale 0.6 rotate x*360*0.47618 rotate z*90*1 translate<27,-75.4262,28.253> }
object{Deco[5] scale 0.6 rotate x*360*0.489476 rotate z*90*1 translate<27,-75.3046,28.253> }
object{Deco[1] scale 0.6 rotate x*360*0.51351 rotate z*90*1 translate<27,-74.9879,28.253> }
object{Deco[6] scale 0.6 rotate x*360*0.367326 rotate z*90*1 translate<27,-74.8628,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.283103 rotate z*90*1 translate<27,-74.471,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.965039 rotate z*90*1 translate<27,-74.3614,28.253> }
object{Deco[0] scale 0.6 rotate x*360*0.875804 rotate z*90*1 translate<27,-74.3424,28.253> }
object{Deco[0] scale 0.6 rotate x*360*0.530504 rotate z*90*1 translate<27,-74.0179,28.253> }
object{Deco[2] scale 0.6 rotate x*360*0.243659 rotate z*90*1 translate<27,-73.6381,28.253> }
object{Deco[5] scale 0.6 rotate x*360*0.772331 rotate z*90*1 translate<27,-73.4077,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.748641 rotate z*90*1 translate<27,-73.035,28.253> }
object{Deco[5] scale 0.6 rotate x*360*0.963232 rotate z*90*1 translate<27,-72.9871,28.253> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*3  translate <27,-77,28.253>}
cylinder{<27,-62.6295,28.253>,<27,-54.9197,28.253>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.173359 rotate z*90*1 translate<27,-62.4157,28.253> }
object{Deco[5] scale 0.6 rotate x*360*0.279213 rotate z*90*1 translate<27,-62.1886,28.253> }
object{Deco[5] scale 0.6 rotate x*360*0.262568 rotate z*90*1 translate<27,-62.0604,28.253> }
object{Deco[0] scale 0.6 rotate x*360*0.242034 rotate z*90*1 translate<27,-62.0025,28.253> }
object{Deco[6] scale 0.6 rotate x*360*0.190112 rotate z*90*1 translate<27,-61.8704,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.523154 rotate z*90*1 translate<27,-61.6056,28.253> }
object{Deco[2] scale 0.6 rotate x*360*0.755519 rotate z*90*1 translate<27,-61.4981,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.449741 rotate z*90*1 translate<27,-61.2111,28.253> }
object{Deco[2] scale 0.6 rotate x*360*0.650031 rotate z*90*1 translate<27,-61.1599,28.253> }
object{Deco[1] scale 0.6 rotate x*360*0.622993 rotate z*90*1 translate<27,-61.0129,28.253> }
object{Deco[2] scale 0.6 rotate x*360*0.892613 rotate z*90*1 translate<27,-60.7868,28.253> }
object{Deco[0] scale 0.6 rotate x*360*0.227344 rotate z*90*1 translate<27,-60.592,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.232235 rotate z*90*1 translate<27,-60.3201,28.253> }
object{Deco[6] scale 0.6 rotate x*360*0.851529 rotate z*90*1 translate<27,-60.0703,28.253> }
object{Deco[1] scale 0.6 rotate x*360*0.860768 rotate z*90*1 translate<27,-59.7307,28.253> }
object{Deco[6] scale 0.6 rotate x*360*0.104824 rotate z*90*1 translate<27,-59.6852,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.262316 rotate z*90*1 translate<27,-59.326,28.253> }
object{Deco[2] scale 0.6 rotate x*360*0.648712 rotate z*90*1 translate<27,-59.0589,28.253> }
object{Deco[2] scale 0.6 rotate x*360*0.670286 rotate z*90*1 translate<27,-58.8039,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.358931 rotate z*90*1 translate<27,-58.4765,28.253> }
cylinder{<27,-68.6295,28.253>,<27,-62.6295,28.253>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.225584 rotate z*90*1 translate<27,-68.4802,28.253> }
object{Deco[1] scale 0.6 rotate x*360*0.747919 rotate z*90*1 translate<27,-68.4218,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.84046 rotate z*90*1 translate<27,-68.1437,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.5755 rotate z*90*1 translate<27,-67.9542,28.253> }
object{Deco[2] scale 0.6 rotate x*360*0.785195 rotate z*90*1 translate<27,-67.8775,28.253> }
object{Deco[4] scale 0.6 rotate x*360*0.318843 rotate z*90*1 translate<27,-67.6303,28.253> }
object{Deco[0] scale 0.6 rotate x*360*0.441627 rotate z*90*1 translate<27,-67.6245,28.253> }
object{Deco[4] scale 0.6 rotate x*360*0.923684 rotate z*90*1 translate<27,-67.3657,28.253> }
object{Deco[4] scale 0.6 rotate x*360*0.320782 rotate z*90*1 translate<27,-67.119,28.253> }
object{Deco[4] scale 0.6 rotate x*360*0.5801 rotate z*90*1 translate<27,-66.8403,28.253> }
object{Deco[4] scale 0.6 rotate x*360*0.634293 rotate z*90*1 translate<27,-66.6607,28.253> }
object{Deco[1] scale 0.6 rotate x*360*0.220222 rotate z*90*1 translate<27,-66.5709,28.253> }
object{Deco[1] scale 0.6 rotate x*360*0.253229 rotate z*90*1 translate<27,-66.4916,28.253> }
object{Deco[0] scale 0.6 rotate x*360*0.584689 rotate z*90*1 translate<27,-66.3842,28.253> }
object{Deco[2] scale 0.6 rotate x*360*0.095951 rotate z*90*1 translate<27,-66.3372,28.253> }
object{Deco[0] scale 0.6 rotate x*360*0.111874 rotate z*90*1 translate<27,-66.2479,28.253> }
object{Deco[4] scale 0.6 rotate x*360*0.671195 rotate z*90*1 translate<27,-66.0896,28.253> }
object{Deco[0] scale 0.6 rotate x*360*0.131436 rotate z*90*1 translate<27,-66.0093,28.253> }
object{Deco[5] scale 0.6 rotate x*360*0.976219 rotate z*90*1 translate<27,-65.846,28.253> }
object{Deco[3] scale 0.6 rotate x*360*0.954145 rotate z*90*1 translate<27,-65.7995,28.253> }
cylinder{<27,-51.9197,31.253>,<27,-51.9197,37.3194>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.270925 rotate y*90*1 translate<27,-51.9197,31.5046> }
object{Deco[1] scale 0.6 rotate x*360*0.21442 rotate y*90*1 translate<27,-51.9197,31.6888> }
object{Deco[5] scale 0.6 rotate x*360*0.903642 rotate y*90*1 translate<27,-51.9197,31.8162> }
object{Deco[0] scale 0.6 rotate x*360*0.00127387 rotate y*90*1 translate<27,-51.9197,31.8321> }
object{Deco[6] scale 0.6 rotate x*360*0.755764 rotate y*90*1 translate<27,-51.9197,32.0958> }
object{Deco[4] scale 0.6 rotate x*360*0.477642 rotate y*90*1 translate<27,-51.9197,32.2292> }
object{Deco[5] scale 0.6 rotate x*360*0.160152 rotate y*90*1 translate<27,-51.9197,32.3584> }
object{Deco[4] scale 0.6 rotate x*360*0.43024 rotate y*90*1 translate<27,-51.9197,32.6076> }
object{Deco[1] scale 0.6 rotate x*360*0.870145 rotate y*90*1 translate<27,-51.9197,32.7229> }
object{Deco[2] scale 0.6 rotate x*360*0.382653 rotate y*90*1 translate<27,-51.9197,33.0029> }
object{Deco[0] scale 0.6 rotate x*360*0.901593 rotate y*90*1 translate<27,-51.9197,33.1939> }
object{Deco[4] scale 0.6 rotate x*360*0.0678258 rotate y*90*1 translate<27,-51.9197,33.3333> }
object{Deco[6] scale 0.6 rotate x*360*0.191864 rotate y*90*1 translate<27,-51.9197,33.4615> }
object{Deco[3] scale 0.6 rotate x*360*0.0673193 rotate y*90*1 translate<27,-51.9197,33.6602> }
object{Deco[2] scale 0.6 rotate x*360*0.108657 rotate y*90*1 translate<27,-51.9197,33.8381> }
object{Deco[1] scale 0.6 rotate x*360*0.741469 rotate y*90*1 translate<27,-51.9197,33.9369> }
object{Deco[6] scale 0.6 rotate x*360*0.393217 rotate y*90*1 translate<27,-51.9197,33.9897> }
object{Deco[6] scale 0.6 rotate x*360*0.950581 rotate y*90*1 translate<27,-51.9197,34.2195> }
object{Deco[4] scale 0.6 rotate x*360*0.900875 rotate y*90*1 translate<27,-51.9197,34.4204> }
object{Deco[3] scale 0.6 rotate x*360*0.0135663 rotate y*90*1 translate<27,-51.9197,34.4673> }
object{Elbow translate z*3 rotate -z*90 translate -z*3 translate -y*3  translate <27,-51.9197,31.253>}
cylinder{<24,-51.9197,40.3194>,<15.4679,-51.9197,40.3194>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.4893 scale <-1,1,1> translate<23.6672,-51.9197,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.560882 scale <-1,1,1> translate<23.2895,-51.9197,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.540993 scale <-1,1,1> translate<22.9998,-51.9197,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.988463 scale <-1,1,1> translate<22.7308,-51.9197,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.183614 scale <-1,1,1> translate<22.699,-51.9197,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.698931 scale <-1,1,1> translate<22.5691,-51.9197,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.11643 scale <-1,1,1> translate<22.2043,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.540716 scale <-1,1,1> translate<21.8333,-51.9197,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.999314 scale <-1,1,1> translate<21.7167,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.92092 scale <-1,1,1> translate<21.6694,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.198977 scale <-1,1,1> translate<21.4572,-51.9197,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.997369 scale <-1,1,1> translate<21.2032,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.0085284 scale <-1,1,1> translate<20.8549,-51.9197,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.931585 scale <-1,1,1> translate<20.6899,-51.9197,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.56952 scale <-1,1,1> translate<20.5395,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.894222 scale <-1,1,1> translate<20.1805,-51.9197,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.910144 scale <-1,1,1> translate<19.7862,-51.9197,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.242028 scale <-1,1,1> translate<19.7845,-51.9197,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.486931 scale <-1,1,1> translate<19.6139,-51.9197,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.895739 scale <-1,1,1> translate<19.3279,-51.9197,40.3194> }
object{Elbow scale <-1,1,-1> translate -z*3  translate <24,-51.9197,40.3194>}
cylinder{<9.46792,-51.9197,40.3194>,<-2.10862,-51.9197,40.3194>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.367358 scale <-1,1,1> translate<9.36182,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.200432 scale <-1,1,1> translate<9.35961,-51.9197,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.517475 scale <-1,1,1> translate<9.20476,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.618687 scale <-1,1,1> translate<8.90601,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.044873 scale <-1,1,1> translate<8.42152,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.101767 scale <-1,1,1> translate<8.35179,-51.9197,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.779726 scale <-1,1,1> translate<8.3494,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.973394 scale <-1,1,1> translate<8.29548,-51.9197,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.483082 scale <-1,1,1> translate<8.22814,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.52677 scale <-1,1,1> translate<8.02009,-51.9197,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.740072 scale <-1,1,1> translate<7.72461,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.274194 scale <-1,1,1> translate<7.26517,-51.9197,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.151784 scale <-1,1,1> translate<7.1753,-51.9197,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.426195 scale <-1,1,1> translate<6.94147,-51.9197,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.915277 scale <-1,1,1> translate<6.51487,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.116885 scale <-1,1,1> translate<6.34243,-51.9197,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.511089 scale <-1,1,1> translate<6.1117,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.533879 scale <-1,1,1> translate<6.10318,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.69905 scale <-1,1,1> translate<5.65664,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.448005 scale <-1,1,1> translate<5.37015,-51.9197,40.3194> }
cylinder{<15.4679,-51.9197,40.3194>,<9.46792,-51.9197,40.3194>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.668712 scale <-1,1,1> translate<15.2633,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.732775 scale <-1,1,1> translate<15.0467,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.812784 scale <-1,1,1> translate<14.9817,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.878621 scale <-1,1,1> translate<14.725,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.503077 scale <-1,1,1> translate<14.4568,-51.9197,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.304762 scale <-1,1,1> translate<14.4022,-51.9197,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.261187 scale <-1,1,1> translate<14.1421,-51.9197,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.0147028 scale <-1,1,1> translate<13.9598,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.142871 scale <-1,1,1> translate<13.7895,-51.9197,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.892382 scale <-1,1,1> translate<13.7575,-51.9197,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.808416 scale <-1,1,1> translate<13.7558,-51.9197,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.25724 scale <-1,1,1> translate<13.5338,-51.9197,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.943668 scale <-1,1,1> translate<13.508,-51.9197,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.250606 scale <-1,1,1> translate<13.4066,-51.9197,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.240344 scale <-1,1,1> translate<13.1402,-51.9197,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.775199 scale <-1,1,1> translate<12.8662,-51.9197,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.352247 scale <-1,1,1> translate<12.6702,-51.9197,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.116771 scale <-1,1,1> translate<12.5329,-51.9197,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.928588 scale <-1,1,1> translate<12.3702,-51.9197,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.604465 scale <-1,1,1> translate<12.1092,-51.9197,40.3194> }
cylinder{<-5.10862,-48.9197,40.3194>,<-5.10862,-34.1314,40.3194>,0.6}
object{Elbow translate z*3 rotate -x*90 translate x*3 translate -y*3  translate <-5.10862,-48.9197,40.3194>}
cylinder{<-8.10862,-31.1314,40.3194>,<-14.9366,-31.1314,40.3194>,0.6}
object{Elbow translate x*3 rotate x*90 rotate -z*90  translate <-8.10862,-31.1314,40.3194>}
cylinder{<-17.9366,-34.1314,40.3194>,<-17.9366,-49.4531,40.3194>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.461915 rotate z*90*-1 translate<-17.9366,-34.15,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.0758788 rotate z*90*-1 translate<-17.9366,-34.8769,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.0106787 rotate z*90*-1 translate<-17.9366,-35.4073,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.155847 rotate z*90*-1 translate<-17.9366,-35.8331,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.360664 rotate z*90*-1 translate<-17.9366,-36.2861,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.0255019 rotate z*90*-1 translate<-17.9366,-36.5471,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.379222 rotate z*90*-1 translate<-17.9366,-37.0911,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.511456 rotate z*90*-1 translate<-17.9366,-37.8189,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.139786 rotate z*90*-1 translate<-17.9366,-38.5303,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.490237 rotate z*90*-1 translate<-17.9366,-38.9531,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.285434 rotate z*90*-1 translate<-17.9366,-39.4374,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.0574224 rotate z*90*-1 translate<-17.9366,-39.9044,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.236161 rotate z*90*-1 translate<-17.9366,-40.1553,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.841922 rotate z*90*-1 translate<-17.9366,-40.7728,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.509992 rotate z*90*-1 translate<-17.9366,-40.7894,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.0964087 rotate z*90*-1 translate<-17.9366,-41.4947,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.565782 rotate z*90*-1 translate<-17.9366,-41.9277,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.563023 rotate z*90*-1 translate<-17.9366,-42.6488,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.127291 rotate z*90*-1 translate<-17.9366,-42.8705,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.489492 rotate z*90*-1 translate<-17.9366,-43.0206,40.3194> }
object{Elbow translate x*3 rotate x*90 translate <-17.9366,-34.1314,40.3194>}
cylinder{<-17.9366,-55.4531,40.3194>,<-17.9366,-62.0561,40.3194>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.33723 rotate z*90*-1 translate<-17.9366,-55.6815,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.228923 rotate z*90*-1 translate<-17.9366,-55.7183,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.0319747 rotate z*90*-1 translate<-17.9366,-55.8821,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.943323 rotate z*90*-1 translate<-17.9366,-56.0522,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.75015 rotate z*90*-1 translate<-17.9366,-56.0873,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.204084 rotate z*90*-1 translate<-17.9366,-56.2812,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.728852 rotate z*90*-1 translate<-17.9366,-56.4111,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.883346 rotate z*90*-1 translate<-17.9366,-56.6076,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.419389 rotate z*90*-1 translate<-17.9366,-56.7494,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.0333698 rotate z*90*-1 translate<-17.9366,-56.8261,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.334025 rotate z*90*-1 translate<-17.9366,-56.9973,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.581245 rotate z*90*-1 translate<-17.9366,-57.0403,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.641805 rotate z*90*-1 translate<-17.9366,-57.2112,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.40962 rotate z*90*-1 translate<-17.9366,-57.4066,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.409614 rotate z*90*-1 translate<-17.9366,-57.6898,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.482721 rotate z*90*-1 translate<-17.9366,-57.8751,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.0925705 rotate z*90*-1 translate<-17.9366,-57.9373,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.584209 rotate z*90*-1 translate<-17.9366,-58.1245,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.0624644 rotate z*90*-1 translate<-17.9366,-58.3209,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.960937 rotate z*90*-1 translate<-17.9366,-58.6161,40.3194> }
cylinder{<-17.9366,-49.4531,40.3194>,<-17.9366,-55.4531,40.3194>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.936563 rotate z*90*-1 translate<-17.9366,-49.6383,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.77702 rotate z*90*-1 translate<-17.9366,-49.6741,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.0443085 rotate z*90*-1 translate<-17.9366,-49.9591,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.338312 rotate z*90*-1 translate<-17.9366,-50.093,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.858697 rotate z*90*-1 translate<-17.9366,-50.3666,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.610836 rotate z*90*-1 translate<-17.9366,-50.4345,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.434931 rotate z*90*-1 translate<-17.9366,-50.4757,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.190532 rotate z*90*-1 translate<-17.9366,-50.7053,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.153834 rotate z*90*-1 translate<-17.9366,-50.7552,40.3194> }
object{Deco[2] scale 0.6 rotate x*360*0.648259 rotate z*90*-1 translate<-17.9366,-50.8264,40.3194> }
object{Deco[4] scale 0.6 rotate x*360*0.173968 rotate z*90*-1 translate<-17.9366,-50.9231,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.635921 rotate z*90*-1 translate<-17.9366,-51.1762,40.3194> }
object{Deco[0] scale 0.6 rotate x*360*0.266875 rotate z*90*-1 translate<-17.9366,-51.2526,40.3194> }
object{Deco[6] scale 0.6 rotate x*360*0.359308 rotate z*90*-1 translate<-17.9366,-51.454,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.956965 rotate z*90*-1 translate<-17.9366,-51.4708,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.563283 rotate z*90*-1 translate<-17.9366,-51.7549,40.3194> }
object{Deco[5] scale 0.6 rotate x*360*0.423687 rotate z*90*-1 translate<-17.9366,-51.7788,40.3194> }
object{Deco[1] scale 0.6 rotate x*360*0.0977927 rotate z*90*-1 translate<-17.9366,-51.9913,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.261317 rotate z*90*-1 translate<-17.9366,-52.043,40.3194> }
object{Deco[3] scale 0.6 rotate x*360*0.00135008 rotate z*90*-1 translate<-17.9366,-52.0801,40.3194> }
cylinder{<-17.9366,-65.0561,37.3194>,<-17.9366,-65.0561,24.5212>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.819195 rotate y*90*-1 translate<-17.9366,-65.0561,37.171> }
object{Deco[6] scale 0.6 rotate x*360*0.277145 rotate y*90*-1 translate<-17.9366,-65.0561,36.6136> }
object{Deco[2] scale 0.6 rotate x*360*0.649866 rotate y*90*-1 translate<-17.9366,-65.0561,36.2981> }
object{Deco[0] scale 0.6 rotate x*360*0.00414025 rotate y*90*-1 translate<-17.9366,-65.0561,36.2475> }
object{Deco[0] scale 0.6 rotate x*360*0.982809 rotate y*90*-1 translate<-17.9366,-65.0561,35.9591> }
object{Deco[4] scale 0.6 rotate x*360*0.997177 rotate y*90*-1 translate<-17.9366,-65.0561,35.7848> }
object{Deco[6] scale 0.6 rotate x*360*0.305649 rotate y*90*-1 translate<-17.9366,-65.0561,35.3626> }
object{Deco[4] scale 0.6 rotate x*360*0.366116 rotate y*90*-1 translate<-17.9366,-65.0561,35.1755> }
object{Deco[4] scale 0.6 rotate x*360*0.297544 rotate y*90*-1 translate<-17.9366,-65.0561,35.0325> }
object{Deco[6] scale 0.6 rotate x*360*0.922049 rotate y*90*-1 translate<-17.9366,-65.0561,34.9804> }
object{Deco[6] scale 0.6 rotate x*360*0.844421 rotate y*90*-1 translate<-17.9366,-65.0561,34.494> }
object{Deco[4] scale 0.6 rotate x*360*0.0183673 rotate y*90*-1 translate<-17.9366,-65.0561,34.4625> }
object{Deco[5] scale 0.6 rotate x*360*0.162078 rotate y*90*-1 translate<-17.9366,-65.0561,34.2034> }
object{Deco[3] scale 0.6 rotate x*360*0.885125 rotate y*90*-1 translate<-17.9366,-65.0561,33.9745> }
object{Deco[2] scale 0.6 rotate x*360*0.0668249 rotate y*90*-1 translate<-17.9366,-65.0561,33.918> }
object{Deco[0] scale 0.6 rotate x*360*0.904098 rotate y*90*-1 translate<-17.9366,-65.0561,33.5882> }
object{Deco[3] scale 0.6 rotate x*360*0.977276 rotate y*90*-1 translate<-17.9366,-65.0561,33.4897> }
object{Deco[0] scale 0.6 rotate x*360*0.421336 rotate y*90*-1 translate<-17.9366,-65.0561,32.9708> }
object{Deco[4] scale 0.6 rotate x*360*0.438927 rotate y*90*-1 translate<-17.9366,-65.0561,32.3665> }
object{Deco[6] scale 0.6 rotate x*360*0.101222 rotate y*90*-1 translate<-17.9366,-65.0561,31.9274> }
object{Elbow translate z*3 rotate z*90 rotate -x*90 translate <-17.9366,-65.0561,37.3194>}
cylinder{<-17.9366,-62.0561,21.5212>,<-17.9366,-51.962,21.5212>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.600654 rotate z*90*1 translate<-17.9366,-61.7447,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.346261 rotate z*90*1 translate<-17.9366,-61.719,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.54556 rotate z*90*1 translate<-17.9366,-61.2756,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.572268 rotate z*90*1 translate<-17.9366,-61.239,21.5212> }
object{Deco[2] scale 0.6 rotate x*360*0.344089 rotate z*90*1 translate<-17.9366,-61.1667,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.55041 rotate z*90*1 translate<-17.9366,-60.73,21.5212> }
object{Deco[0] scale 0.6 rotate x*360*0.561628 rotate z*90*1 translate<-17.9366,-60.6226,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.897238 rotate z*90*1 translate<-17.9366,-60.4007,21.5212> }
object{Deco[2] scale 0.6 rotate x*360*0.686432 rotate z*90*1 translate<-17.9366,-60.3105,21.5212> }
object{Deco[3] scale 0.6 rotate x*360*0.40088 rotate z*90*1 translate<-17.9366,-60.2559,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.417589 rotate z*90*1 translate<-17.9366,-59.9667,21.5212> }
object{Deco[2] scale 0.6 rotate x*360*0.722172 rotate z*90*1 translate<-17.9366,-59.7562,21.5212> }
object{Deco[3] scale 0.6 rotate x*360*0.563891 rotate z*90*1 translate<-17.9366,-59.667,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.661959 rotate z*90*1 translate<-17.9366,-59.3393,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.250522 rotate z*90*1 translate<-17.9366,-59.0371,21.5212> }
object{Deco[2] scale 0.6 rotate x*360*0.376538 rotate z*90*1 translate<-17.9366,-59.016,21.5212> }
object{Deco[4] scale 0.6 rotate x*360*0.494725 rotate z*90*1 translate<-17.9366,-58.9385,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.861669 rotate z*90*1 translate<-17.9366,-58.5393,21.5212> }
object{Deco[3] scale 0.6 rotate x*360*0.302412 rotate z*90*1 translate<-17.9366,-58.2805,21.5212> }
object{Deco[4] scale 0.6 rotate x*360*0.0343797 rotate z*90*1 translate<-17.9366,-57.8015,21.5212> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*3  translate <-17.9366,-62.0561,21.5212>}
cylinder{<-20.9366,-48.962,21.5212>,<-24,-48.962,21.5212>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.558329 scale <-1,1,1> translate<-21.0194,-48.962,21.5212> }
object{Deco[0] scale 0.6 rotate x*360*0.0767428 scale <-1,1,1> translate<-21.1482,-48.962,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.553253 scale <-1,1,1> translate<-21.1538,-48.962,21.5212> }
object{Deco[4] scale 0.6 rotate x*360*0.612582 scale <-1,1,1> translate<-21.299,-48.962,21.5212> }
object{Deco[4] scale 0.6 rotate x*360*0.059841 scale <-1,1,1> translate<-21.4092,-48.962,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.501872 scale <-1,1,1> translate<-21.4622,-48.962,21.5212> }
object{Deco[3] scale 0.6 rotate x*360*0.00525823 scale <-1,1,1> translate<-21.5353,-48.962,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.739973 scale <-1,1,1> translate<-21.5765,-48.962,21.5212> }
object{Deco[4] scale 0.6 rotate x*360*0.313977 scale <-1,1,1> translate<-21.6046,-48.962,21.5212> }
object{Deco[0] scale 0.6 rotate x*360*0.294749 scale <-1,1,1> translate<-21.6733,-48.962,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.00714876 scale <-1,1,1> translate<-21.7722,-48.962,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.711829 scale <-1,1,1> translate<-21.8813,-48.962,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.389584 scale <-1,1,1> translate<-21.9275,-48.962,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.969266 scale <-1,1,1> translate<-22.0591,-48.962,21.5212> }
object{Deco[4] scale 0.6 rotate x*360*0.280011 scale <-1,1,1> translate<-22.1872,-48.962,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.343445 scale <-1,1,1> translate<-22.2107,-48.962,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.737396 scale <-1,1,1> translate<-22.3554,-48.962,21.5212> }
object{Deco[0] scale 0.6 rotate x*360*0.838117 scale <-1,1,1> translate<-22.3793,-48.962,21.5212> }
object{Deco[2] scale 0.6 rotate x*360*0.522186 scale <-1,1,1> translate<-22.4383,-48.962,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.901289 scale <-1,1,1> translate<-22.5781,-48.962,21.5212> }
object{Elbow translate x*3 rotate x*90 rotate -z*90  translate <-20.9366,-48.962,21.5212>}
cylinder{<-27,-45.962,21.5212>,<-27,-34.292,21.5212>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.0202659 rotate z*90*1 translate<-27,-45.852,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.624731 rotate z*90*1 translate<-27,-45.8214,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.780054 rotate z*90*1 translate<-27,-45.6403,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.853675 rotate z*90*1 translate<-27,-45.2071,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.991672 rotate z*90*1 translate<-27,-44.7931,21.5212> }
object{Deco[4] scale 0.6 rotate x*360*0.903629 rotate z*90*1 translate<-27,-44.7859,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.503206 rotate z*90*1 translate<-27,-44.673,21.5212> }
object{Deco[3] scale 0.6 rotate x*360*0.262803 rotate z*90*1 translate<-27,-44.607,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.704666 rotate z*90*1 translate<-27,-44.5099,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.287361 rotate z*90*1 translate<-27,-44.1308,21.5212> }
object{Deco[3] scale 0.6 rotate x*360*0.996012 rotate z*90*1 translate<-27,-43.7896,21.5212> }
object{Deco[3] scale 0.6 rotate x*360*0.810094 rotate z*90*1 translate<-27,-43.3421,21.5212> }
object{Deco[3] scale 0.6 rotate x*360*0.135749 rotate z*90*1 translate<-27,-42.9214,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.494594 rotate z*90*1 translate<-27,-42.5508,21.5212> }
object{Deco[3] scale 0.6 rotate x*360*0.519536 rotate z*90*1 translate<-27,-42.3582,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.415517 rotate z*90*1 translate<-27,-42.2165,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.685301 rotate z*90*1 translate<-27,-42.1593,21.5212> }
object{Deco[1] scale 0.6 rotate x*360*0.885567 rotate z*90*1 translate<-27,-41.9532,21.5212> }
object{Deco[6] scale 0.6 rotate x*360*0.877526 rotate z*90*1 translate<-27,-41.9238,21.5212> }
object{Deco[5] scale 0.6 rotate x*360*0.472677 rotate z*90*1 translate<-27,-41.6962,21.5212> }
object{Elbow translate z*3 rotate -x*90 translate x*3 translate -y*3  translate <-27,-45.962,21.5212>}
cylinder{<-27,-31.292,24.5212>,<-27,-31.292,37.5>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.835108 rotate y*90*1 translate<-27,-31.292,24.6084> }
object{Deco[4] scale 0.6 rotate x*360*0.640218 rotate y*90*1 translate<-27,-31.292,24.6201> }
object{Deco[4] scale 0.6 rotate x*360*0.31025 rotate y*90*1 translate<-27,-31.292,24.9083> }
object{Deco[5] scale 0.6 rotate x*360*0.0736309 rotate y*90*1 translate<-27,-31.292,25.1244> }
object{Deco[6] scale 0.6 rotate x*360*0.801247 rotate y*90*1 translate<-27,-31.292,25.6107> }
object{Deco[2] scale 0.6 rotate x*360*0.610528 rotate y*90*1 translate<-27,-31.292,26.1076> }
object{Deco[2] scale 0.6 rotate x*360*0.423158 rotate y*90*1 translate<-27,-31.292,26.3836> }
object{Deco[3] scale 0.6 rotate x*360*0.0410869 rotate y*90*1 translate<-27,-31.292,26.8809> }
object{Deco[5] scale 0.6 rotate x*360*0.435674 rotate y*90*1 translate<-27,-31.292,27.4514> }
object{Deco[1] scale 0.6 rotate x*360*0.197062 rotate y*90*1 translate<-27,-31.292,28.0379> }
object{Deco[2] scale 0.6 rotate x*360*0.581764 rotate y*90*1 translate<-27,-31.292,28.3027> }
object{Deco[5] scale 0.6 rotate x*360*0.978383 rotate y*90*1 translate<-27,-31.292,28.7014> }
object{Deco[6] scale 0.6 rotate x*360*0.733776 rotate y*90*1 translate<-27,-31.292,28.8951> }
object{Deco[3] scale 0.6 rotate x*360*0.73914 rotate y*90*1 translate<-27,-31.292,29.3049> }
object{Deco[2] scale 0.6 rotate x*360*0.0692684 rotate y*90*1 translate<-27,-31.292,29.4956> }
object{Deco[4] scale 0.6 rotate x*360*0.401254 rotate y*90*1 translate<-27,-31.292,29.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.191263 rotate y*90*1 translate<-27,-31.292,29.8244> }
object{Deco[0] scale 0.6 rotate x*360*0.618199 rotate y*90*1 translate<-27,-31.292,30.3249> }
object{Deco[4] scale 0.6 rotate x*360*0.151524 rotate y*90*1 translate<-27,-31.292,30.4194> }
object{Deco[5] scale 0.6 rotate x*360*0.460601 rotate y*90*1 translate<-27,-31.292,30.7229> }
object{Elbow translate z*3 rotate -z*90 translate -z*3 translate -y*3  translate <-27,-31.292,24.5212>}
cylinder{<-27,-34.292,40.5>,<-27,-51.9291,40.5>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.263056 rotate z*90*-1 translate<-27,-34.4774,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.00539572 rotate z*90*-1 translate<-27,-34.5936,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.735597 rotate z*90*-1 translate<-27,-35.1343,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.111888 rotate z*90*-1 translate<-27,-35.2264,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.81735 rotate z*90*-1 translate<-27,-35.3642,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.693866 rotate z*90*-1 translate<-27,-35.8954,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.890425 rotate z*90*-1 translate<-27,-36.287,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.829952 rotate z*90*-1 translate<-27,-36.8235,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.728818 rotate z*90*-1 translate<-27,-37.6527,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.474755 rotate z*90*-1 translate<-27,-38.3915,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.0455522 rotate z*90*-1 translate<-27,-38.9441,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.344359 rotate z*90*-1 translate<-27,-39.7795,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.608994 rotate z*90*-1 translate<-27,-40.5614,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.251039 rotate z*90*-1 translate<-27,-41.3418,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.994371 rotate z*90*-1 translate<-27,-41.9444,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.72425 rotate z*90*-1 translate<-27,-42.388,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.978921 rotate z*90*-1 translate<-27,-42.6417,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.459026 rotate z*90*-1 translate<-27,-43.1139,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.883046 rotate z*90*-1 translate<-27,-43.6805,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.0323316 rotate z*90*-1 translate<-27,-44.0009,40.5> }
object{Elbow rotate y*90 rotate -z*90 translate -z*3  translate <-27,-34.292,40.5>}
cylinder{<-24,-54.9291,40.5>,<-13.1855,-54.9291,40.5>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.516035 scale <1,1,1> translate<-23.6153,-54.9291,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.766695 scale <1,1,1> translate<-23.1864,-54.9291,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.597213 scale <1,1,1> translate<-22.996,-54.9291,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.377597 scale <1,1,1> translate<-22.7545,-54.9291,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.936866 scale <1,1,1> translate<-22.5297,-54.9291,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.0510736 scale <1,1,1> translate<-22.2498,-54.9291,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.584548 scale <1,1,1> translate<-22.2422,-54.9291,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.515518 scale <1,1,1> translate<-22.017,-54.9291,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.0570754 scale <1,1,1> translate<-21.7625,-54.9291,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.225351 scale <1,1,1> translate<-21.4353,-54.9291,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.719167 scale <1,1,1> translate<-21.3853,-54.9291,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.230388 scale <1,1,1> translate<-21.2029,-54.9291,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.994974 scale <1,1,1> translate<-21.124,-54.9291,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.584291 scale <1,1,1> translate<-20.6342,-54.9291,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.32028 scale <1,1,1> translate<-20.45,-54.9291,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.597879 scale <1,1,1> translate<-20.3665,-54.9291,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.437557 scale <1,1,1> translate<-20.1467,-54.9291,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.697196 scale <1,1,1> translate<-19.9442,-54.9291,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.679986 scale <1,1,1> translate<-19.5938,-54.9291,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.295625 scale <1,1,1> translate<-19.0903,-54.9291,40.5> }
object{Elbow rotate -x*90 translate y*3  translate <-24,-54.9291,40.5>}
cylinder{<-10.1855,-54.9291,37.5>,<-10.1855,-54.9291,22.0565>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.0589155 rotate y*90*-1 translate<-10.1855,-54.9291,37.0598> }
object{Deco[6] scale 0.6 rotate x*360*0.554642 rotate y*90*-1 translate<-10.1855,-54.9291,36.3269> }
object{Deco[5] scale 0.6 rotate x*360*0.881392 rotate y*90*-1 translate<-10.1855,-54.9291,35.9805> }
object{Deco[0] scale 0.6 rotate x*360*0.934108 rotate y*90*-1 translate<-10.1855,-54.9291,35.8548> }
object{Deco[4] scale 0.6 rotate x*360*0.42791 rotate y*90*-1 translate<-10.1855,-54.9291,35.7041> }
object{Deco[3] scale 0.6 rotate x*360*0.0357974 rotate y*90*-1 translate<-10.1855,-54.9291,35.2899> }
object{Deco[5] scale 0.6 rotate x*360*0.688939 rotate y*90*-1 translate<-10.1855,-54.9291,34.7589> }
object{Deco[5] scale 0.6 rotate x*360*0.128553 rotate y*90*-1 translate<-10.1855,-54.9291,34.2901> }
object{Deco[2] scale 0.6 rotate x*360*0.501852 rotate y*90*-1 translate<-10.1855,-54.9291,33.9946> }
object{Deco[4] scale 0.6 rotate x*360*0.511498 rotate y*90*-1 translate<-10.1855,-54.9291,33.3067> }
object{Deco[2] scale 0.6 rotate x*360*0.452213 rotate y*90*-1 translate<-10.1855,-54.9291,33.0305> }
object{Deco[3] scale 0.6 rotate x*360*0.82391 rotate y*90*-1 translate<-10.1855,-54.9291,32.7698> }
object{Deco[1] scale 0.6 rotate x*360*0.0220809 rotate y*90*-1 translate<-10.1855,-54.9291,32.2415> }
object{Deco[5] scale 0.6 rotate x*360*0.571551 rotate y*90*-1 translate<-10.1855,-54.9291,32.2262> }
object{Deco[2] scale 0.6 rotate x*360*0.794556 rotate y*90*-1 translate<-10.1855,-54.9291,31.7151> }
object{Deco[3] scale 0.6 rotate x*360*0.133222 rotate y*90*-1 translate<-10.1855,-54.9291,31.0599> }
object{Deco[4] scale 0.6 rotate x*360*0.473939 rotate y*90*-1 translate<-10.1855,-54.9291,30.7058> }
object{Deco[5] scale 0.6 rotate x*360*0.442031 rotate y*90*-1 translate<-10.1855,-54.9291,30.3826> }
object{Deco[2] scale 0.6 rotate x*360*0.345189 rotate y*90*-1 translate<-10.1855,-54.9291,30.3564> }
object{Deco[1] scale 0.6 rotate x*360*0.974283 rotate y*90*-1 translate<-10.1855,-54.9291,30.1148> }
object{Elbow translate x*3 rotate y*180 translate <-10.1855,-54.9291,37.5>}
cylinder{<-13.1855,-54.9291,19.0565>,<-24,-54.9291,19.0565>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.316753 scale <-1,1,1> translate<-13.3849,-54.9291,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.262604 scale <-1,1,1> translate<-13.4816,-54.9291,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.694464 scale <-1,1,1> translate<-13.9367,-54.9291,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.85988 scale <-1,1,1> translate<-14.0358,-54.9291,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.267679 scale <-1,1,1> translate<-14.4786,-54.9291,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.539179 scale <-1,1,1> translate<-14.8777,-54.9291,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.787252 scale <-1,1,1> translate<-15.0375,-54.9291,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.0508671 scale <-1,1,1> translate<-15.547,-54.9291,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.477362 scale <-1,1,1> translate<-15.97,-54.9291,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.970457 scale <-1,1,1> translate<-16.4581,-54.9291,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.374066 scale <-1,1,1> translate<-16.4996,-54.9291,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.0780242 scale <-1,1,1> translate<-16.6207,-54.9291,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.0115955 scale <-1,1,1> translate<-17.0334,-54.9291,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.85897 scale <-1,1,1> translate<-17.0958,-54.9291,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.954051 scale <-1,1,1> translate<-17.61,-54.9291,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.230756 scale <-1,1,1> translate<-17.8634,-54.9291,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.690711 scale <-1,1,1> translate<-17.9754,-54.9291,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.56994 scale <-1,1,1> translate<-18.3581,-54.9291,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.410192 scale <-1,1,1> translate<-18.6179,-54.9291,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.403909 scale <-1,1,1> translate<-19.0456,-54.9291,19.0565> }
object{Elbow scale <-1,1,1> translate z*3  translate <-13.1855,-54.9291,19.0565>}
cylinder{<-27,-51.9291,19.0565>,<-27,-42.145,19.0565>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.704914 rotate z*90*1 translate<-27,-51.7172,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.165852 rotate z*90*1 translate<-27,-51.3424,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.316957 rotate z*90*1 translate<-27,-51.042,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.339434 rotate z*90*1 translate<-27,-50.9772,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.500838 rotate z*90*1 translate<-27,-50.7625,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.123416 rotate z*90*1 translate<-27,-50.5482,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.101437 rotate z*90*1 translate<-27,-50.4972,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.396766 rotate z*90*1 translate<-27,-50.4922,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.572977 rotate z*90*1 translate<-27,-50.4686,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.00516355 rotate z*90*1 translate<-27,-50.3964,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.0318315 rotate z*90*1 translate<-27,-50.164,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.164176 rotate z*90*1 translate<-27,-50.1361,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.887649 rotate z*90*1 translate<-27,-49.678,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.0302851 rotate z*90*1 translate<-27,-49.3296,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.0905277 rotate z*90*1 translate<-27,-49.275,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.0805308 rotate z*90*1 translate<-27,-49.1681,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.435268 rotate z*90*1 translate<-27,-48.9027,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.0127949 rotate z*90*1 translate<-27,-48.7043,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.306133 rotate z*90*1 translate<-27,-48.3823,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.58287 rotate z*90*1 translate<-27,-48.3811,19.0565> }
object{Elbow translate z*3 rotate -x*90 translate x*3 translate -y*3  translate <-27,-51.9291,19.0565>}
cylinder{<-27,-36.145,19.0565>,<-27,-27.7365,19.0565>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.475972 rotate z*90*1 translate<-27,-35.929,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.160606 rotate z*90*1 translate<-27,-35.6512,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.846216 rotate z*90*1 translate<-27,-35.6353,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.155982 rotate z*90*1 translate<-27,-35.5509,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.253219 rotate z*90*1 translate<-27,-35.4636,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.784327 rotate z*90*1 translate<-27,-35.0832,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.696231 rotate z*90*1 translate<-27,-34.8633,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.741384 rotate z*90*1 translate<-27,-34.8006,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.181537 rotate z*90*1 translate<-27,-34.6559,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.597425 rotate z*90*1 translate<-27,-34.6234,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.853402 rotate z*90*1 translate<-27,-34.334,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.573913 rotate z*90*1 translate<-27,-34.2974,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.821628 rotate z*90*1 translate<-27,-33.9998,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.652695 rotate z*90*1 translate<-27,-33.748,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.677535 rotate z*90*1 translate<-27,-33.699,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.202423 rotate z*90*1 translate<-27,-33.5623,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.288838 rotate z*90*1 translate<-27,-33.5098,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.0422454 rotate z*90*1 translate<-27,-33.3364,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.664046 rotate z*90*1 translate<-27,-33.0455,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.0434787 rotate z*90*1 translate<-27,-32.7466,19.0565> }
cylinder{<-27,-42.145,19.0565>,<-27,-36.145,19.0565>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.791309 rotate z*90*1 translate<-27,-42.142,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.0584429 rotate z*90*1 translate<-27,-41.8923,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.197436 rotate z*90*1 translate<-27,-41.8882,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.724433 rotate z*90*1 translate<-27,-41.6659,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.852689 rotate z*90*1 translate<-27,-41.4691,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.582404 rotate z*90*1 translate<-27,-41.3237,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.778409 rotate z*90*1 translate<-27,-41.2436,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.536857 rotate z*90*1 translate<-27,-41.0316,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.610049 rotate z*90*1 translate<-27,-40.8045,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.0281456 rotate z*90*1 translate<-27,-40.6475,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.240234 rotate z*90*1 translate<-27,-40.5547,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.953449 rotate z*90*1 translate<-27,-40.5125,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.827618 rotate z*90*1 translate<-27,-40.3871,19.0565> }
object{Deco[0] scale 0.6 rotate x*360*0.42053 rotate z*90*1 translate<-27,-40.1322,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.720006 rotate z*90*1 translate<-27,-39.8751,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.41154 rotate z*90*1 translate<-27,-39.7121,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.516956 rotate z*90*1 translate<-27,-39.5542,19.0565> }
object{Deco[3] scale 0.6 rotate x*360*0.435119 rotate z*90*1 translate<-27,-39.3699,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.400398 rotate z*90*1 translate<-27,-39.2081,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.816331 rotate z*90*1 translate<-27,-39.0408,19.0565> }
cylinder{<-24,-24.7365,19.0565>,<-7.57274,-24.7365,19.0565>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.695135 scale <1,1,1> translate<-23.762,-24.7365,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.829633 scale <1,1,1> translate<-23.3881,-24.7365,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.947254 scale <1,1,1> translate<-23.1631,-24.7365,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.742159 scale <1,1,1> translate<-22.7978,-24.7365,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.761203 scale <1,1,1> translate<-22.0664,-24.7365,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.89982 scale <1,1,1> translate<-21.9614,-24.7365,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.0300076 scale <1,1,1> translate<-21.5384,-24.7365,19.0565> }
object{Deco[1] scale 0.6 rotate x*360*0.0899077 scale <1,1,1> translate<-21.2579,-24.7365,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.477939 scale <1,1,1> translate<-20.8214,-24.7365,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.184175 scale <1,1,1> translate<-20.3824,-24.7365,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.326905 scale <1,1,1> translate<-20.2889,-24.7365,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.984447 scale <1,1,1> translate<-20.2391,-24.7365,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.563134 scale <1,1,1> translate<-19.7101,-24.7365,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.560803 scale <1,1,1> translate<-19.1946,-24.7365,19.0565> }
object{Deco[6] scale 0.6 rotate x*360*0.173916 scale <1,1,1> translate<-18.5976,-24.7365,19.0565> }
object{Deco[4] scale 0.6 rotate x*360*0.851986 scale <1,1,1> translate<-18.093,-24.7365,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.0336982 scale <1,1,1> translate<-17.3808,-24.7365,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.650215 scale <1,1,1> translate<-17.3106,-24.7365,19.0565> }
object{Deco[5] scale 0.6 rotate x*360*0.217516 scale <1,1,1> translate<-16.8642,-24.7365,19.0565> }
object{Deco[2] scale 0.6 rotate x*360*0.327967 scale <1,1,1> translate<-16.6255,-24.7365,19.0565> }
object{Elbow translate z*3 rotate y*90 rotate x*-90 translate -x*3 translate -y*3  translate <-24,-24.7365,19.0565>}
cylinder{<-4.57274,-24.7365,16.0565>,<-4.57274,-24.7365,-0.122491>,0.6}
object{Elbow translate x*3 rotate y*180 translate <-4.57274,-24.7365,16.0565>}
cylinder{<-7.57274,-24.7365,-3.12249>,<-19.3509,-24.7365,-3.12249>,0.6}
object{Elbow scale <-1,1,1> translate z*3  translate <-7.57274,-24.7365,-3.12249>}
cylinder{<-25.3509,-24.7365,-3.12249>,<-24,-24.7365,-3.12249>,0.6}
cylinder{<-19.3509,-24.7365,-3.12249>,<-25.3509,-24.7365,-3.12249>,0.6}
cylinder{<-27,-24.7365,-0.122491>,<-27,-24.7365,17.6162>,0.6}
object{Elbow translate x*3  translate <-27,-24.7365,-0.122491>}
cylinder{<-27,-27.7365,20.6162>,<-27,-42.8777,20.6162>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.48752 rotate z*90*-1 translate<-27,-28.0273,20.6162> }
object{Deco[3] scale 0.6 rotate x*360*0.246286 rotate z*90*-1 translate<-27,-28.3067,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.758858 rotate z*90*-1 translate<-27,-28.9573,20.6162> }
object{Deco[3] scale 0.6 rotate x*360*0.448924 rotate z*90*-1 translate<-27,-29.1599,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.933864 rotate z*90*-1 translate<-27,-29.3323,20.6162> }
object{Deco[3] scale 0.6 rotate x*360*0.711666 rotate z*90*-1 translate<-27,-29.9342,20.6162> }
object{Deco[1] scale 0.6 rotate x*360*0.227625 rotate z*90*-1 translate<-27,-29.9842,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.919062 rotate z*90*-1 translate<-27,-30.4488,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.572729 rotate z*90*-1 translate<-27,-30.6541,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.465104 rotate z*90*-1 translate<-27,-31.0408,20.6162> }
object{Deco[6] scale 0.6 rotate x*360*0.0841741 rotate z*90*-1 translate<-27,-31.6057,20.6162> }
object{Deco[5] scale 0.6 rotate x*360*0.857564 rotate z*90*-1 translate<-27,-31.8765,20.6162> }
object{Deco[0] scale 0.6 rotate x*360*0.774485 rotate z*90*-1 translate<-27,-32.4894,20.6162> }
object{Deco[5] scale 0.6 rotate x*360*0.974573 rotate z*90*-1 translate<-27,-32.5596,20.6162> }
object{Deco[6] scale 0.6 rotate x*360*0.931741 rotate z*90*-1 translate<-27,-33.038,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.489185 rotate z*90*-1 translate<-27,-33.4422,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.976567 rotate z*90*-1 translate<-27,-33.6642,20.6162> }
object{Deco[0] scale 0.6 rotate x*360*0.0489591 rotate z*90*-1 translate<-27,-34.2353,20.6162> }
object{Deco[1] scale 0.6 rotate x*360*0.556503 rotate z*90*-1 translate<-27,-34.3115,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.501698 rotate z*90*-1 translate<-27,-34.7691,20.6162> }
object{Elbow rotate y*90 rotate -z*90 translate -z*3  translate <-27,-27.7365,20.6162>}
cylinder{<-27,-48.8777,20.6162>,<-27,-60.3674,20.6162>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.760164 rotate z*90*-1 translate<-27,-49.3866,20.6162> }
object{Deco[3] scale 0.6 rotate x*360*0.299314 rotate z*90*-1 translate<-27,-49.5824,20.6162> }
object{Deco[6] scale 0.6 rotate x*360*0.201046 rotate z*90*-1 translate<-27,-49.9387,20.6162> }
object{Deco[5] scale 0.6 rotate x*360*0.854733 rotate z*90*-1 translate<-27,-50.397,20.6162> }
object{Deco[3] scale 0.6 rotate x*360*0.894763 rotate z*90*-1 translate<-27,-50.9433,20.6162> }
object{Deco[0] scale 0.6 rotate x*360*0.233639 rotate z*90*-1 translate<-27,-51.3961,20.6162> }
object{Deco[1] scale 0.6 rotate x*360*0.142171 rotate z*90*-1 translate<-27,-51.8434,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.179106 rotate z*90*-1 translate<-27,-52.3537,20.6162> }
object{Deco[5] scale 0.6 rotate x*360*0.544859 rotate z*90*-1 translate<-27,-52.5028,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.482324 rotate z*90*-1 translate<-27,-52.5661,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.907587 rotate z*90*-1 translate<-27,-52.969,20.6162> }
object{Deco[5] scale 0.6 rotate x*360*0.382304 rotate z*90*-1 translate<-27,-53.0936,20.6162> }
object{Deco[6] scale 0.6 rotate x*360*0.384191 rotate z*90*-1 translate<-27,-53.3783,20.6162> }
object{Deco[5] scale 0.6 rotate x*360*0.157493 rotate z*90*-1 translate<-27,-53.7168,20.6162> }
object{Deco[5] scale 0.6 rotate x*360*0.233809 rotate z*90*-1 translate<-27,-54.0717,20.6162> }
object{Deco[3] scale 0.6 rotate x*360*0.968993 rotate z*90*-1 translate<-27,-54.0904,20.6162> }
object{Deco[0] scale 0.6 rotate x*360*0.152861 rotate z*90*-1 translate<-27,-54.2184,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.750423 rotate z*90*-1 translate<-27,-54.6089,20.6162> }
object{Deco[5] scale 0.6 rotate x*360*0.348432 rotate z*90*-1 translate<-27,-54.9028,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.120141 rotate z*90*-1 translate<-27,-54.9463,20.6162> }
cylinder{<-27,-42.8777,20.6162>,<-27,-48.8777,20.6162>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.632984 rotate z*90*-1 translate<-27,-42.9608,20.6162> }
object{Deco[5] scale 0.6 rotate x*360*0.979995 rotate z*90*-1 translate<-27,-43.0152,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.661103 rotate z*90*-1 translate<-27,-43.1997,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.223598 rotate z*90*-1 translate<-27,-43.2889,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.308903 rotate z*90*-1 translate<-27,-43.5736,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.868682 rotate z*90*-1 translate<-27,-43.5944,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.92814 rotate z*90*-1 translate<-27,-43.6615,20.6162> }
object{Deco[3] scale 0.6 rotate x*360*0.515029 rotate z*90*-1 translate<-27,-43.8881,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.102601 rotate z*90*-1 translate<-27,-44.0365,20.6162> }
object{Deco[1] scale 0.6 rotate x*360*0.374203 rotate z*90*-1 translate<-27,-44.1187,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.406398 rotate z*90*-1 translate<-27,-44.3198,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.782317 rotate z*90*-1 translate<-27,-44.5343,20.6162> }
object{Deco[0] scale 0.6 rotate x*360*0.824937 rotate z*90*-1 translate<-27,-44.8181,20.6162> }
object{Deco[4] scale 0.6 rotate x*360*0.154965 rotate z*90*-1 translate<-27,-45.0687,20.6162> }
object{Deco[1] scale 0.6 rotate x*360*0.762024 rotate z*90*-1 translate<-27,-45.2065,20.6162> }
object{Deco[3] scale 0.6 rotate x*360*0.336572 rotate z*90*-1 translate<-27,-45.2444,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.233322 rotate z*90*-1 translate<-27,-45.4692,20.6162> }
object{Deco[2] scale 0.6 rotate x*360*0.297418 rotate z*90*-1 translate<-27,-45.6744,20.6162> }
object{Deco[0] scale 0.6 rotate x*360*0.749712 rotate z*90*-1 translate<-27,-45.7652,20.6162> }
object{Deco[1] scale 0.6 rotate x*360*0.702867 rotate z*90*-1 translate<-27,-45.8296,20.6162> }
cylinder{<-27,-63.3674,23.6162>,<-27,-63.3674,31.31>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.351633 rotate y*90*1 translate<-27,-63.3674,23.9226> }
object{Deco[6] scale 0.6 rotate x*360*0.326417 rotate y*90*1 translate<-27,-63.3674,23.9532> }
object{Deco[1] scale 0.6 rotate x*360*0.938142 rotate y*90*1 translate<-27,-63.3674,24.2932> }
object{Deco[1] scale 0.6 rotate x*360*0.511758 rotate y*90*1 translate<-27,-63.3674,24.5621> }
object{Deco[3] scale 0.6 rotate x*360*0.876684 rotate y*90*1 translate<-27,-63.3674,24.8687> }
object{Deco[4] scale 0.6 rotate x*360*0.637908 rotate y*90*1 translate<-27,-63.3674,24.9148> }
object{Deco[3] scale 0.6 rotate x*360*0.745923 rotate y*90*1 translate<-27,-63.3674,25.2544> }
object{Deco[6] scale 0.6 rotate x*360*0.270207 rotate y*90*1 translate<-27,-63.3674,25.2908> }
object{Deco[4] scale 0.6 rotate x*360*0.274862 rotate y*90*1 translate<-27,-63.3674,25.6027> }
object{Deco[1] scale 0.6 rotate x*360*0.718363 rotate y*90*1 translate<-27,-63.3674,25.7678> }
object{Deco[5] scale 0.6 rotate x*360*0.608837 rotate y*90*1 translate<-27,-63.3674,25.7793> }
object{Deco[1] scale 0.6 rotate x*360*0.520744 rotate y*90*1 translate<-27,-63.3674,25.9092> }
object{Deco[0] scale 0.6 rotate x*360*0.347696 rotate y*90*1 translate<-27,-63.3674,26.0196> }
object{Deco[4] scale 0.6 rotate x*360*0.405602 rotate y*90*1 translate<-27,-63.3674,26.1487> }
object{Deco[4] scale 0.6 rotate x*360*0.100889 rotate y*90*1 translate<-27,-63.3674,26.1855> }
object{Deco[5] scale 0.6 rotate x*360*0.373905 rotate y*90*1 translate<-27,-63.3674,26.2008> }
object{Deco[2] scale 0.6 rotate x*360*0.613807 rotate y*90*1 translate<-27,-63.3674,26.4247> }
object{Deco[2] scale 0.6 rotate x*360*0.900946 rotate y*90*1 translate<-27,-63.3674,26.4628> }
object{Deco[5] scale 0.6 rotate x*360*0.618312 rotate y*90*1 translate<-27,-63.3674,26.4927> }
object{Deco[6] scale 0.6 rotate x*360*0.489301 rotate y*90*1 translate<-27,-63.3674,26.6856> }
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*3  translate <-27,-63.3674,23.6162>}
cylinder{<-27,-66.3674,34.31>,<-27,-77,34.31>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.447269 rotate z*90*-1 translate<-27,-66.4993,34.31> }
object{Deco[4] scale 0.6 rotate x*360*0.499147 rotate z*90*-1 translate<-27,-66.7455,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.173171 rotate z*90*-1 translate<-27,-67.0361,34.31> }
object{Deco[5] scale 0.6 rotate x*360*0.31216 rotate z*90*-1 translate<-27,-67.1717,34.31> }
object{Deco[1] scale 0.6 rotate x*360*0.839478 rotate z*90*-1 translate<-27,-67.5789,34.31> }
object{Deco[4] scale 0.6 rotate x*360*0.584557 rotate z*90*-1 translate<-27,-67.6541,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.891515 rotate z*90*-1 translate<-27,-68.0471,34.31> }
object{Deco[1] scale 0.6 rotate x*360*0.36164 rotate z*90*-1 translate<-27,-68.4377,34.31> }
object{Deco[4] scale 0.6 rotate x*360*0.165953 rotate z*90*-1 translate<-27,-68.8033,34.31> }
object{Deco[5] scale 0.6 rotate x*360*0.78944 rotate z*90*-1 translate<-27,-69.2156,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.172946 rotate z*90*-1 translate<-27,-69.4097,34.31> }
object{Deco[2] scale 0.6 rotate x*360*0.611662 rotate z*90*-1 translate<-27,-69.7632,34.31> }
object{Deco[1] scale 0.6 rotate x*360*0.55387 rotate z*90*-1 translate<-27,-70.0555,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.0777627 rotate z*90*-1 translate<-27,-70.13,34.31> }
object{Deco[5] scale 0.6 rotate x*360*0.944782 rotate z*90*-1 translate<-27,-70.1672,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.85703 rotate z*90*-1 translate<-27,-70.6696,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.230582 rotate z*90*-1 translate<-27,-70.8689,34.31> }
object{Deco[1] scale 0.6 rotate x*360*0.820113 rotate z*90*-1 translate<-27,-70.927,34.31> }
object{Deco[6] scale 0.6 rotate x*360*0.781303 rotate z*90*-1 translate<-27,-71.0891,34.31> }
object{Deco[0] scale 0.6 rotate x*360*0.511355 rotate z*90*-1 translate<-27,-71.5521,34.31> }
object{Elbow rotate y*90 rotate -z*90 translate -z*3  translate <-27,-66.3674,34.31>}
cylinder{<-24,-80,34.31>,<-8.75708,-80,34.31>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.917529 scale <1,1,1> translate<-23.8311,-80,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.653008 scale <1,1,1> translate<-23.5433,-80,34.31> }
object{Deco[4] scale 0.6 rotate x*360*0.742446 scale <1,1,1> translate<-23.2221,-80,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.961939 scale <1,1,1> translate<-22.8919,-80,34.31> }
object{Deco[0] scale 0.6 rotate x*360*0.140127 scale <1,1,1> translate<-22.8576,-80,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.803611 scale <1,1,1> translate<-22.2486,-80,34.31> }
object{Deco[6] scale 0.6 rotate x*360*0.662301 scale <1,1,1> translate<-21.8163,-80,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.915575 scale <1,1,1> translate<-21.5618,-80,34.31> }
object{Deco[1] scale 0.6 rotate x*360*0.182896 scale <1,1,1> translate<-21.2438,-80,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.294751 scale <1,1,1> translate<-20.8705,-80,34.31> }
object{Deco[5] scale 0.6 rotate x*360*0.607413 scale <1,1,1> translate<-20.1873,-80,34.31> }
object{Deco[2] scale 0.6 rotate x*360*0.896991 scale <1,1,1> translate<-19.5975,-80,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.769633 scale <1,1,1> translate<-19.3115,-80,34.31> }
object{Deco[2] scale 0.6 rotate x*360*0.58765 scale <1,1,1> translate<-18.6186,-80,34.31> }
object{Deco[6] scale 0.6 rotate x*360*0.589511 scale <1,1,1> translate<-18.5813,-80,34.31> }
object{Deco[6] scale 0.6 rotate x*360*0.406737 scale <1,1,1> translate<-18.0043,-80,34.31> }
object{Deco[2] scale 0.6 rotate x*360*0.0709884 scale <1,1,1> translate<-17.8107,-80,34.31> }
object{Deco[3] scale 0.6 rotate x*360*0.22886 scale <1,1,1> translate<-17.2598,-80,34.31> }
object{Deco[1] scale 0.6 rotate x*360*0.0749043 scale <1,1,1> translate<-16.8279,-80,34.31> }
object{Deco[0] scale 0.6 rotate x*360*0.610074 scale <1,1,1> translate<-16.184,-80,34.31> }
object{Elbow rotate -x*90 translate y*3  translate <-24,-80,34.31>}
cylinder{<-5.75708,-80,31.31>,<-5.75708,-80,16.6185>,0.6}
object{Elbow translate x*3 rotate y*180 translate <-5.75708,-80,31.31>}
cylinder{<-8.75708,-80,13.6185>,<-19.8606,-80,13.6185>,0.6}
object{Elbow scale <-1,1,1> translate z*3  translate <-8.75708,-80,13.6185>}
cylinder{<-25.8606,-80,13.6185>,<-24,-80,13.6185>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.583662 scale <-1,1,1> translate<-25.88,-80,13.6185> }
object{Deco[2] scale 0.6 rotate x*360*0.955438 scale <-1,1,1> translate<-25.9109,-80,13.6185> }
object{Deco[1] scale 0.6 rotate x*360*0.784627 scale <-1,1,1> translate<-25.9169,-80,13.6185> }
object{Deco[0] scale 0.6 rotate x*360*0.827156 scale <-1,1,1> translate<-25.9926,-80,13.6185> }
object{Deco[3] scale 0.6 rotate x*360*0.66868 scale <-1,1,1> translate<-26.0652,-80,13.6185> }
object{Deco[3] scale 0.6 rotate x*360*0.184511 scale <-1,1,1> translate<-26.1324,-80,13.6185> }
object{Deco[0] scale 0.6 rotate x*360*0.931254 scale <-1,1,1> translate<-26.1906,-80,13.6185> }
object{Deco[1] scale 0.6 rotate x*360*0.525009 scale <-1,1,1> translate<-26.233,-80,13.6185> }
object{Deco[3] scale 0.6 rotate x*360*0.29025 scale <-1,1,1> translate<-26.3077,-80,13.6185> }
object{Deco[1] scale 0.6 rotate x*360*0.187022 scale <-1,1,1> translate<-26.3842,-80,13.6185> }
object{Deco[1] scale 0.6 rotate x*360*0.0142424 scale <-1,1,1> translate<-26.4273,-80,13.6185> }
object{Deco[6] scale 0.6 rotate x*360*0.375583 scale <-1,1,1> translate<-26.4472,-80,13.6185> }
object{Deco[5] scale 0.6 rotate x*360*0.851769 scale <-1,1,1> translate<-26.4914,-80,13.6185> }
object{Deco[5] scale 0.6 rotate x*360*0.403393 scale <-1,1,1> translate<-26.5314,-80,13.6185> }
object{Deco[0] scale 0.6 rotate x*360*0.387689 scale <-1,1,1> translate<-26.5908,-80,13.6185> }
object{Deco[2] scale 0.6 rotate x*360*0.94797 scale <-1,1,1> translate<-26.6575,-80,13.6185> }
object{Deco[6] scale 0.6 rotate x*360*0.412201 scale <-1,1,1> translate<-26.6611,-80,13.6185> }
object{Deco[0] scale 0.6 rotate x*360*0.728363 scale <-1,1,1> translate<-26.6896,-80,13.6185> }
object{Deco[2] scale 0.6 rotate x*360*0.236705 scale <-1,1,1> translate<-26.7634,-80,13.6185> }
object{Deco[1] scale 0.6 rotate x*360*0.490224 scale <-1,1,1> translate<-26.8237,-80,13.6185> }
cylinder{<-19.8606,-80,13.6185>,<-25.8606,-80,13.6185>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.840925 scale <-1,1,1> translate<-20.0029,-80,13.6185> }
object{Deco[4] scale 0.6 rotate x*360*0.118718 scale <-1,1,1> translate<-20.2011,-80,13.6185> }
object{Deco[4] scale 0.6 rotate x*360*0.599936 scale <-1,1,1> translate<-20.3989,-80,13.6185> }
object{Deco[5] scale 0.6 rotate x*360*0.137178 scale <-1,1,1> translate<-20.615,-80,13.6185> }
object{Deco[2] scale 0.6 rotate x*360*0.930584 scale <-1,1,1> translate<-20.753,-80,13.6185> }
object{Deco[1] scale 0.6 rotate x*360*0.358246 scale <-1,1,1> translate<-20.9305,-80,13.6185> }
object{Deco[4] scale 0.6 rotate x*360*0.826652 scale <-1,1,1> translate<-21.1531,-80,13.6185> }
object{Deco[3] scale 0.6 rotate x*360*0.0958171 scale <-1,1,1> translate<-21.1982,-80,13.6185> }
object{Deco[0] scale 0.6 rotate x*360*0.733577 scale <-1,1,1> translate<-21.1986,-80,13.6185> }
object{Deco[2] scale 0.6 rotate x*360*0.683036 scale <-1,1,1> translate<-21.2673,-80,13.6185> }
object{Deco[4] scale 0.6 rotate x*360*0.85904 scale <-1,1,1> translate<-21.35,-80,13.6185> }
object{Deco[1] scale 0.6 rotate x*360*0.136298 scale <-1,1,1> translate<-21.4639,-80,13.6185> }
object{Deco[6] scale 0.6 rotate x*360*0.637802 scale <-1,1,1> translate<-21.5692,-80,13.6185> }
object{Deco[3] scale 0.6 rotate x*360*0.220267 scale <-1,1,1> translate<-21.8372,-80,13.6185> }
object{Deco[3] scale 0.6 rotate x*360*0.98031 scale <-1,1,1> translate<-21.9397,-80,13.6185> }
object{Deco[0] scale 0.6 rotate x*360*0.966771 scale <-1,1,1> translate<-22.09,-80,13.6185> }
object{Deco[1] scale 0.6 rotate x*360*0.947284 scale <-1,1,1> translate<-22.275,-80,13.6185> }
object{Deco[2] scale 0.6 rotate x*360*0.443585 scale <-1,1,1> translate<-22.4916,-80,13.6185> }
object{Deco[2] scale 0.6 rotate x*360*0.919247 scale <-1,1,1> translate<-22.5651,-80,13.6185> }
object{Deco[1] scale 0.6 rotate x*360*0.320109 scale <-1,1,1> translate<-22.7289,-80,13.6185> }
cylinder{<-27,-80,10.6185>,<-27,-80,-3.0023>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.279697 rotate y*90*-1 translate<-27,-80,10.082> }
object{Deco[3] scale 0.6 rotate x*360*0.460285 rotate y*90*-1 translate<-27,-80,10.018> }
object{Deco[5] scale 0.6 rotate x*360*0.488354 rotate y*90*-1 translate<-27,-80,9.40204> }
object{Deco[6] scale 0.6 rotate x*360*0.271007 rotate y*90*-1 translate<-27,-80,8.9242> }
object{Deco[2] scale 0.6 rotate x*360*0.342221 rotate y*90*-1 translate<-27,-80,8.45213> }
object{Deco[6] scale 0.6 rotate x*360*0.810168 rotate y*90*-1 translate<-27,-80,7.94852> }
object{Deco[0] scale 0.6 rotate x*360*0.556662 rotate y*90*-1 translate<-27,-80,7.5145> }
object{Deco[1] scale 0.6 rotate x*360*0.744258 rotate y*90*-1 translate<-27,-80,7.03547> }
object{Deco[5] scale 0.6 rotate x*360*0.553273 rotate y*90*-1 translate<-27,-80,6.75716> }
object{Deco[0] scale 0.6 rotate x*360*0.368327 rotate y*90*-1 translate<-27,-80,6.49257> }
object{Deco[0] scale 0.6 rotate x*360*0.756308 rotate y*90*-1 translate<-27,-80,5.98499> }
object{Deco[3] scale 0.6 rotate x*360*0.171846 rotate y*90*-1 translate<-27,-80,5.70744> }
object{Deco[2] scale 0.6 rotate x*360*0.273831 rotate y*90*-1 translate<-27,-80,5.41422> }
object{Deco[6] scale 0.6 rotate x*360*0.989173 rotate y*90*-1 translate<-27,-80,4.99571> }
object{Deco[5] scale 0.6 rotate x*360*0.186845 rotate y*90*-1 translate<-27,-80,4.72159> }
object{Deco[6] scale 0.6 rotate x*360*0.00624289 rotate y*90*-1 translate<-27,-80,4.61611> }
object{Deco[2] scale 0.6 rotate x*360*0.432373 rotate y*90*-1 translate<-27,-80,3.99515> }
object{Deco[1] scale 0.6 rotate x*360*0.388235 rotate y*90*-1 translate<-27,-80,3.77647> }
object{Deco[5] scale 0.6 rotate x*360*0.443208 rotate y*90*-1 translate<-27,-80,3.39597> }
object{Deco[3] scale 0.6 rotate x*360*0.793983 rotate y*90*-1 translate<-27,-80,3.3536> }
object{Elbow scale <1,1,-1> translate x*3  translate <-27,-80,10.6185>}
cylinder{<-24,-80,-6.0023>,<-9.82454,-80,-6.0023>,0.6}
object{Elbow translate z*3  translate <-24,-80,-6.0023>}
cylinder{<-6.82454,-80,-3.0023>,<-6.82454,-80,4.36746>,0.6}
object{Elbow rotate y*-90 translate -x*3  translate <-6.82454,-80,-3.0023>}
cylinder{<-6.82454,-80,10.3675>,<-6.82454,-80,27.9092>,0.6}
cylinder{<-6.82454,-80,4.36746>,<-6.82454,-80,10.3675>,0.6}
cylinder{<-6.82454,-80,33.9092>,<-6.82454,-80,37.5>,0.6}
cylinder{<-6.82454,-80,27.9092>,<-6.82454,-80,33.9092>,0.6}
cylinder{<-6.82454,-77,40.5>,<-6.82454,-64.4486,40.5>,0.6}
object{Elbow rotate z*90 scale <1,1,-1> translate <-6.82454,-77,40.5>}
cylinder{<-6.82454,-58.4486,40.5>,<-6.82454,-50.902,40.5>,0.6}
cylinder{<-6.82454,-64.4486,40.5>,<-6.82454,-58.4486,40.5>,0.6}
cylinder{<-6.82454,-47.902,37.5>,<-6.82454,-47.902,23.7216>,0.6}
object{Elbow rotate y*180 rotate z*90 translate -y*3  translate <-6.82454,-47.902,37.5>}
cylinder{<-9.82454,-47.902,20.7216>,<-17.6433,-47.902,20.7216>,0.6}
object{Elbow scale <-1,1,1> translate z*3  translate <-9.82454,-47.902,20.7216>}
cylinder{<-20.6433,-47.902,23.7216>,<-20.6433,-47.902,33.1274>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.343071 rotate y*90*1 translate<-20.6433,-47.902,24.0946> }
object{Deco[0] scale 0.6 rotate x*360*0.523971 rotate y*90*1 translate<-20.6433,-47.902,24.3993> }
object{Deco[0] scale 0.6 rotate x*360*0.611287 rotate y*90*1 translate<-20.6433,-47.902,24.4233> }
object{Deco[5] scale 0.6 rotate x*360*0.176134 rotate y*90*1 translate<-20.6433,-47.902,24.5856> }
object{Deco[0] scale 0.6 rotate x*360*0.851344 rotate y*90*1 translate<-20.6433,-47.902,24.5902> }
object{Deco[3] scale 0.6 rotate x*360*0.358157 rotate y*90*1 translate<-20.6433,-47.902,24.8629> }
object{Deco[6] scale 0.6 rotate x*360*0.773904 rotate y*90*1 translate<-20.6433,-47.902,25.1486> }
object{Deco[3] scale 0.6 rotate x*360*0.535437 rotate y*90*1 translate<-20.6433,-47.902,25.5654> }
object{Deco[0] scale 0.6 rotate x*360*0.192488 rotate y*90*1 translate<-20.6433,-47.902,25.8236> }
object{Deco[1] scale 0.6 rotate x*360*0.797726 rotate y*90*1 translate<-20.6433,-47.902,25.9863> }
object{Deco[1] scale 0.6 rotate x*360*0.429673 rotate y*90*1 translate<-20.6433,-47.902,26.1392> }
object{Deco[5] scale 0.6 rotate x*360*0.401337 rotate y*90*1 translate<-20.6433,-47.902,26.166> }
object{Deco[4] scale 0.6 rotate x*360*0.808451 rotate y*90*1 translate<-20.6433,-47.902,26.2872> }
object{Deco[6] scale 0.6 rotate x*360*0.302456 rotate y*90*1 translate<-20.6433,-47.902,26.375> }
object{Deco[2] scale 0.6 rotate x*360*0.258656 rotate y*90*1 translate<-20.6433,-47.902,26.6332> }
object{Deco[2] scale 0.6 rotate x*360*0.0957433 rotate y*90*1 translate<-20.6433,-47.902,26.681> }
object{Deco[0] scale 0.6 rotate x*360*0.909176 rotate y*90*1 translate<-20.6433,-47.902,26.9578> }
object{Deco[4] scale 0.6 rotate x*360*0.531194 rotate y*90*1 translate<-20.6433,-47.902,27.2982> }
object{Deco[1] scale 0.6 rotate x*360*0.416582 rotate y*90*1 translate<-20.6433,-47.902,27.4745> }
object{Deco[6] scale 0.6 rotate x*360*0.673843 rotate y*90*1 translate<-20.6433,-47.902,27.8243> }
object{Elbow translate x*3  translate <-20.6433,-47.902,23.7216>}
cylinder{<-20.6433,-50.902,36.1274>,<-20.6433,-68.0558,36.1274>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.467911 rotate z*90*-1 translate<-20.6433,-51.3204,36.1274> }
object{Deco[5] scale 0.6 rotate x*360*0.480053 rotate z*90*-1 translate<-20.6433,-51.6126,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.22379 rotate z*90*-1 translate<-20.6433,-51.7313,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.0079854 rotate z*90*-1 translate<-20.6433,-52.4916,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.28892 rotate z*90*-1 translate<-20.6433,-52.8768,36.1274> }
object{Deco[4] scale 0.6 rotate x*360*0.581173 rotate z*90*-1 translate<-20.6433,-53.6532,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.821102 rotate z*90*-1 translate<-20.6433,-53.7339,36.1274> }
object{Deco[5] scale 0.6 rotate x*360*0.0756462 rotate z*90*-1 translate<-20.6433,-54.1766,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.159719 rotate z*90*-1 translate<-20.6433,-54.3903,36.1274> }
object{Deco[0] scale 0.6 rotate x*360*0.102607 rotate z*90*-1 translate<-20.6433,-54.4866,36.1274> }
object{Deco[4] scale 0.6 rotate x*360*0.656752 rotate z*90*-1 translate<-20.6433,-54.7124,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.602839 rotate z*90*-1 translate<-20.6433,-54.8478,36.1274> }
object{Deco[5] scale 0.6 rotate x*360*0.172184 rotate z*90*-1 translate<-20.6433,-55.2813,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.964079 rotate z*90*-1 translate<-20.6433,-55.5877,36.1274> }
object{Deco[5] scale 0.6 rotate x*360*0.40529 rotate z*90*-1 translate<-20.6433,-56.1609,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.0569825 rotate z*90*-1 translate<-20.6433,-56.6391,36.1274> }
object{Deco[6] scale 0.6 rotate x*360*0.769466 rotate z*90*-1 translate<-20.6433,-57.2052,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.508169 rotate z*90*-1 translate<-20.6433,-57.5574,36.1274> }
object{Deco[6] scale 0.6 rotate x*360*0.155925 rotate z*90*-1 translate<-20.6433,-57.7542,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.396983 rotate z*90*-1 translate<-20.6433,-57.9339,36.1274> }
object{Elbow rotate y*90 rotate -z*90 translate -z*3  translate <-20.6433,-50.902,36.1274>}
cylinder{<-17.6433,-71.0558,36.1274>,<-0.394355,-71.0558,36.1274>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.391685 scale <1,1,1> translate<-16.8355,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.378753 scale <1,1,1> translate<-16.4753,-71.0558,36.1274> }
object{Deco[4] scale 0.6 rotate x*360*0.674056 scale <1,1,1> translate<-16.3036,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.980295 scale <1,1,1> translate<-16.1702,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.742275 scale <1,1,1> translate<-15.5183,-71.0558,36.1274> }
object{Deco[4] scale 0.6 rotate x*360*0.953447 scale <1,1,1> translate<-14.965,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.560104 scale <1,1,1> translate<-14.7322,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.208178 scale <1,1,1> translate<-14.0254,-71.0558,36.1274> }
object{Deco[0] scale 0.6 rotate x*360*0.783323 scale <1,1,1> translate<-14.0248,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.307353 scale <1,1,1> translate<-13.6615,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.560128 scale <1,1,1> translate<-13.1264,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.57732 scale <1,1,1> translate<-12.6301,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.970636 scale <1,1,1> translate<-12.4248,-71.0558,36.1274> }
object{Deco[5] scale 0.6 rotate x*360*0.118071 scale <1,1,1> translate<-12.2583,-71.0558,36.1274> }
object{Deco[4] scale 0.6 rotate x*360*0.395182 scale <1,1,1> translate<-11.466,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.410319 scale <1,1,1> translate<-11.2982,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.645019 scale <1,1,1> translate<-11.2141,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.366336 scale <1,1,1> translate<-11.0426,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.897054 scale <1,1,1> translate<-10.3943,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.0785444 scale <1,1,1> translate<-10.2558,-71.0558,36.1274> }
object{Elbow rotate -x*90 translate y*3  translate <-17.6433,-71.0558,36.1274>}
cylinder{<5.60564,-71.0558,36.1274>,<22.7541,-71.0558,36.1274>,0.6}
cylinder{<-0.394355,-71.0558,36.1274>,<5.60564,-71.0558,36.1274>,0.6}
cylinder{<28.7541,-71.0558,36.1274>,<24,-71.0558,36.1274>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.114655 scale <1,1,1> translate<28.803,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.31174 scale <1,1,1> translate<28.9119,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.533803 scale <1,1,1> translate<29.1181,-71.0558,36.1274> }
object{Deco[0] scale 0.6 rotate x*360*0.777333 scale <1,1,1> translate<29.2206,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.350182 scale <1,1,1> translate<29.3927,-71.0558,36.1274> }
object{Deco[6] scale 0.6 rotate x*360*0.928301 scale <1,1,1> translate<29.4488,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.612174 scale <1,1,1> translate<29.4832,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.336533 scale <1,1,1> translate<29.5985,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.578425 scale <1,1,1> translate<29.7282,-71.0558,36.1274> }
object{Deco[0] scale 0.6 rotate x*360*0.732609 scale <1,1,1> translate<29.7513,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.488462 scale <1,1,1> translate<29.8279,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.565125 scale <1,1,1> translate<29.8537,-71.0558,36.1274> }
object{Deco[0] scale 0.6 rotate x*360*0.0778828 scale <1,1,1> translate<30.0153,-71.0558,36.1274> }
object{Deco[4] scale 0.6 rotate x*360*0.0181696 scale <1,1,1> translate<30.0332,-71.0558,36.1274> }
object{Deco[0] scale 0.6 rotate x*360*0.721551 scale <1,1,1> translate<30.1181,-71.0558,36.1274> }
object{Deco[4] scale 0.6 rotate x*360*0.403078 scale <1,1,1> translate<30.1313,-71.0558,36.1274> }
object{Deco[5] scale 0.6 rotate x*360*0.382172 scale <1,1,1> translate<30.249,-71.0558,36.1274> }
object{Deco[0] scale 0.6 rotate x*360*0.740023 scale <1,1,1> translate<30.2808,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.499613 scale <1,1,1> translate<30.2876,-71.0558,36.1274> }
object{Deco[4] scale 0.6 rotate x*360*0.502218 scale <1,1,1> translate<30.5034,-71.0558,36.1274> }
cylinder{<22.7541,-71.0558,36.1274>,<28.7541,-71.0558,36.1274>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.390923 scale <1,1,1> translate<22.8166,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.473053 scale <1,1,1> translate<23.0718,-71.0558,36.1274> }
object{Deco[5] scale 0.6 rotate x*360*0.954627 scale <1,1,1> translate<23.265,-71.0558,36.1274> }
object{Deco[3] scale 0.6 rotate x*360*0.526826 scale <1,1,1> translate<23.4479,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.298069 scale <1,1,1> translate<23.6959,-71.0558,36.1274> }
object{Deco[4] scale 0.6 rotate x*360*0.449408 scale <1,1,1> translate<23.7273,-71.0558,36.1274> }
object{Deco[6] scale 0.6 rotate x*360*0.645839 scale <1,1,1> translate<23.8058,-71.0558,36.1274> }
object{Deco[0] scale 0.6 rotate x*360*0.728651 scale <1,1,1> translate<24.0645,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.353133 scale <1,1,1> translate<24.1382,-71.0558,36.1274> }
object{Deco[6] scale 0.6 rotate x*360*0.128136 scale <1,1,1> translate<24.3202,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.352786 scale <1,1,1> translate<24.4233,-71.0558,36.1274> }
object{Deco[6] scale 0.6 rotate x*360*0.87446 scale <1,1,1> translate<24.6292,-71.0558,36.1274> }
object{Deco[5] scale 0.6 rotate x*360*0.721154 scale <1,1,1> translate<24.8217,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.000179976 scale <1,1,1> translate<24.9677,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.56853 scale <1,1,1> translate<24.9822,-71.0558,36.1274> }
object{Deco[6] scale 0.6 rotate x*360*0.854252 scale <1,1,1> translate<25.1106,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.956869 scale <1,1,1> translate<25.297,-71.0558,36.1274> }
object{Deco[2] scale 0.6 rotate x*360*0.581847 scale <1,1,1> translate<25.402,-71.0558,36.1274> }
object{Deco[1] scale 0.6 rotate x*360*0.333693 scale <1,1,1> translate<25.4983,-71.0558,36.1274> }
object{Deco[0] scale 0.6 rotate x*360*0.548268 scale <1,1,1> translate<25.7049,-71.0558,36.1274> }
cylinder{<27,-71.0558,33.1274>,<27,-71.0558,21.5281>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.182175 rotate y*90*-1 translate<27,-71.0558,32.8827> }
object{Deco[2] scale 0.6 rotate x*360*0.950089 rotate y*90*-1 translate<27,-71.0558,32.8453> }
object{Deco[5] scale 0.6 rotate x*360*0.612062 rotate y*90*-1 translate<27,-71.0558,32.6677> }
object{Deco[5] scale 0.6 rotate x*360*0.916449 rotate y*90*-1 translate<27,-71.0558,32.6139> }
object{Deco[1] scale 0.6 rotate x*360*0.181774 rotate y*90*-1 translate<27,-71.0558,32.575> }
object{Deco[1] scale 0.6 rotate x*360*0.646911 rotate y*90*-1 translate<27,-71.0558,32.566> }
object{Deco[3] scale 0.6 rotate x*360*0.271197 rotate y*90*-1 translate<27,-71.0558,32.1542> }
object{Deco[1] scale 0.6 rotate x*360*0.919054 rotate y*90*-1 translate<27,-71.0558,32.0632> }
object{Deco[5] scale 0.6 rotate x*360*0.810442 rotate y*90*-1 translate<27,-71.0558,31.6487> }
object{Deco[6] scale 0.6 rotate x*360*0.0566308 rotate y*90*-1 translate<27,-71.0558,31.6103> }
object{Deco[0] scale 0.6 rotate x*360*0.0955247 rotate y*90*-1 translate<27,-71.0558,31.5584> }
object{Deco[4] scale 0.6 rotate x*360*0.120277 rotate y*90*-1 translate<27,-71.0558,31.0892> }
object{Deco[2] scale 0.6 rotate x*360*0.515872 rotate y*90*-1 translate<27,-71.0558,30.549> }
object{Deco[2] scale 0.6 rotate x*360*0.749964 rotate y*90*-1 translate<27,-71.0558,30.5232> }
object{Deco[4] scale 0.6 rotate x*360*0.493082 rotate y*90*-1 translate<27,-71.0558,30.3367> }
object{Deco[3] scale 0.6 rotate x*360*0.389795 rotate y*90*-1 translate<27,-71.0558,30.317> }
object{Deco[0] scale 0.6 rotate x*360*0.177449 rotate y*90*-1 translate<27,-71.0558,30.0907> }
object{Deco[6] scale 0.6 rotate x*360*0.165765 rotate y*90*-1 translate<27,-71.0558,29.8936> }
object{Deco[6] scale 0.6 rotate x*360*0.984902 rotate y*90*-1 translate<27,-71.0558,29.7873> }
object{Deco[1] scale 0.6 rotate x*360*0.609982 rotate y*90*-1 translate<27,-71.0558,29.3803> }
object{Elbow translate x*3 rotate y*180 translate <27,-71.0558,33.1274>}
cylinder{<27,-71.0558,15.5281>,<27,-71.0558,7.16059>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.199551 rotate y*90*-1 translate<27,-71.0558,15.3312> }
object{Deco[6] scale 0.6 rotate x*360*0.146335 rotate y*90*-1 translate<27,-71.0558,15.1539> }
object{Deco[2] scale 0.6 rotate x*360*0.626144 rotate y*90*-1 translate<27,-71.0558,14.9364> }
object{Deco[5] scale 0.6 rotate x*360*0.697188 rotate y*90*-1 translate<27,-71.0558,14.6707> }
object{Deco[6] scale 0.6 rotate x*360*0.12223 rotate y*90*-1 translate<27,-71.0558,14.3582> }
object{Deco[0] scale 0.6 rotate x*360*0.269008 rotate y*90*-1 translate<27,-71.0558,14.0457> }
object{Deco[1] scale 0.6 rotate x*360*0.607756 rotate y*90*-1 translate<27,-71.0558,13.9493> }
object{Deco[5] scale 0.6 rotate x*360*0.837304 rotate y*90*-1 translate<27,-71.0558,13.8548> }
object{Deco[2] scale 0.6 rotate x*360*0.675638 rotate y*90*-1 translate<27,-71.0558,13.6188> }
object{Deco[2] scale 0.6 rotate x*360*0.58483 rotate y*90*-1 translate<27,-71.0558,13.2824> }
object{Deco[6] scale 0.6 rotate x*360*0.401088 rotate y*90*-1 translate<27,-71.0558,12.8871> }
object{Deco[3] scale 0.6 rotate x*360*0.220713 rotate y*90*-1 translate<27,-71.0558,12.5105> }
object{Deco[6] scale 0.6 rotate x*360*0.855746 rotate y*90*-1 translate<27,-71.0558,12.3058> }
object{Deco[5] scale 0.6 rotate x*360*0.447415 rotate y*90*-1 translate<27,-71.0558,12.2841> }
object{Deco[4] scale 0.6 rotate x*360*0.719778 rotate y*90*-1 translate<27,-71.0558,12.0305> }
object{Deco[0] scale 0.6 rotate x*360*0.0248893 rotate y*90*-1 translate<27,-71.0558,11.7711> }
object{Deco[4] scale 0.6 rotate x*360*0.382209 rotate y*90*-1 translate<27,-71.0558,11.5859> }
object{Deco[4] scale 0.6 rotate x*360*0.171288 rotate y*90*-1 translate<27,-71.0558,11.3167> }
object{Deco[3] scale 0.6 rotate x*360*0.205892 rotate y*90*-1 translate<27,-71.0558,10.9658> }
object{Deco[5] scale 0.6 rotate x*360*0.712471 rotate y*90*-1 translate<27,-71.0558,10.7857> }
cylinder{<27,-71.0558,21.5281>,<27,-71.0558,15.5281>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.0211794 rotate y*90*-1 translate<27,-71.0558,21.5149> }
object{Deco[1] scale 0.6 rotate x*360*0.0107047 rotate y*90*-1 translate<27,-71.0558,21.4663> }
object{Deco[2] scale 0.6 rotate x*360*0.714162 rotate y*90*-1 translate<27,-71.0558,21.3635> }
object{Deco[0] scale 0.6 rotate x*360*0.328922 rotate y*90*-1 translate<27,-71.0558,21.2836> }
object{Deco[4] scale 0.6 rotate x*360*0.803628 rotate y*90*-1 translate<27,-71.0558,21.1586> }
object{Deco[6] scale 0.6 rotate x*360*0.483202 rotate y*90*-1 translate<27,-71.0558,21.0825> }
object{Deco[6] scale 0.6 rotate x*360*0.468294 rotate y*90*-1 translate<27,-71.0558,20.8623> }
object{Deco[3] scale 0.6 rotate x*360*0.465242 rotate y*90*-1 translate<27,-71.0558,20.625> }
object{Deco[6] scale 0.6 rotate x*360*0.404802 rotate y*90*-1 translate<27,-71.0558,20.4235> }
object{Deco[3] scale 0.6 rotate x*360*0.740991 rotate y*90*-1 translate<27,-71.0558,20.2656> }
object{Deco[2] scale 0.6 rotate x*360*0.47998 rotate y*90*-1 translate<27,-71.0558,20.2414> }
object{Deco[3] scale 0.6 rotate x*360*0.213842 rotate y*90*-1 translate<27,-71.0558,20.1631> }
object{Deco[0] scale 0.6 rotate x*360*0.200439 rotate y*90*-1 translate<27,-71.0558,19.9692> }
object{Deco[4] scale 0.6 rotate x*360*0.943341 rotate y*90*-1 translate<27,-71.0558,19.7786> }
object{Deco[4] scale 0.6 rotate x*360*0.871218 rotate y*90*-1 translate<27,-71.0558,19.7469> }
object{Deco[6] scale 0.6 rotate x*360*0.695697 rotate y*90*-1 translate<27,-71.0558,19.6181> }
object{Deco[2] scale 0.6 rotate x*360*0.76536 rotate y*90*-1 translate<27,-71.0558,19.3989> }
object{Deco[3] scale 0.6 rotate x*360*0.833048 rotate y*90*-1 translate<27,-71.0558,19.2782> }
object{Deco[6] scale 0.6 rotate x*360*0.990591 rotate y*90*-1 translate<27,-71.0558,19.0137> }
object{Deco[4] scale 0.6 rotate x*360*0.986927 rotate y*90*-1 translate<27,-71.0558,18.8698> }
cylinder{<27,-68.0558,4.16059>,<27,-52.587,4.16059>,0.6}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*3  translate <27,-68.0558,4.16059>}
cylinder{<27,-49.587,7.16059>,<27,-49.587,18.4489>,0.6}
object{Elbow translate z*3 rotate -z*90 translate -z*3 translate -y*3  translate <27,-49.587,7.16059>}
cylinder{<27,-49.587,24.4489>,<27,-49.587,37.5>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.464105 rotate y*90*1 translate<27,-49.587,25.0251> }
object{Deco[5] scale 0.6 rotate x*360*0.522908 rotate y*90*1 translate<27,-49.587,25.1216> }
object{Deco[5] scale 0.6 rotate x*360*0.961024 rotate y*90*1 translate<27,-49.587,25.6139> }
object{Deco[5] scale 0.6 rotate x*360*0.325946 rotate y*90*1 translate<27,-49.587,25.6881> }
object{Deco[1] scale 0.6 rotate x*360*0.571225 rotate y*90*1 translate<27,-49.587,26.0233> }
object{Deco[0] scale 0.6 rotate x*360*0.308051 rotate y*90*1 translate<27,-49.587,26.0718> }
object{Deco[0] scale 0.6 rotate x*360*0.480062 rotate y*90*1 translate<27,-49.587,26.5156> }
object{Deco[6] scale 0.6 rotate x*360*0.190599 rotate y*90*1 translate<27,-49.587,26.5272> }
object{Deco[2] scale 0.6 rotate x*360*0.586738 rotate y*90*1 translate<27,-49.587,27.0403> }
object{Deco[2] scale 0.6 rotate x*360*0.509369 rotate y*90*1 translate<27,-49.587,27.0793> }
object{Deco[6] scale 0.6 rotate x*360*0.388845 rotate y*90*1 translate<27,-49.587,27.5556> }
object{Deco[4] scale 0.6 rotate x*360*0.597198 rotate y*90*1 translate<27,-49.587,28.1695> }
object{Deco[1] scale 0.6 rotate x*360*0.979053 rotate y*90*1 translate<27,-49.587,28.4985> }
object{Deco[6] scale 0.6 rotate x*360*0.261957 rotate y*90*1 translate<27,-49.587,29.081> }
object{Deco[2] scale 0.6 rotate x*360*0.313713 rotate y*90*1 translate<27,-49.587,29.5086> }
object{Deco[2] scale 0.6 rotate x*360*0.715652 rotate y*90*1 translate<27,-49.587,29.8908> }
object{Deco[3] scale 0.6 rotate x*360*0.605575 rotate y*90*1 translate<27,-49.587,30.0815> }
object{Deco[2] scale 0.6 rotate x*360*0.764512 rotate y*90*1 translate<27,-49.587,30.355> }
object{Deco[2] scale 0.6 rotate x*360*0.736707 rotate y*90*1 translate<27,-49.587,30.3907> }
object{Deco[0] scale 0.6 rotate x*360*0.919396 rotate y*90*1 translate<27,-49.587,30.9034> }
cylinder{<27,-49.587,18.4489>,<27,-49.587,24.4489>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.295773 rotate y*90*1 translate<27,-49.587,18.497> }
object{Deco[5] scale 0.6 rotate x*360*0.993018 rotate y*90*1 translate<27,-49.587,18.6402> }
object{Deco[1] scale 0.6 rotate x*360*0.0283434 rotate y*90*1 translate<27,-49.587,18.8406> }
object{Deco[2] scale 0.6 rotate x*360*0.47808 rotate y*90*1 translate<27,-49.587,19.0422> }
object{Deco[1] scale 0.6 rotate x*360*0.462573 rotate y*90*1 translate<27,-49.587,19.1543> }
object{Deco[5] scale 0.6 rotate x*360*0.610718 rotate y*90*1 translate<27,-49.587,19.335> }
object{Deco[1] scale 0.6 rotate x*360*0.0477775 rotate y*90*1 translate<27,-49.587,19.3868> }
object{Deco[2] scale 0.6 rotate x*360*0.0793545 rotate y*90*1 translate<27,-49.587,19.6411> }
object{Deco[5] scale 0.6 rotate x*360*0.632686 rotate y*90*1 translate<27,-49.587,19.7641> }
object{Deco[0] scale 0.6 rotate x*360*0.902503 rotate y*90*1 translate<27,-49.587,19.8734> }
object{Deco[4] scale 0.6 rotate x*360*0.325965 rotate y*90*1 translate<27,-49.587,20.1577> }
object{Deco[6] scale 0.6 rotate x*360*0.632891 rotate y*90*1 translate<27,-49.587,20.1777> }
object{Deco[2] scale 0.6 rotate x*360*0.0365182 rotate y*90*1 translate<27,-49.587,20.3391> }
object{Deco[3] scale 0.6 rotate x*360*0.811836 rotate y*90*1 translate<27,-49.587,20.3556> }
object{Deco[5] scale 0.6 rotate x*360*0.0974656 rotate y*90*1 translate<27,-49.587,20.4651> }
object{Deco[6] scale 0.6 rotate x*360*0.0597483 rotate y*90*1 translate<27,-49.587,20.601> }
object{Deco[2] scale 0.6 rotate x*360*0.64827 rotate y*90*1 translate<27,-49.587,20.6977> }
object{Deco[2] scale 0.6 rotate x*360*0.408345 rotate y*90*1 translate<27,-49.587,20.7442> }
object{Deco[4] scale 0.6 rotate x*360*0.696495 rotate y*90*1 translate<27,-49.587,20.9969> }
object{Deco[6] scale 0.6 rotate x*360*0.0202145 rotate y*90*1 translate<27,-49.587,21.109> }
cylinder{<24,-49.587,40.5>,<14.835,-49.587,40.5>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.0290615 scale <-1,1,1> translate<23.9528,-49.587,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.0447662 scale <-1,1,1> translate<23.5422,-49.587,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.620136 scale <-1,1,1> translate<23.3667,-49.587,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.228907 scale <-1,1,1> translate<23.3421,-49.587,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.807542 scale <-1,1,1> translate<22.9567,-49.587,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.430535 scale <-1,1,1> translate<22.7451,-49.587,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.22891 scale <-1,1,1> translate<22.5805,-49.587,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.0463158 scale <-1,1,1> translate<22.1502,-49.587,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.812095 scale <-1,1,1> translate<21.7903,-49.587,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.925505 scale <-1,1,1> translate<21.7866,-49.587,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.680129 scale <-1,1,1> translate<21.6712,-49.587,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.675144 scale <-1,1,1> translate<21.5349,-49.587,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.185175 scale <-1,1,1> translate<21.4208,-49.587,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.742853 scale <-1,1,1> translate<21.2923,-49.587,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.819129 scale <-1,1,1> translate<20.8699,-49.587,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.631848 scale <-1,1,1> translate<20.7876,-49.587,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.769085 scale <-1,1,1> translate<20.4959,-49.587,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.572508 scale <-1,1,1> translate<20.2188,-49.587,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.882899 scale <-1,1,1> translate<19.8486,-49.587,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.264888 scale <-1,1,1> translate<19.8207,-49.587,40.5> }
object{Elbow scale <-1,1,-1> translate -z*3  translate <24,-49.587,40.5>}
cylinder{<11.835,-46.587,40.5>,<11.835,-32.9267,40.5>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.160498 rotate z*90*1 translate<11.835,-46.5243,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.72603 rotate z*90*1 translate<11.835,-45.8873,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.350872 rotate z*90*1 translate<11.835,-45.3926,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.940648 rotate z*90*1 translate<11.835,-44.7935,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.178278 rotate z*90*1 translate<11.835,-44.7213,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.116229 rotate z*90*1 translate<11.835,-44.4685,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.052598 rotate z*90*1 translate<11.835,-44.372,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.133999 rotate z*90*1 translate<11.835,-44.075,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.391983 rotate z*90*1 translate<11.835,-43.5784,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.848244 rotate z*90*1 translate<11.835,-43.0998,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.148316 rotate z*90*1 translate<11.835,-42.535,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.696516 rotate z*90*1 translate<11.835,-42.0175,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.942245 rotate z*90*1 translate<11.835,-41.4543,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.383942 rotate z*90*1 translate<11.835,-41.3829,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.0955107 rotate z*90*1 translate<11.835,-40.8234,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.532398 rotate z*90*1 translate<11.835,-40.5039,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.251607 rotate z*90*1 translate<11.835,-39.9496,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.256575 rotate z*90*1 translate<11.835,-39.3195,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.2182 rotate z*90*1 translate<11.835,-38.9173,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.333079 rotate z*90*1 translate<11.835,-38.6002,40.5> }
object{Elbow translate z*3 rotate -x*90 translate x*3 translate -y*3  translate <11.835,-46.587,40.5>}
cylinder{<8.83502,-29.9267,40.5>,<-8.65537,-29.9267,40.5>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.835117 scale <-1,1,1> translate<8.03658,-29.9267,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.0601785 scale <-1,1,1> translate<7.59672,-29.9267,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.872842 scale <-1,1,1> translate<7.08189,-29.9267,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.79423 scale <-1,1,1> translate<6.41015,-29.9267,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.0367511 scale <-1,1,1> translate<5.65725,-29.9267,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.800448 scale <-1,1,1> translate<5.55517,-29.9267,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.229474 scale <-1,1,1> translate<5.25175,-29.9267,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.777323 scale <-1,1,1> translate<4.95783,-29.9267,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.872885 scale <-1,1,1> translate<4.18051,-29.9267,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.089378 scale <-1,1,1> translate<3.98195,-29.9267,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.667951 scale <-1,1,1> translate<3.27285,-29.9267,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.282111 scale <-1,1,1> translate<3.26083,-29.9267,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.332443 scale <-1,1,1> translate<2.81608,-29.9267,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.0857209 scale <-1,1,1> translate<2.57193,-29.9267,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.558332 scale <-1,1,1> translate<2.18228,-29.9267,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.34231 scale <-1,1,1> translate<1.53421,-29.9267,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.0293085 scale <-1,1,1> translate<1.05964,-29.9267,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.0266038 scale <-1,1,1> translate<0.973505,-29.9267,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.539099 scale <-1,1,1> translate<0.170597,-29.9267,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.710909 scale <-1,1,1> translate<-0.294867,-29.9267,40.5> }
object{Elbow translate x*3 rotate x*90 rotate -z*90  translate <8.83502,-29.9267,40.5>}
cylinder{<-11.6554,-32.9267,40.5>,<-11.6554,-38.9685,40.5>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.229894 rotate z*90*-1 translate<-11.6554,-33.0319,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.539929 rotate z*90*-1 translate<-11.6554,-33.1796,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.386023 rotate z*90*-1 translate<-11.6554,-33.4373,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.217734 rotate z*90*-1 translate<-11.6554,-33.5317,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.179993 rotate z*90*-1 translate<-11.6554,-33.6407,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.450956 rotate z*90*-1 translate<-11.6554,-33.648,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.206943 rotate z*90*-1 translate<-11.6554,-33.7667,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.000361347 rotate z*90*-1 translate<-11.6554,-34.0257,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.509301 rotate z*90*-1 translate<-11.6554,-34.2172,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.242816 rotate z*90*-1 translate<-11.6554,-34.5018,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.560886 rotate z*90*-1 translate<-11.6554,-34.5634,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.969021 rotate z*90*-1 translate<-11.6554,-34.7191,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.0551732 rotate z*90*-1 translate<-11.6554,-34.725,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.741928 rotate z*90*-1 translate<-11.6554,-35.007,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.1702 rotate z*90*-1 translate<-11.6554,-35.1112,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.614785 rotate z*90*-1 translate<-11.6554,-35.3071,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.089032 rotate z*90*-1 translate<-11.6554,-35.5024,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.469691 rotate z*90*-1 translate<-11.6554,-35.7585,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.825247 rotate z*90*-1 translate<-11.6554,-35.8221,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.45723 rotate z*90*-1 translate<-11.6554,-36.0217,40.5> }
object{Elbow translate x*3 rotate x*90 translate <-11.6554,-32.9267,40.5>}
cylinder{<-14.6554,-41.9685,40.5>,<-24,-41.9685,40.5>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.451682 scale <-1,1,1> translate<-14.9446,-41.9685,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.616295 scale <-1,1,1> translate<-15.1928,-41.9685,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.849886 scale <-1,1,1> translate<-15.6168,-41.9685,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.268421 scale <-1,1,1> translate<-15.7095,-41.9685,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.276203 scale <-1,1,1> translate<-15.713,-41.9685,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.208642 scale <-1,1,1> translate<-16.0714,-41.9685,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.0914744 scale <-1,1,1> translate<-16.1453,-41.9685,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.76998 scale <-1,1,1> translate<-16.4893,-41.9685,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.640466 scale <-1,1,1> translate<-16.611,-41.9685,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.0224193 scale <-1,1,1> translate<-16.7579,-41.9685,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.177642 scale <-1,1,1> translate<-17.1745,-41.9685,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.205111 scale <-1,1,1> translate<-17.2483,-41.9685,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.764205 scale <-1,1,1> translate<-17.4335,-41.9685,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.0499556 scale <-1,1,1> translate<-17.6644,-41.9685,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.278623 scale <-1,1,1> translate<-18.0103,-41.9685,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.292576 scale <-1,1,1> translate<-18.308,-41.9685,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.109601 scale <-1,1,1> translate<-18.4031,-41.9685,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.417679 scale <-1,1,1> translate<-18.5038,-41.9685,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.753791 scale <-1,1,1> translate<-18.7641,-41.9685,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.00709606 scale <-1,1,1> translate<-19.1256,-41.9685,40.5> }
object{Elbow translate z*3 rotate y*180 rotate x*90  translate <-14.6554,-41.9685,40.5>}
cylinder{<-27,-41.9685,37.5>,<-27,-41.9685,22.382>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.489852 rotate y*90*-1 translate<-27,-41.9685,36.9724> }
object{Deco[0] scale 0.6 rotate x*360*0.52603 rotate y*90*-1 translate<-27,-41.9685,36.9631> }
object{Deco[0] scale 0.6 rotate x*360*0.33754 rotate y*90*-1 translate<-27,-41.9685,36.3951> }
object{Deco[3] scale 0.6 rotate x*360*0.695607 rotate y*90*-1 translate<-27,-41.9685,36.0875> }
object{Deco[5] scale 0.6 rotate x*360*0.45841 rotate y*90*-1 translate<-27,-41.9685,35.7104> }
object{Deco[0] scale 0.6 rotate x*360*0.597569 rotate y*90*-1 translate<-27,-41.9685,35.5458> }
object{Deco[6] scale 0.6 rotate x*360*0.594205 rotate y*90*-1 translate<-27,-41.9685,35.3045> }
object{Deco[0] scale 0.6 rotate x*360*0.0978146 rotate y*90*-1 translate<-27,-41.9685,34.7936> }
object{Deco[5] scale 0.6 rotate x*360*0.63255 rotate y*90*-1 translate<-27,-41.9685,34.0932> }
object{Deco[1] scale 0.6 rotate x*360*0.310214 rotate y*90*-1 translate<-27,-41.9685,33.8015> }
object{Deco[5] scale 0.6 rotate x*360*0.833397 rotate y*90*-1 translate<-27,-41.9685,33.7182> }
object{Deco[5] scale 0.6 rotate x*360*0.496425 rotate y*90*-1 translate<-27,-41.9685,33.4362> }
object{Deco[4] scale 0.6 rotate x*360*0.229999 rotate y*90*-1 translate<-27,-41.9685,33.1781> }
object{Deco[4] scale 0.6 rotate x*360*0.610613 rotate y*90*-1 translate<-27,-41.9685,32.6056> }
object{Deco[4] scale 0.6 rotate x*360*0.917881 rotate y*90*-1 translate<-27,-41.9685,32.0911> }
object{Deco[3] scale 0.6 rotate x*360*0.227498 rotate y*90*-1 translate<-27,-41.9685,31.7479> }
object{Deco[3] scale 0.6 rotate x*360*0.00491255 rotate y*90*-1 translate<-27,-41.9685,31.3931> }
object{Deco[0] scale 0.6 rotate x*360*0.694651 rotate y*90*-1 translate<-27,-41.9685,31.2979> }
object{Deco[4] scale 0.6 rotate x*360*0.844167 rotate y*90*-1 translate<-27,-41.9685,31.2864> }
object{Deco[5] scale 0.6 rotate x*360*0.33535 rotate y*90*-1 translate<-27,-41.9685,31.2827> }
object{Elbow scale <1,1,-1> translate x*3  translate <-27,-41.9685,37.5>}
cylinder{<-27,-38.9685,19.382>,<-27,-27.377,19.382>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.94501 rotate z*90*1 translate<-27,-38.6255,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.209304 rotate z*90*1 translate<-27,-38.0962,19.382> }
object{Deco[0] scale 0.6 rotate x*360*0.19195 rotate z*90*1 translate<-27,-37.6911,19.382> }
object{Deco[4] scale 0.6 rotate x*360*0.894666 rotate z*90*1 translate<-27,-37.2086,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.305779 rotate z*90*1 translate<-27,-36.9407,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.0295905 rotate z*90*1 translate<-27,-36.6043,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.298401 rotate z*90*1 translate<-27,-36.1852,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.325597 rotate z*90*1 translate<-27,-35.8061,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.0271098 rotate z*90*1 translate<-27,-35.6407,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.207429 rotate z*90*1 translate<-27,-35.2925,19.382> }
object{Deco[2] scale 0.6 rotate x*360*0.698891 rotate z*90*1 translate<-27,-35.0748,19.382> }
object{Deco[2] scale 0.6 rotate x*360*0.815358 rotate z*90*1 translate<-27,-34.528,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.79642 rotate z*90*1 translate<-27,-34.0545,19.382> }
object{Deco[2] scale 0.6 rotate x*360*0.0553576 rotate z*90*1 translate<-27,-34.0167,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.374633 rotate z*90*1 translate<-27,-33.6673,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.135742 rotate z*90*1 translate<-27,-33.4774,19.382> }
object{Deco[0] scale 0.6 rotate x*360*0.18158 rotate z*90*1 translate<-27,-33.011,19.382> }
object{Deco[5] scale 0.6 rotate x*360*0.0454664 rotate z*90*1 translate<-27,-32.5539,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.413763 rotate z*90*1 translate<-27,-32.5211,19.382> }
object{Deco[2] scale 0.6 rotate x*360*0.141217 rotate z*90*1 translate<-27,-32.0632,19.382> }
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*3  translate <-27,-38.9685,19.382>}
cylinder{<-27,-21.377,19.382>,<-27,-4.68027,19.382>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.34348 rotate z*90*1 translate<-27,-21.0299,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.0330546 rotate z*90*1 translate<-27,-20.6482,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.529286 rotate z*90*1 translate<-27,-20.4112,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.667816 rotate z*90*1 translate<-27,-20.1529,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.938281 rotate z*90*1 translate<-27,-19.6374,19.382> }
object{Deco[4] scale 0.6 rotate x*360*0.633447 rotate z*90*1 translate<-27,-19.3023,19.382> }
object{Deco[4] scale 0.6 rotate x*360*0.662948 rotate z*90*1 translate<-27,-18.8497,19.382> }
object{Deco[2] scale 0.6 rotate x*360*0.464586 rotate z*90*1 translate<-27,-18.2406,19.382> }
object{Deco[5] scale 0.6 rotate x*360*0.0687765 rotate z*90*1 translate<-27,-18.1497,19.382> }
object{Deco[0] scale 0.6 rotate x*360*0.838958 rotate z*90*1 translate<-27,-17.5871,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.710806 rotate z*90*1 translate<-27,-16.878,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.751634 rotate z*90*1 translate<-27,-16.1444,19.382> }
object{Deco[0] scale 0.6 rotate x*360*0.783327 rotate z*90*1 translate<-27,-16.0709,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.578583 rotate z*90*1 translate<-27,-15.9637,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.0135047 rotate z*90*1 translate<-27,-15.3474,19.382> }
object{Deco[4] scale 0.6 rotate x*360*0.238635 rotate z*90*1 translate<-27,-14.5752,19.382> }
object{Deco[2] scale 0.6 rotate x*360*0.172394 rotate z*90*1 translate<-27,-14.3249,19.382> }
object{Deco[4] scale 0.6 rotate x*360*0.65611 rotate z*90*1 translate<-27,-14.2205,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.0535512 rotate z*90*1 translate<-27,-13.8436,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.727373 rotate z*90*1 translate<-27,-13.3285,19.382> }
cylinder{<-27,-27.377,19.382>,<-27,-21.377,19.382>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.672802 rotate z*90*1 translate<-27,-27.1191,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.565849 rotate z*90*1 translate<-27,-26.9753,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.885067 rotate z*90*1 translate<-27,-26.7377,19.382> }
object{Deco[5] scale 0.6 rotate x*360*0.00412869 rotate z*90*1 translate<-27,-26.5108,19.382> }
object{Deco[5] scale 0.6 rotate x*360*0.408133 rotate z*90*1 translate<-27,-26.3458,19.382> }
object{Deco[0] scale 0.6 rotate x*360*0.731224 rotate z*90*1 translate<-27,-26.3229,19.382> }
object{Deco[4] scale 0.6 rotate x*360*0.701231 rotate z*90*1 translate<-27,-26.3003,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.100246 rotate z*90*1 translate<-27,-26.2837,19.382> }
object{Deco[2] scale 0.6 rotate x*360*0.0808749 rotate z*90*1 translate<-27,-26.1968,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.119332 rotate z*90*1 translate<-27,-26.0998,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.180042 rotate z*90*1 translate<-27,-25.8546,19.382> }
object{Deco[4] scale 0.6 rotate x*360*0.498976 rotate z*90*1 translate<-27,-25.7232,19.382> }
object{Deco[5] scale 0.6 rotate x*360*0.181957 rotate z*90*1 translate<-27,-25.5056,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.43461 rotate z*90*1 translate<-27,-25.4109,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.499031 rotate z*90*1 translate<-27,-25.1285,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.116739 rotate z*90*1 translate<-27,-24.91,19.382> }
object{Deco[0] scale 0.6 rotate x*360*0.533289 rotate z*90*1 translate<-27,-24.8304,19.382> }
object{Deco[1] scale 0.6 rotate x*360*0.344724 rotate z*90*1 translate<-27,-24.689,19.382> }
object{Deco[6] scale 0.6 rotate x*360*0.159539 rotate z*90*1 translate<-27,-24.4801,19.382> }
object{Deco[3] scale 0.6 rotate x*360*0.136928 rotate z*90*1 translate<-27,-24.2295,19.382> }
cylinder{<-24,-1.68027,19.382>,<-17.1812,-1.68027,19.382>,0.6}
object{Elbow translate z*3 rotate y*90 rotate x*-90 translate -x*3 translate -y*3  translate <-24,-1.68027,19.382>}
cylinder{<-14.1812,1.31973,19.382>,<-14.1812,9.46822,19.382>,0.6}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*3  translate <-14.1812,1.31973,19.382>}
cylinder{<-11.1812,12.4682,19.382>,<0.120626,12.4682,19.382>,0.6}
object{Elbow translate z*3 rotate y*90 rotate x*-90 translate -x*3 translate -y*3  translate <-11.1812,12.4682,19.382>}
cylinder{<3.12063,9.46822,19.382>,<3.12063,-1.84728,19.382>,0.6}
object{Elbow translate x*3 rotate x*90 rotate y*180 translate <3.12063,9.46822,19.382>}
cylinder{<6.12063,-4.84728,19.382>,<20.5798,-4.84728,19.382>,0.6}
object{Elbow rotate -x*90 translate y*3  translate <6.12063,-4.84728,19.382>}
cylinder{<26.5798,-4.84728,19.382>,<24,-4.84728,19.382>,0.6}
cylinder{<20.5798,-4.84728,19.382>,<26.5798,-4.84728,19.382>,0.6}
cylinder{<27,-4.84728,16.382>,<27,-4.84728,-1.13752>,0.6}
object{Elbow translate x*3 rotate y*180 translate <27,-4.84728,16.382>}
cylinder{<24,-4.84728,-4.13752>,<7.29345,-4.84728,-4.13752>,0.6}
object{Elbow scale <-1,1,1> translate z*3  translate <24,-4.84728,-4.13752>}
cylinder{<4.29345,-4.84728,-7.13752>,<4.29345,-4.84728,-13.8144>,0.6}
object{Elbow scale <1,1,-1> translate x*3  translate <4.29345,-4.84728,-7.13752>}
cylinder{<7.29345,-4.84728,-16.8144>,<15.6001,-4.84728,-16.8144>,0.6}
object{Elbow translate z*3  translate <7.29345,-4.84728,-16.8144>}
cylinder{<18.6001,-1.84728,-16.8144>,<18.6001,7.73585,-16.8144>,0.6}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> rotate y*-90 translate -x*3  translate <18.6001,-1.84728,-16.8144>}
cylinder{<15.6001,10.7359,-16.8144>,<5.75049,10.7359,-16.8144>,0.6}
object{Elbow translate x*3 rotate x*90 rotate -z*90  translate <15.6001,10.7359,-16.8144>}
cylinder{<2.75049,10.7359,-13.8144>,<2.75049,10.7359,-6.96056>,0.6}
object{Elbow translate x*3  translate <2.75049,10.7359,-13.8144>}
cylinder{<2.75049,13.7359,-3.96056>,<2.75049,31.469,-3.96056>,0.6}
object{Elbow rotate z*90 scale <1,1,-1> translate <2.75049,13.7359,-3.96056>}
cylinder{<2.75049,37.469,-3.96056>,<2.75049,51.605,-3.96056>,0.6}
cylinder{<2.75049,31.469,-3.96056>,<2.75049,37.469,-3.96056>,0.6}
cylinder{<2.75049,57.605,-3.96056>,<2.75049,69.3975,-3.96056>,0.6}
cylinder{<2.75049,51.605,-3.96056>,<2.75049,57.605,-3.96056>,0.6}
cylinder{<2.75049,75.3975,-3.96056>,<2.75049,77,-3.96056>,0.6}
cylinder{<2.75049,69.3975,-3.96056>,<2.75049,75.3975,-3.96056>,0.6}
cylinder{<2.75049,80,-6.96056>,<2.75049,80,-21.6918>,0.6}
object{Elbow rotate y*180 rotate z*90 translate -y*3  translate <2.75049,80,-6.96056>}
cylinder{<2.75049,80,-27.6918>,<2.75049,80,-37.5>,0.6}
cylinder{<2.75049,80,-21.6918>,<2.75049,80,-27.6918>,0.6}
cylinder{<5.75049,80,-40.5>,<14.9695,80,-40.5>,0.6}
object{Elbow translate z*3  translate <5.75049,80,-40.5>}
cylinder{<20.9695,80,-40.5>,<24,80,-40.5>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.177479 scale <1,1,1> translate<21.058,80,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.123396 scale <1,1,1> translate<21.1744,80,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.823812 scale <1,1,1> translate<21.1822,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.00443644 scale <1,1,1> translate<21.293,80,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.322402 scale <1,1,1> translate<21.2954,80,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.491541 scale <1,1,1> translate<21.3023,80,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.0347121 scale <1,1,1> translate<21.3797,80,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.233393 scale <1,1,1> translate<21.3903,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.462332 scale <1,1,1> translate<21.4414,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.184814 scale <1,1,1> translate<21.4839,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.381232 scale <1,1,1> translate<21.5053,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.789989 scale <1,1,1> translate<21.6148,80,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.71572 scale <1,1,1> translate<21.6345,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.107242 scale <1,1,1> translate<21.658,80,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.183959 scale <1,1,1> translate<21.7437,80,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.0961741 scale <1,1,1> translate<21.7453,80,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.728349 scale <1,1,1> translate<21.7977,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.124919 scale <1,1,1> translate<21.9242,80,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.889594 scale <1,1,1> translate<21.9576,80,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.349962 scale <1,1,1> translate<22.0597,80,-40.5> }
cylinder{<14.9695,80,-40.5>,<20.9695,80,-40.5>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.405327 scale <1,1,1> translate<15.0674,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.536044 scale <1,1,1> translate<15.2724,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.725318 scale <1,1,1> translate<15.4154,80,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.181499 scale <1,1,1> translate<15.4561,80,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.64797 scale <1,1,1> translate<15.6108,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.0575497 scale <1,1,1> translate<15.6715,80,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.209587 scale <1,1,1> translate<15.8929,80,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.521048 scale <1,1,1> translate<16.0388,80,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.11118 scale <1,1,1> translate<16.0596,80,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.781466 scale <1,1,1> translate<16.2444,80,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.660012 scale <1,1,1> translate<16.3608,80,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.757002 scale <1,1,1> translate<16.4591,80,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.24697 scale <1,1,1> translate<16.6695,80,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.804127 scale <1,1,1> translate<16.8768,80,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.0889237 scale <1,1,1> translate<17.1579,80,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.512075 scale <1,1,1> translate<17.2591,80,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.149734 scale <1,1,1> translate<17.4709,80,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.481365 scale <1,1,1> translate<17.6024,80,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.127264 scale <1,1,1> translate<17.6165,80,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.615768 scale <1,1,1> translate<17.7266,80,-40.5> }
cylinder{<27,77,-40.5>,<27,65.2413,-40.5>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.926019 rotate z*90*-1 translate<27,76.4575,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.076368 rotate z*90*-1 translate<27,76.1703,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.898221 rotate z*90*-1 translate<27,75.6846,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.434436 rotate z*90*-1 translate<27,75.6279,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.0930548 rotate z*90*-1 translate<27,75.1214,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.65184 rotate z*90*-1 translate<27,74.9488,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.885741 rotate z*90*-1 translate<27,74.52,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.96795 rotate z*90*-1 translate<27,74.3494,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.763034 rotate z*90*-1 translate<27,74.3202,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.705875 rotate z*90*-1 translate<27,74.1298,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.724249 rotate z*90*-1 translate<27,73.5729,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.248643 rotate z*90*-1 translate<27,73.3511,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.543449 rotate z*90*-1 translate<27,73.0096,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.557391 rotate z*90*-1 translate<27,72.7674,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.482267 rotate z*90*-1 translate<27,72.2708,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.248289 rotate z*90*-1 translate<27,71.7578,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.672731 rotate z*90*-1 translate<27,71.6352,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.886515 rotate z*90*-1 translate<27,71.526,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.870887 rotate z*90*-1 translate<27,71.3247,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.49253 rotate z*90*-1 translate<27,71.2378,-40.5> }
object{Elbow translate x*3 rotate x*90 rotate y*180 translate <27,77,-40.5>}
cylinder{<27,59.2413,-40.5>,<27,44.7325,-40.5>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.403322 rotate z*90*-1 translate<27,58.6005,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.920597 rotate z*90*-1 translate<27,58.3583,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.356628 rotate z*90*-1 translate<27,57.7057,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.0947712 rotate z*90*-1 translate<27,57.2741,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.756958 rotate z*90*-1 translate<27,56.5861,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.798991 rotate z*90*-1 translate<27,56.528,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.724815 rotate z*90*-1 translate<27,56.3162,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.883861 rotate z*90*-1 translate<27,55.635,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.450368 rotate z*90*-1 translate<27,55.4923,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.942349 rotate z*90*-1 translate<27,54.8634,-40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.578993 rotate z*90*-1 translate<27,54.2864,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.803619 rotate z*90*-1 translate<27,53.8262,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.772543 rotate z*90*-1 translate<27,53.3038,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.300938 rotate z*90*-1 translate<27,53.0671,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.622752 rotate z*90*-1 translate<27,52.9314,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.225862 rotate z*90*-1 translate<27,52.4303,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.480845 rotate z*90*-1 translate<27,51.8619,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.999131 rotate z*90*-1 translate<27,51.3743,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.569219 rotate z*90*-1 translate<27,50.9202,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.214608 rotate z*90*-1 translate<27,50.5441,-40.5> }
cylinder{<27,65.2413,-40.5>,<27,59.2413,-40.5>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.769333 rotate z*90*-1 translate<27,65.1816,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.408956 rotate z*90*-1 translate<27,64.9101,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.0473775 rotate z*90*-1 translate<27,64.6336,-40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.238788 rotate z*90*-1 translate<27,64.4902,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.398213 rotate z*90*-1 translate<27,64.3748,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.271493 rotate z*90*-1 translate<27,64.0906,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.771065 rotate z*90*-1 translate<27,63.9978,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.878116 rotate z*90*-1 translate<27,63.8734,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.50006 rotate z*90*-1 translate<27,63.8155,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.819253 rotate z*90*-1 translate<27,63.6246,-40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.611305 rotate z*90*-1 translate<27,63.4286,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.100247 rotate z*90*-1 translate<27,63.2615,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.828405 rotate z*90*-1 translate<27,63.1812,-40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.102647 rotate z*90*-1 translate<27,63.0145,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.462577 rotate z*90*-1 translate<27,62.7444,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.937356 rotate z*90*-1 translate<27,62.4642,-40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.464345 rotate z*90*-1 translate<27,62.3633,-40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.973702 rotate z*90*-1 translate<27,62.2145,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.0436608 rotate z*90*-1 translate<27,62.0019,-40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.64025 rotate z*90*-1 translate<27,61.8692,-40.5> }
cylinder{<27,41.7325,-37.5>,<27,41.7325,-29.3919>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.206189 rotate y*90*1 translate<27,41.7325,-37.4047> }
object{Deco[6] scale 0.6 rotate x*360*0.98699 rotate y*90*1 translate<27,41.7325,-37.2387> }
object{Deco[5] scale 0.6 rotate x*360*0.563497 rotate y*90*1 translate<27,41.7325,-37.2295> }
object{Deco[0] scale 0.6 rotate x*360*0.021706 rotate y*90*1 translate<27,41.7325,-36.9831> }
object{Deco[1] scale 0.6 rotate x*360*0.30849 rotate y*90*1 translate<27,41.7325,-36.8125> }
object{Deco[6] scale 0.6 rotate x*360*0.120798 rotate y*90*1 translate<27,41.7325,-36.7072> }
object{Deco[4] scale 0.6 rotate x*360*0.993846 rotate y*90*1 translate<27,41.7325,-36.6632> }
object{Deco[3] scale 0.6 rotate x*360*0.0286495 rotate y*90*1 translate<27,41.7325,-36.3226> }
object{Deco[0] scale 0.6 rotate x*360*0.859008 rotate y*90*1 translate<27,41.7325,-36.1614> }
object{Deco[2] scale 0.6 rotate x*360*0.398708 rotate y*90*1 translate<27,41.7325,-36.0533> }
object{Deco[1] scale 0.6 rotate x*360*0.378494 rotate y*90*1 translate<27,41.7325,-36.0471> }
object{Deco[1] scale 0.6 rotate x*360*0.87666 rotate y*90*1 translate<27,41.7325,-35.8922> }
object{Deco[5] scale 0.6 rotate x*360*0.869111 rotate y*90*1 translate<27,41.7325,-35.7616> }
object{Deco[2] scale 0.6 rotate x*360*0.647978 rotate y*90*1 translate<27,41.7325,-35.6262> }
object{Deco[4] scale 0.6 rotate x*360*0.733849 rotate y*90*1 translate<27,41.7325,-35.484> }
object{Deco[1] scale 0.6 rotate x*360*0.626722 rotate y*90*1 translate<27,41.7325,-35.4274> }
object{Deco[0] scale 0.6 rotate x*360*0.70633 rotate y*90*1 translate<27,41.7325,-35.3711> }
object{Deco[5] scale 0.6 rotate x*360*0.635319 rotate y*90*1 translate<27,41.7325,-35.2465> }
object{Deco[2] scale 0.6 rotate x*360*0.347424 rotate y*90*1 translate<27,41.7325,-35.2169> }
object{Deco[5] scale 0.6 rotate x*360*0.0432238 rotate y*90*1 translate<27,41.7325,-35.0406> }
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*3  translate <27,41.7325,-37.5>}
cylinder{<27,44.7325,-26.3919>,<27,56.1345,-26.3919>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.0412739 rotate z*90*1 translate<27,44.9211,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.47737 rotate z*90*1 translate<27,45.1699,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.233691 rotate z*90*1 translate<27,45.5581,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.0159528 rotate z*90*1 translate<27,45.9714,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.0299006 rotate z*90*1 translate<27,45.9731,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.0385039 rotate z*90*1 translate<27,46.0284,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.654323 rotate z*90*1 translate<27,46.1036,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.548264 rotate z*90*1 translate<27,46.1045,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.58376 rotate z*90*1 translate<27,46.3794,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.41285 rotate z*90*1 translate<27,46.6443,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.787736 rotate z*90*1 translate<27,46.9165,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.420658 rotate z*90*1 translate<27,47.3442,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.0337212 rotate z*90*1 translate<27,47.4001,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.0844663 rotate z*90*1 translate<27,47.7238,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.203188 rotate z*90*1 translate<27,48.259,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.920885 rotate z*90*1 translate<27,48.7281,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.358345 rotate z*90*1 translate<27,49.0197,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.333709 rotate z*90*1 translate<27,49.2828,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.757433 rotate z*90*1 translate<27,49.6889,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.886439 rotate z*90*1 translate<27,50.11,-26.3919> }
object{Elbow rotate z*90 scale <1,1,-1> translate <27,44.7325,-26.3919>}
cylinder{<27,62.1345,-26.3919>,<27,73.3832,-26.3919>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.640487 rotate z*90*1 translate<27,62.6439,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.906204 rotate z*90*1 translate<27,62.7654,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.233493 rotate z*90*1 translate<27,63.2022,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.999926 rotate z*90*1 translate<27,63.3556,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.816686 rotate z*90*1 translate<27,63.7331,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.274257 rotate z*90*1 translate<27,63.8319,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.523849 rotate z*90*1 translate<27,63.907,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.847832 rotate z*90*1 translate<27,64.2165,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.566726 rotate z*90*1 translate<27,64.4461,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.34442 rotate z*90*1 translate<27,64.7584,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.283238 rotate z*90*1 translate<27,65.0756,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.828916 rotate z*90*1 translate<27,65.5652,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.284886 rotate z*90*1 translate<27,66.0291,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.969666 rotate z*90*1 translate<27,66.0773,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.556513 rotate z*90*1 translate<27,66.0923,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.340333 rotate z*90*1 translate<27,66.3789,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.975812 rotate z*90*1 translate<27,66.8199,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.962991 rotate z*90*1 translate<27,67.1893,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.0608186 rotate z*90*1 translate<27,67.2116,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.452917 rotate z*90*1 translate<27,67.7017,-26.3919> }
cylinder{<27,56.1345,-26.3919>,<27,62.1345,-26.3919>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.133493 rotate z*90*1 translate<27,56.186,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.517157 rotate z*90*1 translate<27,56.3572,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.318952 rotate z*90*1 translate<27,56.4818,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.645861 rotate z*90*1 translate<27,56.6239,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.195413 rotate z*90*1 translate<27,56.8516,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.680093 rotate z*90*1 translate<27,57.0027,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.281981 rotate z*90*1 translate<27,57.1645,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.104877 rotate z*90*1 translate<27,57.1918,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.212545 rotate z*90*1 translate<27,57.3574,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.464088 rotate z*90*1 translate<27,57.641,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.206751 rotate z*90*1 translate<27,57.9116,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.786949 rotate z*90*1 translate<27,57.9933,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.62577 rotate z*90*1 translate<27,58.0577,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.416894 rotate z*90*1 translate<27,58.2335,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.80389 rotate z*90*1 translate<27,58.451,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.70482 rotate z*90*1 translate<27,58.5577,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.289379 rotate z*90*1 translate<27,58.6741,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.732876 rotate z*90*1 translate<27,58.8598,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.921955 rotate z*90*1 translate<27,58.907,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.134332 rotate z*90*1 translate<27,59.1224,-26.3919> }
cylinder{<27,79.3832,-26.3919>,<27,77,-26.3919>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.337452 rotate z*90*1 translate<27,79.3982,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.730715 rotate z*90*1 translate<27,79.4246,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.721459 rotate z*90*1 translate<27,79.4567,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.488198 rotate z*90*1 translate<27,79.5359,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.978443 rotate z*90*1 translate<27,79.547,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.597426 rotate z*90*1 translate<27,79.6363,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.599002 rotate z*90*1 translate<27,79.6406,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.244089 rotate z*90*1 translate<27,79.7003,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.113571 rotate z*90*1 translate<27,79.7287,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.481375 rotate z*90*1 translate<27,79.731,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.10357 rotate z*90*1 translate<27,79.7477,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.163386 rotate z*90*1 translate<27,79.856,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.119732 rotate z*90*1 translate<27,79.8784,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.739522 rotate z*90*1 translate<27,79.9192,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.848069 rotate z*90*1 translate<27,80.0184,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.579897 rotate z*90*1 translate<27,80.0694,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.0641188 rotate z*90*1 translate<27,80.0926,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.682474 rotate z*90*1 translate<27,80.1799,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.0303854 rotate z*90*1 translate<27,80.2794,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.301125 rotate z*90*1 translate<27,80.3625,-26.3919> }
cylinder{<27,73.3832,-26.3919>,<27,79.3832,-26.3919>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.832699 rotate z*90*1 translate<27,73.5696,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.792565 rotate z*90*1 translate<27,73.7822,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.0311019 rotate z*90*1 translate<27,73.9795,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.87176 rotate z*90*1 translate<27,74.0607,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.732326 rotate z*90*1 translate<27,74.2703,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.0522831 rotate z*90*1 translate<27,74.3806,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.0864113 rotate z*90*1 translate<27,74.5524,-26.3919> }
object{Deco[0] scale 0.6 rotate x*360*0.392833 rotate z*90*1 translate<27,74.7537,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.0821121 rotate z*90*1 translate<27,74.8997,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.336183 rotate z*90*1 translate<27,75.0851,-26.3919> }
object{Deco[5] scale 0.6 rotate x*360*0.67685 rotate z*90*1 translate<27,75.1374,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.474654 rotate z*90*1 translate<27,75.3119,-26.3919> }
object{Deco[1] scale 0.6 rotate x*360*0.559677 rotate z*90*1 translate<27,75.5239,-26.3919> }
object{Deco[2] scale 0.6 rotate x*360*0.069388 rotate z*90*1 translate<27,75.5459,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.522473 rotate z*90*1 translate<27,75.5483,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.15167 rotate z*90*1 translate<27,75.5609,-26.3919> }
object{Deco[6] scale 0.6 rotate x*360*0.31791 rotate z*90*1 translate<27,75.5924,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.605829 rotate z*90*1 translate<27,75.7672,-26.3919> }
object{Deco[4] scale 0.6 rotate x*360*0.325109 rotate z*90*1 translate<27,75.8539,-26.3919> }
object{Deco[3] scale 0.6 rotate x*360*0.837363 rotate z*90*1 translate<27,76.019,-26.3919> }
cylinder{<27,80,-23.3919>,<27,80,-13.9124>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.286857 rotate y*90*1 translate<27,80,-23.3296> }
object{Deco[3] scale 0.6 rotate x*360*0.233859 rotate y*90*1 translate<27,80,-23.3164> }
object{Deco[4] scale 0.6 rotate x*360*0.827696 rotate y*90*1 translate<27,80,-23.0238> }
object{Deco[1] scale 0.6 rotate x*360*0.961675 rotate y*90*1 translate<27,80,-22.7316> }
object{Deco[6] scale 0.6 rotate x*360*0.960712 rotate y*90*1 translate<27,80,-22.6713> }
object{Deco[2] scale 0.6 rotate x*360*0.947404 rotate y*90*1 translate<27,80,-22.5221> }
object{Deco[2] scale 0.6 rotate x*360*0.738728 rotate y*90*1 translate<27,80,-22.2623> }
object{Deco[1] scale 0.6 rotate x*360*0.598628 rotate y*90*1 translate<27,80,-21.9605> }
object{Deco[1] scale 0.6 rotate x*360*0.149216 rotate y*90*1 translate<27,80,-21.6115> }
object{Deco[0] scale 0.6 rotate x*360*0.488838 rotate y*90*1 translate<27,80,-21.5375> }
object{Deco[6] scale 0.6 rotate x*360*0.0958253 rotate y*90*1 translate<27,80,-21.5206> }
object{Deco[5] scale 0.6 rotate x*360*0.926091 rotate y*90*1 translate<27,80,-21.5191> }
object{Deco[3] scale 0.6 rotate x*360*0.818712 rotate y*90*1 translate<27,80,-21.4126> }
object{Deco[4] scale 0.6 rotate x*360*0.377631 rotate y*90*1 translate<27,80,-21.1265> }
object{Deco[3] scale 0.6 rotate x*360*0.182987 rotate y*90*1 translate<27,80,-20.698> }
object{Deco[2] scale 0.6 rotate x*360*0.622678 rotate y*90*1 translate<27,80,-20.3978> }
object{Deco[0] scale 0.6 rotate x*360*0.363233 rotate y*90*1 translate<27,80,-20.2336> }
object{Deco[2] scale 0.6 rotate x*360*0.740924 rotate y*90*1 translate<27,80,-19.8626> }
object{Deco[0] scale 0.6 rotate x*360*0.152245 rotate y*90*1 translate<27,80,-19.6163> }
object{Deco[0] scale 0.6 rotate x*360*0.724948 rotate y*90*1 translate<27,80,-19.3201> }
object{Elbow translate z*3 rotate -z*90 translate -z*3 translate -y*3  translate <27,80,-23.3919>}
cylinder{<27,80,-7.91238>,<27,80,0.0654572>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.603223 rotate y*90*1 translate<27,80,-7.63262> }
object{Deco[3] scale 0.6 rotate x*360*0.845717 rotate y*90*1 translate<27,80,-7.36926> }
object{Deco[5] scale 0.6 rotate x*360*0.443143 rotate y*90*1 translate<27,80,-7.32334> }
object{Deco[4] scale 0.6 rotate x*360*0.100925 rotate y*90*1 translate<27,80,-6.96653> }
object{Deco[5] scale 0.6 rotate x*360*0.826334 rotate y*90*1 translate<27,80,-6.6748> }
object{Deco[0] scale 0.6 rotate x*360*0.283574 rotate y*90*1 translate<27,80,-6.50626> }
object{Deco[1] scale 0.6 rotate x*360*0.645471 rotate y*90*1 translate<27,80,-6.41419> }
object{Deco[4] scale 0.6 rotate x*360*0.401972 rotate y*90*1 translate<27,80,-6.2> }
object{Deco[1] scale 0.6 rotate x*360*0.826812 rotate y*90*1 translate<27,80,-6.17906> }
object{Deco[4] scale 0.6 rotate x*360*0.661461 rotate y*90*1 translate<27,80,-6.00474> }
object{Deco[1] scale 0.6 rotate x*360*0.340683 rotate y*90*1 translate<27,80,-5.9036> }
object{Deco[2] scale 0.6 rotate x*360*0.651799 rotate y*90*1 translate<27,80,-5.53335> }
object{Deco[1] scale 0.6 rotate x*360*0.414542 rotate y*90*1 translate<27,80,-5.5065> }
object{Deco[3] scale 0.6 rotate x*360*0.649912 rotate y*90*1 translate<27,80,-5.40786> }
object{Deco[4] scale 0.6 rotate x*360*0.308624 rotate y*90*1 translate<27,80,-5.27358> }
object{Deco[1] scale 0.6 rotate x*360*0.774462 rotate y*90*1 translate<27,80,-4.94027> }
object{Deco[5] scale 0.6 rotate x*360*0.620592 rotate y*90*1 translate<27,80,-4.79732> }
object{Deco[4] scale 0.6 rotate x*360*0.690615 rotate y*90*1 translate<27,80,-4.53912> }
object{Deco[3] scale 0.6 rotate x*360*0.856135 rotate y*90*1 translate<27,80,-4.47768> }
object{Deco[6] scale 0.6 rotate x*360*0.283069 rotate y*90*1 translate<27,80,-4.18148> }
cylinder{<27,80,-13.9124>,<27,80,-7.91238>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.749516 rotate y*90*1 translate<27,80,-13.8884> }
object{Deco[4] scale 0.6 rotate x*360*0.755505 rotate y*90*1 translate<27,80,-13.6987> }
object{Deco[4] scale 0.6 rotate x*360*0.854223 rotate y*90*1 translate<27,80,-13.5653> }
object{Deco[1] scale 0.6 rotate x*360*0.0374126 rotate y*90*1 translate<27,80,-13.455> }
object{Deco[3] scale 0.6 rotate x*360*0.0615454 rotate y*90*1 translate<27,80,-13.1825> }
object{Deco[5] scale 0.6 rotate x*360*0.747459 rotate y*90*1 translate<27,80,-12.915> }
object{Deco[6] scale 0.6 rotate x*360*0.256681 rotate y*90*1 translate<27,80,-12.6758> }
object{Deco[2] scale 0.6 rotate x*360*0.338511 rotate y*90*1 translate<27,80,-12.4279> }
object{Deco[1] scale 0.6 rotate x*360*0.100286 rotate y*90*1 translate<27,80,-12.207> }
object{Deco[6] scale 0.6 rotate x*360*0.995719 rotate y*90*1 translate<27,80,-12.1754> }
object{Deco[5] scale 0.6 rotate x*360*0.240767 rotate y*90*1 translate<27,80,-12.1403> }
object{Deco[5] scale 0.6 rotate x*360*0.438192 rotate y*90*1 translate<27,80,-12.079> }
object{Deco[2] scale 0.6 rotate x*360*0.931549 rotate y*90*1 translate<27,80,-11.8219> }
object{Deco[3] scale 0.6 rotate x*360*0.549166 rotate y*90*1 translate<27,80,-11.7987> }
object{Deco[4] scale 0.6 rotate x*360*0.360591 rotate y*90*1 translate<27,80,-11.5758> }
object{Deco[4] scale 0.6 rotate x*360*0.791842 rotate y*90*1 translate<27,80,-11.5429> }
object{Deco[3] scale 0.6 rotate x*360*0.808941 rotate y*90*1 translate<27,80,-11.5087> }
object{Deco[2] scale 0.6 rotate x*360*0.22057 rotate y*90*1 translate<27,80,-11.2915> }
object{Deco[3] scale 0.6 rotate x*360*0.353815 rotate y*90*1 translate<27,80,-11.2071> }
object{Deco[6] scale 0.6 rotate x*360*0.632435 rotate y*90*1 translate<27,80,-11.1856> }
cylinder{<24,80,3.06546>,<6.77723,80,3.06546>,0.6}
object{Elbow scale <-1,1,-1> translate -z*3  translate <24,80,3.06546>}
cylinder{<0.777226,80,3.06546>,<-11.219,80,3.06546>,0.6}
cylinder{<6.77723,80,3.06546>,<0.777226,80,3.06546>,0.6}
cylinder{<-17.219,80,3.06546>,<-24,80,3.06546>,0.6}
cylinder{<-11.219,80,3.06546>,<-17.219,80,3.06546>,0.6}
cylinder{<-27,80,6.06546>,<-27,80,21.9145>,0.6}
object{Elbow translate x*3  translate <-27,80,6.06546>}
cylinder{<-24,80,24.9145>,<-8.74382,80,24.9145>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.585741 scale <1,1,1> translate<-23.8098,80,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.510032 scale <1,1,1> translate<-23.7166,80,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.550446 scale <1,1,1> translate<-23.2931,80,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.931866 scale <1,1,1> translate<-22.7111,80,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.720898 scale <1,1,1> translate<-22.0578,80,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.246532 scale <1,1,1> translate<-21.5553,80,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.637492 scale <1,1,1> translate<-20.9653,80,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.155124 scale <1,1,1> translate<-20.3565,80,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.719756 scale <1,1,1> translate<-20.164,80,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.198585 scale <1,1,1> translate<-19.5391,80,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.987943 scale <1,1,1> translate<-18.8352,80,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.856649 scale <1,1,1> translate<-18.7689,80,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.0941599 scale <1,1,1> translate<-18.5571,80,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.675726 scale <1,1,1> translate<-18.1119,80,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.972212 scale <1,1,1> translate<-17.9238,80,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.189525 scale <1,1,1> translate<-17.3177,80,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.365587 scale <1,1,1> translate<-16.8822,80,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.32688 scale <1,1,1> translate<-16.5413,80,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.357216 scale <1,1,1> translate<-15.8182,80,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.439708 scale <1,1,1> translate<-15.5959,80,24.9145> }
object{Elbow scale <1,1,-1> translate -z*3  translate <-24,80,24.9145>}
cylinder{<-2.74382,80,24.9145>,<10.1106,80,24.9145>,0.6}
cylinder{<-8.74382,80,24.9145>,<-2.74382,80,24.9145>,0.6}
cylinder{<13.1106,77,24.9145>,<13.1106,69.9199,24.9145>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.749939 rotate z*90*-1 translate<13.1106,76.7648,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.705256 rotate z*90*-1 translate<13.1106,76.4602,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.507804 rotate z*90*-1 translate<13.1106,76.2139,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.716205 rotate z*90*-1 translate<13.1106,76.1966,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.649054 rotate z*90*-1 translate<13.1106,76.1245,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.780887 rotate z*90*-1 translate<13.1106,76.0258,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.647091 rotate z*90*-1 translate<13.1106,75.9257,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.521839 rotate z*90*-1 translate<13.1106,75.6574,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.081681 rotate z*90*-1 translate<13.1106,75.5778,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.717789 rotate z*90*-1 translate<13.1106,75.3052,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.377644 rotate z*90*-1 translate<13.1106,75.0132,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.210707 rotate z*90*-1 translate<13.1106,74.7132,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.33353 rotate z*90*-1 translate<13.1106,74.3818,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.275387 rotate z*90*-1 translate<13.1106,74.1882,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.343253 rotate z*90*-1 translate<13.1106,73.9755,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.434118 rotate z*90*-1 translate<13.1106,73.9498,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.91381 rotate z*90*-1 translate<13.1106,73.8422,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.379643 rotate z*90*-1 translate<13.1106,73.6383,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.696516 rotate z*90*-1 translate<13.1106,73.5773,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.858097 rotate z*90*-1 translate<13.1106,73.5242,24.9145> }
object{Elbow translate x*3 rotate x*90 rotate y*180 translate <13.1106,77,24.9145>}
cylinder{<13.1106,63.9199,24.9145>,<13.1106,54.2223,24.9145>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.842688 rotate z*90*-1 translate<13.1106,63.6475,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.736621 rotate z*90*-1 translate<13.1106,63.3601,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.197191 rotate z*90*-1 translate<13.1106,62.9663,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.836132 rotate z*90*-1 translate<13.1106,62.5238,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.157633 rotate z*90*-1 translate<13.1106,62.3409,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.311482 rotate z*90*-1 translate<13.1106,62.1696,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.227758 rotate z*90*-1 translate<13.1106,61.7912,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.603334 rotate z*90*-1 translate<13.1106,61.3897,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.862358 rotate z*90*-1 translate<13.1106,61.3295,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.995509 rotate z*90*-1 translate<13.1106,61.1256,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.608075 rotate z*90*-1 translate<13.1106,60.7836,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.0720279 rotate z*90*-1 translate<13.1106,60.3811,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.603652 rotate z*90*-1 translate<13.1106,60.3315,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.135364 rotate z*90*-1 translate<13.1106,60.0827,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.781073 rotate z*90*-1 translate<13.1106,59.8292,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.159243 rotate z*90*-1 translate<13.1106,59.6749,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.879517 rotate z*90*-1 translate<13.1106,59.5907,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.569106 rotate z*90*-1 translate<13.1106,59.1683,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.131142 rotate z*90*-1 translate<13.1106,58.7693,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.183349 rotate z*90*-1 translate<13.1106,58.6757,24.9145> }
cylinder{<13.1106,69.9199,24.9145>,<13.1106,63.9199,24.9145>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.513843 rotate z*90*-1 translate<13.1106,69.8317,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.0713238 rotate z*90*-1 translate<13.1106,69.5596,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.603815 rotate z*90*-1 translate<13.1106,69.4088,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.452253 rotate z*90*-1 translate<13.1106,69.3077,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.61252 rotate z*90*-1 translate<13.1106,69.2649,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.135173 rotate z*90*-1 translate<13.1106,69.0868,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.970969 rotate z*90*-1 translate<13.1106,68.9666,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.94632 rotate z*90*-1 translate<13.1106,68.8537,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.141626 rotate z*90*-1 translate<13.1106,68.709,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.169466 rotate z*90*-1 translate<13.1106,68.7019,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.00715741 rotate z*90*-1 translate<13.1106,68.575,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.799147 rotate z*90*-1 translate<13.1106,68.3634,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.518308 rotate z*90*-1 translate<13.1106,68.1977,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.438913 rotate z*90*-1 translate<13.1106,68.0692,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.0926929 rotate z*90*-1 translate<13.1106,67.8371,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.529315 rotate z*90*-1 translate<13.1106,67.8264,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.854984 rotate z*90*-1 translate<13.1106,67.7321,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.325659 rotate z*90*-1 translate<13.1106,67.5344,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.00912362 rotate z*90*-1 translate<13.1106,67.5205,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.22624 rotate z*90*-1 translate<13.1106,67.4418,24.9145> }
cylinder{<13.1106,48.2223,24.9145>,<13.1106,34.8263,24.9145>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.653925 rotate z*90*-1 translate<13.1106,47.7455,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.675053 rotate z*90*-1 translate<13.1106,47.2733,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.834324 rotate z*90*-1 translate<13.1106,46.6719,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.730395 rotate z*90*-1 translate<13.1106,46.5805,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.00498771 rotate z*90*-1 translate<13.1106,46.1035,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.130806 rotate z*90*-1 translate<13.1106,45.6187,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.944224 rotate z*90*-1 translate<13.1106,45.0053,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.441064 rotate z*90*-1 translate<13.1106,44.7495,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.284364 rotate z*90*-1 translate<13.1106,44.1678,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.0749652 rotate z*90*-1 translate<13.1106,43.6424,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.531025 rotate z*90*-1 translate<13.1106,43.335,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.612577 rotate z*90*-1 translate<13.1106,42.8537,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.417785 rotate z*90*-1 translate<13.1106,42.8131,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.0844395 rotate z*90*-1 translate<13.1106,42.7761,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.518736 rotate z*90*-1 translate<13.1106,42.4639,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.271648 rotate z*90*-1 translate<13.1106,42.0643,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.147866 rotate z*90*-1 translate<13.1106,41.6403,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.532679 rotate z*90*-1 translate<13.1106,41.2767,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.844692 rotate z*90*-1 translate<13.1106,40.9378,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.887563 rotate z*90*-1 translate<13.1106,40.3891,24.9145> }
cylinder{<13.1106,54.2223,24.9145>,<13.1106,48.2223,24.9145>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.992662 rotate z*90*-1 translate<13.1106,54.0988,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.630021 rotate z*90*-1 translate<13.1106,53.8777,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.652971 rotate z*90*-1 translate<13.1106,53.6653,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.661056 rotate z*90*-1 translate<13.1106,53.4091,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.334109 rotate z*90*-1 translate<13.1106,53.3825,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.605637 rotate z*90*-1 translate<13.1106,53.3562,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.469264 rotate z*90*-1 translate<13.1106,53.2333,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.650105 rotate z*90*-1 translate<13.1106,53.1401,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.65197 rotate z*90*-1 translate<13.1106,52.8778,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.484204 rotate z*90*-1 translate<13.1106,52.7073,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.497809 rotate z*90*-1 translate<13.1106,52.4322,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.810761 rotate z*90*-1 translate<13.1106,52.4269,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.168916 rotate z*90*-1 translate<13.1106,52.1632,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.160427 rotate z*90*-1 translate<13.1106,52.04,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.431021 rotate z*90*-1 translate<13.1106,52.0379,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.281148 rotate z*90*-1 translate<13.1106,51.9558,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.422367 rotate z*90*-1 translate<13.1106,51.7039,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.724543 rotate z*90*-1 translate<13.1106,51.6813,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.412445 rotate z*90*-1 translate<13.1106,51.58,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.486748 rotate z*90*-1 translate<13.1106,51.3543,24.9145> }
cylinder{<13.1106,28.8263,24.9145>,<13.1106,12.1133,24.9145>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.0679844 rotate z*90*-1 translate<13.1106,28.4055,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.979434 rotate z*90*-1 translate<13.1106,28.213,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.509275 rotate z*90*-1 translate<13.1106,28.1782,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.288687 rotate z*90*-1 translate<13.1106,27.4659,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.885118 rotate z*90*-1 translate<13.1106,27.3421,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.91437 rotate z*90*-1 translate<13.1106,26.992,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.342279 rotate z*90*-1 translate<13.1106,26.5338,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.427325 rotate z*90*-1 translate<13.1106,26.1374,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.782405 rotate z*90*-1 translate<13.1106,25.7654,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.260115 rotate z*90*-1 translate<13.1106,25.7615,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.192975 rotate z*90*-1 translate<13.1106,25.2236,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.369976 rotate z*90*-1 translate<13.1106,24.9454,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.669495 rotate z*90*-1 translate<13.1106,24.4987,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.266037 rotate z*90*-1 translate<13.1106,24.1459,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.484041 rotate z*90*-1 translate<13.1106,23.8197,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.62067 rotate z*90*-1 translate<13.1106,23.2326,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.310118 rotate z*90*-1 translate<13.1106,23.1083,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.951404 rotate z*90*-1 translate<13.1106,22.5447,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.320277 rotate z*90*-1 translate<13.1106,22.2809,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.821779 rotate z*90*-1 translate<13.1106,21.6302,24.9145> }
cylinder{<13.1106,34.8263,24.9145>,<13.1106,28.8263,24.9145>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.643439 rotate z*90*-1 translate<13.1106,34.6681,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.729228 rotate z*90*-1 translate<13.1106,34.6546,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.415905 rotate z*90*-1 translate<13.1106,34.4211,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.88811 rotate z*90*-1 translate<13.1106,34.1965,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.696228 rotate z*90*-1 translate<13.1106,34.158,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.53889 rotate z*90*-1 translate<13.1106,33.9376,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.65176 rotate z*90*-1 translate<13.1106,33.9257,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.782596 rotate z*90*-1 translate<13.1106,33.662,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.976476 rotate z*90*-1 translate<13.1106,33.4025,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.315686 rotate z*90*-1 translate<13.1106,33.1448,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.277993 rotate z*90*-1 translate<13.1106,33.0796,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.386728 rotate z*90*-1 translate<13.1106,33.0573,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.489079 rotate z*90*-1 translate<13.1106,32.8069,24.9145> }
object{Deco[1] scale 0.6 rotate x*360*0.875411 rotate z*90*-1 translate<13.1106,32.5514,24.9145> }
object{Deco[4] scale 0.6 rotate x*360*0.0278948 rotate z*90*-1 translate<13.1106,32.5312,24.9145> }
object{Deco[2] scale 0.6 rotate x*360*0.168818 rotate z*90*-1 translate<13.1106,32.4067,24.9145> }
object{Deco[0] scale 0.6 rotate x*360*0.764221 rotate z*90*-1 translate<13.1106,32.3398,24.9145> }
object{Deco[6] scale 0.6 rotate x*360*0.5421 rotate z*90*-1 translate<13.1106,32.084,24.9145> }
object{Deco[5] scale 0.6 rotate x*360*0.658488 rotate z*90*-1 translate<13.1106,31.9516,24.9145> }
object{Deco[3] scale 0.6 rotate x*360*0.603258 rotate z*90*-1 translate<13.1106,31.7717,24.9145> }
cylinder{<13.1106,6.11326,24.9145>,<13.1106,-6.57016,24.9145>,0.6}
cylinder{<13.1106,12.1133,24.9145>,<13.1106,6.11326,24.9145>,0.6}
cylinder{<13.1106,-12.5702,24.9145>,<13.1106,-21.4136,24.9145>,0.6}
cylinder{<13.1106,-6.57016,24.9145>,<13.1106,-12.5702,24.9145>,0.6}
cylinder{<13.1106,-24.4136,27.9145>,<13.1106,-24.4136,35.0794>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.6835 rotate y*90*1 translate<13.1106,-24.4136,28.2329> }
object{Deco[4] scale 0.6 rotate x*360*0.543869 rotate y*90*1 translate<13.1106,-24.4136,28.4155> }
object{Deco[6] scale 0.6 rotate x*360*0.98345 rotate y*90*1 translate<13.1106,-24.4136,28.5027> }
object{Deco[0] scale 0.6 rotate x*360*0.877366 rotate y*90*1 translate<13.1106,-24.4136,28.5422> }
object{Deco[3] scale 0.6 rotate x*360*0.314336 rotate y*90*1 translate<13.1106,-24.4136,28.6814> }
object{Deco[4] scale 0.6 rotate x*360*0.00447753 rotate y*90*1 translate<13.1106,-24.4136,28.7938> }
object{Deco[0] scale 0.6 rotate x*360*0.61001 rotate y*90*1 translate<13.1106,-24.4136,29.0614> }
object{Deco[3] scale 0.6 rotate x*360*0.10175 rotate y*90*1 translate<13.1106,-24.4136,29.2888> }
object{Deco[3] scale 0.6 rotate x*360*0.874696 rotate y*90*1 translate<13.1106,-24.4136,29.3651> }
object{Deco[1] scale 0.6 rotate x*360*0.0498492 rotate y*90*1 translate<13.1106,-24.4136,29.5795> }
object{Deco[6] scale 0.6 rotate x*360*0.259685 rotate y*90*1 translate<13.1106,-24.4136,29.7193> }
object{Deco[1] scale 0.6 rotate x*360*0.752355 rotate y*90*1 translate<13.1106,-24.4136,30.019> }
object{Deco[4] scale 0.6 rotate x*360*0.204445 rotate y*90*1 translate<13.1106,-24.4136,30.1882> }
object{Deco[4] scale 0.6 rotate x*360*0.750093 rotate y*90*1 translate<13.1106,-24.4136,30.4592> }
object{Deco[3] scale 0.6 rotate x*360*0.802902 rotate y*90*1 translate<13.1106,-24.4136,30.4658> }
object{Deco[6] scale 0.6 rotate x*360*0.590128 rotate y*90*1 translate<13.1106,-24.4136,30.4868> }
object{Deco[1] scale 0.6 rotate x*360*0.818359 rotate y*90*1 translate<13.1106,-24.4136,30.5755> }
object{Deco[1] scale 0.6 rotate x*360*0.401673 rotate y*90*1 translate<13.1106,-24.4136,30.827> }
object{Deco[0] scale 0.6 rotate x*360*0.447267 rotate y*90*1 translate<13.1106,-24.4136,31.0838> }
object{Deco[1] scale 0.6 rotate x*360*0.132181 rotate y*90*1 translate<13.1106,-24.4136,31.3609> }
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*3  translate <13.1106,-24.4136,27.9145>}
cylinder{<16.1106,-24.4136,38.0794>,<24,-24.4136,38.0794>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.424196 scale <1,1,1> translate<16.4245,-24.4136,38.0794> }
object{Deco[3] scale 0.6 rotate x*360*0.398789 scale <1,1,1> translate<16.6004,-24.4136,38.0794> }
object{Deco[4] scale 0.6 rotate x*360*0.236807 scale <1,1,1> translate<16.898,-24.4136,38.0794> }
object{Deco[3] scale 0.6 rotate x*360*0.199802 scale <1,1,1> translate<17.1494,-24.4136,38.0794> }
object{Deco[3] scale 0.6 rotate x*360*0.667052 scale <1,1,1> translate<17.5041,-24.4136,38.0794> }
object{Deco[1] scale 0.6 rotate x*360*0.384512 scale <1,1,1> translate<17.8586,-24.4136,38.0794> }
object{Deco[0] scale 0.6 rotate x*360*0.267706 scale <1,1,1> translate<17.8669,-24.4136,38.0794> }
object{Deco[1] scale 0.6 rotate x*360*0.600318 scale <1,1,1> translate<18.1114,-24.4136,38.0794> }
object{Deco[1] scale 0.6 rotate x*360*0.0325925 scale <1,1,1> translate<18.4569,-24.4136,38.0794> }
object{Deco[4] scale 0.6 rotate x*360*0.186605 scale <1,1,1> translate<18.4918,-24.4136,38.0794> }
object{Deco[4] scale 0.6 rotate x*360*0.434976 scale <1,1,1> translate<18.8206,-24.4136,38.0794> }
object{Deco[6] scale 0.6 rotate x*360*0.646078 scale <1,1,1> translate<18.8274,-24.4136,38.0794> }
object{Deco[2] scale 0.6 rotate x*360*0.888872 scale <1,1,1> translate<18.9997,-24.4136,38.0794> }
object{Deco[6] scale 0.6 rotate x*360*0.793103 scale <1,1,1> translate<19.2886,-24.4136,38.0794> }
object{Deco[1] scale 0.6 rotate x*360*0.0450307 scale <1,1,1> translate<19.396,-24.4136,38.0794> }
object{Deco[1] scale 0.6 rotate x*360*0.191506 scale <1,1,1> translate<19.5121,-24.4136,38.0794> }
object{Deco[3] scale 0.6 rotate x*360*0.166344 scale <1,1,1> translate<19.6422,-24.4136,38.0794> }
object{Deco[0] scale 0.6 rotate x*360*0.0264556 scale <1,1,1> translate<19.9296,-24.4136,38.0794> }
object{Deco[1] scale 0.6 rotate x*360*0.136996 scale <1,1,1> translate<20.2422,-24.4136,38.0794> }
object{Deco[0] scale 0.6 rotate x*360*0.907648 scale <1,1,1> translate<20.4742,-24.4136,38.0794> }
object{Elbow scale <1,1,-1> translate -z*3  translate <16.1106,-24.4136,38.0794>}
cylinder{<27,-24.4136,41.0794>,<27,-24.4136,37.5>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.385465 rotate y*90*1 translate<27,-24.4136,41.1817> }
object{Deco[4] scale 0.6 rotate x*360*0.732995 rotate y*90*1 translate<27,-24.4136,41.2213> }
object{Deco[1] scale 0.6 rotate x*360*0.46386 rotate y*90*1 translate<27,-24.4136,41.3426> }
object{Deco[6] scale 0.6 rotate x*360*0.795184 rotate y*90*1 translate<27,-24.4136,41.3601> }
object{Deco[1] scale 0.6 rotate x*360*0.601376 rotate y*90*1 translate<27,-24.4136,41.4868> }
object{Deco[3] scale 0.6 rotate x*360*0.0388962 rotate y*90*1 translate<27,-24.4136,41.6104> }
object{Deco[2] scale 0.6 rotate x*360*0.940956 rotate y*90*1 translate<27,-24.4136,41.7396> }
object{Deco[0] scale 0.6 rotate x*360*0.536085 rotate y*90*1 translate<27,-24.4136,41.7518> }
object{Deco[3] scale 0.6 rotate x*360*0.141001 rotate y*90*1 translate<27,-24.4136,41.9135> }
object{Deco[1] scale 0.6 rotate x*360*0.997406 rotate y*90*1 translate<27,-24.4136,42.0831> }
object{Deco[2] scale 0.6 rotate x*360*0.676933 rotate y*90*1 translate<27,-24.4136,42.2036> }
object{Deco[5] scale 0.6 rotate x*360*0.688372 rotate y*90*1 translate<27,-24.4136,42.3205> }
object{Deco[2] scale 0.6 rotate x*360*0.764914 rotate y*90*1 translate<27,-24.4136,42.3903> }
object{Deco[1] scale 0.6 rotate x*360*0.299868 rotate y*90*1 translate<27,-24.4136,42.5435> }
object{Deco[6] scale 0.6 rotate x*360*0.663201 rotate y*90*1 translate<27,-24.4136,42.7054> }
object{Deco[1] scale 0.6 rotate x*360*0.354207 rotate y*90*1 translate<27,-24.4136,42.8589> }
object{Deco[2] scale 0.6 rotate x*360*0.689639 rotate y*90*1 translate<27,-24.4136,42.9834> }
object{Deco[1] scale 0.6 rotate x*360*0.0101247 rotate y*90*1 translate<27,-24.4136,43.0231> }
object{Deco[2] scale 0.6 rotate x*360*0.353375 rotate y*90*1 translate<27,-24.4136,43.128> }
object{Deco[6] scale 0.6 rotate x*360*0.232654 rotate y*90*1 translate<27,-24.4136,43.2406> }
object{Elbow rotate y*-90 translate -x*3  translate <27,-24.4136,41.0794>}
cylinder{<27,-21.4136,40.5>,<27,-14.0338,40.5>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.131066 rotate z*90*1 translate<27,-21.2029,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.8524 rotate z*90*1 translate<27,-20.8924,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.632316 rotate z*90*1 translate<27,-20.562,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.780587 rotate z*90*1 translate<27,-20.4006,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.682541 rotate z*90*1 translate<27,-20.3846,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.0809479 rotate z*90*1 translate<27,-20.1564,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.80039 rotate z*90*1 translate<27,-20.0061,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.641058 rotate z*90*1 translate<27,-19.7617,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.382373 rotate z*90*1 translate<27,-19.6751,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.597116 rotate z*90*1 translate<27,-19.3465,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.92005 rotate z*90*1 translate<27,-19.0509,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.76008 rotate z*90*1 translate<27,-18.9374,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.967053 rotate z*90*1 translate<27,-18.9292,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.60529 rotate z*90*1 translate<27,-18.6462,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.429786 rotate z*90*1 translate<27,-18.6242,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.389185 rotate z*90*1 translate<27,-18.3963,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.260554 rotate z*90*1 translate<27,-18.1056,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.973311 rotate z*90*1 translate<27,-18.0723,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.988288 rotate z*90*1 translate<27,-17.9106,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.647732 rotate z*90*1 translate<27,-17.5795,40.5> }
object{Elbow rotate z*90 scale <1,1,-1> translate <27,-21.4136,40.5>}
cylinder{<24,-11.0338,40.5>,<9.33425,-11.0338,40.5>,0.6}
object{Elbow translate x*3 rotate x*90 rotate -z*90  translate <24,-11.0338,40.5>}
cylinder{<6.33425,-8.0338,40.5>,<6.33425,2.66281,40.5>,0.6}
object{Elbow translate z*3 rotate -x*90 translate x*3 translate -y*3  translate <6.33425,-8.0338,40.5>}
cylinder{<9.33425,5.66281,40.5>,<21.8487,5.66281,40.5>,0.6}
object{Elbow translate z*3 rotate y*90 rotate x*-90 translate -x*3 translate -y*3  translate <9.33425,5.66281,40.5>}
cylinder{<27.8487,5.66281,40.5>,<24,5.66281,40.5>,0.6}
cylinder{<21.8487,5.66281,40.5>,<27.8487,5.66281,40.5>,0.6}
cylinder{<27,5.66281,37.5>,<27,5.66281,20.6245>,0.6}
object{Elbow translate x*3 rotate y*180 translate <27,5.66281,37.5>}
cylinder{<27,8.66281,17.6245>,<27,22.5153,17.6245>,0.6}
object{Elbow rotate y*90 rotate -z*90 scale <1,-1,-1> translate z*3  translate <27,8.66281,17.6245>}
cylinder{<27,28.5153,17.6245>,<27,40.1814,17.6245>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.455045 rotate z*90*1 translate<27,29.01,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.65387 rotate z*90*1 translate<27,29.4266,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.35399 rotate z*90*1 translate<27,29.8937,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.843314 rotate z*90*1 translate<27,30.2553,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.602688 rotate z*90*1 translate<27,30.3332,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.802788 rotate z*90*1 translate<27,30.5372,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.15683 rotate z*90*1 translate<27,31.0305,17.6245> }
object{Deco[5] scale 0.6 rotate x*360*0.211818 rotate z*90*1 translate<27,31.5814,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.660969 rotate z*90*1 translate<27,31.6267,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.713375 rotate z*90*1 translate<27,31.7901,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.700345 rotate z*90*1 translate<27,32.1659,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.192157 rotate z*90*1 translate<27,32.4705,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.562067 rotate z*90*1 translate<27,32.6264,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.673723 rotate z*90*1 translate<27,33.1013,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.890043 rotate z*90*1 translate<27,33.3933,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.163967 rotate z*90*1 translate<27,33.6379,17.6245> }
object{Deco[5] scale 0.6 rotate x*360*0.482323 rotate z*90*1 translate<27,33.8686,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.186832 rotate z*90*1 translate<27,34.3979,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.0703277 rotate z*90*1 translate<27,34.6674,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.287013 rotate z*90*1 translate<27,35.0551,17.6245> }
cylinder{<27,22.5153,17.6245>,<27,28.5153,17.6245>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.549329 rotate z*90*1 translate<27,22.5834,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.405972 rotate z*90*1 translate<27,22.7625,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.61098 rotate z*90*1 translate<27,22.8725,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.376486 rotate z*90*1 translate<27,23.0906,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.374217 rotate z*90*1 translate<27,23.2865,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.875717 rotate z*90*1 translate<27,23.3448,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.232907 rotate z*90*1 translate<27,23.347,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.591791 rotate z*90*1 translate<27,23.606,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.0497668 rotate z*90*1 translate<27,23.7195,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.156755 rotate z*90*1 translate<27,23.9334,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.838763 rotate z*90*1 translate<27,24.1537,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.141926 rotate z*90*1 translate<27,24.4063,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.504958 rotate z*90*1 translate<27,24.4534,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.162624 rotate z*90*1 translate<27,24.6712,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.864094 rotate z*90*1 translate<27,24.8336,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.460594 rotate z*90*1 translate<27,24.9537,17.6245> }
object{Deco[5] scale 0.6 rotate x*360*0.356595 rotate z*90*1 translate<27,24.9733,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.286479 rotate z*90*1 translate<27,25.0702,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.414596 rotate z*90*1 translate<27,25.2556,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.554167 rotate z*90*1 translate<27,25.3515,17.6245> }
cylinder{<24,43.1814,17.6245>,<16.8079,43.1814,17.6245>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.0593825 scale <-1,1,1> translate<23.7779,43.1814,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.0919991 scale <-1,1,1> translate<23.5566,43.1814,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.0640859 scale <-1,1,1> translate<23.3151,43.1814,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.652391 scale <-1,1,1> translate<23.1522,43.1814,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.0268496 scale <-1,1,1> translate<23.1112,43.1814,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.335551 scale <-1,1,1> translate<23.1027,43.1814,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.78258 scale <-1,1,1> translate<22.9088,43.1814,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.73297 scale <-1,1,1> translate<22.8651,43.1814,17.6245> }
object{Deco[5] scale 0.6 rotate x*360*0.960961 scale <-1,1,1> translate<22.5602,43.1814,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.00169485 scale <-1,1,1> translate<22.4446,43.1814,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.822316 scale <-1,1,1> translate<22.4332,43.1814,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.651749 scale <-1,1,1> translate<22.143,43.1814,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.129544 scale <-1,1,1> translate<21.9007,43.1814,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.432802 scale <-1,1,1> translate<21.6614,43.1814,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.677855 scale <-1,1,1> translate<21.5638,43.1814,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.146404 scale <-1,1,1> translate<21.3999,43.1814,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.554197 scale <-1,1,1> translate<21.351,43.1814,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.640714 scale <-1,1,1> translate<21.2065,43.1814,17.6245> }
object{Deco[5] scale 0.6 rotate x*360*0.562523 scale <-1,1,1> translate<21.0542,43.1814,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.183191 scale <-1,1,1> translate<20.7533,43.1814,17.6245> }
object{Elbow translate x*3 rotate x*90 rotate -z*90  translate <24,43.1814,17.6245>}
cylinder{<13.8079,46.1814,17.6245>,<13.8079,63.1873,17.6245>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.638254 rotate z*90*1 translate<13.8079,46.4583,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.265426 rotate z*90*1 translate<13.8079,46.7947,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.513669 rotate z*90*1 translate<13.8079,47.4703,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.778164 rotate z*90*1 translate<13.8079,47.6615,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.0710642 rotate z*90*1 translate<13.8079,48.2609,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.389637 rotate z*90*1 translate<13.8079,48.9041,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.324796 rotate z*90*1 translate<13.8079,49.5087,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.560185 rotate z*90*1 translate<13.8079,49.8095,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.320775 rotate z*90*1 translate<13.8079,50.1593,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.68577 rotate z*90*1 translate<13.8079,50.8428,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.854901 rotate z*90*1 translate<13.8079,50.977,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.868995 rotate z*90*1 translate<13.8079,51.5575,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.390803 rotate z*90*1 translate<13.8079,52.2329,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.506773 rotate z*90*1 translate<13.8079,53.011,17.6245> }
object{Deco[5] scale 0.6 rotate x*360*0.987041 rotate z*90*1 translate<13.8079,53.1273,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.861797 rotate z*90*1 translate<13.8079,53.2416,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.56449 rotate z*90*1 translate<13.8079,53.5803,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.25461 rotate z*90*1 translate<13.8079,53.6922,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.341627 rotate z*90*1 translate<13.8079,54.0875,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.303191 rotate z*90*1 translate<13.8079,54.27,17.6245> }
object{Elbow translate z*3 rotate -x*90 translate x*3 translate -y*3  translate <13.8079,46.1814,17.6245>}
cylinder{<10.8079,66.1873,17.6245>,<2.7167,66.1873,17.6245>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.128327 scale <-1,1,1> translate<10.788,66.1873,17.6245> }
object{Deco[5] scale 0.6 rotate x*360*0.786195 scale <-1,1,1> translate<10.476,66.1873,17.6245> }
object{Deco[5] scale 0.6 rotate x*360*0.279702 scale <-1,1,1> translate<10.3053,66.1873,17.6245> }
object{Deco[5] scale 0.6 rotate x*360*0.767751 scale <-1,1,1> translate<10.3004,66.1873,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.735621 scale <-1,1,1> translate<9.96652,66.1873,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.983916 scale <-1,1,1> translate<9.94816,66.1873,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.762794 scale <-1,1,1> translate<9.83972,66.1873,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.224438 scale <-1,1,1> translate<9.77912,66.1873,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.132415 scale <-1,1,1> translate<9.74906,66.1873,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.0017623 scale <-1,1,1> translate<9.54867,66.1873,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.310663 scale <-1,1,1> translate<9.34194,66.1873,17.6245> }
object{Deco[4] scale 0.6 rotate x*360*0.322363 scale <-1,1,1> translate<9.30687,66.1873,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.641591 scale <-1,1,1> translate<8.99011,66.1873,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.633755 scale <-1,1,1> translate<8.7474,66.1873,17.6245> }
object{Deco[0] scale 0.6 rotate x*360*0.372614 scale <-1,1,1> translate<8.371,66.1873,17.6245> }
object{Deco[6] scale 0.6 rotate x*360*0.150418 scale <-1,1,1> translate<8.10254,66.1873,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.276147 scale <-1,1,1> translate<7.82579,66.1873,17.6245> }
object{Deco[2] scale 0.6 rotate x*360*0.33319 scale <-1,1,1> translate<7.48792,66.1873,17.6245> }
object{Deco[3] scale 0.6 rotate x*360*0.063314 scale <-1,1,1> translate<7.17861,66.1873,17.6245> }
object{Deco[1] scale 0.6 rotate x*360*0.500745 scale <-1,1,1> translate<7.01252,66.1873,17.6245> }
object{Elbow translate x*3 rotate x*90 rotate -z*90  translate <10.8079,66.1873,17.6245>}
cylinder{<-0.283303,63.1873,17.6245>,<-0.283303,47.2709,17.6245>,0.6}
object{Elbow translate x*3 rotate x*90 translate <-0.283303,63.1873,17.6245>}
cylinder{<-0.283303,41.2709,17.6245>,<-0.283303,35.2343,17.6245>,0.6}
cylinder{<-0.283303,47.2709,17.6245>,<-0.283303,41.2709,17.6245>,0.6}
cylinder{<-3.2833,32.2343,17.6245>,<-20.698,32.2343,17.6245>,0.6}
object{Elbow translate z*3 rotate y*180 rotate x*90  translate <-3.2833,32.2343,17.6245>}
cylinder{<-23.698,32.2343,14.6245>,<-23.698,32.2343,8.16084>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.933177 rotate y*90*-1 translate<-23.698,32.2343,14.5536> }
object{Deco[3] scale 0.6 rotate x*360*0.622576 rotate y*90*-1 translate<-23.698,32.2343,14.3599> }
object{Deco[0] scale 0.6 rotate x*360*0.714851 rotate y*90*-1 translate<-23.698,32.2343,14.3544> }
object{Deco[4] scale 0.6 rotate x*360*0.817406 rotate y*90*-1 translate<-23.698,32.2343,14.0923> }
object{Deco[0] scale 0.6 rotate x*360*0.0912601 rotate y*90*-1 translate<-23.698,32.2343,14.0001> }
object{Deco[0] scale 0.6 rotate x*360*0.0954967 rotate y*90*-1 translate<-23.698,32.2343,13.7038> }
object{Deco[0] scale 0.6 rotate x*360*0.0420308 rotate y*90*-1 translate<-23.698,32.2343,13.4915> }
object{Deco[3] scale 0.6 rotate x*360*0.588049 rotate y*90*-1 translate<-23.698,32.2343,13.3057> }
object{Deco[5] scale 0.6 rotate x*360*0.913898 rotate y*90*-1 translate<-23.698,32.2343,13.0625> }
object{Deco[3] scale 0.6 rotate x*360*0.768982 rotate y*90*-1 translate<-23.698,32.2343,12.8842> }
object{Deco[0] scale 0.6 rotate x*360*0.432828 rotate y*90*-1 translate<-23.698,32.2343,12.7708> }
object{Deco[3] scale 0.6 rotate x*360*0.291668 rotate y*90*-1 translate<-23.698,32.2343,12.5525> }
object{Deco[1] scale 0.6 rotate x*360*0.193636 rotate y*90*-1 translate<-23.698,32.2343,12.3557> }
object{Deco[1] scale 0.6 rotate x*360*0.2257 rotate y*90*-1 translate<-23.698,32.2343,12.1883> }
object{Deco[6] scale 0.6 rotate x*360*0.0300555 rotate y*90*-1 translate<-23.698,32.2343,12.1446> }
object{Deco[2] scale 0.6 rotate x*360*0.176254 rotate y*90*-1 translate<-23.698,32.2343,12.1252> }
object{Deco[3] scale 0.6 rotate x*360*0.368395 rotate y*90*-1 translate<-23.698,32.2343,11.9017> }
object{Deco[1] scale 0.6 rotate x*360*0.449231 rotate y*90*-1 translate<-23.698,32.2343,11.7723> }
object{Deco[6] scale 0.6 rotate x*360*0.28221 rotate y*90*-1 translate<-23.698,32.2343,11.7195> }
object{Deco[1] scale 0.6 rotate x*360*0.613886 rotate y*90*-1 translate<-23.698,32.2343,11.6877> }
object{Elbow scale <1,1,-1> translate x*3  translate <-23.698,32.2343,14.6245>}
cylinder{<-26.698,32.2343,5.16084>,<-24,32.2343,5.16084>,0.6}
object{Elbow scale <-1,1,1> translate z*3  translate <-26.698,32.2343,5.16084>}
cylinder{<-27,32.2343,8.16084>,<-27,32.2343,15.0416>,0.6}
object{Elbow translate x*3  translate <-27,32.2343,8.16084>}
cylinder{<-27,35.2343,18.0416>,<-27,51.4534,18.0416>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.760913 rotate z*90*1 translate<-27,35.4644,18.0416> }
object{Deco[0] scale 0.6 rotate x*360*0.894351 rotate z*90*1 translate<-27,36.0882,18.0416> }
object{Deco[1] scale 0.6 rotate x*360*0.703731 rotate z*90*1 translate<-27,36.2484,18.0416> }
object{Deco[4] scale 0.6 rotate x*360*0.300663 rotate z*90*1 translate<-27,36.8012,18.0416> }
object{Deco[4] scale 0.6 rotate x*360*0.262464 rotate z*90*1 translate<-27,37.071,18.0416> }
object{Deco[0] scale 0.6 rotate x*360*0.593867 rotate z*90*1 translate<-27,37.8383,18.0416> }
object{Deco[0] scale 0.6 rotate x*360*0.344476 rotate z*90*1 translate<-27,38.3624,18.0416> }
object{Deco[2] scale 0.6 rotate x*360*0.846997 rotate z*90*1 translate<-27,38.3729,18.0416> }
object{Deco[1] scale 0.6 rotate x*360*0.308814 rotate z*90*1 translate<-27,38.4359,18.0416> }
object{Deco[6] scale 0.6 rotate x*360*0.452613 rotate z*90*1 translate<-27,38.7454,18.0416> }
object{Deco[4] scale 0.6 rotate x*360*0.578381 rotate z*90*1 translate<-27,39.3425,18.0416> }
object{Deco[1] scale 0.6 rotate x*360*0.726274 rotate z*90*1 translate<-27,39.7328,18.0416> }
object{Deco[4] scale 0.6 rotate x*360*0.206779 rotate z*90*1 translate<-27,39.7986,18.0416> }
object{Deco[4] scale 0.6 rotate x*360*0.0449351 rotate z*90*1 translate<-27,40.0673,18.0416> }
object{Deco[5] scale 0.6 rotate x*360*0.846722 rotate z*90*1 translate<-27,40.263,18.0416> }
object{Deco[4] scale 0.6 rotate x*360*0.652236 rotate z*90*1 translate<-27,40.9034,18.0416> }
object{Deco[1] scale 0.6 rotate x*360*0.93116 rotate z*90*1 translate<-27,41.339,18.0416> }
object{Deco[2] scale 0.6 rotate x*360*0.201103 rotate z*90*1 translate<-27,41.369,18.0416> }
object{Deco[0] scale 0.6 rotate x*360*0.96912 rotate z*90*1 translate<-27,41.566,18.0416> }
object{Deco[0] scale 0.6 rotate x*360*0.112895 rotate z*90*1 translate<-27,42.2754,18.0416> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-27,35.2343,18.0416>}
cylinder{<-27,54.4534,21.0416>,<-27,54.4534,37.5>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.735555 rotate y*90*1 translate<-27,54.4534,21.816> }
object{Deco[6] scale 0.6 rotate x*360*0.250782 rotate y*90*1 translate<-27,54.4534,22.5793> }
object{Deco[3] scale 0.6 rotate x*360*0.48174 rotate y*90*1 translate<-27,54.4534,22.6861> }
object{Deco[4] scale 0.6 rotate x*360*0.893157 rotate y*90*1 translate<-27,54.4534,22.7073> }
object{Deco[0] scale 0.6 rotate x*360*0.778187 rotate y*90*1 translate<-27,54.4534,23.1804> }
object{Deco[0] scale 0.6 rotate x*360*0.231932 rotate y*90*1 translate<-27,54.4534,23.5025> }
object{Deco[1] scale 0.6 rotate x*360*0.319333 rotate y*90*1 translate<-27,54.4534,23.6138> }
object{Deco[4] scale 0.6 rotate x*360*0.114944 rotate y*90*1 translate<-27,54.4534,24.1737> }
object{Deco[2] scale 0.6 rotate x*360*0.196826 rotate y*90*1 translate<-27,54.4534,24.8617> }
object{Deco[6] scale 0.6 rotate x*360*0.272205 rotate y*90*1 translate<-27,54.4534,25.4189> }
object{Deco[6] scale 0.6 rotate x*360*0.0418638 rotate y*90*1 translate<-27,54.4534,25.9048> }
object{Deco[6] scale 0.6 rotate x*360*0.667251 rotate y*90*1 translate<-27,54.4534,26.2044> }
object{Deco[5] scale 0.6 rotate x*360*0.348893 rotate y*90*1 translate<-27,54.4534,26.8283> }
object{Deco[3] scale 0.6 rotate x*360*0.816647 rotate y*90*1 translate<-27,54.4534,27.2914> }
object{Deco[1] scale 0.6 rotate x*360*0.686337 rotate y*90*1 translate<-27,54.4534,27.5276> }
object{Deco[5] scale 0.6 rotate x*360*0.589491 rotate y*90*1 translate<-27,54.4534,27.9832> }
object{Deco[6] scale 0.6 rotate x*360*0.997133 rotate y*90*1 translate<-27,54.4534,28.1687> }
object{Deco[3] scale 0.6 rotate x*360*0.78879 rotate y*90*1 translate<-27,54.4534,28.9096> }
object{Deco[1] scale 0.6 rotate x*360*0.977948 rotate y*90*1 translate<-27,54.4534,29.3469> }
object{Deco[6] scale 0.6 rotate x*360*0.989443 rotate y*90*1 translate<-27,54.4534,29.6102> }
object{Elbow translate z*3 rotate -z*90 translate -z*3 translate -y*3  translate <-27,54.4534,21.0416>}
cylinder{<-27,57.4534,40.5>,<-27,70.4336,40.5>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.462173 rotate z*90*1 translate<-27,57.7091,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.967054 rotate z*90*1 translate<-27,57.8486,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.0583874 rotate z*90*1 translate<-27,58.2476,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.144156 rotate z*90*1 translate<-27,58.4004,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.293127 rotate z*90*1 translate<-27,58.9441,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.6427 rotate z*90*1 translate<-27,59.4126,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.712825 rotate z*90*1 translate<-27,59.4801,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.132815 rotate z*90*1 translate<-27,59.7175,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.454162 rotate z*90*1 translate<-27,60.2402,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.397557 rotate z*90*1 translate<-27,60.6338,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.51094 rotate z*90*1 translate<-27,61.2092,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.965464 rotate z*90*1 translate<-27,61.7806,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.890433 rotate z*90*1 translate<-27,61.9474,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.481406 rotate z*90*1 translate<-27,62.1103,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.787753 rotate z*90*1 translate<-27,62.5224,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.465271 rotate z*90*1 translate<-27,63.0356,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.349175 rotate z*90*1 translate<-27,63.59,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.31212 rotate z*90*1 translate<-27,63.8505,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.389256 rotate z*90*1 translate<-27,63.8606,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.786861 rotate z*90*1 translate<-27,64.0659,40.5> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-27,57.4534,40.5>}
cylinder{<-27,76.4336,40.5>,<-27,77,40.5>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.0400522 rotate z*90*1 translate<-27,76.4575,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.525155 rotate z*90*1 translate<-27,76.4824,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.208782 rotate z*90*1 translate<-27,76.4824,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.786707 rotate z*90*1 translate<-27,76.5018,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.339537 rotate z*90*1 translate<-27,76.5056,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.258042 rotate z*90*1 translate<-27,76.5153,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.179126 rotate z*90*1 translate<-27,76.5369,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.275652 rotate z*90*1 translate<-27,76.5521,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.281651 rotate z*90*1 translate<-27,76.5604,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.19038 rotate z*90*1 translate<-27,76.5832,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.338988 rotate z*90*1 translate<-27,76.5947,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.686572 rotate z*90*1 translate<-27,76.5961,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.910647 rotate z*90*1 translate<-27,76.6196,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.235648 rotate z*90*1 translate<-27,76.6414,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.330937 rotate z*90*1 translate<-27,76.6567,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.0416276 rotate z*90*1 translate<-27,76.6834,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.271623 rotate z*90*1 translate<-27,76.6994,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.516829 rotate z*90*1 translate<-27,76.7012,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.0524432 rotate z*90*1 translate<-27,76.7188,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.514411 rotate z*90*1 translate<-27,76.7351,40.5> }
cylinder{<-27,70.4336,40.5>,<-27,76.4336,40.5>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.132748 rotate z*90*1 translate<-27,70.5191,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.803246 rotate z*90*1 translate<-27,70.7528,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.597347 rotate z*90*1 translate<-27,70.8736,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.662187 rotate z*90*1 translate<-27,71.0885,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.681127 rotate z*90*1 translate<-27,71.2083,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.557734 rotate z*90*1 translate<-27,71.2542,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.772519 rotate z*90*1 translate<-27,71.3671,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.713792 rotate z*90*1 translate<-27,71.516,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.707917 rotate z*90*1 translate<-27,71.628,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.547303 rotate z*90*1 translate<-27,71.7195,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.830347 rotate z*90*1 translate<-27,71.8627,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.491329 rotate z*90*1 translate<-27,72.0991,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.0483296 rotate z*90*1 translate<-27,72.1953,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.220391 rotate z*90*1 translate<-27,72.4382,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.307659 rotate z*90*1 translate<-27,72.5489,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.793773 rotate z*90*1 translate<-27,72.5634,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.292145 rotate z*90*1 translate<-27,72.741,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.303856 rotate z*90*1 translate<-27,72.8588,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.111727 rotate z*90*1 translate<-27,72.9058,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.320613 rotate z*90*1 translate<-27,73.1503,40.5> }
cylinder{<-24,80,40.5>,<-6.59376,80,40.5>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.614718 scale <1,1,1> translate<-23.6656,80,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.679061 scale <1,1,1> translate<-23.2547,80,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.0767967 scale <1,1,1> translate<-22.7157,80,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.346613 scale <1,1,1> translate<-22.625,80,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.121997 scale <1,1,1> translate<-22.4066,80,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.571032 scale <1,1,1> translate<-21.8875,80,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.599463 scale <1,1,1> translate<-21.3741,80,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.87938 scale <1,1,1> translate<-20.7139,80,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.841158 scale <1,1,1> translate<-20.6353,80,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.353993 scale <1,1,1> translate<-20.4729,80,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.386052 scale <1,1,1> translate<-20.2142,80,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.0683726 scale <1,1,1> translate<-19.7215,80,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.872488 scale <1,1,1> translate<-19.4067,80,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.296393 scale <1,1,1> translate<-19.1862,80,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.605169 scale <1,1,1> translate<-18.7783,80,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.729351 scale <1,1,1> translate<-18.5288,80,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.456585 scale <1,1,1> translate<-17.8204,80,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.756617 scale <1,1,1> translate<-17.2282,80,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.455037 scale <1,1,1> translate<-17.1437,80,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.3198 scale <1,1,1> translate<-16.8721,80,40.5> }
object{Elbow translate z*3 rotate y*90 rotate x*-90 translate -x*3 translate -y*3  translate <-24,80,40.5>}
cylinder{<-0.593755,80,40.5>,<11.4027,80,40.5>,0.6}
cylinder{<-6.59376,80,40.5>,<-0.593755,80,40.5>,0.6}
cylinder{<14.4027,80,37.5>,<14.4027,80,22.9542>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.0619219 rotate y*90*-1 translate<14.4027,80,36.8097> }
object{Deco[0] scale 0.6 rotate x*360*0.0486402 rotate y*90*-1 translate<14.4027,80,36.1845> }
object{Deco[4] scale 0.6 rotate x*360*0.979577 rotate y*90*-1 translate<14.4027,80,35.7448> }
object{Deco[6] scale 0.6 rotate x*360*0.689901 rotate y*90*-1 translate<14.4027,80,35.3014> }
object{Deco[2] scale 0.6 rotate x*360*0.83602 rotate y*90*-1 translate<14.4027,80,35.2912> }
object{Deco[1] scale 0.6 rotate x*360*0.582734 rotate y*90*-1 translate<14.4027,80,35.0792> }
object{Deco[0] scale 0.6 rotate x*360*0.884108 rotate y*90*-1 translate<14.4027,80,34.7222> }
object{Deco[6] scale 0.6 rotate x*360*0.831861 rotate y*90*-1 translate<14.4027,80,34.4361> }
object{Deco[3] scale 0.6 rotate x*360*0.771945 rotate y*90*-1 translate<14.4027,80,33.8826> }
object{Deco[3] scale 0.6 rotate x*360*0.786635 rotate y*90*-1 translate<14.4027,80,33.6691> }
object{Deco[1] scale 0.6 rotate x*360*0.174632 rotate y*90*-1 translate<14.4027,80,33.1118> }
object{Deco[1] scale 0.6 rotate x*360*0.0345179 rotate y*90*-1 translate<14.4027,80,32.9528> }
object{Deco[0] scale 0.6 rotate x*360*0.266796 rotate y*90*-1 translate<14.4027,80,32.2718> }
object{Deco[2] scale 0.6 rotate x*360*0.829742 rotate y*90*-1 translate<14.4027,80,31.6319> }
object{Deco[4] scale 0.6 rotate x*360*0.595098 rotate y*90*-1 translate<14.4027,80,31.1612> }
object{Deco[5] scale 0.6 rotate x*360*0.970972 rotate y*90*-1 translate<14.4027,80,30.6663> }
object{Deco[2] scale 0.6 rotate x*360*0.860117 rotate y*90*-1 translate<14.4027,80,30.0879> }
object{Deco[4] scale 0.6 rotate x*360*0.072405 rotate y*90*-1 translate<14.4027,80,30.0033> }
object{Deco[4] scale 0.6 rotate x*360*0.981271 rotate y*90*-1 translate<14.4027,80,29.7039> }
object{Deco[5] scale 0.6 rotate x*360*0.611263 rotate y*90*-1 translate<14.4027,80,29.2291> }
object{Elbow translate x*3 rotate y*180 translate <14.4027,80,37.5>}
cylinder{<14.4027,77,19.9542>,<14.4027,69.875,19.9542>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.822574 rotate z*90*-1 translate<14.4027,76.8611,19.9542> }
object{Deco[1] scale 0.6 rotate x*360*0.338339 rotate z*90*-1 translate<14.4027,76.6429,19.9542> }
object{Deco[1] scale 0.6 rotate x*360*0.525925 rotate z*90*-1 translate<14.4027,76.5477,19.9542> }
object{Deco[0] scale 0.6 rotate x*360*0.82707 rotate z*90*-1 translate<14.4027,76.3034,19.9542> }
object{Deco[0] scale 0.6 rotate x*360*0.986632 rotate z*90*-1 translate<14.4027,76.1377,19.9542> }
object{Deco[0] scale 0.6 rotate x*360*0.626089 rotate z*90*-1 translate<14.4027,75.8399,19.9542> }
object{Deco[4] scale 0.6 rotate x*360*0.490889 rotate z*90*-1 translate<14.4027,75.7057,19.9542> }
object{Deco[4] scale 0.6 rotate x*360*0.799664 rotate z*90*-1 translate<14.4027,75.4814,19.9542> }
object{Deco[2] scale 0.6 rotate x*360*0.248895 rotate z*90*-1 translate<14.4027,75.3028,19.9542> }
object{Deco[1] scale 0.6 rotate x*360*0.119537 rotate z*90*-1 translate<14.4027,75.1102,19.9542> }
object{Deco[6] scale 0.6 rotate x*360*0.432636 rotate z*90*-1 translate<14.4027,74.9415,19.9542> }
object{Deco[4] scale 0.6 rotate x*360*0.221679 rotate z*90*-1 translate<14.4027,74.9134,19.9542> }
object{Deco[3] scale 0.6 rotate x*360*0.905136 rotate z*90*-1 translate<14.4027,74.7604,19.9542> }
object{Deco[0] scale 0.6 rotate x*360*0.853149 rotate z*90*-1 translate<14.4027,74.682,19.9542> }
object{Deco[5] scale 0.6 rotate x*360*0.888885 rotate z*90*-1 translate<14.4027,74.448,19.9542> }
object{Deco[4] scale 0.6 rotate x*360*0.063671 rotate z*90*-1 translate<14.4027,74.34,19.9542> }
object{Deco[3] scale 0.6 rotate x*360*0.841604 rotate z*90*-1 translate<14.4027,74.0512,19.9542> }
object{Deco[3] scale 0.6 rotate x*360*0.166266 rotate z*90*-1 translate<14.4027,73.7631,19.9542> }
object{Deco[3] scale 0.6 rotate x*360*0.804634 rotate z*90*-1 translate<14.4027,73.704,19.9542> }
object{Deco[1] scale 0.6 rotate x*360*0.581328 rotate z*90*-1 translate<14.4027,73.5083,19.9542> }
object{Elbow translate z*3 rotate -z*90 translate <14.4027,77,19.9542>}
cylinder{<14.4027,66.875,16.9542>,<14.4027,66.875,5.25937>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.493296 rotate y*90*-1 translate<14.4027,66.875,16.5224> }
object{Deco[2] scale 0.6 rotate x*360*0.354932 rotate y*90*-1 translate<14.4027,66.875,16.3267> }
object{Deco[1] scale 0.6 rotate x*360*0.322756 rotate y*90*-1 translate<14.4027,66.875,16.3031> }
object{Deco[5] scale 0.6 rotate x*360*0.891855 rotate y*90*-1 translate<14.4027,66.875,15.8956> }
object{Deco[5] scale 0.6 rotate x*360*0.654009 rotate y*90*-1 translate<14.4027,66.875,15.7698> }
object{Deco[1] scale 0.6 rotate x*360*0.387743 rotate y*90*-1 translate<14.4027,66.875,15.2746> }
object{Deco[6] scale 0.6 rotate x*360*0.901943 rotate y*90*-1 translate<14.4027,66.875,14.8356> }
object{Deco[3] scale 0.6 rotate x*360*0.103337 rotate y*90*-1 translate<14.4027,66.875,14.3151> }
object{Deco[2] scale 0.6 rotate x*360*0.287564 rotate y*90*-1 translate<14.4027,66.875,14.1152> }
object{Deco[3] scale 0.6 rotate x*360*0.285136 rotate y*90*-1 translate<14.4027,66.875,13.9208> }
object{Deco[5] scale 0.6 rotate x*360*0.308776 rotate y*90*-1 translate<14.4027,66.875,13.8547> }
object{Deco[1] scale 0.6 rotate x*360*0.189662 rotate y*90*-1 translate<14.4027,66.875,13.364> }
object{Deco[0] scale 0.6 rotate x*360*0.883224 rotate y*90*-1 translate<14.4027,66.875,13.3121> }
object{Deco[4] scale 0.6 rotate x*360*0.994331 rotate y*90*-1 translate<14.4027,66.875,13.155> }
object{Deco[1] scale 0.6 rotate x*360*0.950936 rotate y*90*-1 translate<14.4027,66.875,13.0191> }
object{Deco[5] scale 0.6 rotate x*360*0.985692 rotate y*90*-1 translate<14.4027,66.875,12.828> }
object{Deco[5] scale 0.6 rotate x*360*0.727792 rotate y*90*-1 translate<14.4027,66.875,12.7666> }
object{Deco[0] scale 0.6 rotate x*360*0.487054 rotate y*90*-1 translate<14.4027,66.875,12.3846> }
object{Deco[6] scale 0.6 rotate x*360*0.743261 rotate y*90*-1 translate<14.4027,66.875,12.276> }
object{Deco[3] scale 0.6 rotate x*360*0.69165 rotate y*90*-1 translate<14.4027,66.875,12.171> }
object{Elbow translate z*3 rotate z*90 rotate -x*90 translate <14.4027,66.875,16.9542>}
cylinder{<14.4027,63.875,2.25937>,<14.4027,53.3371,2.25937>,0.6}
object{Elbow translate z*3 rotate -z*90 translate <14.4027,63.875,2.25937>}
cylinder{<17.4027,50.3371,2.25937>,<24,50.3371,2.25937>,0.6}
object{Elbow rotate -x*90 translate y*3  translate <17.4027,50.3371,2.25937>}
cylinder{<27,50.3371,-0.740629>,<27,50.3371,-15.0691>,0.6}
object{Elbow translate x*3 rotate y*180 translate <27,50.3371,-0.740629>}
cylinder{<24,50.3371,-18.0691>,<17.3827,50.3371,-18.0691>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.287878 scale <-1,1,1> translate<23.8301,50.3371,-18.0691> }
object{Deco[3] scale 0.6 rotate x*360*0.791628 scale <-1,1,1> translate<23.6316,50.3371,-18.0691> }
object{Deco[6] scale 0.6 rotate x*360*0.384872 scale <-1,1,1> translate<23.4802,50.3371,-18.0691> }
object{Deco[1] scale 0.6 rotate x*360*0.363581 scale <-1,1,1> translate<23.3893,50.3371,-18.0691> }
object{Deco[5] scale 0.6 rotate x*360*0.921834 scale <-1,1,1> translate<23.2567,50.3371,-18.0691> }
object{Deco[4] scale 0.6 rotate x*360*0.214008 scale <-1,1,1> translate<23.0209,50.3371,-18.0691> }
object{Deco[6] scale 0.6 rotate x*360*0.216901 scale <-1,1,1> translate<22.8672,50.3371,-18.0691> }
object{Deco[0] scale 0.6 rotate x*360*0.700119 scale <-1,1,1> translate<22.7608,50.3371,-18.0691> }
object{Deco[5] scale 0.6 rotate x*360*0.877985 scale <-1,1,1> translate<22.6438,50.3371,-18.0691> }
object{Deco[2] scale 0.6 rotate x*360*0.226681 scale <-1,1,1> translate<22.4469,50.3371,-18.0691> }
object{Deco[4] scale 0.6 rotate x*360*0.279114 scale <-1,1,1> translate<22.1698,50.3371,-18.0691> }
object{Deco[4] scale 0.6 rotate x*360*0.640782 scale <-1,1,1> translate<22.103,50.3371,-18.0691> }
object{Deco[4] scale 0.6 rotate x*360*0.758287 scale <-1,1,1> translate<21.857,50.3371,-18.0691> }
object{Deco[6] scale 0.6 rotate x*360*0.993794 scale <-1,1,1> translate<21.774,50.3371,-18.0691> }
object{Deco[4] scale 0.6 rotate x*360*0.571631 scale <-1,1,1> translate<21.6902,50.3371,-18.0691> }
object{Deco[3] scale 0.6 rotate x*360*0.601329 scale <-1,1,1> translate<21.5517,50.3371,-18.0691> }
object{Deco[2] scale 0.6 rotate x*360*0.331032 scale <-1,1,1> translate<21.3708,50.3371,-18.0691> }
object{Deco[6] scale 0.6 rotate x*360*0.786067 scale <-1,1,1> translate<21.3426,50.3371,-18.0691> }
object{Deco[1] scale 0.6 rotate x*360*0.696363 scale <-1,1,1> translate<21.2048,50.3371,-18.0691> }
object{Deco[6] scale 0.6 rotate x*360*0.337765 scale <-1,1,1> translate<21.1296,50.3371,-18.0691> }
object{Elbow scale <-1,1,1> translate z*3  translate <24,50.3371,-18.0691>}
cylinder{<14.3827,50.3371,-21.0691>,<14.3827,50.3371,-32.0538>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.0752148 rotate y*90*-1 translate<14.3827,50.3371,-21.4883> }
object{Deco[3] scale 0.6 rotate x*360*0.418977 rotate y*90*-1 translate<14.3827,50.3371,-21.8189> }
object{Deco[2] scale 0.6 rotate x*360*0.0560737 rotate y*90*-1 translate<14.3827,50.3371,-21.8593> }
object{Deco[6] scale 0.6 rotate x*360*0.813361 rotate y*90*-1 translate<14.3827,50.3371,-21.8994> }
object{Deco[3] scale 0.6 rotate x*360*0.838127 rotate y*90*-1 translate<14.3827,50.3371,-21.9571> }
object{Deco[5] scale 0.6 rotate x*360*0.569239 rotate y*90*-1 translate<14.3827,50.3371,-22.0436> }
object{Deco[0] scale 0.6 rotate x*360*0.589853 rotate y*90*-1 translate<14.3827,50.3371,-22.4349> }
object{Deco[3] scale 0.6 rotate x*360*0.30131 rotate y*90*-1 translate<14.3827,50.3371,-22.6827> }
object{Deco[0] scale 0.6 rotate x*360*0.00265826 rotate y*90*-1 translate<14.3827,50.3371,-22.7626> }
object{Deco[3] scale 0.6 rotate x*360*0.478038 rotate y*90*-1 translate<14.3827,50.3371,-23.0224> }
object{Deco[1] scale 0.6 rotate x*360*0.740994 rotate y*90*-1 translate<14.3827,50.3371,-23.4006> }
object{Deco[4] scale 0.6 rotate x*360*0.397547 rotate y*90*-1 translate<14.3827,50.3371,-23.8488> }
object{Deco[5] scale 0.6 rotate x*360*0.655117 rotate y*90*-1 translate<14.3827,50.3371,-23.8771> }
object{Deco[6] scale 0.6 rotate x*360*0.333083 rotate y*90*-1 translate<14.3827,50.3371,-23.9757> }
object{Deco[6] scale 0.6 rotate x*360*0.690703 rotate y*90*-1 translate<14.3827,50.3371,-24.0885> }
object{Deco[5] scale 0.6 rotate x*360*0.736843 rotate y*90*-1 translate<14.3827,50.3371,-24.3246> }
object{Deco[5] scale 0.6 rotate x*360*0.379723 rotate y*90*-1 translate<14.3827,50.3371,-24.7947> }
object{Deco[1] scale 0.6 rotate x*360*0.321629 rotate y*90*-1 translate<14.3827,50.3371,-25.1399> }
object{Deco[6] scale 0.6 rotate x*360*0.661218 rotate y*90*-1 translate<14.3827,50.3371,-25.2567> }
object{Deco[3] scale 0.6 rotate x*360*0.278253 rotate y*90*-1 translate<14.3827,50.3371,-25.5424> }
object{Elbow scale <1,1,-1> translate x*3  translate <14.3827,50.3371,-21.0691>}
cylinder{<14.3827,47.3371,-35.0538>,<14.3827,31.6244,-35.0538>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.231504 rotate z*90*-1 translate<14.3827,47.0592,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.310628 rotate z*90*-1 translate<14.3827,46.7633,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.277138 rotate z*90*-1 translate<14.3827,46.4843,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.115025 rotate z*90*-1 translate<14.3827,46.1173,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.0225833 rotate z*90*-1 translate<14.3827,45.5392,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.196168 rotate z*90*-1 translate<14.3827,44.8688,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.448705 rotate z*90*-1 translate<14.3827,44.6244,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.252082 rotate z*90*-1 translate<14.3827,43.9938,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.804857 rotate z*90*-1 translate<14.3827,43.4339,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.834508 rotate z*90*-1 translate<14.3827,42.6904,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.0743951 rotate z*90*-1 translate<14.3827,42.2778,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.159954 rotate z*90*-1 translate<14.3827,42.1428,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.928542 rotate z*90*-1 translate<14.3827,42.0923,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.120224 rotate z*90*-1 translate<14.3827,41.9858,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.791294 rotate z*90*-1 translate<14.3827,41.4546,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.222042 rotate z*90*-1 translate<14.3827,40.8486,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.65855 rotate z*90*-1 translate<14.3827,40.696,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.155108 rotate z*90*-1 translate<14.3827,40.6921,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.311732 rotate z*90*-1 translate<14.3827,40.1689,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.977968 rotate z*90*-1 translate<14.3827,39.8862,-35.0538> }
object{Elbow translate z*3 rotate -z*90 translate <14.3827,47.3371,-35.0538>}
cylinder{<11.3827,28.6244,-35.0538>,<-5.79958,28.6244,-35.0538>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.0753404 scale <-1,1,1> translate<10.6854,28.6244,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.665957 scale <-1,1,1> translate<10.2076,28.6244,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.811167 scale <-1,1,1> translate<9.49486,28.6244,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.771975 scale <-1,1,1> translate<8.8997,28.6244,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.669677 scale <-1,1,1> translate<8.5979,28.6244,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.669474 scale <-1,1,1> translate<8.17482,28.6244,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.248468 scale <-1,1,1> translate<7.70749,28.6244,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.187279 scale <-1,1,1> translate<7.31591,28.6244,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.55941 scale <-1,1,1> translate<7.02918,28.6244,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.182699 scale <-1,1,1> translate<6.93236,28.6244,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.911534 scale <-1,1,1> translate<6.20862,28.6244,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.766961 scale <-1,1,1> translate<5.43559,28.6244,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.137858 scale <-1,1,1> translate<4.80865,28.6244,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.901631 scale <-1,1,1> translate<4.65675,28.6244,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.328892 scale <-1,1,1> translate<3.97281,28.6244,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.631773 scale <-1,1,1> translate<3.52966,28.6244,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.638843 scale <-1,1,1> translate<2.82613,28.6244,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.292872 scale <-1,1,1> translate<2.5779,28.6244,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.672951 scale <-1,1,1> translate<2.06607,28.6244,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.73267 scale <-1,1,1> translate<1.58453,28.6244,-35.0538> }
object{Elbow translate z*3 rotate y*180 rotate x*90  translate <11.3827,28.6244,-35.0538>}
cylinder{<-8.79958,31.6244,-35.0538>,<-8.79958,42.8074,-35.0538>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.26863 rotate z*90*1 translate<-8.79958,31.762,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.951036 rotate z*90*1 translate<-8.79958,32.0221,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.0586362 rotate z*90*1 translate<-8.79958,32.2131,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.401191 rotate z*90*1 translate<-8.79958,32.2225,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.830687 rotate z*90*1 translate<-8.79958,32.3971,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.959615 rotate z*90*1 translate<-8.79958,32.4273,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.783282 rotate z*90*1 translate<-8.79958,32.9176,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.815123 rotate z*90*1 translate<-8.79958,32.9414,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.452278 rotate z*90*1 translate<-8.79958,33.1039,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.0791562 rotate z*90*1 translate<-8.79958,33.5576,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.500036 rotate z*90*1 translate<-8.79958,33.5891,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.400331 rotate z*90*1 translate<-8.79958,34.0522,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.591809 rotate z*90*1 translate<-8.79958,34.3709,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.239652 rotate z*90*1 translate<-8.79958,34.5824,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.476175 rotate z*90*1 translate<-8.79958,35.1122,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.61607 rotate z*90*1 translate<-8.79958,35.2644,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.984989 rotate z*90*1 translate<-8.79958,35.5243,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.867439 rotate z*90*1 translate<-8.79958,35.791,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.86849 rotate z*90*1 translate<-8.79958,36.0713,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.152584 rotate z*90*1 translate<-8.79958,36.468,-35.0538> }
object{Elbow translate z*3 rotate -x*90 translate x*3 translate -y*3  translate <-8.79958,31.6244,-35.0538>}
cylinder{<-8.79958,48.8074,-35.0538>,<-8.79958,64.1877,-35.0538>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.96842 rotate z*90*1 translate<-8.79958,49.1703,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.787704 rotate z*90*1 translate<-8.79958,49.2499,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.967906 rotate z*90*1 translate<-8.79958,49.4618,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.74713 rotate z*90*1 translate<-8.79958,50.0745,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.762699 rotate z*90*1 translate<-8.79958,50.5507,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.145409 rotate z*90*1 translate<-8.79958,50.7559,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.537509 rotate z*90*1 translate<-8.79958,51.3754,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.407214 rotate z*90*1 translate<-8.79958,51.8498,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.513931 rotate z*90*1 translate<-8.79958,52.0323,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.452961 rotate z*90*1 translate<-8.79958,52.6742,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.510725 rotate z*90*1 translate<-8.79958,52.7985,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.455524 rotate z*90*1 translate<-8.79958,53.3821,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.792625 rotate z*90*1 translate<-8.79958,53.8897,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.204506 rotate z*90*1 translate<-8.79958,54.4093,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.755166 rotate z*90*1 translate<-8.79958,54.5558,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.252028 rotate z*90*1 translate<-8.79958,54.6094,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.0994508 rotate z*90*1 translate<-8.79958,55.2792,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.475885 rotate z*90*1 translate<-8.79958,55.2878,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.421302 rotate z*90*1 translate<-8.79958,55.828,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.91567 rotate z*90*1 translate<-8.79958,56.4943,-35.0538> }
cylinder{<-8.79958,42.8074,-35.0538>,<-8.79958,48.8074,-35.0538>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.386303 rotate z*90*1 translate<-8.79958,42.8241,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.277486 rotate z*90*1 translate<-8.79958,42.9894,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.198378 rotate z*90*1 translate<-8.79958,42.9997,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.425748 rotate z*90*1 translate<-8.79958,43.2486,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.707235 rotate z*90*1 translate<-8.79958,43.334,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.0486854 rotate z*90*1 translate<-8.79958,43.4135,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.551781 rotate z*90*1 translate<-8.79958,43.683,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.56021 rotate z*90*1 translate<-8.79958,43.8315,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.0149115 rotate z*90*1 translate<-8.79958,43.9562,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.74702 rotate z*90*1 translate<-8.79958,44.1015,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.0824787 rotate z*90*1 translate<-8.79958,44.2048,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.748985 rotate z*90*1 translate<-8.79958,44.4498,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.368185 rotate z*90*1 translate<-8.79958,44.496,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.235214 rotate z*90*1 translate<-8.79958,44.6187,-35.0538> }
object{Deco[1] scale 0.6 rotate x*360*0.399145 rotate z*90*1 translate<-8.79958,44.6299,-35.0538> }
object{Deco[2] scale 0.6 rotate x*360*0.17048 rotate z*90*1 translate<-8.79958,44.8593,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.0664379 rotate z*90*1 translate<-8.79958,44.8962,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.919177 rotate z*90*1 translate<-8.79958,44.9092,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.143616 rotate z*90*1 translate<-8.79958,45.1843,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.669366 rotate z*90*1 translate<-8.79958,45.2993,-35.0538> }
cylinder{<-11.7996,67.1877,-35.0538>,<-24,67.1877,-35.0538>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.163053 scale <-1,1,1> translate<-12.0763,67.1877,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.427232 scale <-1,1,1> translate<-12.5644,67.1877,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.393443 scale <-1,1,1> translate<-12.5994,67.1877,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.410097 scale <-1,1,1> translate<-12.7875,67.1877,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.932854 scale <-1,1,1> translate<-13.1166,67.1877,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.0861042 scale <-1,1,1> translate<-13.508,67.1877,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.786361 scale <-1,1,1> translate<-13.6533,67.1877,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.397464 scale <-1,1,1> translate<-14.0833,67.1877,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.0588873 scale <-1,1,1> translate<-14.3247,67.1877,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.74601 scale <-1,1,1> translate<-14.5225,67.1877,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.499049 scale <-1,1,1> translate<-15.1032,67.1877,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.579973 scale <-1,1,1> translate<-15.3374,67.1877,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.062372 scale <-1,1,1> translate<-15.46,67.1877,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.860662 scale <-1,1,1> translate<-15.5631,67.1877,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.473963 scale <-1,1,1> translate<-16.0431,67.1877,-35.0538> }
object{Deco[3] scale 0.6 rotate x*360*0.753889 scale <-1,1,1> translate<-16.4269,67.1877,-35.0538> }
object{Deco[6] scale 0.6 rotate x*360*0.525643 scale <-1,1,1> translate<-16.7173,67.1877,-35.0538> }
object{Deco[5] scale 0.6 rotate x*360*0.157584 scale <-1,1,1> translate<-17.2284,67.1877,-35.0538> }
object{Deco[4] scale 0.6 rotate x*360*0.448956 scale <-1,1,1> translate<-17.5939,67.1877,-35.0538> }
object{Deco[0] scale 0.6 rotate x*360*0.638979 scale <-1,1,1> translate<-17.6923,67.1877,-35.0538> }
object{Elbow translate x*3 rotate x*90 rotate -z*90  translate <-11.7996,67.1877,-35.0538>}
cylinder{<-27,67.1877,-32.0538>,<-27,67.1877,-17.6277>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.143897 rotate y*90*1 translate<-27,67.1877,-31.7268> }
object{Deco[0] scale 0.6 rotate x*360*0.992881 rotate y*90*1 translate<-27,67.1877,-31.6757> }
object{Deco[6] scale 0.6 rotate x*360*0.619699 rotate y*90*1 translate<-27,67.1877,-31.3685> }
object{Deco[1] scale 0.6 rotate x*360*0.962812 rotate y*90*1 translate<-27,67.1877,-31.1452> }
object{Deco[2] scale 0.6 rotate x*360*0.536739 rotate y*90*1 translate<-27,67.1877,-30.8976> }
object{Deco[4] scale 0.6 rotate x*360*0.964842 rotate y*90*1 translate<-27,67.1877,-30.4139> }
object{Deco[6] scale 0.6 rotate x*360*0.827168 rotate y*90*1 translate<-27,67.1877,-29.7982> }
object{Deco[3] scale 0.6 rotate x*360*0.648639 rotate y*90*1 translate<-27,67.1877,-29.5506> }
object{Deco[1] scale 0.6 rotate x*360*0.492105 rotate y*90*1 translate<-27,67.1877,-29.2061> }
object{Deco[0] scale 0.6 rotate x*360*0.444468 rotate y*90*1 translate<-27,67.1877,-29.1532> }
object{Deco[5] scale 0.6 rotate x*360*0.296006 rotate y*90*1 translate<-27,67.1877,-28.882> }
object{Deco[5] scale 0.6 rotate x*360*0.232081 rotate y*90*1 translate<-27,67.1877,-28.2403> }
object{Deco[2] scale 0.6 rotate x*360*0.748112 rotate y*90*1 translate<-27,67.1877,-28.1195> }
object{Deco[3] scale 0.6 rotate x*360*0.262182 rotate y*90*1 translate<-27,67.1877,-27.5302> }
object{Deco[0] scale 0.6 rotate x*360*0.562962 rotate y*90*1 translate<-27,67.1877,-27.2646> }
object{Deco[3] scale 0.6 rotate x*360*0.695825 rotate y*90*1 translate<-27,67.1877,-26.6753> }
object{Deco[6] scale 0.6 rotate x*360*0.304708 rotate y*90*1 translate<-27,67.1877,-26.1909> }
object{Deco[4] scale 0.6 rotate x*360*0.37027 rotate y*90*1 translate<-27,67.1877,-25.6512> }
object{Deco[2] scale 0.6 rotate x*360*0.846689 rotate y*90*1 translate<-27,67.1877,-25.4683> }
object{Deco[1] scale 0.6 rotate x*360*0.650795 rotate y*90*1 translate<-27,67.1877,-25.2647> }
object{Elbow translate x*3  translate <-27,67.1877,-32.0538>}
cylinder{<-27,70.1877,-14.6277>,<-27,77,-14.6277>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.672444 rotate z*90*1 translate<-27,70.4871,-14.6277> }
object{Deco[5] scale 0.6 rotate x*360*0.454526 rotate z*90*1 translate<-27,70.6943,-14.6277> }
object{Deco[5] scale 0.6 rotate x*360*0.846855 rotate z*90*1 translate<-27,70.9357,-14.6277> }
object{Deco[6] scale 0.6 rotate x*360*0.131941 rotate z*90*1 translate<-27,71.0068,-14.6277> }
object{Deco[5] scale 0.6 rotate x*360*0.992619 rotate z*90*1 translate<-27,71.2516,-14.6277> }
object{Deco[4] scale 0.6 rotate x*360*0.669534 rotate z*90*1 translate<-27,71.4181,-14.6277> }
object{Deco[4] scale 0.6 rotate x*360*0.884564 rotate z*90*1 translate<-27,71.7253,-14.6277> }
object{Deco[2] scale 0.6 rotate x*360*0.0812828 rotate z*90*1 translate<-27,71.9044,-14.6277> }
object{Deco[5] scale 0.6 rotate x*360*0.339808 rotate z*90*1 translate<-27,71.9649,-14.6277> }
object{Deco[3] scale 0.6 rotate x*360*0.614828 rotate z*90*1 translate<-27,72.2414,-14.6277> }
object{Deco[3] scale 0.6 rotate x*360*0.647979 rotate z*90*1 translate<-27,72.478,-14.6277> }
object{Deco[3] scale 0.6 rotate x*360*0.0722175 rotate z*90*1 translate<-27,72.7302,-14.6277> }
object{Deco[2] scale 0.6 rotate x*360*0.518961 rotate z*90*1 translate<-27,72.9067,-14.6277> }
object{Deco[0] scale 0.6 rotate x*360*0.566817 rotate z*90*1 translate<-27,72.9245,-14.6277> }
object{Deco[4] scale 0.6 rotate x*360*0.333943 rotate z*90*1 translate<-27,72.9659,-14.6277> }
object{Deco[4] scale 0.6 rotate x*360*0.300505 rotate z*90*1 translate<-27,73.0423,-14.6277> }
object{Deco[1] scale 0.6 rotate x*360*0.748225 rotate z*90*1 translate<-27,73.2342,-14.6277> }
object{Deco[1] scale 0.6 rotate x*360*0.938417 rotate z*90*1 translate<-27,73.4394,-14.6277> }
object{Deco[3] scale 0.6 rotate x*360*0.371009 rotate z*90*1 translate<-27,73.5549,-14.6277> }
object{Deco[0] scale 0.6 rotate x*360*0.159481 rotate z*90*1 translate<-27,73.8471,-14.6277> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-27,70.1877,-14.6277>}
cylinder{<-24,80,-14.6277>,<-9.29341,80,-14.6277>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.590833 scale <1,1,1> translate<-23.8945,80,-14.6277> }
object{Deco[5] scale 0.6 rotate x*360*0.326737 scale <1,1,1> translate<-23.5217,80,-14.6277> }
object{Deco[2] scale 0.6 rotate x*360*0.608657 scale <1,1,1> translate<-23.1458,80,-14.6277> }
object{Deco[6] scale 0.6 rotate x*360*0.816933 scale <1,1,1> translate<-23.0969,80,-14.6277> }
object{Deco[3] scale 0.6 rotate x*360*0.778072 scale <1,1,1> translate<-22.8991,80,-14.6277> }
object{Deco[1] scale 0.6 rotate x*360*0.466037 scale <1,1,1> translate<-22.7472,80,-14.6277> }
object{Deco[6] scale 0.6 rotate x*360*0.336815 scale <1,1,1> translate<-22.5985,80,-14.6277> }
object{Deco[6] scale 0.6 rotate x*360*0.953461 scale <1,1,1> translate<-22.1235,80,-14.6277> }
object{Deco[1] scale 0.6 rotate x*360*0.578183 scale <1,1,1> translate<-21.9753,80,-14.6277> }
object{Deco[3] scale 0.6 rotate x*360*0.564911 scale <1,1,1> translate<-21.2899,80,-14.6277> }
object{Deco[5] scale 0.6 rotate x*360*0.50855 scale <1,1,1> translate<-20.998,80,-14.6277> }
object{Deco[4] scale 0.6 rotate x*360*0.368794 scale <1,1,1> translate<-20.9976,80,-14.6277> }
object{Deco[1] scale 0.6 rotate x*360*0.505951 scale <1,1,1> translate<-20.3558,80,-14.6277> }
object{Deco[0] scale 0.6 rotate x*360*0.83527 scale <1,1,1> translate<-19.9685,80,-14.6277> }
object{Deco[4] scale 0.6 rotate x*360*0.0164556 scale <1,1,1> translate<-19.613,80,-14.6277> }
object{Deco[4] scale 0.6 rotate x*360*0.635372 scale <1,1,1> translate<-19.3737,80,-14.6277> }
object{Deco[4] scale 0.6 rotate x*360*0.158088 scale <1,1,1> translate<-19.3634,80,-14.6277> }
object{Deco[0] scale 0.6 rotate x*360*0.889848 scale <1,1,1> translate<-19.3018,80,-14.6277> }
object{Deco[2] scale 0.6 rotate x*360*0.411622 scale <1,1,1> translate<-18.8158,80,-14.6277> }
object{Deco[2] scale 0.6 rotate x*360*0.489916 scale <1,1,1> translate<-18.7691,80,-14.6277> }
object{Elbow translate z*3 rotate y*90 rotate x*-90 translate -x*3 translate -y*3  translate <-24,80,-14.6277>}
cylinder{<-3.29341,80,-14.6277>,<9.63554,80,-14.6277>,0.6}
cylinder{<-9.29341,80,-14.6277>,<-3.29341,80,-14.6277>,0.6}
cylinder{<12.6355,80,-11.6277>,<12.6355,80,0.880881>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.748436 rotate y*90*1 translate<12.6355,80,-11.2882> }
object{Deco[4] scale 0.6 rotate x*360*0.551919 rotate y*90*1 translate<12.6355,80,-10.7033> }
object{Deco[0] scale 0.6 rotate x*360*0.144717 rotate y*90*1 translate<12.6355,80,-10.2547> }
object{Deco[1] scale 0.6 rotate x*360*0.773872 rotate y*90*1 translate<12.6355,80,-10.158> }
object{Deco[0] scale 0.6 rotate x*360*0.558877 rotate y*90*1 translate<12.6355,80,-10.0829> }
object{Deco[4] scale 0.6 rotate x*360*0.896895 rotate y*90*1 translate<12.6355,80,-9.91274> }
object{Deco[2] scale 0.6 rotate x*360*0.904765 rotate y*90*1 translate<12.6355,80,-9.39551> }
object{Deco[5] scale 0.6 rotate x*360*0.517143 rotate y*90*1 translate<12.6355,80,-9.18687> }
object{Deco[1] scale 0.6 rotate x*360*0.413689 rotate y*90*1 translate<12.6355,80,-8.6655> }
object{Deco[4] scale 0.6 rotate x*360*0.221277 rotate y*90*1 translate<12.6355,80,-8.63706> }
object{Deco[2] scale 0.6 rotate x*360*0.0551185 rotate y*90*1 translate<12.6355,80,-8.43779> }
object{Deco[2] scale 0.6 rotate x*360*0.707703 rotate y*90*1 translate<12.6355,80,-7.98651> }
object{Deco[1] scale 0.6 rotate x*360*0.157674 rotate y*90*1 translate<12.6355,80,-7.55263> }
object{Deco[6] scale 0.6 rotate x*360*0.627786 rotate y*90*1 translate<12.6355,80,-7.13879> }
object{Deco[1] scale 0.6 rotate x*360*0.610868 rotate y*90*1 translate<12.6355,80,-6.6008> }
object{Deco[1] scale 0.6 rotate x*360*0.853234 rotate y*90*1 translate<12.6355,80,-6.42465> }
object{Deco[2] scale 0.6 rotate x*360*0.611117 rotate y*90*1 translate<12.6355,80,-6.09144> }
object{Deco[4] scale 0.6 rotate x*360*0.158047 rotate y*90*1 translate<12.6355,80,-6.05288> }
object{Deco[6] scale 0.6 rotate x*360*0.975093 rotate y*90*1 translate<12.6355,80,-5.8899> }
object{Deco[0] scale 0.6 rotate x*360*0.405971 rotate y*90*1 translate<12.6355,80,-5.67265> }
object{Elbow rotate y*-90 translate -x*3  translate <12.6355,80,-11.6277>}
cylinder{<12.6355,80,6.88088>,<12.6355,80,13.318>,0.6}
cylinder{<12.6355,80,0.880881>,<12.6355,80,6.88088>,0.6}
cylinder{<12.6355,80,19.318>,<12.6355,80,32.5514>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.914238 rotate y*90*1 translate<12.6355,80,19.7195> }
object{Deco[3] scale 0.6 rotate x*360*0.97724 rotate y*90*1 translate<12.6355,80,20.0486> }
object{Deco[2] scale 0.6 rotate x*360*0.706949 rotate y*90*1 translate<12.6355,80,20.1601> }
object{Deco[3] scale 0.6 rotate x*360*0.995188 rotate y*90*1 translate<12.6355,80,20.5222> }
object{Deco[0] scale 0.6 rotate x*360*0.474893 rotate y*90*1 translate<12.6355,80,20.9463> }
object{Deco[0] scale 0.6 rotate x*360*0.39099 rotate y*90*1 translate<12.6355,80,21.5224> }
object{Deco[2] scale 0.6 rotate x*360*0.739672 rotate y*90*1 translate<12.6355,80,21.8264> }
object{Deco[3] scale 0.6 rotate x*360*0.445117 rotate y*90*1 translate<12.6355,80,22.0957> }
object{Deco[6] scale 0.6 rotate x*360*0.680366 rotate y*90*1 translate<12.6355,80,22.4338> }
object{Deco[4] scale 0.6 rotate x*360*0.0783926 rotate y*90*1 translate<12.6355,80,22.7231> }
object{Deco[4] scale 0.6 rotate x*360*0.942435 rotate y*90*1 translate<12.6355,80,23.3075> }
object{Deco[5] scale 0.6 rotate x*360*0.0430457 rotate y*90*1 translate<12.6355,80,23.5521> }
object{Deco[5] scale 0.6 rotate x*360*0.846098 rotate y*90*1 translate<12.6355,80,24.0798> }
object{Deco[1] scale 0.6 rotate x*360*0.111101 rotate y*90*1 translate<12.6355,80,24.3809> }
object{Deco[2] scale 0.6 rotate x*360*0.718452 rotate y*90*1 translate<12.6355,80,24.7257> }
object{Deco[0] scale 0.6 rotate x*360*0.935022 rotate y*90*1 translate<12.6355,80,25.2322> }
object{Deco[6] scale 0.6 rotate x*360*0.406571 rotate y*90*1 translate<12.6355,80,25.6866> }
object{Deco[2] scale 0.6 rotate x*360*0.287762 rotate y*90*1 translate<12.6355,80,26.2863> }
object{Deco[4] scale 0.6 rotate x*360*0.838418 rotate y*90*1 translate<12.6355,80,26.7097> }
object{Deco[1] scale 0.6 rotate x*360*0.241922 rotate y*90*1 translate<12.6355,80,26.8278> }
cylinder{<12.6355,80,13.318>,<12.6355,80,19.318>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.0970058 rotate y*90*1 translate<12.6355,80,13.5086> }
object{Deco[3] scale 0.6 rotate x*360*0.58305 rotate y*90*1 translate<12.6355,80,13.6558> }
object{Deco[3] scale 0.6 rotate x*360*0.67348 rotate y*90*1 translate<12.6355,80,13.9006> }
object{Deco[5] scale 0.6 rotate x*360*0.9328 rotate y*90*1 translate<12.6355,80,14.0479> }
object{Deco[0] scale 0.6 rotate x*360*0.679008 rotate y*90*1 translate<12.6355,80,14.305> }
object{Deco[2] scale 0.6 rotate x*360*0.74612 rotate y*90*1 translate<12.6355,80,14.4868> }
object{Deco[1] scale 0.6 rotate x*360*0.636217 rotate y*90*1 translate<12.6355,80,14.5308> }
object{Deco[0] scale 0.6 rotate x*360*0.105467 rotate y*90*1 translate<12.6355,80,14.7546> }
object{Deco[6] scale 0.6 rotate x*360*0.350788 rotate y*90*1 translate<12.6355,80,14.8061> }
object{Deco[4] scale 0.6 rotate x*360*0.126594 rotate y*90*1 translate<12.6355,80,14.8603> }
object{Deco[6] scale 0.6 rotate x*360*0.0952521 rotate y*90*1 translate<12.6355,80,15.0361> }
object{Deco[0] scale 0.6 rotate x*360*0.377424 rotate y*90*1 translate<12.6355,80,15.2199> }
object{Deco[5] scale 0.6 rotate x*360*0.232572 rotate y*90*1 translate<12.6355,80,15.5038> }
object{Deco[2] scale 0.6 rotate x*360*0.0562143 rotate y*90*1 translate<12.6355,80,15.7535> }
object{Deco[6] scale 0.6 rotate x*360*0.279119 rotate y*90*1 translate<12.6355,80,15.8015> }
object{Deco[6] scale 0.6 rotate x*360*0.340265 rotate y*90*1 translate<12.6355,80,15.8626> }
object{Deco[3] scale 0.6 rotate x*360*0.567834 rotate y*90*1 translate<12.6355,80,15.976> }
object{Deco[0] scale 0.6 rotate x*360*0.364286 rotate y*90*1 translate<12.6355,80,16.0264> }
object{Deco[5] scale 0.6 rotate x*360*0.935018 rotate y*90*1 translate<12.6355,80,16.098> }
object{Deco[5] scale 0.6 rotate x*360*0.280685 rotate y*90*1 translate<12.6355,80,16.2064> }
cylinder{<15.6355,80,35.5514>,<24,80,35.5514>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.659305 scale <1,1,1> translate<15.847,80,35.5514> }
object{Deco[5] scale 0.6 rotate x*360*0.137872 scale <1,1,1> translate<16.1876,80,35.5514> }
object{Deco[1] scale 0.6 rotate x*360*0.594653 scale <1,1,1> translate<16.4895,80,35.5514> }
object{Deco[1] scale 0.6 rotate x*360*0.330639 scale <1,1,1> translate<16.737,80,35.5514> }
object{Deco[0] scale 0.6 rotate x*360*0.577899 scale <1,1,1> translate<17.0485,80,35.5514> }
object{Deco[6] scale 0.6 rotate x*360*0.102046 scale <1,1,1> translate<17.3771,80,35.5514> }
object{Deco[6] scale 0.6 rotate x*360*0.474282 scale <1,1,1> translate<17.7183,80,35.5514> }
object{Deco[3] scale 0.6 rotate x*360*0.158731 scale <1,1,1> translate<18.0305,80,35.5514> }
object{Deco[4] scale 0.6 rotate x*360*0.815822 scale <1,1,1> translate<18.094,80,35.5514> }
object{Deco[5] scale 0.6 rotate x*360*0.452536 scale <1,1,1> translate<18.4718,80,35.5514> }
object{Deco[6] scale 0.6 rotate x*360*0.706453 scale <1,1,1> translate<18.7785,80,35.5514> }
object{Deco[1] scale 0.6 rotate x*360*0.672212 scale <1,1,1> translate<18.9495,80,35.5514> }
object{Deco[4] scale 0.6 rotate x*360*0.282279 scale <1,1,1> translate<19.0092,80,35.5514> }
object{Deco[3] scale 0.6 rotate x*360*0.949125 scale <1,1,1> translate<19.053,80,35.5514> }
object{Deco[1] scale 0.6 rotate x*360*0.969768 scale <1,1,1> translate<19.3723,80,35.5514> }
object{Deco[2] scale 0.6 rotate x*360*0.114975 scale <1,1,1> translate<19.4825,80,35.5514> }
object{Deco[4] scale 0.6 rotate x*360*0.953605 scale <1,1,1> translate<19.4941,80,35.5514> }
object{Deco[0] scale 0.6 rotate x*360*0.12397 scale <1,1,1> translate<19.4977,80,35.5514> }
object{Deco[6] scale 0.6 rotate x*360*0.098978 scale <1,1,1> translate<19.7718,80,35.5514> }
object{Deco[5] scale 0.6 rotate x*360*0.784081 scale <1,1,1> translate<20.1512,80,35.5514> }
object{Elbow scale <1,1,-1> translate -z*3  translate <15.6355,80,35.5514>}
cylinder{<27,80,38.5514>,<27,80,37.5>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.273167 rotate y*90*1 translate<27,80,38.5956> }
object{Deco[6] scale 0.6 rotate x*360*0.7283 rotate y*90*1 translate<27,80,38.6103> }
object{Deco[4] scale 0.6 rotate x*360*0.958321 rotate y*90*1 translate<27,80,38.6597> }
object{Deco[2] scale 0.6 rotate x*360*0.677749 rotate y*90*1 translate<27,80,38.6758> }
object{Deco[5] scale 0.6 rotate x*360*0.657108 rotate y*90*1 translate<27,80,38.7209> }
object{Deco[5] scale 0.6 rotate x*360*0.0202889 rotate y*90*1 translate<27,80,38.7224> }
object{Deco[0] scale 0.6 rotate x*360*0.1087 rotate y*90*1 translate<27,80,38.7485> }
object{Deco[3] scale 0.6 rotate x*360*0.116861 rotate y*90*1 translate<27,80,38.7817> }
object{Deco[5] scale 0.6 rotate x*360*0.134228 rotate y*90*1 translate<27,80,38.7829> }
object{Deco[3] scale 0.6 rotate x*360*0.0940071 rotate y*90*1 translate<27,80,38.8095> }
object{Deco[1] scale 0.6 rotate x*360*0.925963 rotate y*90*1 translate<27,80,38.846> }
object{Deco[4] scale 0.6 rotate x*360*0.17415 rotate y*90*1 translate<27,80,38.8805> }
object{Deco[1] scale 0.6 rotate x*360*0.410299 rotate y*90*1 translate<27,80,38.923> }
object{Deco[0] scale 0.6 rotate x*360*0.745877 rotate y*90*1 translate<27,80,38.953> }
object{Deco[1] scale 0.6 rotate x*360*0.709572 rotate y*90*1 translate<27,80,38.9764> }
object{Deco[2] scale 0.6 rotate x*360*0.0718128 rotate y*90*1 translate<27,80,39.0254> }
object{Deco[1] scale 0.6 rotate x*360*0.71699 rotate y*90*1 translate<27,80,39.0456> }
object{Deco[6] scale 0.6 rotate x*360*0.595139 rotate y*90*1 translate<27,80,39.0561> }
object{Deco[4] scale 0.6 rotate x*360*0.514776 rotate y*90*1 translate<27,80,39.0731> }
object{Deco[1] scale 0.6 rotate x*360*0.939613 rotate y*90*1 translate<27,80,39.0805> }
object{Elbow rotate y*-90 translate -x*3  translate <27,80,38.5514>}
cylinder{<24,80,40.5>,<16.7777,80,40.5>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.89744 scale <-1,1,1> translate<23.9586,80,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.946879 scale <-1,1,1> translate<23.6268,80,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.549819 scale <-1,1,1> translate<23.4022,80,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.593655 scale <-1,1,1> translate<23.3341,80,40.5> }
object{Deco[5] scale 0.6 rotate x*360*0.193729 scale <-1,1,1> translate<23.0657,80,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.564937 scale <-1,1,1> translate<22.8278,80,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.317361 scale <-1,1,1> translate<22.8081,80,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.982704 scale <-1,1,1> translate<22.6775,80,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.180777 scale <-1,1,1> translate<22.4024,80,40.5> }
object{Deco[6] scale 0.6 rotate x*360*0.353096 scale <-1,1,1> translate<22.248,80,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.10596 scale <-1,1,1> translate<22.1531,80,40.5> }
object{Deco[1] scale 0.6 rotate x*360*0.0449562 scale <-1,1,1> translate<21.9491,80,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.95798 scale <-1,1,1> translate<21.7583,80,40.5> }
object{Deco[4] scale 0.6 rotate x*360*0.769739 scale <-1,1,1> translate<21.6204,80,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.226087 scale <-1,1,1> translate<21.5812,80,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.965242 scale <-1,1,1> translate<21.5539,80,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.235622 scale <-1,1,1> translate<21.3302,80,40.5> }
object{Deco[2] scale 0.6 rotate x*360*0.900661 scale <-1,1,1> translate<21.2351,80,40.5> }
object{Deco[3] scale 0.6 rotate x*360*0.432754 scale <-1,1,1> translate<21.1722,80,40.5> }
object{Deco[0] scale 0.6 rotate x*360*0.618338 scale <-1,1,1> translate<20.9764,80,40.5> }
object{Elbow scale <-1,1,-1> translate -z*3  translate <24,80,40.5>}
cylinder{<13.7777,80,37.5>,<13.7777,80,24.5054>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.385304 rotate y*90*-1 translate<13.7777,80,37.3782> }
object{Deco[6] scale 0.6 rotate x*360*0.297411 rotate y*90*-1 translate<13.7777,80,37.3345> }
object{Deco[2] scale 0.6 rotate x*360*0.645062 rotate y*90*-1 translate<13.7777,80,36.9872> }
object{Deco[6] scale 0.6 rotate x*360*0.602199 rotate y*90*-1 translate<13.7777,80,36.9488> }
object{Deco[5] scale 0.6 rotate x*360*0.515627 rotate y*90*-1 translate<13.7777,80,36.7139> }
object{Deco[3] scale 0.6 rotate x*360*0.813921 rotate y*90*-1 translate<13.7777,80,36.4509> }
object{Deco[3] scale 0.6 rotate x*360*0.817925 rotate y*90*-1 translate<13.7777,80,36.3517> }
object{Deco[1] scale 0.6 rotate x*360*0.252002 rotate y*90*-1 translate<13.7777,80,36.1538> }
object{Deco[2] scale 0.6 rotate x*360*0.810696 rotate y*90*-1 translate<13.7777,80,35.6303> }
object{Deco[6] scale 0.6 rotate x*360*0.783638 rotate y*90*-1 translate<13.7777,80,35.5166> }
object{Deco[0] scale 0.6 rotate x*360*0.528899 rotate y*90*-1 translate<13.7777,80,35.1997> }
object{Deco[1] scale 0.6 rotate x*360*0.124566 rotate y*90*-1 translate<13.7777,80,34.7155> }
object{Deco[5] scale 0.6 rotate x*360*0.536986 rotate y*90*-1 translate<13.7777,80,34.6216> }
object{Deco[5] scale 0.6 rotate x*360*0.864453 rotate y*90*-1 translate<13.7777,80,34.299> }
object{Deco[6] scale 0.6 rotate x*360*0.0537095 rotate y*90*-1 translate<13.7777,80,33.8771> }
object{Deco[1] scale 0.6 rotate x*360*0.882078 rotate y*90*-1 translate<13.7777,80,33.3787> }
object{Deco[1] scale 0.6 rotate x*360*0.472525 rotate y*90*-1 translate<13.7777,80,32.8314> }
object{Deco[0] scale 0.6 rotate x*360*0.144558 rotate y*90*-1 translate<13.7777,80,32.6602> }
object{Deco[0] scale 0.6 rotate x*360*0.720556 rotate y*90*-1 translate<13.7777,80,32.3602> }
object{Deco[4] scale 0.6 rotate x*360*0.409297 rotate y*90*-1 translate<13.7777,80,32.1556> }
object{Elbow scale <1,1,-1> translate x*3  translate <13.7777,80,37.5>}
cylinder{<13.7777,80,18.5054>,<13.7777,80,8.44596>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.4478 rotate y*90*-1 translate<13.7777,80,18.0349> }
object{Deco[3] scale 0.6 rotate x*360*0.0375651 rotate y*90*-1 translate<13.7777,80,17.9728> }
object{Deco[4] scale 0.6 rotate x*360*0.581878 rotate y*90*-1 translate<13.7777,80,17.5548> }
object{Deco[4] scale 0.6 rotate x*360*0.535995 rotate y*90*-1 translate<13.7777,80,17.3311> }
object{Deco[4] scale 0.6 rotate x*360*0.247098 rotate y*90*-1 translate<13.7777,80,17.0934> }
object{Deco[4] scale 0.6 rotate x*360*0.114019 rotate y*90*-1 translate<13.7777,80,16.7097> }
object{Deco[2] scale 0.6 rotate x*360*0.981884 rotate y*90*-1 translate<13.7777,80,16.3396> }
object{Deco[6] scale 0.6 rotate x*360*0.281261 rotate y*90*-1 translate<13.7777,80,16.3154> }
object{Deco[0] scale 0.6 rotate x*360*0.446557 rotate y*90*-1 translate<13.7777,80,16.18> }
object{Deco[3] scale 0.6 rotate x*360*0.509478 rotate y*90*-1 translate<13.7777,80,15.9052> }
object{Deco[6] scale 0.6 rotate x*360*0.327307 rotate y*90*-1 translate<13.7777,80,15.6817> }
object{Deco[5] scale 0.6 rotate x*360*0.526569 rotate y*90*-1 translate<13.7777,80,15.249> }
object{Deco[3] scale 0.6 rotate x*360*0.305548 rotate y*90*-1 translate<13.7777,80,14.9355> }
object{Deco[0] scale 0.6 rotate x*360*0.809449 rotate y*90*-1 translate<13.7777,80,14.8243> }
object{Deco[2] scale 0.6 rotate x*360*0.823735 rotate y*90*-1 translate<13.7777,80,14.4081> }
object{Deco[0] scale 0.6 rotate x*360*0.273966 rotate y*90*-1 translate<13.7777,80,13.9803> }
object{Deco[2] scale 0.6 rotate x*360*0.703918 rotate y*90*-1 translate<13.7777,80,13.9791> }
object{Deco[4] scale 0.6 rotate x*360*0.965682 rotate y*90*-1 translate<13.7777,80,13.8975> }
object{Deco[0] scale 0.6 rotate x*360*0.914568 rotate y*90*-1 translate<13.7777,80,13.6153> }
object{Deco[6] scale 0.6 rotate x*360*0.868831 rotate y*90*-1 translate<13.7777,80,13.519> }
cylinder{<13.7777,80,24.5054>,<13.7777,80,18.5054>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.747024 rotate y*90*-1 translate<13.7777,80,24.4218> }
object{Deco[2] scale 0.6 rotate x*360*0.334564 rotate y*90*-1 translate<13.7777,80,24.274> }
object{Deco[2] scale 0.6 rotate x*360*0.667797 rotate y*90*-1 translate<13.7777,80,24.1991> }
object{Deco[1] scale 0.6 rotate x*360*0.146166 rotate y*90*-1 translate<13.7777,80,24.0487> }
object{Deco[1] scale 0.6 rotate x*360*0.969413 rotate y*90*-1 translate<13.7777,80,23.7858> }
object{Deco[1] scale 0.6 rotate x*360*0.450862 rotate y*90*-1 translate<13.7777,80,23.5076> }
object{Deco[0] scale 0.6 rotate x*360*0.362981 rotate y*90*-1 translate<13.7777,80,23.3932> }
object{Deco[6] scale 0.6 rotate x*360*0.757569 rotate y*90*-1 translate<13.7777,80,23.1756> }
object{Deco[3] scale 0.6 rotate x*360*0.65275 rotate y*90*-1 translate<13.7777,80,23.1578> }
object{Deco[0] scale 0.6 rotate x*360*0.489942 rotate y*90*-1 translate<13.7777,80,23.0324> }
object{Deco[3] scale 0.6 rotate x*360*0.91904 rotate y*90*-1 translate<13.7777,80,23.0242> }
object{Deco[2] scale 0.6 rotate x*360*0.256984 rotate y*90*-1 translate<13.7777,80,22.7839> }
object{Deco[1] scale 0.6 rotate x*360*0.0236364 rotate y*90*-1 translate<13.7777,80,22.5216> }
object{Deco[1] scale 0.6 rotate x*360*0.621585 rotate y*90*-1 translate<13.7777,80,22.3059> }
object{Deco[3] scale 0.6 rotate x*360*0.0534977 rotate y*90*-1 translate<13.7777,80,22.1271> }
object{Deco[6] scale 0.6 rotate x*360*0.773374 rotate y*90*-1 translate<13.7777,80,21.9231> }
object{Deco[0] scale 0.6 rotate x*360*0.346931 rotate y*90*-1 translate<13.7777,80,21.7877> }
object{Deco[3] scale 0.6 rotate x*360*0.708544 rotate y*90*-1 translate<13.7777,80,21.7454> }
object{Deco[1] scale 0.6 rotate x*360*0.313793 rotate y*90*-1 translate<13.7777,80,21.7082> }
object{Deco[2] scale 0.6 rotate x*360*0.348421 rotate y*90*-1 translate<13.7777,80,21.5229> }
cylinder{<13.7777,80,2.44596>,<13.7777,80,-4.99694>,0.6}
cylinder{<13.7777,80,8.44596>,<13.7777,80,2.44596>,0.6}
cylinder{<10.7777,80,-7.99694>,<2.42145,80,-7.99694>,0.6}
object{Elbow scale <-1,1,1> translate z*3  translate <10.7777,80,-7.99694>}
cylinder{<-3.57855,80,-7.99694>,<-10.2137,80,-7.99694>,0.6}
cylinder{<2.42145,80,-7.99694>,<-3.57855,80,-7.99694>,0.6}
cylinder{<-16.2137,80,-7.99694>,<-24,80,-7.99694>,0.6}
cylinder{<-10.2137,80,-7.99694>,<-16.2137,80,-7.99694>,0.6}
cylinder{<-27,80,-10.9969>,<-27,80,-18.7203>,0.6}
object{Elbow scale <1,1,-1> translate x*3  translate <-27,80,-10.9969>}
cylinder{<-27,80,-24.7203>,<-27,80,-36.8129>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.787073 rotate y*90*-1 translate<-27,80,-24.8461> }
object{Deco[1] scale 0.6 rotate x*360*0.492338 rotate y*90*-1 translate<-27,80,-25.3997> }
object{Deco[4] scale 0.6 rotate x*360*0.123281 rotate y*90*-1 translate<-27,80,-25.4574> }
object{Deco[1] scale 0.6 rotate x*360*0.346579 rotate y*90*-1 translate<-27,80,-25.8073> }
object{Deco[2] scale 0.6 rotate x*360*0.774602 rotate y*90*-1 translate<-27,80,-25.8999> }
object{Deco[3] scale 0.6 rotate x*360*0.0998046 rotate y*90*-1 translate<-27,80,-26.0777> }
object{Deco[2] scale 0.6 rotate x*360*0.115261 rotate y*90*-1 translate<-27,80,-26.2931> }
object{Deco[1] scale 0.6 rotate x*360*0.192668 rotate y*90*-1 translate<-27,80,-26.7647> }
object{Deco[5] scale 0.6 rotate x*360*0.279719 rotate y*90*-1 translate<-27,80,-27.1917> }
object{Deco[2] scale 0.6 rotate x*360*0.703388 rotate y*90*-1 translate<-27,80,-27.4301> }
object{Deco[3] scale 0.6 rotate x*360*0.32205 rotate y*90*-1 translate<-27,80,-27.9594> }
object{Deco[4] scale 0.6 rotate x*360*0.075752 rotate y*90*-1 translate<-27,80,-28.4591> }
object{Deco[6] scale 0.6 rotate x*360*0.063983 rotate y*90*-1 translate<-27,80,-29.0311> }
object{Deco[5] scale 0.6 rotate x*360*0.0901676 rotate y*90*-1 translate<-27,80,-29.1427> }
object{Deco[5] scale 0.6 rotate x*360*0.114661 rotate y*90*-1 translate<-27,80,-29.3193> }
object{Deco[3] scale 0.6 rotate x*360*0.632589 rotate y*90*-1 translate<-27,80,-29.8043> }
object{Deco[4] scale 0.6 rotate x*360*0.0109506 rotate y*90*-1 translate<-27,80,-30.1819> }
object{Deco[2] scale 0.6 rotate x*360*0.699904 rotate y*90*-1 translate<-27,80,-30.3796> }
object{Deco[6] scale 0.6 rotate x*360*0.932056 rotate y*90*-1 translate<-27,80,-30.7749> }
object{Deco[0] scale 0.6 rotate x*360*0.0969868 rotate y*90*-1 translate<-27,80,-31.137> }
cylinder{<-27,80,-18.7203>,<-27,80,-24.7203>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.798601 rotate y*90*-1 translate<-27,80,-18.7909> }
object{Deco[4] scale 0.6 rotate x*360*0.992534 rotate y*90*-1 translate<-27,80,-18.9392> }
object{Deco[2] scale 0.6 rotate x*360*0.0868759 rotate y*90*-1 translate<-27,80,-19.1123> }
object{Deco[0] scale 0.6 rotate x*360*0.970518 rotate y*90*-1 translate<-27,80,-19.3066> }
object{Deco[1] scale 0.6 rotate x*360*0.186016 rotate y*90*-1 translate<-27,80,-19.3456> }
object{Deco[3] scale 0.6 rotate x*360*0.00414136 rotate y*90*-1 translate<-27,80,-19.5764> }
object{Deco[3] scale 0.6 rotate x*360*0.911981 rotate y*90*-1 translate<-27,80,-19.6099> }
object{Deco[3] scale 0.6 rotate x*360*0.952025 rotate y*90*-1 translate<-27,80,-19.7402> }
object{Deco[3] scale 0.6 rotate x*360*0.679949 rotate y*90*-1 translate<-27,80,-19.7403> }
object{Deco[5] scale 0.6 rotate x*360*0.294524 rotate y*90*-1 translate<-27,80,-19.9734> }
object{Deco[4] scale 0.6 rotate x*360*0.138445 rotate y*90*-1 translate<-27,80,-20.1688> }
object{Deco[0] scale 0.6 rotate x*360*0.954038 rotate y*90*-1 translate<-27,80,-20.3102> }
object{Deco[0] scale 0.6 rotate x*360*0.596894 rotate y*90*-1 translate<-27,80,-20.3986> }
object{Deco[4] scale 0.6 rotate x*360*0.739493 rotate y*90*-1 translate<-27,80,-20.6711> }
object{Deco[0] scale 0.6 rotate x*360*0.645616 rotate y*90*-1 translate<-27,80,-20.8589> }
object{Deco[5] scale 0.6 rotate x*360*0.284233 rotate y*90*-1 translate<-27,80,-20.946> }
object{Deco[4] scale 0.6 rotate x*360*0.786292 rotate y*90*-1 translate<-27,80,-21.1559> }
object{Deco[3] scale 0.6 rotate x*360*0.871024 rotate y*90*-1 translate<-27,80,-21.3693> }
object{Deco[4] scale 0.6 rotate x*360*0.973869 rotate y*90*-1 translate<-27,80,-21.4644> }
object{Deco[6] scale 0.6 rotate x*360*0.320052 rotate y*90*-1 translate<-27,80,-21.6209> }
cylinder{<-27,77,-39.8129>,<-27,69.2413,-39.8129>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.711208 rotate z*90*-1 translate<-27,76.804,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.63987 rotate z*90*-1 translate<-27,76.5386,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.305274 rotate z*90*-1 translate<-27,76.4497,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.948187 rotate z*90*-1 translate<-27,76.3556,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.323592 rotate z*90*-1 translate<-27,76.2126,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.876267 rotate z*90*-1 translate<-27,76.082,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.73932 rotate z*90*-1 translate<-27,75.9525,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.331381 rotate z*90*-1 translate<-27,75.6783,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.903779 rotate z*90*-1 translate<-27,75.3128,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.849749 rotate z*90*-1 translate<-27,75.0938,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.506041 rotate z*90*-1 translate<-27,74.8573,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.0562053 rotate z*90*-1 translate<-27,74.665,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.62586 rotate z*90*-1 translate<-27,74.6392,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.930287 rotate z*90*-1 translate<-27,74.432,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.311209 rotate z*90*-1 translate<-27,74.3037,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.557564 rotate z*90*-1 translate<-27,74.1782,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.350962 rotate z*90*-1 translate<-27,74.0951,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.358521 rotate z*90*-1 translate<-27,74.0705,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.879079 rotate z*90*-1 translate<-27,73.8687,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.171094 rotate z*90*-1 translate<-27,73.5821,-39.8129> }
object{Elbow translate z*3 rotate -z*90 translate <-27,77,-39.8129>}
cylinder{<-27,63.2413,-39.8129>,<-27,45.3021,-39.8129>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.44183 rotate z*90*-1 translate<-27,62.4281,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.751939 rotate z*90*-1 translate<-27,62.1242,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.583064 rotate z*90*-1 translate<-27,61.5399,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.171494 rotate z*90*-1 translate<-27,60.7596,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.15629 rotate z*90*-1 translate<-27,60.5567,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.855777 rotate z*90*-1 translate<-27,60.0849,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.573225 rotate z*90*-1 translate<-27,60.0587,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.396135 rotate z*90*-1 translate<-27,59.2149,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.407136 rotate z*90*-1 translate<-27,58.8983,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.770123 rotate z*90*-1 translate<-27,58.5364,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.662489 rotate z*90*-1 translate<-27,58.3137,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.605377 rotate z*90*-1 translate<-27,58.1071,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.712151 rotate z*90*-1 translate<-27,57.7207,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.402238 rotate z*90*-1 translate<-27,57.1514,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.677176 rotate z*90*-1 translate<-27,56.4679,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.362725 rotate z*90*-1 translate<-27,56.1814,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.013453 rotate z*90*-1 translate<-27,55.8703,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.536892 rotate z*90*-1 translate<-27,55.1195,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.785325 rotate z*90*-1 translate<-27,54.8181,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.131441 rotate z*90*-1 translate<-27,54.6896,-39.8129> }
cylinder{<-27,69.2413,-39.8129>,<-27,63.2413,-39.8129>,0.6}
object{Deco[0] scale 0.6 rotate x*360*0.86115 rotate z*90*-1 translate<-27,69.0214,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.0920337 rotate z*90*-1 translate<-27,68.9497,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.872252 rotate z*90*-1 translate<-27,68.7207,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.0326552 rotate z*90*-1 translate<-27,68.4387,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.54719 rotate z*90*-1 translate<-27,68.3279,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.305138 rotate z*90*-1 translate<-27,68.1926,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.780354 rotate z*90*-1 translate<-27,68.0908,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.0419643 rotate z*90*-1 translate<-27,68.0051,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.830034 rotate z*90*-1 translate<-27,67.776,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.428331 rotate z*90*-1 translate<-27,67.6128,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.178797 rotate z*90*-1 translate<-27,67.5153,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.827626 rotate z*90*-1 translate<-27,67.4288,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.140766 rotate z*90*-1 translate<-27,67.3373,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.760434 rotate z*90*-1 translate<-27,67.163,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.0787158 rotate z*90*-1 translate<-27,67.0891,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.683483 rotate z*90*-1 translate<-27,67.0842,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.411285 rotate z*90*-1 translate<-27,66.8966,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.0940471 rotate z*90*-1 translate<-27,66.758,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.259546 rotate z*90*-1 translate<-27,66.7517,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.259733 rotate z*90*-1 translate<-27,66.5799,-39.8129> }
cylinder{<-27,39.3021,-39.8129>,<-27,27.3715,-39.8129>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.455262 rotate z*90*-1 translate<-27,38.7822,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.242089 rotate z*90*-1 translate<-27,38.2676,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.402156 rotate z*90*-1 translate<-27,38.1982,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.727247 rotate z*90*-1 translate<-27,38.1728,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.917237 rotate z*90*-1 translate<-27,37.7399,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.22899 rotate z*90*-1 translate<-27,37.2469,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.895168 rotate z*90*-1 translate<-27,36.8298,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.0126854 rotate z*90*-1 translate<-27,36.375,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.85721 rotate z*90*-1 translate<-27,35.8437,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.0280643 rotate z*90*-1 translate<-27,35.5546,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.787321 rotate z*90*-1 translate<-27,35.5071,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.422466 rotate z*90*-1 translate<-27,35.276,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.896921 rotate z*90*-1 translate<-27,35.2675,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.788111 rotate z*90*-1 translate<-27,35.2091,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.205651 rotate z*90*-1 translate<-27,34.7513,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.672812 rotate z*90*-1 translate<-27,34.2894,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.400651 rotate z*90*-1 translate<-27,33.7347,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.939215 rotate z*90*-1 translate<-27,33.671,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.926138 rotate z*90*-1 translate<-27,33.1595,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.121123 rotate z*90*-1 translate<-27,33.1274,-39.8129> }
cylinder{<-27,45.3021,-39.8129>,<-27,39.3021,-39.8129>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.47089 rotate z*90*-1 translate<-27,45.1012,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.559258 rotate z*90*-1 translate<-27,44.8821,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.276112 rotate z*90*-1 translate<-27,44.8246,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.865403 rotate z*90*-1 translate<-27,44.6688,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.792634 rotate z*90*-1 translate<-27,44.6384,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.725793 rotate z*90*-1 translate<-27,44.4658,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.486852 rotate z*90*-1 translate<-27,44.2886,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.274351 rotate z*90*-1 translate<-27,44.2711,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.841948 rotate z*90*-1 translate<-27,43.9869,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.806385 rotate z*90*-1 translate<-27,43.9734,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.137009 rotate z*90*-1 translate<-27,43.8526,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.526242 rotate z*90*-1 translate<-27,43.7992,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.224399 rotate z*90*-1 translate<-27,43.7774,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.890556 rotate z*90*-1 translate<-27,43.6758,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.577467 rotate z*90*-1 translate<-27,43.659,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.984716 rotate z*90*-1 translate<-27,43.6284,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.159008 rotate z*90*-1 translate<-27,43.4159,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.81646 rotate z*90*-1 translate<-27,43.2683,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.478284 rotate z*90*-1 translate<-27,43.1795,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.489614 rotate z*90*-1 translate<-27,42.8967,-39.8129> }
cylinder{<-27,21.3715,-39.8129>,<-27,12.5874,-39.8129>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.00254456 rotate z*90*-1 translate<-27,21.2153,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.17856 rotate z*90*-1 translate<-27,21.0081,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.221678 rotate z*90*-1 translate<-27,20.6365,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.987426 rotate z*90*-1 translate<-27,20.2638,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.0266197 rotate z*90*-1 translate<-27,19.8768,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.499689 rotate z*90*-1 translate<-27,19.6729,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.194478 rotate z*90*-1 translate<-27,19.4855,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.844484 rotate z*90*-1 translate<-27,19.3163,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.126554 rotate z*90*-1 translate<-27,19.0163,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.708183 rotate z*90*-1 translate<-27,19.0035,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.430212 rotate z*90*-1 translate<-27,18.7328,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.719213 rotate z*90*-1 translate<-27,18.4754,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.789165 rotate z*90*-1 translate<-27,18.1746,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.577511 rotate z*90*-1 translate<-27,17.7655,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.723349 rotate z*90*-1 translate<-27,17.6548,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.785193 rotate z*90*-1 translate<-27,17.566,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.313242 rotate z*90*-1 translate<-27,17.4982,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.945354 rotate z*90*-1 translate<-27,17.3535,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.0386321 rotate z*90*-1 translate<-27,17.1917,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.151584 rotate z*90*-1 translate<-27,16.8682,-39.8129> }
cylinder{<-27,27.3715,-39.8129>,<-27,21.3715,-39.8129>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.871127 rotate z*90*-1 translate<-27,27.3067,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.0542461 rotate z*90*-1 translate<-27,27.186,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.475501 rotate z*90*-1 translate<-27,27.0034,-39.8129> }
object{Deco[3] scale 0.6 rotate x*360*0.323394 rotate z*90*-1 translate<-27,26.9494,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.129872 rotate z*90*-1 translate<-27,26.6694,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.494744 rotate z*90*-1 translate<-27,26.4848,-39.8129> }
object{Deco[1] scale 0.6 rotate x*360*0.581134 rotate z*90*-1 translate<-27,26.3348,-39.8129> }
object{Deco[2] scale 0.6 rotate x*360*0.147096 rotate z*90*-1 translate<-27,26.1789,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.822587 rotate z*90*-1 translate<-27,26.0107,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.0792732 rotate z*90*-1 translate<-27,25.8099,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.527764 rotate z*90*-1 translate<-27,25.8064,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.194723 rotate z*90*-1 translate<-27,25.6497,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.910613 rotate z*90*-1 translate<-27,25.6317,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.224754 rotate z*90*-1 translate<-27,25.4759,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.919858 rotate z*90*-1 translate<-27,25.2596,-39.8129> }
object{Deco[6] scale 0.6 rotate x*360*0.789561 rotate z*90*-1 translate<-27,25.0271,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.227135 rotate z*90*-1 translate<-27,25.0107,-39.8129> }
object{Deco[5] scale 0.6 rotate x*360*0.672148 rotate z*90*-1 translate<-27,24.9279,-39.8129> }
object{Deco[4] scale 0.6 rotate x*360*0.246823 rotate z*90*-1 translate<-27,24.7551,-39.8129> }
object{Deco[0] scale 0.6 rotate x*360*0.126576 rotate z*90*-1 translate<-27,24.5816,-39.8129> }
cylinder{<-27,6.58744,-39.8129>,<-27,-6.15683,-39.8129>,0.6}
cylinder{<-27,12.5874,-39.8129>,<-27,6.58744,-39.8129>,0.6}
cylinder{<-27,-9.15683,-36.8129>,<-27,-9.15683,-28.5438>,0.6}
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*3  translate <-27,-9.15683,-36.8129>}
cylinder{<-27,-12.1568,-25.5438>,<-27,-25.6093,-25.5438>,0.6}
object{Elbow rotate y*90 rotate -z*90 translate -z*3  translate <-27,-12.1568,-25.5438>}
cylinder{<-27,-31.6093,-25.5438>,<-27,-39.8975,-25.5438>,0.6}
object{Deco[3] scale 0.6 rotate x*360*0.844446 rotate z*90*-1 translate<-27,-31.9913,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.607371 rotate z*90*-1 translate<-27,-32.0472,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.697425 rotate z*90*-1 translate<-27,-32.156,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.426 rotate z*90*-1 translate<-27,-32.3591,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.266108 rotate z*90*-1 translate<-27,-32.5101,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.702506 rotate z*90*-1 translate<-27,-32.681,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.398451 rotate z*90*-1 translate<-27,-32.9638,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.359199 rotate z*90*-1 translate<-27,-33.2042,-25.5438> }
object{Deco[2] scale 0.6 rotate x*360*0.565361 rotate z*90*-1 translate<-27,-33.213,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.86165 rotate z*90*-1 translate<-27,-33.4763,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.363076 rotate z*90*-1 translate<-27,-33.5547,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.630083 rotate z*90*-1 translate<-27,-33.7689,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.283188 rotate z*90*-1 translate<-27,-33.8241,-25.5438> }
object{Deco[3] scale 0.6 rotate x*360*0.499856 rotate z*90*-1 translate<-27,-33.8593,-25.5438> }
object{Deco[2] scale 0.6 rotate x*360*0.482385 rotate z*90*-1 translate<-27,-33.9111,-25.5438> }
object{Deco[3] scale 0.6 rotate x*360*0.132521 rotate z*90*-1 translate<-27,-34.1037,-25.5438> }
object{Deco[2] scale 0.6 rotate x*360*0.179464 rotate z*90*-1 translate<-27,-34.4521,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.623671 rotate z*90*-1 translate<-27,-34.7489,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.179249 rotate z*90*-1 translate<-27,-34.8859,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.218847 rotate z*90*-1 translate<-27,-35.2572,-25.5438> }
cylinder{<-27,-25.6093,-25.5438>,<-27,-31.6093,-25.5438>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.184187 rotate z*90*-1 translate<-27,-25.8646,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.0965795 rotate z*90*-1 translate<-27,-25.9308,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.817078 rotate z*90*-1 translate<-27,-26.0701,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.170875 rotate z*90*-1 translate<-27,-26.2908,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.955158 rotate z*90*-1 translate<-27,-26.3146,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.866359 rotate z*90*-1 translate<-27,-26.5559,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.879084 rotate z*90*-1 translate<-27,-26.7828,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.390633 rotate z*90*-1 translate<-27,-26.8827,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.182729 rotate z*90*-1 translate<-27,-26.9821,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.232476 rotate z*90*-1 translate<-27,-27.1438,-25.5438> }
object{Deco[3] scale 0.6 rotate x*360*0.183673 rotate z*90*-1 translate<-27,-27.1995,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.0139451 rotate z*90*-1 translate<-27,-27.3579,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.0322465 rotate z*90*-1 translate<-27,-27.4283,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.481645 rotate z*90*-1 translate<-27,-27.4593,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.651594 rotate z*90*-1 translate<-27,-27.6943,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.899999 rotate z*90*-1 translate<-27,-27.9178,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.364815 rotate z*90*-1 translate<-27,-28.1744,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.469675 rotate z*90*-1 translate<-27,-28.4203,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.390476 rotate z*90*-1 translate<-27,-28.523,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.200009 rotate z*90*-1 translate<-27,-28.5933,-25.5438> }
cylinder{<-27,-45.8975,-25.5438>,<-27,-62.9135,-25.5438>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.340998 rotate z*90*-1 translate<-27,-46.4055,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.71276 rotate z*90*-1 translate<-27,-47.1978,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.431994 rotate z*90*-1 translate<-27,-47.2888,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.859671 rotate z*90*-1 translate<-27,-48.0652,-25.5438> }
object{Deco[3] scale 0.6 rotate x*360*0.774444 rotate z*90*-1 translate<-27,-48.5109,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.602826 rotate z*90*-1 translate<-27,-49.2573,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.739127 rotate z*90*-1 translate<-27,-49.3788,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.942115 rotate z*90*-1 translate<-27,-49.7415,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.988134 rotate z*90*-1 translate<-27,-49.7818,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.903839 rotate z*90*-1 translate<-27,-50.3805,-25.5438> }
object{Deco[3] scale 0.6 rotate x*360*0.0881198 rotate z*90*-1 translate<-27,-50.8559,-25.5438> }
object{Deco[2] scale 0.6 rotate x*360*0.802552 rotate z*90*-1 translate<-27,-51.0144,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.101555 rotate z*90*-1 translate<-27,-51.7972,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.854604 rotate z*90*-1 translate<-27,-52.2361,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.344051 rotate z*90*-1 translate<-27,-52.4532,-25.5438> }
object{Deco[3] scale 0.6 rotate x*360*0.89546 rotate z*90*-1 translate<-27,-53.1821,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.727348 rotate z*90*-1 translate<-27,-53.6156,-25.5438> }
object{Deco[3] scale 0.6 rotate x*360*0.0397814 rotate z*90*-1 translate<-27,-54.3024,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.503003 rotate z*90*-1 translate<-27,-54.8742,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.967988 rotate z*90*-1 translate<-27,-55.4317,-25.5438> }
cylinder{<-27,-39.8975,-25.5438>,<-27,-45.8975,-25.5438>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.593927 rotate z*90*-1 translate<-27,-40.107,-25.5438> }
object{Deco[3] scale 0.6 rotate x*360*0.688052 rotate z*90*-1 translate<-27,-40.3875,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.362038 rotate z*90*-1 translate<-27,-40.4292,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.169142 rotate z*90*-1 translate<-27,-40.552,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.422979 rotate z*90*-1 translate<-27,-40.8046,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.736869 rotate z*90*-1 translate<-27,-40.9387,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.295633 rotate z*90*-1 translate<-27,-41.0283,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.620895 rotate z*90*-1 translate<-27,-41.0408,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.0774757 rotate z*90*-1 translate<-27,-41.0882,-25.5438> }
object{Deco[1] scale 0.6 rotate x*360*0.116944 rotate z*90*-1 translate<-27,-41.0889,-25.5438> }
object{Deco[2] scale 0.6 rotate x*360*0.279174 rotate z*90*-1 translate<-27,-41.2592,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.529331 rotate z*90*-1 translate<-27,-41.2627,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.245818 rotate z*90*-1 translate<-27,-41.5255,-25.5438> }
object{Deco[6] scale 0.6 rotate x*360*0.959588 rotate z*90*-1 translate<-27,-41.7542,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.55015 rotate z*90*-1 translate<-27,-41.9511,-25.5438> }
object{Deco[0] scale 0.6 rotate x*360*0.163949 rotate z*90*-1 translate<-27,-42.1095,-25.5438> }
object{Deco[3] scale 0.6 rotate x*360*0.177736 rotate z*90*-1 translate<-27,-42.3615,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.680016 rotate z*90*-1 translate<-27,-42.4916,-25.5438> }
object{Deco[4] scale 0.6 rotate x*360*0.54767 rotate z*90*-1 translate<-27,-42.7675,-25.5438> }
object{Deco[5] scale 0.6 rotate x*360*0.283271 rotate z*90*-1 translate<-27,-42.8114,-25.5438> }
cylinder{<-27,-65.9135,-22.5438>,<-27,-65.9135,-13.5801>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.958548 rotate y*90*1 translate<-27,-65.9135,-22.4424> }
object{Deco[0] scale 0.6 rotate x*360*0.810196 rotate y*90*1 translate<-27,-65.9135,-22.3828> }
object{Deco[2] scale 0.6 rotate x*360*0.116755 rotate y*90*1 translate<-27,-65.9135,-22.3738> }
object{Deco[5] scale 0.6 rotate x*360*0.428823 rotate y*90*1 translate<-27,-65.9135,-22.0175> }
object{Deco[5] scale 0.6 rotate x*360*0.299404 rotate y*90*1 translate<-27,-65.9135,-21.8934> }
object{Deco[4] scale 0.6 rotate x*360*0.452562 rotate y*90*1 translate<-27,-65.9135,-21.7477> }
object{Deco[2] scale 0.6 rotate x*360*0.492286 rotate y*90*1 translate<-27,-65.9135,-21.5569> }
object{Deco[6] scale 0.6 rotate x*360*0.760014 rotate y*90*1 translate<-27,-65.9135,-21.5535> }
object{Deco[1] scale 0.6 rotate x*360*0.39069 rotate y*90*1 translate<-27,-65.9135,-21.4734> }
object{Deco[3] scale 0.6 rotate x*360*0.302834 rotate y*90*1 translate<-27,-65.9135,-21.3205> }
object{Deco[6] scale 0.6 rotate x*360*0.6974 rotate y*90*1 translate<-27,-65.9135,-21.2564> }
object{Deco[3] scale 0.6 rotate x*360*0.781625 rotate y*90*1 translate<-27,-65.9135,-20.844> }
object{Deco[2] scale 0.6 rotate x*360*0.613884 rotate y*90*1 translate<-27,-65.9135,-20.4746> }
object{Deco[3] scale 0.6 rotate x*360*0.992736 rotate y*90*1 translate<-27,-65.9135,-20.2812> }
object{Deco[5] scale 0.6 rotate x*360*0.0204075 rotate y*90*1 translate<-27,-65.9135,-19.9573> }
object{Deco[0] scale 0.6 rotate x*360*0.143958 rotate y*90*1 translate<-27,-65.9135,-19.5986> }
object{Deco[0] scale 0.6 rotate x*360*0.720665 rotate y*90*1 translate<-27,-65.9135,-19.2471> }
object{Deco[0] scale 0.6 rotate x*360*0.328676 rotate y*90*1 translate<-27,-65.9135,-18.9958> }
object{Deco[0] scale 0.6 rotate x*360*0.858008 rotate y*90*1 translate<-27,-65.9135,-18.6126> }
object{Deco[3] scale 0.6 rotate x*360*0.934973 rotate y*90*1 translate<-27,-65.9135,-18.268> }
object{Elbow rotate y*90 rotate z*90 rotate x*90 translate y*3  translate <-27,-65.9135,-22.5438>}
cylinder{<-24,-65.9135,-10.5801>,<-11.14,-65.9135,-10.5801>,0.6}
object{Deco[5] scale 0.6 rotate x*360*0.54898 scale <1,1,1> translate<-23.6902,-65.9135,-10.5801> }
object{Deco[1] scale 0.6 rotate x*360*0.775843 scale <1,1,1> translate<-23.6223,-65.9135,-10.5801> }
object{Deco[2] scale 0.6 rotate x*360*0.884284 scale <1,1,1> translate<-23.4345,-65.9135,-10.5801> }
object{Deco[2] scale 0.6 rotate x*360*0.493844 scale <1,1,1> translate<-23.3903,-65.9135,-10.5801> }
object{Deco[0] scale 0.6 rotate x*360*0.262984 scale <1,1,1> translate<-23.2703,-65.9135,-10.5801> }
object{Deco[2] scale 0.6 rotate x*360*0.55559 scale <1,1,1> translate<-23.2174,-65.9135,-10.5801> }
object{Deco[6] scale 0.6 rotate x*360*0.0583068 scale <1,1,1> translate<-22.9058,-65.9135,-10.5801> }
object{Deco[2] scale 0.6 rotate x*360*0.815477 scale <1,1,1> translate<-22.3172,-65.9135,-10.5801> }
object{Deco[4] scale 0.6 rotate x*360*0.76472 scale <1,1,1> translate<-22.0448,-65.9135,-10.5801> }
object{Deco[6] scale 0.6 rotate x*360*0.451867 scale <1,1,1> translate<-21.5157,-65.9135,-10.5801> }
object{Deco[6] scale 0.6 rotate x*360*0.6906 scale <1,1,1> translate<-21.0444,-65.9135,-10.5801> }
object{Deco[0] scale 0.6 rotate x*360*0.555165 scale <1,1,1> translate<-20.5092,-65.9135,-10.5801> }
object{Deco[2] scale 0.6 rotate x*360*0.689916 scale <1,1,1> translate<-20.4632,-65.9135,-10.5801> }
object{Deco[2] scale 0.6 rotate x*360*0.52511 scale <1,1,1> translate<-19.9312,-65.9135,-10.5801> }
object{Deco[0] scale 0.6 rotate x*360*0.265574 scale <1,1,1> translate<-19.4963,-65.9135,-10.5801> }
object{Deco[2] scale 0.6 rotate x*360*0.720773 scale <1,1,1> translate<-19.0372,-65.9135,-10.5801> }
object{Deco[5] scale 0.6 rotate x*360*0.0147482 scale <1,1,1> translate<-18.4498,-65.9135,-10.5801> }
object{Deco[2] scale 0.6 rotate x*360*0.6749 scale <1,1,1> translate<-18.0423,-65.9135,-10.5801> }
object{Deco[4] scale 0.6 rotate x*360*0.438315 scale <1,1,1> translate<-17.4473,-65.9135,-10.5801> }
object{Deco[6] scale 0.6 rotate x*360*0.0602193 scale <1,1,1> translate<-17.2195,-65.9135,-10.5801> }
object{Elbow scale <1,1,-1> translate -z*3  translate <-24,-65.9135,-10.5801>}
cylinder{<-8.14,-65.9135,-7.5801>,<-8.14,-65.9135,2.83335>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.40209 rotate y*90*1 translate<-8.14,-65.9135,-7.37442> }
object{Deco[1] scale 0.6 rotate x*360*0.8583 rotate y*90*1 translate<-8.14,-65.9135,-7.35378> }
object{Deco[0] scale 0.6 rotate x*360*0.754769 rotate y*90*1 translate<-8.14,-65.9135,-7.1274> }
object{Deco[5] scale 0.6 rotate x*360*0.214292 rotate y*90*1 translate<-8.14,-65.9135,-6.76674> }
object{Deco[6] scale 0.6 rotate x*360*0.272543 rotate y*90*1 translate<-8.14,-65.9135,-6.74937> }
object{Deco[4] scale 0.6 rotate x*360*0.168029 rotate y*90*1 translate<-8.14,-65.9135,-6.39925> }
object{Deco[5] scale 0.6 rotate x*360*0.422626 rotate y*90*1 translate<-8.14,-65.9135,-6.35208> }
object{Deco[1] scale 0.6 rotate x*360*0.294368 rotate y*90*1 translate<-8.14,-65.9135,-6.2575> }
object{Deco[4] scale 0.6 rotate x*360*0.134614 rotate y*90*1 translate<-8.14,-65.9135,-6.16483> }
object{Deco[3] scale 0.6 rotate x*360*0.654554 rotate y*90*1 translate<-8.14,-65.9135,-5.84759> }
object{Deco[0] scale 0.6 rotate x*360*0.452889 rotate y*90*1 translate<-8.14,-65.9135,-5.47854> }
object{Deco[1] scale 0.6 rotate x*360*0.730197 rotate y*90*1 translate<-8.14,-65.9135,-5.00034> }
object{Deco[4] scale 0.6 rotate x*360*0.445926 rotate y*90*1 translate<-8.14,-65.9135,-4.63478> }
object{Deco[4] scale 0.6 rotate x*360*0.469819 rotate y*90*1 translate<-8.14,-65.9135,-4.58036> }
object{Deco[4] scale 0.6 rotate x*360*0.831138 rotate y*90*1 translate<-8.14,-65.9135,-4.31205> }
object{Deco[4] scale 0.6 rotate x*360*0.419752 rotate y*90*1 translate<-8.14,-65.9135,-3.82267> }
object{Deco[0] scale 0.6 rotate x*360*0.981872 rotate y*90*1 translate<-8.14,-65.9135,-3.72073> }
object{Deco[3] scale 0.6 rotate x*360*0.318446 rotate y*90*1 translate<-8.14,-65.9135,-3.22964> }
object{Deco[5] scale 0.6 rotate x*360*0.66776 rotate y*90*1 translate<-8.14,-65.9135,-2.88924> }
object{Deco[0] scale 0.6 rotate x*360*0.760731 rotate y*90*1 translate<-8.14,-65.9135,-2.52765> }
object{Elbow rotate y*-90 translate -x*3  translate <-8.14,-65.9135,-7.5801>}
cylinder{<-8.14,-65.9135,8.83335>,<-8.14,-65.9135,19.8886>,0.6}
cylinder{<-8.14,-65.9135,2.83335>,<-8.14,-65.9135,8.83335>,0.6}
cylinder{<-8.14,-62.9135,22.8886>,<-8.14,-48.6901,22.8886>,0.6}
object{Deco[4] scale 0.6 rotate x*360*0.336345 rotate z*90*1 translate<-8.14,-62.6736,22.8886> }
object{Deco[6] scale 0.6 rotate x*360*0.357105 rotate z*90*1 translate<-8.14,-62.6564,22.8886> }
object{Deco[4] scale 0.6 rotate x*360*0.153371 rotate z*90*1 translate<-8.14,-62.2008,22.8886> }
object{Deco[6] scale 0.6 rotate x*360*0.613447 rotate z*90*1 translate<-8.14,-61.9142,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.709425 rotate z*90*1 translate<-8.14,-61.3398,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.52818 rotate z*90*1 translate<-8.14,-61.119,22.8886> }
object{Deco[4] scale 0.6 rotate x*360*0.785523 rotate z*90*1 translate<-8.14,-60.6872,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.461064 rotate z*90*1 translate<-8.14,-60.0797,22.8886> }
object{Deco[1] scale 0.6 rotate x*360*0.301031 rotate z*90*1 translate<-8.14,-59.7162,22.8886> }
object{Deco[4] scale 0.6 rotate x*360*0.650278 rotate z*90*1 translate<-8.14,-59.5544,22.8886> }
object{Deco[3] scale 0.6 rotate x*360*0.541749 rotate z*90*1 translate<-8.14,-59.0437,22.8886> }
object{Deco[0] scale 0.6 rotate x*360*0.653719 rotate z*90*1 translate<-8.14,-58.9622,22.8886> }
object{Deco[5] scale 0.6 rotate x*360*0.344118 rotate z*90*1 translate<-8.14,-58.2997,22.8886> }
object{Deco[1] scale 0.6 rotate x*360*0.680214 rotate z*90*1 translate<-8.14,-57.8269,22.8886> }
object{Deco[5] scale 0.6 rotate x*360*0.0379408 rotate z*90*1 translate<-8.14,-57.2353,22.8886> }
object{Deco[0] scale 0.6 rotate x*360*0.751187 rotate z*90*1 translate<-8.14,-56.607,22.8886> }
object{Deco[4] scale 0.6 rotate x*360*0.907963 rotate z*90*1 translate<-8.14,-56.3828,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.790566 rotate z*90*1 translate<-8.14,-56.1322,22.8886> }
object{Deco[0] scale 0.6 rotate x*360*0.369287 rotate z*90*1 translate<-8.14,-55.7041,22.8886> }
object{Deco[6] scale 0.6 rotate x*360*0.718246 rotate z*90*1 translate<-8.14,-55.5423,22.8886> }
object{Elbow rotate z*90 scale <1,1,-1> translate <-8.14,-62.9135,22.8886>}
cylinder{<-8.14,-42.6901,22.8886>,<-8.14,-34.9246,22.8886>,0.6}
object{Deco[2] scale 0.6 rotate x*360*0.39206 rotate z*90*1 translate<-8.14,-42.5883,22.8886> }
object{Deco[3] scale 0.6 rotate x*360*0.982184 rotate z*90*1 translate<-8.14,-42.4098,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.24582 rotate z*90*1 translate<-8.14,-42.1876,22.8886> }
object{Deco[3] scale 0.6 rotate x*360*0.0990265 rotate z*90*1 translate<-8.14,-42.086,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.556804 rotate z*90*1 translate<-8.14,-41.9057,22.8886> }
object{Deco[3] scale 0.6 rotate x*360*0.911653 rotate z*90*1 translate<-8.14,-41.5453,22.8886> }
object{Deco[6] scale 0.6 rotate x*360*0.467558 rotate z*90*1 translate<-8.14,-41.5111,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.878869 rotate z*90*1 translate<-8.14,-41.2238,22.8886> }
object{Deco[5] scale 0.6 rotate x*360*0.19419 rotate z*90*1 translate<-8.14,-41.149,22.8886> }
object{Deco[3] scale 0.6 rotate x*360*0.984225 rotate z*90*1 translate<-8.14,-40.8013,22.8886> }
object{Deco[1] scale 0.6 rotate x*360*0.323194 rotate z*90*1 translate<-8.14,-40.4615,22.8886> }
object{Deco[1] scale 0.6 rotate x*360*0.106349 rotate z*90*1 translate<-8.14,-40.337,22.8886> }
object{Deco[0] scale 0.6 rotate x*360*0.318431 rotate z*90*1 translate<-8.14,-40.246,22.8886> }
object{Deco[5] scale 0.6 rotate x*360*0.00538164 rotate z*90*1 translate<-8.14,-39.9016,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.268181 rotate z*90*1 translate<-8.14,-39.5656,22.8886> }
object{Deco[5] scale 0.6 rotate x*360*0.339703 rotate z*90*1 translate<-8.14,-39.5192,22.8886> }
object{Deco[6] scale 0.6 rotate x*360*0.742985 rotate z*90*1 translate<-8.14,-39.3293,22.8886> }
object{Deco[5] scale 0.6 rotate x*360*0.885922 rotate z*90*1 translate<-8.14,-39.3086,22.8886> }
object{Deco[0] scale 0.6 rotate x*360*0.514891 rotate z*90*1 translate<-8.14,-39.2866,22.8886> }
object{Deco[3] scale 0.6 rotate x*360*0.0266974 rotate z*90*1 translate<-8.14,-39.2593,22.8886> }
cylinder{<-8.14,-48.6901,22.8886>,<-8.14,-42.6901,22.8886>,0.6}
object{Deco[6] scale 0.6 rotate x*360*0.620166 rotate z*90*1 translate<-8.14,-48.6632,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.157896 rotate z*90*1 translate<-8.14,-48.4504,22.8886> }
object{Deco[4] scale 0.6 rotate x*360*0.143023 rotate z*90*1 translate<-8.14,-48.3499,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.0112816 rotate z*90*1 translate<-8.14,-48.2325,22.8886> }
object{Deco[5] scale 0.6 rotate x*360*0.970012 rotate z*90*1 translate<-8.14,-48.0117,22.8886> }
object{Deco[0] scale 0.6 rotate x*360*0.554011 rotate z*90*1 translate<-8.14,-47.8165,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.925835 rotate z*90*1 translate<-8.14,-47.7538,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.17403 rotate z*90*1 translate<-8.14,-47.5371,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.96404 rotate z*90*1 translate<-8.14,-47.4538,22.8886> }
object{Deco[3] scale 0.6 rotate x*360*0.853641 rotate z*90*1 translate<-8.14,-47.3861,22.8886> }
object{Deco[0] scale 0.6 rotate x*360*0.762829 rotate z*90*1 translate<-8.14,-47.3286,22.8886> }
object{Deco[1] scale 0.6 rotate x*360*0.0344984 rotate z*90*1 translate<-8.14,-47.1232,22.8886> }
object{Deco[3] scale 0.6 rotate x*360*0.979505 rotate z*90*1 translate<-8.14,-47.1183,22.8886> }
object{Deco[4] scale 0.6 rotate x*360*0.448557 rotate z*90*1 translate<-8.14,-46.8484,22.8886> }
object{Deco[2] scale 0.6 rotate x*360*0.859493 rotate z*90*1 translate<-8.14,-46.6957,22.8886> }
object{Deco[4] scale 0.6 rotate x*360*0.393618 rotate z*90*1 translate<-8.14,-46.6468,22.8886> }
object{Deco[6] scale 0.6 rotate x*360*0.689793 rotate z*90*1 translate<-8.14,-46.3896,22.8886> }
object{Deco[4] scale 0.6 rotate x*360*0.331519 rotate z*90*1 translate<-8.14,-46.1274,22.8886> }
object{Deco[3] scale 0.6 rotate x*360*0.0447477 rotate z*90*1 translate<-8.14,-45.9269,22.8886> }
object{Deco[0] scale 0.6 rotate x*360*0.344254 rotate z*90*1 translate<-8.14,-45.7198,22.8886> }
cylinder{<-8.14,-31.9246,19.8886>,<-8.14,-31.9246,8.76131>,0.6}
object{Deco[1] scale 0.6 rotate x*360*0.11529 rotate y*90*-1 translate<-8.14,-31.9246,19.5142> }
object{Deco[1] scale 0.6 rotate x*360*0.970621 rotate y*90*-1 translate<-8.14,-31.9246,19.27> }
object{Deco[0] scale 0.6 rotate x*360*0.30655 rotate y*90*-1 translate<-8.14,-31.9246,18.8107> }
object{Deco[0] scale 0.6 rotate x*360*0.060809 rotate y*90*-1 translate<-8.14,-31.9246,18.6899> }
object{Deco[3] scale 0.6 rotate x*360*0.0998981 rotate y*90*-1 translate<-8.14,-31.9246,18.4041> }
object{Deco[0] scale 0.6 rotate x*360*0.355037 rotate y*90*-1 translate<-8.14,-31.9246,18.0311> }
object{Deco[6] scale 0.6 rotate x*360*0.142971 rotate y*90*-1 translate<-8.14,-31.9246,17.8417> }
object{Deco[3] scale 0.6 rotate x*360*0.412795 rotate y*90*-1 translate<-8.14,-31.9246,17.6474> }
object{Deco[4] scale 0.6 rotate x*360*0.0651771 rotate y*90*-1 translate<-8.14,-31.9246,17.1769> }
object{Deco[6] scale 0.6 rotate x*360*0.32166 rotate y*90*-1 translate<-8.14,-31.9246,16.7458> }
object{Deco[3] scale 0.6 rotate x*360*0.850127 rotate y*90*-1 translate<-8.14,-31.9246,16.4241> }
object{Deco[0] scale 0.6 rotate x*360*0.535624 rotate y*90*-1 translate<-8.14,-31.9246,16.0819> }
object{Deco[6] scale 0.6 rotate x*360*0.65101 rotate y*90*-1 translate<-8.14,-31.9246,15.7992> }
object{Deco[3] scale 0.6 rotate x*360*0.90852 rotate y*90*-1 translate<-8.14,-31.9246,15.7256> }
object{Deco[5] scale 0.6 rotate x*360*0.652071 rotate y*90*-1 translate<-8.14,-31.9246,15.4403> }
object{Deco[1] scale 0.6 rotate x*360*0.585728 rotate y*90*-1 translate<-8.14,-31.9246,15.2924> }
object{Deco[1] scale 0.6 rotate x*360*0.193589 rotate y*90*-1 translate<-8.14,-31.9246,15.1096> }
object{Deco[5] scale 0.6 rotate x*360*0.605861 rotate y*90*-1 translate<-8.14,-31.9246,15.0966> }
object{Deco[4] scale 0.6 rotate x*360*0.718585 rotate y*90*-1 translate<-8.14,-31.9246,14.8197> }
object{Deco[1] scale 0.6 rotate x*360*0.322905 rotate y*90*-1 translate<-8.14,-31.9246,14.6437> }
object{Elbow rotate y*180 rotate z*90 translate -y*3  translate <-8.14,-31.9246,19.8886>}
}
