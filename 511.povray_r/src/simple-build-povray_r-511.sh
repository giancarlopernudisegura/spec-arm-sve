#!/bin/bash
# Simple build script, potentially useful if building a GPL-redistributable
# version on a system *without* SPEC CPU2017.  See:
#
#     https://www.spec.org/cpu2017/Docs/licenses.html#GPLtarballs
#
# Note: if the benchmark uses "specpp", that is the freely-redistributable
#       preprocessor "filepp".   It is described at 
#         https://www.spec.org/cpu2017/Docs/utility.html#specpp  
#       and will need to be in your path.  You can find filepp sources as
#       modified by SPEC in redistributable_sources/modified/tools.src/harness-spec.tar.xz 
#---------------------------------------------------------------------------

/usr/bin/g++                -m64 -c -o atmosph.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  atmosph.cpp
/usr/bin/g++                -m64 -c -o bbox.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  bbox.cpp
/usr/bin/g++                -m64 -c -o bcyl.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  bcyl.cpp
/usr/bin/g++                -m64 -c -o benchmark.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  benchmark.cpp
/usr/bin/g++                -m64 -c -o bezier.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  bezier.cpp
/usr/bin/g++                -m64 -c -o blob.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  blob.cpp
/usr/bin/g++                -m64 -c -o boxes.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  boxes.cpp
/usr/bin/g++                -m64 -c -o bsphere.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  bsphere.cpp
/usr/bin/g++                -m64 -c -o camera.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  camera.cpp
/usr/bin/g++                -m64 -c -o chi2.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  chi2.cpp
/usr/bin/g++                -m64 -c -o colour.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  colour.cpp
/usr/bin/g++                -m64 -c -o colutils.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  colutils.cpp
/usr/bin/g++                -m64 -c -o cones.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  cones.cpp
/usr/bin/g++                -m64 -c -o csg.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  csg.cpp
/usr/bin/g++                -m64 -c -o discs.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  discs.cpp
/usr/bin/g++                -m64 -c -o express.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  express.cpp
/usr/bin/g++                -m64 -c -o fncode.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  fncode.cpp
/usr/bin/g++                -m64 -c -o fnintern.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  fnintern.cpp
/usr/bin/g++                -m64 -c -o fnpovfpu.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  fnpovfpu.cpp
/usr/bin/g++                -m64 -c -o fnsyntax.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  fnsyntax.cpp
/usr/bin/g++                -m64 -c -o fpmetric.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  fpmetric.cpp
/usr/bin/g++                -m64 -c -o fractal.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  fractal.cpp
/usr/bin/g++                -m64 -c -o function.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  function.cpp
/usr/bin/g++                -m64 -c -o hcmplx.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  hcmplx.cpp
/usr/bin/g++                -m64 -c -o hfield.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  hfield.cpp
/usr/bin/g++                -m64 -c -o histogra.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  histogra.cpp
/usr/bin/g++                -m64 -c -o iff.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  iff.cpp
/usr/bin/g++                -m64 -c -o image.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  image.cpp
/usr/bin/g++                -m64 -c -o interior.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  interior.cpp
/usr/bin/g++                -m64 -c -o isosurf.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  isosurf.cpp
/usr/bin/g++                -m64 -c -o lathe.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  lathe.cpp
/usr/bin/g++                -m64 -c -o lbuffer.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  lbuffer.cpp
/usr/bin/g++                -m64 -c -o lightgrp.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  lightgrp.cpp
/usr/bin/g++                -m64 -c -o lighting.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  lighting.cpp
/usr/bin/g++                -m64 -c -o mathutil.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  mathutil.cpp
/usr/bin/g++                -m64 -c -o matrices.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  matrices.cpp
/usr/bin/g++                -m64 -c -o media.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  media.cpp
/usr/bin/g++                -m64 -c -o mesh.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  mesh.cpp
/usr/bin/g++                -m64 -c -o normal.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  normal.cpp
/usr/bin/g++                -m64 -c -o objects.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  objects.cpp
/usr/bin/g++                -m64 -c -o octree.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  octree.cpp
/usr/bin/g++                -m64 -c -o optout.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  optout.cpp
/usr/bin/g++                -m64 -c -o parse.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  parse.cpp
/usr/bin/g++                -m64 -c -o parsestr.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  parsestr.cpp
/usr/bin/g++                -m64 -c -o parstxtr.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  parstxtr.cpp
/usr/bin/g++                -m64 -c -o pattern.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  pattern.cpp
/usr/bin/g++                -m64 -c -o pgm.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  pgm.cpp
/usr/bin/g++                -m64 -c -o photons.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  photons.cpp
/usr/bin/g++                -m64 -c -o pigment.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  pigment.cpp
/usr/bin/g++                -m64 -c -o planes.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  planes.cpp
/usr/bin/g++                -m64 -c -o point.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  point.cpp
/usr/bin/g++                -m64 -c -o poly.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  poly.cpp
/usr/bin/g++                -m64 -c -o polygon.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  polygon.cpp
/usr/bin/g++                -m64 -c -o polysolv.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  polysolv.cpp
/usr/bin/g++                -m64 -c -o povmsend.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  povmsend.cpp
/usr/bin/g++                -m64 -c -o povmsrec.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  povmsrec.cpp
/usr/bin/g++                -m64 -c -o povray.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  povray.cpp
/usr/bin/g++                -m64 -c -o pov_mem.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  pov_mem.cpp
/usr/bin/g++                -m64 -c -o pov_util.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  pov_util.cpp
/usr/bin/g++                -m64 -c -o ppm.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  ppm.cpp
/usr/bin/g++                -m64 -c -o prism.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  prism.cpp
/usr/bin/g++                -m64 -c -o quadrics.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  quadrics.cpp
/usr/bin/g++                -m64 -c -o quatern.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  quatern.cpp
/usr/bin/g++                -m64 -c -o radiosit.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  radiosit.cpp
/usr/bin/g++                -m64 -c -o rad_data.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  rad_data.cpp
/usr/bin/g++                -m64 -c -o ray.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  ray.cpp
/usr/bin/g++                -m64 -c -o rendctrl.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  rendctrl.cpp
/usr/bin/g++                -m64 -c -o render.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  render.cpp
/usr/bin/g++                -m64 -c -o renderio.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  renderio.cpp
/usr/bin/g++                -m64 -c -o reswords.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  reswords.cpp
/usr/bin/g++                -m64 -c -o sor.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  sor.cpp
/usr/bin/g++                -m64 -c -o spheres.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  spheres.cpp
/usr/bin/g++                -m64 -c -o sphsweep.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  sphsweep.cpp
/usr/bin/g++                -m64 -c -o splines.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  splines.cpp
/usr/bin/g++                -m64 -c -o statspov.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  statspov.cpp
/usr/bin/g++                -m64 -c -o super.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  super.cpp
/usr/bin/g++                -m64 -c -o targa.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  targa.cpp
/usr/bin/g++                -m64 -c -o texture.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  texture.cpp
/usr/bin/g++                -m64 -c -o tokenize.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  tokenize.cpp
/usr/bin/g++                -m64 -c -o torus.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  torus.cpp
/usr/bin/g++                -m64 -c -o triangle.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  triangle.cpp
/usr/bin/g++                -m64 -c -o truetype.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  truetype.cpp
/usr/bin/g++                -m64 -c -o txttest.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  txttest.cpp
/usr/bin/g++                -m64 -c -o userdisp.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  userdisp.cpp
/usr/bin/g++                -m64 -c -o userio.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  userio.cpp
/usr/bin/g++                -m64 -c -o vbuffer.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  vbuffer.cpp
/usr/bin/g++                -m64 -c -o vlbuffer.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  vlbuffer.cpp
/usr/bin/g++                -m64 -c -o warps.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  warps.cpp
/usr/bin/g++                -m64 -c -o base/fileinputoutput.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  base/fileinputoutput.cpp
/usr/bin/g++                -m64 -c -o base/povms.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  base/povms.cpp
/usr/bin/g++                -m64 -c -o base/povmscpp.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  base/povmscpp.cpp
/usr/bin/g++                -m64 -c -o base/processoptions.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  base/processoptions.cpp
/usr/bin/g++                -m64 -c -o base/stringutilities.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  base/stringutilities.cpp
/usr/bin/g++                -m64 -c -o base/textstream.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  base/textstream.cpp
/usr/bin/g++                -m64 -c -o base/textstreambuffer.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  base/textstreambuffer.cpp
/usr/bin/g++                -m64 -c -o frontend/defaultplatformbase.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  frontend/defaultplatformbase.cpp
/usr/bin/g++                -m64 -c -o frontend/defaultrenderfrontend.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  frontend/defaultrenderfrontend.cpp
/usr/bin/g++                -m64 -c -o frontend/messageoutput.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  frontend/messageoutput.cpp
/usr/bin/g++                -m64 -c -o frontend/processrenderoptions.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  frontend/processrenderoptions.cpp
/usr/bin/g++                -m64 -c -o frontend/renderfrontend.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g         -DSPEC_LP64  frontend/renderfrontend.cpp
/usr/bin/gcc     -std=c99   -m64 -c -o spec_qsort/spec_qsort.o -DSPEC -DSPEC_CPU -DNDEBUG -Ifrontend -Ibase -I. -Ispec_qsort -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  spec_qsort/spec_qsort.c
/usr/bin/g++                -m64      -g          atmosph.o bbox.o bcyl.o benchmark.o bezier.o blob.o boxes.o bsphere.o camera.o chi2.o colour.o colutils.o cones.o csg.o discs.o express.o fncode.o fnintern.o fnpovfpu.o fnsyntax.o fpmetric.o fractal.o function.o hcmplx.o hfield.o histogra.o iff.o image.o interior.o isosurf.o lathe.o lbuffer.o lightgrp.o lighting.o mathutil.o matrices.o media.o mesh.o normal.o objects.o octree.o optout.o parse.o parsestr.o parstxtr.o pattern.o pgm.o photons.o pigment.o planes.o point.o poly.o polygon.o polysolv.o povmsend.o povmsrec.o povray.o pov_mem.o pov_util.o ppm.o prism.o quadrics.o quatern.o radiosit.o rad_data.o ray.o rendctrl.o render.o renderio.o reswords.o sor.o spheres.o sphsweep.o splines.o statspov.o super.o targa.o texture.o tokenize.o torus.o triangle.o truetype.o txttest.o userdisp.o userio.o vbuffer.o vlbuffer.o warps.o base/fileinputoutput.o base/povms.o base/povmscpp.o base/processoptions.o base/stringutilities.o base/textstream.o base/textstreambuffer.o frontend/defaultplatformbase.o frontend/defaultrenderfrontend.o frontend/messageoutput.o frontend/processrenderoptions.o frontend/renderfrontend.o spec_qsort/spec_qsort.o                      -o povray_r  
