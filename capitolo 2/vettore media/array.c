#include "array.h"

double media(double *arr, size_t n) {
    double sum = 0.0;
    for (size_t i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}
int main (void){
    double arr[]={9,8,7,6,5,4,3,2,1};
    size_t n= sizeof arr/ sizeof *arr;
   double res= media(arr,n);
}