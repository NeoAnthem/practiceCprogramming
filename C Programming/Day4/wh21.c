// WAP to print sum of square of 1 to 5
// 1 + 4 + 9 + 16 + 25

#include <stdio.h>
int main()
{
    int i = 1;
    int square, sum = 0;

    while (i <= 5)
    {
        square = i * i;
        sum = sum + square;
        i++;
    }
    printf("The sum of square of 1 to 5 is : %d\n", sum);
}