/*
WAP to print the following pattern :
            *  *  *  *  *
            *  *  *  *
            *  *  *
            *  *
            *
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
}