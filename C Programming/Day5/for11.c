// WAP to print factorial of n

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int factorial = 1;
    for (i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is : %d\n", n, factorial);
}