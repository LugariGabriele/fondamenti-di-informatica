#include <string.h>
#include <stdlib.h>

extern char* rimuovimultipli(const char* str);

int main() {
	char* p = rimuovimultipli("muuulttipli!!!");
	free(p);
}
