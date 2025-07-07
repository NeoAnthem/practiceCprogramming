// WAP to print n natural numbers

#include<stdio.h>

int main() {
    int i = 1;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    while (i <= n )
    {
        printf("%d\n",i);
        i++;
    }
}

