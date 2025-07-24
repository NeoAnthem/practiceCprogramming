// WAP to display even and odd elements sum of a given array
// {5, 9, 6, 4, 2, 1, 3, 7, 8, 10}

#include <stdio.h>
int main()
{
    int arr[] = {5, 9, 6, 4, 2, 1, 3, 7, 8, 10};
    int i, length, sumEven = 0, sumOdd = 0;

    length = sizeof(arr) / sizeof(arr[i]);

    for (i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
    printf("Sum of Even Elements : %d\n", sumEven);
    printf("Sum of Odd Elements : %d\n", sumOdd);
}