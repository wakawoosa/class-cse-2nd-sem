/* Q64. Demonstrate use of pointers in programming */
#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("Value of ptr (address it stores) = %p\n", (void *)ptr);
    printf("Value pointed to by ptr (*ptr) = %d\n", *ptr);

    *ptr = 20;
    printf("After *ptr = 20, num = %d\n", num);

    return 0;
}
