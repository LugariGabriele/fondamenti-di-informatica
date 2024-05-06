#include "matrix.h"

extern int mat_isupper(const struct matrix* matr) {
	
	size_t rows = matr->rows;
	size_t cols = matr->cols;
	double *data;
	data = matr->data;
	if (cols != rows)
	{
		return 0;
	}

	for (size_t r = 0; r <rows ; r++) //rows
	{
		for (size_t c = 0; c<r; c++) //cols
		{
			if (data[r*cols+c]!=0)
			{
				return 0;
			}
		}
	}
	return 1;
}