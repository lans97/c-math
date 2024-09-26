#ifndef CALCULUS_H
#define CALCULUS_H

#include <stddef.h>

typedef struct {
    float* data;
    unsigned int m;
    unsigned int n;
} Matrix;

Matrix  matrix_new(unsigned int m, unsigned int n);
void    matrix_delete(Matrix* mat);
void    matrix_print(Matrix mat);
void    matrix_set(Matrix mat, unsigned int i, unsigned int j, float value);
float   matrix_get(Matrix mat, unsigned int i, unsigned int j);

#endif// CALCULUS_H
