#include <stdint.h>
#include <stdio.h>
#include <string.h>
extern void print_table(char** colnames, uint8_t ncols, uint8_t nrows);

int main(void) {
	char* v[] = { "cat","dog","deer","frog" };
	print_table(v, 4, 2);
	return 0;
}