#include <stdio.h>

extern void stampa_onde(FILE *f, int n)
{ // n numero di onde
    // deve scrivere su file f le ondee se n=0 stampa 3 righe vuote...
    int i;
    for (i = 0; i < n; i++)
    {
        fprintf(f, " -     ");
    }
    fprintf(f, "\n");

    for (i = 0; i < n; i++)
    {
        fprintf(f, "/ \\     \n");
    }
    fprintf(f, "\n");

    for (i = 0; i < n; i++)
    {
        fprintf(f, "   \\-/    ");
    }
    fprintf(f, "\n");
}

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        stampa_onde(stdout, i);
    }
}