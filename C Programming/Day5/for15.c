// WAP to print the fibonacci series till n numbers

#include <stdio.h>
int main()
{
    int currNum = 0, prevNum = 1, nextNum;
    int i, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("Fibonacci Series till n is : \n");

    for (i = 1; i <= n; i++)
    {
        printf(" %d ", currNum);

        nextNum = currNum + prevNum;
        currNum = prevNum;
        prevNum = nextNum;
    }
}