// Functions

#include <stdio.h>
void incrementBy5(int num)
{
    printf("Value of number before increment = %d\n", num);
    num = num + 5;
    printf("Value of number after increment = %d\n", num);
}
int main()
{
    int num = 52;
    printf("Value of num before function call = %d\n", num);
    incrementBy5(num);
    printf("Value of num after function call = %d\n", num);
}