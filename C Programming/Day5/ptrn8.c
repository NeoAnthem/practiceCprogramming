/*
WAP to print the following pattern :
            5 4 3 2 1
            4 3 2 1
            3 2 1
            2 1
            1
 */

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
}