/* Q54. Swap two numbers using functions (call-by-value method) */
#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before calling swap: x = %d, y = %d\n", x, y);

    swap(x, y);

    /* In call-by-value, the original variables in main remain unchanged */
    printf("After calling swap: x = %d, y = %d\n", x, y);

    return 0;
}
