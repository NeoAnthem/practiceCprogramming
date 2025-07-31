// WAP to print table of n till x iterations

#include <stdio.h>
int main()
{
    int n, table, x;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("Enter the value of x : ");
    scanf("%d", &x);
    int i = 1;
    while (i <= x)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
        i++;
    }
}
