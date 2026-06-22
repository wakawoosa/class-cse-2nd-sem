#include <stdio.h>

void printNumbers(int i, int n) {
    if (i > n) return;
    printf("%d\n", i);
    printNumbers(i + 1, n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNumbers(0, n);
    return 0;
}
