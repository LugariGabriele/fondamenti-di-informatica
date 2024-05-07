#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

extern void bad_word_filter(char* s, char** words, size_t nwords);
int main() {

	char *s = "sei un carciofo";
	 char *words[] = { "carciofo", "broccolo", "cavolfiore" };
	 bad_word_filter(s, words, 3);
	 return 0;
}