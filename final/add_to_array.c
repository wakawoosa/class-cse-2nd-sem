#include <stdio.h>

int main() {
    int x,i,n;
    int arr[10] = {1,2,3,4,5};
    n = 5;
    printf("Original array: ");
     for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    n++;
    printf("\nEnter an element: ");
    scanf("%d", &x);
    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    printf("New array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
