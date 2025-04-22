#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of ptr (address of a): %p\n", (void*)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 20;
    printf("New value of a: %d\n", a);

    return 0;
}