// WAP to print 2d array in matrix form

#include <stdio.h>
int main()
{
    // Initialization
    int arr[][3] = {
        {5, 1, 7},
        {8, 6, 3},
        {5, 10, 15},
        {9, 6, -2}};
    // 4 rows, 3 columns
    int i, j;
    printf("Elements are:\n");

    // rows
    for (i = 0; i < 4; i++)
    {
        // columns
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}