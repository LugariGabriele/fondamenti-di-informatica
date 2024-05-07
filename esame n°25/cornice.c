#include <stdio.h>

void ripeti(size_t n, char c) {
    while (n>0)
    {
        printf("%c",c);
        n--;
    }
}

void stampa_cornice(size_t n) {
    // Stampa il disegno della cornice per ogni iterazione
    for (size_t i = 0; i < n; i++) {
        printf(" ");
        printf(".--.");
        ripeti(5, ' ');// Stampa la prima riga
    }
    printf("\n");

    for (size_t i = 0; i < n; i++) {
        printf("::::.\\::::");    // Stampa la seconda riga
       
    }
    printf("\n");

    for (size_t i = 0; i < n; i++) {
        ripeti(6,' ');// Stampa la terza riga
        printf("`--'");
    }
    printf("\n");
}



	
	
