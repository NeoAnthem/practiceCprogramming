// WAP to print square of first n natural numbers

#include<stdio.h>

int main() {
    
    int i = 1;
    int square, n;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (i <= n)
    {
        square = i*i;
        printf("The square of %d is %d\n",i,square);
        i++;
    } 
}