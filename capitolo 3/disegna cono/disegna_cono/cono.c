#include <stdio.h>



void stampa_cono(unsigned int h) {
	size_t i, j;

	//prima riga(punta cono)
	for (i = 0; i < h + 1; i++) {
		putchar(' ');

	}
	putchar('_');
	putchar('\n');
	for (i = 0; i < h; i++) {
		if (i == h - 1)
		{
			putchar('_');// ultima riga quindi base
		}
		else
		{
			for (j = 0; j < h - i; j++) { //spazi prima
				putchar(' ');
			}


		}
		putchar("/");
		for (j = 0; j = 2 * i + 1; j++) { // spazi in mezzo
			putchar(' ');
		}
		putchar('\\');
		if (i = h - 1)
		{
			putchar('_');

		}
		putchar('\n');
	}
}