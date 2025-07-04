// WAP to accept number based on criteria display message
// if num is divisible by 3 and 5 then print FIZZBUZZ
// if num is divisible by 3 only then print FIZZ
// if num is divisible by only 5 then print BUZZ
// if num is not divisible by any number then print number

#include <stdio.h>

int main() {

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("FIZZBUZZ");
    } else if (num % 3 == 0) {
        printf("FIZZ");
    } else if (num % 5 == 0) {
        printf("BUZZ");
    } else {
        printf("%d",num);
    }
}