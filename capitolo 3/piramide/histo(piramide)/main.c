#include <stdio.h>
#include <stdlib.h>

 extern void stampa(char c);
 extern void histogram(const char* value, size_t n);
 int main() {
	 char h[] = { 1,2,3 };
	 puts("primo istogramma");
	 histogram(h, sizeof h);
	 puts("");

	 char h2[] = { 12,1,6,8 };
	 puts("secondo istogramma");
	 histogram(h2, sizeof h2);
	 puts("");
 }