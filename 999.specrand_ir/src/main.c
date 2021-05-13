#include <stdio.h>
#include <stdlib.h>
#include "specrand.h"

#define  MAX_RANGE 2147483647L /* 2^31 - 1 */
#undef TRY_REENTRANT_VERSIONS

/* Print every <n>th number.  No effect if TRY_REENTRANT_VERSIONS is enabled */
#define SKIP 10

void run_sequence(int linked, int count, int seed, int saved_seed2, int saved_seed3);

int main(int argc, char *argv[]) {
  int seed, count;

  if (argc < 2) {
    printf("Please supply seed and count\n");
    return(1);
  }
  seed = atoi(argv[1]);
  count = atoi(argv[2]);

  run_sequence(1, count, seed, seed, seed);

  run_sequence(0, count, seed, seed - 2, seed + 2);

  return(0);
}

#if defined(TRY_REENTRANT_VERSIONS)
void run_sequence(int linked, int count, int seed, int saved_seed2, int saved_seed3) {
  int i = 0;
  int seed2, seed3;
  double tmpf[3];
  long  tmpl[3];
  int   tmpi[3];

  puts("\n=================================");
  printf("seed = %d\nseed2 = %d\nseed3 = %d\ncount = %d\n", seed, saved_seed2, saved_seed3, count);

  printf("\n%slinked %%f sequence:\n", (linked ? "" : "un"));
  printf("rand()        rand_r(seed2) rand_r(seed3)\n");
  spec_srand(seed);
  seed2 = saved_seed2;
  seed3 = saved_seed3;
  for(i = 0; i < count; i++) {
    tmpf[0] = spec_rand();
    tmpf[1] = spec_rand_r(&seed2);
    tmpf[2] = spec_rand_r(&seed3);
    printf("%-13f %-13f %-13f...", tmpf[0], tmpf[1], tmpf[2]);
    if (   (linked && tmpf[0] == tmpf[1] && tmpf[1] == tmpf[2] && seed2 == seed3)
        || (!linked && tmpf[0] != tmpf[1] && tmpf[1] != tmpf[2] && seed2 != seed3))
      puts("ok");
    else
      printf("NOT OK:01:%d 12:%d s23:%d\n",
             linked ^ (tmpf[0] == tmpf[1]),
             linked ^ (tmpf[1] == tmpf[2]),
             linked ^ (seed2   == seed3)  );
  }

  spec_srand(seed);
  seed2 = saved_seed2;
  seed3 = saved_seed3;
  printf("\n%slinked %%d sequence (scaled) (1-%ld):\n", (linked ? "" : "un"), MAX_RANGE);
  printf("rand()        rand_r(seed2) rand_r(seed3)\n");
  for(i = 0; i < count; i++) {
    tmpi[0] = (int)((spec_rand()         * MAX_RANGE) + 1);
    tmpi[1] = (int)((spec_rand_r(&seed2) * MAX_RANGE) + 1);
    tmpi[2] = (int)((spec_rand_r(&seed3) * MAX_RANGE) + 1);
    printf("%-13d %-13d %-13d...", tmpi[0], tmpi[1], tmpi[2]);
    if (   (linked && tmpi[0] == tmpi[1] && tmpi[1] == tmpi[2] && seed2 == seed3)
        || (!linked && tmpi[0] != tmpi[1] && tmpi[1] != tmpi[2] && seed2 != seed3))
      puts("ok");
    else
      printf("NOT OK:01:%d 12:%d s23:%d\n",
             linked ^ (tmpi[0] == tmpi[1]),
             linked ^ (tmpi[1] == tmpi[2]),
             linked ^ (seed2   == seed3)  );
  }

  spec_srand(seed);
  seed2 = saved_seed2;
  seed3 = saved_seed3;
  printf("\n%slinked %%d sequence (unscaled) (1-2147483647):\n", (linked ? "" : "un"));
  printf("lrand48()        lrand48_r(seed2) lrand48_r(seed3)\n");
  for(i = 0; i < count; i++) {
    tmpl[0] = spec_lrand48();
    tmpl[1] = spec_lrand48_r(&seed2);
    tmpl[2] = spec_lrand48_r(&seed3);
    printf("%-16ld %-16ld %-16ld...", tmpl[0], tmpl[1], tmpl[2]);
    if (   (linked && tmpl[0] == tmpl[1] && tmpl[1] == tmpl[2] && seed2 == seed3)
        || (!linked && tmpl[0] != tmpl[1] && tmpl[1] != tmpl[2] && seed2 != seed3))
      puts("ok");
    else
      printf("NOT OK:01:%d 12:%d s23:%d\n",
             linked ^ (tmpl[0] == tmpl[1]),
             linked ^ (tmpl[1] == tmpl[2]),
             linked ^ (seed2   == seed3));
  }
}
#else
/* Regular old serial versions */
void run_sequence(int linked, int count, int seed, int saved_seed2, int saved_seed3) {
  int i = 0;
  long tmpl;
  double tmpf;

  /* Head off some warnings */
  linked = saved_seed3 = seed - count;
  seed = saved_seed2;

  puts("\n=================================");
  printf("seed = %d\ncount = %d\n", seed, count);

  spec_srand(seed);
  printf("\n%%f sequence (unscaled):\n");
  for(i = 0; i < count; i++) {
    tmpf = spec_rand();
    if (i % SKIP == 0)
      printf("%-13f\n", tmpf);
  }

  spec_srand(seed);
  printf("\n%%d sequence (scaled) (1-%ld):\n", MAX_RANGE);
  for(i = 0; i < count; i++) {
    tmpf = spec_rand();
    if (i % SKIP == 0)
      printf("(%13f * 0x%lx) + 1 = %-13d\n", tmpf, (unsigned long)MAX_RANGE, (int)((tmpf * MAX_RANGE) + 1));
  }

  spec_srand(seed);
  printf("\n%%f sequence (scaled):\n");
  for(i = 0; i < count; i++) {
    tmpl = spec_lrand48();
    if (i % SKIP == 0)
      printf("%16ld / 0x7fffffffL = %-13f\n", tmpl, (double)tmpl / 0x7fffffffL);
  }

  spec_srand(seed);
  printf("\n%%d sequence (unscaled) (1-2147483647):\n");
  for(i = 0; i < count; i++) {
    tmpl = spec_lrand48();
    if (i % SKIP == 0)
      printf("%-16ld\n", tmpl);
  }
}
#endif
