#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    int **ptrToPtr = &ptr;

    printf("Value of num: %d\n", num);
    printf("Value using ptr: %d\n", *ptr);
    printf("Value using ptrToPtr: %d\n", **ptrToPtr);

    return 0;
}