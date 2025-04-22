#include <stdio.h>

void addMatrices(int r, int c, int m1[10][10], int m2[10][10], int sum[10][10]) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = m1[i][j] + m2[i][j];
}

void displayMatrix(int r, int c, int m[10][10]) {
    for (int i = 0; i < r; i++, printf("\n"))
        for (int j = 0; j < c; j++)
            printf("%d ", m[i][j]);
}

int main() {
    int r = 3, c = 3, m1[10][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 
        m2[10][10] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}, sum[10][10];

    addMatrices(r, c, m1, m2, sum);
    printf("The sum of the two matrices is:\n");
    displayMatrix(r, c, sum);

    return 0;
}
