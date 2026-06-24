/* Q45. Demonstrate the use of string library functions:
   strlen(), strcpy(), strrev(), strcat(), strcmp() etc. */
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], result[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Length of str1 = %d\n", (int)strlen(str1));

    strcpy(result, str1);
    printf("After strcpy, result = %s\n", result);

    strcat(result, str2);
    printf("After strcat, result = %s\n", result);

    if (strcmp(str1, str2) == 0)
        printf("str1 and str2 are equal\n");
    else
        printf("str1 and str2 are not equal\n");

    /* Note: strrev() is non-standard and may not be available on all compilers (e.g. Turbo C/some Windows compilers support it). */
    /* strrev(str1); */
    /* printf("Reverse of str1 = %s\n", str1); */

    return 0;
}
