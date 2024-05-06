#include "decode.h"

int main() {
	FILE* fop = fopen("file1.txt", "rt");
	
	decode(fop);
	fclose(fop);
}