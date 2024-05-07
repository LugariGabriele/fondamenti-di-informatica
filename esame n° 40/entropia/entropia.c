#include<stdint.h>
#include <math.h>

double entropia(const double* v, size_t n) {
	if (v == NULL || n == 0) {
		return 0;
	}
	int tuttizero = 1;
	for (size_t i = 0; i < n; i++)
	{
		if (v[i] != 0)
		{
			tuttizero = 0;
			break;
		}
		if (tuttizero==1)
		{
			return 0;
		}
	}


	double E=0;
	for (size_t i = 0; i < n; i++)
	{
		if (v[i] != 0) {


			E -= v[i] * log2(v[i]);
		}
	}

	return E;
}