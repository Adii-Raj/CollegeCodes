#include <stdio.h>

int main() {
    printf("Enter the Three Numbers: \n");
    int num1, num2, num3; scanf("%d %d %d",&num1,&num2,&num3);

    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("The greatest number is: %d\n", num1);
        } else {
            printf("The greatest number is: %d\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("The greatest number is: %d\n", num2);
        } else {
            printf("The greatest number is: %d\n", num3);
        }
    }

    return 0;
}