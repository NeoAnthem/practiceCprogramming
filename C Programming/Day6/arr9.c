// WAP to create two separate array (odd element and even element)
// from a given array {5,9,8,2,6,1,3}

#include <stdio.h>
int main()
{
    int arr[] = {5, 9, 8, 2, 6, 1, 3};
    int i, evenArr[10], oddArr[10];
    int length = sizeof(arr) / sizeof(int);

    int evenCount = 0;
    int oddCount = 0;

    for (i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[evenCount] = arr[i];
            evenCount++;
        }
        else if (arr[i] % 2 != 0)
        {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }
    printf("\n");

    printf("The Even array is : ");
    for (i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    printf("The odd array is : ");
    for (i = 0; i < oddCount; i++)
    {
        printf("%d ", oddArr[i]);
    }
    printf("\n");
}
