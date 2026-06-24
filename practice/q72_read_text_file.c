/* Q72. Read contents of a text file */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("Could not open file. Run q73_write_text_file first to create data.txt\n");
        return 1;
    }

    printf("Contents of file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
