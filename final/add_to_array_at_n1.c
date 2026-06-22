#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5};
    int x,i,y,n = 5;
    printf("Original Array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    n++;
    printf("\nEnter the position: ");
    scanf("%d", &x);
    for(i = n; i > x; i--){
        arr[i] = arr[i - 1];
    }
    printf("Enter value: ");
    scanf("%d", &y);
    arr[x] = y;
    printf("Updated Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

