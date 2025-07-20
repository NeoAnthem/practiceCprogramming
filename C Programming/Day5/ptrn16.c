/*
WAP to print the following pattern :
            *  *  *  *  *
            *  *  *  *
            *  *  *
            *  *
            *
            *  *
            *  *  *
            *  *  *  *
            *  *  *  *  *
 */
#include <stdio.h>
int main()
{

    int i, j, k, l, n, space;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // Star
        for (j = i; j <= n; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    for (k = 2; k <= n; k++)
    {
        // Star
        for (l = 1; l <= k; l++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}