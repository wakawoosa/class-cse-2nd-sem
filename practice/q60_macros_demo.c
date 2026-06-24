/* Q60. Demonstrate use of macros */
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main()
{
    float radius, area;
    int num;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = PI * SQUARE(radius);
    printf("Area of circle = %.2f\n", area);

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d = %d\n", num, SQUARE(num));

    return 0;
}
