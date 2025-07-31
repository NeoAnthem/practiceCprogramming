// WAP to check whether the 2 numbers are equal or greatest of 2 numbers

#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter number 1 : ");
    scanf("%d", &num1);

    printf("Enter number 2 : ");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("Both are equal");
    }
    else if (num1 > num2)
    {
        printf("num1 is greater");
    }
    else
    {
        printf("num2 is greater");
    }
}
