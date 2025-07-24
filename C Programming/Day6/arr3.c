#include <stdio.h>
int main()
{

    int arr[] = {5, 2, 7, 9, 3};
    // Start index = 0, Stop index = 5-1 = 4 , Gap = 1

    // Print Elements Using Loops
    printf("Elements are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element at position %d is %d\n", i, arr[i]);
    }
}