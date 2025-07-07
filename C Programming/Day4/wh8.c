// WAP to print only even numbers from 1 to n
#include<stdio.h>

int main() {
    int n;
    int i =1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    
    while (i<=n)
    {
        if (i%2 == 0)
        {
            printf("%d\n",i);  
        }
        i++;
     
    }
    
}