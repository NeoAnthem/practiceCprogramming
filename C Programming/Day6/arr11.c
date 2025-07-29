// WAP to sort given array using bubble sort in descending order
// {8, 50, 6, -9, 25}

#include <stdio.h>
int main()
{
    int arr[] = {8, 50, 6, -9, 25};

    int i, j;
    int length = sizeof(arr) / sizeof(int);
    int numOfPasses = length - 1;

    printf("Array before sorting: \n");
    for (i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // Sorting Using Bubble Sort
    // NUMBER OF PASSES
    for (i = 0; i < length; i++)
    {
        // In each pass we have to compare current element from next element
        // i = 0, 7 - 0 - 1 = 6 ->j = 0 1 2 3 4 5
        for (j = 0; j < length - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                // SWAP
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print array after sorting
    printf("Array after sorting: \n");
    for (i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
}
