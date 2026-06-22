#include <stdio.h>

void printSpaces(int j, int limit) {
    if (j > limit) return;
    printf(" ");
    printSpaces(j + 1, limit);
}

void printStars(int j, int limit) {
    if (j > limit) return;
    printf("* ");
    printStars(j + 1, limit);
}

void upperHalf(int i, int n) {
    if (i > n) return;
    printSpaces(1, n - i);
    printStars(1, i);
    printf("\n");
    upperHalf(i + 1, n);
}

void lowerHalf(int i, int n) {
    if (i < 1) return;
    printSpaces(1, n - i);
    printStars(1, i);
    printf("\n");
    lowerHalf(i - 1, n);
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    upperHalf(1, n);
    lowerHalf(n - 1, n);
    return 0;
}
