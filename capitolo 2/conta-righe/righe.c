#include <stdio.h>
#include "righe.h"

extern unsigned int conta_righe(FILE *filein)
{
    // apriamo file
    FILE *f1 = fopen(filein, "rt");
    // controllo apertura giusta
    if (f1 == NULL)
    {
        return 0;
    }
    // paret da 1 perchè anche se vuoto la contiamo come riga
    unsigned int righe = 1;
    int corr = -1;
    while (1)
    {
        corr = getc(f1);
        if (corr == EOF)
        {
            break;
        }
        if (corr == '\n')
        {
            righe++;
        }
    }
    fclose(f1);
    return righe;
}

int main()
{
   int res= conta_righe("file1.txt");
}
