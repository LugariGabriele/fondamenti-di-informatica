#include <stdint.h>
#include <string.h>
#include<stdio.h>

void cornicetta(uint8_t len) {

	for (size_t i = 0; i < len; i++)
	{
		printf("+---------");

	}
	printf("+\n");
}
void voidline(uint8_t len) {
	for (size_t i = 0; i < len; i++)
	{
		printf("|         ");
	}
	printf("|\n");
}




void print_table(char** colnames, uint8_t ncols, uint8_t nrows) {
	if (nrows==0||ncols==0)
	{
		return NULL;
	}

	for (uint8_t col = 0; col < ncols; col++)
	{
		printf("|%s", colnames[col]);
		for (size_t j = strlen(colnames[col]); j < 9; j++)
		{
			printf(" ");
		}
	}
	printf("|\n");
	cornicetta(ncols);
	for (uint8_t row = 0; row < nrows; row++) {
		voidline(ncols);
		cornicetta(ncols);

	}







}






