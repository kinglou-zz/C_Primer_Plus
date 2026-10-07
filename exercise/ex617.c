#include <stdio.h>
int main(void)
{
    const double RATE_YEAR = 0.08;
    int years = 0;
    double chuckie = 100;

    printf("Here is Chuckie's account recode:\n");
    printf("%5s %6s\n", "Year", "Account");
    do
    {
        printf("%4d %8.2f\n", years, chuckie);
        chuckie += chuckie * RATE_YEAR;
        chuckie -= 10;
        years++;
    }while(chuckie > 0);
    printf("%d years later, Chuckie's account is ZERO.\n", years);
    
    return 0;
}