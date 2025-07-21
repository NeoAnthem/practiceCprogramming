/* WAP to print the following pattern
-                    *
-                *   *   *
-            *   *   *   *   *
-        *   *   *   *   *   *   *
-    *   *   *   *   *   *   *   *   *
 */
#include <stdio.h>
int main()
{
    int i, j, n, space;
    char star = '*';

    printf("Enter a number : ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf("   ");
        }

        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}