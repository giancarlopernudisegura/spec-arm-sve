/****************************************************************************
 *               texture.cpp
 *
 * This module implements texturing functions such as noise, turbulence and
 * texture transformation functions. The actual texture routines are in the
 * files pigment.c & normal.c.
 * The noise function used here is the one described by Ken Perlin in
 * "Hypertexture", SIGGRAPH '89 Conference Proceedings page 253.
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
 * $File: //depot/povray/spec-3.6/source/texture.cpp $
 * $Revision: #1 $
 * $Change: 5014 $
 * $DateTime: 2010/06/13 03:51:51 $
 * $Author: thorsten $
 * $Log$
 *****************************************************************************/

/*
   Some texture ideas garnered from SIGGRAPH '85 Volume 19 Number 3, 
   "An Image Synthesizer" By Ken Perlin.
   Further Ideas Garnered from "The RenderMan Companion" (Addison Wesley)
*/

#include "frame.h"
#include "povray.h"
#include "vector.h"
#include "texture.h"
#include "image.h"
#include "matrices.h"
#include "normal.h"
#include "pigment.h"

#include <algorithm>

BEGIN_POV_NAMESPACE

static unsigned int next_rand = 1;

/*****************************************************************************
* Static functions
******************************************************************************/

static void InitTextureTable (void);
static TEXTURE *Copy_Materials (TEXTURE *Old);
static void InitSolidNoise(void);
static DBL SolidNoise(VECTOR P);

/*****************************************************************************
* Local preprocessor defines
******************************************************************************/

/* Ridiculously large scaling values */

const int MINX = -10000;
const int MINY = MINX;
const int MINZ = MINX;

const int SINTABSIZE = 1000;

#define SCURVE(a) ((a)*(a)*(3.0-2.0*(a)))

// Hash2d assumed values in the range 0..8191
#define Hash2d(a,b)   \
  hashTable[(int)(hashTable[(int)(a)] ^ (b))]

// Hash1dRTableIndex assumed values in the range 0..8191
#define Hash1dRTableIndex(a,b)   \
  ((hashTable[(int)(a) ^ (b)] & 0xFF) * 2)

#define INCRSUM(m,s,x,y,z)  \
  ((s)*(RTable[m+1] + RTable[m+2]*(x) + RTable[m+4]*(y) + RTable[m+6]*(z)))

#define INCRSUMP(mp,s,x,y,z) \
  ((s)*((mp[1]) + (mp[2])*(x) + (mp[4])*(y) + (mp[6])*(z)))


/*****************************************************************************
* Local typedefs
******************************************************************************/



/*****************************************************************************
* Local variables
******************************************************************************/

static DBL *sintab; // GLOBAL VARIABLE
unsigned int Number_Of_Waves = 10;    /* dmf */ // GLOBAL VARIABLE
DBL *frequency;                       /* dmf */ // GLOBAL VARIABLE
VECTOR *Wave_Sources;                 /* dmf */ // GLOBAL VARIABLE

#ifdef DYNAMIC_HASHTABLE
unsigned short *hashTable; // GLOBAL VARIABLE
#else
ALIGN16 unsigned short hashTable[8192]; // GLOBAL VARIABLE
#endif

/*****************************************************************************
* Local variables
******************************************************************************/

