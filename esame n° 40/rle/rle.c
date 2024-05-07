#include "rle.h"

bool easy_rle_decode(const char* nomefilein, const char* nomefileout) {

	FILE* fin = fopen(nomefilein, "rb");
	if (fin== NULL)
	{
	return false;
	}
	FILE* fout = fopen(nomefileout, "wb");
	if (fout == NULL)
	{
		fclose(fin);
		return false;
	}
	char volte, c;
	size_t r = 0;
	while (feof(fin)==0)
	{
		r = fread(&volte, 1, 1, fin);
		if (r!=1)
		{
			break;
		}
		r = fread(&c, 1, 1, fin);

		for (size_t i = 0; i < (size_t)volte + 1; i++) {
			fprintf(fout, "%c", c);
		}
	}
	fclose(fin);
	fclose(fout);
	return true;







 }
