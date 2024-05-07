#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include <stdlib.h> 



char* sottrai_stringhe(const char* a, const char* b) {

	if (strcmp(a,b)==0) {
		return 0;
	}
	if (a==NULL||b== NULL)
	{
		return NULL;
	}

	long long unsigned aNumber, bNumber, result;
	char* res;

	aNumber = strtoll(a, &res, 10);
	bNumber = strtoll(b, &res, 10);
	result = aNumber - bNumber;
	
	return result;

}