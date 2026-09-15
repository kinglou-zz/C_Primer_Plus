#include <stdio.h>
int main(void)
{
    int age;
    float assests;
    char pet[30];

    printf("Enter your age, assests, and favorite pet.\n");
    scanf("%d %f", &age, &assests);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assests, pet);

    return 0;
}