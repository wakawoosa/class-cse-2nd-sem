/* Q5. Define and use a constant (PI as 3.14159) in a program */
#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius, area, circumference;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %f\n", area);
    printf("Circumference = %f\n", circumference);

    return 0;
}
