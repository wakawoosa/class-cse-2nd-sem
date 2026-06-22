#include <stdio.h>

int main(){
    int x = 1234, rev = 0, rem;
    while (x != 0){
        rem = x%10+rev;
        x = x/10;
    }
    printf("%d", rev);
    return 0;
}