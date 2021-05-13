/**
***  Copyright (c) 1995-2012 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

EXCLUDED( FAST( foo bar ) )
EXCLUDED( MODIFIED( foo bar ) )
EXCLUDED( NORMAL( foo bar ) )
NORMAL( MODIFIED( foo bar ) )
ALCHPAIR( NOT_ALCHPAIR( foo bar ) )

ALCHPAIR(
  // get alchemical nonbonded scaling parameters (once per pairlist)
  myLambda = ALCH1(lambdaUp) ALCH2(lambdaDown);
  FEP(myLambda2 = ALCH1(lambda2Up) ALCH2(lambda2Down);)
  myElecLambda =  ALCH1(elecLambdaUp) ALCH2(elecLambdaDown); 
  FEP(myElecLambda2 = ALCH1(elecLambda2Up) ALCH2(elecLambda2Down);)
  myVdwLambda =  ALCH1(vdwLambdaUp) ALCH2(vdwLambdaDown); 
  FEP(myVdwLambda2 = ALCH1(vdwLambda2Up) ALCH2(vdwLambda2Down);) 
  myVdwShift =  ALCH1(vdwShiftUp) ALCH2(vdwShiftDown); 
  FEP(myVdwShift2 =  ALCH1(vdwShift2Up) ALCH2(vdwShift2Down);) 
)

#ifndef SPEC
#ifdef ARCH_POWERPC
     __alignx(16, table_four);
     __alignx(16, p_1);
#pragma unroll(1)
#endif

#ifndef ARCH_POWERPC
#pragma ivdep
#endif
#endif // !SPEC


  
    for (k=0; k<npairi; ++k) {      
      TABENERGY(
      const int numtypes = simParams->tableNumTypes;
      const float table_spacing = simParams->tableSpacing;
      const int npertype = (int) (mynearbyint(simParams->tableMaxDist / simParams->tableSpacing) + 1);
      )

      int table_i = (r2iilist[2*k] >> 14) + r2_delta_expc;  // table_i >= 0 
      const int j = pairlisti[k];
      register const CompAtom *p_j = p_1 + j;
      // const CompAtomExt *pExt_j = pExt_1 + j;
      
      BigReal diffa = r2list[k] - r2_table[table_i];
      const BigReal* const table_four_i = table_four + 16*table_i;

#if  ( FAST( 1 + ) TABENERGY( 1 + ) 0 ) // FAST or TABENERGY
      const LJTable::TableEntry * lj_pars = 
              lj_row + 2 * p_j->vdwType MODIFIED(+ 1);
#endif
      
      TABENERGY(
      register const int tabtype = -1 - ( lj_pars->A < 0 ? lj_pars->A : 0 );
      register int eneraddress;
      register BigReal r1;
      )
      
#if ( SHORT( FAST( 1+ ) ) 0 ) 
      Force *f_j = f_1 + j;
#endif
	
#if ( FULL( 1+ ) 0 )
      Force *fullf_j = fullf_1 + j;
#endif

      //Power PC aliasing and alignment constraints
#ifdef ARCH_POWERPC
      __alignx(16, table_four_i);
      FAST (
      __alignx(16, lj_pars);
      )
      __alignx(16, p_j);
      
#if ( FULL( 1+ ) 0 )
#pragma disjoint (*table_four_i, *fullf_j)
#pragma disjoint (*p_j,          *fullf_j)
#if ( SHORT( FAST( 1+ ) ) 0 ) 
#pragma disjoint (*f_j    , *fullf_j)
#pragma disjoint (*fullf_j, *f_j)
#endif   //Short + fast
#endif   //Full

#if ( SHORT( FAST( 1+ ) ) 0 ) 
#pragma disjoint (*table_four_i, *f_j)
#pragma disjoint (*p_j,          *f_j)
#pragma disjoint (*lj_pars,      *f_j)
      __prefetch_by_load ((void *)&f_j->x);
#endif //Short + Fast

#endif   //ARCH_POWERPC

      /*
      BigReal modf = 0.0;
      int atom2 = p_j->id;
      register char excl_flag = ( (atom2 >= excl_min && atom2 <= excl_max) ?
					excl_flags[atom2-excl_min] : 0 );
      if ( excl_flag ) { ++exclChecksum; }
      SELF( if ( j < j_hgroup ) { excl_flag = EXCHCK_FULL; } )
      if ( excl_flag ) {
	if ( excl_flag == EXCHCK_FULL ) {
	  lj_pars = lj_null_pars;
	  modf = 1.0;
	} else {
	  ++lj_pars;
	  modf = modf_mod;
	}
      }
      */

      BigReal kqq = kq_i * p_j->charge;

      LES( BigReal lambda_pair = lambda_table_i[p_j->partition]; )

      register const BigReal p_ij_x = p_i_x - p_j->position.x;
      register const BigReal p_ij_y = p_i_y - p_j->position.y;
      register const BigReal p_ij_z = p_i_z - p_j->position.z;
      
