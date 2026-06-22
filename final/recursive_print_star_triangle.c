#include <stdio.h>

void printStars(int j, int i) {
    if (j > i) return;
    printf("* ");
    printStars(j + 1, i);
}

void printRows(int i, int n) {
    if (i > n) return;
    printStars(1, i);
    printf("\n");
    printRows(i + 1, n);
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printRows(1, n);
    return 0;
}
