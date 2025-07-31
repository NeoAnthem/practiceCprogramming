// WAP a program to print sum of numbers from 1 to n

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of numbers from 1 to %d is : %d\n", n, sum);
}