#if ( FAST(1+) 0 )
      const BigReal A = scaling * lj_pars->A;
      const BigReal B = scaling * lj_pars->B;

      BigReal vdw_d = A * table_four_i[0] - B * table_four_i[2];
      BigReal vdw_c = A * table_four_i[1] - B * table_four_i[3];
      BigReal vdw_b = A * table_four_i[4] - B * table_four_i[6];
      BigReal vdw_a = A * table_four_i[5] - B * table_four_i[7];

      ALCHPAIR (
        // Alchemical free energy calculation
        // Pairlists are separated so that lambda-coupled pairs are handled
        // independently from normal nonbonded (inside ALCHPAIR macro).
        // The separation-shifted van der Waals potential and a shifted 
        // electrostatics potential for decoupling are calculated explicitly.
        // Would be faster with lookup tables but because only a small minority
        // of nonbonded pairs are lambda-coupled the impact is minimal. 
        // Explicit calculation also makes things easier to modify.
        
        const BigReal r2 = r2list[k] - r2_delta;

        // These are now inline functions (in ComputeNonbondedFep.C) to 
        // tidy the code

        FEP(fep_vdw_forceandenergies(A,B,r2,myVdwShift,myVdwShift2,switchdist2,
          cutoff2, myVdwLambda, myVdwLambda2, Fep_WCA_repuOn, Fep_WCA_dispOn,
          WCA_rcut1, WCA_rcut2, switchfactor, &alch_vdw_energy, 
          &alch_vdw_force,&alch_vdw_energy_2);)
        TI(ti_vdw_force_energy_dUdl(A,B,r2,myVdwShift,switchdist2,
          cutoff2, myVdwLambda, alchVdwShiftCoeff, switchfactor, 
          &alch_vdw_energy, &alch_vdw_force, &alch_vdw_dUdl);)
      )
      
      NOT_ALCHPAIR(
      TABENERGY(
        if (tabtype >= 0) {
          r1 = sqrt(p_ij_x*p_ij_x + p_ij_y*p_ij_y + p_ij_z*p_ij_z);
          //CkPrintf("%i %i %f %f %i\n", npertype, tabtype, r1, table_spacing, (int) (mynearbyint(r1 / table_spacing)));
          eneraddress = 2 * ((npertype * tabtype) + ((int) mynearbyint(r1 / table_spacing)));
          //CkPrintf("Using distance bin %i for distance %f\n", eneraddress, r1);
          ENERGY(
            register BigReal vdw_val = table_ener[eneraddress];
            //CkPrintf("Found vdw energy of %f\n", vdw_val);
            vdwEnergy += LAM(lambda_pair *) vdw_val;
            FEP( vdwEnergy_s += d_lambda_pair * vdw_val; )
          )
        }  else {
      )
      ENERGY(
        register BigReal vdw_val =
          ( ( diffa * vdw_d * (1/6.)+ vdw_c * (1/4.)) * diffa + vdw_b *(1/2.)) * diffa + vdw_a;
        vdwEnergy -= LAM(lambda_pair *) vdw_val;
        FEP(vdwEnergy_s -= vdw_val;)
      )
      TABENERGY( } ) /* endif (tabtype >= 0) */
      ) // NOT_ALCHPAIR

      ALCHPAIR(
        ENERGY(vdwEnergy   += alch_vdw_energy;)
        FEP(vdwEnergy_s += alch_vdw_energy_2;)
        TI(ALCH1(vdwEnergy_ti_1) ALCH2(vdwEnergy_ti_2) += alch_vdw_dUdl;)
      ) // ALCHPAIR
      
