// String using string literal -> ""
// No need for \0

#include <stdio.h>
int main()
{
    char str[] = "SPRK Technologies";
    printf("Size of str is %d\n", sizeof(str));
    printf("%s", str);
}