#include <stdio.h>
int main(void)
{
    float inch = 2.54;
    float cm, in;
    
    printf("Enter the height in inches: ");
    scanf("%f", &in);
    cm = in * inch;
    printf("The height is %g centimeters.\n", cm);

    return 0;
}