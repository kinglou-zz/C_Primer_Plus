#include <stdio.h>
#define BASE1 17850
#define BASE2 23900
#define BASE3 29750
#define BASE4 14875
#define RATE1 0.15
#define RATE2 0.28

void print_menu(void);

int main(void)
{
    int base_level, base_salary;
    double salary, tax;

    print_menu();
    while((scanf("%d", &base_level)) == 1 && base_level != 5)
    {
        switch(base_level)
        {
            case 1:
                base_salary = BASE1;
                break;
            case 2:
                base_salary = BASE2;
                break;
            case 3:
                base_salary = BASE3;
                break;
            case 4:
                base_salary = BASE4;
                break;
            default:
                printf("Please enter choice 1~4.\n");
                print_menu();
                continue;
        }

        printf("Enter your salary:");
        scanf("%lf", &salary);
        
        if(salary < base_salary)
            tax = salary * RATE1;
        else
            tax = base_salary * RATE1 + (salary - base_salary) * RATE2;

        printf("The tax is $%.2f.\n", tax);
        printf("-----------------------------------------------------------------\n");
        print_menu();
    }
    printf("Done");

    return 0;
}

void print_menu(void) 
{
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the category or action:\n");
    printf("1) unmarried                            2) householder\n");
    printf("3) married, owned by all                4) married, divorced\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
}