/* Q56. Search an array using functions (passing array to a function) */
#include <stdio.h>

int search(int arr[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int arr[100], n, i, key, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    position = search(arr, n, key);

    if (position != -1)
        printf("Element found at position %d\n", position + 1);
    else
        printf("Element not found\n");

    return 0;
}
