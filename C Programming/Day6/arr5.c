// WAP to accept element in array of size 5 and print that array
#include <stdio.h>
int main()
{
    int arr[5], i;
    printf("Enter 5 elements : \n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter Element at Index %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are : \n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}