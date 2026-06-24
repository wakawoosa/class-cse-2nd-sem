/* Q36. Display the following pyramid of stars (using loops):
      *
     ***
    *****
   *******
*/
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        /* print leading spaces */
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        /* print stars: row i has (2*i - 1) stars */
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
