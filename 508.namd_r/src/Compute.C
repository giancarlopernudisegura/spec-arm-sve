/**
***  Copyright (c) 1995-2012 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

#include "Compute.h"
#include "PatchList.h"
#include "Patch.h"
#include "Lattice.h"

static ComputeNonbondedWorkArrays workArrays;

void SelfCompute::doWork(PatchList *patchList) {

    Patch *p1 = &(patchList->patches[patchId]);
    int doEnergy = patchList->doEnergy;
    nonbonded params;
    params.offset = 0.;
    params.p[0] = p1->atoms;
    params.p[1] = p1->atoms;
    params.pExt[0] = p1->atomsExt;
    params.pExt[1] = p1->atomsExt;
    params.ff[0] = p1->f_nbond;
    params.ff[1] = p1->f_nbond;
    params.numAtoms[0] = p1->numAtoms;
    params.numAtoms[1] = p1->numAtoms;
    params.reduction = patchList->reductionData;
    params.pressureProfileReduction = 0;

    params.minPart = 0; // minPart;
    params.maxPart = 1; // maxPart;
    params.numParts = 1; // numParts;

    params.workArrays = &workArrays;

    params.pairlists = &pairlists;
    params.savePairlists = 0;
    params.plcutoff = cutoff;
    if ( patchList->savePairlists ) {
      params.plcutoff = pairlistdist;
      pairlistsValid = 1;
      params.savePairlists = 1;
    }
    params.usePairlists = pairlistsValid;
    // params.groupplcutoff = cutoff + 2. * patch->flags.maxGroupRadius;
    params.groupplcutoff = params.plcutoff + hgroupcutoff;

    if ( patchList->doFull ) {
      params.fullf[0] = p1->f_slow;
      params.fullf[1] = p1->f_slow;
      if ( patchList->doMerge ) {
        if ( doEnergy ) calcMergeSelfEnergy(&params);
        else calcMergeSelf(&params);
      } else {
        if ( doEnergy ) calcFullSelfEnergy(&params);
        else calcFullSelf(&params);
      }
    }
    else
      if ( doEnergy ) calcSelfEnergy(&params);
      else calcSelf(&params);

}

void PairCompute::doWork(PatchList *patchList) {

    Patch *p1 = &(patchList->patches[patchId1]);
    Patch *p2 = &(patchList->patches[patchId2]);
    int doEnergy = patchList->doEnergy;
    nonbonded params;
    const Lattice &lattice = patchList->lattice;
    params.offset = lattice.offset(image1) - lattice.offset(image2);
    params.p[0] = p1->atoms;
    params.p[1] = p2->atoms;
    params.pExt[0] = p1->atomsExt;
    params.pExt[1] = p2->atomsExt;
    params.ff[0] = p1->f_nbond;
    params.ff[1] = p2->f_nbond;
    params.numAtoms[0] = p1->numAtoms;
    params.numAtoms[1] = p2->numAtoms;
    params.reduction = patchList->reductionData;
    params.pressureProfileReduction = 0;

    params.minPart = 0; // minPart;
    params.maxPart = 1; // maxPart;
    params.numParts = 1; // numParts;

    params.workArrays = &workArrays;

    params.pairlists = &pairlists;
    params.savePairlists = 0;
    params.plcutoff = cutoff;
    if ( patchList->savePairlists ) {
      params.plcutoff = pairlistdist;
      pairlistsValid = 1;
      params.savePairlists = 1;
    }
    params.usePairlists = pairlistsValid;
    // params.groupplcutoff = cutoff + 2. * patch->flags.maxGroupRadius;
    params.groupplcutoff = params.plcutoff + hgroupcutoff;

    if ( patchList->doFull ) {
      params.fullf[0] = p1->f_slow;
      params.fullf[1] = p2->f_slow;
      if ( patchList->doMerge ) {
        if ( doEnergy ) calcMergePairEnergy(&params);
        else calcMergePair(&params);
      } else {
        if ( doEnergy ) calcFullPairEnergy(&params);
        else calcFullPair(&params);
      }
    }
    else
      if ( doEnergy ) calcPairEnergy(&params);
      else calcPair(&params);

}

