/* Q37. Display contents of an integer array */
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Array elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
