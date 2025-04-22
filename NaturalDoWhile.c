#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter the number of natural numbers to print: ");
    scanf("%d", &n);

    do {
        printf("%d ", i);
        i++;
    } while (i <= n);

    return 0;
}