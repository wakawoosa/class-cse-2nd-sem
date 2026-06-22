#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5};
    int x, i, n = 5;
    printf("Original Array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter the position to delete: ");
    scanf("%d", &x);

    if(x < 0 || x >= n){
        printf("Invalid position!\n");
        return 1;
    }
    for(i = x; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Updated Array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}