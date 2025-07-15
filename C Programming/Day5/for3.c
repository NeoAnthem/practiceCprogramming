// WAP to print odd number from 2 to 25

#include <stdio.h>

int main()
{
    int i;
    for (i = 2; i <= 25; i++)
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
}