// WAP a program to check whether the last digit of a number is divisible  by 2 or not

#include <stdio.h>

int main() {
    int num, lastDigit;

    printf("Enter a number : ");
    scanf("%d",&num);

    lastDigit = num % 10;

    if (lastDigit % 2 == 0) {
        printf("The last digit of %d that is %d is divisible by 2", num, lastDigit);
    } else {
        printf("The last digit of %d that is %d is not divisible by 2", num, lastDigit);  
    }
    
}
