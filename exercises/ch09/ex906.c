#include <stdio.h>

void handle(double *p1, double *p2, double *p3);
void swap(double *x, double *y);

int main(void)
{
    double x, y, z;

    printf("Enter three numbers:");
    while(scanf("%lf %lf %lf", &x, &y, &z) == 3)
    {
        handle(&x, &y, &z);
        printf("The values are %g, %g and %g.\n", x, y, z);
        printf("Next three values (q to quit):");
    }

    printf("Bye!");
    return 0;
}

void handle(double *p1, double *p2, double *p3)
{
    if(*p1 > *p2)
        swap(p1, p2);
    if(*p1 > *p3)
        swap(p1, p3);
    if(*p2 > *p3)
        swap(p2, p3);
}

void swap(double *x, double *y)
{
    double t;

    t = *x;
    *x = *y;
    *y = t;
}