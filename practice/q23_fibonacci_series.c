/* Q23. Display the Fibonacci series: 0 1 1 2 3 5 8 13 21 ....... (n terms) */
#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
