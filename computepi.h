#include <stdio.h>

double compute_pi_baseline(size_t N);
double monte_carlo_pi(size_t N);
double compute_pi_leibniz(N);
double machin_pi(size_t N);
double compute_pi_openmp(size_t N, int threads);
double compute_pi_avx(size_t N);
double compute_pi_avx_unroll(size_t N);
