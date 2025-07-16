/*
WAP to print the following pattern till n:
            A B C D E
            A B C D E
            A B C D E
            A B C D E
            A B C D E
 */

#include <stdio.h>
int main()
{
    int i, j, n;
    char ch;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        ch = 'A';
        for (j = 1; j <= n; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}