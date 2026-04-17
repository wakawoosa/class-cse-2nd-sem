#include <stdio.h>

int main(){
    int x, y;
    printf("enter a number: ");
    scanf("%d", &x);
    for(y = 1; y <= x; y++){
        if(x % y == 0){
            printf("%d\n", y);
        }
    }
    return 0;
}
