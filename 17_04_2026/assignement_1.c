#include <stdio.h>

int main(){
    double x, y, s;
    printf("Enter a number: ");
    scanf("%lf", &x);
    for(y = 1; y <= 5; y++){
        s = x * x;
        printf("%lf\n", s);
        x = s;
    }
    return 0;
}
