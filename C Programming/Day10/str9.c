// String Functions
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I Love Programming";

    printf("String = %s\n", str);
    strupr(str); // actual string is modifying
    printf("String in upper case = %s\n", str);
    strlwr(str);
    printf("String in lower case = %s\n", str);

    char str1[] = "Hello ";
    char str2[] = "Sir";

    printf("Before Concat \n");
    printf("Str 1 = %s\n", str1);
    printf("Str 2 = %s\n", str2);
    // Join 2 strings -> concat -> Hello Sir
    strcat(str1, str2);
    printf("After Concat \n");
    printf("Str 1 = %s\n", str1); // Hello Sir
    printf("Str 2 = %s\n", str2);
}