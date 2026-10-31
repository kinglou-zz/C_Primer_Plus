#include <stdio.h>
#include <ctype.h>

void print_menu(void);
int get_first(void);
double get_number(void);
void calc(int response);

int main(void)
{
    int response;

    print_menu();

    while((response = get_first()) != 'q')
    {
        response = tolower(response);

        switch(response)
        {
            case 'a':
            case 's':
            case 'm':
            case 'd':
                calc(response);
                break;
            default:
                printf("Please enter choice a, s, m or d(q to quit).\n");
                print_menu();
                continue;
        }
        print_menu();
    }
    printf("Bye.\n");

    return 0;
}

void print_menu(void) {
    printf("*****************************************************************\n");
    printf("Enter the operation of your choice:\n");
    printf("a) add                            s) subtract\n");
    printf("m) multiply                       d) divide\n");
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

double get_number(void)
{
    double num;
    char ch;

    while (scanf("%lf", &num) != 1) 
    {
        while ((ch = getchar()) != '\n')
            putchar(ch); 
        printf(" is not an number.\n");
        printf("Please enter an number, such as 2.5, -1.78E8, or 3:");
    }

    return num;
}

void calc(int response)
{
    double first_number, second_number;

    printf("Enter first number:");
    first_number = get_number();
    printf("Enter second number:");
    second_number = get_number();

    switch(response)
    {
        case 'a':
            printf("%g + %g = %g\n", first_number, second_number, first_number + second_number);
            break;
        case 's':
            printf("%g - %g = %g\n", first_number, second_number, first_number - second_number);
            break;
        case 'm':
            printf("%g * %g = %g\n", first_number, second_number, first_number * second_number);
            break;
        case 'd':
            if(second_number == 0)
            {
                printf("Enter a number other than 0:");
                second_number = get_number();
            }
            printf("%g / %g = %g\n", first_number, second_number, first_number / second_number);
            break;
        default:;
    }
}