#include "calculus.h"
#include <stdio.h>
#include <stdlib.h>

Matrix matrix_new(unsigned int m, unsigned int n) {
    Matrix mat;
    mat.m = m;
    mat.n = n;

    mat.data = (float*) malloc(m * n * sizeof(float));
    for (int i = 0; i < mat.m; i++){
        for (int j = 0; j < mat.n; j++){
            *(mat.data + mat.m * i + j) = 0.0f;
        }
    }
    return mat;
}

void matrix_delete(Matrix* mat) {
    mat->m = 0;
    mat->n = 0;
    free(mat->data);
}

void matrix_set(Matrix mat, unsigned int i, unsigned int j, float value) {
    *(mat.data + mat.m * i + j) = value;
}

float matrix_get(Matrix mat, unsigned int i, unsigned int j) {
    return *(mat.data + mat.m * i + j);
}

void matrix_print(Matrix mat){
    if (mat.m  < 1 || mat.n < 1)
        printf("Deleted.\n");
    for (int i = 0; i < mat.m; i++) {
        printf("| ");
        for (int j = 0; j < mat.n; j++) {
            printf("%02.2f ", *(mat.data + i*mat.m + j));
        }
        printf("|\n");
    }
    printf("\n");
}

