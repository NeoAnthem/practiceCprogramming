// WAP to check whether the number is zero or non zero

#include <stdio.h>
int main() {

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The number is zero\n");
    } else {
        printf("The number is non-zero\n");
    }
}
