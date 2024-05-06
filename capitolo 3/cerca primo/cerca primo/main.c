#include <string.h>

extern char* cerca_primo(char* s, const char* list);
int main() {
	char* p;
	p = cerca_primo("aereo", "btr");
	p = cerca_primo("", "abc");
	p = cerca_primo("dov'e la pirma vocale?", "aeiou");
}
