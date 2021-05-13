/**
***  Copyright (c) 1995-2012 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

#ifndef PATCH_H
#define PATCH_H

#include "NamdTypes.h"
#include "Vector.h"
#include <stdio.h>
class Molecule;
class Lattice;

class Patch {
public:

  int numAtoms;

  CompAtom *atoms;
  CompAtomExt *atomsExt;

  Vector *f_nbond;
  Vector *f_slow;
  Vector *p_orig;

  void zeroforces();
  void setforces(Vector *, Vector *);

  int i_move;
  void moveatoms();

  Patch();
  ~Patch();

  int readfile(FILE *, Molecule *);

};

#endif // PATCH_H

