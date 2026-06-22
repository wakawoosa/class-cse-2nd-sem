#include <stdio.h>

void shiftLeft(int arr[], int i, int n) {
    if (i >= n - 1) return;
    arr[i] = arr[i + 1];
    shiftLeft(arr, i + 1, n);
}

void printArray(int arr[], int i, int n) {
    if (i >= n) return;
    printf("%d ", arr[i]);
    printArray(arr, i + 1, n);
}

int main() {
    int arr[10] = {9, 1, 2, 3, 4, 5};
    int n = 6;
    printf("Original Array: ");
    printArray(arr, 0, n);
    shiftLeft(arr, 0, n);
    n--;
    printf("\nThe revise array is: ");
    printArray(arr, 0, n);
    return 0;
}
