/* Q46. Find sum of all elements of an integer array */
#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
