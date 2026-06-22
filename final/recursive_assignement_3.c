#include <stdio.h>

float harmonicSum(int x, int y) {
    if (y > x) return 0;
    return (1.0 / y) + harmonicSum(x, y + 1);
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%f", harmonicSum(x, 1));
    return 0;
}
