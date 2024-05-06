#include <stdlib.h>
#include <string.h>

extern char* trim(const char* s) {
	if (s==NULL)
	{
		return NULL;
	}
	size_t len = strlen(s);
	char* dst = malloc(len + 1);
	size_t i = 0, j=0;
	if (s[0] ==' ')
	{
		i++;
	}
	for ( i ; i <=len ; i++)
	{
		if (s[i] ==' ' && s[i + 1] == 0)
		{
			continue;
		}
		else
		{
			dst[j] = s[i];
			j++;
		}
	}
	dst = realloc(dst,j + 1);
	return dst;
}