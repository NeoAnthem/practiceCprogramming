// WAP to print factorial of 5

#include <stdio.h>

int main()
{
    int i;
    int factorial = 1;
    for (i = 5; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    printf("Factorial of 5 is : %d\n", factorial);
}