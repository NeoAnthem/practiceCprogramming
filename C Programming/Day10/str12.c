// COmpare -> 2 strings

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "sprk";
    char str2[] = "sHub";

    // Compare 2 strings lexicographically
    int result = strcmp(str1, str2);
    printf("Result = %d\n", result);
    if (result == 0)
    {
        printf("Both strings are same\n");
        printf("Str1 = %s\n", str1);
    }
    else
    {
        printf("Both strings are not same\n");
        if (result > 0)
        {
            printf("String 1 is greater than string 2 lexicographically\n");
        }
        else
        {
            printf("String 1 is less than string 2 lexicographically\n");
        }
        printf("Str1 = %s\n", str1);
        printf("Str2 = %s\n", str2);
    }
}