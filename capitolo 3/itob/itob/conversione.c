#include<stdlib.h>

extern void itob(unsigned int x, char* sz, size_t n) {
	// un numero x da trasfomare in binario con n bit e mettere in sz
	
	// conversione
	for (size_t i = 0; i < n; i++) {
		sz[n - i - 1] = '0' + (x % 2);
		x /= 2;
	}
	sz[n] = 0;

}