ALIGN16 DBL RTable[267*2] =
{
         -1, 0.0,    0.604974, 0.0,   -0.937102, 0.0,    0.414115, 0.0,    0.576226, 0.0,  -0.0161593, 0.0,
   0.432334, 0.0,    0.103685, 0.0,    0.590539, 0.0,   0.0286412, 0.0,     0.46981, 0.0,    -0.84622, 0.0,
 -0.0734112, 0.0,   -0.304097, 0.0,    -0.40206, 0.0,   -0.210132, 0.0,   -0.919127, 0.0,    0.652033, 0.0,
   -0.83151, 0.0,   -0.183948, 0.0,   -0.671107, 0.0,    0.852476, 0.0,    0.043595, 0.0,   -0.404532, 0.0,
    0.75494, 0.0,   -0.335653, 0.0,    0.618433, 0.0,    0.605707, 0.0,    0.708583, 0.0,   -0.477195, 0.0,
   0.899474, 0.0,    0.490623, 0.0,    0.221729, 0.0,   -0.400381, 0.0,   -0.853727, 0.0,   -0.932586, 0.0,
   0.659113, 0.0,    0.961303, 0.0,    0.325948, 0.0,   -0.750851, 0.0,    0.842466, 0.0,    0.734401, 0.0,
  -0.649866, 0.0,    0.394491, 0.0,   -0.466056, 0.0,   -0.434073, 0.0,    0.109026, 0.0,   0.0847028, 0.0,
  -0.738857, 0.0,    0.241505, 0.0,     0.16228, 0.0,    -0.71426, 0.0,   -0.883665, 0.0,   -0.150408, 0.0,
   -0.90396, 0.0,   -0.686549, 0.0,   -0.785214, 0.0,    0.488548, 0.0,   0.0246433, 0.0,    0.142473, 0.0,
  -0.602136, 0.0,    0.375845, 0.0, -0.00779736, 0.0,    0.498955, 0.0,   -0.268147, 0.0,    0.856382, 0.0,
  -0.386007, 0.0,   -0.596094, 0.0,   -0.867735, 0.0,   -0.570977, 0.0,   -0.914366, 0.0,     0.28896, 0.0,
   0.672206, 0.0,   -0.233783, 0.0,     0.94815, 0.0,    0.895262, 0.0,    0.343252, 0.0,   -0.173388, 0.0,
  -0.767971, 0.0,   -0.314748, 0.0,    0.824308, 0.0,   -0.342092, 0.0,    0.721431, 0.0,    -0.24004, 0.0,
   -0.63653, 0.0,    0.553277, 0.0,    0.376272, 0.0,    0.158984, 0.0,   -0.452659, 0.0,    0.396323, 0.0,
  -0.420676, 0.0,   -0.454154, 0.0,    0.122179, 0.0,    0.295857, 0.0,   0.0664225, 0.0,   -0.202075, 0.0,
  -0.724788, 0.0,    0.453513, 0.0,    0.224567, 0.0,   -0.908812, 0.0,    0.176349, 0.0,   -0.320516, 0.0,
  -0.697139, 0.0,    0.742702, 0.0,   -0.900786, 0.0,    0.471489, 0.0,   -0.133532, 0.0,    0.119127, 0.0,
  -0.889769, 0.0,    -0.23183, 0.0,   -0.669673, 0.0,   -0.046891, 0.0,   -0.803433, 0.0,   -0.966735, 0.0,
   0.475578, 0.0,   -0.652644, 0.0,   0.0112459, 0.0,   -0.730007, 0.0,    0.128283, 0.0,    0.145647, 0.0,
  -0.619318, 0.0,    0.272023, 0.0,    0.392966, 0.0,    0.646418, 0.0,  -0.0207675, 0.0,   -0.315908, 0.0,
   0.480797, 0.0,    0.535668, 0.0,   -0.250172, 0.0,    -0.83093, 0.0,   -0.653773, 0.0,   -0.443809, 0.0,
   0.119982, 0.0,   -0.897642, 0.0,     0.89453, 0.0,    0.165789, 0.0,    0.633875, 0.0,   -0.886839, 0.0,
   0.930877, 0.0,   -0.537194, 0.0,    0.587732, 0.0,    0.722011, 0.0,   -0.209461, 0.0,  -0.0424659, 0.0,
  -0.814267, 0.0,   -0.919432, 0.0,    0.280262, 0.0,    -0.66302, 0.0,   -0.558099, 0.0,   -0.537469, 0.0,
  -0.598779, 0.0,    0.929656, 0.0,   -0.170794, 0.0,   -0.537163, 0.0,    0.312581, 0.0,    0.959442, 0.0,
   0.722652, 0.0,    0.499931, 0.0,    0.175616, 0.0,   -0.534874, 0.0,   -0.685115, 0.0,    0.444999, 0.0,
    0.17171, 0.0,    0.108202, 0.0,   -0.768704, 0.0,   -0.463828, 0.0,    0.254231, 0.0,    0.546014, 0.0,
   0.869474, 0.0,    0.875212, 0.0,   -0.944427, 0.0,    0.130724, 0.0,   -0.110185, 0.0,    0.312184, 0.0,
   -0.33138, 0.0,   -0.629206, 0.0,   0.0606546, 0.0,    0.722866, 0.0,  -0.0979477, 0.0,    0.821561, 0.0,
  0.0931258, 0.0,   -0.972808, 0.0,   0.0318151, 0.0,   -0.867033, 0.0,   -0.387228, 0.0,    0.280995, 0.0,
  -0.218189, 0.0,   -0.539178, 0.0,   -0.427359, 0.0,   -0.602075, 0.0,    0.311971, 0.0,    0.277974, 0.0,
   0.773159, 0.0,    0.592493, 0.0,  -0.0331884, 0.0,   -0.630854, 0.0,   -0.269947, 0.0,    0.339132, 0.0,
   0.581079, 0.0,    0.209461, 0.0,   -0.317433, 0.0,   -0.284993, 0.0,    0.181323, 0.0,    0.341634, 0.0,
   0.804959, 0.0,   -0.229572, 0.0,   -0.758907, 0.0,   -0.336721, 0.0,    0.605463, 0.0,   -0.991272, 0.0,
 -0.0188754, 0.0,   -0.300191, 0.0,    0.368307, 0.0,   -0.176135, 0.0,     -0.3832, 0.0,   -0.749569, 0.0,
    0.62356, 0.0,   -0.573938, 0.0,    0.278309, 0.0,   -0.971313, 0.0,    0.839994, 0.0,   -0.830686, 0.0,
   0.439078, 0.0,     0.66128, 0.0,    0.694514, 0.0,   0.0565042, 0.0,     0.54342, 0.0,   -0.438804, 0.0,
 -0.0228428, 0.0,   -0.687068, 0.0,    0.857267, 0.0,    0.301991, 0.0,   -0.494255, 0.0,   -0.941039, 0.0,
   0.775509, 0.0,    0.410575, 0.0,   -0.362081, 0.0,   -0.671534, 0.0,   -0.348379, 0.0,    0.932433, 0.0,
   0.886442, 0.0,    0.868681, 0.0,   -0.225666, 0.0,   -0.062211, 0.0,  -0.0976425, 0.0,   -0.641444, 0.0,
  -0.848112, 0.0,    0.724697, 0.0,    0.473503, 0.0,    0.998749, 0.0,    0.174701, 0.0,    0.559625, 0.0,
  -0.029099, 0.0,   -0.337392, 0.0,   -0.958129, 0.0,   -0.659785, 0.0,    0.236042, 0.0,   -0.246937, 0.0,
   0.659449, 0.0,   -0.027512, 0.0,    0.821897, 0.0,   -0.226215, 0.0,   0.0181735, 0.0,    0.500481, 0.0,
  -0.420127, 0.0,   -0.427878, 0.0,    0.566186
};

/*****************************************************************************/
/* Platform specific faster noise functions support                          */
/* (Profiling revealed that the noise functions can take up to 50% of        */
/*  all the time required when rendering and current compilers cannot        */
/*  easily optimise them efficiently without some help from programmers!)    */
/*****************************************************************************/

#if USE_FASTER_NOISE
 END_POV_NAMESPACE
 #include "fasternoise.h"
 BEGIN_POV_NAMESPACE
 #ifndef FASTER_NOISE_INIT
  #define FASTER_NOISE_INIT()
 #endif
#else
 #define OriNoise Noise
 #define OriDNoise DNoise
 #define FASTER_NOISE_INIT()
#endif


/*****************************************************************************
*
* FUNCTION
*
*   Initialize_Noise()
*
* INPUT
*   
* OUTPUT
*
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

void Initialize_Noise()
{
  register unsigned int i;
  VECTOR point;

  InitTextureTable();

  /* are - initialize Perlin style noise function */
  InitSolidNoise();

  sintab = (DBL *)POV_MALLOC(SINTABSIZE * sizeof(DBL), "sine table");

  /* dmf */
  frequency = (DBL *)POV_MALLOC(Number_Of_Waves * sizeof(DBL), "wave frequency table: use lower Number_Of_Waves");

  /* dmf */
  Wave_Sources = (VECTOR *)POV_MALLOC(Number_Of_Waves * sizeof(VECTOR), "wave sources table: use lower Number_Of_Waves");

  for (i = 0 ; i < 267 ; i++)
  {
    RTable[(i * 2) + 1] = RTable[i * 2] * 0.5;
//    Debug_Info("%.10f  %.10f\n", (DBL)(RTable[i * 2] - (DBL)((float)(RTable[i * 2]))), (DBL)(RTable[(i * 2) + 1] - (DBL)((float)(RTable[(i * 2) + 1]))));
  }

  for (i = 0 ; i < SINTABSIZE ; i++)
  {
    sintab[i] = sin((DBL)i / SINTABSIZE * TWO_M_PI);
  }

  POV_SRAND(-560851967);

  for (i = 0 ; i < Number_Of_Waves ; i++)
  {
    Make_Vector(point,(DBL)i,0.0,0.0);
    DNoise(point, point);
    VNormalize(Wave_Sources[i], point);
    frequency[i] = FRAND() + 0.01;
  }
}



