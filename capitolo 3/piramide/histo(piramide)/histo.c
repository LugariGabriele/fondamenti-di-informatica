#include <stdio.h>
#include <stdlib.h>

void stampa(char c) {
	for (size_t i = 0; i < c; i++)
	{
		printf("*");
	}
}
extern void histogram(const char* value, size_t n) {
	if (value==NULL|| n==0)
	{
		return NULL;
	}
	for (size_t i = 0; i < n; i++)
	{
		stampa(value[i]);
		printf("\n");
	}

}
