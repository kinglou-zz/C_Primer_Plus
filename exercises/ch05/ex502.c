#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    
    int limits = num + 10;
    printf("The number from %d to %d is:\n", num, limits);
    while (num <= limits)
    {
        printf("%d\n", num);
        num++;
    }
    
    return 0;
}