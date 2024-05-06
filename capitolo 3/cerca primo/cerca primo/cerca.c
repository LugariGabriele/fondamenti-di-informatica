# include <string.h>
#include <stdlib.h>
extern char* cerca_primo(char* s, const char* list) {
	for (size_t i = 0; i < strlen(s); i++)
	{
		for (size_t j = 0; j < strlen(list); j++)
		{
			if (s[i]==list[j])
			{
				return s+i;
			}
		}
	}
	return NULL;
}