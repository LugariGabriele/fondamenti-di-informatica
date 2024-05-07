#include "matrix.h"

int main(void) {
	struct matrix A;
	A.cols = 3;
	A.rows = 3;
	double data[] = { 1,2,3,4,5,6,7,8,9 };
	A.data = data;
	struct vector* res = mat_vectorize(&A, BY_ROW);
	res = mat_vectorize(&A, BY_COLUMN);
	return 0;
}