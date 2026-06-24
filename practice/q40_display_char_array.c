/* Q40. Display contents of a character array */
#include <stdio.h>

int main()
{
    char arr[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int i;

    printf("Character array elements: ");
    for (i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }

    printf("\n");

    return 0;
}
