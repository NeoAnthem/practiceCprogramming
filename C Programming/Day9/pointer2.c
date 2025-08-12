// Pointer to a variable
#include <stdio.h>
int main()
{
    int number = 5018;  // 1000*
    int *ptr = &number; // 1000*
    printf("Address of number is = %d\n", &number);
    printf("Value of ptr is = %d\n", ptr);

    printf("Value of number using pointer = %d\n", *ptr);
    *ptr = 52;
    printf("Value of number using pointer after modification = %d\n", *ptr);

    int x = -999;
    ptr = &x;
    printf("Value of x using pointer = %d\n", *ptr);
    *ptr = 12;
    printf("Value of x using pointer after modification = %d\n", *ptr);
}