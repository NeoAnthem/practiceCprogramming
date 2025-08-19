// Copy
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[25];
    printf("Before copy\n");
    printf("Str1 = %s\n", str1);
    printf("Str2 = %s\n", str2);

    strcpy(str2, str1);

    printf("\nAfter copy\n");
    printf("Str1 = %s\n", str1);
    printf("Str2 = %s\n", str2);
}