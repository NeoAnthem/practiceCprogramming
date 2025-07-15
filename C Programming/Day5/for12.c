// WAP to print the table of n till x iteration

#include <stdio.h>
int main()
{
    int n, x, i, table;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of x : ");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
    }
}