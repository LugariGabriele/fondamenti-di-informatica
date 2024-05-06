#include "quadrati.h"



void stampa_quadrato(unsigned int lato) {
	unsigned int i;
	if (lato==0)
	{
		return;
	}
	if (lato==1)
	{
		putchar('*');
		putchar('\n');

		return;
	}
	//sopra
	for ( i = 0; i < lato; i++)
	{
		putchar('*');
	}
	putchar('\n');
	//centro
	for ( i = 0; i <lato-2; i++)
	{
		putchar('*');
		for (unsigned int j = 0; j < lato-2; j++)
		{
			putchar(' ');
		}
		putchar('*');
		putchar('\n');
	}
	//base
	for (i = 0; i < lato; i++)
	{
		putchar('*');
	}
	putchar('\n');
}