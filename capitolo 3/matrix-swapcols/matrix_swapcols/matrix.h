#ifndef matrix_h
#define matrix_h
#include <stdlib.h>
struct matrix
{
	size_t rows, cols;
	double* data;
};

extern void mat_swapcols(struct matrix* mat, size_t c1, size_t c2);
#endif // !matrix_h
