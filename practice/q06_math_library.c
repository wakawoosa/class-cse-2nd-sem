/* Q6. Use math library (pow(), sqrt(), etc.) */
/* Compile on Linux with: gcc q06_math_library.c -o q06 -lm */
#include <stdio.h>
#include <math.h>

int main()
{
    double num, power, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Enter power: ");
    scanf("%lf", &power);

    result = pow(num, power);
    printf("%.2lf raised to power %.2lf = %.2lf\n", num, power, result);

    result = sqrt(num);
    printf("Square root of %.2lf = %.2lf\n", num, result);

    return 0;
}
