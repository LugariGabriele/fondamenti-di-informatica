#include <stdio.h>


extern void stampa_cono(unsigned int h);
int main() {
	for ( unsigned int i = 1; i < 10; i++) {
		stampa_cono(i);
	}
}
