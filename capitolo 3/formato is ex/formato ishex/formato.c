#include <ctype.h>
#include <stdlib.h>
#include <string.h>
extern int is_hex(const char* s) {
	char hex[] = "0123456789abcdefABCDEF";
	
	if (s == NULL) {
		return 0;
	}
	if (strlen(s) <3||strlen(s)>10)
	{
		return 0;
	}
	if (s[0]!= '0')
	{
		return 0;

	}
	if (!s[1]=="x"||!s[1]=="X")
	{
		return 0;

	}
	for (size_t i = 2; i < strlen(s); i++)
	{// controllo che tutti caratteri siamo in hex
		if (strchr(hex,s[i])==NULL)
		{
			return 0;
		}
	}
	return 1;

}