// WAP to print multiplication of digits

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int last_digit;

    int i = n;
    while (i != 0)
    {
        last_digit = i % 10;
        sum = sum + last_digit;
        i = i / 10;
    }
    printf("The sum of digit of %d is : %d\n", n, sum);
}