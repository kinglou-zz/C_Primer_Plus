#include <stdio.h>

void larger_of(double *p1, double *p2);

int main(void)
{
    double x, y;

    printf("Enter two numbers:");
    while(scanf("%lf %lf", &x, &y) == 2)
    {
        larger_of(&x, &y);
        printf("The modified values are %g and %g.\n", x, y);
        printf("Next two numbers (q to quit):");
    }

    printf("Bye!");
    return 0;
}

void larger_of(double *p1, double *p2)
{
    double m = (*p1 > *p2) ? *p1 : *p2;
    *p1 = *p2 = m;
}