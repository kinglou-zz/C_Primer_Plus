#include <stdio.h>
int main(void)
{
    float number;

    printf("Enter a floating-point value: ");
    scanf("%f", &number);
    printf("fixed-point notation: %f\n", number);
    printf("exponential notation: %e\n", number);
    printf("p notation: %.2a\n", number);

    return 0;
}