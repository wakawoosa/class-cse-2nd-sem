#include <stdio.h>

void printNumbers(int i, int limit) {
    if (i > limit) return;
    printf("%d\n", i);
    printNumbers(i + 1, limit);
}

int main() {
    printNumbers(0, 50);
    return 0;
}
