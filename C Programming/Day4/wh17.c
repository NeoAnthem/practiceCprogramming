// WAP to print cube of 1 to n

#include<stdio.h>

int main() {
    int n,cube;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int i=1;

    while (i<=n)
    {
        cube = i*i*i;
        printf("The cube of %d is : %d\n",i,cube);
        i++;
    }
    
}