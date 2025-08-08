// WAP to create function which display table of n till x iteration
// call fn 3 times

#include <stdio.h>
void tableOfN()
{
    int n, x, i, table;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("\n");
    for (i = 1; i <= x; i++)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
    }
    printf("\n");
}
int main()
{
    tableOfN();
    tableOfN();
    tableOfN();
}