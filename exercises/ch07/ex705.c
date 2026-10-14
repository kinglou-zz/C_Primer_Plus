#include <stdio.h>
int main(void)
{
    int ch;
    int count1 = 0;
    int count2 = 0;

    printf("Enter text to be analyzed (# to terminate):\n");
    while((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '.':
                putchar('!');
                count1++;
                break;
            case '!':
                putchar('!');
                putchar('!');
                count2++;
                break;
            default:
                putchar(ch);
        }
    }

    printf("\n%d replacement(s) of . with !\n", count2);
    printf("%d replacement(s) of ! with !!\n", count1);
    printf("Total replace %d times\n", count1 + count2);
    printf("Done\n");

    return 0;
}