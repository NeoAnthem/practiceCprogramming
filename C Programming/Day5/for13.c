// WAP to print odd and even value sum from 1 to 10 using only one loop 1 2 3 4 5 6 7 8 9 10
// odd = 1 + 3 + 5 + 7 + 9 =25
// even = 2 + 4 + 6 + 8 + 10 = 30

#include <stdio.h>
int main()
{
    int sumEven = 0, sumOdd = 0, i;

    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + i;
        }
        else
        {
            sumOdd = sumOdd + i;
        }
    }

    printf("Sum of all even numbers from 1 to 10 is : % d\n", sumEven);
    printf("Sum of all odd numbers from 1 to 10 is : % d\n", sumOdd);
}