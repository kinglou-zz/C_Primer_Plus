#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int upper_count = 0;
    int lower_count = 0;
    int other_count = 0;
    
    printf("Please enter chars (Press Enter then Ctrl+Z to quit):\n");
    
    while ((ch = getchar()) != EOF)
    {
        if(isupper(ch))
            upper_count++;
        else if(islower(ch))
            lower_count++;
        else
            other_count++;        
    }
    
    printf("\n%ld uppercase characters read.", upper_count);
    printf("\n%ld lowercase characters read.", lower_count);
    printf("\n%ld othercase characters read.", other_count);
    
    return 0;
}