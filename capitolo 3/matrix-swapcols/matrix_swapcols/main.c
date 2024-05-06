#include "matrix.h"
#include <stdio.h>
int main() {
	double data[] = {
		1,2,3,
		0,4,5,
		0,6,7
	};
	struct matrix matr1 = { 3,3,data };

	mat_swapcols(&matr1, 1, 2);

}