#endif // FAST

#if ( FAST(1+) 0 )
      register BigReal vdw_dir;
#if ( TABENERGY(1+) 0 )
      if (tabtype >= 0) {
        //CkPrintf("Getting force from bin %i\n", eneraddress+1);
        vdw_dir = table_ener[eneraddress + 1];
        //CkPrintf("Values we're combining: vdw_dir: %f\n", vdw_dir);
        vdw_dir /= r1;
        INT(
        //CkPrintf("Found vdw value of %f\n", vdw_dir);
        reduction[pairVDWForceIndex_X] -= force_sign * vdw_dir * p_ij_x;
        //CkPrintf("X component is %f (from %f %f %f %f)\n", force_sign * vdw_dir * p_ij_x, force_sign, vdw_dir, p_ij_x, r1);
        reduction[pairVDWForceIndex_Y] -= force_sign * vdw_dir * p_ij_y;
        reduction[pairVDWForceIndex_Z] -= force_sign * vdw_dir * p_ij_z;
        )

#if ( SHORT(1+) 0 )
        NORMAL(
        BigReal fast_d = kqq * table_four_i[8];
        BigReal fast_c = kqq * table_four_i[9];
        BigReal fast_b = kqq * table_four_i[10];
        BigReal fast_a = kqq * table_four_i[11];
        )
        MODIFIED(
        BigReal modfckqq = (1.0-modf_mod) * kqq;
        BigReal fast_d = modfckqq * table_four_i[8];
        BigReal fast_c = modfckqq * table_four_i[9];
        BigReal fast_b = modfckqq * table_four_i[10];
        BigReal fast_a = modfckqq * table_four_i[11];
        )

        register BigReal fast_dir =
        ( diffa * fast_d + fast_c ) * diffa + fast_b;
        {
          ENERGY(
	     register BigReal fast_val =
	( ( diffa * fast_d * (1/6.)+ fast_c * (1/4.)) * diffa + fast_b *(1/2.)) * diffa + fast_a;
          electEnergy -=  LAM(lambda_pair *) fast_val;
          FEP( electEnergy_s -=  d_lambda_pair * fast_val; )
          )

          INT(
//      printf("Initial calculation of fast_dir: %f\n", fast_dir);
          // force_r -= -1.0 * LAM(lambda_pair *) fast_dir;
          reduction[pairElectForceIndex_X] +=  force_sign * fast_dir * p_ij_x;
          reduction[pairElectForceIndex_Y] +=  force_sign * fast_dir * p_ij_y;
          reduction[pairElectForceIndex_Z] +=  force_sign * fast_dir * p_ij_z;
          )
        }

//      fast_d += vdw_d;
//      fast_c += vdw_c;
//      fast_b += vdw_b;
//      fast_a += vdw_a;
      //CkPrintf("Values we're combining: fast_dir: %f vdw_dir: %f\n", fast_dir, vdw_dir);
        fast_dir -= vdw_dir;
//	( diffa * fast_d + fast_c ) * diffa + fast_b;
        BigReal force_r =  LAM(lambda_pair *) fast_dir;
      register BigReal tmp_x = force_r * p_ij_x;
      PAIR( virial_xx += tmp_x * p_ij_x; )
      PAIR( virial_xy += tmp_x * p_ij_y; )
      PAIR( virial_xz += tmp_x * p_ij_z; )

      f_i_x += tmp_x;
      f_1[j].x -= tmp_x;

      register BigReal tmp_y = force_r * p_ij_y;
      PAIR( virial_yy += tmp_y * p_ij_y; )
      PAIR( virial_yz += tmp_y * p_ij_z; )
      f_i_y += tmp_y;
      f_1[j].y -= tmp_y;
      
      register BigReal tmp_z = force_r * p_ij_z;
      PAIR( virial_zz += tmp_z * p_ij_z; )
      f_i_z += tmp_z;
      f_1[j].z -= tmp_z;
      //CkPrintf("Pre-pressure: %f %f %f | %f %f %f | %f %f\n", tmp_x, tmp_y, tmp_z, p_ij_x, p_ij_y, p_ij_z, vdw_dir, fast_dir);

      PPROF(
        const BigReal p_j_z = p_j->position.z;
        int n2 = (int)floor((p_j_z-pressureProfileMin)*invThickness);
        pp_clamp(n2, pressureProfileSlabs);
        int p_j_partition = p_j->partition;

        //CkPrintf("Pressure stats: %i | %i | %i | %f | %f | %i | %f %f | %f %f | %f %f\n", pressureProfileSlabs, n1, n2, p_i_partition, p_j_partition, pressureProfileAtomTypes, tmp_x, p_ij_x, tmp_y, p_ij_y, tmp_z, p_ij_z);

        pp_reduction(pressureProfileSlabs, n1, n2, 
                     p_i_partition, p_j_partition, pressureProfileAtomTypes,
                     tmp_x*p_ij_x, tmp_y * p_ij_y, tmp_z*p_ij_z,
                     pressureProfileReduction);

      )
#endif // SHORT
      } else {
#endif // TABENERGY
     INT( 
      vdw_dir = ( diffa * vdw_d + vdw_c ) * diffa + vdw_b;
      //BigReal force_r =  LAM(lambda_pair *) vdw_dir;
      reduction[pairVDWForceIndex_X] += force_sign * vdw_dir * p_ij_x;
      reduction[pairVDWForceIndex_Y] += force_sign * vdw_dir * p_ij_y;
      reduction[pairVDWForceIndex_Z] += force_sign * vdw_dir * p_ij_z;
      )

#if ( SHORT(1+) 0 ) // Short-range electrostatics

      NORMAL(
      BigReal fast_d = kqq * table_four_i[8];
      BigReal fast_c = kqq * table_four_i[9];
      BigReal fast_b = kqq * table_four_i[10];
      BigReal fast_a = kqq * table_four_i[11];
      )
      MODIFIED(
      BigReal modfckqq = (1.0-modf_mod) * kqq;
      BigReal fast_d = modfckqq * table_four_i[8];
      BigReal fast_c = modfckqq * table_four_i[9];
      BigReal fast_b = modfckqq * table_four_i[10];
      BigReal fast_a = modfckqq * table_four_i[11];
      )
    
      {
      ENERGY(
      register BigReal fast_val =
	( ( diffa * fast_d * (1/6.)+ fast_c * (1/4.)) * diffa + fast_b *(1/2.)) * diffa + fast_a;
      NOT_ALCHPAIR (
        electEnergy -=  LAM(lambda_pair *) fast_val;
        FEP(electEnergy_s -= fast_val;)
      )
      ) //ENERGY
      ALCHPAIR(
        ENERGY(electEnergy   -= myElecLambda * fast_val;)
        FEP(electEnergy_s -= myElecLambda2 * fast_val;)
        TI(
          NOENERGY(register BigReal fast_val = 
            ( ( diffa * fast_d * (1/6.)+ fast_c * (1/4.)) * diffa + fast_b *(1/2.)) * diffa + fast_a;)
          ALCH1(electEnergy_ti_1) ALCH2(electEnergy_ti_2)  -= fast_val;
        )
      )

      INT(
      register BigReal fast_dir =
      ( diffa * fast_d + fast_c ) * diffa + fast_b;
      // force_r -= -1.0 * LAM(lambda_pair *) fast_dir;
      reduction[pairElectForceIndex_X] +=  force_sign * fast_dir * p_ij_x;
      reduction[pairElectForceIndex_Y] +=  force_sign * fast_dir * p_ij_y;
      reduction[pairElectForceIndex_Z] +=  force_sign * fast_dir * p_ij_z;
      )
      }

      // Combined short-range electrostatics and VdW force:
      NOT_ALCHPAIR(
        fast_d += vdw_d;
        fast_c += vdw_c;
        fast_b += vdw_b;
        fast_a += vdw_a;  // not used!
      )
      register BigReal fast_dir =
                  (diffa * fast_d + fast_c) * diffa + fast_b;
      BigReal force_r =  LAM(lambda_pair *) fast_dir;
      ALCHPAIR(
        force_r *= myElecLambda; 
        force_r += alch_vdw_force;
        // special ALCH forces already multiplied by relevant lambda
      )
          
#ifndef NAMD_CUDA
      register BigReal tmp_x = force_r * p_ij_x;
      PAIR( virial_xx += tmp_x * p_ij_x; )
      PAIR( virial_xy += tmp_x * p_ij_y; )
      PAIR( virial_xz += tmp_x * p_ij_z; )

      f_i_x += tmp_x;
      f_j->x -= tmp_x;

      register BigReal tmp_y = force_r * p_ij_y;
      PAIR( virial_yy += tmp_y * p_ij_y; )
      PAIR( virial_yz += tmp_y * p_ij_z; )
      f_i_y += tmp_y;
      f_j->y -= tmp_y;
      
      register BigReal tmp_z = force_r * p_ij_z;
      PAIR( virial_zz += tmp_z * p_ij_z; )
      f_i_z += tmp_z;
      f_j->z -= tmp_z;

      PPROF(
        const BigReal p_j_z = p_j->position.z;
        int n2 = (int)floor((p_j_z-pressureProfileMin)*invThickness);
        pp_clamp(n2, pressureProfileSlabs);
        int p_j_partition = p_j->partition;

        pp_reduction(pressureProfileSlabs, n1, n2, 
                     p_i_partition, p_j_partition, pressureProfileAtomTypes,
                     tmp_x*p_ij_x, tmp_y * p_ij_y, tmp_z*p_ij_z,
                     pressureProfileReduction);

      )
#endif

#endif // SHORT
      TABENERGY( } )