/*****************************************************************************
*
* FUNCTION
*
*   InitTextureTable()
*
* INPUT
*
* OUTPUT
*
* RETURNS
*
* AUTHOR
*
*   POV-Ray Team
*
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

static void InitTextureTable()
{
  unsigned short j, temp;
  int i;

  POV_SRAND(0);

#ifdef DYNAMIC_HASHTABLE
  hashTable = (unsigned short *)POV_MALLOC(8192*sizeof(unsigned short), "hash table");
#endif
 
  for (i = 0; i < 4096; i++)
  {
    hashTable[i] = i;
  }

  for (i = 4095; i >= 0; i--)
  {
    j = POV_RAND() % 4096;
    temp = hashTable[i];
    hashTable[i] = hashTable[j];
    hashTable[j] = temp;
  }

  for (i = 0; i < 4096; i++)
  {
    hashTable[4096 + i] = hashTable[i];
  }

  FASTER_NOISE_INIT();
}



/*****************************************************************************
*
* FUNCTION
*
*   Free_Noise_Tables()
*
* INPUT
*   
* OUTPUT
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

void Free_Noise_Tables()
{
  if (sintab != NULL) 
  {
    POV_FREE(sintab);
    POV_FREE(frequency);
    POV_FREE(Wave_Sources);
    
    sintab       = NULL;
    frequency    = NULL;
    Wave_Sources = NULL;

#ifdef DYNAMIC_HASHTABLE
    POV_FREE(hashTable);
    hashTable    = NULL;
#endif
  }
}



/*****************************************************************************
*
* FUNCTION
*
*   Noise
*
* INPUT
*
*   EPoint -- 3-D point at which noise is evaluated
*
* OUTPUT
*   
* RETURNS
*
*   DBL noise value
*   
* AUTHOR
*
*   Robert Skinner based on Ken Perlin
*   
* DESCRIPTION
*
* CHANGES
*   Modified by AAC to ensure uniformly distributed clamped values
*   between 0 and 1.0...
*
*   Feb 8, 2001: modified function based on MegaPov 0.7 to remove
*                bugs that showed up when noise was translated.
*
******************************************************************************/

DBL OriNoise(VECTOR EPoint, TPATTERN *TPat)
{
  DBL x, y, z;
  DBL *mp;
  int tmp;
  int ix, iy, iz;
  int ixiy_hash, ixjy_hash, jxiy_hash, jxjy_hash;
  int noise_generator = 0;
  
  DBL sx, sy, sz, tx, ty, tz;
  DBL sum = 0.0;
  
  DBL x_ix, x_jx, y_iy, y_jy, z_iz, z_jz, txty, sxty, txsy, sxsy;

  Increase_Counter(stats[Calls_To_Noise]);

  if (TPat != NULL)
    noise_generator = (TPat->Flags & NOISE_FLAGS) >> 4;
  if (!noise_generator)
    noise_generator=opts.Noise_Generator;

  if ((noise_generator==3) && (opts.Language_Version >= 350)) 
  {
	  // The 1.59 and 0.985 are to correct for some biasing problems with
	  // the random # generator used to create the noise tables.  Final
	  // range of values is about 5.0e-4 below 0.0 and above 1.0.  Mean
	  // value is 0.49 (ideally it would be 0.5).
	  sum = 0.5 * (1.59 * SolidNoise(EPoint) + 0.985);

	  // Clamp final value to 0-1 range
      if (sum < 0.0) sum = 0.0;
      if (sum > 1.0) sum = 1.0;

	  return sum;
  }

  x = EPoint[X];
  y = EPoint[Y];
  z = EPoint[Z];
  
  /* its equivalent integer lattice point. */
  /* ix = (int)x; iy = (int)y; iz = (long)z; */
				/* JB fix for the range problem */
  tmp = (x>=0)?(int)x:(int)(x-(1-EPSILON));
  ix = (int)((tmp-MINX)&0xFFF);
  x_ix = x-tmp;
    
  tmp = (y>=0)?(int)y:(int)(y-(1-EPSILON));
  iy = (int)((tmp-MINY)&0xFFF);
  y_iy = y-tmp;
  
  tmp = (z>=0)?(int)z:(int)(z-(1-EPSILON));
  iz = (int)((tmp-MINZ)&0xFFF);
  z_iz = z-tmp;
 
  x_jx = x_ix-1; y_jy = y_iy-1; z_jz = z_iz-1;

  sx = SCURVE(x_ix); sy = SCURVE(y_iy); sz = SCURVE(z_iz);
  
  /* the complement values of sx,sy,sz */
  tx = 1 - sx; ty = 1 - sy; tz = 1 - sz;
  
  /*
   *  interpolate!
   */
  txty = tx * ty;
  sxty = sx * ty;
  txsy = tx * sy;
  sxsy = sx * sy;
  ixiy_hash = Hash2d(ix,     iy);
  jxiy_hash = Hash2d(ix + 1, iy);
  ixjy_hash = Hash2d(ix,     iy + 1);
  jxjy_hash = Hash2d(ix + 1, iy + 1);
  
  mp = &RTable[Hash1dRTableIndex(ixiy_hash, iz)];
  sum = INCRSUMP(mp, (txty*tz), x_ix, y_iy, z_iz);
  
  mp = &RTable[Hash1dRTableIndex(jxiy_hash, iz)];
  sum += INCRSUMP(mp, (sxty*tz), x_jx, y_iy, z_iz);
  
  mp = &RTable[Hash1dRTableIndex(ixjy_hash, iz)];
  sum += INCRSUMP(mp, (txsy*tz), x_ix, y_jy, z_iz);
  
  mp = &RTable[Hash1dRTableIndex(jxjy_hash, iz)];
  sum += INCRSUMP(mp, (sxsy*tz), x_jx, y_jy, z_iz);
  
  mp = &RTable[Hash1dRTableIndex(ixiy_hash, iz + 1)];
  sum += INCRSUMP(mp, (txty*sz), x_ix, y_iy, z_jz);
  
  mp = &RTable[Hash1dRTableIndex(jxiy_hash, iz + 1)];
  sum += INCRSUMP(mp, (sxty*sz), x_jx, y_iy, z_jz);

  mp = &RTable[Hash1dRTableIndex(ixjy_hash, iz + 1)];
  sum += INCRSUMP(mp, (txsy*sz), x_ix, y_jy, z_jz);
  
  mp = &RTable[Hash1dRTableIndex(jxjy_hash, iz + 1)];
  sum += INCRSUMP(mp, (sxsy*sz), x_jx, y_jy, z_jz);
 

  if ((noise_generator==2) && (opts.Language_Version >= 350))
  {
    /* details of range here:
    Min, max: -1.05242, 0.988997
    Mean: -0.0191481, Median: -0.535493, Std Dev: 0.256828

    We want to change it to as close to [0,1] as possible.
    */
    sum += 1.05242;
    sum *= 0.48985582;
    /*sum *= 0.5;
      sum += 0.5;*/

    if (sum < 0.0)
      sum = 0.0;
    if (sum > 1.0)
      sum = 1.0;
  }
  else
  {
    sum = sum + 0.5;                     /* range at this point -0.5 - 0.5... */
  
    if (sum < 0.0)
      sum = 0.0;
    if (sum > 1.0)
      sum = 1.0;
  }
  
  return (sum);
}



