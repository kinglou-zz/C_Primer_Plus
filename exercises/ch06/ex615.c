#include <stdio.h>
#include <string.h>

#define SIZE 255

int main(void)
{
    char data[SIZE];
    int i = 0, length;

    printf("Enter the char in a line:\n");
    do
    {
        scanf("%c", &data[i]);
    } while (data[i++] != '\n');

    printf("The reverse char of the data:\n");
    length = strlen(data) - 2;
    for (i = length; i >= 0; i--) {
        printf("%c", data[i]);
    }

    return 0;
}