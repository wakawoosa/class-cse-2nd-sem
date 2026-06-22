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
    int arr[10] = {1, 2, 3, 4, 5};
    int x, n = 5;
    printf("Original Array: ");
    printArray(arr, 0, n);
    printf("\nEnter the position to delete: ");
    scanf("%d", &x);

    if (x < 0 || x >= n) {
        printf("Invalid position!\n");
        return 1;
    }
    shiftLeft(arr, x, n);
    n--;
    printf("Updated Array: ");
    printArray(arr, 0, n);
    return 0;
}
