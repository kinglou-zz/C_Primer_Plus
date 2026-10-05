#include <stdio.h>
int main(void)
{
    int count, sum;
    int n;

    printf("Enter a upper limit: ");
    scanf("%d", &n);

    count = 0;
    sum = 0;
    while (count <= n)
    {
        sum = sum + count * count;
        count++;
    }
    printf("sum = %d\n", sum);

    return 0;
}