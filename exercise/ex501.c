#include <stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{
    int minutes, hours, mins;
    printf("Enter the number of minutes to convert:\n");
    scanf("%d", &minutes);
    while (minutes > 0)
    {
        hours = minutes / MIN_PER_HOUR;
        mins = minutes % MIN_PER_HOUR;
        printf("%d minutes = %d hours and %d minutes.\n", 
            minutes, hours, mins);
        printf("Enter next minutes to convert(0 to quit):\n");
        scanf("%d", &minutes);
    }
    printf("Bye!\n");
    return 0;
}