/*****************************************************************************
*
* FUNCTION
*
*   DNoise
*
* INPUT
*
*   EPoint -- 3-D point at which noise is evaluated
*   
* OUTPUT
*
*   VECTOR result
*   
* RETURNS
*   
* AUTHOR
*
*   Robert Skinner based on Ken Perlin
*   
* DESCRIPTION
*   Vector-valued version of "Noise"
*
* CHANGES
*   Modified by AAC to ensure uniformly distributed clamped values
*   between 0 and 1.0...
*
*   Feb 8, 2001: modified function based on MegaPov 0.7 to remove
*                bugs that showed up when noise was translated.
*
******************************************************************************/

void OriDNoise(VECTOR result, VECTOR EPoint)
{
  DBL x, y, z;
  DBL *mp;
  int tmp;
  int ix, iy, iz;
  int ixiy_hash, ixjy_hash, jxiy_hash, jxjy_hash;
  DBL x_ix, x_jx, y_iy, y_jy, z_iz, z_jz;
  DBL s;
  DBL sx, sy, sz, tx, ty, tz;
  DBL txty, sxty, txsy, sxsy;
  
  Increase_Counter(stats[Calls_To_DNoise]);
  
  x = EPoint[X];
  y = EPoint[Y];
  z = EPoint[Z];
  
  /* its equivalent integer lattice point. */
  /*ix = (int)x; iy = (int)y; iz = (int)z;
  x_ix = x - ix; y_iy = y - iy; z_iz = z - iz;*/
				/* JB fix for the range problem */
  tmp = (x>=0)?(int)x:(int)(x-(1-EPSILON));
  ix = (int)((tmp-MINX)&0xFFF);
  x_ix = x-tmp;
    
  tmp = (y>=0)?(int)y:(int)(y-(1-EPSILON));
  iy = (int)((tmp-MINY)&0xFFF);
  y_iy = y-tmp;
  
  tmp = (z>=0)?(int)z:(int)(z-(1-EPSILON));
  iz = (int)((tmp-MINZ)&0xFFF);
  z_iz = z-tmp;
  
  x_jx = x_ix-1; y_jy = y_iy-1; z_jz = z_iz-1;

  sx = SCURVE(x_ix); sy = SCURVE(y_iy); sz = SCURVE(z_iz);

  /* the complement values of sx,sy,sz */
  tx = 1 - sx; ty = 1 - sy; tz = 1 - sz;
  
  /*
   *  interpolate!
   */
  txty = tx * ty;
  sxty = sx * ty;
  txsy = tx * sy;
  sxsy = sx * sy;
  ixiy_hash = Hash2d(ix,     iy);
  jxiy_hash = Hash2d(ix + 1, iy);
  ixjy_hash = Hash2d(ix,     iy + 1);
  jxjy_hash = Hash2d(ix + 1, iy + 1);
  
  mp = &RTable[Hash1dRTableIndex(ixiy_hash, iz)];
  s = txty*tz;
  result[X] = INCRSUMP(mp, s, x_ix, y_iy, z_iz);
  mp += 8;
  result[Y] = INCRSUMP(mp, s, x_ix, y_iy, z_iz);
  mp += 8;
  result[Z] = INCRSUMP(mp, s, x_ix, y_iy, z_iz);
  
  mp = &RTable[Hash1dRTableIndex(jxiy_hash, iz)];
  s = sxty*tz;
  result[X] += INCRSUMP(mp, s, x_jx, y_iy, z_iz);
  mp += 8;
  result[Y] += INCRSUMP(mp, s, x_jx, y_iy, z_iz);
  mp += 8;
  result[Z] += INCRSUMP(mp, s, x_jx, y_iy, z_iz);
  
  mp = &RTable[Hash1dRTableIndex(jxjy_hash, iz)];
  s = sxsy*tz;
  result[X] += INCRSUMP(mp, s, x_jx, y_jy, z_iz);
  mp += 8;
  result[Y] += INCRSUMP(mp, s, x_jx, y_jy, z_iz);
  mp += 8;
  result[Z] += INCRSUMP(mp, s, x_jx, y_jy, z_iz);
  
  mp = &RTable[Hash1dRTableIndex(ixjy_hash, iz)];
  s = txsy*tz;
  result[X] += INCRSUMP(mp, s, x_ix, y_jy, z_iz);
  mp += 8;
  result[Y] += INCRSUMP(mp, s, x_ix, y_jy, z_iz);
  mp += 8;
  result[Z] += INCRSUMP(mp, s, x_ix, y_jy, z_iz);
  
  mp = &RTable[Hash1dRTableIndex(ixjy_hash, iz + 1)];
  s = txsy*sz;
  result[X] += INCRSUMP(mp, s, x_ix, y_jy, z_jz);
  mp += 8;
  result[Y] += INCRSUMP(mp, s, x_ix, y_jy, z_jz);
  mp += 8;
  result[Z] += INCRSUMP(mp, s, x_ix, y_jy, z_jz);
  
  mp = &RTable[Hash1dRTableIndex(jxjy_hash, iz + 1)];
  s = sxsy*sz;
  result[X] += INCRSUMP(mp, s, x_jx, y_jy, z_jz);
  mp += 8;
  result[Y] += INCRSUMP(mp, s, x_jx, y_jy, z_jz);
  mp += 8;
  result[Z] += INCRSUMP(mp, s, x_jx, y_jy, z_jz);
  
  mp = &RTable[Hash1dRTableIndex(jxiy_hash, iz + 1)];
  s = sxty*sz;
  result[X] += INCRSUMP(mp, s, x_jx, y_iy, z_jz);
  mp += 8;
  result[Y] += INCRSUMP(mp, s, x_jx, y_iy, z_jz);
  mp += 8;
  result[Z] += INCRSUMP(mp, s, x_jx, y_iy, z_jz);
  
  mp = &RTable[Hash1dRTableIndex(ixiy_hash, iz + 1)];
  s = txty*sz;
  result[X] += INCRSUMP(mp, s, x_ix, y_iy, z_jz);
  mp += 8;
  result[Y] += INCRSUMP(mp, s, x_ix, y_iy, z_jz);
  mp += 8;
  result[Z] += INCRSUMP(mp, s, x_ix, y_iy, z_jz);
}

