#include "matrix.h"

extern double det3x3(double *m)
{

    // in questo caso matr[] è rappresentato come ogni tre valori una riga
    // es.....{1,2,3,4,5,6,7,8,9}

    double det = 0;
    det = m[0] * m[4] * m[8] + m[1] * m[5] * m[6] + m[2] * m[3] * m[7] - m[6] * m[4] * m[2] - m[1] * m[3] * m[8] - m[0] * m[5] * m[7];
    return det;
}
int main(){
    double det;
    double a[]={1,2,3,
                1,1,1,
                1,2,1};
    det=det3x3(a);

}