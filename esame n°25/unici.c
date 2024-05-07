#include "unici.h"

extern int* unici(const int* vec, size_t size, size_t* newsize) {

	int* vec_dst = malloc(size*sizeof(int));
	
	
	size_t i = 0;
	*newsize = 0;
	int temp;
    if (size != 0) {
        vec_dst[0] = vec[0];
        *newsize = 1; // Imposta newsize a 1 poiché abbiamo già aggiunto il primo elemento

        for (size_t i = 1; i < size; i++) {
            int duplicato = 0;

            // Controlla se vec[i] è già presente in vec_dst
            for (size_t j = 0; j < *newsize; j++) {
                if (vec_dst[j] == vec[i]) {
                    duplicato = 1;
                    break;
                }
            }

            // Se vec[i] non è un duplicato, aggiungilo a vec_dst e incrementa newsize
            if (duplicato==0) {
                vec_dst[*newsize] = vec[i];
                (*newsize)++;
            }
        }
    }


	
	
	vec_dst = realloc(vec_dst, *newsize* sizeof(int));
	if (vec_dst == NULL) {
		newsize = 0;
		return NULL;
	}
	
	return vec_dst;

	
}