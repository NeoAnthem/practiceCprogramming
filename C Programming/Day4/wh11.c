#include<stdio.h>

int main() {
    int i = 5;
    int factorial = 1;
    while (i>=1)
    {
        factorial= factorial * i;
        i--;
    }
    printf("The factorial of 5 is : %d\n", factorial);
}