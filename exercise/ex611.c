#include <stdio.h>
#define SIZE 8

int main(void)
{
    int input[SIZE];
    
    printf("Please enter %d integers.\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &input[i]);
    }

    printf("Here are the values in reverse order you entered:\n");
    for (int i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ", input[i]);
    }
    printf("\n");

    return 0;
}