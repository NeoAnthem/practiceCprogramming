// CREATE 2 function
// In fn 1 take 2 number input and display subtraction of both numbers -> 5,3 = 2
// In fn 2 pass same 2 numbers and calculate power -> 5 power 3 -> 125

// in main call only first function

#include <stdio.h>

void power(int a, int b)
{
    int power = 1;
    for (int i = 0; i < b; i++)
    {
        power *= a;
    }
    printf("The power of %d raised to %d is : %d\n", a, b, power);
    printf("\n");
}

void subtraction(int a, int b)
{
    int sub = a - b;
    printf("The subtraction of %d and %d is : %d\n", a, b, sub);
    printf("\n");

    power(a, b);
}

int main()
{
    subtraction(5, 3);
    subtraction(7, 4);
    subtraction(3, 5);
}
