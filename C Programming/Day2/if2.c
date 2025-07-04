// WAP to accept age and check its its suitable for driving license or not

#include <stdio.h>
int main() {

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible for a driving license.\n");
    } else {
        printf("You are not eligible for a driving license.\n");
    }
}
