/* WAP to check whether a number is
    a. divisible by 3 and 5 both ot not
    b. divisible by 3 only
    c. divisible by 5 only
    d. not dvisible by any
*/
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
    else if (n % 3 == 0 && n % 5 != 0)
    {
        printf("The number %d is divisible by 3 only", n);
    }
    else if (n % 5 == 0 && n % 3 != 0)
    {
        printf("The number %d is divisible by 5 only", n);
    }
    else
    {
        printf("The number %d is NOT divisible by any", n);
    }
}