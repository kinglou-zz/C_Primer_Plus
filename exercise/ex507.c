#include <stdio.h>
void print_cube(double x);

int main(void)
{
    double num;
    printf("Enter a double number: ");
    scanf("%lf", &num);
    print_cube(num);

    return 0;
}

void print_cube(double x)
{
    printf("The cube of %g is %g.\n", x, x * x * x);
}