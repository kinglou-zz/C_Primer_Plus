#include <stdio.h>
#define DAYS_PER_WEEK 7
int main(void)
{
    int days;

    printf("Enter the number of days:\n");
    scanf("%d", &days);
    while (days > 0)
    {
        printf("That is %d weeks and %d days.\n",
        days / DAYS_PER_WEEK, days % DAYS_PER_WEEK);
        printf("Enter next number of days (0 to quit):\n");
        scanf("%d", &days);
    }
    printf("Bye!\n");
    
    return 0;
}