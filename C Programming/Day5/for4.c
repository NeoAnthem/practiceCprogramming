// WAP to print first n natural numbers

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}