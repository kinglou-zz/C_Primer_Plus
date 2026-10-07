#include <stdio.h>
int main(void)
{
    char letter;

    printf("Enter a letter(A...Z):");
    scanf("%c", &letter);

    int line = letter - 'A' + 1;

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < line - 1 - i; j++)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf("%c", 'A' + j);
        }
        for(int j = 0; j <= i - 1; j++)
        {
            printf("%c", 'A' + i - 1 - j);
        }
        printf("\n");
    }

    return 0;
}