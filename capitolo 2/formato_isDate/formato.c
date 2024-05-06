#include<string.h>

static int is_num(char c){
    return c>= '0' && c<='9'; // restituisce 1 se numero
}

extern int is_date(const char *s){
    if (s == NULL){
    return 0;
    }
    if(strlen(s)!=10){
        return 0;
    }
    int giorno= is_num(s[0]) && is_num(s[1]);
    int mese = (s[2] =='/') && is_num(s[3]) && is_num(s[4]);
    int anno = (s[5] =='/') && is_num(s[6]) && is_num(s[7]) && is_num(s[8]) && is_num(s[9]);

return giorno && mese&& anno; // da uno se tutti 1
}

int main (){
    int i=is_date("12/06/2003");
    i=is_date("12/02/14");
}