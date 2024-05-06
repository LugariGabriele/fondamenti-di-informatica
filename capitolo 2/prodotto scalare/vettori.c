#include "vettori.h"

extern double prodotto_scalare(const double *x, const double *y,size_t n){
    double res;
    if (n=0|| x==NULL||y==NULL){
        return 0;
    }
     res=0;
    for (size_t i = 0; i < n; i++)
    {
            res+=x[i]*y[i];
    }
    return res;
}
int main(void){
    double ret=0;
    double arr1[]={1,2,3,4};
    double arr2[]={4,3,2,1};
   
    ret = prodotto_scalare(arr1,arr2,sizeof arr1/ sizeof arr1[0]);
    return 0;
}