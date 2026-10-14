#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int num, n, div;
    bool isPrime;

    printf("Enter a positive integer:");
    while (scanf("%d", &num) == 1 && num > 0) 
    {
        if (num > 1)
            printf("Here are the prime numbers up through %d\n", num);
        else
            printf("No primes.\n");

        for(n = 2; n <= num; n++)
        {
            for (div = 2, isPrime = true; (div * div) <= n; div++)
            {
                if (n % div == 0)
                    isPrime = false; // number is not prime
            }
            if (isPrime)
                printf("%d is prime.\n", n);
        }
        printf("Enter next positive integer (q to quit):");
    }
    printf("Done\n");

    return 0;
}