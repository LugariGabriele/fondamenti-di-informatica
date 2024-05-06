#include "alterna.h"

char* alterna(const char* s1, const char* s2) {

	char* dest = malloc(strlen(s1) + strlen(s2) + 1);
	size_t i = 0, j = 0, k = 0;
	while (s1[i]!=0 || s2[j]!=0)
	{
		if (s1[i] != 0)
		{
			dest[k] = s1[i];
			k++; 
			i++;
		}
		if (s2[j] != 0)
		{
			dest[k] = s2[j];
			k++;
			j++;
		}

	}
	dest[k] = 0;
	return dest;
 }
