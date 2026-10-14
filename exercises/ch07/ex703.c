#include <stdio.h>
int main(void)
{
    int n;
    int even_count = 0;
    double even_sum = 0;
    int odd_count = 0;
    double odd_sum = 0;

    printf("Please input numbers (0 to quit):\n");
    while(scanf("%d", &n) == 1 && n != 0)
    {
        if(n % 2 == 0)
            even_count++, even_sum += n;
        else
           odd_count++, odd_sum += n;
    }
    if(even_count > 0)
        printf("even count: %d, even average: %.2f\n", even_count, even_sum / even_count);
    if(odd_count > 0)
        printf("odd count: %d, odd  average: %.2f\n", odd_count, odd_sum / odd_count);
    return 0;
}