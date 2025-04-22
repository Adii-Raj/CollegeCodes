#include <stdio.h>

void addNumbers() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    addNumbers();
    return 0;
}