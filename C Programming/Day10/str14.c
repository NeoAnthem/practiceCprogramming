// Find the length of a string without using strlen()

#include <stdio.h>
int main()
{
    int i, length = 0;
    char str1[] = "SPRK";

    for (i = 0; str1[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length of string : %d\n", length);
}