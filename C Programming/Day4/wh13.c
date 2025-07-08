// WAP to print table of n
// n = 6

#include <stdio.h>
int main()
{
    int i = 1;
    int n, table;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= 10)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
        i++;
    }
}