// Note that the value of NoiseEntries must be a power of 2.  This
// is because bit masking using (NoiseEntries-1) is used to rescale
// the input values to the noise function.
const int NoiseEntries = 2048;
static int NoisePermutation[2*(NoiseEntries+1)];
static VECTOR NoiseGradients[2*(NoiseEntries+1)];

const DBL ROLLOVER = 10000000.023157213;

static void
InitSolidNoise(void)
{
	int i, j, k;
	VECTOR v;
	DBL s;
	
	// Create an array of random gradient vectors uniformly on the unit sphere
	POV_SRAND(1);
	for (i=0;i<NoiseEntries;i++) {
		do {
			for (j=0;j<3;j++)
				v[j] = (DBL)((POV_RAND() % (NoiseEntries << 1)) - NoiseEntries) / (DBL)NoiseEntries;
			s = VSumSqr(v);
		} while ((s > 1.0) || (s < 1.0e-5));
		s = 1.0 / sqrt(s);
		VScaleEq(v, s);

		Assign_Vector(NoiseGradients[i], v);
	}
	// Create a pseudorandom permutation of [0..NoiseEntries]
	for (i=0;i<NoiseEntries;i++)
		NoisePermutation[i] = i;
	for (i=NoiseEntries;i>0;i-=2) {
		k = NoisePermutation[i];
		j = POV_RAND() % NoiseEntries;
		NoisePermutation[i] = NoisePermutation[j];
		NoisePermutation[j] = k;
	}
	// Duplicate the entries so that we don't need a modulus operation
	// to get a value out.
	for (i=0;i<NoiseEntries+2;i++) {
		NoisePermutation[NoiseEntries + i] = NoisePermutation[i];
		Assign_Vector(NoiseGradients[NoiseEntries+i],NoiseGradients[i]);
	}
}

// Hermite curve from 0 to 1.  Makes a nice smooth transition of values.
static DBL inline
SCurve(DBL t)
{
	return (t * t * (3.0 - 2.0 * t));
}


// Linear interpolation between a and b, as the value of t goes from 0 to 1.
static DBL inline
Lerp(DBL t, DBL a, DBL b)
{
	return ((a) + (t) * ((b) - (a)));
}

// Linear interpolation between a and b, as the value of t goes from 0 to 1.
static void inline
VLerp(VECTOR v, DBL t, VECTOR a, VECTOR b)
{
	v[X] = Lerp(t, a[X], b[X]);
	v[Y] = Lerp(t, a[Y], b[Y]);
	v[Z] = Lerp(t, a[Z], b[Z]);
}

static void inline
SetupSolidNoise(VECTOR P, int i, int &b0, int &b1, DBL &r0, DBL &r1)
{
	DBL t = P[i] + ROLLOVER;

	int it = (int)floor(t);
	b0 = it & (NoiseEntries - 1);
	b1 = (b0 + 1) & (NoiseEntries - 1);
	r0 = t - it;
	r1 = r0 - 1.0;
}

static DBL inline
NoiseValueAt(VECTOR q, DBL rx, DBL ry, DBL rz)
{
	return (rx * q[X] + ry * q[Y] + rz * q[Z]);
}

static DBL
SolidNoise(VECTOR P)
{
	int bx0, bx1, by0, by1, bz0, bz1;
	int b00, b10, b01, b11;
	DBL rx0, rx1, ry0, ry1, rz0, rz1;
	DBL sx, sy, sz, a, b, c, d, t, u, v;
	int i, j;
	
	SetupSolidNoise(P, 0, bx0, bx1, rx0, rx1);
	SetupSolidNoise(P, 1, by0, by1, ry0, ry1);
	SetupSolidNoise(P, 2, bz0, bz1, rz0, rz1);
	
	i = NoisePermutation[bx0];
	j = NoisePermutation[bx1];
	
	b00 = NoisePermutation[i + by0];
	b10 = NoisePermutation[j + by0];
	b01 = NoisePermutation[i + by1];
	b11 = NoisePermutation[j + by1];
	
	sx = SCurve(rx0);
	sy = SCurve(ry0);
	sz = SCurve(rz0);
	
	u = NoiseValueAt(NoiseGradients[b00 + bz0], rx0, ry0, rz0);
	v = NoiseValueAt(NoiseGradients[b10 + bz0], rx1, ry0, rz0);
	a = Lerp(sx, u, v);
	
	u = NoiseValueAt(NoiseGradients[b01 + bz0], rx0, ry1, rz0);
	v = NoiseValueAt(NoiseGradients[b11 + bz0], rx1, ry1, rz0);
	b = Lerp(sx, u, v);
	
	c = Lerp(sy, a, b);
	
	u = NoiseValueAt(NoiseGradients[b00 + bz1], rx0, ry0, rz1);
	v = NoiseValueAt(NoiseGradients[b10 + bz1], rx1, ry0, rz1);
	a = Lerp(sx, u, v);
	
	u = NoiseValueAt(NoiseGradients[b01 + bz1], rx0, ry1, rz1);
	v = NoiseValueAt(NoiseGradients[b11 + bz1], rx1, ry1, rz1);
	b = Lerp(sx, u, v);
	
	d = Lerp(sy, a, b);
	
	t = Lerp(sz, c, d);

	return t;
}

