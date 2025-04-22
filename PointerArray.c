#include <stdio.h>
int main() {
    float temperatures[] = {72.5, 75.0, 78.6, 80.1, 76.3};
    float *tempPtr = temperatures;

    printf("Temperature readings for the week:\n");
    for (int i = 0; i < 5; i++) {
        printf("Day %d: %.1f F\n", i + 1, tempPtr[i]);
    }

    return 0;
}
