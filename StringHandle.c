#include <stdio.h>
#include <string.h>
//strcpy,strncpy,strlen,strcmp
int main() {
    char str1[50], str2[50], str3[50];

    strcpy(str1, "Hello, World!");
    printf("strcpy: %s\n", str1);

    strncpy(str2, str1, 5);
    str2[5] = '\0';
    printf("strncpy: %s\n", str2);

    printf("strlen: %d\n", (int)strlen(str1));

    strcpy(str3, "Hello, Universe!");
    printf("strcmp: %d\n", strcmp(str1, str3));

    return 0;
}
