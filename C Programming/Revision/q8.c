// WAP to print table of n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int i = 1;
    int table;
    while (i <= 10)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
        i++;
    }
}