// WAP to to print first odd numbers frim 1 to n

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i % 2 != 0;
        i++;
    }
}