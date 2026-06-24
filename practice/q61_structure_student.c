/* Q61. Store details of a student in a structure and then display the same */
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
