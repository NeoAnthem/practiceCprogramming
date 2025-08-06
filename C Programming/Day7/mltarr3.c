// Takeinput in matrix of size 4 * 3
#include <stdio.h>
int main()
{
    int arr[4][3]; // Declaration

    int i, j;

    // INPUT
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element at position %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // OUTPUT
    printf("Matrix of size 4 * 3 is: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}