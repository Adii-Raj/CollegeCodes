#include <stdio.h>
#include <stdlib.h>

//A file exist in the directory with name: input.txt
int main() {
    FILE *file;
    char ch;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}