#include <stdio.h>

void Temperatures(double fahrenheit);

int main(void)
{
    double input;

    printf("Enter a number of fahrenheit temperature:");
    while (scanf("%lf", &input) == 1) 
    {
        Temperatures(input);
       
        printf("Enter next fahrenheit temperature value (q or non-numeric to quit):");
    }
    printf("Done\n");
    return 0;

}

void Temperatures(double fahrenheit)
{
    const double celsius_to_kelvin = 273.16;
    const double fahrenheit_to_celsius = 32.0;

    double celsius, kelvin;
    celsius = 5.0 / 9.0 * (fahrenheit - fahrenheit_to_celsius);
    kelvin = celsius + celsius_to_kelvin;

    printf("%.2f. fahrenheit = %.2f celsius, and %.2f kelvin\n", fahrenheit, celsius, kelvin);
}