#include <stdio.h>

void ripeti(unsigned int n, unsigned char c) {
	while (n>0)
	{
		putchar(c);
		n--;
	}
}

void stampa_cross(unsigned int n) {
	if (n==0)
	{
		putchar('x');
		putchar('\n');
	}
	else {
		//parte alta
		for (size_t i = 0; i < n; i++)
		{
			ripeti(i, ' '); //spazi prima
			putchar('\\');
			ripeti(2*(n-i)-1, ' ');//spazi in mezzo
			putchar('/');
			putchar('\n');
		}
		//centro
		ripeti(n, ' ');
		putchar('x');
		ripeti(n, ' ');
		putchar('\n');
		//basso
		for (size_t i = 0; i < n; i++)
		{
			ripeti(n - 1 - i, ' '); //spazi prima
			putchar('/');
			ripeti(2 * i + 1, ' ');//spazi in mezzo
			putchar('\\');
			putchar('\n');
		}
	}
}

/*
\123/
1\1/1
12+12
1/1\1
/123\

\12345/
1\123/1
12\1/12
*/