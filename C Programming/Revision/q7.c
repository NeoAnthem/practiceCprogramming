// WAP to print first 10 natural numbers in reverse
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int i = n;
    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }
}