#endif // FAST

#if ( FULL (EXCLUDED( SHORT ( 1+ ) ) ) 0 ) 
      const BigReal* const slow_i = slow_table + 4*table_i;

#ifdef ARCH_POWERPC  //Alignment and aliasing constraints
      __alignx (16, slow_i);
#if ( SHORT( FAST( 1+ ) ) 0 ) 
#pragma disjoint (*slow_i, *f_j)
#endif
#pragma disjoint (*slow_i, *fullf_j)
#endif  //ARCH_POWERPC

#endif //FULL 


#if ( FULL (MODIFIED( SHORT ( 1+ ) ) ) 0 ) 
      const BigReal* const slow_i = slow_table + 4*table_i;

#ifdef ARCH_POWERPC //Alignment and aliasing constraints
      __alignx (16, slow_i);
#if ( SHORT( FAST( 1+ ) ) 0 ) 
#pragma disjoint (*slow_i, *f_j)
#endif
#pragma disjoint (*slow_i, *fullf_j)
#endif //ARCH_POWERPC

#endif //FULL
      
#if ( FULL( 1+ ) 0 )
      BigReal slow_d = table_four_i[8 SHORT(+ 4)];
      BigReal slow_c = table_four_i[9 SHORT(+ 4)];
      BigReal slow_b = table_four_i[10 SHORT(+ 4)];
      BigReal slow_a = table_four_i[11 SHORT(+ 4)];
      EXCLUDED(
      SHORT(
      slow_a +=    slow_i[0];
      slow_b += 2.*slow_i[1];
      slow_c += 4.*slow_i[2];
      slow_d += 6.*slow_i[3];
      )
      NOSHORT(
      slow_d -= table_four_i[12];
      slow_c -= table_four_i[13];
      slow_b -= table_four_i[14];
      slow_a -= table_four_i[15];
      )
      )
      MODIFIED(
      SHORT(
      slow_a +=    modf_mod * slow_i[0];
      slow_b += 2.*modf_mod * slow_i[1];
      slow_c += 4.*modf_mod * slow_i[2];
      slow_d += 6.*modf_mod * slow_i[3];
      )
      NOSHORT(
      slow_d -= modf_mod * table_four_i[12];
      slow_c -= modf_mod * table_four_i[13];
      slow_b -= modf_mod * table_four_i[14];
      slow_a -= modf_mod * table_four_i[15];
      )
      )
      slow_d *= kqq;
      slow_c *= kqq;
      slow_b *= kqq;
      slow_a *= kqq;

      ENERGY(
      register BigReal slow_val =
        ( ( diffa * slow_d *(1/6.)+ slow_c * (1/4.)) * diffa + slow_b *(1/2.)) * diffa + slow_a;
      
      NOT_ALCHPAIR (
        fullElectEnergy -= LAM(lambda_pair *) slow_val;
        FEP(fullElectEnergy_s -= slow_val;) 
      )
      ) // ENERGY
          
      ALCHPAIR(
        ENERGY(fullElectEnergy   -= myElecLambda * slow_val;)
        FEP(fullElectEnergy_s -= myElecLambda2 * slow_val;)
        TI(
          NOENERGY(register BigReal slow_val =
	        ( ( diffa * slow_d *(1/6.)+ slow_c * (1/4.)) * diffa + slow_b *(1/2.)) * diffa + slow_a;)
          ALCH1(fullElectEnergy_ti_1) ALCH2(fullElectEnergy_ti_2) -= slow_val;
        )
      )

      INT( {
      register BigReal slow_dir =
	( diffa * slow_d + slow_c ) * diffa + slow_b;
      reduction[pairElectForceIndex_X] += force_sign * slow_dir * p_ij_x;
      reduction[pairElectForceIndex_Y] += force_sign * slow_dir * p_ij_y;
      reduction[pairElectForceIndex_Z] += force_sign * slow_dir * p_ij_z;
      } )


      TABENERGY(
        register BigReal slow_dir;
        if (tabtype < 0) {
          NOT_ALCHPAIR (
          FAST(
          NOSHORT(
          slow_d += vdw_d;
          slow_c += vdw_c;
          slow_b += vdw_b;
          slow_a += vdw_a; // unused!
          )
          )
          )
          slow_dir = (diffa * slow_d + slow_c) * diffa + slow_b;
        } else {
          slow_dir =
            ( diffa * slow_d + slow_c ) * diffa + slow_b;
          NOT_ALCHPAIR (
          FAST(
          NOSHORT(
          slow_dir = vdw_dir + slow_dir;
          )
          )
          )
        }
      )
      NOTABENERGY(
      NOT_ALCHPAIR (
        FAST(
        NOSHORT(
        slow_d += vdw_d;
        slow_c += vdw_c;
        slow_b += vdw_b;
        slow_a += vdw_a; // unused!
        )
        )
      )
      register BigReal slow_dir = (diffa * slow_d + slow_c) * diffa + slow_b;
      )
      BigReal fullforce_r = slow_dir LAM(* lambda_pair);
      ALCHPAIR (
        fullforce_r *= myElecLambda;
        FAST( NOSHORT(
          fullforce_r += alch_vdw_force;
        ))
      )
          
