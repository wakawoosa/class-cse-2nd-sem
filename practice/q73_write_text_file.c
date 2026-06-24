/* Q73. Write into a text file */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char text[500];

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Could not open file for writing\n");
        return 1;
    }

    printf("Enter text to write to the file (single line): ");
    scanf(" %[^\n]", text);

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("Text written to data.txt successfully\n");

    return 0;
}
