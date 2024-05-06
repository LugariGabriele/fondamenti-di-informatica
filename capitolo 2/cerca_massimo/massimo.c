#include<stdio.h>
extern int cercaMassimo(const char *filename){ // aprire in lettura testo e file contiene numeri decimali
int temp;
int m=0;
FILE *f =fopen(filename,"rt");
while (fscanf(f,"%d",&temp)!=EOF) // finchè successo leggo e lo punta a temp
{
    if(temp>m){
        m=temp;
    }

}
fclose(f);
return m;
}
int main(){
    int i;
    i = cercaMassimo("max1.txt");
}