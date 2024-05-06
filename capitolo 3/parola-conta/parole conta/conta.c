#include<stdlib.h>
#include <string.h>
extern size_t conta_parole(const char* s) {
	size_t parole =0;
	
	if (s[0]==0)
	{
		return 0;
	}
	int inparola;
	if (s[0] ==' ')
	{
		inparola = 0; // non ancora in parola
	}
	else
	{
		inparola = 1;
	}

	for (size_t i = 0; i<strlen(s); i++)
	{
		if (inparola)
		{
			if (s[i]==' ') //sono in una parola e ho trovato uno spazio
			{
				inparola = 0;
				parole++;
			}
		}
		else
		{
			if (s[i]!=' ') // se non sono in parola ma ho incontarto un non spazio
			{
				inparola = 1;

			}
		}
		

	}
	if (inparola)
	{
		parole++;
	}
	return parole;
}