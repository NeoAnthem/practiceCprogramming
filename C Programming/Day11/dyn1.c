// Dynamic Memory Allocation with malloc()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size); // 5

    int *ptr = (int *)malloc(size * sizeof(int));

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
    free(ptr);
}