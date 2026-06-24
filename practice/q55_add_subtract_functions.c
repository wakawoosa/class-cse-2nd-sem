/* Q55. Add and subtract two integers using functions (a+b, a-b, b-a) */
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", subtract(a, b));
    printf("b - a = %d\n", subtract(b, a));

    return 0;
}
