#include <stdio.h>

int main(){
    int i, n, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    // Upper half
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n - i; j++){
            printf(" ");
        }
        for (j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    // Lower half
    for (i = n - 1; i >= 1; i--){
        for (j = 1; j <= n - i; j++){
            printf(" ");
        }
        for (j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}