#include <stdio.h>

void shiftRight(int arr[], int i) {
    if (i <= 0) return;
    arr[i] = arr[i - 1];
    shiftRight(arr, i - 1);
}

void printArray(int arr[], int i, int n) {
    if (i >= n) return;
    printf("%d ", arr[i]);
    printArray(arr, i + 1, n);
}

int main() {
    int x, n;
    int arr[10] = {1, 2, 3, 4, 5};
    n = 5;
    printf("Original array: ");
    printArray(arr, 0, n);
    n++;
    printf("\nEnter an element: ");
    scanf("%d", &x);
    shiftRight(arr, n);
    arr[0] = x;
    printf("New array: ");
    printArray(arr, 0, n);
    return 0;
}
