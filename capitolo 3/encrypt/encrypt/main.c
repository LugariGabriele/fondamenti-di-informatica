#include <stdlib.h>
extern void encrypt(char* s, unsigned int n);

int main() {
	char s[] = "questaè una prova";
	size_t n = sizeof s;
	encrypt(s, n);
}