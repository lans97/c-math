#include "calculus.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    float array[][3] = {{1.0f, 2.0f, 3.0f}, {4.0f, 5.0f, 6.0f}, {1.2f, 1.2f, 1.1f}};

    Matrix mat = matrix_new(3, 3);
    matrix_print(mat);

    for (int i = 0; i < mat.m; i++){
        for (int j = 0; j < mat.n; j++){
            *(mat.data + mat.m * i + j) = array[i][j];
        }
    }

    matrix_print(mat);

    matrix_delete(&mat);

    matrix_print(mat);

    return 0;
}
