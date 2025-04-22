#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3] = {
        {1, "Aditya", 99.5},
        {2, "Vikalp", 90.0},
        {3, "Sudhakar", 78.0}
    };

    printf("ID\tName\t\tMarks\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}