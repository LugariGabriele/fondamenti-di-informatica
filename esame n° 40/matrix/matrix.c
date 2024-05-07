#include "matrix.h"

struct matrix* mirror_mat(const struct matrix* m) {
	if (m==NULL)
	{
		return NULL;
	}

	struct matrix* res = calloc(sizeof(struct matrix), 1);
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = calloc(res->rows * res->cols, sizeof(double));

	for (size_t row = 0; row < res->rows; row++)
	{
		for (size_t col = 0; col < res->cols; col++)
		{
			res->data[(res->cols - col - 1) + row * res->cols] = m->data[col + row * m->cols]; //per vedere valori di m

			
		}
	}

	return res;











}