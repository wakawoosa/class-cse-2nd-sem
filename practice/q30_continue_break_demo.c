/* Q30. Demonstrate the use of continue and break keywords (in loops) */
#include <stdio.h>

int main()
{
    int i;

    printf("Numbers from 1 to 20, skipping multiples of 3, stopping at 15:\n");

    for (i = 1; i <= 20; i++) {
        if (i % 3 == 0)
            continue;   /* skip multiples of 3 */

        if (i == 15)
            break;      /* stop the loop when i reaches 15 */

        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
