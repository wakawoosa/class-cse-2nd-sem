#include <stdio.h>

void onePass(int arr[], int n, int j) {
    if (j >= n - 1) return;
    if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }
    onePass(arr, n, j + 1);
}

void bubbleSort(int arr[], int n) {
    if (n <= 1) return;
    onePass(arr, n, 0);
    bubbleSort(arr, n - 1);
}

void printArray(int arr[], int i, int n) {
    if (i >= n) return;
    printf(" %d ", arr[i]);
    printArray(arr, i + 1, n);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    bubbleSort(arr, 5);
    printf("the sorted array is: ");
    printArray(arr, 0, 5);
    return 0;
}
