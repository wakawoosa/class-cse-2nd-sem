#include <stdio.h>

int main(){
    int i = 1, n = 5, x = 1;
    for (i <= n; i++){
        x = x*i;
        printf("%d", x);
    }
    return 0;
}