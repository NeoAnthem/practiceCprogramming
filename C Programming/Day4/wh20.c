// WAP to check whether the number is palindrome or not
// EX: n = 183 -> Reverse = 381 -> Not a Palindrome
// n = 1551 -> Reverse = 1551 -> Palindrome Number

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of number n : ");
    scanf("%d", &n);

    int lastDigit, rev = 0;
    int revNum;
    revNum = n;

    while (n != 0)
    {
        lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }
    if (revNum == rev)
    {
        printf("%d is a Palindrome Number\n", revNum);
    }
    else
    {
        printf("%d is not a Palindrome number\n", revNum);
    }
}