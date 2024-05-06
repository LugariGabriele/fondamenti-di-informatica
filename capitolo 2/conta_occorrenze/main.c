#include<stdlib.h>
#include <string.h>
extern size_t conta_occorrenze(const char *testo,const char *stringa);

int main(){
    char testo[]= "qui bisogna cercare la parola cercare";
    char stringa []= "cercare";
    size_t c = conta_occorrenze(testo,stringa);
}