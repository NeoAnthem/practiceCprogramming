// WAP to print sum of 1 to n

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i = 1;
    int sum =0;

    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of numbers from 1 to %d is : %d\n",n,sum);
}