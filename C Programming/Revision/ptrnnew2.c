#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int l = 2 * n - 1;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            int dr = abs((i - n)); // offset from row center
            int dc = abs((j - n)); // offset from column center
            // int max = fmaxl(dr, dc);
            int max = dr > dc ? dr : dc;
            printf("%d ", max + 1);
        }
        printf("\n");
    }
}