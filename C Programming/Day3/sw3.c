// SIMPLE CALCULATOR -> 2 number -> 1 operator [+, -, *, /]

#include <stdio.h>

int main()
{
    int n1, n2;
    char operator;
    printf("Select Operator from [+, -, *, /]: ");
    scanf("%c", &operator);
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    int result;

    switch (operator)
    {
    case '+':
        result = n1 + n2;
        printf("%d + %d = %d\n", n1, n2, result);
        break;
    case '-':
        result = n1 - n2;
        printf("%d - %d = %d\n", n1, n2, result);
        break;
    case '*':
        result = n1 * n2;
        printf("%d * %d = %d\n", n1, n2, result);
        break;
    case '/':
        if (n2 == 0)
        {
            printf("Cannot Divide By Zero\n");
        }
        else
        {

            result = n1 / n2;
            printf("%d / %d = %d\n", n1, n2, result);
        }
        break;
    default:
        printf("Please select from above range\n");
    }
}