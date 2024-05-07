#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
void bad_word_filter(char* s, char** words, size_t nwords) {

	if (s == NULL || words == NULL) {
		return;
	}
	for (size_t i = 0; i < nwords	; i++)
	{
		char* c = strstr(s, words[i]);
		if (c != NULL) {
			size_t len = strlen(words[i]);
			for (size_t j = 0; j < strlen(s) && len>0; j++)
			{
				if (&s[j] >= c) {
					s[j] = "*";
					--len;
				}
			}
		}
	}
}
