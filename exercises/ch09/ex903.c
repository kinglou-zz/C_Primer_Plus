#include <stdio.h>

void chline(int ch, int i, int j);

int main(void)
{
    int ch;
    int i, j;

    printf("Enter a character:");
    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
            break;
        printf("Enter two integers:");
        while (scanf("%d %d", &i, &j) != 2)
        {
            while (getchar() != '\n')
                continue;
            printf("Not two integers. Please try again: ");
        }
        chline(ch, i, j);
        while(getchar() != '\n')
            continue;
        printf("Enter another character (EOF to quit):");
    }

    printf("Bye!");
    return 0;
}

void chline(int ch, int i, int j)
{
    int row, col;
    
    for(row = 1; row <= j; row++)
    {
        for(col = 1; col <= i; col++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}