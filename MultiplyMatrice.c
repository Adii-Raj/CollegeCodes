#include <stdio.h>

void multiplyMatrices(int r1, int c1, int mat1[][c1], int r2, int c2, int mat2[][c2], int result[][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;

    int mat1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int mat2[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int result[2][2];

    multiplyMatrices(r1, c1, mat1, r2, c2, mat2, result);

    printf("Resultant matrix:\n");
    printMatrix(r1, c2, result);

    return 0;
}
