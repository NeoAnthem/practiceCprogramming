// Find the length of a string from user input without using strlen()

#include <stdio.h>
int main()
{
    int i, length = 0;
    char str[100];

    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    if (str[length - 1] == '\n')
    {
        length--;
    }
    printf("Length of string : %d\n", length);
}