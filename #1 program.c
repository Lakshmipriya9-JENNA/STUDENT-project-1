#include <stdio.h>

int main() {
    char name[50];
    int roll;

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("\nStudent Details\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);

    return 0;
}
