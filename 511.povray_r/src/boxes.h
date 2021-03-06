/****************************************************************************
 *                  boxes.h
 *
 * This module contains all defines, typedefs, and prototypes for BOXES.CPP.
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
 * $File: //depot/povray/spec-3.6/source/boxes.h $
 * $Revision: #1 $
 * $Change: 5014 $
 * $DateTime: 2010/06/13 03:51:51 $
 * $Author: thorsten $
 * $Log$
 *****************************************************************************/


#ifndef BOXES_H
#define BOXES_H

BEGIN_POV_NAMESPACE

/*****************************************************************************
* Global preprocessor defines
******************************************************************************/

#define BOX_OBJECT (BASIC_OBJECT)



/*****************************************************************************
* Global typedefs
******************************************************************************/

typedef struct Box_Struct BOX;

struct Box_Struct
{
  OBJECT_FIELDS
  VECTOR bounds[2];
};



/*****************************************************************************
* Global variables
******************************************************************************/

extern METHODS Box_Methods;



/*****************************************************************************
* Global functions
******************************************************************************/

int  Intersect_Box (RAY *Ray, TRANSFORM *Trans, VECTOR Corner1, VECTOR Corner2, DBL *Depth1, DBL *Depth2, int *Side1, int *Side2);
BOX  *Create_Box (void);
void Destroy_Box (OBJECT *Object);
BOX *Copy_Box (OBJECT *Object);
void Compute_Box_BBox (BOX *Box);

END_POV_NAMESPACE

#endif
