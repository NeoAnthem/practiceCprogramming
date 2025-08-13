#include <stdio.h>
int fact(int num)
{
    if (num < 0)
    {
        return 0;
    }

    if (num == 1 || num == 0)
    {
        return 1;
    }

    return num * fact(num - 1);
}
int main()
{
    int result = fact(5);
    printf("The factorial of 5 is : %d\n", result);

    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    result = fact(n);

    if (result == 0)
    {
        printf("Enter positive number to calculate factorial\n");
    }
    else
    {
        printf("The factorial of %d is : %d", n, result);
    }
}