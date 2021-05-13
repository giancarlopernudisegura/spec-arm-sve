/**
***  Copyright (c) 1995-2012 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

#ifndef SIMPARAMETERS_H
#define SIMPARAMETERS_H

#include "common.h"
#include "Vector.h"
#include "Lattice.h"
#include <stdio.h>

//  The following definitions are used to distinguish between possible
//  bonded exclusion settings
typedef int  ExclusionSettings;

#define NONE            0
#define ONETWO          1
#define ONETHREE        2
#define ONEFOUR         3
#define SCALED14        4

//  The following definitions are used to distinuish between multiple
//  long-short range force splittings
#define SHARP		0
#define XPLOR		1
#define C1		2
#define C2		3

class SimParameters
{
private:
public:

#define SIMPARAM(T,N,V) T N
#define DEFPARAM(T,N,V) T N
#include "SimParamList.h"
#undef SIMPARAM
#undef DEFPARAM

	Lattice lattice;

	SimParameters();
	~SimParameters() {};
	int readfile(FILE *);
        int setparam(const char *param, const char *value);

};

#endif

