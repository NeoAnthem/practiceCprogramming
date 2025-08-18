// Take input with spaces
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10];
    int age;
    char gender[10];

    printf("Enter name : ");
    gets(name);

    printf("Enter gender : ");
    scanf("%s", &gender);

    printf("Enter age : ");
    scanf("%d", &age);

    printf("Length of name is =  %d\n", strlen(name));
    printf("Full name is = %s\n", name);
    printf("Age is %d\n", age);
    printf("Gender is %s\n", gender);
}