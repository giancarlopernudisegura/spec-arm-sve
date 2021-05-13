/**
***  Copyright (c) 1995-2012 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

#ifndef PATCHLIST_H
#define PATCHLIST_H

#include <stdio.h>
#include "Patch.h"
class Lattice;
class Molecule;
class ResultSet;

class PatchList {
public:

  int doEnergy;
  int doFull;
  int doMerge;
  int savePairlists;

  int numPatches;

  Patch *patches;

  PatchList(Lattice &);
  ~PatchList();

  int readfile(FILE *, Molecule *);

  Lattice &lattice;

  void zeroresults();

  void moveatoms();

  double *reductionData;

  void setresults(ResultSet *);

};

#endif // PATCHLIST_H

