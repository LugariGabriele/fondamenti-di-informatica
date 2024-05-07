#include "matrix.h"
struct vector* mat_vectorize(const struct matrix* m, enum vectorize_by dir) {
	if (m == NULL) {
		return NULL;
	}
	if (dir != BY_ROW && dir != BY_COLUMN) {
		return NULL;
	}
	double* data = calloc(m->cols * m->rows, sizeof(double));
	if (data == NULL) {
		return NULL;
	}
	if (dir== BY_ROW)
	{
		for (size_t i = 0; i < m->cols * m->rows; i++)
		{
			data[i] = m->data[i];

		}
	}
	else if (dir == BY_COLUMN) {
		for (size_t i = 0, r = 0, c = 0; i < m->cols * m->rows; i++) {
			data[i] = m->data[r * m->cols + c];
			++r;
			if (r % m->rows == 0) {
				r = 0;
				c++;
			}
		}
	}
	struct vector* v = calloc(1, sizeof(struct vector));
	v->data = data;
	v->n = m->cols * m->rows;
	return v;
}