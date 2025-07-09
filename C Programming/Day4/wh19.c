// WAP to print sum of digit of n
// Input = 125 -> 1 + 2 + 5 = 8

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // storing value of n in i for future processes
    int sum = 0;
    int last_digit;

    // start
    int i = n;
    while (i != 0)
    {
        last_digit = i % 10;
        sum = sum + last_digit;
        i = i / 10;
    }
    printf("The sum of digit of %d is %d\n", n, sum);

    // last_digit = i % 10;
    // sum = sum + last_digit;
    // i = i / 10;

    // last_digit = i % 10;
    // sum = sum + last_digit;
    // i = i / 10;

    // last_digit = i % 10;
    // sum = sum + last_digit;
    // i = i / 10;
}