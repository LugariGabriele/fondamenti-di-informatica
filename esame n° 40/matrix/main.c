#include "matrix.h"

int main(void) {
	struct matrix* test = calloc(sizeof(struct matrix), 1);
	test->rows = 4;
	test->cols = 3;
	double v[] = { 1,2,3,5,6,7,9,10,11,13,14,16 };
	test->data = v;
	struct matrix* res = mirror_mat(test);
	free(res->data);
	free(res);
	return 0;
}