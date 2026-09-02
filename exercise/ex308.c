#include <stdio.h>
int main(void)
{
    float cup_per_pint = 2;
    float ounce_per_cup = 8;
    float soupspoons_per_ounce = 2;
    float teaspoons_per_soupspoon = 3;
    float num_cup;

    printf("Enter the number of cup: ");
    scanf("%f", &num_cup);
    printf("%g cup is %g pint, %g ounce, %g soupspoon, and %g teaspoon.\n", num_cup, num_cup / cup_per_pint, num_cup * ounce_per_cup, num_cup * ounce_per_cup * soupspoons_per_ounce, num_cup * ounce_per_cup * soupspoons_per_ounce * teaspoons_per_soupspoon);

    return 0;
}