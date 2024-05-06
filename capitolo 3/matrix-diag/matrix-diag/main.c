#include "matrix.h"

int main() {
	double a[] = {
		1,2,3,
		4,5,6,
		7,8,9

	};
	double *diagonaleA = diag(a, 3);
	free(diagonaleA);
}