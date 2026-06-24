/* Q63. Store details (Roll No. and Marks) of all the students of your class
   in an array of structure and then find the topper of the class */
#include <stdio.h>

struct Student {
    int rollNo;
    float marks;
};

int main()
{
    struct Student s[50];
    int n, i, topperIndex;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    topperIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks)
            topperIndex = i;
    }

    printf("\nTopper of the class:\n");
    printf("Roll No: %d\n", s[topperIndex].rollNo);
    printf("Marks: %.2f\n", s[topperIndex].marks);

    return 0;
}
