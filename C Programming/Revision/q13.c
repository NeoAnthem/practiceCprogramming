// WAP to print the following series :
// 100 90 80 70 60 50 40 30 20 10

#include <stdio.h>
int main()
{
    int i;
    for (i = 100; i >= 0; i -= 10)
    {
        printf("%d ", i);
    }
}