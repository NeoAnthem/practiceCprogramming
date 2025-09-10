// WAP to print square of number n

#include <stdio.h>
int main()
{
    int n;
    int square;
    do
    {
        printf("Enter the value of n  or -1 to exit : ");
        scanf("%d", &n);
        if (n == -1)
        {
            printf("Thanks for using, I am closing now!");
        }
        else
        {
            square = n * n;
            printf("The square of %d is : %d\n", n, square);
        }
    } while (n != -1);
}
