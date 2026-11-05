#include <stdio.h>

double harmean(double x, double y);

int main(void)
{
    double x, y;

    printf("Enter two double-type numbers:");
    while(scanf("%lf %lf", &x, &y) == 2)
    {
        if(x == 0 || y == 0)
        {
            printf("Enter two double-type numbers (other than 0):");
            continue;
        }

        printf("The harmean of (%g, %g) is %g\n", x, y, harmean(x, y));
        printf("Enter next double-type numbers (q to quit):");
    }

    printf("Bye!");
    return 0;
}

double harmean(double x, double y)
{
    return 1 / ((1.0 / 2.0) * (1 / x + 1 / y));
}