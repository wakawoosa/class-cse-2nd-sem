#include <stdio.h>

int linearSearch(int arr[], int n, int key, int i) {
    if (i >= n) return -1;
    if (arr[i] == key) return i;
    return linearSearch(arr, n, key, i + 1);
}

int main() {
    int key;
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    printf("Enter key value: ");
    scanf("%d", &key);
    int pos = linearSearch(arr, n, key, 0);
    if (pos != -1)
        printf("Key found in array at %d", pos);
    else
        printf("Key value not found");
    return 0;
}
