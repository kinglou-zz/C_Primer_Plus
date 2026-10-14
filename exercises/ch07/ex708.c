#include <stdio.h>
#define BASE_SALARY1 8.75
#define BASE_SALARY2 9.33
#define BASE_SALARY3 10.00
#define BASE_SALARY4 11.20
#define BASE_HOURS 40
#define OVERTIME 1.5
#define TAX1 300
#define TAX2 150
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25

void print_menu(void);

int main(void)
{
    double hours;
    double salary, tax, net;
    int salary_level;
    double base_salary;

    print_menu();
    while((scanf("%d", &salary_level)) == 1 && salary_level != 5)
    {
        switch(salary_level)
        {
            case 1:
                base_salary = BASE_SALARY1;
                break;
            case 2:
                base_salary = BASE_SALARY2;
                break;
            case 3:
                base_salary = BASE_SALARY3;
                break;
            case 4:
                base_salary = BASE_SALARY4;
                break;
            default:
                printf("Please enter choice 1~5.\n");
                print_menu();
                continue;
        }

        printf("Please input the number of hours worked this week: ");
        scanf("%lf", &hours);
        
        if(hours < BASE_HOURS)
            salary = hours * base_salary;
        else
            salary = BASE_HOURS * base_salary + (hours - BASE_HOURS) * base_salary * OVERTIME;
        
        if(salary < TAX1)
            tax = salary * RATE1;
        else if(salary < TAX1 + TAX2)
            tax = TAX1 * RATE1 + (salary - TAX1) * RATE2;
        else
            tax = TAX1 * RATE1 + TAX2 * RATE2 + (salary - TAX1 - TAX2) * RATE3;

        net = salary - tax;

        printf("salary: $%.2f; tax: $%.2f; net: $%.2f\n", salary, tax, net);
        printf("-----------------------------------------------------------------\n");
        print_menu();
    }
    printf("Done\n");
    
    return 0;
}

void print_menu(void)
{
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $%.2f/hr                            2) $%.2f/hr\n", BASE_SALARY1, BASE_SALARY2);
    printf("3) $%.2f/hr                           4) $%.2f/hr\n", BASE_SALARY3, BASE_SALARY4);
    printf("5) quit\n");
    printf("*****************************************************************\n");
}