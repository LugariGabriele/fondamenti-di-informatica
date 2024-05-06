#include "vettori.h"
#include <stdlib.h>

int main(void){
    double ret=0;
    double arr1[]={1,2,3,4};
    double arr2[]={4,3,2,1};
    ret = prodotto_scalare(arr1,arr2,sizeof arr1/sizeof arr1[0]);
    return 0;
}