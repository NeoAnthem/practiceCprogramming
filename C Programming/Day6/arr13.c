// WAP to take size and element from user in array and display array

#include <stdio.h>
int main()
{
    int n;       // GV 159856985514545
    int arr[20]; // array is static 20 is max size
    int i;
    printf("Enter size maximum is 20: ");
    scanf("%d", &n); // 4
    if (n > 20)
    {
        printf("Since you enter out of range size we are stting it to 20\n");
        n = 20;
    }
    // Take input
    for (i = 0; i < n; i++)
    {
        printf("Enter element at position %d: ", i);
        scanf("%d", &arr[i]);
    }

    // DISPLAY
    printf("Elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    // Display in reverse order
    printf("\n");
    printf("Reversed Array : \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}