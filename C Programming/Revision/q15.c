// WAP to check whether the number is prime or not

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int isPrime = 1;
    int i;

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime)
        {
            printf("%d is a Prime Number\n", n);
        }
        else
        {
            printf("%d is not a Prime Number\n", n);
        }
    }
}