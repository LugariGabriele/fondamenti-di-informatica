#include "matrix.h"

double* diag(double* matr, size_t n) {
	
	double* D = malloc(n * sizeof(double));
	for (size_t i = 0; i <n; i++)
	{
		D[i] = matr[i * n + i];
	}
	return D;
}