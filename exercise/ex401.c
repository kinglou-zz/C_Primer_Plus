#include <stdio.h>
int main(void)
{
    char first_name[20];
    char last_name[20];

    printf("Enter your first and last name:\n");
    scanf("%s %s", first_name, last_name);
    printf("%s %s\n", first_name, last_name);

    return 0;
}