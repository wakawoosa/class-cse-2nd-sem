/* Q74. Find the number of characters, words, sentences, vowels, consonants,
   punctuation marks, etc. in a text file */
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int ch;
    long characters = 0, words = 0, sentences = 0;
    long vowels = 0, consonants = 0, punctuation = 0;
    int insideWord = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("Could not open file. Run q73_write_text_file first to create data.txt\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }

        if (ch == '.' || ch == '!' || ch == '?')
            sentences++;

        if (ispunct(ch))
            punctuation++;

        if (isspace(ch)) {
            insideWord = 0;
        } else if (!insideWord) {
            insideWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Characters : %ld\n", characters);
    printf("Words      : %ld\n", words);
    printf("Sentences  : %ld\n", sentences);
    printf("Vowels     : %ld\n", vowels);
    printf("Consonants : %ld\n", consonants);
    printf("Punctuation: %ld\n", punctuation);

    return 0;
}
