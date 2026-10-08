#include <stdio.h>
int main(void)
{
    int lower, upper, index;
    int sum = 0;

    printf("Enter lower and upper integer limits:");
    while (scanf("%d %d", &lower, &upper) == 2 && lower < upper) 
    {
        for (index = lower; index <= upper; index++)
        {
            sum += index * index;
        }
        printf("The sums of the squares from %d to %d is %d\n",
            lower * lower, upper * upper, sum);
        printf("Enter next set of limits:");
    }
    printf("Done");
    
    return 0;
}