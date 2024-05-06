#include "matrix.h"

extern void mat_swapcols(struct matrix* matr ,size_t c1, size_t c2) {
	size_t rows, cols;
	rows = matr->rows;
	cols = matr->cols;
	double* data;
	data = matr->data;

	for (size_t r = 0; r < rows; r++)
	{
		//r*cols+c1 è il primo elemento della riga a colonna c1
		double d = data[r * cols + c1];
		data[r * cols + c1] = data[r * cols + c2];
		data[r * cols + c2] = d;
	}
}