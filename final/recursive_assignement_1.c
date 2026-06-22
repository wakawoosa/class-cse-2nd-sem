#include <stdio.h>

void squareLoop(double x, int y, int limit) {
    if (y > limit) return;
    double s = x * x;
    printf("%lf\n", s);
    squareLoop(s, y + 1, limit);
}

int main() {
    double x;
    printf("Enter a number: ");
    scanf("%lf", &x);
    squareLoop(x, 1, 5);
    return 0;
}
