// WAP to print table of n till x iterations
// n = 6

#include <stdio.h>
int main()
{
    int i = 1;

    int n, table, x;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter a number: ");
    scanf("%d", &x);

    while (i <= x)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
        i++;
    }
}