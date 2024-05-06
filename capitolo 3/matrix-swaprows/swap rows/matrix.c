#include "matrix.h"


extern void swap_rows(struct matrix* matr, size_t r1, size_t r2) {
	size_t r_size, cols;
	double* data,*tmp;
	cols = matr->cols;
	data = matr->data;
	r_size = cols * sizeof(double);
	//moltiplico r1 per il numero delle colonne per creare le righe lunghe giusto
	r1 *= cols;
	r2 *= cols;
	
	tmp = malloc(r_size);

	memcpy(tmp, data + r1, r_size);
	memcpy(data + r1, data + r2, r_size);
	memcpy(data + r2, tmp, r_size);
	free(tmp);
}