#include <stdio.h>
void ripeti(unsigned char c,FILE *f, unsigned char n) {
	while (n>0)
	{
		putc(c, f);
		n--;
	}
}


void croceromana(FILE* f, unsigned char n) {
	size_t i;
	//sopra croce
	for ( i = 0; i <n; i++)
	{
		ripeti(' ', f, n * 2);
		putc('|', f);
		ripeti(' ', f, n * 2);
		putc('\n', f);
	}
	//croce
	ripeti('-', f, n * 2);
	putc('+', f);
	ripeti('-', f, n * 2);
	putc('\n', f);
	//basso
	for ( i = 0; i < n*2; i++)
	{
		ripeti(' ', f, n * 2);
		putc('|', f);
		ripeti(' ', f, n * 2);
		putc('\n', f);
	}

}