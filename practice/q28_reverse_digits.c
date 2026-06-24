/* Q28. Display the digits of any natural number in reverse order [Use while loop] */
#include <stdio.h>

int main()
{
    int n, digit;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    printf("Number in reverse order: ");
    while (n != 0) {
        digit = n % 10;
        printf("%d", digit);
        n = n / 10;
    }

    printf("\n");

    return 0;
}
