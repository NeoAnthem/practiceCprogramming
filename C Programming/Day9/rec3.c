// WAP to print sum of digit of n using recursion
#include <stdio.h>
int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return (num % 10) + sumOfDigits(num / 10);
}
int main()
{

    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("The sum of all digits of %d is : %d\n", n, sumOfDigits(n));
}