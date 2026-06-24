/* Q11. Use if-else with relational and logical operators
   (grading according to percentage of a student) */
#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage of student: ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage\n");
    } else if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade: C\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
