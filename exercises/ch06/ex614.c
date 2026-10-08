#include <stdio.h>
#define SIZE 8

int main(void)
{
    double num1[SIZE], num2[SIZE];
    printf("Enter %d numbers to the FIRST array:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%lf", &num1[i]);
    }

    num2[0] = num1[0];
    for(int i = 1; i < SIZE; i++)
    {
        num2[i] = num2[i - 1] + num1[i];
    }

    printf("All the data of  two array:\n");
    printf("First  Array: ");
    for (int i = 0; i < 8; i++) {
        printf("%10lf ", num1[i]);
    }
    printf("\nSecond Array: ");
    for (int i = 0; i < 8; i++) {
        printf("%10lf ", num2[i]);
    }

    return 0;
}