#include <stdio.h>
#define SIZE 8

int main(void)
{
    int num[SIZE];
    int i, value;

    for(i = 0, value = 1; i < SIZE; i++)
    {
        num[i] = value;
        value *= 2;
    }

    i = 0;
    printf("Here are the list values:\n");
    do
    {
        printf("%d ", num[i]);
        i++;
    }while(i < SIZE);
    printf("\n");

    return 0;
}