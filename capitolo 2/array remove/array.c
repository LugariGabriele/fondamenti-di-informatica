#include "array.h"
#include<stdio.h>
extern void array_remove(double *arr,size_t *pn,size_t pos){
    // se la posizione da eliminare è fuori vetoore non faccio nulla
    if (pos>=*pn)
    {
        return;
    }
    //decremento il numero elementi
    *pn =*pn-1;
    //tutti gli elementi da pos a *pn-1 si spostano indietro
    for (size_t i = pos; i < *pn; i++)
    {
        arr[i]=arr[i+1];
    }
    
}
static void arrayprint(double *arr,size_t n){
  for (size_t i = 0; i < n; i++)
   {
    printf("%f ",arr[i]);
   }  
   printf("\n");
}

int main(int argc, char const *argv[])
{
   double a[]={22.4,-4.87,140,1.99,87.7};
   size_t n =sizeof a/ sizeof *a;
   arrayprint(a,n);
   array_remove(a,&n,2);
   arrayprint(a,n);
   
   
}
