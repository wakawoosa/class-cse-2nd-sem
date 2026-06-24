/* Q51. Find the sum of all diagonal elements of a matrix */
#include <stdio.h>

int main()
{
    int matrix[10][10], n, i, j, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
