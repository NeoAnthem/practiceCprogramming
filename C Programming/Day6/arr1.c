#include <stdio.h>
int main()
{
    int marks[5];
    marks[0] = 5;
    marks[1] = 3;
    marks[2] = 7;
    marks[3] = 9;
    marks[4] = 3;

    printf("Element at position 0 is = %d\n", marks[0]);
    printf("Element at position 1 is = %d\n", marks[1]);
    printf("Element at position 2 is = %d\n", marks[2]);
    printf("Element at position 3 is = %d\n", marks[3]);
    printf("Element at position 4 is = %d\n", marks[4]);

    printf("Address of 1st element in array is %d\n", &marks[0]);
    printf("Address of 2nd element in array is %d\n", &marks[1]);
    printf("Address of 3rd element in array is %d\n", &marks[2]);
    printf("Address of 4th element in array is %d\n", &marks[3]);
    printf("Address of 5th element in array is %d\n", &marks[4]);
}
