#include <stdio.h>
int main(void)
{
    int ch;
    int space_count = 0;
    int newlines_count = 0;
    int other = 0;

    printf("Please input chars (# to quit): \n");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            space_count++;
        else if (ch == '\n')
            newlines_count++;
        else
            other++;
    }
    printf("spaces: %d, newlines: %d, other: %d", space_count, newlines_count, other);
    return 0;
}