/*
WAP to print the following pattern :
            5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1
 */

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= 1; j--)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
}