#include <stdio.h>

int main(){
    int x, y;
    float s;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(y = 1; y <= x; y++){
        s = s +(1.0 / y);
    }
    printf("%f", s);
    return 0;
}
