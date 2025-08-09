// 2-D Array or Multi-Dimensional Array
#include <stdio.h>
int main()
{
    int marks[4][3] = {
        {65, 75, 80},
        {30, 35, 65},
        {20, 25, 60},
        {50, 80, 60}};

    printf("Value at 0,0 = %d\n", marks[0][0]);
    printf("Value at 0,1 = %d\n", marks[0][1]);
    printf("Value at 0,2 = %d\n", marks[0][2]);
    printf("\n");
    printf("Value at 1,0 = %d\n", marks[1][0]);
    printf("Value at 1,1 = %d\n", marks[1][1]);
    printf("Value at 1,2 = %d\n", marks[1][2]);
    printf("\n");
    printf("Value at 2,0 = %d\n", marks[2][0]);
    printf("Value at 2,1 = %d\n", marks[2][1]);
    printf("Value at 2,2 = %d\n", marks[2][2]);
    printf("\n");
    printf("Value at 3,0 = %d\n", marks[3][0]);
    printf("Value at 3,1 = %d\n", marks[3][1]);
    printf("Value at 3,2 = %d\n", marks[3][2]);
}
