// Take input in arrays of size 5:
// display in normal order as well as in reverse order

#include <stdio.h>
int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Element at index %d is : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements in Array are :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("Reversed Array is : \n");
    for (int i = 5 - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}