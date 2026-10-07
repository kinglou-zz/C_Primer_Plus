#include <stdio.h>

double calc(double n, double m);

int main(void)
{
    double n, m;
    double res;

    printf("Enter a pair of floating-point numbers:");

    while (scanf("%lf %lf", &n, &m) == 2)
    {
        res = calc(n, m);
        printf("(%.3g - %.3g) / (%.3g * %.3g) = %.5g\n",
            n, m, n, m, res);
        printf("Enter next pair (non-numeric to quit):");
    }

    return 0;
}

double calc(double n, double m)
{
    return (n - m) / (n * m);
}