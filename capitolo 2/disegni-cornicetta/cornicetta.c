#include <stdio.h>
#include <string.h>
extern void stampa_cornicetta(const char *s)
{
    // cornice con spazi a sx e dx di stringa
    size_t len = strlen(s);
    putchar('/');
    for (size_t i = 0; i < len + 2; i++)
    {
        printf("-");
    }
    putchar('\\');
    putchar('\n');
    printf("| %s |\n", s);
    putchar('\\');
    for (size_t i = 0; i < len + 2; i++)
    {
        printf("-");
    }
    putchar('/');
}
int main()
{
    char s[] = {"ciao"};
    stampa_cornicetta(s);
}
