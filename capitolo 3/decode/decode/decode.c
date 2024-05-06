#include "decode.h"
#define  _CRT_SECURE_NO_WARNINGS
#include <string.h>
void decode(FILE* f) {
	
	
	int carattere;
	int d;
	while (1)
	{
		carattere = fgetc(f);
		if (carattere == EOF) {
			break;
		}
		if (carattere >= '1' && carattere <= '9')
		{
			d = fgetc(f);

			if (d == EOF)
			{
				break;
			}
			for (int i = 0; i < carattere-'0'; i++)
			{
				putc(d, stdout);

			}
		}
		else
		{
			putc(carattere, stdout);
		}
	}
	

	
}