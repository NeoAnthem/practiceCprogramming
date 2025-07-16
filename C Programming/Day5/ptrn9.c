

/* WAP to print pattern till n:
1   0   1   0   1
0   1   0   1   0
1   0   1   0   1
0   1   0   1   0
1   0   1   0   1
*/
#include <stdio.h>
int main()
{
    int i, j, n, count = 1;
    int a = 0, b = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    // ROW
    for (i = 1; i <= n; i++)
    {
        // COLUMN
        for (j = 1; j <= n; j++)
        {
            if (count % 2 != 0)
            {
                printf("%d\t", b);
            }
            else
            {
                printf("%d\t", a);
            }
            count++;
        }
        printf("\n");
    }
}