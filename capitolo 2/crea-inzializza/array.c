#include <stdlib.h>

extern int *crea_inizializza(size_t n, int val)
{
    // dimensione n di un vettore e il suo valore val e
    // deve allocare dinamicamente un vettore di n elementi il cui primo valore è val e gli altri val-1 ecc..
   int *dst = malloc(n * sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        dst[i] = val - i;
    }

    return dst;
}

int main (){
   
    int *vett= crea_inizializza(5,3);
    free(vett);
}