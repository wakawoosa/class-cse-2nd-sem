#include <stdio.h>

int main() {
    int num, original, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = num;

    // Calculate Armstrong sum
    while (original != 0) {
        remainder = original % 10;

        // Calculate remainder^digits manually
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        result += power;
        original /= 10;
    }

    // Check Armstrong
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
