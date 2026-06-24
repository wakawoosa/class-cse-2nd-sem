/* Q12. Use switch-case to display Salaam when user enters 1, Aadaab when
   user enters 2, Hello when user enters 3 and Incorrect Option otherwise */
#include <stdio.h>

int main()
{
    int choice;

    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Salaam\n");
            break;
        case 2:
            printf("Aadaab\n");
            break;
        case 3:
            printf("Hello\n");
            break;
        default:
            printf("Incorrect Option\n");
    }

    return 0;
}
