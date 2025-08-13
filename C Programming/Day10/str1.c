#include <stdio.h>
int main()
{
    char name[] = {'S', 'P', 'R', 'K', '\0'};
    printf("Size of name is %d\n", sizeof(name));
    printf("Name is %s\n", name);
}