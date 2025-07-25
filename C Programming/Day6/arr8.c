// WAP to reverse a given array inplace {2, 5, 10, -5, 6} Output->{6, -5, 10, 5, 2}

#include <stdio.h>
int main()
{
    int arr[] = {2, 5, 10, -5, 6};
    int length, i, temp;

    length = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < length / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }

    printf("The reversed array is : {");
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}