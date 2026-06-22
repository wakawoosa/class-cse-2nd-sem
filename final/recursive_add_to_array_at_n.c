#include <stdio.h>

void shiftRight(int arr[], int i, int x) {
    if (i <= x) return;
    arr[i] = arr[i - 1];
    shiftRight(arr, i - 1, x);
}

void printArray(int arr[], int i, int n) {
    if (i >= n) return;
    printf("%d ", arr[i]);
    printArray(arr, i + 1, n);
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int x, y, n = 5;
    printf("Original Array: ");
    printArray(arr, 0, n);
    n++;
    printf("\nEnter the position: ");
    scanf("%d", &x);
    shiftRight(arr, n, x);
    printf("Enter value: ");
    scanf("%d", &y);
    arr[x] = y;
    printf("Updated Array: ");
    printArray(arr, 0, n);
    return 0;
}
