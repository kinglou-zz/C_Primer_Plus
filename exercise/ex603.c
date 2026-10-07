#include <stdio.h>
#define SIZE 6
int main(void)
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", 'F' - j);
        }
        printf("\n");
    }
    return 0;
}