/****************************************************************************
 *                  super.h
 *
 * This module contains all defines, typedefs, and prototypes for SUPEREL.CPP.
 *
 * from Persistence of Vision(tm) Ray Tracer version 3.6.
 * Copyright 1991-2003 Persistence of Vision Team
 * Copyright 2003-2009 Persistence of Vision Raytracer Pty. Ltd.
 *---------------------------------------------------------------------------
 * NOTICE: This source code file is provided so that users may experiment
 * with enhancements to POV-Ray and to port the software to platforms other
 * than those supported by the POV-Ray developers. There are strict rules
 * regarding how you are permitted to use this file. These rules are contained
 * in the distribution and derivative versions licenses which should have been
 * provided with this file.
 *
 * These licences may be found online, linked from the end-user license
 * agreement that is located at http://www.povray.org/povlegal.html
 *---------------------------------------------------------------------------
 * This program is based on the popular DKB raytracer version 2.12.
 * DKBTrace was originally written by David K. Buck.
 * DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
 *---------------------------------------------------------------------------
 * $File: //depot/povray/spec-3.6/source/super.h $
 * $Revision: #1 $
 * $Change: 5014 $
 * $DateTime: 2010/06/13 03:51:51 $
 * $Author: thorsten $
 * $Log$
 *****************************************************************************/

#ifndef SUPER_H
#define SUPER_H

BEGIN_POV_NAMESPACE

/*****************************************************************************
* Global preprocessor definitions
******************************************************************************/

#define SUPERELLIPSOID_OBJECT (BASIC_OBJECT)



/*****************************************************************************
* Global typedefs
******************************************************************************/

typedef struct Superellipsoid_Struct SUPERELLIPSOID;

struct Superellipsoid_Struct
{
  OBJECT_FIELDS
  VECTOR Power;
};



/*****************************************************************************
* Global variables
******************************************************************************/




/*****************************************************************************
* Global functions
******************************************************************************/

SUPERELLIPSOID *Create_Superellipsoid (void);
void  Compute_Superellipsoid_BBox (SUPERELLIPSOID *Superellipsoid);

END_POV_NAMESPACE

#endif
