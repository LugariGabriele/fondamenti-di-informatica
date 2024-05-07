#include<stdint.h>
#include <math.h>


double entropia(const double* v, size_t n);

int main() {


	double v[] = { 0.020533, 0.003171, 0.000000, 0.010368, 0.000000, 0.002318, 0.024070, 0.023338, 0.036511, 0.038260, 0.007441, 0.028339, 0.010653, 0.040415, 0.027892, 0.030413, 0.015166, 0.029152, 0.022647, 0.029234, 0.003863, 0.034641, 0.006546, 0.036918, 0.039317, 0.008172, 0.006749, 0.039236, 0.022769, 0.034519, 0.031388, 0.030250, 0.015206, 0.030006, 0.003537, 0.013743, 0.038626, 0.003822, 0.004594, 0.036877, 0.024964, 0.030169, 0.033787, 0.002358, 0.006221, 0.011872, 0.028461, 0.010734, 0.004391, 0.006343 };
	
	double res = entropia(v, 50);
	return 0;

}
