/*
WAP to print the following pattern till n:
            *
            *  *
            *  *  *
            *  *  *  *
            *  *  *  *  *
 */

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}