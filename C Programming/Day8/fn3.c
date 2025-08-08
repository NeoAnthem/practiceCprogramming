// Without return type void
// with parameters (params)

#include <stdio.h>
// Fn Definition (parameters)
void multiplication(int n1, int n2)
{
    int result = n1 * n2;
    printf("%d * %d = %d\n", n1, n2, result);
}
int main()
{
    // call (value) -> arguments
    multiplication(6, 5);
    multiplication(10, 6);
}