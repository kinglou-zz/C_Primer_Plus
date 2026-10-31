#include <stdio.h>
int main(void)
{
    int high = 100;
    int low = 1;
    int guess = (high + low) / 2;
    char response;
    
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')     /* get response */
    {
        if(response == '\n')
            continue;                 /* skip rest of input line */

        if(response != 'h' && response != 'l')
        {
            printf("I don't understand that response. Please enter h for\n");
            printf("high, l for low, or y for correct.\n");
            continue;
        }

        if(response == 'h')
            high = guess - 1;
        else
            low = guess + 1;

        guess = (high + low) / 2;

        printf("Well, then, is it %d? [low:%d, high:%d]\n", guess, low, high);

    }
    printf("I knew I could do it!\n");
    
    return 0;
}