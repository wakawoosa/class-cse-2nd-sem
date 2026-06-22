#include <stdio.h>

int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

long power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

long armstrongSum(int n, int digits) {
    if (n == 0) return 0;
    int remainder = n % 10;
    return power(remainder, digits) + armstrongSum(n / 10, digits);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digits = countDigits(num);
    long result = armstrongSum(num, digits);

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
