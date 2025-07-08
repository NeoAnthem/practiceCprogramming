// WAP a program to print sum of numbers from 1 to 10

#include<stdio.h>
int main() {
    int i = 1;
    int sum = 0;

    while (i<=10)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of numbers from 1 to 10 is : %d\n", sum);
}