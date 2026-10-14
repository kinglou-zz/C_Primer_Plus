#include <stdio.h>
#define BASE_SALARY 10
#define BASE_HOURS 40
#define OVERTIME 1.5
#define TAX1 300
#define TAX2 150
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25

int main(void)
{
    double hours;
    double salary, tax, net;

    printf("Please input the number of hours worked this week: ");
    scanf("%lf", &hours);
    
    if(hours < BASE_HOURS)
        salary = hours * BASE_SALARY;
    else
        salary = BASE_HOURS * BASE_SALARY + (hours - BASE_HOURS) * BASE_SALARY * OVERTIME;
    
    if(salary < TAX1)
        tax = salary * RATE1;
    else if(salary < TAX1 + TAX2)
        tax = TAX1 * RATE1 + (salary - TAX1) * RATE2;
    else
        tax = TAX1 * RATE1 + TAX2 * RATE2 + (salary - TAX1 - TAX2) * RATE3;

    net = salary - tax;

    printf("salary: $%.2f; tax: $%.2f; net: $%.2f\n", salary, tax, net);

    return 0;
}