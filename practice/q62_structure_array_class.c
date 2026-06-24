/* Q62. Store details of all the students of your class in an array of
   structure and then display the same in a tabular format */
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n%-20s%-10s%-10s\n", "Name", "Roll No", "Marks");
    for (i = 0; i < n; i++) {
        printf("%-20s%-10d%-10.2f\n", s[i].name, s[i].rollNo, s[i].marks);
    }

    return 0;
}
