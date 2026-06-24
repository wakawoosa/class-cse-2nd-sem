/* Q67. Display contents of a string in reverse order using pointers */
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Reversed string: ");
    ptr = str + length - 1;
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }

    printf("\n");

    return 0;
}
