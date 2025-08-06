// WAP to accept row and col size and element from user in matrix

#include <stdio.h>
int main()
{
    int n, m;

    printf("Enter the no. of rows in matrix : ");
    scanf("%d", &n);

    printf("Enter the no. of columns in matrix : ");
    scanf("%d", &m);

    int arr[n][m];
    int i, j;

    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter element at position [%d, %d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("The %d * %d Matrix is : \n", n, m);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}