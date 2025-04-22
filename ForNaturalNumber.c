#include <stdio.h>
int main() {
    printf("Enter the value of N: ");
    int N; scanf("%d", &N);
    printf("The first %d natural numbers are:\n", N);
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}