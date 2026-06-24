/* Q47. Search for an element in an integer array (Linear search) */
#include <stdio.h>

int main()
{
    int arr[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }

    if (!found)
        printf("Element not found in the array\n");

    return 0;
}
