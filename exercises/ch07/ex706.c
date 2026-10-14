#include <stdio.h>
int main(void)
{
    int ch;
    int prev;
    int count = 0;

    printf("Please input chars (# to quit):\n");
    while((ch = getchar()) != '#')
    {
        if(prev == 'e' && ch == 'i')
            count++;
        else
            prev = ch;
    }

    printf("The number of times 'ei' appears is %d.\n", count);
    printf("Done\n");

    return 0;
}