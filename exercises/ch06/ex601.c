#include <stdio.h>
#define SIZE 26

int main(void)
{
    int letters[SIZE];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        letters[i] = 'a' + i;
    }

    for(i = 0; i < SIZE; i++)
    {
        printf("%2c", letters[i]);
    }
    printf("\n");

    return 0;
}