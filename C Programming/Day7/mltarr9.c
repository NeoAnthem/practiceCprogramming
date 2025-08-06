// WAP to Print transpose for uneven matrix

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
    printf("The Transpose of uneven matrix is : \n");
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
}