/* WAP to print pattern till n:
1   2   3   4   5
6   7   8   9   10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25
*/
#include <stdio.h>
int main()
{
    int i, j, n, count = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    // ROW
    for (i = 1; i <= n; i++)
    {
        // COLUMN
        for (j = 1; j <= n; j++)
        {
            printf("%d\t", count);
            count++;
        }
        // Move cursor to next line (next row)
        printf("\n");
    }
}