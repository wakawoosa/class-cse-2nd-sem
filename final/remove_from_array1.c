#include <stdio.h>

int main(){
    int arr[10] = {9,1,2,3,4,5};
    int n = 6, i;
    printf("Original Array: ");
    for(i = 0; i <n; i++){
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\nThe revise array is: ");
    for(i = 0; i <n; i++){
        printf("%d ", arr[i]);
    }
}