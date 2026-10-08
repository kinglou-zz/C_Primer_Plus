#include <stdio.h>
int main(void)
{
    int age_years, age_days;
    printf("Enter your age in years: ");
    scanf("%d", &age_years);
    age_days = age_years * 365;
    printf("Your age of %d years is %d days.\n", age_years, age_days);

    return 0;
}