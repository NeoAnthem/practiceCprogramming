// Check whether a string (user input) is a palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if fgets adds it
    length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

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
