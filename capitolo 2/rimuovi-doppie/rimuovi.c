#include<stdio.h>

 int rimuovidoppie(const char *filein,const char *fileout){
    // deve aprire in in lettura e out in scrittura e copiare tutti i caratteri di in ad out 
    //riportando solo una volta i caratteri consecutivi riprodotti

    FILE *fin = fopen(filein, "rt");
    FILE *fout = fopen(fileout,"wt");
    if (fin == NULL || fout == NULL)
    {
return 0;    }
    int corr=-1; // carattere corrente
    int cold; // carattere precedente
    while (1)
    {
        cold = corr;
        corr= fgetc(fin);
        if (corr == EOF){
            break;
        }
        if (corr != cold)
        {
            fputc(corr,fout);
        }
        
    }
    fclose(fin);
    fclose(fout);
    return 1;
}
int main (){
    int ris = rimuovidoppie("testo1.txt","ris1.txt");
}