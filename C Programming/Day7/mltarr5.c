// WAP to print diagonals of a matrix
#include <stdio.h>
int main()
{
    int arr[][3] = {{10, 2, -9},
                    {6, 5, 8},
                    {-2, 0, 45}};

    printf("The Primary Diagonal is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d\t", arr[i][j]);
            }
        }
    }
    printf("\n");
    printf("The Secondary Diagonal is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 3 - 1)
            {
                printf("%d\t", arr[i][j]);
            }
        }
    }
}