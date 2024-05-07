#if !defined matrix_h
#define matrix_h
#include<stdint.h>
#include<stdio.h>
struct matrix{
    size_t rows, cols;
    double* data;
};

extern struct matrix* mirror_mat(const struct matrix* m);

#endif // !defined matrix_h
