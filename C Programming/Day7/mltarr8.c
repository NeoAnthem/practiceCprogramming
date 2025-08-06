// WAP to print diagonals of a matrix (even matrix)

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

    if (n == m)
    {
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
        printf("The Primary Diagonal is : \n");
        printf("\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i == j)
                {
                    printf("%d\t", arr[i][j]);
                }
            }
        }
        printf("\n");
        printf("\n");
        printf("The Secondary Diagonal is : \n");
        printf("\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i + j == n - 1)
                {
                    printf("%d\t", arr[i][j]);
                }
            }
        }
        printf("\n");
    }
    else
    {
        printf("The number of rows and columns of the matrix are not equal");
    }
}