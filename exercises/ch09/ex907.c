#include <stdio.h>
#include <ctype.h>

int locate(int ch);

int main(void)
{
    int ch;

    printf("Enter a character:");
    while((ch = getchar()) != EOF)
    {
        if (ch == '\n') 
            break;
        if(isalpha(ch))
            printf("The location of %c in alphabet is %d.\n", ch, locate(ch));
        while(getchar() != '\n')
            continue;
        printf("Enter next character (EOF to quit):");
    }

    printf("Bye!");
    return 0;
}

int locate(int ch)
{
    int index = -1;

    if(isalpha(ch))
    {
        index = tolower(ch) - 'a' + 1;
    }

    return index;
}