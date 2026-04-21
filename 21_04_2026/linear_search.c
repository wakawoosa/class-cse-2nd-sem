#include <stdio.h>

int main(){
    int i,key;
    int arr[5] = {10,20,30,40,50};
    int n = 0 ;
    printf("Enter Key value: ");
    scanf("%d", &key);
    for(i = 0; i < 5; i++ ){
        if(arr[i] == key){
            printf("Key found in array at %d", i);
            n = 1;
            break;
        }
    }
    if(n == 0){
            printf("Key value not in array");

        }
    return 0;
}