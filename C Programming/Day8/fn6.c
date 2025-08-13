// WAP to print series of prime number from 1 to n
#include <stdio.h>

int checkPrime(int number)
{
    // assuming any number is a prime number
    int isPrime = 0;
    if (number <= 1)
    {
        // bcoz negative or 1 is not a prime number
        isPrime = 1;
        return isPrime;
    }
    // Loop -> 2 to n-1
    for (int i = 2; i <= number - 1; i++)
    {
        if (number % i == 0)
        {
            // if number is divisible by i then it is not a prime number
            isPrime = 1;
            return isPrime;
        }
    }
    return isPrime;
}

int main()
{
    int n, i;
    printf("Enter a number to print series of prime number: ");
    scanf("%d", &n);

    printf("Series of prime number from 1 to %d:\n", n);
    for (i = 1; i <= n; i++)
    {
        int prime = checkPrime(i);
        if (prime == 0)
        {
            printf("%d\t", i);
        }
    }
}