// Type casting
// One data type to another data type
/*
1. Implicit -> Automatically handelled by compiler
2. Explicit
*/

#include <stdio.h>
int main()
{
    char alp = 'H';
    int num = alp;

    printf("Value of int is %d, Value of Character is %c\n", num, alp);
    int num1 = 5, num2 = 2;
    int result = num1 / num2;

    printf("Division of %d, %d = %d\n", num1, num2, result);

    double division = (double)num1 / num2;
    printf("Decimal Division of %d, %d = %lf\n", num1, num2, division);

    return 0;
}