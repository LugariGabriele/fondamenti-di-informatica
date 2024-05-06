#ifndef matrix_h
#define matrix_h
#include<stdlib.h>
#include<string.h>
struct matrix
{
	size_t rows, cols;
	double* data;
};
extern void swap_rows(struct matrix* matr, size_t r1, size_t r2);
#endif // !matrix_h
