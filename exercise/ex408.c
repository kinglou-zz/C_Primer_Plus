#include <stdio.h>
#define LITERS_PER_GALLON 3.785
#define KILOMETERS_PER_MILE 1.609
int main(void)
{
    float miles, oils;
    printf("Enter a mileage of journey(mile): ");
    scanf("%f", &miles);
    printf("Enter an amount of gasoline to cost(gallon): ");
    scanf("%f", &oils);
    printf("In UAS, your oil wear is %.1f M/G.\n", miles/oils);
    printf("In Europe, your oil wear is % %.1f L/100KM.\n",
           (oils * LITERS_PER_GALLON) / (miles * KILOMETERS_PER_MILE / 100));
    
    return 0;
}