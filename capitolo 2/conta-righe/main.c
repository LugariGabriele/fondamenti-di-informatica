#include "righe.h"

void main_test( char *filename,unsigned int n){
    FILE *f;

    f = fopen(filename,"rt");
    printf("il file \"%s\" ha %u righe(dovrebber essere %u).\n",filename,conta_righe(f),n);
    fclose(f);
}

int main (){
    main_test("file1.txt",5);

}
