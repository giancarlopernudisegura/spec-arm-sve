/**
***  Copyright (c) 1995-2012 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

#ifndef COMPUTE_H
#define COMPUTE_H

#include <stdio.h>
#include "ComputeNonbondedUtil.h"
class PatchList;

class SelfCompute : private ComputeNonbondedUtil {
public:

  SelfCompute() { pairlistsValid=0; };
  ~SelfCompute() {};

  int patchId;

  Pairlists pairlists;
  int pairlistsValid;
  BigReal pairlistTolerance;

  void doWork(PatchList *);

};

class PairCompute : private ComputeNonbondedUtil {
public:

  PairCompute() { pairlistsValid=0; };
  ~PairCompute() {};

  int patchId1;
  int image1;
  int patchId2;
  int image2;

  Pairlists pairlists;
  int pairlistsValid;
  BigReal pairlistTolerance;

  void doWork(PatchList *);

};

#endif // COMPUTE_H

