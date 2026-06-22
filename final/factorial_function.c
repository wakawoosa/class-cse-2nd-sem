#include <stdio.h>

long long factorial(int n) {
    if (n < 0)  return -1;
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    long long res = factorial(n);
    if (res == -1)
        printf("Error: negative input\n");
    else
        printf("%d! = %lld\n", n, res);
    return 0;
}