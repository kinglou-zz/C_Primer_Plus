#include <stdio.h>
int main(void)
{
    int age_years;
    double age_seconds;
    printf("Enter your age in years: ");
    scanf("%d", &age_years);
    age_seconds = age_years * 3.156e7;
    printf("Your age of %d years is %e seconds.\n", age_years, age_seconds);

    return 0;
}