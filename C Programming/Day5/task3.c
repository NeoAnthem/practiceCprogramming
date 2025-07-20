// WAP to check whether the number is prime or not using for loop

#include <stdio.h>
int main()
{
    int num, i, isPrime = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime)
        {
            printf("%d is a Prime Number\n", num);
        }
        else
        {
            printf("%d is a not a Prime Number\n", num);
        }
    }
}