// WAP to to print odd numbers from 1 to 20

#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 20)
    {
        printf("%d\t", i);
        i % 2 != 0;
        i++;
    }
}