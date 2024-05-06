#include <stdio.h>
#include <stdlib.h> // per malloc e free

extern double *arraysomma(const double *arr1, const double *arr2, size_t n) {
    // Allocare la memoria per l'array di destinazione
    double *dest = malloc(n * sizeof(double));
    if (dest == NULL) {
        // Se malloc fallisce, restituire NULL o gestire l'errore come meglio preferisci
        return NULL;
    }

    // Calcolare la somma elemento per elemento
    for (size_t i = 0; i < n; i++) {
        dest[i] = arr1[i] + arr2[i];
    }

    return dest;
}

int main() {
    double arr1[] = {1, 2, 3, 4};
    double arr2[] = {1, 2, 3, 4};
    size_t n = sizeof(arr1) / sizeof(*arr1);

    // Chiamare la funzione e assegnare il risultato a un puntatore
    double *somma = arraysomma(arr1, arr2, n);
    if (somma == NULL) {
        printf("Errore: memoria insufficiente\n");
        return 1;
    }

    // Stampa il risultato
    printf("Risultato della somma:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%.2f ", somma[i]);
    }
    printf("\n");

    // Liberare la memoria allocata dinamicamente
    free(somma);

    return 0;
}
