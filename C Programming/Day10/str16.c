// reverse a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "hello";
    printf("String : %s\n", str);
    strrev(str);
    printf("Reversed String : %s\n", str);
}