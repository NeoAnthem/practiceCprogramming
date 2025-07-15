// WAP to print the fibonacci series from 1 to 10

#include <stdio.h>
int main()
{
    int currNum = 0, prevNum = 1, nextNum;
    int i;

    printf("Fibonacci Series from 1 to 10  is : \n");

    for (i = 1; i <= 10; i++)
    {
        printf(" %d ", currNum);

        nextNum = currNum + prevNum;
        currNum = prevNum;
        prevNum = nextNum;
    }
}