#include <string.h>
#include <stdlib.h>
#include <stdio.h>
extern char *concatena(const char *s1, const char *s2)
{

    char *res = malloc(strlen(s1) + strlen(s2) + 1);
    res = strcpy(res, s1); // copia anche 0
    strcat(res, s2);
    return res;
}

int main()
{
    char *s1 = "prima stringa";
    char *s2 = "seconda stringa";
    char *s = concatena(s1, s2);
    free(s);
}