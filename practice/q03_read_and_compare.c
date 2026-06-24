/* Q3. Read two numbers from keyboard and compare them */
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
        printf("%d is greater than %d\n", a, b);
    else if (b > a)
        printf("%d is greater than %d\n", b, a);
    else
        printf("Both numbers are equal\n");

    return 0;
}
