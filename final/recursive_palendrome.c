#include <stdio.h>

int reverseNum(int x, int rev) {
    if (x == 0) return rev;
    return reverseNum(x / 10, rev * 10 + x % 10);
}

int main() {
    int num = 1234;
    int rev = reverseNum(num, 0);
    printf("%d", rev);
    if (rev == num)
        printf(" is a palindrome\n");
    else
        printf(" is not a palindrome\n");
    return 0;
}
