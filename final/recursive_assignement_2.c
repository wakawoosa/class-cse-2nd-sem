#include <stdio.h>

void printDivisors(int x, int y) {
    if (y > x) return;
    if (x % y == 0) printf("%d\n", y);
    printDivisors(x, y + 1);
}

int main() {
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    printDivisors(x, 1);
    return 0;
}
