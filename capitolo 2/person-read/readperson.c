#include<stdio.h>
#include <stdlib.h>
struct person
{
    char nome[25];
    unsigned int age;
};

void person_read(FILE *f,struct person *pp){
fscanf(f,"%s%u",pp->nome,&pp->age);
}

int main(){

    struct person p;
    FILE *f=fopen("person1.txt","rt");
    if (f==NULL){
        return EXIT_FAILURE;
    }
    person_read(f,&p);
    fclose(f);
}