static void
SolidDNoise(VECTOR P, VECTOR D)
{
	int bx0, bx1, by0, by1, bz0, bz1;
	int b00, b10, b01, b11;
	DBL rx0, rx1, ry0, ry1, rz0, rz1;
	DBL sx, sy, sz;
	VECTOR a, b, c, d, u, v;
	int i, j;
	
	SetupSolidNoise(P, 0, bx0, bx1, rx0, rx1);
	SetupSolidNoise(P, 1, by0, by1, ry0, ry1);
	SetupSolidNoise(P, 2, bz0, bz1, rz0, rz1);
	
	i = NoisePermutation[bx0];
	j = NoisePermutation[bx1];
	
	b00 = NoisePermutation[i + by0];
	b10 = NoisePermutation[j + by0];
	b01 = NoisePermutation[i + by1];
	b11 = NoisePermutation[j + by1];
	
	sx = SCurve(rx0);
	sy = SCurve(ry0);
	sz = SCurve(rz0);
	

	Assign_Vector(u, NoiseGradients[b00 + bz0]);
	Assign_Vector(v, NoiseGradients[b10 + bz0]);
	VLerp(a, sx, u, v);
	
	Assign_Vector(u, NoiseGradients[b01 + bz0]);
	Assign_Vector(v, NoiseGradients[b11 + bz0]);
	VLerp(b, sx, u, v);
	
	VLerp(c, sy, a, b);
	
	Assign_Vector(u, NoiseGradients[b00 + bz1]);
	Assign_Vector(v, NoiseGradients[b10 + bz1]);
	VLerp(a, sx, u, v);
	
	Assign_Vector(u, NoiseGradients[b01 + bz1]);
	Assign_Vector(v, NoiseGradients[b11 + bz1]);
	VLerp(b, sx, u, v);
	
	VLerp(d, sy, a, b);
	
	VLerp(D, sz, c, d);
}


/*****************************************************************************
*
* FUNCTION
*
*   Turbulence
*
* INPUT
*
*   EPoint -- Point at which turb is evaluated.
*   Turb   -- Parameters for fbm calculations.
*   
* OUTPUT
*   
* RETURNS
*
*   DBL result
*   
* AUTHOR
*
*   POV-Ray Team
*
* DESCRIPTION   : Computes a Fractal Brownian Motion turbulence value
*                 using repeated calls to a Perlin Noise function.
*
* CHANGES
*   ??? ???? : Updated with varible Octaves, Lambda, & Omega by [DMF]
*
******************************************************************************/

DBL Turbulence(VECTOR EPoint,TURB *Turb,TPATTERN *TPat)
{
  int i;
  DBL Lambda, Omega, l, o, value;
  VECTOR temp;
  int Octaves=Turb->Octaves;
  int noise_generator = 0;
  
  
  if (TPat != NULL)
    noise_generator = (TPat->Flags & NOISE_FLAGS) >> 4;
  if (noise_generator == 0)
    noise_generator = opts.Noise_Generator;

  if ((noise_generator>1) && (opts.Language_Version >= 350))
  {
      value = (2.0 * Noise(EPoint, TPat) - 0.5);
      value = min(max(value,0.0),1.0);
	} else {
      value = Noise(EPoint, TPat);
	}

  l = Lambda = Turb->Lambda;
  o = Omega  = Turb->Omega;

  for (i = 2; i <= Octaves; i++)
  {
    VScale(temp,EPoint,l);
    if ((noise_generator>1) && (opts.Language_Version >= 350))
      value += o * (2.0 * Noise(temp, TPat) - 0.5);
	else
      value += o * Noise(temp, TPat);
    if (i < Octaves)
    {
      l *= Lambda;
      o *= Omega;
    }
  }
  return (value);
}



/*****************************************************************************
*
* FUNCTION
*
*   DTurbulence
*
* INPUT
*
*   EPoint -- Point at which turb is evaluated.
*   Turb   -- Parameters for fmb calculations.
*   
* OUTPUT
*
*   result -- Vector valued turbulence
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION   : Computes a Fractal Brownian Motion turbulence value
*                 using repeated calls to a Perlin DNoise function.
*
* CHANGES
*   ??? ???? : Updated with varible Octaves, Lambda, & Omega by [DMF]
*
******************************************************************************/


void DTurbulence(VECTOR result, VECTOR  EPoint, TURB *Turb)
{
  DBL Omega, Lambda;
  int i;
  DBL l, o;
  VECTOR value, temp;
  int Octaves=Turb->Octaves;
  
  result[X] = result[Y] = result[Z] = 0.0;
  value[X]  = value[Y]  = value[Z]  = 0.0;
  
  DNoise(result, EPoint);
  
  l = Lambda = Turb->Lambda;
  o = Omega  = Turb->Omega;

  for (i = 2; i <= Octaves; i++)
  {
    VScale(temp,EPoint,l);
    
    DNoise(value, temp);
    result[X] += o * value[X];
    result[Y] += o * value[Y];
    result[Z] += o * value[Z];
    if (i < Octaves)
    {
      l *= Lambda;
      o *= Omega;
    }
  }
}



