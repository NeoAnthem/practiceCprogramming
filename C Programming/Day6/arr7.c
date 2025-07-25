// Find maximum and minimum element from the given array :
// {20, 80, -5, 10, 3, 6, -25, 100, -30}

#include <stdio.h>
int main()
{
    int arr[] = {20, 80, -5, 10, 3, 6, -25, 100, -30};
    int i, max, min, length;
    length = sizeof(arr) / sizeof(arr[0]);

    max = arr[0];
    min = arr[0];

    for (i = 1; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            min = arr[i];
        }
    }
    printf("The maximum element of array is : %d\n", max);
    printf("The minimum element of array is : %d\n", min);
}
