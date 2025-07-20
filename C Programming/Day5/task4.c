// WAP to check if a number is palindrome or not.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of number n : ");
    scanf("%d", &n);

    int lastDigit, rev = 0;
    int revNum;
    revNum = n;

    for (; n != 0; n = n / 10)
    {
        lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
    }

    if (revNum == rev)
    {
        printf("%d is a Palindrome Number\n", revNum);
    }
    else
    {
        printf("%d is not a Palindrome Number\n", revNum);
    }
}