/*****************************************************************************
*
* FUNCTION
*
*   cycloidal
*
* INPUT
*
*   DBL value
*   
* OUTPUT
*   
* RETURNS
*
*   DBL result
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

DBL cycloidal(DBL value)
{
  if (value >= 0.0)
  {
		return sin((DBL) (((value - floor(value)) * 50000.0)) / 50000.0 * TWO_M_PI)  ;
  }
  else
  {
		return 0.0-sin((DBL) (((0.0 - (value + floor(0.0 - value))) * 50000.0)) / 50000.0 * TWO_M_PI);
  }
}



/*****************************************************************************
*
* FUNCTION
*
*   Triangle_Wave
*
* INPUT
*
*   DBL value
*   
* OUTPUT
*   
* RETURNS
*
*   DBL result
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

DBL Triangle_Wave(DBL value)
{
  register DBL offset;
  
  if (value >= 0.0) 
  {
    offset = value - floor(value);
  }
  else
  {
    offset = value + 1.0 + floor(fabs(value));
  }
  if (offset >= 0.5) 
  {
    return (2.0 * (1.0 - offset));
  }
  else
  {
    return (2.0 * offset);
  }
}



/*****************************************************************************
*
* FUNCTION
*
* INPUT
*
* OUTPUT
*
* RETURNS
*
* AUTHOR
*
*   POV-Ray Team
*
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

void Transform_Textures(TEXTURE *Textures, TRANSFORM *Trans)
{
  TEXTURE *Layer;

  for (Layer = Textures; Layer != NULL; Layer = (TEXTURE *)Layer->Next)
  {
    if (Layer->Type == PLAIN_PATTERN)
    {
      Transform_Tpattern((TPATTERN *)Layer->Pigment, Trans);
      Transform_Tpattern((TPATTERN *)Layer->Tnormal, Trans);
    }
    else
    {
      Transform_Tpattern((TPATTERN *)Layer, Trans);
    }
  }
}



/*****************************************************************************
*
* FUNCTION
*
* INPUT
*
* OUTPUT
*
* RETURNS
*
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*   6/27/98  MBP  Added initializers for reflection blur
*   8/27/98  MBP  Added initializers for angle-based reflectivity
*
******************************************************************************/

FINISH *Create_Finish()
{
  FINISH *New;
  
  New = (FINISH *)POV_MALLOC(sizeof (FINISH), "finish");
  
  Make_RGB(New->Ambient, 0.1, 0.1, 0.1);
  Make_RGB(New->Reflection_Max, 0.0, 0.0, 0.0);
  Make_RGB(New->Reflection_Min, 0.0, 0.0, 0.0);
  
  New->Reflection_Type    = 0;
  New->Reflection_Falloff = 1;    /* Added by MBP 8/27/98 */
  New->Diffuse    = 0.6;
  New->Brilliance = 1.0;
  New->Phong      = 0.0;
  New->Phong_Size = 40.0;
  New->Specular   = 0.0;
  New->Roughness  = 1.0 / 0.05;

  New->Crand = 0.0;

  New->Metallic = 0.0;

  New->Irid                = 0.0;
  New->Irid_Film_Thickness = 0.0;
  New->Irid_Turb           = 0.0;
  New->Temp_Caustics = -1.0;
  New->Temp_IOR     = -1.0;
  New->Temp_Dispersion  = 1.0;
  New->Temp_Refract =  1.0;
  New->Reflect_Exp  =  1.0;
  New->Reflect_Metallic = 0.0;
  /* Added Dec 19 1999 by NK */
  New->Conserve_Energy = false;

  return(New);
}



/*****************************************************************************
*
* FUNCTION
*
* INPUT
*   
* OUTPUT
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

FINISH *Copy_Finish(FINISH *Old)
{
  FINISH *New;
  
  if (Old != NULL)
  {
    New = Create_Finish();
    *New = *Old;
  }
  else
    New = NULL;
  return (New);
}



/*****************************************************************************
*
* FUNCTION
*
* INPUT
*   
* OUTPUT
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

TEXTURE *Create_Texture()
{
  TEXTURE *New;
  
  New = (TEXTURE *)POV_MALLOC(sizeof (TEXTURE), "texture");
  
  Init_TPat_Fields((TPATTERN *)New);

  New->References = 1;

  New->Type  = PLAIN_PATTERN;
  New->Flags = NO_FLAGS;

  New->Pigment = NULL;
  New->Tnormal = NULL;
  New->Finish  = NULL;

  New->Next          = NULL;
  New->Next_Material = NULL;

  return (New);
}


/*****************************************************************************
*
* FUNCTION
*
* INPUT
*   
* OUTPUT
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

TEXTURE *Copy_Texture_Pointer(TEXTURE *Texture)
{
  if (Texture != NULL)
  {
    Texture->References++;
  }

  return(Texture);
}




/*****************************************************************************
*
* FUNCTION
*
* INPUT
*   
* OUTPUT
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

TEXTURE *Copy_Textures(TEXTURE *Textures)
{
  TEXTURE *New, *First, *Previous, *Layer;
  
  Previous = First = NULL;
  
  for (Layer = Textures; Layer != NULL; Layer = (TEXTURE *)Layer->Next)
  {
    New = Create_Texture();
    Copy_TPat_Fields ((TPATTERN *)New, (TPATTERN *)Layer);
    
    /*  Mesh copies a texture pointer that already has multiple
        references.  We just want a clean copy, not a copy
        that's multply referenced.
     */

    New->References = 1;

    switch (Layer->Type)
    {
      case PLAIN_PATTERN:
        New->Pigment = Copy_Pigment(Layer->Pigment);
        New->Tnormal = Copy_Tnormal(Layer->Tnormal);
        New->Finish  = Copy_Finish(Layer->Finish);

        break;
      
      case BITMAP_PATTERN:

        New->Materials   = Copy_Materials(Layer->Materials);
        New->Num_Of_Mats = Layer->Num_Of_Mats;

/*      Not needed. Copied by Copy_TPat_Fields */
/*      New->Vals.Image  = Copy_Image(Layer->Vals.Image);*/ 

        break;
    }

    if (First == NULL)
    {
      First = New;
    }

    if (Previous != NULL)
    {
      Previous->Next = (TPATTERN *)New;
    }

    Previous = New;
  }

  return (First);
}



