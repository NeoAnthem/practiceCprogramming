// WAP to print square of first n natural numbers

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int square;
    int i = 1;
    while (i <= n)
    {
        square = i * i;
        printf("Square of %d is : %d\n", i, square);
        i++;
    }
}