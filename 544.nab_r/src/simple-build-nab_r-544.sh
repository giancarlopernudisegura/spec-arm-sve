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

/usr/bin/gcc     -std=c99   -m64 -c -o nabmd.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  nabmd.c
/usr/bin/gcc     -std=c99   -m64 -c -o sff.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  sff.c
/usr/bin/gcc     -std=c99   -m64 -c -o nblist.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  nblist.c
/usr/bin/gcc     -std=c99   -m64 -c -o prm.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  prm.c
/usr/bin/gcc     -std=c99   -m64 -c -o memutil.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  memutil.c
/usr/bin/gcc     -std=c99   -m64 -c -o molio.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  molio.c
/usr/bin/gcc     -std=c99   -m64 -c -o molutil.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  molutil.c
/usr/bin/gcc     -std=c99   -m64 -c -o errormsg.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  errormsg.c
/usr/bin/gcc     -std=c99   -m64 -c -o binpos.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  binpos.c
/usr/bin/gcc     -std=c99   -m64 -c -o rand2.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  rand2.c
/usr/bin/gcc     -std=c99   -m64 -c -o select_atoms.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  select_atoms.c
/usr/bin/gcc     -std=c99   -m64 -c -o reslib.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  reslib.c
/usr/bin/gcc     -std=c99   -m64 -c -o database.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  database.c
/usr/bin/gcc     -std=c99   -m64 -c -o traceback.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  traceback.c
/usr/bin/gcc     -std=c99   -m64 -c -o chirvol.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  chirvol.c
/usr/bin/gcc     -std=c99   -m64 -c -o specrand/specrand.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  specrand/specrand.c
/usr/bin/gcc     -std=c99   -m64 -c -o regex-alpha/regcomp.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  regex-alpha/regcomp.c
/usr/bin/gcc     -std=c99   -m64 -c -o regex-alpha/regerror.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  regex-alpha/regerror.c
/usr/bin/gcc     -std=c99   -m64 -c -o regex-alpha/regexec.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  regex-alpha/regexec.c
/usr/bin/gcc     -std=c99   -m64 -c -o regex-alpha/regfree.o -DSPEC -DSPEC_CPU -DNDEBUG -Ispecrand -Iregex-alpha -DNDEBUG -DNOPERFLIB -DNOREDUCE -DSPEC_AUTO_SUPPRESS_OPENMP  -g               -DSPEC_LP64  regex-alpha/regfree.c
/usr/bin/gcc     -std=c99   -m64      -g          nabmd.o sff.o nblist.o prm.o memutil.o molio.o molutil.o errormsg.o binpos.o rand2.o select_atoms.o reslib.o database.o traceback.o chirvol.o specrand/specrand.o regex-alpha/regcomp.o regex-alpha/regerror.o regex-alpha/regexec.o regex-alpha/regfree.o             -lm         -o nab_r  
