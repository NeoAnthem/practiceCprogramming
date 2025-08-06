// WAP to take input and display a matrix of size 5*2 and also display sum of all elements

#include <stdio.h>
int main()
{
    int arr[5][2];
    int i, j;
    int sum = 0;

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter element at position [%d, %d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");
    printf("Matrix of size 5 * 2 is: \n");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum += arr[i][j];
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("The sum of all elements of matrix is : %d", sum);
    printf("\n");
}