
#include <stdio.h>
extern void capsula(FILE* f, unsigned char n);
int main() {
	unsigned char n;
	for (n = 1; n < 10; ++n) {
		capsula(stdout, n);
	}
}