/*****************************************************************************
*
* FUNCTION
*
* INPUT
*   
* OUTPUT
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

static TEXTURE *Copy_Materials(TEXTURE *Old)
{
  TEXTURE *New, *First, *Previous, *Material;
  
  Previous = First = NULL;
  
  for (Material = Old; Material != NULL; Material = Material->Next_Material)
  {
    New = Copy_Textures(Material);

    if (First == NULL)
    {
      First = New;
    }

    if (Previous != NULL)
    {
      Previous->Next_Material = New;
    }

    Previous = New;
  }

  return (First);
}



/*****************************************************************************
*
* FUNCTION
*
* INPUT
*   
* OUTPUT
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

void Destroy_Textures(TEXTURE *Textures)
{
  TEXTURE *Layer = Textures;
  TEXTURE *Mats;
  TEXTURE *Temp;
  
  if ((Textures == NULL) || (--(Textures->References) > 0))
  {
    return;
  }

  while (Layer != NULL)
  {
    Mats = Layer->Next_Material;

    while (Mats != NULL)
    {
      Temp = Mats->Next_Material;
      Mats->Next_Material = NULL;
      Destroy_Textures(Mats);
      Mats = Temp;
    }

    Destroy_TPat_Fields((TPATTERN *)Layer);

    switch (Layer->Type)
    {
      case PLAIN_PATTERN:

        Destroy_Pigment(Layer->Pigment);
        Destroy_Tnormal(Layer->Tnormal);
        Destroy_Finish(Layer->Finish);

      break;


      case BITMAP_PATTERN:

        Destroy_Textures(Layer->Materials);
        /*taken care of by Destroy_TPat_Fields*/
        /*Destroy_Image(Layer->Vals.Image);*/

      break;
    }

    Temp = (TEXTURE *)Layer->Next;
    POV_FREE(Layer);
    Layer = Temp;
  }
}



/*****************************************************************************
*
* FUNCTION
*
* INPUT
*   
* OUTPUT
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
* CHANGES
*
******************************************************************************/

void Post_Textures(TEXTURE *Textures)
{
  TEXTURE *Layer, *Material;
  int i;
  BLEND_MAP *Map;
  
  if (Textures == NULL)
  {
    return;
  }

  for (Layer = Textures; Layer != NULL; Layer = (TEXTURE *)Layer->Next)
  {
    if (!((Layer->Flags) & POST_DONE))
    {
      switch (Layer->Type)
      {
        case PLAIN_PATTERN:

          if(Layer->Tnormal)
          {
            Layer->Tnormal->Flags |= 
              (Layer->Flags & DONT_SCALE_BUMPS_FLAG);
          }
          Post_Pigment(Layer->Pigment);
          Post_Tnormal(Layer->Tnormal);

          break;

        case BITMAP_PATTERN:

          for (Material = Layer->Materials; Material != NULL; Material = Material->Next_Material)

            Post_Textures(Material);

            break;
      }
  
      if ((Map=Layer->Blend_Map) != NULL)
      {
        for (i = 0; i < Map->Number_Of_Entries; i++)
        {
           Map->Blend_Map_Entries[i].Vals.Texture->Flags |= 
             (Layer->Flags & DONT_SCALE_BUMPS_FLAG);
           Post_Textures(Map->Blend_Map_Entries[i].Vals.Texture);
        }
      }
      else
      {
        if (Layer->Type == AVERAGE_PATTERN)
        {
           Error("No texture map in averaged texture.");
        }
      }
    }
  }
}



/*****************************************************************************
*
* FUNCTION
*
*   Test_Opacity
*
* INPUT
*
*   Object - Pointer to object
*
* OUTPUT
*
* RETURNS
*
*   int - true, if opaque
*
* AUTHOR
*
*   Dieter Bayer
*   
* DESCRIPTION
*
*   Test wether an object is opaque or not, i.e. wether the texture contains
*   a non-zero filter or alpha channel.
*
* CHANGES
*
*   Aug 1994 : Creation.
*
*   Oct 1994 : Added code to check for opaque image maps. [DB]
*
*   Jun 1995 : Added code to check for alpha channel image maps. [DB]
*
******************************************************************************/

int Test_Opacity(TEXTURE *Texture)
{
  int Opaque, Help;
  IMAGE *Image;
  TEXTURE *Layer, *Material;

  if (Texture == NULL)
  {
    return(false);
  }

  /* We assume that the object is not opaque. */

  Opaque = false;

  /* Test all layers. If at least one layer is opaque the object is opaque. */

  for (Layer = Texture; Layer != NULL; Layer = (TEXTURE *)Layer->Next)
  {
    switch (Layer->Type)
    {
      case PLAIN_PATTERN:

        /* Test image map for opacity. */

        if ((Layer->Pigment->Type == BITMAP_PATTERN) &&
            (Layer->Pigment->Vals.Image != NULL))
        {
          /* Layer is not opaque if the image map is used just once. */

          if (Layer->Pigment->Vals.Image->Once_Flag)
          {
            break;
          }

          /* Layer is not opaque if there's at least one non-opaque color. */

          Image = Layer->Pigment->Vals.Image;

          Opaque = is_image_opaque(Image);

          break;
        }

        if (!(Layer->Pigment->Flags & HAS_FILTER))
        {
          Opaque = true;
        }

        break;

      case BITMAP_PATTERN:

        /* Layer is not opaque if the image map is used just once. */

        if (Layer->Vals.Image != NULL)
        {
          if (Layer->Vals.Image->Once_Flag)
          {
            break;
          }
        }

        /* Layer is opaque if all materials are opaque. */

        Help = true;

        for (Material = Layer->Materials; Material != NULL; Material = Material->Next_Material)
        {
          if (!Test_Opacity(Material))
          {
            /* Material is not opaque --> layer is not opaque. */

            Help = false;

            break;
          }
        }

        if (Help)
        {
          Opaque = true;
        }

        break;
    }
  }

  return(Opaque);
}



/*****************************************************************************
*
* FUNCTION
*
*   POV_RAND
*
* INPUT
*
* OUTPUT
*   
* RETURNS
*
*   int - random value
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
*   Standard pseudo-random function.
*
* CHANGES
*
*   Feb 1995 : Creation.
*
******************************************************************************/

int POV_RAND()
{
  next_rand = next_rand * 1812433253L + 12345L;

  return((int)(next_rand >> 16) & RNDMASK);
}

int POV_GET_OLD_RAND()
{
  return(next_rand);
}



/*****************************************************************************
*
* FUNCTION
*
*   POV_SRAND
*
* INPUT
*
*   seed - Pseudo-random generator start value
*   
* OUTPUT
*   
* RETURNS
*   
* AUTHOR
*
*   POV-Ray Team
*   
* DESCRIPTION
*
*   Set start value for pseudo-random generator.
*
* CHANGES
*
*   Feb 1995 : Creation.
*
******************************************************************************/

void POV_SRAND(int seed)
{
  next_rand = (unsigned int)seed;
}

END_POV_NAMESPACE
