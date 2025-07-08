// WAP to print factorial of n

#include<stdio.h>

int main() {
    int i;
    int factorial = 1;
    int n;

    printf("Enter the value of n : ");
    scanf("%d",&n);
    i =n;
    while (i>=1)
    {
        factorial = factorial * i;
        i--;
    }
    printf("The factorial of %d is : %d\n", n, factorial);
}