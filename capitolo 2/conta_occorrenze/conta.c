#include<stdlib.h>
#include <string.h>
extern size_t conta_occorrenze(const char *testo,const char *stringa){ //accetta due stringhe e conta le volte di sringa in testo 
if (testo== NULL||stringa== NULL||testo==""||stringa=="")
{
    return 0;
}
size_t count =0;
 while (1)
 {
    testo = strstr(testo,stringa);//ritorna puntatore al primo carattere della stringa trovata
    if (testo==NULL)// non ci sono occorrenze
    {
        break;
    }
    testo++;
    count++;
    
 }
 return count;

}

int main(){
    char testo[]= "qui bisogna cercare la parola cercare";
    char stringa []= "cercare";
    size_t c = conta_occorrenze(testo,stringa);
}