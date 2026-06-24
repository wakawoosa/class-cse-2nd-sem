/* Q39. Display contents of an integer array in reverse order */
#include <stdio.h>

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array elements in reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
