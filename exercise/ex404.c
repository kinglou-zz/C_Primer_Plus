#include <stdio.h>
int main(void)
{
    float height_inch;
    char name[20];
    printf("Enter your height in inches and name:\n");
    scanf("%f %s", &height_inch, name);
    printf("%s, you are %.3f feet tall.\n", name, height_inch / 12.0);

    return 0;
}