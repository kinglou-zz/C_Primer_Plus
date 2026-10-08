#include <stdio.h>
#define CMS_PER_INCH 2.54
#define INCHES_PER_FOOT 12
int main(void)
{
    float height, inches;
    int feet;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height);
    while(height >0)
    {
        inches = height / CMS_PER_INCH;
        feet = (int)inches / INCHES_PER_FOOT;
        inches = inches - feet * INCHES_PER_FOOT;
        printf("%.1f cm = %d feet, %.1f inches\n",
            height, feet, inches);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &height);
    }

    return 0;
}