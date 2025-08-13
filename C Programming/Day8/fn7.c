#include <stdio.h>
void demo()
{
    static int num = 5;
    printf("Value of num is : %d\n", num);
    num++;
}
int main()
{
    demo();
    demo();
    demo();
}