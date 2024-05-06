#include <stdio.h>

extern void write_bin(const double *values,size_t n, FILE *f){ // deve scrivere sul file  ogni valore in binario come f è 
// rappresentato in memoria

FILE *fin = fopen(f,"wb");
fwrite(values,sizeof(double),n,fin);


fclose(fin);
}

