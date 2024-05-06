#include <stdlib.h>
#include <string.h>

char* rimuovimultipli(const char* str) {
	if (str== NULL)
	{
		return;
	}
	size_t len = strlen(str);
	char* stringa_ritornata = malloc(len + 1);
	size_t i = 1, j = 0;
	stringa_ritornata[0]=str[0];
	for (i; i <= len; i++)	
	{
		if (str[i]!=stringa_ritornata[j])
		{
			j++;
			stringa_ritornata[j] = str[i];
		}
		
	}
	stringa_ritornata = realloc(stringa_ritornata, j + 1);
	return stringa_ritornata;
}