#ifndef NAMD_CUDA
      {
      register BigReal tmp_x = fullforce_r * p_ij_x;
      PAIR( fullElectVirial_xx += tmp_x * p_ij_x; )
      PAIR( fullElectVirial_xy += tmp_x * p_ij_y; )
      PAIR( fullElectVirial_xz += tmp_x * p_ij_z; )
      fullf_i_x += tmp_x;
      fullf_j->x -= tmp_x;
      register BigReal tmp_y = fullforce_r * p_ij_y;
      PAIR( fullElectVirial_yy += tmp_y * p_ij_y; )
      PAIR( fullElectVirial_yz += tmp_y * p_ij_z; )
      fullf_i_y += tmp_y;
      fullf_j->y -= tmp_y;
      register BigReal tmp_z = fullforce_r * p_ij_z;
      PAIR( fullElectVirial_zz += tmp_z * p_ij_z; )
      fullf_i_z += tmp_z;
      fullf_j->z -= tmp_z;

      PPROF(
        const BigReal p_j_z = p_j->position.z;
        int n2 = (int)floor((p_j_z-pressureProfileMin)*invThickness);
        pp_clamp(n2, pressureProfileSlabs);
        int p_j_partition = p_j->partition;

        pp_reduction(pressureProfileSlabs, n1, n2, 
                     p_i_partition, p_j_partition, pressureProfileAtomTypes,
                     tmp_x*p_ij_x, tmp_y * p_ij_y, tmp_z*p_ij_z,
                     pressureProfileReduction);

      )

      }
#endif
#endif //FULL

   } // for pairlist

