// WAR to print value and address of int and char variable

#include <stdio.h>
int main() {

    int age = 35;
    char alphabet = 'H';

    printf("The value of int age is %d\n", age);
    printf("The address of int age is %d\n", &age);
    printf("The value of char alphabet is %c\n", alphabet);
    printf("The address of char alphabet is %d\n", &alphabet);
    return 0;
}
