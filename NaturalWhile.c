#include <stdio.h>

int main() {
    int n, i = 1;
    printf("How many natural numbers do you want to print?\n");
    scanf("%d", &n);
    while (i <= n) printf("%d ", i++);
    return 0;
}
