#include <stdio.h>
#define SIZE 6
int main(void)
{
    char letter = 'A';
    for(int i = 0; i < SIZE; i++)
    {
        letter += i;
        char temp = letter;
        for(int j = 0; j <= i; temp++, j++)
        {
            printf("%c", temp);
        }
        printf("\n");
    }
    return 0;
}