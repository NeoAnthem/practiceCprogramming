// Check whether a string is a palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HelloolleH";
    int i, length, isPalindrome = 1;

    length = strlen(str);
    printf("String : %s\n", str);
    // Check palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1)
    {
        printf("The string is a Palindrome\n");
    }
    else
    {
        printf("The string is NOT a Palindrome\n");
    }
}
