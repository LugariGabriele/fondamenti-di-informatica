#include <stdlib.h>
extern void encrypt(char* s, unsigned int n) {
	for (size_t i = 0; i < n; i++)
	{
		char val = s[i];
		val = val ^ 0xaa;
		s[i] = val;

	}
}