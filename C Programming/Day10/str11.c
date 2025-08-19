// COmpare -> 2 strings

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "hello";

    // Compare 2 strings lexicographically
    int result = strcmp(str1, str2);
    printf("Result = %d\n", result);
    if (result == 0)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Both strings are not same\n");
    }
}