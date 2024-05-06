#include <stdlib.h>
#include <string.h>

extern char* trim(const char* s);

int main() {

	char* p = trim("senza spazi");
	p = trim(" spazio prima");
	p = trim("spazio dopo ");
	p = trim(" prima e dopo ");
	p = trim("");
	p = trim(" test  test  test");
	p = trim(NULL);
	free(p);
}