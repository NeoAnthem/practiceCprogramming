// Check whether the given array is sorted or not take input in array from user
// input 1: 1,3,9,12,20
// size of array is fixed = 5
// ouput - Given array 1 3 9 12 20 is sorted array

// input 2: 2,20,6,8,-5
// ouput - Given array 2,20,6,8,-5 is not sorted array

#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    int length = sizeof(arr) / sizeof(int);
    int isSorted = 1;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the element at %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    printf("Array : ");
    for (i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (i = 0; i < length - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = 0;
            break;
        }
    }

    printf("\n");

    if (isSorted == 1)
    {
        printf("The array is sorted");
    }
    else
    {
        printf("Array is not sorted");
    }
}