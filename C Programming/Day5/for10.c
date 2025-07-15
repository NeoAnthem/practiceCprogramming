// WAP to print cube of 1 to 10

#include <stdio.h>

int main()
{
    int i, cube;
    for (i = 1; i <= 9; i++)
    {
        cube = i * i * i;
        printf("The cube of %d is : %d\n", i, cube);
    }
}