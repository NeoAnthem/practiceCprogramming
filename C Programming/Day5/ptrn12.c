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
    int i, j, n, space;

    printf("Enter value of n : ");
    scanf("%d", &n);
    // Row
    for (i = 1; i <= n; i++)
    { // Space
        for (space = 1; space <= n - i; space++)
        {
            printf("   ");
        }
        // Star
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}