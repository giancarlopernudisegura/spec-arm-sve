/**
***  Copyright (c) 1995-2012 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

#include "Patch.h"
#include "Molecule.h"
#include "Lattice.h"

Patch::Patch() {
  numAtoms = -1;
  atoms = 0;
  f_nbond = 0;
  f_slow = 0;
  p_orig = 0;
  i_move = 0;
}

Patch::~Patch() {
  delete [] atoms;
  delete [] f_nbond;
  delete [] f_slow;
  delete [] p_orig;
  int i;
}

void Patch::moveatoms() {
  const BigReal mag = 0.3;
  int im = ++i_move;
  for ( int i=0; i<numAtoms; ++i ) {
    CompAtom &a = atoms[i];
    CompAtomExt &aExt = atomsExt[i];
    const Vector &p = p_orig[i];
    BigReal imid = (im * (aExt.id + 1)) | 0xffff;
    a.position.x = p.x + mag * cos(1.0 * imid);
    a.position.y = p.y + mag * cos(2.0 * imid);
    a.position.z = p.z + mag * cos(3.0 * imid);
  }
}

void Patch::zeroforces() {
  int i;
  for ( i=0; i<numAtoms; ++i ) {
    f_nbond[i] = 0.;
    f_slow[i] = 0.;
  }
}

void Patch::setforces(Vector *fn, Vector *fs) {
  int i;
  for ( i=0; i<numAtoms; ++i ) {
    fn[atomsExt[i].id] = f_nbond[i];
    fs[atomsExt[i].id] = f_slow[i];
  }
}

int Patch::readfile(FILE *file, Molecule *mol) {
  
  char buf[1024];

  if ( ! fgets(buf,1024,file) || strcmp(buf,"PATCH_BEGIN\n") ) {
    printf("Missing PATCH_BEGIN\n");
    return -1;
  }

  if ( fscanf(file,"%d\n",&numAtoms) != 1 ) {
    printf("numAtoms read error\n");
    return -2;
  }

  atoms = new CompAtom[numAtoms];
  atomsExt = new CompAtomExt[numAtoms];
  f_nbond = new Vector[numAtoms];
  f_slow = new Vector[numAtoms];
  p_orig = new Vector[numAtoms];

  int i;
  for ( i=0; i<numAtoms; ++i ) {
    double x,y,z,q;
    int id,hgs,ngia,af,gf,part;
    x=y=z=q=id=hgs=ngia=af=gf=part=0;
    if ( fscanf(file,"%lf %lf %lf %lf %d %d %d %d %d %d\n",
	&x,&y,&z,&q,&id,&hgs,&ngia,&af,&gf,&part) != 10 ) {
      printf("atom read error\n");
      return -3;
    }
    CompAtom &a = atoms[i];
    CompAtomExt &aExt = atomsExt[i];
    Vector &p = p_orig[i];
    a.position.x = p.x = x;
    a.position.y = p.y = y;
    a.position.z = p.z = z;
    a.charge = q;
    a.vdwType = mol->atomvdwtype(id);
    aExt.id = id;
    a.hydrogenGroupSize = hgs;
    a.nonbondedGroupSize = (ngia ? 1 : hgs);
    aExt.atomFixed = af;
    aExt.groupFixed = gf;
    a.partition = part;
  }

  if ( ! fgets(buf,1024,file) || strcmp(buf,"PATCH_END\n") ) {
    printf("Missing PATCH_END\n");
    return -4;
  }

  return 0;
}

