#include <stdio.h>

int main(){
    int i = 0;
    int n;
    int 
    sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i <= n){
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}