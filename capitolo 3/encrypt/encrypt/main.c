#include <stdlib.h>
extern void encrypt(char* s, unsigned int n);

int main() {
	char s[] = "questa� una prova";
	size_t n = sizeof s;
	encrypt(s, n);
}