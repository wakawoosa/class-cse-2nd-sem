/* Q22. Display the series: 2 4 16 256 65536 ....... (n terms)
   (each term is the square of the previous term) */
#include <stdio.h>

int main()
{
    int n, i;
    long long term = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%lld ", term);
        term = term * term;
    }

    printf("\n");

    return 0;
}
