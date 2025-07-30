// WAP to check whether a number is divisible by 3 and 5 both ot not

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("The number %d is divisible by 3 and 5 both", n);
    }
    else
    {
        printf("The number %d is NOT divisible by 3 and 5 both", n);
    }
}