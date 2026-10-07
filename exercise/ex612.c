#include <stdio.h>
int main(void) {
    int limit;
    
    printf("Enter the number of times you want:");

    while (scanf("%d", &limit) == 1 && limit > 0)
    {
        double sum = 0, den = 1.0;
        for (int i = 0; i <= limit; i++)
        {
            sum += 1.0 / den++;
        }
        printf("1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 +... + 1.0 / %d = %f\n",
            limit, sum);

        sum = 0, den = 1.0;
        
        for (int i = 0; i <= limit; i++)
        {
            int sign = 1;
            if (i % 2 != 0) {
                sign = -1;
            }
            sum += sign * (1.0 / den++);
        }
        printf("1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 +... + 1.0 / %d = %f\n",
            limit, sum);
        
        printf("Enter next number of times (0 or less to quit):");
    }

    return 0;
}