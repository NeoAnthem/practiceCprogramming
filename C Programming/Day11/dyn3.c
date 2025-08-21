// Dynamic Memory Allocation with malloc()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size); // 5

    // int *ptr = (int *)malloc(size * sizeof(int));

    int *ptr = (int *)calloc(size, sizeof(int));

    // Take input in dynamic array
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at position %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("Elements from dynamic arrays are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    // Now I want to upgrade my size
    int newSize;
    printf("\nEarlier size is %d elements, Enter new size: ", size);
    scanf("%d", &newSize);
    int *newPtr = (int *)realloc(ptr, newSize);

    // Inputof remaining elements
    for (int i = size; i < newSize; i++)
    {
        printf("Enter element at position %d: ", i + 1);
        scanf("%d", newPtr + i);
    }
    // Display complete array from start to new size
    printf("Elements from dynamic arrays with new sizes are:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d\t", *(newPtr + i));
    }
    free(ptr);
    free(newPtr);
}

