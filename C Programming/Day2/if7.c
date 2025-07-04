// WAP to check the greatest of two numbers or if both are equal

#include <stdio.h>
int main() {
    
    int num1,num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The greatest number is: %d", num1);
    } else if(num1 < num2) {
        printf("The greatest number is: %d", num2);
    } else {
        printf("Both numbers are equal: %d", num1);
    }
}


