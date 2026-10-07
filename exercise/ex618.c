#include <stdio.h>
int main(void)
{
    int friends = 5;
    int weeks = 1;

    printf("The number of Dr Rabnud's friends:\n");
    printf("%5s %10s\n", "Week", "Friends");

    while(friends <= 150)
    {
        friends = (friends - weeks) * 2;
        printf("%5d %7d\n", weeks, friends);
        weeks++;
    }

    return 0;
}