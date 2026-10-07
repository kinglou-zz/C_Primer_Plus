#include <stdio.h>
int main(void)
{
    const double RATE_SING = 0.10;
    const double RATE_COMP = 0.05;

    double init_amt = 100;
    double daphne = init_amt;
    double deirdre = init_amt;
    int years = 0;

    while(deirdre <= daphne)
    {
        daphne += init_amt * RATE_SING;
        deirdre += deirdre * RATE_COMP;
        years++;
    }
    printf("Investment values after %d years:\n", years);
    printf("Daphne: $%.2f\n", daphne);
    printf("Deirdre: $%.2f\n", deirdre);

    return 0;
}