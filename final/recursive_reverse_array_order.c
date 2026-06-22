#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    if (start >= end) return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int i, int n) {
    if (i >= n) return;
    printf("%d ", arr[i]);
    printArray(arr, i + 1, n);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    reverseArray(arr, 0, n - 1);
    printf("Inversed array is: ");
    printArray(arr, 0, n);
    return 0;
}
