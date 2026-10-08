#include <stdio.h>
#include <string.h>

#define LEN 40

int main(void)
{
    char word[LEN];
    int i, length;

    printf("Enter a word:");
    scanf("%s", word);

    length = strlen(word) - 1;
    printf("The reverse of %s is ", word);
    for (i = length; i >= 0; i--) 
    {
        printf("%c", word[i]);
    }

    return 0;
}