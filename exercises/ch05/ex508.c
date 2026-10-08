#include <stdio.h>
int main(void)
{
    int first_int, second_int;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &second_int);
    printf("Now enter the first operand: ");
    scanf("%d", &first_int);
    while (first_int > 0)
    {
        printf("%d %% %d is %d\n", first_int, second_int,
            first_int % second_int);
        printf("Enter next number for first operand (<=0 to quit): ");
        scanf("%d", &first_int);
    }
    printf("Done!\n");

    return 0;
}