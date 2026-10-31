#include <stdio.h>

#define PAIRS_PER_LINE 10
#define BUFSIZE 4096

int main(void)
{
    int ch;
    int count = 0;
    int buf[BUFSIZE];
    int n = 0;
    int truncated = 0;
    int i;

    printf("Enter text (Press Enter then Ctrl+Z to quit):\n");

    while ((ch = getchar()) != EOF)
    {
        if (n < BUFSIZE)
            buf[n++] = ch;
        else
            truncated = 1;
    }

    if (truncated)
        printf("\n[input too long: only the first %d characters shown]\n",
               BUFSIZE);

    putchar('\n');

    for (i = 0; i < n; i++)
    {
        ch = buf[i];

        if (ch >= ' ')
            printf("%2c-%3d ", ch, ch);
        else if (ch == '\n')
            printf(" \\n-%2d ", ch);
        else if (ch == '\t')
            printf(" \\t-%2d ", ch);
        else
            printf(" ^%c-%2d ", ch + 64, ch);

        count++;
        if (ch == '\n' || count == PAIRS_PER_LINE)
        {
            putchar('\n');
            count = 0;
        }
    }
    if (count != 0)
        putchar('\n');

    return 0;
}
