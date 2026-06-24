/* Q27. Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ....+ 1/n */
#include <stdio.h>

int main()
{
    int n, i;
    double sum = 1.0;

    printf("Enter n (even number): ");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2) {
        sum = sum + 1.0 / i;
    }

    printf("Sum = %.4lf\n", sum);

    return 0;
}
