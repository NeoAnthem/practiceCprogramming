// WAP to print sum of odd and even number from 1 to 10
// sumOdd = 1 + 3 + 5

#include <stdio.h>

int main()
{
    int i = 1, sumOdd = 0, sumEven = 0;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            // Even Sum
            sumEven = sumEven + i;
        }
        else
        {
            // odd
            sumOdd = sumOdd + i;
        }
        i++;
    }
    printf("Sum of only odd number from 1 to 10 is %d\n", sumOdd);
    printf("Sum of only even number from 1 to 10 is %d\n", sumEven);
}