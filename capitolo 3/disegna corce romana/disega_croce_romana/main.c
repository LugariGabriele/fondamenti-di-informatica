#include <stdio.h>
extern void croceromana(FILE* f, unsigned char n);

int main() {
	for (unsigned char i = 1; i < 5; i++)
	{
		croceromana(stdout, i);
	}
}