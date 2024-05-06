#include "array.h"
int main (void){
    double arr[]={9,8,7,6,5,4,3,2,1};
    size_t n= sizeof arr/ sizeof *arr;
   double res= media(arr,n);
}