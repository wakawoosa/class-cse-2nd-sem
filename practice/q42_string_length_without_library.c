/* Q42. Input a string from the user and find its length (without using the string library) */
#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
