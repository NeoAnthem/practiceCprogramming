// WAP to take size and element from user in 2d array
// size -> row, column

#include <stdio.h>
int main()
{
    // create array
    int arr[6][6];
    int row, col, i, j;
    printf("Enter row size, maximum row size is 6: ");
    scanf("%d", &row);
    printf("Enter column size, maximum column size is 6: ");
    scanf("%d", &col);

    // Take input in array.
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter element at position %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display Matrix
    printf("Matrix of size %d * %d\n", row, col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}