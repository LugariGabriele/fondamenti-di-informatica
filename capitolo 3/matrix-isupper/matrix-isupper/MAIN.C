#include "matrix.h"

int main() {
	double data1[] = {
		0,1,2,
		0,3,4,
		0,2,5
	};
	struct matrix mat1 = { 3,3,data1 };
	int ret = mat_isupper(&mat1);
}
