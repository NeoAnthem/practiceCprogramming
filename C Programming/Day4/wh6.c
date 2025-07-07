// WAP to print first n natural numbers in reverse order


#include<stdio.h>

int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    while (n>=1)
    {
        printf("%d\n",n);

        n--;
    }
}