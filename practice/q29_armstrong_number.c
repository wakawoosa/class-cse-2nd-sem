/* Q29. Check whether a number is Armstrong number or not */
#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, digit, numDigits = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    /* count number of digits */
    while (n != 0) {
        n = n / 10;
        numDigits++;
    }

    n = original;
    while (n != 0) {
        digit = n % 10;
        sum = sum + pow(digit, numDigits);
        n = n / 10;
    }

    if ((int)sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);

    return 0;
}
