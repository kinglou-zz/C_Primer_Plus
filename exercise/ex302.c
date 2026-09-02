#include <stdio.h>
int main(void)
{
    int ascii;

    printf("Enter a ASCII code: ");
    scanf("%d", &ascii);
    printf("The character for ASCII code %d is '%c'\n", ascii, ascii);
    
    return 0;
}