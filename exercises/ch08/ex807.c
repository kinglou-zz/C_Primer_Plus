#include <stdio.h>
#include <ctype.h>

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
int get_first(void);

int main(void)
{
    double hours;
    double salary, tax, net;
    int salary_level;
    double base_salary;

    print_menu();
    while((salary_level = get_first()) != 'q')
    {
        switch(salary_level)
        {
            case 'a':
                base_salary = BASE_SALARY1;
                break;
            case 'b':
                base_salary = BASE_SALARY2;
                break;
            case 'c':
                base_salary = BASE_SALARY3;
                break;
            case 'd':
                base_salary = BASE_SALARY4;
                break;
            default:
                printf("Please enter choice a~d(q to quit).\n");
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
    printf("Enter the a~d corresponding to the desired pay rate or action(q to quit):\n");
    printf("a) $%.2f/hr                            b) $%.2f/hr\n", BASE_SALARY1, BASE_SALARY2);
    printf("c) $%.2f/hr                           d) $%.2f/hr\n", BASE_SALARY3, BASE_SALARY4);
    printf("q) quit\n");
    printf("*****************************************************************\n");
}

int get_first(void)
{
    int ch;
    
    ch = getchar();

    while (isspace(ch) || ispunct(ch))
        ch = getchar();

    while (getchar() != '\n')
        continue;
    
    return ch;
}