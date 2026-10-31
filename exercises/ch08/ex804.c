#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int ch;
    int chars_count = 0;
    int words_count = 0;
    bool is_word = false;

    printf("Please enter chars (Press Enter then Ctrl+Z to quit):\n");

    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
            chars_count++;
        
        if(!(isspace(ch) || ispunct(ch)) && !is_word)
        {
            words_count++;
            is_word = true;
        }

        if((isspace(ch) || ispunct(ch)) && is_word)
        {
            is_word = false;
        }
    }

    printf("\nThere are %ld words and %ld character.", words_count, chars_count);
    printf("\nThe average number of letters in a word are %.2f", (double)chars_count / words_count);

    return 0;
}