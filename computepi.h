#include <stdio.h>
#define BASELINE 1
#define MONTE_CARLO 1
#define MACHIN 1
#define OPENMP_2
#define OPENMP_4
//#define AVX
//#define AVXUNROLL
double compute_pi_baseline(size_t N);
double monte_carlo_pi(size_t N);
double machin_pi();
double compute_pi_openmp(size_t N, int threads);
double compute_pi_avx(size_t N);
double compute_pi_avx_unroll(size_t N);
